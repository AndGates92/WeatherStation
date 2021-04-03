#ifndef SCB_REGISTERS_H
#define SCB_REGISTERS_H
/**
 * @copyright
 * @file sysctrlscs.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief System control block (SCB) registers in system control space (SCS) register
*/

#include <stdint.h>

#include "global/peripherals.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SCB System control block (SCB) registers in system control space (SCS)
 *  @brief System control block (SCB) registers in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	RO uint32_t CPUID;                   /*!< CPU ID register                                   (Offset 0x0)          */
	RW uint32_t INTCTRLSTATE;            /*!< Interrupt control and state register              (Offset 0x4)          */
	RW uint32_t INTVECTTABLEOFFSET;      /*!< Interrupt vector table offset register            (Offset 0x8)          */
	RW uint32_t APPINTRSTCTRL;           /*!< Application interrupt and reset control register  (Offset 0xC)          */
	RW uint32_t SYSCTRL;                 /*!< System control register                           (Offset 0x10)         */
	RW uint32_t CFGCTRL;                 /*!< Configuration and control register                (Offset 0x14)         */
	RW uint32_t SYSHANDLERPRIORITY[3U];  /*!< System handler priority register                  (Offset 0x18 - 0x20)  */
	RW uint32_t SYSHANDLERCTRLSTATE;     /*!< System handler control and state register         (Offset 0x24)         */
	RW uint32_t CFGFAULTSTATUS;          /*!< Configurable fault status register                (Offset 0x28)         */
	RW uint32_t HARDFAULTSTATUS;         /*!< Hard fault status register                        (Offset 0x2C)         */
	RW uint32_t DEBUGFAULTSTATUS;        /*!< Debug fault status register                       (Offset 0x30)         */
	RW uint32_t MMHANDLERCTRLSTATE;      /*!< MemManage handler control and state register      (Offset 0x34)         */
	RW uint32_t BUSFAULTSTATUS;          /*!< Bus fault status register                         (Offset 0x38)         */
	RW uint32_t AUXFAULTSTATUS;          /*!< Auxiliary fault status register                   (Offset 0x3C)         */
	RO uint32_t PROCFEATURE0;            /*!< Processor feature register 0                      (Offset 0x40)         */
	RO uint32_t PROCFEATURE1;            /*!< Processor feature register 1                      (Offset 0x44)         */
	RO uint32_t DEBUGFEATURE;            /*!< Debug feature register                            (Offset 0x48)         */
	RO uint32_t AUXFEATURE;              /*!< Auxiliary feature register                        (Offset 0x4C)         */
	RO uint32_t MODELMEMFEATURE0;        /*!< Model memory feature register 0                   (Offset 0x50)         */
	RO uint32_t MODELMEMFEATURE1;        /*!< Model memory feature register 1                   (Offset 0x54)         */
	RO uint32_t MODELMEMFEATURE2;        /*!< Model memory feature register 2                   (Offset 0x58)         */
	RO uint32_t MODELMEMFEATURE3;        /*!< Model memory feature register 3                   (Offset 0x5C)         */
	RO uint32_t INSTRSETATTR0;           /*!< Instruction set attribute register 0              (Offset 0x60)         */
	RO uint32_t INSTRSETATTR1;           /*!< Instruction set attribute register 1              (Offset 0x64)         */
	RO uint32_t INSTRSETATTR2;           /*!< Instruction set attribute register 2              (Offset 0x68)         */
	RO uint32_t INSTRSETATTR3;           /*!< Instruction set attribute register 3              (Offset 0x6C)         */
	RO uint32_t INSTRSETATTR4;           /*!< Instruction set attribute register 4              (Offset 0x70)         */
	RO uint32_t INSTRSETATTR5;           /*!< Instruction set attribute register 5              (Offset 0x74)         */
	RO uint32_t CACHELVLID;              /*!< Cache level ID register                           (Offset 0x78)         */
	RO uint32_t CACHETYPE;               /*!< Cache type register                               (Offset 0x7C)         */
	RO uint32_t CACHESIZEID;             /*!< Cache size ID register                            (Offset 0x80)         */
	RO uint32_t CACHESIZESEL;            /*!< Cache size selection register                     (Offset 0x84)         */
	RO uint32_t COMPRESSORACCESSCTRL;    /*!< Compressor access control register                (Offset 0x88)         */
	   uint32_t reserved;                /*!< Reserved                                          (Offset 0x8C)         */
} scs_scb_regs;

/*!< System control block (SCB) registers in system control space (SCS) registers */
/*!< Interrupt controller type register */
#define SCB_CPUID_IMPLEMENTER_OFFSET  (24U)
#define SCB_CPUID_IMPLEMENTER_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, IMPLEMENTER))  /*!< Mask  0xFF000000 */

#define SCB_CPUID_PROCREV_OFFSET  (20U)
#define SCB_CPUID_PROCREV_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, PROCREV))  /*!< Mask  0x00F00000 */

#define SCB_CPUID_ARCHITECTURE_OFFSET  (16U)
#define SCB_CPUID_ARCHITECTURE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, ARCHITECTURE))  /*!< Mask  0x000F0000 */

#define SCB_CPUID_PARTNO_OFFSET  (4U)
#define SCB_CPUID_PARTNO_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, PARTNO))  /*!< Mask  0x0000FFF0 */

#define SCB_CPUID_PATCH_OFFSET  (0U)
#define SCB_CPUID_PATCH_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, PATCH))  /*!< Mask  0x0000000F */

// Available implementers
#define SCB_IMPLEMENTER_ARM  (0x41UL)  /*!< Value 0x00000041 */

// Available processor revisions (number after the letter r in the Cortex M7 processor revisions rNpM)
#define SCB_PROCREV_0  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_PROCREV_1  (0x1UL)  /*!< Value 0x00000001 */

// Available architecture variants
#define SCB_ARCHITECTURE_DEFAULT  (0xFUL)  /*!< Value 0x0000000F */

// Available part numbers
#define SCB_PARTNO_CORTEXM7  (0x27UL)  /*!< Value 0x00000027 */

// Available patch release (number after the letter p in the Cortex M7 processor revisions rNpM)
#define SCB_PATCH_0 (0x0UL)  /*!< Value 0x00000000 */
#define SCB_PATCH_1 (0x1UL)  /*!< Value 0x00000001 */
#define SCB_PATCH_2 (0x2UL)  /*!< Value 0x00000002 */

/*!< Interrupt control and state register */
#define SCB_INTCTRLSTATE_NMIEN_OFFSET                       (31U)
#define SCB_INTCTRLSTATE_NMIEN_MASK                         (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, NMIEN))                       /*!< Mask  0x80000000 */

#define SCB_INTCTRLSTATE_SVEXCEPTIONPEND_OFFSET             (28U)
#define SCB_INTCTRLSTATE_SVEXCEPTIONPEND_MASK               (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, SVEXCEPTIONPEND))             /*!< Mask  0x10000000 */

#define SCB_INTCTRLSTATE_SVEXCEPTIONCLR_OFFSET              (27U)
#define SCB_INTCTRLSTATE_SVEXCEPTIONCLR_MASK                (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, SVEXCEPTIONCLR))              /*!< Mask  0x08000000 */

#define SCB_INTCTRLSTATE_SYSTICKEXCEPTIONPEND_OFFSET        (26U)
#define SCB_INTCTRLSTATE_SYSTICKEXCEPTIONPEND_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, SYSTICKEXCEPTIONPEND))        /*!< Mask  0x04000000 */

#define SCB_INTCTRLSTATE_SYSTICKEXCEPTIONCLR_OFFSET         (25U)
#define SCB_INTCTRLSTATE_SYSTICKEXCEPTIONCLR_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, SYSTICKEXCEPTIONCLR))         /*!< Mask  0x02000000 */

#define SCB_INTCTRLSTATE_SERVICEISRONDEBUGSTATEEXIT_OFFSET  (23U)
#define SCB_INTCTRLSTATE_SERVICEISRONDEBUGSTATEEXIT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, SERVICEISRONDEBUGSTATEEXIT))  /*!< Mask  0x00800000 */

#define SCB_INTCTRLSTATE_ISRPENDING_OFFSET                  (22U)
#define SCB_INTCTRLSTATE_ISRPENDING_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, ISRPENDING))                  /*!< Mask  0x00400000 */

#define SCB_INTCTRLSTATE_EXCEPTIONPEND_OFFSET               (12U)
#define SCB_INTCTRLSTATE_EXCEPTIONPEND_MASK                 (0x1FFUL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, EXCEPTIONPEND))             /*!< Mask  0x001F0000 */

#define SCB_INTCTRLSTATE_MULTIPLEACTIVEEXCEPTIONS_OFFSET    (11U)
#define SCB_INTCTRLSTATE_MULTIPLEACTIVEEXCEPTIONS_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, MULTIPLEACTIVEEXCEPTIONS))    /*!< Mask  0x00000800 */

#define SCB_INTCTRLSTATE_ACTIVEEXCEPTION_OFFSET             (0U)
#define SCB_INTCTRLSTATE_ACTIVEEXCEPTION_MASK               (0x1FFUL << REGISTER_FIELD_OFFSET(SCB, INTCTRLSTATE, ACTIVEEXCEPTION))           /*!< Mask  0x000001FF */

// Values of non-maskable interrupt (NMI) active bit
#define SCB_NMI_INACTIVE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_NMI_ACTIVE    (0x1UL)  /*!< Value 0x00000001 */

// Values of set-pending for supervisor (SV) call and SysTick exceptions bit
#define SCB_EXCEPTION_NOTPENDING  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXCEPTION_PENDINGSET  (0x1UL)  /*!< Value 0x00000001 */

// Values of clear-pending for supervisor (SV) call and SysTick exceptions bit
#define SCB_EXCEPTION_NOCHANGE    (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXCEPTION_PENDINGCLR  (0x1UL)  /*!< Value 0x00000001 */

// Values of pending interrupt on exit from debug halt state service bit
#define SCB_ISRONONDEBUGSTATEEXIT_NOSERVICE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ISRONONDEBUGSTATEEXIT_SERVICE    (0x1UL)  /*!< Value 0x00000001 */

// Values of pending exception number with highest priority register
#define SCB_EXCEPTIONPEND_NONE  (0x0UL)  /*!< Value 0x00000000 */

// Values of preempted active exceptions bit
#define SCB_ACTIVEEXCEPTIONS_MULTIPLE   (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ACTIVEEXCEPTIONS_ZEROORONE  (0x1UL)  /*!< Value 0x00000001 */

// Values of active exception register
#define SCB_ACTIVEEXCEPTION_THREADMODE  (0x000UL)  /*!< Value 0x00000000 */
#define SCB_ACTIVEEXCEPTION_NMI         (0x002UL)  /*!< Value 0x00000002 */
#define SCB_ACTIVEEXCEPTION_HARDFAULT   (0x003UL)  /*!< Value 0x00000003 */
#define SCB_ACTIVEEXCEPTION_MEMMANAGE   (0x004UL)  /*!< Value 0x00000004 */
#define SCB_ACTIVEEXCEPTION_BUSFAULT    (0x005UL)  /*!< Value 0x00000005 */
#define SCB_ACTIVEEXCEPTION_USAGEFAULT  (0x006UL)  /*!< Value 0x00000006 */
#define SCB_ACTIVEEXCEPTION_SVCALL      (0x00BUL)  /*!< Value 0x0000000B */
#define SCB_ACTIVEEXCEPTION_RSVDDEBUG   (0x00CUL)  /*!< Value 0x0000000C */
#define SCB_ACTIVEEXCEPTION_PENDSV      (0x00EUL)  /*!< Value 0x0000000E */
#define SCB_ACTIVEEXCEPTION_SYSTICK     (0x00FUL)  /*!< Value 0x0000000F */
#define SCB_ACTIVEEXCEPTION_IRQ0        (0x010UL)  /*!< Value 0x00000010 */
#define SCB_ACTIVEEXCEPTION_IRQ1        (0x011UL)  /*!< Value 0x00000011 */
#define SCB_ACTIVEEXCEPTION_IRQ2        (0x012UL)  /*!< Value 0x00000012 */
#define SCB_ACTIVEEXCEPTION_IRQ3        (0x013UL)  /*!< Value 0x00000013 */
#define SCB_ACTIVEEXCEPTION_IRQ4        (0x014UL)  /*!< Value 0x00000014 */
#define SCB_ACTIVEEXCEPTION_IRQ5        (0x015UL)  /*!< Value 0x00000015 */
#define SCB_ACTIVEEXCEPTION_IRQ6        (0x016UL)  /*!< Value 0x00000016 */
#define SCB_ACTIVEEXCEPTION_IRQ7        (0x017UL)  /*!< Value 0x00000017 */
#define SCB_ACTIVEEXCEPTION_IRQ8        (0x018UL)  /*!< Value 0x00000018 */
#define SCB_ACTIVEEXCEPTION_IRQ9        (0x019UL)  /*!< Value 0x00000019 */
#define SCB_ACTIVEEXCEPTION_IRQ10       (0x01AUL)  /*!< Value 0x0000001A */
#define SCB_ACTIVEEXCEPTION_IRQ11       (0x01BUL)  /*!< Value 0x0000001B */
#define SCB_ACTIVEEXCEPTION_IRQ12       (0x01CUL)  /*!< Value 0x0000001C */
#define SCB_ACTIVEEXCEPTION_IRQ13       (0x01DUL)  /*!< Value 0x0000001D */
#define SCB_ACTIVEEXCEPTION_IRQ14       (0x01EUL)  /*!< Value 0x0000001E */
#define SCB_ACTIVEEXCEPTION_IRQ15       (0x01FUL)  /*!< Value 0x0000001F */
#define SCB_ACTIVEEXCEPTION_IRQ16       (0x020UL)  /*!< Value 0x00000020 */
#define SCB_ACTIVEEXCEPTION_IRQ17       (0x021UL)  /*!< Value 0x00000021 */
#define SCB_ACTIVEEXCEPTION_IRQ18       (0x022UL)  /*!< Value 0x00000022 */
#define SCB_ACTIVEEXCEPTION_IRQ19       (0x023UL)  /*!< Value 0x00000023 */
#define SCB_ACTIVEEXCEPTION_IRQ20       (0x024UL)  /*!< Value 0x00000024 */
#define SCB_ACTIVEEXCEPTION_IRQ21       (0x025UL)  /*!< Value 0x00000025 */
#define SCB_ACTIVEEXCEPTION_IRQ22       (0x026UL)  /*!< Value 0x00000026 */
#define SCB_ACTIVEEXCEPTION_IRQ23       (0x027UL)  /*!< Value 0x00000027 */
#define SCB_ACTIVEEXCEPTION_IRQ24       (0x028UL)  /*!< Value 0x00000028 */
#define SCB_ACTIVEEXCEPTION_IRQ25       (0x029UL)  /*!< Value 0x00000029 */
#define SCB_ACTIVEEXCEPTION_IRQ26       (0x02AUL)  /*!< Value 0x0000002A */
#define SCB_ACTIVEEXCEPTION_IRQ27       (0x02BUL)  /*!< Value 0x0000002B */
#define SCB_ACTIVEEXCEPTION_IRQ28       (0x02CUL)  /*!< Value 0x0000002C */
#define SCB_ACTIVEEXCEPTION_IRQ29       (0x02DUL)  /*!< Value 0x0000002D */
#define SCB_ACTIVEEXCEPTION_IRQ30       (0x02EUL)  /*!< Value 0x0000002E */
#define SCB_ACTIVEEXCEPTION_IRQ31       (0x02FUL)  /*!< Value 0x0000002F */
#define SCB_ACTIVEEXCEPTION_IRQ32       (0x030UL)  /*!< Value 0x00000030 */
#define SCB_ACTIVEEXCEPTION_IRQ33       (0x031UL)  /*!< Value 0x00000031 */
#define SCB_ACTIVEEXCEPTION_IRQ34       (0x032UL)  /*!< Value 0x00000032 */
#define SCB_ACTIVEEXCEPTION_IRQ35       (0x033UL)  /*!< Value 0x00000033 */
#define SCB_ACTIVEEXCEPTION_IRQ36       (0x034UL)  /*!< Value 0x00000034 */
#define SCB_ACTIVEEXCEPTION_IRQ37       (0x035UL)  /*!< Value 0x00000035 */
#define SCB_ACTIVEEXCEPTION_IRQ38       (0x036UL)  /*!< Value 0x00000036 */
#define SCB_ACTIVEEXCEPTION_IRQ39       (0x037UL)  /*!< Value 0x00000037 */
#define SCB_ACTIVEEXCEPTION_IRQ40       (0x038UL)  /*!< Value 0x00000038 */
#define SCB_ACTIVEEXCEPTION_IRQ41       (0x039UL)  /*!< Value 0x00000039 */
#define SCB_ACTIVEEXCEPTION_IRQ42       (0x03AUL)  /*!< Value 0x0000003A */
#define SCB_ACTIVEEXCEPTION_IRQ43       (0x03BUL)  /*!< Value 0x0000003B */
#define SCB_ACTIVEEXCEPTION_IRQ44       (0x03CUL)  /*!< Value 0x0000003C */
#define SCB_ACTIVEEXCEPTION_IRQ45       (0x03DUL)  /*!< Value 0x0000003D */
#define SCB_ACTIVEEXCEPTION_IRQ46       (0x03EUL)  /*!< Value 0x0000003E */
#define SCB_ACTIVEEXCEPTION_IRQ47       (0x03FUL)  /*!< Value 0x0000003F */
#define SCB_ACTIVEEXCEPTION_IRQ48       (0x040UL)  /*!< Value 0x00000040 */
#define SCB_ACTIVEEXCEPTION_IRQ49       (0x041UL)  /*!< Value 0x00000041 */
#define SCB_ACTIVEEXCEPTION_IRQ50       (0x042UL)  /*!< Value 0x00000042 */
#define SCB_ACTIVEEXCEPTION_IRQ51       (0x043UL)  /*!< Value 0x00000043 */
#define SCB_ACTIVEEXCEPTION_IRQ52       (0x044UL)  /*!< Value 0x00000044 */
#define SCB_ACTIVEEXCEPTION_IRQ53       (0x045UL)  /*!< Value 0x00000045 */
#define SCB_ACTIVEEXCEPTION_IRQ54       (0x046UL)  /*!< Value 0x00000046 */
#define SCB_ACTIVEEXCEPTION_IRQ55       (0x047UL)  /*!< Value 0x00000047 */
#define SCB_ACTIVEEXCEPTION_IRQ56       (0x048UL)  /*!< Value 0x00000048 */
#define SCB_ACTIVEEXCEPTION_IRQ57       (0x049UL)  /*!< Value 0x00000049 */
#define SCB_ACTIVEEXCEPTION_IRQ58       (0x04AUL)  /*!< Value 0x0000004A */
#define SCB_ACTIVEEXCEPTION_IRQ59       (0x04BUL)  /*!< Value 0x0000004B */
#define SCB_ACTIVEEXCEPTION_IRQ60       (0x04CUL)  /*!< Value 0x0000004C */
#define SCB_ACTIVEEXCEPTION_IRQ61       (0x04DUL)  /*!< Value 0x0000004D */
#define SCB_ACTIVEEXCEPTION_IRQ62       (0x04EUL)  /*!< Value 0x0000004E */
#define SCB_ACTIVEEXCEPTION_IRQ63       (0x04FUL)  /*!< Value 0x0000004F */
#define SCB_ACTIVEEXCEPTION_IRQ64       (0x050UL)  /*!< Value 0x00000050 */
#define SCB_ACTIVEEXCEPTION_IRQ65       (0x051UL)  /*!< Value 0x00000051 */
#define SCB_ACTIVEEXCEPTION_IRQ66       (0x052UL)  /*!< Value 0x00000052 */
#define SCB_ACTIVEEXCEPTION_IRQ67       (0x053UL)  /*!< Value 0x00000053 */
#define SCB_ACTIVEEXCEPTION_IRQ68       (0x054UL)  /*!< Value 0x00000054 */
#define SCB_ACTIVEEXCEPTION_IRQ69       (0x055UL)  /*!< Value 0x00000055 */
#define SCB_ACTIVEEXCEPTION_IRQ70       (0x056UL)  /*!< Value 0x00000056 */
#define SCB_ACTIVEEXCEPTION_IRQ71       (0x057UL)  /*!< Value 0x00000057 */
#define SCB_ACTIVEEXCEPTION_IRQ72       (0x058UL)  /*!< Value 0x00000058 */
#define SCB_ACTIVEEXCEPTION_IRQ73       (0x059UL)  /*!< Value 0x00000059 */
#define SCB_ACTIVEEXCEPTION_IRQ74       (0x05AUL)  /*!< Value 0x0000005A */
#define SCB_ACTIVEEXCEPTION_IRQ75       (0x05BUL)  /*!< Value 0x0000005B */
#define SCB_ACTIVEEXCEPTION_IRQ76       (0x05CUL)  /*!< Value 0x0000005C */
#define SCB_ACTIVEEXCEPTION_IRQ77       (0x05DUL)  /*!< Value 0x0000005D */
#define SCB_ACTIVEEXCEPTION_IRQ78       (0x05EUL)  /*!< Value 0x0000005E */
#define SCB_ACTIVEEXCEPTION_IRQ79       (0x05FUL)  /*!< Value 0x0000005F */
#define SCB_ACTIVEEXCEPTION_IRQ80       (0x060UL)  /*!< Value 0x00000060 */
#define SCB_ACTIVEEXCEPTION_IRQ81       (0x061UL)  /*!< Value 0x00000061 */
#define SCB_ACTIVEEXCEPTION_IRQ82       (0x062UL)  /*!< Value 0x00000062 */
#define SCB_ACTIVEEXCEPTION_IRQ83       (0x063UL)  /*!< Value 0x00000063 */
#define SCB_ACTIVEEXCEPTION_IRQ84       (0x064UL)  /*!< Value 0x00000064 */
#define SCB_ACTIVEEXCEPTION_IRQ85       (0x065UL)  /*!< Value 0x00000065 */
#define SCB_ACTIVEEXCEPTION_IRQ86       (0x066UL)  /*!< Value 0x00000066 */
#define SCB_ACTIVEEXCEPTION_IRQ87       (0x067UL)  /*!< Value 0x00000067 */
#define SCB_ACTIVEEXCEPTION_IRQ88       (0x068UL)  /*!< Value 0x00000068 */
#define SCB_ACTIVEEXCEPTION_IRQ89       (0x069UL)  /*!< Value 0x00000069 */
#define SCB_ACTIVEEXCEPTION_IRQ90       (0x06AUL)  /*!< Value 0x0000006A */
#define SCB_ACTIVEEXCEPTION_IRQ91       (0x06BUL)  /*!< Value 0x0000006B */
#define SCB_ACTIVEEXCEPTION_IRQ92       (0x06CUL)  /*!< Value 0x0000006C */
#define SCB_ACTIVEEXCEPTION_IRQ93       (0x06DUL)  /*!< Value 0x0000006D */
#define SCB_ACTIVEEXCEPTION_IRQ94       (0x06EUL)  /*!< Value 0x0000006E */
#define SCB_ACTIVEEXCEPTION_IRQ95       (0x06FUL)  /*!< Value 0x0000006F */
#define SCB_ACTIVEEXCEPTION_IRQ96       (0x070UL)  /*!< Value 0x00000070 */
#define SCB_ACTIVEEXCEPTION_IRQ97       (0x071UL)  /*!< Value 0x00000071 */
#define SCB_ACTIVEEXCEPTION_IRQ98       (0x072UL)  /*!< Value 0x00000072 */
#define SCB_ACTIVEEXCEPTION_IRQ99       (0x073UL)  /*!< Value 0x00000073 */
#define SCB_ACTIVEEXCEPTION_IRQ100      (0x074UL)  /*!< Value 0x00000074 */
#define SCB_ACTIVEEXCEPTION_IRQ101      (0x075UL)  /*!< Value 0x00000075 */
#define SCB_ACTIVEEXCEPTION_IRQ102      (0x076UL)  /*!< Value 0x00000076 */
#define SCB_ACTIVEEXCEPTION_IRQ103      (0x077UL)  /*!< Value 0x00000077 */
#define SCB_ACTIVEEXCEPTION_IRQ104      (0x078UL)  /*!< Value 0x00000078 */
#define SCB_ACTIVEEXCEPTION_IRQ105      (0x079UL)  /*!< Value 0x00000079 */
#define SCB_ACTIVEEXCEPTION_IRQ106      (0x07AUL)  /*!< Value 0x0000007A */
#define SCB_ACTIVEEXCEPTION_IRQ107      (0x07BUL)  /*!< Value 0x0000007B */
#define SCB_ACTIVEEXCEPTION_IRQ108      (0x07CUL)  /*!< Value 0x0000007C */
#define SCB_ACTIVEEXCEPTION_IRQ109      (0x07DUL)  /*!< Value 0x0000007D */
#define SCB_ACTIVEEXCEPTION_IRQ110      (0x07EUL)  /*!< Value 0x0000007E */
#define SCB_ACTIVEEXCEPTION_IRQ111      (0x07FUL)  /*!< Value 0x0000007F */
#define SCB_ACTIVEEXCEPTION_IRQ112      (0x080UL)  /*!< Value 0x00000080 */
#define SCB_ACTIVEEXCEPTION_IRQ113      (0x081UL)  /*!< Value 0x00000081 */
#define SCB_ACTIVEEXCEPTION_IRQ114      (0x082UL)  /*!< Value 0x00000082 */
#define SCB_ACTIVEEXCEPTION_IRQ115      (0x083UL)  /*!< Value 0x00000083 */
#define SCB_ACTIVEEXCEPTION_IRQ116      (0x084UL)  /*!< Value 0x00000084 */
#define SCB_ACTIVEEXCEPTION_IRQ117      (0x085UL)  /*!< Value 0x00000085 */
#define SCB_ACTIVEEXCEPTION_IRQ118      (0x086UL)  /*!< Value 0x00000086 */
#define SCB_ACTIVEEXCEPTION_IRQ119      (0x087UL)  /*!< Value 0x00000087 */
#define SCB_ACTIVEEXCEPTION_IRQ120      (0x088UL)  /*!< Value 0x00000088 */
#define SCB_ACTIVEEXCEPTION_IRQ121      (0x089UL)  /*!< Value 0x00000089 */
#define SCB_ACTIVEEXCEPTION_IRQ122      (0x08AUL)  /*!< Value 0x0000008A */
#define SCB_ACTIVEEXCEPTION_IRQ123      (0x08BUL)  /*!< Value 0x0000008B */
#define SCB_ACTIVEEXCEPTION_IRQ124      (0x08CUL)  /*!< Value 0x0000008C */
#define SCB_ACTIVEEXCEPTION_IRQ125      (0x08DUL)  /*!< Value 0x0000008D */
#define SCB_ACTIVEEXCEPTION_IRQ126      (0x08EUL)  /*!< Value 0x0000008E */
#define SCB_ACTIVEEXCEPTION_IRQ127      (0x08FUL)  /*!< Value 0x0000008F */
#define SCB_ACTIVEEXCEPTION_IRQ128      (0x090UL)  /*!< Value 0x00000090 */
#define SCB_ACTIVEEXCEPTION_IRQ129      (0x091UL)  /*!< Value 0x00000091 */
#define SCB_ACTIVEEXCEPTION_IRQ130      (0x092UL)  /*!< Value 0x00000092 */
#define SCB_ACTIVEEXCEPTION_IRQ131      (0x093UL)  /*!< Value 0x00000093 */
#define SCB_ACTIVEEXCEPTION_IRQ132      (0x094UL)  /*!< Value 0x00000094 */
#define SCB_ACTIVEEXCEPTION_IRQ133      (0x095UL)  /*!< Value 0x00000095 */
#define SCB_ACTIVEEXCEPTION_IRQ134      (0x096UL)  /*!< Value 0x00000096 */
#define SCB_ACTIVEEXCEPTION_IRQ135      (0x097UL)  /*!< Value 0x00000097 */
#define SCB_ACTIVEEXCEPTION_IRQ136      (0x098UL)  /*!< Value 0x00000098 */
#define SCB_ACTIVEEXCEPTION_IRQ137      (0x099UL)  /*!< Value 0x00000099 */
#define SCB_ACTIVEEXCEPTION_IRQ138      (0x09AUL)  /*!< Value 0x0000009A */
#define SCB_ACTIVEEXCEPTION_IRQ139      (0x09BUL)  /*!< Value 0x0000009B */
#define SCB_ACTIVEEXCEPTION_IRQ140      (0x09CUL)  /*!< Value 0x0000009C */
#define SCB_ACTIVEEXCEPTION_IRQ141      (0x09DUL)  /*!< Value 0x0000009D */
#define SCB_ACTIVEEXCEPTION_IRQ142      (0x09EUL)  /*!< Value 0x0000009E */
#define SCB_ACTIVEEXCEPTION_IRQ143      (0x09FUL)  /*!< Value 0x0000009F */
#define SCB_ACTIVEEXCEPTION_IRQ144      (0x0A0UL)  /*!< Value 0x000000A0 */
#define SCB_ACTIVEEXCEPTION_IRQ145      (0x0A1UL)  /*!< Value 0x000000A1 */
#define SCB_ACTIVEEXCEPTION_IRQ146      (0x0A2UL)  /*!< Value 0x000000A2 */
#define SCB_ACTIVEEXCEPTION_IRQ147      (0x0A3UL)  /*!< Value 0x000000A3 */
#define SCB_ACTIVEEXCEPTION_IRQ148      (0x0A4UL)  /*!< Value 0x000000A4 */
#define SCB_ACTIVEEXCEPTION_IRQ149      (0x0A5UL)  /*!< Value 0x000000A5 */
#define SCB_ACTIVEEXCEPTION_IRQ150      (0x0A6UL)  /*!< Value 0x000000A6 */
#define SCB_ACTIVEEXCEPTION_IRQ151      (0x0A7UL)  /*!< Value 0x000000A7 */
#define SCB_ACTIVEEXCEPTION_IRQ152      (0x0A8UL)  /*!< Value 0x000000A8 */
#define SCB_ACTIVEEXCEPTION_IRQ153      (0x0A9UL)  /*!< Value 0x000000A9 */
#define SCB_ACTIVEEXCEPTION_IRQ154      (0x0AAUL)  /*!< Value 0x000000AA */
#define SCB_ACTIVEEXCEPTION_IRQ155      (0x0ABUL)  /*!< Value 0x000000AB */
#define SCB_ACTIVEEXCEPTION_IRQ156      (0x0ACUL)  /*!< Value 0x000000AC */
#define SCB_ACTIVEEXCEPTION_IRQ157      (0x0ADUL)  /*!< Value 0x000000AD */
#define SCB_ACTIVEEXCEPTION_IRQ158      (0x0AEUL)  /*!< Value 0x000000AE */
#define SCB_ACTIVEEXCEPTION_IRQ159      (0x0AFUL)  /*!< Value 0x000000AF */
#define SCB_ACTIVEEXCEPTION_IRQ160      (0x0B0UL)  /*!< Value 0x000000B0 */
#define SCB_ACTIVEEXCEPTION_IRQ161      (0x0B1UL)  /*!< Value 0x000000B1 */
#define SCB_ACTIVEEXCEPTION_IRQ162      (0x0B2UL)  /*!< Value 0x000000B2 */
#define SCB_ACTIVEEXCEPTION_IRQ163      (0x0B3UL)  /*!< Value 0x000000B3 */
#define SCB_ACTIVEEXCEPTION_IRQ164      (0x0B4UL)  /*!< Value 0x000000B4 */
#define SCB_ACTIVEEXCEPTION_IRQ165      (0x0B5UL)  /*!< Value 0x000000B5 */
#define SCB_ACTIVEEXCEPTION_IRQ166      (0x0B6UL)  /*!< Value 0x000000B6 */
#define SCB_ACTIVEEXCEPTION_IRQ167      (0x0B7UL)  /*!< Value 0x000000B7 */
#define SCB_ACTIVEEXCEPTION_IRQ168      (0x0B8UL)  /*!< Value 0x000000B8 */
#define SCB_ACTIVEEXCEPTION_IRQ169      (0x0B9UL)  /*!< Value 0x000000B9 */
#define SCB_ACTIVEEXCEPTION_IRQ170      (0x0BAUL)  /*!< Value 0x000000BA */
#define SCB_ACTIVEEXCEPTION_IRQ171      (0x0BBUL)  /*!< Value 0x000000BB */
#define SCB_ACTIVEEXCEPTION_IRQ172      (0x0BCUL)  /*!< Value 0x000000BC */
#define SCB_ACTIVEEXCEPTION_IRQ173      (0x0BDUL)  /*!< Value 0x000000BD */
#define SCB_ACTIVEEXCEPTION_IRQ174      (0x0BEUL)  /*!< Value 0x000000BE */
#define SCB_ACTIVEEXCEPTION_IRQ175      (0x0BFUL)  /*!< Value 0x000000BF */
#define SCB_ACTIVEEXCEPTION_IRQ176      (0x0C0UL)  /*!< Value 0x000000C0 */
#define SCB_ACTIVEEXCEPTION_IRQ177      (0x0C1UL)  /*!< Value 0x000000C1 */
#define SCB_ACTIVEEXCEPTION_IRQ178      (0x0C2UL)  /*!< Value 0x000000C2 */
#define SCB_ACTIVEEXCEPTION_IRQ179      (0x0C3UL)  /*!< Value 0x000000C3 */
#define SCB_ACTIVEEXCEPTION_IRQ180      (0x0C4UL)  /*!< Value 0x000000C4 */
#define SCB_ACTIVEEXCEPTION_IRQ181      (0x0C5UL)  /*!< Value 0x000000C5 */
#define SCB_ACTIVEEXCEPTION_IRQ182      (0x0C6UL)  /*!< Value 0x000000C6 */
#define SCB_ACTIVEEXCEPTION_IRQ183      (0x0C7UL)  /*!< Value 0x000000C7 */
#define SCB_ACTIVEEXCEPTION_IRQ184      (0x0C8UL)  /*!< Value 0x000000C8 */
#define SCB_ACTIVEEXCEPTION_IRQ185      (0x0C9UL)  /*!< Value 0x000000C9 */
#define SCB_ACTIVEEXCEPTION_IRQ186      (0x0CAUL)  /*!< Value 0x000000CA */
#define SCB_ACTIVEEXCEPTION_IRQ187      (0x0CBUL)  /*!< Value 0x000000CB */
#define SCB_ACTIVEEXCEPTION_IRQ188      (0x0CCUL)  /*!< Value 0x000000CC */
#define SCB_ACTIVEEXCEPTION_IRQ189      (0x0CDUL)  /*!< Value 0x000000CD */
#define SCB_ACTIVEEXCEPTION_IRQ190      (0x0CEUL)  /*!< Value 0x000000CE */
#define SCB_ACTIVEEXCEPTION_IRQ191      (0x0CFUL)  /*!< Value 0x000000CF */
#define SCB_ACTIVEEXCEPTION_IRQ192      (0x0D0UL)  /*!< Value 0x000000D0 */
#define SCB_ACTIVEEXCEPTION_IRQ193      (0x0D1UL)  /*!< Value 0x000000D1 */
#define SCB_ACTIVEEXCEPTION_IRQ194      (0x0D2UL)  /*!< Value 0x000000D2 */
#define SCB_ACTIVEEXCEPTION_IRQ195      (0x0D3UL)  /*!< Value 0x000000D3 */
#define SCB_ACTIVEEXCEPTION_IRQ196      (0x0D4UL)  /*!< Value 0x000000D4 */
#define SCB_ACTIVEEXCEPTION_IRQ197      (0x0D5UL)  /*!< Value 0x000000D5 */
#define SCB_ACTIVEEXCEPTION_IRQ198      (0x0D6UL)  /*!< Value 0x000000D6 */
#define SCB_ACTIVEEXCEPTION_IRQ199      (0x0D7UL)  /*!< Value 0x000000D7 */
#define SCB_ACTIVEEXCEPTION_IRQ200      (0x0D8UL)  /*!< Value 0x000000D8 */
#define SCB_ACTIVEEXCEPTION_IRQ201      (0x0D9UL)  /*!< Value 0x000000D9 */
#define SCB_ACTIVEEXCEPTION_IRQ202      (0x0DAUL)  /*!< Value 0x000000DA */
#define SCB_ACTIVEEXCEPTION_IRQ203      (0x0DBUL)  /*!< Value 0x000000DB */
#define SCB_ACTIVEEXCEPTION_IRQ204      (0x0DCUL)  /*!< Value 0x000000DC */
#define SCB_ACTIVEEXCEPTION_IRQ205      (0x0DDUL)  /*!< Value 0x000000DD */
#define SCB_ACTIVEEXCEPTION_IRQ206      (0x0DEUL)  /*!< Value 0x000000DE */
#define SCB_ACTIVEEXCEPTION_IRQ207      (0x0DFUL)  /*!< Value 0x000000DF */
#define SCB_ACTIVEEXCEPTION_IRQ208      (0x0E0UL)  /*!< Value 0x000000E0 */
#define SCB_ACTIVEEXCEPTION_IRQ209      (0x0E1UL)  /*!< Value 0x000000E1 */
#define SCB_ACTIVEEXCEPTION_IRQ210      (0x0E2UL)  /*!< Value 0x000000E2 */
#define SCB_ACTIVEEXCEPTION_IRQ211      (0x0E3UL)  /*!< Value 0x000000E3 */
#define SCB_ACTIVEEXCEPTION_IRQ212      (0x0E4UL)  /*!< Value 0x000000E4 */
#define SCB_ACTIVEEXCEPTION_IRQ213      (0x0E5UL)  /*!< Value 0x000000E5 */
#define SCB_ACTIVEEXCEPTION_IRQ214      (0x0E6UL)  /*!< Value 0x000000E6 */
#define SCB_ACTIVEEXCEPTION_IRQ215      (0x0E7UL)  /*!< Value 0x000000E7 */
#define SCB_ACTIVEEXCEPTION_IRQ216      (0x0E8UL)  /*!< Value 0x000000E8 */
#define SCB_ACTIVEEXCEPTION_IRQ217      (0x0E9UL)  /*!< Value 0x000000E9 */
#define SCB_ACTIVEEXCEPTION_IRQ218      (0x0EAUL)  /*!< Value 0x000000EA */
#define SCB_ACTIVEEXCEPTION_IRQ219      (0x0EBUL)  /*!< Value 0x000000EB */
#define SCB_ACTIVEEXCEPTION_IRQ220      (0x0ECUL)  /*!< Value 0x000000EC */
#define SCB_ACTIVEEXCEPTION_IRQ221      (0x0EDUL)  /*!< Value 0x000000ED */
#define SCB_ACTIVEEXCEPTION_IRQ222      (0x0EEUL)  /*!< Value 0x000000EE */
#define SCB_ACTIVEEXCEPTION_IRQ223      (0x0EFUL)  /*!< Value 0x000000EF */
#define SCB_ACTIVEEXCEPTION_IRQ224      (0x0F0UL)  /*!< Value 0x000000F0 */
#define SCB_ACTIVEEXCEPTION_IRQ225      (0x0F1UL)  /*!< Value 0x000000F1 */
#define SCB_ACTIVEEXCEPTION_IRQ226      (0x0F2UL)  /*!< Value 0x000000F2 */
#define SCB_ACTIVEEXCEPTION_IRQ227      (0x0F3UL)  /*!< Value 0x000000F3 */
#define SCB_ACTIVEEXCEPTION_IRQ228      (0x0F4UL)  /*!< Value 0x000000F4 */
#define SCB_ACTIVEEXCEPTION_IRQ229      (0x0F5UL)  /*!< Value 0x000000F5 */
#define SCB_ACTIVEEXCEPTION_IRQ230      (0x0F6UL)  /*!< Value 0x000000F6 */
#define SCB_ACTIVEEXCEPTION_IRQ231      (0x0F7UL)  /*!< Value 0x000000F7 */
#define SCB_ACTIVEEXCEPTION_IRQ232      (0x0F8UL)  /*!< Value 0x000000F8 */
#define SCB_ACTIVEEXCEPTION_IRQ233      (0x0F9UL)  /*!< Value 0x000000F9 */
#define SCB_ACTIVEEXCEPTION_IRQ234      (0x0FAUL)  /*!< Value 0x000000FA */
#define SCB_ACTIVEEXCEPTION_IRQ235      (0x0FBUL)  /*!< Value 0x000000FB */
#define SCB_ACTIVEEXCEPTION_IRQ236      (0x0FCUL)  /*!< Value 0x000000FC */
#define SCB_ACTIVEEXCEPTION_IRQ237      (0x0FDUL)  /*!< Value 0x000000FD */
#define SCB_ACTIVEEXCEPTION_IRQ238      (0x0FEUL)  /*!< Value 0x000000FE */
#define SCB_ACTIVEEXCEPTION_IRQ239      (0x0FFUL)  /*!< Value 0x000000FF */

/*!< Vector table offset register */
#define SCB_INTVECTTABLEOFFSET_TBLOFFSET_OFFSET  (7U)
#define SCB_INTVECTTABLEOFFSET_TBLOFFSET_MASK    (0x1FFFFFFUL << REGISTER_FIELD_OFFSET(SCB, INTVECTTABLEOFFSET, TBLOFFSET))      /*!< Mask  0xFFFFFF80 */

/*!< Application interrupt and reset control register */
#define SCB_APPINTRSTCTRL_VECTKEY_OFFSET                  (16U)
#define SCB_APPINTRSTCTRL_VECTKEY_MASK                    (0xFFFFUL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, VECTKEY))               /*!< Mask  0xFFFF0000 */

#define SCB_APPINTRSTCTRL_ENDIANNESS_OFFSET               (15U)
#define SCB_APPINTRSTCTRL_ENDIANNESS_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, ENDIANNESS))               /*!< Mask  0x00008000 */

#define SCB_APPINTRSTCTRL_INTPRIORITYGROUP_OFFSET         (8U)
#define SCB_APPINTRSTCTRL_INTPRIORITYGROUP_MASK           (0x7UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, INTPRIORITYGROUP))         /*!< Mask  0x00000700 */

#define SCB_APPINTRSTCTRL_EXTSRCSYSRSTREQ_OFFSET          (2U)
#define SCB_APPINTRSTCTRL_EXTSRCSYSRSTREQ_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, EXTSRCSYSRSTREQ))          /*!< Mask  0x00000004 */

#define SCB_APPINTRSTCTRL_ACTIVESTATEEXCEPTIONCLR_OFFSET  (1U)
#define SCB_APPINTRSTCTRL_ACTIVESTATEEXCEPTIONCLR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, ACTIVESTATEEXCEPTIONCLR))  /*!< Mask  0x00000002 */

#define SCB_APPINTRSTCTRL_LOCALRST_OFFSET                 (0U)
#define SCB_APPINTRSTCTRL_LOCALRST_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, LOCALRST))                 /*!< Mask  0x00000001 */

// Values of vector key register
#define SCB_VECKEY_WRITEKEY  (0x05FAUL)  /*!< Value 0x000005FA */
#define SCB_VECKEY_READKEY   (0xFA05UL)  /*!< Value 0x0000FA05 */

// Values of data endianness bit
#define SCB_ENDIANNESS_LITTLEENDIAN  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ENDIANNESS_BIGENDIAN     (0x1UL)  /*!< Value 0x00000001 */

// Values of interrupt priority grouping register
#define SCB_INTPRIORITYGROUP_G128S2  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_INTPRIORITYGROUP_G64S4   (0x1UL)  /*!< Value 0x00000001 */
#define SCB_INTPRIORITYGROUP_G32S8   (0x2UL)  /*!< Value 0x00000002 */
#define SCB_INTPRIORITYGROUP_G16S16  (0x3UL)  /*!< Value 0x00000003 */
#define SCB_INTPRIORITYGROUP_G8S32   (0x4UL)  /*!< Value 0x00000004 */
#define SCB_INTPRIORITYGROUP_G4S64   (0x5UL)  /*!< Value 0x00000005 */
#define SCB_INTPRIORITYGROUP_G2S128  (0x6UL)  /*!< Value 0x00000006 */
#define SCB_INTPRIORITYGROUP_G1S256  (0x7UL)  /*!< Value 0x00000007 */

// Values of system reset by an external source request bit (Asserting this bit forces a large system reset og all major components)
#define SCB_EXTSRCSYSRST_NOREQUEST  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXTSRCSYSRST_REQUEST    (0x1UL)  /*!< Value 0x00000001 */

// Values of active state of exception clear bit
#define SCB_ACTIVESTATEEXCEPTION_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ACTIVESTATEEXCEPTION_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of local system reset trigger bit
#define SCB_LOCALRST_NOCHANGE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_LOCALRST_TRIGGER   (0x1UL)  /*!< Value 0x00000001 */

/*!< System control register */
#define SCB_APPINTRSTCTRL_SENDEVENTONPENDING_OFFSET  (4U)
#define SCB_APPINTRSTCTRL_SENDEVENTONPENDING_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, SENDEVENTONPENDING))  /*!< Mask  0x00000010 */

#define SCB_APPINTRSTCTRL_SLEEPSTATE_OFFSET          (2U)
#define SCB_APPINTRSTCTRL_SLEEPSTATE_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, SLEEPSTATE))          /*!< Mask  0x00000004 */

#define SCB_APPINTRSTCTRL_SLEEPONISREXIT_OFFSET      (1U)
#define SCB_APPINTRSTCTRL_SLEEPONISREXIT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, APPINTRSTCTRL, SLEEPONISREXIT))         /*!< Mask  0x00000002 */

// Values of send event on pending bit
#define SCB_SENDEVENTONPENDING_ENEVENTSWAKEUP   (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SENDEVENTONPENDING_ALLEVENTSWAKEUP  (0x1UL)  /*!< Value 0x00000001 */

// Values of sleep state select bit
#define SCB_SLEEPSTATE_SLEEP      (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SLEEPSTATE_DEEPSLEEP  (0x1UL)  /*!< Value 0x00000001 */

// Values of sleep on ISR exit bit
#define SCB_SLEEPONISREXIT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SLEEPONISREXIT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

#define SCB_OFFSET 0xD00
#define SCB_BASE (SCS_BASE + SCB_OFFSET)
#define SCB REGISTER_PTR(scs_scb_regs, SCB_BASE)

/** @} */ // End of SCB group

/** @} */ // End of RegisterGroup group

#endif // SCB_REGISTERS_H
