/**
 * @copyright
 * @file CortexM4.ld
 * @author Andrea Gianarda
 * @date 02nd of March 2021
 * @brief Linker script of Cortex M4
 *        Set memory map boundaries according to datasheet (RM03999)
 *        Set heap size as well as stack size and location
 */

/* Choose entry point of the program, i.e. the symbol towards the first instruction in the program to execute after a reset event */
ENTRY(rst_event_handler)

/* minimum heap size */
_min_heap_size = 0x400;

/* minimum stack size */
_min_stack_size = 0x200;

/* highest address of the stack pointer (highest address of SRAM on domain 2) */
_max_stack_address = 0x10048000;

/* Define Cortex M4 memory map */
MEMORY {
	FLASH		(rx)	: ORIGIN = 0x08100000,	LENGTH = 1024K	/* Address range 0x08100000 - 0x081FFFFF */
	AHB_RAM_D2	(wrx)	: ORIGIN = 0x24000000,	LENGTH = 288K	/* Address range 0x10000000 - 0x10047FFF. Internally, this region is divided into 3 regions:
									   - 0x10000000 - 0x1001FFFF (size 128k)
									   - 0x10020000 - 0x1003FFFF (size 128k)
									   - 0x10040000 - 0x10047FFF (size 128k)
									 */
}

/* Define sections */
SECTIONS {

	/* Return the absolute address of section .text */
	_astext = LOADADDR(.text);	/* Global symbol to the start address of the code section */

	/* Put program code and ARM glue code into FLASH */
	.text : {
		. = ALIGN(4);
		_stext = .;	/* Global symbol to the start address of the code */
		*(.text)	/* code (.text section) */
		*(.text*)	/* code (.text* sections) */
		*(.glue_7t)	/* glue code for thumb ARM mode */
		*(.glue_7)	/* glue code for 32-bit ARM mode */

		/* Sections to keep even thiugh they are not references anywhere */
		KEEP (*(.init))	/* Initialization of C++ static objects */
		KEEP (*(.fini))	/* Destruction of C++ static objects */

		. = ALIGN(4);
		_etext = .;	/* Global symbol to the end of the code */
	} > FLASH

	/* Put constant data into FLASH */
	.rodata : {
		. = ALIGN(4);
		_srodata = .;	/* Global symbol to the start address of the constant data */
		*(.rodata)	/* constant data such as constant strings or constant variables (.rodata section) */
		*(.rodata*)	/* constant data such as constant strings or constant variables (.rodata* sections) */
		. = ALIGN(4);
		_erodata = .;	/* Global symbol to the end of the constant data */
	} > FLASH

	/* C++ only sections */
	/* Put exception tables into FLASH */
	.ARM.extab : {
		*(.ARM.extab*)	/* constant data such as constant strings or constant variables (.ARM.extab* sections) */
	} > FLASH

	/* Put exception index into FLASH */
	.ARM.exidx : {
		_sexidx = .;	/* Global symbol to the start address of the exception index */
		*(.ARM.exidx*)	/* constant data such as constant strings or constant variables (.ARM.exidx* sections) */
		_eexidx = .;	/* Global symbol to the end of the exception index */
	} > FLASH

	/* Put table of functions to call before executing constructors into FLASH */
	.preinit_array : {
		PROVIDE_HIDDEN(_spreinitarray = .);	/* Define _spreinitarray only if it is referenced and do not export it */
		KEEP(*(.preinit_array))			/* Table of function to call before executing constructors (.preinit_array section) */
		KEEP(*(.preinit_array*))		/* Table of function to call before executing constructors (.preinit_array* section) */
		PROVIDE_HIDDEN(_epreinitarray = .);	/* Define _epreinitarray only if it is referenced and do not export it */
	} > FLASH

	/* Put table of functions for constructors of static objects into FLASH */
	.init_array : {
		PROVIDE_HIDDEN(_sinitarray = .);		/* Define _sinitarray only if it is referenced and do not export it */
		KEEP(*(SORT_BY_INIT_PRIORITY(.init_array*)))	/* Table of pointers to constructors of static objects (.init_array* section). It is sorted by init_priority to list them in order of creation */
		KEEP(*(.init_array*))				/* Table of pointers to constructors of static objects (.init_array* section) */
		PROVIDE_HIDDEN(_einitarray = .);		/* Define _einitarray only if it is referenced and do not export it */
	} > FLASH

	/* Put table of functions for destructors of static objects into FLASH */
	.fini_array : {
		PROVIDE_HIDDEN(_sfiniarray = .);		/* Define _sfiniarray only if it is referenced and do not export it */
		KEEP(*(SORT_BY_INIT_PRIORITY(.fini_array*)))	/* Table of pointers to destructors of static objects (.fini_array* section). It is sorted by init_priority to list them in order of destruction */
		KEEP(*(.fini_array*))				/* Table of pointers to destructors of static objects (.fini_array* section) */
		PROVIDE_HIDDEN(_efiniarray = .);		/* Define _efiniarray only if it is referenced and do not export it */
	} > FLASH

	/* Return the absolute address of section .data */
	_asdata = LOADADDR(.data);	/* Global symbol to the start address of the data section (Address in RAM) */

	/* Put the data section into the RAM. The data is initially stored into FLASH memory and copied to the RAM at startup */
	/* The FLASH is therefore the local address and the RAM is the virtual address */
	.data : {
		. = ALIGN(4);
		_sdata = .;	/* Global symbol to the start address of data section at startup (Address in FLASH) */
		*(.data)	/* code (.text section) */
		*(.data*)	/* code (.text* sections) */

		. = ALIGN(4);
		_edata = .;	/* Global symbol to the end of the data section at startup (Address in FLASH)  */
	} > AHB_RAM_D2 AT > FLASH

	/* Put the uninitialized data section into the RAM. It will be initialized to 0 at startup */
	.bss : {
		. = ALIGN(4);
		_sbss = .;		/* Global symbol to the start address of uninitialized data section */
		__start_bss__ = _sbss;	/* Global symbol to the start address of the uninitialized data section  */
		*(.bss)			/* code (.text section) */
		*(.bss*)		/* code (.text* sections) */

		. = ALIGN(4);
		_ebss = .;		/* Global symbol to the end of the uninitialized data section  */
		__end_bss__ = _ebss;	/* Global symbol to the end of the uninitialized data section  */
	} > AHB_RAM_D2

	/* Check that RAM is big enough to fit stack and heap */
	.heap_stack_size_check : {
		. = ALIGN(8);			/* Align to bytes as the smaller size of the data that the AXI can access the RAM is the byte (8 bits) */
		. = . + _min_stack_size;	/* move current location by the minimum stack size */
		. = . + _min_heap_size;		/* move current location by the minimum heap size */
		. = ALIGN(8);			/* Align end address to bytes because the smaller size of the data that the AXI can access the RAM is the byte (8 bits) */
	} > AHB_RAM_D2
}
