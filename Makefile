# Makefile for weather station with Nucleo H745ZI-Q

DATE_FORMAT = %a %d %b %Y
TIME_FORMAT = %H:%M:%S

TIMESTAMP = ${shell date "+${DATE_FORMAT} ${TIME_FORMAT}"}

# Makefile variables
VERBOSE =
VERBOSE_ECHO = @

# Shell commands
RM = rm -rf
MKDIR = mkdir -p
MV = mv

PROG_LANG ?= C

# SOurce files
SRC_DIR = src
C_EXT = c
AS_EXT = s

# Header files
INCLUDE_DIR = include
HEADER_EXT = h

# Object files
OBJ_DIR ?= obj
OBJ_EXT = o

# Dependency directory
DEP_DIR ?= dep
DEP_EXT = dep

# Directory containing binary files
BIN_DIR ?= bin

# Directory containing scripts
SCRIPT_DIR ?= script

# Coverage directory
COVERAGE_DIR ?= coverage

# Profile directory
PROFILE_DIR ?= profile

TOOLCHAIN ?= arm-none-eabi
CC = $(TOOLCHAIN)-gcc
GDB = $(TOOLCHAIN)-gdb
LD = $(TOOLCHAIN)-ld
AS = $(TOOLCHAIN)-as
OBJCOPY = $(TOOLCHAIN)-objcopy
COV = $(TOOLCHAIN)-gcov
PROFILER = $(TOOLCHAIN)-gprof
OBJDUMP = $(TOOLCHAIN)-objdump
OBJSIZE = $(TOOLCHAIN)-size
PROGRAMMER = STM32_Programmer_CLI
STLINKGDBSERVER = ST-LINK_gdbserver

# Programmer configuration
PROGRAM_ADDRESS ?= 0x8000000
PORT = swd
SECTOR ?= all
PROGRAMMER_VERBOSITY ?= 3
FLASHING_STATUS ?= --optionbytes displ -coreReg -score
CONNECTION_MODE ?= NORMAL # Valid values are: UR HOTPLUG and NORMAL
RESET_MODE ?= SWrst # Valid values are: SWrst HWrst and Crst

# ST Link GDB server configuration
GDBSERVER_LOGLEVEL ?= 31
GDBSERVER_VERBOSITY ?= --verbose
PROGRAMMER_LOCATION ?= /opt/STMicroelectronics/STM32CubeProgrammer/bin
DEBUG_MODE = --swd
GDBSERVER_TCPPORT ?= 61234
GDBSERVER_OPTIONS ?= --persistent --verify --cpu-clock 8000000 --swo-clock-div 4000

ifeq ($(COVERAGE), 1)
  COVFLAGS = -ftest-coverage -fprofile-arcs -fprofile-abs-path
  COVLIBS = gcov
else
  COVFLAGS =
  COVLIBS =
endif

ifeq ($(PROFILER), 1)
  PROFILERFLAGS = -pg
else
  PROFILERFLAGS =
endif

# Compile flags
CFLAGS = -std=gnu99 -g3 -O0 -Wall -fsingle-precision-constant -Wdouble-promotion
ARMFLAGS = -mlittle-endian -mthumb -mthumb-interwork -mcpu=cortex-m7
# data-sections: each data item is put into its own section - this prevents linker optimizations
# function-sections: each function is put into its own section - this prevents linker optimizations
# stack-usage: outputs stack usage informations
ADDITIONALFLAGS = --specs=nano.specs -fstack-usage -fdata-sections -ffunction-sections

# Linker flags
CLDFLAGS = -nostdlib -nostartfiles
LIB_LIST = $(COVLIBS)
LDFLAGS := $(foreach LIB, ${LIB_LIST}, -l${LIB}) $(CLDFLAGS)

SPECFILE_DIR ?= $(SCRIPT_DIR)/linker
SPECFILE ?= CortexM7.ld
SPECFILEPATH ?= $(SPECFILE_DIR)/$(SPECFILE)

GDBCOMMANDFILE_DIR ?= $(SCRIPT_DIR)/gdb
GDBCOMMANDFILE ?= command.gdb
GDBCOMMANDFILEPATH ?= $(GDBCOMMANDFILE_DIR)/$(GDBCOMMANDFILE)

# Coverage
COVSEARCHDIR := $(foreach DIR, ${OBJS_DIR}, --object-directory ${DIR})
COVOPTS = --all-blocks --branch-probabilities --function-summaries --demangled-names --unconditional-branches
COVEXTRAOPTS ?=

# Profiler
OUTPROFOPTS = --annotated-source --exec-count --graph --separate-files
#ANALYSISPROFOPTS = --line --static-call-graph --display-unused-functions
# --line causes failure of gprof with the following error: somebody miscounted: ltab.len=X instead of Y
ANALYSISPROFOPTS = --static-call-graph --display-unused-functions
MISCPROFOPTS =
PROFEXTRAOPTS ?=

# Dependency
# -MP workaround for make errors when an header file is removed (Add phony target for each dependency other the main file)
# -MMD Dependency file listing only header files
# -MF specifies the dependency file
DEPENDFLAG = -MT $@ -MP -MMD -MF $(DEPFILE)
DEPFILE = $(patsubst %.$(OBJ_EXT),$(DEP_DIR)/%.$(DEP_EXT),$(subst $(SRC_DIR)/,, $(subst $(OBJ_DIR)/,,$@)))

PROJECT_NAME = weather_station
BIN = $(BIN_DIR)/$(PROJECT_NAME).bin
ELF = $(OBJ_DIR)/$(PROJECT_NAME).elf

# source files

SRC_DIR = src
SRC_DIR_LIST = $(SRC_DIR)
SRC_PATH := $(foreach DIR, ${SRC_DIR_LIST}, $(DIR)/)
CSRCS := $(wildcard $(foreach DIR, $(SRC_PATH), $(DIR)*.$(C_EXT)))
ASSRCS := $(wildcard $(foreach DIR, $(SRC_PATH), $(DIR)*.$(AS_EXT)))

# Object files
OBJ_DIR = obj
COBJS = $(patsubst $(SRC_DIR)/%.$(C_EXT),$(OBJ_DIR)/%.$(C_EXT).$(OBJ_EXT), $(CSRCS))
ASOBJS = $(patsubst $(SRC_DIR)/%.$(AS_EXT),$(OBJ_DIR)/%.$(AS_EXT).$(OBJ_EXT), $(ASSRCS))
OBJS = $(COBJS) \
       $(ASOBJS)

DEPS := $(patsubst %.$(OBJ_EXT), $(DEP_DIR)/%.$(DEP_EXT), $(subst $(OBJ_DIR)/,,$(OBJS)))

# Header files
INCLUDE_DIR = include
INCLUDE_PATHS := $(INCLUDE_DIR)
INCLUDE_HEADERS := $(foreach INCHEADER, $(INCLUDE_PATHS), -I$(INCHEADER))
INCLUDES = $(INCLUDE_HEADERS)

INCLUDE_COMPONENT_DIR = $(foreach DIR, ${INCLUDE_DIR}, $(sort $(dir $(wildcard $(DIR)/*/))))
INCLUDE_DIR_LIST = $(INCLUDE_COMPONENT_DIR)
INCLUDE_PATH := $(foreach DIR, ${INCLUDE_DIR_LIST}, $(DIR))
HEADERS := $(wildcard $(foreach DIR, $(INCLUDE_PATH), $(DIR)*.$(HEADER_EXT)))

# Search of prerequisite files
VPATH = $(SRC_PATH) \
        $(INCLUDE_PATH)

-include $(wildcard $(DEPS))

$(BIN) : $(ELF)
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Creating binary file $@ from elf file $^"
	$(MKDIR) $(@D)
	$(OBJCOPY) -O binary $^ $@

$(ELF) : $(OBJS)
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Creating elf file $@ from object files $^"
	$(MKDIR) $(@D)
	$(LD) -T$(SPECFILEPATH)  -o $@ $^

$(OBJ_DIR)/%.$(AS_EXT).$(OBJ_EXT) : $(SRC_DIR)/%.$(AS_EXT)
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Compiling $(<F) and creating object $@"
	$(MKDIR) $(@D)
	$(AS) $(ARMFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/%.$(C_EXT).$(OBJ_EXT) : $(SRC_DIR)/%.$(C_EXT)
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Compiling $(<F) and creating object $@"
	$(MKDIR) $(dir $(DEPFILE))
	$(MKDIR) $(@D)
	$(CC) $(DEPENDFLAG) $(CFLAGS) $(ARMFLAGS) $(ADDITIONALFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

coverage :
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Generating coverage report with $(COV)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Coverage options $(COVOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Coverage extra options $(COVEXTRAOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Coverage search directory options $(COVSEARCHDIR)"
	$(MKDIR) $(COVERAGE_DIR)
	$(COV) $(COVOPTS) $(COVEXTRAOPTS) $(COVSEARCHDIR) $(CSRCS)
	$(MV) *$(COV_FILES)* $(COVERAGE_DIR)

profiling :
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Generating profiling report with $(PROFILER)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Output profiler options $(OUTPROFOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Analysis profiler options $(ANALYSISPROFOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Miscellaneous profiler options $(MISCPROFOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Profiler extra options $(PROFEXTRAOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Profiler search directory options $(PROFSEARCHDIR)"
	$(MKDIR) $(PROFILE_DIR)
	$(PROFILER) $(OUTPROFOPTS) $(INCLUDE_HEADERS) $(ANALYSISPROFOPTS) $(MISCPROFOPTS) $(PROFEXTRAOPTS) $(ELF) $(PROFILE_DATA) > $(PROFILE_DIR)/$(PROFILERLOGFILENAME)
	$(MV) *$(ANNSRC_EXT) $(PROFILE_DIR)

# Work around to force generating the file
$(DEPS) :

erase_flash :
	$(PROGRAMMER) --connect port=$(PORT) --erase $(SECTOR) --verbosity $(PROGRAMMER_VERBOSITY)

program : $(ELF)
	$(PROGRAMMER) --connect port=$(PORT) mode=$(CONNECTION_MODE) reset=$(RESET_MODE) --write $(ELF) $(PROGRAM_ADDRESS) $(FLASHING_STATUS) --verbosity $(PROGRAMMER_VERBOSITY)

gdbserver :
	$(STLINKGDBSERVER) --stm32cubeprogrammer-path $(PROGRAMMER_LOCATION) $(DEBUG_MODE) --log-level $(GDBSERVER_LOGLEVEL) $(GDBSERVER_VERBOSITY) --port-number $(GDBSERVER_TCPPORT) $(GDBSERVER_OPTIONS)

gdb : $(ELF)
	$(GDB) --command=$(GDBCOMMANDFILEPATH) $(ELF)

compile : $(BIN)
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Creating binary file $^"

all : program

clean :
	rm -rf $(OBJ_DIR)
	rm -rf $(DEP_DIR)
	rm -rf $(BIN_DIR)
	rm -rf $(COVERAGE_DIR)
	rm -rf $(PROFILE_DIR)

debug :
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Language: $(PROG_LANG)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Compiler: $(CC)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Debugger: $(GDB)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Linker: $(LD)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Object copy: $(OBJCOPY)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Coverage tool: $(COV)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Profiler tool: $(PROFILER)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Object dump: $(OBJDUMP)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Object size: $(OBJSIZE)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Programmer: $(PROGRAMMER)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] ST Link GDB server: $(STLINKGDBSERVER)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Executables:"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> binary: $(BIN)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Compiler options:"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> $(PROG_LANG) flags: $(CFLAGS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> ARM flags: $(ARMFLAGS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Additional GCC flags: $(ADDITIONALFLAGS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Linked flags: $(LDFLAGS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Coverage compile flags: $(COVFLAGS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Profiler flags: $(PROFILERFLAGS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Coverage libraries: $(COVLIBS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Compiler options:"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Coverage options: $(COVOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Coverage extra options: $(COVEXTRAOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Profiler options: $(PROFOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Profiler extra options: $(PROFEXTRAOPTS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Files lists:"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Assembly Source files: $(notdir $(ASSRCS))"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> C Source files: $(notdir $(CSRCS))"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Header files: $(notdir $(HEADERS))"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Dependency files: $(DEPS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Object files: $(notdir $(OBJS))"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Binary file: $(notdir $(BIN))"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] Directories lists:"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Source directories: $(SRC_PATH)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Include directories: $(INCLUDE_PATHS)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Exeutable directory: $(BIN_DIR)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Coverage directory: $(COVERAGE_DIR)"
	$(VERBOSE_ECHO)echo "[${TIMESTAMP}] --> Profiling directory: $(PROFILE_DIR)"
