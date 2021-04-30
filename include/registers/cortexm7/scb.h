#ifndef SCB_REGISTERS_H
#define SCB_REGISTERS_H
/**
 * @copyright
 * @file scb.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief System control block (SCB) registers in system control space (SCS) register
*/

#include <stdint.h>

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
	RO uint32_t CPUID;      /*!< CPU ID register                                   (Offset 0x0)         */
	RW uint32_t ICSR;       /*!< Interrupt control and state register              (Offset 0x4)         */
	RW uint32_t VTOR;       /*!< Interrupt vector table offset register            (Offset 0x8)         */
	RW uint32_t AIRCR;      /*!< Application interrupt and reset control register  (Offset 0xC)         */
	RW uint32_t SCR;        /*!< System control register                           (Offset 0x10)        */
	RW uint32_t CCR;        /*!< Configuration and control register                (Offset 0x14)        */
	RW uint8_t  SHPR[12U];  /*!< System handler priority register                  (Offset 0x18 - 0x20) */
	RW uint32_t SHCSR;      /*!< System handler control and state register         (Offset 0x24)        */
	RW uint32_t CFSR;       /*!< Configurable fault status register                (Offset 0x28)        */
	RW uint32_t HFSR;       /*!< Hard fault status register                        (Offset 0x2C)        */
	RW uint32_t DFSR;       /*!< Debug fault status register                       (Offset 0x30)        */
	RW uint32_t MMFAR;      /*!< MemManage address register                        (Offset 0x34)        */
	RW uint32_t BFAR;       /*!< Bus fault address register                        (Offset 0x38)        */
	RW uint32_t AFSR;       /*!< Auxiliary fault status register                   (Offset 0x3C)        */
	RO uint32_t ID_PFR0;    /*!< Processor feature 0 register                      (Offset 0x40)        */
	RO uint32_t ID_PFR1;    /*!< Processor feature 1 register                      (Offset 0x44)        */
	RO uint32_t ID_DFR0;    /*!< Debug feature register                            (Offset 0x48)        */
	RO uint32_t ID_AFR0;    /*!< Auxiliary feature register                        (Offset 0x4C)        */
	RO uint32_t ID_MMFR0;   /*!< Model memory feature 0 register                   (Offset 0x50)        */
	RO uint32_t ID_MMFR1;   /*!< Model memory feature 1 register                   (Offset 0x54)        */
	RO uint32_t ID_MMFR2;   /*!< Model memory feature 2 register                   (Offset 0x58)        */
	RO uint32_t ID_MMFR3;   /*!< Model memory feature 3 register                   (Offset 0x5C)        */
	RO uint32_t ID_ISAR0;   /*!< Instruction set attribute 0 register              (Offset 0x60)        */
	RO uint32_t ID_ISAR1;   /*!< Instruction set attribute 1 register              (Offset 0x64)        */
	RO uint32_t ID_ISAR2;   /*!< Instruction set attribute 2 register              (Offset 0x68)        */
	RO uint32_t ID_ISAR3;   /*!< Instruction set attribute 3 register              (Offset 0x6C)        */
	RO uint32_t ID_ISAR4;   /*!< Instruction set attribute 4 register              (Offset 0x70)        */
	RO uint32_t ID_ISAR5;   /*!< Instruction set attribute 5 register              (Offset 0x74)        */
	RO uint32_t CLIDR;      /*!< Cache level ID register                           (Offset 0x78)        */
	RO uint32_t CTR;        /*!< Cache type register                               (Offset 0x7C)        */
	RO uint32_t CCSIDR;     /*!< Cache size ID register                            (Offset 0x80)        */
	RO uint32_t CCSELR;     /*!< Cache size selection register                     (Offset 0x84)        */
	RO uint32_t CPACR;      /*!< Coprocessor access control register               (Offset 0x88)        */
	   uint32_t reserved;   /*!< Reserved                                          (Offset 0x8C)        */
} scs_scb_regs;

/*!< System control block (SCB) registers in system control space (SCS) registers */
/*!< Interrupt controller type register */
#define SCB_CPUID_IMPLEMENTER_OFFSET   (24U)
#define SCB_CPUID_IMPLEMENTER_MASK     (0xFFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, IMPLEMENTER))  /*!< Mask  0xFF000000 */

#define SCB_CPUID_VARIANT_OFFSET       (20U)
#define SCB_CPUID_VARIANT_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, VARIANT))       /*!< Mask  0x00F00000 */

#define SCB_CPUID_ARCHITECTURE_OFFSET  (16U)
#define SCB_CPUID_ARCHITECTURE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, ARCHITECTURE))  /*!< Mask  0x000F0000 */

#define SCB_CPUID_PARTNO_OFFSET        (4U)
#define SCB_CPUID_PARTNO_MASK          (0xFFFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, PARTNO))      /*!< Mask  0x0000FFF0 */

#define SCB_CPUID_REVISION_OFFSET      (0U)
#define SCB_CPUID_REVISION_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SCB, CPUID, REVISION))      /*!< Mask  0x0000000F */

// Available implementers
#define SCB_IMPLEMENTER_ARM  (0x41UL)  /*!< Value 0x00000041 */

// Available processor revisions (number after the letter r in the Cortex M7 processor revisions rNpM)
#define SCB_VARIANT_0  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_VARIANT_1  (0x1UL)  /*!< Value 0x00000001 */

// Available architecture variants
#define SCB_ARCHITECTURE_DEFAULT  (0xFUL)  /*!< Value 0x0000000F */

// Available part numbers
#define SCB_PARTNO_CORTEXM7  (0x27UL)  /*!< Value 0x00000027 */

// Available patch release (number after the letter p in the Cortex M7 processor revisions rNpM)
#define SCB_REVISION_0 (0x0UL)  /*!< Value 0x00000000 */
#define SCB_REVISION_1 (0x1UL)  /*!< Value 0x00000001 */
#define SCB_REVISION_2 (0x2UL)  /*!< Value 0x00000002 */

/*!< Interrupt control and state register */
#define SCB_ICSR_NMIPENDSET_OFFSET   (31U)
#define SCB_ICSR_NMIPENDSET_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, NMIPENDSET))     /*!< Mask  0x80000000 */

#define SCB_ICSR_PENDSVSET_OFFSET    (28U)
#define SCB_ICSR_PENDSVSET_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, PENDSVSET))      /*!< Mask  0x10000000 */

#define SCB_ICSR_PENDSVCLR_OFFSET    (27U)
#define SCB_ICSR_PENDSVCLR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, PENDSVCLR))      /*!< Mask  0x08000000 */

#define SCB_ICSR_PENDSTSET_OFFSET    (26U)
#define SCB_ICSR_PENDSTSET_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, PENDSTSET))      /*!< Mask  0x04000000 */

#define SCB_ICSR_PENDSTCLR_OFFSET    (25U)
#define SCB_ICSR_PENDSTCLR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, PENDSTCLR))      /*!< Mask  0x02000000 */

#define SCB_ICSR_ISRPREEMPT_OFFSET   (23U)
#define SCB_ICSR_ISRPREEMPT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, ISRPREEMPT))     /*!< Mask  0x00800000 */

#define SCB_ICSR_ISRPENDING_OFFSET   (22U)
#define SCB_ICSR_ISRPENDING_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, ISRPENDING))     /*!< Mask  0x00400000 */

#define SCB_ICSR_VECTPENDING_OFFSET  (12U)
#define SCB_ICSR_VECTPENDING_MASK    (0x1FFUL << REGISTER_FIELD_OFFSET(SCB, ICSR, VECTPENDING))  /*!< Mask  0x001F0000 */

#define SCB_ICSR_RETTOBASE_OFFSET    (11U)
#define SCB_ICSR_RETTOBASE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, ICSR, RETTOBASE))      /*!< Mask  0x00000800 */

#define SCB_ICSR_VECTACTIVE_OFFSET   (0U)
#define SCB_ICSR_VECTACTIVE_MASK     (0x1FFUL << REGISTER_FIELD_OFFSET(SCB, ICSR, VECTACTIVE))   /*!< Mask  0x000001FF */

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
#define SCB_ISRPREEMPT_NOSERVICE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ISRPREEMPT_SERVICE    (0x1UL)  /*!< Value 0x00000001 */

// Values of pending exception number with highest priority register
#define SCB_VECTPENDING_NONE  (0x0UL)  /*!< Value 0x00000000 */

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
#define SCB_VTOR_TBLOFF_OFFSET  (7U)
#define SCB_VTOR_TBLOFF_MASK    (0x1FFFFFFUL << REGISTER_FIELD_OFFSET(SCB, VTOR, TBLOFF))      /*!< Mask  0xFFFFFF80 */

/*!< Application interrupt and reset control register */
#define SCB_AIRCR_VECTKEY_OFFSET        (16U)
#define SCB_AIRCR_VECTKEY_MASK          (0xFFFFUL << REGISTER_FIELD_OFFSET(SCB, AIRCR, VECTKEY))      /*!< Mask  0xFFFF0000 - write only field */

#define SCB_AIRCR_VECTKEYSTAT_OFFSET    (16U)
#define SCB_AIRCR_VECTKEYSTAT_MASK      (0xFFFFUL << REGISTER_FIELD_OFFSET(SCB, AIRCR, VECTKEYSTAT))  /*!< Mask  0xFFFF0000 - read only field */

#define SCB_AIRCR_ENDIANNESS_OFFSET     (15U)
#define SCB_AIRCR_ENDIANNESS_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCB, AIRCR, ENDIANNESS))      /*!< Mask  0x00008000 */

#define SCB_AIRCR_PRIGROUP_OFFSET       (8U)
#define SCB_AIRCR_PRIGROUP_MASK         (0x7UL << REGISTER_FIELD_OFFSET(SCB, AIRCR, PRIGROUP))        /*!< Mask  0x00000700 */

#define SCB_AIRCR_SYSRESETREQ_OFFSET    (2U)
#define SCB_AIRCR_SYSRESETREQ_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, AIRCR, SYSRESETREQ))     /*!< Mask  0x00000004 */

#define SCB_AIRCR_VECTCLRACTIVE_OFFSET  (1U)
#define SCB_AIRCR_VECTCLRACTIVE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, AIRCR, VECTCLRACTIVE))   /*!< Mask  0x00000002 */

#define SCB_AIRCR_VECTRESET_OFFSET      (0U)
#define SCB_AIRCR_VECTRESET_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, AIRCR, VECTRESET))       /*!< Mask  0x00000001 */

// Values of vector key register
#define SCB_VECKEY       (0x05FAUL)  /*!< Value 0x000005FA */
#define SCB_VECKEYSTAT   (0xFA05UL)  /*!< Value 0x0000FA05 */

// Values of data endianness bit
#define SCB_ENDIANNESS_LITTLEENDIAN  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ENDIANNESS_BIGENDIAN     (0x1UL)  /*!< Value 0x00000001 */

// Values of interrupt priority grouping register
#define SCB_PRIGROUP_G128S2  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_PRIGROUP_G64S4   (0x1UL)  /*!< Value 0x00000001 */
#define SCB_PRIGROUP_G32S8   (0x2UL)  /*!< Value 0x00000002 */
#define SCB_PRIGROUP_G16S16  (0x3UL)  /*!< Value 0x00000003 */
#define SCB_PRIGROUP_G8S32   (0x4UL)  /*!< Value 0x00000004 */
#define SCB_PRIGROUP_G4S64   (0x5UL)  /*!< Value 0x00000005 */
#define SCB_PRIGROUP_G2S128  (0x6UL)  /*!< Value 0x00000006 */
#define SCB_PRIGROUP_G1S256  (0x7UL)  /*!< Value 0x00000007 */

// Values of system reset by an external source request bit (Asserting this bit forces a large system reset og all major components)
#define SCB_SYSRESET_NOREQUEST  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SYSRESET_REQUEST    (0x1UL)  /*!< Value 0x00000001 */

// Values of active state of exception clear bit
#define SCB_VECTACTIVE_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_VECTACTIVE_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of local system reset trigger bit
#define SCB_VECTRESET_NONE     (0x0UL)  /*!< Value 0x00000000 */
#define SCB_VECTRESET_TRIGGER  (0x1UL)  /*!< Value 0x00000001 */

/*!< System control register */
#define SCB_SCR_SEVONPEND_OFFSET    (4U)
#define SCB_SCR_SEVONPEND_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, SCR, SEVONPEND))    /*!< Mask  0x00000010 */

#define SCB_SCR_SLEEPDEEP_OFFSET    (2U)
#define SCB_SCR_SLEEPDEEP_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, SCR, SLEEPDEEP))    /*!< Mask  0x00000004 */

#define SCB_SCR_SLEEPONEXIT_OFFSET  (1U)
#define SCB_SCR_SLEEPONEXIT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, SCR, SLEEPONEXIT))  /*!< Mask  0x00000002 */

// Values of send event on pending bit
#define SCB_SEVONPEND_ENEVENTSWAKEUP   (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SEVONPEND_ALLEVENTSWAKEUP  (0x1UL)  /*!< Value 0x00000001 */

// Values of sleep state select bit
#define SCB_SLEEPDEEP_SLEEP      (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SLEEPDEEP_DEEPSLEEP  (0x1UL)  /*!< Value 0x00000001 */

// Values of sleep on ISR exit bit
#define SCB_SLEEPONEXIT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SLEEPONEXIT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Configuration and control register */
#define SCB_CCR_BP_OFFSET              (18U)
#define SCB_CCR_BP_MASK                (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, BP))              /*!< Mask  0x00040000 */

#define SCB_CCR_IC_OFFSET              (17U)
#define SCB_CCR_IC_MASK                (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, IC))              /*!< Mask  0x00020000 */

#define SCB_CCR_DC_OFFSET              (16U)
#define SCB_CCR_DC_MASK                (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, DC))              /*!< Mask  0x00010000 */

#define SCB_CCR_STKALIGN_OFFSET        (9U)
#define SCB_CCR_STKALIGN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, STKALIGN))        /*!< Mask  0x00000200 */

#define SCB_CCR_BFHFNMIGN_OFFSET       (8U)
#define SCB_CCR_BFHFNMIGN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, BFHFNMIGN))       /*!< Mask  0x00000100 */

#define SCB_CCR_DIV_0_TRAP_OFFSET      (4U)
#define SCB_CCR_DIV_0_TRAP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, DIV_0_TRAP))      /*!< Mask  0x00000010 */

#define SCB_CCR_UNALIGN_TRAP_OFFSET    (3U)
#define SCB_CCR_UNALIGN_TRAP_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, UNALIGN_TRAP))    /*!< Mask  0x00000008 */

#define SCB_CCR_USERSETMPEND_OFFSET    (1U)
#define SCB_CCR_USERSETMPEND_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, USERSETMPEND))    /*!< Mask  0x00000002 */

#define SCB_CCR_NONBASETHRDENA_OFFSET  (0U)
#define SCB_CCR_NONBASETHRDENA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCR, NONBASETHRDENA))  /*!< Mask  0x00000001 */

// Values of branch prediction enable bit
#define SCB_BRANCHPRED_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_BRANCHPRED_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of instruction cache enable bit
#define SCB_ICACHE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ICACHE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of data cache enable bit
#define SCB_DCACHE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_DCACHE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of stack alignment on exception entry select bit
#define SCB_STKALIGN_4BYTE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_STKALIGN_8BYTE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the bit controlling the effect of precise data access fault on handlers runign at priority -1 or priority -2
#define SCB_BFHFNMIGN_LOCKUP   (0x0UL)  /*!< Value 0x00000000 */
#define SCB_BFHFNMIGN_IGNORED  (0x1UL)  /*!< Value 0x00000001 */

// Values of trap on divide by 0 enable bit
#define SCB_DIV0TRAP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_DIV0TRAP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trap on ualigned work or halfword access enable bit
#define SCB_UNALIGNTRAP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_UNALIGNTRAP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of unprivileged software access to the software triggerred interrupt register (STIR) enable bit
#define SCB_USERSETMPEND_STIRNOTACCESSIBLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_USERSETMPEND_STIRACCESSIBLE     (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling how thread mode is entered
#define SCB_NONBASETHRDENA_NOEXCEPTIONACTIVE               (0x0UL)  /*!< Value 0x00000000 */
#define SCB_NONBASETHRDENA_CONTROLLEDEXCEPTIONRETURNVALUE  (0x1UL)  /*!< Value 0x00000001 */

/*!< System handler priority register */
#define SCB_SHPR_0  (0x01UL)  /*!< Value 0x00000001 */
#define SCB_SHPR_1  (0x02UL)  /*!< Value 0x00000002 */
#define SCB_SHPR_2  (0x04UL)  /*!< Value 0x00000004 */
#define SCB_SHPR_3  (0x08UL)  /*!< Value 0x00000008 */
#define SCB_SHPR_4  (0x10UL)  /*!< Value 0x00000010 */
#define SCB_SHPR_5  (0x20UL)  /*!< Value 0x00000020 */
#define SCB_SHPR_6  (0x40UL)  /*!< Value 0x00000040 */
#define SCB_SHPR_7  (0x80UL)  /*!< Value 0x00000080 */

// Values of system handler priority register
#define SCB_SHPR_SYSTICK_INDEX       (11U)
#define SCB_SHPR_PENDSV_INDEX        (10U)
#define SCB_SHPR_SYSHANDLER13_INDEX  (9U)
#define SCB_SHPR_DEBUGMONITOR_INDEX  (8U)
#define SCB_SHPR_SVCALL_INDEX        (7U)
#define SCB_SHPR_SYSHANDLER10_INDEX  (6U)
#define SCB_SHPR_SYSHANDLER9_INDEX   (5U)
#define SCB_SHPR_SYSHANDLER8_INDEX   (4U)
#define SCB_SHPR_SYSHANDLER7_INDEX   (3U)
#define SCB_SHPR_USAGEFAULT_INDEX    (2U)
#define SCB_SHPR_BUSFAULT_INDEX      (1U)
#define SCB_SHPR_MEMMANAGE_INDEX     (0U)

/*!< System handler control and state register */
#define SCB_SHCSR_USGFAULTEN_OFFSET      (18U)
#define SCB_SHCSR_USGFAULTEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, USGFAULTEN))      /*!< Mask  0x00040000 */

#define SCB_SHCSR_BUSFAULTEN_OFFSET      (17U)
#define SCB_SHCSR_BUSFAULTEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, BUSFAULTEN))      /*!< Mask  0x00020000 */

#define SCB_SHCSR_MEMFAULTEN_OFFSET      (16U)
#define SCB_SHCSR_MEMFAULTEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, MEMFAULTEN))      /*!< Mask  0x00010000 */

#define SCB_SHCSR_SVCALLPENDED_OFFSET    (15U)
#define SCB_SHCSR_SVCALLPENDED_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, SVCALLPENDED))    /*!< Mask  0x00008000 */

#define SCB_SHCSR_BUSFAULTPENDED_OFFSET  (14U)
#define SCB_SHCSR_BUSFAULTPENDED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, BUSFAULTPENDED))  /*!< Mask  0x00004000 */

#define SCB_SHCSR_MEMFAULTPENDED_OFFSET  (13U)
#define SCB_SHCSR_MEMFAULTPENDED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, MEMFAULTPENDED))  /*!< Mask  0x00002000 */

#define SCB_SHCSR_USGFAULTPENDED_OFFSET  (12U)
#define SCB_SHCSR_USGFAULTPENDED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, USGFAULTPENDED))  /*!< Mask  0x00001000 */

#define SCB_SHCSR_SYSTICKACT_OFFSET      (11U)
#define SCB_SHCSR_SYSTICKACT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, SYSTICKACT))      /*!< Mask  0x00000800 */

#define SCB_SHCSR_PENDSVACT_OFFSET       (10U)
#define SCB_SHCSR_PENDSVACT_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, PENDSVACT))       /*!< Mask  0x00000400 */

#define SCB_SHCSR_MONITORACT_OFFSET      (8U)
#define SCB_SHCSR_MONITORACT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, MONITORACT))      /*!< Mask  0x00000100 */

#define SCB_SHCSR_SVCALLACT_OFFSET       (7U)
#define SCB_SHCSR_SVCALLACT_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, SVCALLACT))       /*!< Mask  0x00000080 */

#define SCB_SHCSR_USGFAULTACT_OFFSET     (3U)
#define SCB_SHCSR_USGFAULTACT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, USGFAULTACT))     /*!< Mask  0x00000008 */

#define SCB_SHCSR_BUSFAULTACT_OFFSET     (1U)
#define SCB_SHCSR_BUSFAULTACT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, BUSFAULTACT))     /*!< Mask  0x00000002 */

#define SCB_SHCSR_MEMFAULTACT_OFFSET     (0U)
#define SCB_SHCSR_MEMFAULTACT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCB, SHCSR, MEMFAULTACT))     /*!< Mask  0x00000001 */

// Values of exception enable bit
#define SCB_EXCEPTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXCEPTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of exception pending bit
#define SCB_EXCEPTION_NOTPENDING  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXCEPTION_PENDING     (0x1UL)  /*!< Value 0x00000001 */

// Values of exception active bit
#define SCB_EXCEPTION_INACTIVE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXCEPTION_ACTIVE    (0x1UL)  /*!< Value 0x00000001 */

/*!< Configurable fault status register */
#define SCB_CFSR_UFSR_OFFSET  (16U)
#define SCB_CFSR_UFSR_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR))  /*!< Mask  0xFFFF0000 */

#define SCB_CFSR_BFSR_OFFSET    (8U)
#define SCB_CFSR_BFSR_MASK      (0xFFUL << REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR))      /*!< Mask  0x0000FF00 */

#define SCB_CFSR_MMFSR_OFFSET   (0U)
#define SCB_CFSR_MMFSR_MASK     (0xFFUL << REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR))     /*!< Mask  0x000000FF */

// Values of UsageFault status register
// Values of UsageFault status bits
#define SCB_UFSR_DIVBYZERO          (9U)
#define SCB_UFSR_UNALIGNEDACCESS    (8U)
#define SCB_UFSR_COPROCESSORACCESS  (3U)
#define SCB_UFSR_INVALIDPCLOAD      (2U)
#define SCB_UFSR_INVALIDSTATE       (1U)
#define SCB_UFSR_UNDEFINEDINSTR     (0U)

#define SCB_UFSR_DIVBYZERO_OFFSET   (REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR) + SCB_UFSR_DIVBYZERO)
#define SCB_UFSR_DIVBYZERO_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, UFSR, DIVBYZERO))   /*!< Mask  0x02000000 */

#define SCB_UFSR_UNALIGNED_OFFSET   (REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR) + SCB_UFSR_UNALIGNEDACCESS)
#define SCB_UFSR_UNALIGNED_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, UFSR, UNALIGNED))   /*!< Mask  0x01000000 */

#define SCB_UFSR_NOCP_OFFSET        (REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR) + SCB_UFSR_COPROCESSORACCESS)
#define SCB_UFSR_NOCP_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SCB, UFSR, NOCP))        /*!< Mask  0x00080000 */

#define SCB_UFSR_INVPC_OFFSET       (REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR) + SCB_UFSR_INVALIDPCLOAD)
#define SCB_UFSR_INVPC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, UFSR, INVPC))       /*!< Mask  0x00040000 */

#define SCB_UFSR_INVSTATE_OFFSET    (REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR) + SCB_UFSR_INVALIDSTATE)
#define SCB_UFSR_INVSTATE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, UFSR, INVSTATE))    /*!< Mask  0x00020000 */

#define SCB_UFSR_INSTRINSTR_OFFSET  (REGISTER_FIELD_OFFSET(SCB, CFSR, UFSR) + SCB_UFSR_UNDEFINEDINSTR)
#define SCB_UFSR_INSTRINSTR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, UFSR, INSTRINSTR))  /*!< Mask  0x00010000 */

// Values of BusFault status register
// Values of BusFault status bits
#define SCB_BFSR_VALID                  (7U)
#define SCB_BFSR_LAZYSTATEPRESERVATION  (5U)
#define SCB_BFSR_EXCEPTIONENTRY         (4U)
#define SCB_BFSR_EXCEPTIONRETURN        (3U)
#define SCB_BFSR_IMPRECISEDATAACCESS    (2U)
#define SCB_BFSR_PRECISEDATAACCESS      (1U)
#define SCB_BFSR_INSTRPREFETCH          (0U)

#define SCB_BFSR_BFVALID_OFFSET      (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_VALID)
#define SCB_BFSR_BFVALID_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, BFVALID))      /*!< Mask  0x00008000 */

#define SCB_BFSR_LSPERR_OFFSET       (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_LAZYSTATEPRESERVATION)
#define SCB_BFSR_LSPERR_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, LSPERR))       /*!< Mask  0x00002000 */

#define SCB_BFSR_STKERR_OFFSET       (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_STKERR)
#define SCB_BFSR_STKERR_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, STKERR))       /*!< Mask  0x00001000 */

#define SCB_BFSR_UNSTKERR_OFFSET     (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_UNSTKERR)
#define SCB_BFSR_UNSTKERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, UNSTKERR))     /*!< Mask  0x00000800 */

#define SCB_BFSR_IMPRECISERR_OFFSET  (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_IMPRECISEDATAACCESS)
#define SCB_BFSR_IMPRECISERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, IMPRECISERR))  /*!< Mask  0x00000400 */

#define SCB_BFSR_PRECISERR_OFFSET    (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_PRECISEDATAACCESS)
#define SCB_BFSR_PRECISERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, PRECISERR))    /*!< Mask  0x00000200 */

#define SCB_BFSR_IBUERR_OFFSET       (REGISTER_FIELD_OFFSET(SCB, CFSR, BFSR) + SCB_BFSR_INSTRPREFETCH)
#define SCB_BFSR_IBUERR_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, BFSR, IBUERR))       /*!< Mask  0x00000100 */

// Values of MemManage fault status register (MMFSR)
// Values of MemManage fault status bits
#define SCB_MMFSR_VALID                  (7U)
#define SCB_MMFSR_LAZYSTATEPRESERVATION  (5U)
#define SCB_MMFSR_EXCEPTIONENTRY         (4U)
#define SCB_MMFSR_EXCEPTIONRETURN        (3U)
#define SCB_MMFSR_DATAACCESSVIOLATION    (1U)
#define SCB_MMFSR_INSTRACCESSVIOLATION   (0U)

#define SCB_MMFSR_MMARVALID_OFFSET  (REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR) + SCB_MMFSR_VALID)
#define SCB_MMFSR_MMARVALID_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, MMFSR, MMARVALID))  /*!< Mask  0x00000080 */

#define SCB_MMFSR_MLSPERR_OFFSET    (REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR) + SCB_MMFSR_LAZYSTATEPRESERVATION)
#define SCB_MMFSR_MLSPERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, MMFSR, MLSPERR))    /*!< Mask  0x00000020 */

#define SCB_MMFSR_MSTKERR_OFFSET    (REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR) + SCB_MMFSR_EXCEPTIONENTRY)
#define SCB_MMFSR_MSTKERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, MMFSR, MSTKERR))    /*!< Mask  0x00000010 */

#define SCB_MMFSR_MUNSTKERR_OFFSET  (REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR) + SCB_MMFSR_EXCEPTIONRETURN)
#define SCB_MMFSR_MUNSTKERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, MMFSR, MUNSTKERR))  /*!< Mask  0x00000008 */

#define SCB_MMFSR_DACCVIOL_OFFSET   (REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR) + SCB_MMFSR_DATAACCESSVIOLATION)
#define SCB_MMFSR_DACCVIOL_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, MMFSR, DACCVIOL))   /*!< Mask  0x00000002 */

#define SCB_MMFSR_IACCVIOL_OFFSET   (REGISTER_FIELD_OFFSET(SCB, CFSR, MMFSR) + SCB_MMFSR_INSTRACCESSVIOLATION)
#define SCB_MMFSR_IACCVIOL_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, MMFSR, IACCVIOL))   /*!< Mask  0x00000001 */

/*!< HardFault status register */
#define SCB_HFSR_DEBUGEVT_OFFSET  (31U)
#define SCB_HFSR_DEBUGEVT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, HFSR, DEBUGEVT))  /*!< Mask  0x80000000 */

#define SCB_HFSR_FORCED_OFFSET    (30U)
#define SCB_HFSR_FORCED_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, HFSR, FORCED))    /*!< Mask  0x40000000 */

#define SCB_HFSR_VECTTBL_OFFSET   (1U)
#define SCB_HFSR_VECTTBL_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, HFSR, VECTTBL))   /*!< Mask  0x00000002 */

// Values of debug event status bit
#define SCB_NODEBUGEVENT  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_DEBUGEVENT    (0x1UL)  /*!< Value 0x00000001 */

// Values bit controlling whether a fault with configurable priority has been escalated to a HardFault
#define SCB_NOFAULTESCALATION  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_FAULTESCALATION    (0x1UL)  /*!< Value 0x00000001 */

// Values of vector table read error status bit
#define SCB_VECTTBL_READNOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_VECTTBL_READOCCURRED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Debug fault status register */
#define SCB_DFSR_EXTERNAL_OFFSET  (4U)
#define SCB_DFSR_EXTERNAL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, DFSR, EXTERNAL))  /*!< Mask  0x00000010 */

#define SCB_DFSR_VCATCH_OFFSET    (3U)
#define SCB_DFSR_VCATCH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, DFSR, VCATCH))    /*!< Mask  0x00000008 */

#define SCB_DFSR_DWTEVENT_OFFSET  (2U)
#define SCB_DFSR_DWTEVENT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, DFSR, DWTEVENT))  /*!< Mask  0x00000004 */

#define SCB_DFSR_BKPT_OFFSET      (1U)
#define SCB_DFSR_BKPT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, DFSR, BKPT))      /*!< Mask  0x00000002 */

#define SCB_DFSR_HALTED_OFFSET    (0U)
#define SCB_DFSR_HALTED_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, DFSR, HALTED))    /*!< Mask  0x00000001 */

// Values of external debug request status bit
#define SCB_NOEXTERNALREQ  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXTERNALREQ    (0x1UL)  /*!< Value 0x00000001 */

// Values of vector catch event status bit
#define SCB_VECTCATCH_NOTTRIGGERED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_VECTCATCH_TRIGGERED     (0x1UL)  /*!< Value 0x00000001 */

// Values of data watchpoint and trace (DWT) event status bit
#define SCB_DWT_NOEVENT  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_DWT_EVENT    (0x1UL)  /*!< Value 0x00000001 */

// Values of breakpoint debug event status bit
#define SCB_NOBREAKPOINTEVENT  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_BREAKPOINTEVENT    (0x1UL)  /*!< Value 0x00000001 */

// Values of vector table read error status bit
#define SCB_NOHALTEVENT  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_HALTEVENT    (0x1UL)  /*!< Value 0x00000001 */

/*!< MemManage fault address register */
#define SCB_MMFAR_ADDRESS_OFFSET  (0U)
#define SCB_MMFAR_ADDRESS_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Mask  0xFFFFFFFF */
#define SCB_MMFAR_ADDRESS_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000001 */
#define SCB_MMFAR_ADDRESS_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000002 */
#define SCB_MMFAR_ADDRESS_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000004 */
#define SCB_MMFAR_ADDRESS_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000008 */
#define SCB_MMFAR_ADDRESS_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000010 */
#define SCB_MMFAR_ADDRESS_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000020 */
#define SCB_MMFAR_ADDRESS_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000040 */
#define SCB_MMFAR_ADDRESS_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000080 */
#define SCB_MMFAR_ADDRESS_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000100 */
#define SCB_MMFAR_ADDRESS_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000200 */
#define SCB_MMFAR_ADDRESS_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000400 */
#define SCB_MMFAR_ADDRESS_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00000800 */
#define SCB_MMFAR_ADDRESS_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00001000 */
#define SCB_MMFAR_ADDRESS_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00002000 */
#define SCB_MMFAR_ADDRESS_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00004000 */
#define SCB_MMFAR_ADDRESS_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00008000 */
#define SCB_MMFAR_ADDRESS_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00010000 */
#define SCB_MMFAR_ADDRESS_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00020000 */
#define SCB_MMFAR_ADDRESS_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00040000 */
#define SCB_MMFAR_ADDRESS_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00080000 */
#define SCB_MMFAR_ADDRESS_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00100000 */
#define SCB_MMFAR_ADDRESS_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00200000 */
#define SCB_MMFAR_ADDRESS_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00400000 */
#define SCB_MMFAR_ADDRESS_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x00800000 */
#define SCB_MMFAR_ADDRESS_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x01000000 */
#define SCB_MMFAR_ADDRESS_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x02000000 */
#define SCB_MMFAR_ADDRESS_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x04000000 */
#define SCB_MMFAR_ADDRESS_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x08000000 */
#define SCB_MMFAR_ADDRESS_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x10000000 */
#define SCB_MMFAR_ADDRESS_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x20000000 */
#define SCB_MMFAR_ADDRESS_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x40000000 */
#define SCB_MMFAR_ADDRESS_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCB, MMFAR, ADDRESS))  /*!< Value 0x80000000 */

/*!< BusFault fault address register */
#define SCB_BFAR_ADDRESS_OFFSET  (0U)
#define SCB_BFAR_ADDRESS_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Mask  0xFFFFFFFF */
#define SCB_BFAR_ADDRESS_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000001 */
#define SCB_BFAR_ADDRESS_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000002 */
#define SCB_BFAR_ADDRESS_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000004 */
#define SCB_BFAR_ADDRESS_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000008 */
#define SCB_BFAR_ADDRESS_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000010 */
#define SCB_BFAR_ADDRESS_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000020 */
#define SCB_BFAR_ADDRESS_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000040 */
#define SCB_BFAR_ADDRESS_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000080 */
#define SCB_BFAR_ADDRESS_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000100 */
#define SCB_BFAR_ADDRESS_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000200 */
#define SCB_BFAR_ADDRESS_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000400 */
#define SCB_BFAR_ADDRESS_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00000800 */
#define SCB_BFAR_ADDRESS_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00001000 */
#define SCB_BFAR_ADDRESS_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00002000 */
#define SCB_BFAR_ADDRESS_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00004000 */
#define SCB_BFAR_ADDRESS_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00008000 */
#define SCB_BFAR_ADDRESS_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00010000 */
#define SCB_BFAR_ADDRESS_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00020000 */
#define SCB_BFAR_ADDRESS_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00040000 */
#define SCB_BFAR_ADDRESS_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00080000 */
#define SCB_BFAR_ADDRESS_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00100000 */
#define SCB_BFAR_ADDRESS_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00200000 */
#define SCB_BFAR_ADDRESS_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00400000 */
#define SCB_BFAR_ADDRESS_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x00800000 */
#define SCB_BFAR_ADDRESS_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x01000000 */
#define SCB_BFAR_ADDRESS_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x02000000 */
#define SCB_BFAR_ADDRESS_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x04000000 */
#define SCB_BFAR_ADDRESS_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x08000000 */
#define SCB_BFAR_ADDRESS_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x10000000 */
#define SCB_BFAR_ADDRESS_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x20000000 */
#define SCB_BFAR_ADDRESS_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x40000000 */
#define SCB_BFAR_ADDRESS_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCB, BFAR, ADDRESS))  /*!< Value 0x80000000 */

/*!< Processor feature 0 register */
#define SCB_ID_PFR0_STATE3_OFFSET  (12U)
#define SCB_ID_PFR0_STATE3_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE3))  /*!< Mask  0x0000F000 */
#define SCB_ID_PFR0_STATE3_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE3))  /*!< Value 0x00000001 */
#define SCB_ID_PFR0_STATE3_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE3))  /*!< Value 0x00000002 */
#define SCB_ID_PFR0_STATE3_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE3))  /*!< Value 0x00000004 */
#define SCB_ID_PFR0_STATE3_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE3))  /*!< Value 0x00000008 */

#define SCB_ID_PFR0_STATE2_OFFSET  (8U)
#define SCB_ID_PFR0_STATE2_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE2))  /*!< Mask  0x00000F00 */
#define SCB_ID_PFR0_STATE2_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE2))  /*!< Value 0x00000001 */
#define SCB_ID_PFR0_STATE2_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE2))  /*!< Value 0x00000002 */
#define SCB_ID_PFR0_STATE2_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE2))  /*!< Value 0x00000004 */
#define SCB_ID_PFR0_STATE2_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE2))  /*!< Value 0x00000008 */

#define SCB_ID_PFR0_STATE1_OFFSET  (4U)
#define SCB_ID_PFR0_STATE1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE1))  /*!< Mask  0x000000F0 */
#define SCB_ID_PFR0_STATE1_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE1))  /*!< Value 0x00000001 */
#define SCB_ID_PFR0_STATE1_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE1))  /*!< Value 0x00000002 */
#define SCB_ID_PFR0_STATE1_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE1))  /*!< Value 0x00000004 */
#define SCB_ID_PFR0_STATE1_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE1))  /*!< Value 0x00000008 */

#define SCB_ID_PFR0_STATE0_OFFSET  (0U)
#define SCB_ID_PFR0_STATE0_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE0))  /*!< Mask  0x0000000F */
#define SCB_ID_PFR0_STATE0_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE0))  /*!< Value 0x00000001 */
#define SCB_ID_PFR0_STATE0_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE0))  /*!< Value 0x00000002 */
#define SCB_ID_PFR0_STATE0_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE0))  /*!< Value 0x00000004 */
#define SCB_ID_PFR0_STATE0_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR0, STATE0))  /*!< Value 0x00000008 */

// Values of state1 register
#define SCB_ID_PFR0_STATE1_ARMV7MRSVD0    (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ID_PFR0_STATE1_ARMV7MRSVD1    (0x1UL)  /*!< Value 0x00000001 */
#define SCB_ID_PFR0_STATE1_ARMV7MRSVD2    (0x2UL)  /*!< Value 0x00000002 */
#define SCB_ID_PFR0_STATE1_THUMBINSTRSET  (0x3UL)  /*!< Value 0x00000003 */

// Values of state0 register
#define SCB_ID_PFR0_STATE0_NOARMINSTRSET  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ID_PFR0_STATE0_ARMV7MRSVD     (0x1UL)  /*!< Value 0x00000001 */

/*!< Processor feature 1 register */
#define SCB_ID_PFR1_MPROFILEPROGMODEL_OFFSET  (8U)
#define SCB_ID_PFR1_MPROFILEPROGMODEL_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, MPROFILEPROGMODEL))  /*!< Mask  0x00000F00 */
#define SCB_ID_PFR1_MPROFILEPROGMODEL_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, MPROFILEPROGMODEL))  /*!< Value 0x00000001 */
#define SCB_ID_PFR1_MPROFILEPROGMODEL_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, MPROFILEPROGMODEL))  /*!< Value 0x00000002 */
#define SCB_ID_PFR1_MPROFILEPROGMODEL_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, MPROFILEPROGMODEL))  /*!< Value 0x00000004 */
#define SCB_ID_PFR1_MPROFILEPROGMODEL_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, MPROFILEPROGMODEL))  /*!< Value 0x00000008 */

#define SCB_ID_PFR1_ARMV7MRSVD_OFFSET         (0U)
#define SCB_ID_PFR1_ARMV7MRSVD_MASK           (0xFFUL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Mask  0x000000FF */
#define SCB_ID_PFR1_ARMV7MRSVD_0              (0x01UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000001 */
#define SCB_ID_PFR1_ARMV7MRSVD_1              (0x02UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000002 */
#define SCB_ID_PFR1_ARMV7MRSVD_2              (0x04UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000004 */
#define SCB_ID_PFR1_ARMV7MRSVD_3              (0x08UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000008 */
#define SCB_ID_PFR1_ARMV7MRSVD_4              (0x10UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000010 */
#define SCB_ID_PFR1_ARMV7MRSVD_5              (0x20UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000020 */
#define SCB_ID_PFR1_ARMV7MRSVD_6              (0x40UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000040 */
#define SCB_ID_PFR1_ARMV7MRSVD_7              (0x80UL << REGISTER_FIELD_OFFSET(SCB, ID_PFR1, ARMV7MRSVD))        /*!< Value 0x00000080 */

// Values of M profile programmers' model register
#define SCB_MPROFILEPROGMODEL_ARMV7MRSVD  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_MPROFILEPROGMODEL_TWOSTACK    (0x2UL)  /*!< Value 0x00000002 */

/*!< Debug feature register */
#define SCB_ID_DFR0_MPROFILEDEBUGMODEL_OFFSET  (20U)
#define SCB_ID_DFR0_MPROFILEDEBUGMODEL_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, MPROFILEDEBUGMODEL))  /*!< Mask  0x00F00000 */
#define SCB_ID_DFR0_MPROFILEDEBUGMODEL_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, MPROFILEDEBUGMODEL))  /*!< Value 0x00100000 */
#define SCB_ID_DFR0_MPROFILEDEBUGMODEL_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, MPROFILEDEBUGMODEL))  /*!< Value 0x00200000 */
#define SCB_ID_DFR0_MPROFILEDEBUGMODEL_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, MPROFILEDEBUGMODEL))  /*!< Value 0x00400000 */
#define SCB_ID_DFR0_MPROFILEDEBUGMODEL_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, MPROFILEDEBUGMODEL))  /*!< Value 0x00800000 */

#define SCB_ID_DFR0_ARMV7MRSVD_OFFSET          (0U)
#define SCB_ID_DFR0_ARMV7MRSVD_MASK            (0xFFFFFUL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Mask  0x000FFFFF */
#define SCB_ID_DFR0_ARMV7MRSVD_0               (0x00001UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000001 */
#define SCB_ID_DFR0_ARMV7MRSVD_1               (0x00002UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000002 */
#define SCB_ID_DFR0_ARMV7MRSVD_2               (0x00004UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000004 */
#define SCB_ID_DFR0_ARMV7MRSVD_3               (0x00008UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000008 */
#define SCB_ID_DFR0_ARMV7MRSVD_4               (0x00010UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000010 */
#define SCB_ID_DFR0_ARMV7MRSVD_5               (0x00020UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000020 */
#define SCB_ID_DFR0_ARMV7MRSVD_6               (0x00040UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000040 */
#define SCB_ID_DFR0_ARMV7MRSVD_7               (0x00080UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000080 */
#define SCB_ID_DFR0_ARMV7MRSVD_8               (0x00100UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000100 */
#define SCB_ID_DFR0_ARMV7MRSVD_9               (0x00200UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000200 */
#define SCB_ID_DFR0_ARMV7MRSVD_10              (0x00400UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000400 */
#define SCB_ID_DFR0_ARMV7MRSVD_11              (0x00800UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00000800 */
#define SCB_ID_DFR0_ARMV7MRSVD_12              (0x01000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00001000 */
#define SCB_ID_DFR0_ARMV7MRSVD_13              (0x02000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00002000 */
#define SCB_ID_DFR0_ARMV7MRSVD_14              (0x04000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00004000 */
#define SCB_ID_DFR0_ARMV7MRSVD_15              (0x08000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00008000 */
#define SCB_ID_DFR0_ARMV7MRSVD_16              (0x10000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00010000 */
#define SCB_ID_DFR0_ARMV7MRSVD_17              (0x20000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00020000 */
#define SCB_ID_DFR0_ARMV7MRSVD_18              (0x40000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00040000 */
#define SCB_ID_DFR0_ARMV7MRSVD_19              (0x80000UL << REGISTER_FIELD_OFFSET(SCB, ID_DFR0, ARMV7MRSVD))      /*!< Value 0x00080000 */

// Values of M profile debug model register
#define SCB_MPROFILEDEBUGMODEL_MEMORYMAPPEDACCESSDISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_MPROFILEDEBUGMODEL_MEMORYMAPPEDACCESSENABLED   (0x1UL)  /*!< Value 0x00000001 */

/*!< Auxiliary feature register */
#define SCB_ID_AFR0_BYTE3_OFFSET  (12U)
#define SCB_ID_AFR0_BYTE3_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE3))  /*!< Mask  0x0000F000 */
#define SCB_ID_AFR0_BYTE3_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE3))  /*!< Value 0x00001000 */
#define SCB_ID_AFR0_BYTE3_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE3))  /*!< Value 0x00002000 */
#define SCB_ID_AFR0_BYTE3_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE3))  /*!< Value 0x00004000 */
#define SCB_ID_AFR0_BYTE3_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE3))  /*!< Value 0x00008000 */

#define SCB_ID_AFR0_BYTE2_OFFSET  (8U)
#define SCB_ID_AFR0_BYTE2_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE2))  /*!< Mask  0x00000F00 */
#define SCB_ID_AFR0_BYTE2_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE2))  /*!< Value 0x00000100 */
#define SCB_ID_AFR0_BYTE2_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE2))  /*!< Value 0x00000200 */
#define SCB_ID_AFR0_BYTE2_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE2))  /*!< Value 0x00000400 */
#define SCB_ID_AFR0_BYTE2_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE2))  /*!< Value 0x00000800 */

#define SCB_ID_AFR0_BYTE1_OFFSET  (4U)
#define SCB_ID_AFR0_BYTE1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE1))  /*!< Mask  0x000000F0 */
#define SCB_ID_AFR0_BYTE1_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE1))  /*!< Value 0x00000010 */
#define SCB_ID_AFR0_BYTE1_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE1))  /*!< Value 0x00000020 */
#define SCB_ID_AFR0_BYTE1_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE1))  /*!< Value 0x00000040 */
#define SCB_ID_AFR0_BYTE1_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE1))  /*!< Value 0x00000080 */

#define SCB_ID_AFR0_BYTE0_OFFSET  (0U)
#define SCB_ID_AFR0_BYTE0_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE0))  /*!< Mask  0x0000000F */
#define SCB_ID_AFR0_BYTE0_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE0))  /*!< Value 0x00000001 */
#define SCB_ID_AFR0_BYTE0_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE0))  /*!< Value 0x00000002 */
#define SCB_ID_AFR0_BYTE0_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE0))  /*!< Value 0x00000004 */
#define SCB_ID_AFR0_BYTE0_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_AFR0, BYTE0))  /*!< Value 0x00000008 */

/*!< Model memory feature 0 register */
#define SCB_ID_MMFR0_ARMV7MRSVD1_OFFSET            (24U)
#define SCB_ID_MMFR0_ARMV7MRSVD1_MASK              (0xFFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Mask  0xFF000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_0                 (0x01UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x01000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_1                 (0x02UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x02000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_2                 (0x04UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x04000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_3                 (0x08UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x08000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_4                 (0x10UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x10000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_5                 (0x20UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x20000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_6                 (0x40UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x40000000 */
#define SCB_ID_MMFR0_ARMV7MRSVD1_7                 (0x80UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD1))           /*!< Value 0x80000000 */

#define SCB_ID_MMFR0_AUXREGSSUPPORT_OFFSET         (20U)
#define SCB_ID_MMFR0_AUXREGSSUPPORT_MASK           (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, AUXREGSSUPPORT))         /*!< Mask  0x00F00000 */
#define SCB_ID_MMFR0_AUXREGSSUPPORT_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, AUXREGSSUPPORT))         /*!< Value 0x00100000 */
#define SCB_ID_MMFR0_AUXREGSSUPPORT_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, AUXREGSSUPPORT))         /*!< Value 0x00200000 */
#define SCB_ID_MMFR0_AUXREGSSUPPORT_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, AUXREGSSUPPORT))         /*!< Value 0x00400000 */
#define SCB_ID_MMFR0_AUXREGSSUPPORT_3              (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, AUXREGSSUPPORT))         /*!< Value 0x00800000 */

#define SCB_ID_MMFR0_TCMSUPPORT_OFFSET             (16U)
#define SCB_ID_MMFR0_TCMSUPPORT_MASK               (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, TCMSUPPORT))             /*!< Mask  0x000F0000 */
#define SCB_ID_MMFR0_TCMSUPPORT_0                  (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, TCMSUPPORT))             /*!< Value 0x00010000 */
#define SCB_ID_MMFR0_TCMSUPPORT_1                  (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, TCMSUPPORT))             /*!< Value 0x00020000 */
#define SCB_ID_MMFR0_TCMSUPPORT_2                  (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, TCMSUPPORT))             /*!< Value 0x00040000 */
#define SCB_ID_MMFR0_TCMSUPPORT_3                  (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, TCMSUPPORT))             /*!< Value 0x00080000 */

#define SCB_ID_MMFR0_SHAREABILITYLEVELS_OFFSET     (12U)
#define SCB_ID_MMFR0_SHAREABILITYLEVELS_MASK       (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, SHAREABILITYLEVELS))     /*!< Mask  0x0000F000 */
#define SCB_ID_MMFR0_SHAREABILITYLEVELS_0          (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, SHAREABILITYLEVELS))     /*!< Value 0x00001000 */
#define SCB_ID_MMFR0_SHAREABILITYLEVELS_1          (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, SHAREABILITYLEVELS))     /*!< Value 0x00002000 */
#define SCB_ID_MMFR0_SHAREABILITYLEVELS_2          (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, SHAREABILITYLEVELS))     /*!< Value 0x00004000 */
#define SCB_ID_MMFR0_SHAREABILITYLEVELS_3          (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, SHAREABILITYLEVELS))     /*!< Value 0x00008000 */

#define SCB_ID_MMFR0_OUTERMOSTSHAREABILITY_OFFSET  (8U)
#define SCB_ID_MMFR0_OUTERMOSTSHAREABILITY_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, OUTERMOSTSHAREABILITY))  /*!< Mask  0x00000F00 */
#define SCB_ID_MMFR0_OUTERMOSTSHAREABILITY_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, OUTERMOSTSHAREABILITY))  /*!< Value 0x00000100 */
#define SCB_ID_MMFR0_OUTERMOSTSHAREABILITY_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, OUTERMOSTSHAREABILITY))  /*!< Value 0x00000200 */
#define SCB_ID_MMFR0_OUTERMOSTSHAREABILITY_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, OUTERMOSTSHAREABILITY))  /*!< Value 0x00000400 */
#define SCB_ID_MMFR0_OUTERMOSTSHAREABILITY_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, OUTERMOSTSHAREABILITY))  /*!< Value 0x00000800 */

#define SCB_ID_MMFR0_PMSASUPPORT_OFFSET            (4U)
#define SCB_ID_MMFR0_PMSASUPPORT_MASK              (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, PMSASUPPORT))            /*!< Mask  0x000000F0 */
#define SCB_ID_MMFR0_PMSASUPPORT_0                 (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, PMSASUPPORT))            /*!< Value 0x00000010 */
#define SCB_ID_MMFR0_PMSASUPPORT_1                 (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, PMSASUPPORT))            /*!< Value 0x00000020 */
#define SCB_ID_MMFR0_PMSASUPPORT_2                 (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, PMSASUPPORT))            /*!< Value 0x00000040 */
#define SCB_ID_MMFR0_PMSASUPPORT_3                 (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, PMSASUPPORT))            /*!< Value 0x00000080 */

#define SCB_ID_MMFR0_ARMV7MRSVD0_OFFSET            (0U)
#define SCB_ID_MMFR0_ARMV7MRSVD0_MASK              (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD0))            /*!< Mask  0x0000000F */
#define SCB_ID_MMFR0_ARMV7MRSVD0_0                 (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD0))            /*!< Value 0x00000001 */
#define SCB_ID_MMFR0_ARMV7MRSVD0_1                 (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD0))            /*!< Value 0x00000002 */
#define SCB_ID_MMFR0_ARMV7MRSVD0_2                 (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD0))            /*!< Value 0x00000004 */
#define SCB_ID_MMFR0_ARMV7MRSVD0_3                 (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR0, ARMV7MRSVD0))            /*!< Value 0x00000008 */

// Values of auxiliary register support register
#define SCB_AUXREGSSUPPORT_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define SCB_AUXREGSSUPPORT_AUXCTRLREG  (0x1UL)  /*!< Value 0x00000001 */
#define SCB_AUXREGSSUPPORT_ARMV7MRSVD  (0x2UL)  /*!< Value 0x00000002 */

// Values of tightly coupled memory (TCM) support register
#define SCB_TCMSUPPORT_NOTSUPPORTED         (0x0UL)  /*!< Value 0x00000000 */
#define SCB_TCMSUPPORT_IMPLEMENTEDWITHCTRL  (0x1UL)  /*!< Value 0x00000001 */
#define SCB_TCMSUPPORT_ARMV7MRSVD           (0x2UL)  /*!< Value 0x00000002 */

// Values of shareability levels register
#define SCB_SHAREABILITYLEVELS_ONELEVEL    (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SHAREABILITYLEVELS_ARMV7MRSVD  (0x1UL)  /*!< Value 0x00000001 */

// Values of outermost shareability register
#define SCB_OUTERMOSTSHAREABILITY_NONCACHABLE (0x0UL)  /*!< Value 0x00000000 */
#define SCB_OUTERMOSTSHAREABILITY_ARMV7MRSVD  (0x1UL)  /*!< Value 0x00000001 */
#define SCB_OUTERMOSTSHAREABILITY_IGNORED     (0xFUL)  /*!< Value 0x0000000F */

// Values of protected memory system architecture (PMSAv7) support register
#define SCB_PMSASUPPORT_NOTSUPPORTED          (0x0UL)  /*!< Value 0x00000000 */
#define SCB_PMSASUPPORT_ARMV7MRSVD0           (0x1UL)  /*!< Value 0x00000001 */
#define SCB_PMSASUPPORT_ARMV7MRSVD1           (0x2UL)  /*!< Value 0x00000002 */
#define SCB_PMSASUPPORT_BASEREGIONSUBREGIONS  (0x1UL)  /*!< Value 0x00000003 */

/*!< Model memory feature 1 register */
#define SCB_ID_MMFR1_ARMV7MRSVD_OFFSET  (0U)
#define SCB_ID_MMFR1_ARMV7MRSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Mask  0xFFFFFFFF */
#define SCB_ID_MMFR1_ARMV7MRSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000001 */
#define SCB_ID_MMFR1_ARMV7MRSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000002 */
#define SCB_ID_MMFR1_ARMV7MRSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000004 */
#define SCB_ID_MMFR1_ARMV7MRSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000008 */
#define SCB_ID_MMFR1_ARMV7MRSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000010 */
#define SCB_ID_MMFR1_ARMV7MRSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000020 */
#define SCB_ID_MMFR1_ARMV7MRSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000040 */
#define SCB_ID_MMFR1_ARMV7MRSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000080 */
#define SCB_ID_MMFR1_ARMV7MRSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000100 */
#define SCB_ID_MMFR1_ARMV7MRSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000200 */
#define SCB_ID_MMFR1_ARMV7MRSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000400 */
#define SCB_ID_MMFR1_ARMV7MRSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00000800 */
#define SCB_ID_MMFR1_ARMV7MRSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00001000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00002000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00004000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00008000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00010000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00020000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00040000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00080000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00100000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00200000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00400000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x00800000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x01000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x02000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x04000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x08000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x10000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x20000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x40000000 */
#define SCB_ID_MMFR1_ARMV7MRSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR1, ARMV7MRSVD))  /*!< Value 0x80000000 */

/*!< Model memory feature 2 register */
#define SCB_ID_MMFR2_ARMV7MRSVD1_OFFSET  (28U)
#define SCB_ID_MMFR2_ARMV7MRSVD1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD1))       /*!< Mask  0xF0000000 */
#define SCB_ID_MMFR2_ARMV7MRSVD1_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD1))       /*!< Value 0x10000000 */
#define SCB_ID_MMFR2_ARMV7MRSVD1_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD1))       /*!< Value 0x20000000 */
#define SCB_ID_MMFR2_ARMV7MRSVD1_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD1))       /*!< Value 0x40000000 */
#define SCB_ID_MMFR2_ARMV7MRSVD1_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD1))       /*!< Value 0x80000000 */

#define SCB_ID_MMFR2_WFISTALL_OFFSET     (24U)
#define SCB_ID_MMFR2_WFISTALL_MASK       (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, WFISTALL))          /*!< Mask  0x0F000000 */
#define SCB_ID_MMFR2_WFISTALL_0          (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, WFISTALL))          /*!< Value 0x01000000 */
#define SCB_ID_MMFR2_WFISTALL_1          (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, WFISTALL))          /*!< Value 0x02000000 */
#define SCB_ID_MMFR2_WFISTALL_2          (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, WFISTALL))          /*!< Value 0x04000000 */
#define SCB_ID_MMFR2_WFISTALL_3          (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, WFISTALL))          /*!< Value 0x08000000 */

#define SCB_ID_MMFR2_ARMV7MRSVD0_OFFSET  (0U)
#define SCB_ID_MMFR2_ARMV7MRSVD0_MASK    (0xFFFFFFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Mask  0x00FFFFFF */
#define SCB_ID_MMFR2_ARMV7MRSVD0_0       (0x000001UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000001 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_1       (0x000002UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000002 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_2       (0x000004UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000004 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_3       (0x000008UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000008 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_4       (0x000010UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000010 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_5       (0x000020UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000020 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_6       (0x000040UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000040 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_7       (0x000080UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000080 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_8       (0x000100UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000100 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_9       (0x000200UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000200 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_10      (0x000400UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000400 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_11      (0x000800UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00000800 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_12      (0x001000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00001000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_13      (0x002000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00002000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_14      (0x004000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00004000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_15      (0x008000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00008000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_16      (0x010000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00010000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_17      (0x020000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00020000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_18      (0x040000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00040000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_19      (0x080000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00080000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_20      (0x100000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00100000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_21      (0x200000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00200000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_22      (0x400000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00400000 */
#define SCB_ID_MMFR2_ARMV7MRSVD0_23      (0x800000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR2, ARMV7MRSVD0))  /*!< Value 0x00800000 */

// Values of wait for interrupt (WFI) stalling register
#define SCB_WFISTALL_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_WFISTALL_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Model memory feature 3 register */
#define SCB_ID_MMFR3_ARMV7MRSVD2_OFFSET  (28U)
#define SCB_ID_MMFR3_ARMV7MRSVD2_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD2))     /*!< Mask  0xF0000000 */
#define SCB_ID_MMFR3_ARMV7MRSVD2_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD2))     /*!< Value 0x10000000 */
#define SCB_ID_MMFR3_ARMV7MRSVD2_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD2))     /*!< Value 0x20000000 */
#define SCB_ID_MMFR3_ARMV7MRSVD2_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD2))     /*!< Value 0x40000000 */
#define SCB_ID_MMFR3_ARMV7MRSVD2_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD2))     /*!< Value 0x80000000 */

#define SCB_ID_MMFR3_ARMV7MRSVD1_OFFSET  (20U)
#define SCB_ID_MMFR3_ARMV7MRSVD1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD1))     /*!< Mask  0x00F00000 */
#define SCB_ID_MMFR3_ARMV7MRSVD1_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD1))     /*!< Value 0x00100000 */
#define SCB_ID_MMFR3_ARMV7MRSVD1_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD1))     /*!< Value 0x00200000 */
#define SCB_ID_MMFR3_ARMV7MRSVD1_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD1))     /*!< Value 0x00400000 */
#define SCB_ID_MMFR3_ARMV7MRSVD1_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD1))     /*!< Value 0x00800000 */

#define SCB_ID_MMFR3_ARMV7MRSVD0_OFFSET  (0U)
#define SCB_ID_MMFR3_ARMV7MRSVD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Mask  0x0000FFFF */
#define SCB_ID_MMFR3_ARMV7MRSVD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000001 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000002 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000004 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000008 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000010 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000020 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000040 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000080 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000100 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000200 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000400 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00000800 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00001000 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00002000 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00004000 */
#define SCB_ID_MMFR3_ARMV7MRSVD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(SCB, ID_MMFR3, ARMV7MRSVD0))  /*!< Value 0x00008000 */

/*!< Instruction set attribute 0 register */
#define SCB_ID_ISAR0_DIVIDE_OFFSET       (24U)
#define SCB_ID_ISAR0_DIVIDE_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DIVIDE))       /*!< Mask  0x0F000000 */
#define SCB_ID_ISAR0_DIVIDE_0            (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DIVIDE))       /*!< Value 0x01000000 */
#define SCB_ID_ISAR0_DIVIDE_1            (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DIVIDE))       /*!< Value 0x02000000 */
#define SCB_ID_ISAR0_DIVIDE_2            (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DIVIDE))       /*!< Value 0x04000000 */
#define SCB_ID_ISAR0_DIVIDE_3            (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DIVIDE))       /*!< Value 0x08000000 */

#define SCB_ID_ISAR0_DEBUG_OFFSET        (20U)
#define SCB_ID_ISAR0_DEBUG_MASK          (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DEBUG))        /*!< Mask  0x00F00000 */
#define SCB_ID_ISAR0_DEBUG_0             (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DEBUG))        /*!< Value 0x00100000 */
#define SCB_ID_ISAR0_DEBUG_1             (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DEBUG))        /*!< Value 0x00200000 */
#define SCB_ID_ISAR0_DEBUG_2             (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DEBUG))        /*!< Value 0x00400000 */
#define SCB_ID_ISAR0_DEBUG_3             (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, DEBUG))        /*!< Value 0x00800000 */

#define SCB_ID_ISAR0_COPROCESSOR_OFFSET  (16U)
#define SCB_ID_ISAR0_COPROCESSOR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, COPROCESSOR))  /*!< Mask  0x000F0000 */
#define SCB_ID_ISAR0_COPROCESSOR_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, COPROCESSOR))  /*!< Value 0x00010000 */
#define SCB_ID_ISAR0_COPROCESSOR_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, COPROCESSOR))  /*!< Value 0x00020000 */
#define SCB_ID_ISAR0_COPROCESSOR_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, COPROCESSOR))  /*!< Value 0x00040000 */
#define SCB_ID_ISAR0_COPROCESSOR_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, COPROCESSOR))  /*!< Value 0x00080000 */

#define SCB_ID_ISAR0_CMPBRANCH_OFFSET    (12U)
#define SCB_ID_ISAR0_CMPBRANCH_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, CMPBRANCH))    /*!< Mask  0x0000F000 */
#define SCB_ID_ISAR0_CMPBRANCH_0         (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, CMPBRANCH))    /*!< Value 0x00001000 */
#define SCB_ID_ISAR0_CMPBRANCH_1         (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, CMPBRANCH))    /*!< Value 0x00002000 */
#define SCB_ID_ISAR0_CMPBRANCH_2         (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, CMPBRANCH))    /*!< Value 0x00004000 */
#define SCB_ID_ISAR0_CMPBRANCH_3         (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, CMPBRANCH))    /*!< Value 0x00008000 */

#define SCB_ID_ISAR0_BITFIELD_OFFSET     (8U)
#define SCB_ID_ISAR0_BITFIELD_MASK       (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITFIELD))     /*!< Mask  0x00000F00 */
#define SCB_ID_ISAR0_BITFIELD_0          (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITFIELD))     /*!< Value 0x00000100 */
#define SCB_ID_ISAR0_BITFIELD_1          (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITFIELD))     /*!< Value 0x00000200 */
#define SCB_ID_ISAR0_BITFIELD_2          (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITFIELD))     /*!< Value 0x00000400 */
#define SCB_ID_ISAR0_BITFIELD_3          (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITFIELD))     /*!< Value 0x00000800 */

#define SCB_ID_ISAR0_BITCOUNT_OFFSET     (4U)
#define SCB_ID_ISAR0_BITCOUNT_MASK       (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITCOUNT))     /*!< Mask  0x000000F0 */
#define SCB_ID_ISAR0_BITCOUNT_0          (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITCOUNT))     /*!< Value 0x00000010 */
#define SCB_ID_ISAR0_BITCOUNT_1          (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITCOUNT))     /*!< Value 0x00000020 */
#define SCB_ID_ISAR0_BITCOUNT_2          (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITCOUNT))     /*!< Value 0x00000040 */
#define SCB_ID_ISAR0_BITCOUNT_3          (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, BITCOUNT))     /*!< Value 0x00000080 */

#define SCB_ID_ISAR0_ARMV7MRSVD_OFFSET   (0U)
#define SCB_ID_ISAR0_ARMV7MRSVD_MASK     (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, ARMV7MRSVD))   /*!< Mask  0x0000000F */
#define SCB_ID_ISAR0_ARMV7MRSVD_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, ARMV7MRSVD))   /*!< Value 0x00000001 */
#define SCB_ID_ISAR0_ARMV7MRSVD_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, ARMV7MRSVD))   /*!< Value 0x00000002 */
#define SCB_ID_ISAR0_ARMV7MRSVD_2        (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, ARMV7MRSVD))   /*!< Value 0x00000004 */
#define SCB_ID_ISAR0_ARMV7MRSVD_3        (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR0, ARMV7MRSVD))   /*!< Value 0x00000008 */

// Values of divide instruction register
#define SCB_DIVIDEINSTR_NONE      (0x0UL)  /*!< Value 0x00000000 */
#define SCB_DIVIDEINSTR_SDIVUDIV  (0x1UL)  /*!< Value 0x00000001 - supported instructions: SDIV and UDIV */

// Values of debug instruction register
#define SCB_DEBUGINSTR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_DEBUGINSTR_BKPT  (0x1UL)  /*!< Value 0x00000001 - supported instructions: BKP */

// Values of coprocessor instruction register
#define SCB_COPROCESSORINSTR_NONE                           (0x0UL)  /*!< Value 0x00000000 */
#define SCB_COPROCESSORINSTR_ONEREGENCT1                    (0x1UL)  /*!< Value 0x00000001 - supported instructions: CDP, LDC, MCR, MRC and STC */
#define SCB_COPROCESSORINSTR_ONEREGENCT1T2                  (0x2UL)  /*!< Value 0x00000002 - supported instructions: CDP, LDC, MCR, MRC, STC, CDP2, LDC2, MCR2, MRC2 and STC2 */
#define SCB_COPROCESSORINSTR_ONEREGENCT1T2TWOREGSMVENCT1    (0x3UL)  /*!< Value 0x00000003 - supported instructions: CDP, LDC, MCR, MRC, STC, CDP2, LDC2, MCR2, MRC2, STC2, MCRR and MRRC */
#define SCB_COPROCESSORINSTR_ONEREGENCT1T2TWOREGSMVENCT1T2  (0x4UL)  /*!< Value 0x00000004 - supported instructions: CDP, LDC, MCR, MRC, STC, CDP2, LDC2, MCR2, MRC2, STC2, MCRR, MRRC, MCRR2 and MRRC2 */

// Values of compare and branch instruction register
#define SCB_CMPBRANCHINSTR_NONE     (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CMPBRANCHINSTR_CBZCBNZ  (0x1UL)  /*!< Value 0x00000001 - supported instructions: CBZ and CBNZ */

// Values of bit field instruction register
#define SCB_BITFIELDINSTR_NONE            (0x0UL)  /*!< Value 0x00000000 */
#define SCB_BITFIELDINSTR_BFCBFISBFXUBFX  (0x1UL)  /*!< Value 0x00000001 - supported instructions: BFC, BFI, SBFX and UBFX */

// Values of bit count instruction register
#define SCB_BITCOUNTINSTR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_BITCOUNTINSTR_CLZ   (0x1UL)  /*!< Value 0x00000001 - supported instructions: CLZ */

/*!< Instruction set attribute 1 register */
#define SCB_ID_ISAR1_ARMV7MRSVD1_OFFSET  (28U)
#define SCB_ID_ISAR1_ARMV7MRSVD1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD1))    /*!< Mask  0xF0000000 */
#define SCB_ID_ISAR1_ARMV7MRSVD1_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD1))    /*!< Value 0x10000000 */
#define SCB_ID_ISAR1_ARMV7MRSVD1_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD1))    /*!< Value 0x20000000 */
#define SCB_ID_ISAR1_ARMV7MRSVD1_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD1))    /*!< Value 0x40000000 */
#define SCB_ID_ISAR1_ARMV7MRSVD1_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD1))    /*!< Value 0x80000000 */

#define SCB_ID_ISAR1_INTERWORK_OFFSET    (24U)
#define SCB_ID_ISAR1_INTERWORK_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, INTERWORK))      /*!< Mask  0x0F000000 */
#define SCB_ID_ISAR1_INTERWORK_0         (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, INTERWORK))      /*!< Value 0x01000000 */
#define SCB_ID_ISAR1_INTERWORK_1         (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, INTERWORK))      /*!< Value 0x02000000 */
#define SCB_ID_ISAR1_INTERWORK_2         (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, INTERWORK))      /*!< Value 0x04000000 */
#define SCB_ID_ISAR1_INTERWORK_3         (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, INTERWORK))      /*!< Value 0x08000000 */

#define SCB_ID_ISAR1_IMMEDIATE_OFFSET    (20U)
#define SCB_ID_ISAR1_IMMEDIATE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IMMEDIATE))      /*!< Mask  0x00F00000 */
#define SCB_ID_ISAR1_IMMEDIATE_0         (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IMMEDIATE))      /*!< Value 0x00100000 */
#define SCB_ID_ISAR1_IMMEDIATE_1         (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IMMEDIATE))      /*!< Value 0x00200000 */
#define SCB_ID_ISAR1_IMMEDIATE_2         (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IMMEDIATE))      /*!< Value 0x00400000 */
#define SCB_ID_ISAR1_IMMEDIATE_3         (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IMMEDIATE))      /*!< Value 0x00800000 */

#define SCB_ID_ISAR1_IFTHEN_OFFSET       (16U)
#define SCB_ID_ISAR1_IFTHEN_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IFTHEN))         /*!< Mask  0x000F0000 */
#define SCB_ID_ISAR1_IFTHEN_0            (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IFTHEN))         /*!< Value 0x00010000 */
#define SCB_ID_ISAR1_IFTHEN_1            (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IFTHEN))         /*!< Value 0x00020000 */
#define SCB_ID_ISAR1_IFTHEN_2            (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IFTHEN))         /*!< Value 0x00040000 */
#define SCB_ID_ISAR1_IFTHEN_3            (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, IFTHEN))         /*!< Value 0x00080000 */

#define SCB_ID_ISAR1_EXTEND_OFFSET       (12U)
#define SCB_ID_ISAR1_EXTEND_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, EXTEND))         /*!< Mask  0x0000F000 */
#define SCB_ID_ISAR1_EXTEND_0            (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, EXTEND))         /*!< Value 0x00001000 */
#define SCB_ID_ISAR1_EXTEND_1            (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, EXTEND))         /*!< Value 0x00002000 */
#define SCB_ID_ISAR1_EXTEND_2            (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, EXTEND))         /*!< Value 0x00004000 */
#define SCB_ID_ISAR1_EXTEND_3            (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, EXTEND))         /*!< Value 0x00008000 */

#define SCB_ID_ISAR1_ARMV7MRSVD0_OFFSET  (0U)
#define SCB_ID_ISAR1_ARMV7MRSVD0_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Mask  0x00000FFF */
#define SCB_ID_ISAR1_ARMV7MRSVD0_0       (0x001UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000001 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_1       (0x002UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000002 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_2       (0x004UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000004 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_3       (0x008UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000008 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_4       (0x010UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000010 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_5       (0x020UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000020 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_6       (0x040UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000040 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_7       (0x080UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000080 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_8       (0x100UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000100 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_9       (0x200UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000200 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_10      (0x400UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000400 */
#define SCB_ID_ISAR1_ARMV7MRSVD0_11      (0x800UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR1, ARMV7MRSVD0))  /*!< Value 0x00000800 */

// Values of interwork instruction register
#define SCB_INTERWORKINSTR_NONE                       (0x0UL)  /*!< Value 0x00000000 */
#define SCB_INTERWORKINSTR_BRANCHANDEXCHNAGE          (0x1UL)  /*!< Value 0x00000001 - supported instructions: BX */
#define SCB_INTERWORKINSTR_BRANCHWITHLINKANDEXCHNAGE  (0x2UL)  /*!< Value 0x00000002 - supported instructions: BX and BLX */
#define SCB_INTERWORKINSTR_ARMV7MRSVD                 (0x3UL)  /*!< Value 0x00000003 */

// Values of immediate instruction register
#define SCB_IMMEDIATEINSTR_NONE           (0x0UL)  /*!< Value 0x00000000 */
#define SCB_IMMEDIATEINSTR_WIDEIMMEDIATE  (0x1UL)  /*!< Value 0x00000001 - supported instructions: ADDW, SUBW, MOVW and MOVT */

// Values of if-then instruction register
#define SCB_IFTHENINSTR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_IFTHENINSTR_IT    (0x1UL)  /*!< Value 0x00000001 - supported instructions: IT */

// Values of extend instruction register
#define SCB_EXTENDINSTR_NONE          (0x0UL)  /*!< Value 0x00000000 */
#define SCB_EXTENDINSTR_EXTENDONLY    (0x1UL)  /*!< Value 0x00000001 - supported instructions: SXTB, SXTH, UTXB and UTXH */
#define SCB_EXTENDINSTR_EXTENDANDADD  (0x2UL)  /*!< Value 0x00000002 - supported instructions: SXTB, SXTB16, SXTAB, SXTAB16, SXTH, SXTAH, UXTB, UXTB16, UXTAB, UXTAB16, UXTH and UXTAH */

/*!< Instruction set attribute 2 register */
#define SCB_ID_ISAR2_REVERSAL_OFFSET          (28U)
#define SCB_ID_ISAR2_REVERSAL_MASK            (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, REVERSAL))          /*!< Mask  0xF0000000 */
#define SCB_ID_ISAR2_REVERSAL_0               (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, REVERSAL))          /*!< Value 0x10000000 */
#define SCB_ID_ISAR2_REVERSAL_1               (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, REVERSAL))          /*!< Value 0x20000000 */
#define SCB_ID_ISAR2_REVERSAL_2               (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, REVERSAL))          /*!< Value 0x40000000 */
#define SCB_ID_ISAR2_REVERSAL_3               (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, REVERSAL))          /*!< Value 0x80000000 */

#define SCB_ID_ISAR2_ARMV7MRSVD_OFFSET        (24U)
#define SCB_ID_ISAR2_ARMV7MRSVD_MASK          (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, ARMV7MRSVD))        /*!< Mask  0x0F000000 */
#define SCB_ID_ISAR2_ARMV7MRSVD_0             (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, ARMV7MRSVD))        /*!< Value 0x01000000 */
#define SCB_ID_ISAR2_ARMV7MRSVD_1             (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, ARMV7MRSVD))        /*!< Value 0x02000000 */
#define SCB_ID_ISAR2_ARMV7MRSVD_2             (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, ARMV7MRSVD))        /*!< Value 0x04000000 */
#define SCB_ID_ISAR2_ARMV7MRSVD_3             (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, ARMV7MRSVD))        /*!< Value 0x08000000 */

#define SCB_ID_ISAR2_UNSIGNEDMULTIPLY_OFFSET  (20U)
#define SCB_ID_ISAR2_UNSIGNEDMULTIPLY_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, UNSIGNEDMULTIPLY))  /*!< Mask  0x00F00000 */
#define SCB_ID_ISAR2_UNSIGNEDMULTIPLY_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, UNSIGNEDMULTIPLY))  /*!< Value 0x00100000 */
#define SCB_ID_ISAR2_UNSIGNEDMULTIPLY_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, UNSIGNEDMULTIPLY))  /*!< Value 0x00200000 */
#define SCB_ID_ISAR2_UNSIGNEDMULTIPLY_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, UNSIGNEDMULTIPLY))  /*!< Value 0x00400000 */
#define SCB_ID_ISAR2_UNSIGNEDMULTIPLY_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, UNSIGNEDMULTIPLY))  /*!< Value 0x00800000 */

#define SCB_ID_ISAR2_SIGNEDMULTIPLY_OFFSET    (16U)
#define SCB_ID_ISAR2_SIGNEDMULTIPLY_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, SIGNEDMULTIPLY))    /*!< Mask  0x000F0000 */
#define SCB_ID_ISAR2_SIGNEDMULTIPLY_0         (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, SIGNEDMULTIPLY))    /*!< Value 0x00010000 */
#define SCB_ID_ISAR2_SIGNEDMULTIPLY_1         (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, SIGNEDMULTIPLY))    /*!< Value 0x00020000 */
#define SCB_ID_ISAR2_SIGNEDMULTIPLY_2         (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, SIGNEDMULTIPLY))    /*!< Value 0x00040000 */
#define SCB_ID_ISAR2_SIGNEDMULTIPLY_3         (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, SIGNEDMULTIPLY))    /*!< Value 0x00080000 */

#define SCB_ID_ISAR2_MULTIPLY_OFFSET          (12U)
#define SCB_ID_ISAR2_MULTIPLY_MASK            (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIPLY))          /*!< Mask  0x0000F000 */
#define SCB_ID_ISAR2_MULTIPLY_0               (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIPLY))          /*!< Value 0x00001000 */
#define SCB_ID_ISAR2_MULTIPLY_1               (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIPLY))          /*!< Value 0x00002000 */
#define SCB_ID_ISAR2_MULTIPLY_2               (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIPLY))          /*!< Value 0x00004000 */
#define SCB_ID_ISAR2_MULTIPLY_3               (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIPLY))          /*!< Value 0x00008000 */

#define SCB_ID_ISAR2_MULTIACCESS_OFFSET       (8U)
#define SCB_ID_ISAR2_MULTIACCESS_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIACCESS))       /*!< Mask  0x00000F00 */
#define SCB_ID_ISAR2_MULTIACCESS_0            (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIACCESS))       /*!< Value 0x00000100 */
#define SCB_ID_ISAR2_MULTIACCESS_1            (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIACCESS))       /*!< Value 0x00000200 */
#define SCB_ID_ISAR2_MULTIACCESS_2            (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIACCESS))       /*!< Value 0x00000400 */
#define SCB_ID_ISAR2_MULTIACCESS_3            (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MULTIACCESS))       /*!< Value 0x00000800 */

#define SCB_ID_ISAR2_MEMORYHINT_OFFSET        (4U)
#define SCB_ID_ISAR2_MEMORYHINT_MASK          (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MEMORYHINT))        /*!< Mask  0x000000F0 */
#define SCB_ID_ISAR2_MEMORYHINT_0             (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MEMORYHINT))        /*!< Value 0x00000010 */
#define SCB_ID_ISAR2_MEMORYHINT_1             (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MEMORYHINT))        /*!< Value 0x00000020 */
#define SCB_ID_ISAR2_MEMORYHINT_2             (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MEMORYHINT))        /*!< Value 0x00000040 */
#define SCB_ID_ISAR2_MEMORYHINT_3             (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, MEMORYHINT))        /*!< Value 0x00000080 */

#define SCB_ID_ISAR2_LOADSTORE_OFFSET         (0U)
#define SCB_ID_ISAR2_LOADSTORE_MASK           (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, LOADSTORE))         /*!< Mask  0x0000000F */
#define SCB_ID_ISAR2_LOADSTORE_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, LOADSTORE))         /*!< Value 0x00000001 */
#define SCB_ID_ISAR2_LOADSTORE_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, LOADSTORE))         /*!< Value 0x00000002 */
#define SCB_ID_ISAR2_LOADSTORE_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, LOADSTORE))         /*!< Value 0x00000004 */
#define SCB_ID_ISAR2_LOADSTORE_3              (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR2, LOADSTORE))         /*!< Value 0x00000008 */

// Values of reversal instruction register
#define SCB_REVERSALINSTR_NONE            (0x0UL)  /*!< Value 0x00000000 */
#define SCB_REVERSALINSTR_BYTEREVERSE     (0x1UL)  /*!< Value 0x00000001 - supported instructions: REV, REV16 and REVSH */
#define SCB_REVERSALINSTR_BITBYTEREVERSE  (0x2UL)  /*!< Value 0x00000002 - supported instructions: REV, REV16, REVSH and RBIT */

// Values of advanced unsigned multiply instruction register
#define SCB_UNSIGNEDMULTIPLYINSTR_NONE                      (0x0UL)  /*!< Value 0x00000000 */
#define SCB_UNSIGNEDMULTIPLYINSTR_SIMPLEMULTIPLYACCUMULATE  (0x1UL)  /*!< Value 0x00000001 - supported instructions: UMULL and UMLAL */
#define SCB_UNSIGNEDMULTIPLYINSTR_DOUBLEMULTIPLYACCUMULATE  (0x2UL)  /*!< Value 0x00000002 - supported instructions: UMULL, UMLAL and UMAAL */

// Values of advanced signed multiply instruction register
#define SCB_SIGNEDMULTIPLYINSTR_NONE                      (0x0UL)           /*!< Value 0x00000000 */
#define SCB_SIGNEDMULTIPLYINSTR_SIMPLEMULTIPLYACCUMULATE  (0x1UL)           /*!< Value 0x00000001 - supported instructions: SMULL and SMLAL */
#define SCB_SIGNEDMULTIPLYINSTR_MULTIPLYACCUMULATELONGWORD  (0x2UL)         /*!< Value 0x00000002 - supported instructions: UMULL, UMLAL, SMLABB, SMLABT, SMLALBB, SMLALTB, SMLALTT, SMLATB, SMLATT, SMLAWB, SMLAWT, SMULBB, SMULBT, SMULTB, SMULTT, SMULWB and SMULWT */
#define SCB_SIGNEDMULTIPLYINSTR_MULTIPLYACCUMULATELONGWORDDUALMSB  (0x3UL)  /*!< Value 0x00000002 - supported instructions: UMULL, UMLAL, SMLABB, SMLABT, SMLALBB, SMLALTB, SMLALTT, SMLATB, SMLATT, SMLAWB, SMLAWT, SMULBB, SMULBT, SMULTB, SMULTT, SMULWB, SMULWT, SMLAD, SMLADX, SMLALD, SMLALDX, SMLSD, SMLSDX, SMLSLD, SMLSLDX, SMMLA, SMMLAR, SMMLS, SMMLSR, SMMUL, SMMULR, SMUAD, SMUADX, SMUSD and SMUSDX */

// Values of advanced multiply instruction register
#define SCB_MULTIPLYINSTR_SIMPLEMULTIPLY       (0x0UL)         /*!< Value 0x00000000 - supported instructions: MUL */
#define SCB_MULTIPLYINSTR_MULTIPLYACCUMULATE    (0x1UL)        /*!< Value 0x00000001 - supported instructions: MUL and MLA */
#define SCB_MULTIPLYINSTR_MULTIPLYACCUMULATESUBSTRUCT (0x2UL)  /*!< Value 0x00000002 - supported instructions: MUL, MLA and MLS */

// Values of multi-access instruction register
#define SCB_MULTIACCESSINSTR_NOTINTERRUPTABLE  (0x0UL)  /*!< Value 0x00000000 - supported instructions: LDM and STM */
#define SCB_MULTIACCESSINSTR_RESTARTABLE       (0x1UL)  /*!< Value 0x00000001 - supported instructions: LDM and STM */
#define SCB_MULTIACCESSINSTR_CONTINUABLE       (0x2UL)  /*!< Value 0x00000002 - supported instructions: LDM and STM */

// Values of memory hint instruction register
#define SCB_MEMORYHINTINSTR_NONE              (0x0UL)  /*!< Value 0x00000000 */
#define SCB_MEMORYHINTINSTR_PRELOADDATA0      (0x1UL)  /*!< Value 0x00000001 - supported instructions: PLD */
#define SCB_MEMORYHINTINSTR_PRELOADDATA1      (0x2UL)  /*!< Value 0x00000002 - supported instructions: PLD */
#define SCB_MEMORYHINTINSTR_PRELOADDATAINSTR  (0x3UL)  /*!< Value 0x00000003 - supported instructions: PLD and PLI */

// Values of additional load store instruction register
#define SCB_LOADSTOREINSTR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_LOADSTOREINSTR_DUAL  (0x1UL)  /*!< Value 0x00000001 - supported instructions: LDRD and STRD */

/*!< Instruction set attribute 3 register */
#define SCB_ID_ISAR3_ARMV7MRSVD_OFFSET      (28U)
#define SCB_ID_ISAR3_ARMV7MRSVD_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, ARMV7MRSVD))      /*!< Mask  0xF0000000 */
#define SCB_ID_ISAR3_ARMV7MRSVD_0           (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, ARMV7MRSVD))      /*!< Value 0x10000000 */
#define SCB_ID_ISAR3_ARMV7MRSVD_1           (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, ARMV7MRSVD))      /*!< Value 0x20000000 */
#define SCB_ID_ISAR3_ARMV7MRSVD_2           (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, ARMV7MRSVD))      /*!< Value 0x40000000 */
#define SCB_ID_ISAR3_ARMV7MRSVD_3           (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, ARMV7MRSVD))      /*!< Value 0x80000000 */

#define SCB_ID_ISAR3_NOP_OFFSET             (24U)
#define SCB_ID_ISAR3_NOP_MASK               (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, NOP))             /*!< Mask  0x0F000000 */
#define SCB_ID_ISAR3_NOP_0                  (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, NOP))             /*!< Value 0x01000000 */
#define SCB_ID_ISAR3_NOP_1                  (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, NOP))             /*!< Value 0x02000000 */
#define SCB_ID_ISAR3_NOP_2                  (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, NOP))             /*!< Value 0x04000000 */
#define SCB_ID_ISAR3_NOP_3                  (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, NOP))             /*!< Value 0x08000000 */

#define SCB_ID_ISAR3_THUMBCOPY_OFFSET       (20U)
#define SCB_ID_ISAR3_THUMBCOPY_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, THUMBCOPY))       /*!< Mask  0x00F00000 */
#define SCB_ID_ISAR3_THUMBCOPY_0            (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, THUMBCOPY))       /*!< Value 0x00100000 */
#define SCB_ID_ISAR3_THUMBCOPY_1            (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, THUMBCOPY))       /*!< Value 0x00200000 */
#define SCB_ID_ISAR3_THUMBCOPY_2            (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, THUMBCOPY))       /*!< Value 0x00400000 */
#define SCB_ID_ISAR3_THUMBCOPY_3            (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, THUMBCOPY))       /*!< Value 0x00800000 */

#define SCB_ID_ISAR3_TABLEBRANCH_OFFSET     (16U)
#define SCB_ID_ISAR3_TABLEBRANCH_MASK       (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, TABLEBRANCH))     /*!< Mask  0x000F0000 */
#define SCB_ID_ISAR3_TABLEBRANCH_0          (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, TABLEBRANCH))     /*!< Value 0x00010000 */
#define SCB_ID_ISAR3_TABLEBRANCH_1          (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, TABLEBRANCH))     /*!< Value 0x00020000 */
#define SCB_ID_ISAR3_TABLEBRANCH_2          (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, TABLEBRANCH))     /*!< Value 0x00040000 */
#define SCB_ID_ISAR3_TABLEBRANCH_3          (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, TABLEBRANCH))     /*!< Value 0x00080000 */

#define SCB_ID_ISAR3_SYNCPRIMITIVES_OFFSET  (12U)
#define SCB_ID_ISAR3_SYNCPRIMITIVES_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SYNCPRIMITIVES))  /*!< Mask  0x0000F000 */
#define SCB_ID_ISAR3_SYNCPRIMITIVES_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SYNCPRIMITIVES))  /*!< Value 0x00001000 */
#define SCB_ID_ISAR3_SYNCPRIMITIVES_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SYNCPRIMITIVES))  /*!< Value 0x00002000 */
#define SCB_ID_ISAR3_SYNCPRIMITIVES_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SYNCPRIMITIVES))  /*!< Value 0x00004000 */
#define SCB_ID_ISAR3_SYNCPRIMITIVES_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SYNCPRIMITIVES))  /*!< Value 0x00008000 */

#define SCB_ID_ISAR3_SVC_OFFSET             (8U)
#define SCB_ID_ISAR3_SVC_MASK               (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SVC))             /*!< Mask  0x00000F00 */
#define SCB_ID_ISAR3_SVC_0                  (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SVC))             /*!< Value 0x00000100 */
#define SCB_ID_ISAR3_SVC_1                  (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SVC))             /*!< Value 0x00000200 */
#define SCB_ID_ISAR3_SVC_2                  (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SVC))             /*!< Value 0x00000400 */
#define SCB_ID_ISAR3_SVC_3                  (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SVC))             /*!< Value 0x00000800 */

#define SCB_ID_ISAR3_SIMD_OFFSET            (4U)
#define SCB_ID_ISAR3_SIMD_MASK              (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SIMD))            /*!< Mask  0x000000F0 */
#define SCB_ID_ISAR3_SIMD_0                 (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SIMD))            /*!< Value 0x00000010 */
#define SCB_ID_ISAR3_SIMD_1                 (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SIMD))            /*!< Value 0x00000020 */
#define SCB_ID_ISAR3_SIMD_2                 (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SIMD))            /*!< Value 0x00000040 */
#define SCB_ID_ISAR3_SIMD_3                 (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SIMD))            /*!< Value 0x00000080 */

#define SCB_ID_ISAR3_SATURATE_OFFSET        (0U)
#define SCB_ID_ISAR3_SATURATE_MASK          (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SATURATE))        /*!< Mask  0x0000000F */
#define SCB_ID_ISAR3_SATURATE_0             (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SATURATE))        /*!< Value 0x00000001 */
#define SCB_ID_ISAR3_SATURATE_1             (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SATURATE))        /*!< Value 0x00000002 */
#define SCB_ID_ISAR3_SATURATE_2             (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SATURATE))        /*!< Value 0x00000004 */
#define SCB_ID_ISAR3_SATURATE_3             (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR3, SATURATE))        /*!< Value 0x00000008 */

// Values of nop instruction register
#define SCB_NOPINSTR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_NOPINSTR_NOP   (0x1UL)  /*!< Value 0x00000001 - supported instructions: NOP */

// Values of Thumb copy instruction register
#define SCB_THUMBCOPYINSTR_NONE      (0x0UL)  /*!< Value 0x00000000 */
#define SCB_THUMBCOPYINSTR_MOVENCT1  (0x1UL)  /*!< Value 0x00000001 - supported instructions: MOV with encoding T1 */

// Values of table branch instruction register
#define SCB_TABLEBRANCHINSTR_NONE    (0x0UL)  /*!< Value 0x00000000 */
#define SCB_TABLEBRANCHINSTR_TBBTBH  (0x1UL)  /*!< Value 0x00000001 - supported instructions: TBB and TBH */

// Values of synchronization primitivies instruction register
#define SCB_SYNCPRIMITIVESINSTR_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SYNCPRIMITIVESINSTR_SUPPORTED   (0x1UL)  /*!< Value 0x00000001 - supported instructions:
                                                          - if ID_ISAR4.SYNCPRIMITIVESFRAC is 0, then LDREX and STREX are supported
                                                          - if ID_ISAR4.SYNCPRIMITIVESFRAC is 3, then LDREX, STREX, CLREX, LDREXB, LDREXH, STREXB and STREXH are supported */
#define SCB_SYNCPRIMITIVESINSTR_ARMV7MRSVD  (0x2UL)  /*!< Value 0x00000002 */

// Values of supervisor call (SVC) instruction register
#define SCB_SVCINSTR_NOTINTERRUPTABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SVCINSTR_RESTARTABLE       (0x1UL)  /*!< Value 0x00000001 - supported instructions: SVC */

// Values of single instruction multiple data (SIMD) instruction register
#define SCB_SIMDINSTR_NONE             (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SIMDINSTR_SIMPLESTATURATE  (0x1UL)  /*!< Value 0x00000001 - supported instructions: SSAT and USAT */
#define SCB_SIMDINSTR_PACKDSPINSTR     (0x3UL)  /*!< Value 0x00000003 - supported instructions: SSAT, USAT, PKHBT, PKHTB, QADD16, QADD8, QASX, QSUB16, QSUB8, QSAX, SADD16, SADD8, SASX, SEL, SHADD16, SHADD8, SHASX, SHSUB16, SHSUB8, SHSAX, SSAT16, SSUB16, SSUB8, SSAX, SXTAB16, SXTB16, UADD16, UADD8, UASX, UHADD16, UHADD8, UHASX, UHSUB16, UHSUB8, UHSAX, UQADD16, UQADD8, UQASX, UQSUB16, UQSUB8, UQSAX, USAD8, USADA8, USAT16, USUB16, USUB8, USAX, UXTAB16 and UXTB16 */

// Values of saturate instruction register
#define SCB_SATURATEINSTR_NONE          (0x0UL)  /*!< Value 0x00000000 */
#define SCB_SATURATEINSTR_SIMPLEDOUBLE  (0x1UL)  /*!< Value 0x00000001 - supported instructions: QADD, QDADD, QDSUB and QSUB */

/*!< Instruction set attribute 4 register */
#define SCB_ID_ISAR4_ARMV7MRSVD1_OFFSET         (28U)
#define SCB_ID_ISAR4_ARMV7MRSVD1_MASK           (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD1))         /*!< Mask  0xF0000000 */
#define SCB_ID_ISAR4_ARMV7MRSVD1_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD1))         /*!< Value 0x10000000 */
#define SCB_ID_ISAR4_ARMV7MRSVD1_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD1))         /*!< Value 0x20000000 */
#define SCB_ID_ISAR4_ARMV7MRSVD1_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD1))         /*!< Value 0x40000000 */
#define SCB_ID_ISAR4_ARMV7MRSVD1_3              (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD1))         /*!< Value 0x80000000 */

#define SCB_ID_ISAR4_PSRMPROFILE_OFFSET         (24U)
#define SCB_ID_ISAR4_PSRMPROFILE_MASK           (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, PSRMPROFILE))         /*!< Mask  0x0F000000 */
#define SCB_ID_ISAR4_PSRMPROFILE_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, PSRMPROFILE))         /*!< Value 0x01000000 */
#define SCB_ID_ISAR4_PSRMPROFILE_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, PSRMPROFILE))         /*!< Value 0x02000000 */
#define SCB_ID_ISAR4_PSRMPROFILE_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, PSRMPROFILE))         /*!< Value 0x04000000 */
#define SCB_ID_ISAR4_PSRMPROFILE_3              (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, PSRMPROFILE))         /*!< Value 0x08000000 */

#define SCB_ID_ISAR4_SYNCPRIMITIVESFRAC_OFFSET  (20U)
#define SCB_ID_ISAR4_SYNCPRIMITIVESFRAC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SYNCPRIMITIVESFRAC))  /*!< Mask  0x00F00000 */
#define SCB_ID_ISAR4_SYNCPRIMITIVESFRAC_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SYNCPRIMITIVESFRAC))  /*!< Value 0x00100000 */
#define SCB_ID_ISAR4_SYNCPRIMITIVESFRAC_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SYNCPRIMITIVESFRAC))  /*!< Value 0x00200000 */
#define SCB_ID_ISAR4_SYNCPRIMITIVESFRAC_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SYNCPRIMITIVESFRAC))  /*!< Value 0x00400000 */
#define SCB_ID_ISAR4_SYNCPRIMITIVESFRAC_3       (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SYNCPRIMITIVESFRAC))  /*!< Value 0x00800000 */

#define SCB_ID_ISAR4_BARRIER_OFFSET             (16U)
#define SCB_ID_ISAR4_BARRIER_MASK               (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, BARRIER))             /*!< Mask  0x000F0000 */
#define SCB_ID_ISAR4_BARRIER_0                  (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, BARRIER))             /*!< Value 0x00010000 */
#define SCB_ID_ISAR4_BARRIER_1                  (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, BARRIER))             /*!< Value 0x00020000 */
#define SCB_ID_ISAR4_BARRIER_2                  (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, BARRIER))             /*!< Value 0x00040000 */
#define SCB_ID_ISAR4_BARRIER_3                  (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, BARRIER))             /*!< Value 0x00080000 */

#define SCB_ID_ISAR4_ARMV7MRSVD0_OFFSET         (12U)
#define SCB_ID_ISAR4_ARMV7MRSVD0_MASK           (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD0))         /*!< Mask  0x0000F000 */
#define SCB_ID_ISAR4_ARMV7MRSVD0_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD0))         /*!< Value 0x00001000 */
#define SCB_ID_ISAR4_ARMV7MRSVD0_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD0))         /*!< Value 0x00002000 */
#define SCB_ID_ISAR4_ARMV7MRSVD0_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD0))         /*!< Value 0x00004000 */
#define SCB_ID_ISAR4_ARMV7MRSVD0_3              (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, ARMV7MRSVD0))         /*!< Value 0x00008000 */

#define SCB_ID_ISAR4_WRITEBACK_OFFSET           (8U)
#define SCB_ID_ISAR4_WRITEBACK_MASK             (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, WRITEBACK))           /*!< Mask  0x00000F00 */
#define SCB_ID_ISAR4_WRITEBACK_0                (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, WRITEBACK))           /*!< Value 0x00000100 */
#define SCB_ID_ISAR4_WRITEBACK_1                (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, WRITEBACK))           /*!< Value 0x00000200 */
#define SCB_ID_ISAR4_WRITEBACK_2                (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, WRITEBACK))           /*!< Value 0x00000400 */
#define SCB_ID_ISAR4_WRITEBACK_3                (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, WRITEBACK))           /*!< Value 0x00000800 */

#define SCB_ID_ISAR4_SHIFT_OFFSET               (4U)
#define SCB_ID_ISAR4_SHIFT_MASK                 (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SHIFT))               /*!< Mask  0x000000F0 */
#define SCB_ID_ISAR4_SHIFT_0                    (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SHIFT))               /*!< Value 0x00000010 */
#define SCB_ID_ISAR4_SHIFT_1                    (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SHIFT))               /*!< Value 0x00000020 */
#define SCB_ID_ISAR4_SHIFT_2                    (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SHIFT))               /*!< Value 0x00000040 */
#define SCB_ID_ISAR4_SHIFT_3                    (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, SHIFT))               /*!< Value 0x00000080 */

#define SCB_ID_ISAR4_UNPRIVILEGED_OFFSET        (0U)
#define SCB_ID_ISAR4_UNPRIVILEGED_MASK          (0xFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, UNPRIVILEGED))        /*!< Mask  0x0000000F */
#define SCB_ID_ISAR4_UNPRIVILEGED_0             (0x1UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, UNPRIVILEGED))        /*!< Value 0x00000001 */
#define SCB_ID_ISAR4_UNPRIVILEGED_1             (0x2UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, UNPRIVILEGED))        /*!< Value 0x00000002 */
#define SCB_ID_ISAR4_UNPRIVILEGED_2             (0x4UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, UNPRIVILEGED))        /*!< Value 0x00000004 */
#define SCB_ID_ISAR4_UNPRIVILEGED_3             (0x8UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR4, UNPRIVILEGED))        /*!< Value 0x00000008 */

// Values of program status register (PSR) M profile modify instruction register
#define SCB_PSRMPROFILEINSTR_NONE                 (0x0UL)  /*!< Value 0x00000000 */
#define SCB_PSRMPROFILEINSTR_MOVECHANGEPROCSTATE  (0x1UL)  /*!< Value 0x00000001 - supported instructions: CPS, MRS and MSR */

// Values of synchronization primitives instruction register
#define SCB_SYNCPRIMITIVESFRACINSTR_0  (0x0UL)  /*!< Value 0x00000000 - supported instructions: LDREX and STREX if ID_ISAR3.SYNCPRIMITIVES is 1 */
#define SCB_SYNCPRIMITIVESFRACINSTR_3  (0x3UL)  /*!< Value 0x00000003 - supported instructions: LDREX, STREX, CLREX, LDREXB, LDREXH, STREXB and STREXH if ID_ISAR3.SYNCPRIMITIVES is 1 */

// Values of barrier instruction register
#define SCB_BARRIERINSTR_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define SCB_BARRIERINSTR_DATAINSTR   (0x1UL)  /*!< Value 0x00000001 - supported instructions: DMB, DSB and ISB */

// Values of write back instruction register
#define SCB_WRITEBACKINSTR_BASICSUPPORT  (0x0UL)  /*!< Value 0x00000000 - supported instructions: LDM, STM, PUSH and POP */
#define SCB_WRITEBACKINSTR_FULLSUPPORT   (0x1UL)  /*!< Value 0x00000001 - supported instructions: all instructions */

// Values of shift instruction register
#define SCB_SHIFTINSTR_MOVSHIFT     (0x0UL)  /*!< Value 0x00000000 - non-zero shifts supported for MOV and shift instructions */
#define SCB_SHIFTINSTR_LOADSTORE03  (0x1UL)  /*!< Value 0x00000001 - non-zero shifts supported for MOV and shift instructions and shift range between 0 and 3 for load and store instructions */
#define SCB_SHIFTINSTR_ALLINSTR     (0x3UL)  /*!< Value 0x00000003 - non-zero shifts supported for all instructions */
#define SCB_SHIFTINSTR_ARMV7MRSVD   (0x4UL)  /*!< Value 0x00000004 */

// Values of unprivileged instruction register
#define SCB_UNPRIVILEGEDINSTR_NONE          (0x0UL)  /*!< Value 0x00000000 */
#define SCB_UNPRIVILEGEDINSTR_BYTEONLY      (0x1UL)  /*!< Value 0x00000001 - supported instructions: LDRBT, LDRT, STRBT and STRT */
#define SCB_UNPRIVILEGEDINSTR_BYTEHALFWORD  (0x2UL)  /*!< Value 0x00000002 - supported instructions: LDRBT, LDRT, STRBT, STRT, LDRHT, LDRSBT, LDRSHT and STRHT */

/*!< Instruction set attribute 5 register */
#define SCB_ID_ISAR5_RSVD_OFFSET  (0U)
#define SCB_ID_ISAR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SCB_ID_ISAR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000001 */
#define SCB_ID_ISAR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000002 */
#define SCB_ID_ISAR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000004 */
#define SCB_ID_ISAR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000008 */
#define SCB_ID_ISAR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000010 */
#define SCB_ID_ISAR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000020 */
#define SCB_ID_ISAR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000040 */
#define SCB_ID_ISAR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000080 */
#define SCB_ID_ISAR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000100 */
#define SCB_ID_ISAR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000200 */
#define SCB_ID_ISAR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000400 */
#define SCB_ID_ISAR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00000800 */
#define SCB_ID_ISAR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00001000 */
#define SCB_ID_ISAR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00002000 */
#define SCB_ID_ISAR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00004000 */
#define SCB_ID_ISAR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00008000 */
#define SCB_ID_ISAR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00010000 */
#define SCB_ID_ISAR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00020000 */
#define SCB_ID_ISAR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00040000 */
#define SCB_ID_ISAR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00080000 */
#define SCB_ID_ISAR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00100000 */
#define SCB_ID_ISAR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00200000 */
#define SCB_ID_ISAR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00400000 */
#define SCB_ID_ISAR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x00800000 */
#define SCB_ID_ISAR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x01000000 */
#define SCB_ID_ISAR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x02000000 */
#define SCB_ID_ISAR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x04000000 */
#define SCB_ID_ISAR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x08000000 */
#define SCB_ID_ISAR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x10000000 */
#define SCB_ID_ISAR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x20000000 */
#define SCB_ID_ISAR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x40000000 */
#define SCB_ID_ISAR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCB, ID_ISAR5, RSVD))  /*!< Value 0x80000000 */

/*!< Cache level ID register */
// Level of unification, uniprocessor (LoUU) register
#define SCB_CLIDR_LOUU_OFFSET        (27U)
#define SCB_CLIDR_LOUU_MASK          (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUU))        /*!< Mask  0x38000000 */
#define SCB_CLIDR_LOUU_0             (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUU))        /*!< Value 0x08000000 */
#define SCB_CLIDR_LOUU_1             (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUU))        /*!< Value 0x10000000 */
#define SCB_CLIDR_LOUU_2             (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUU))        /*!< Value 0x20000000 */

// Level of coherency (LoC) register
#define SCB_CLIDR_LOC_OFFSET         (24U)
#define SCB_CLIDR_LOC_MASK           (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOC))         /*!< Mask  0x07000000 */
#define SCB_CLIDR_LOC_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOC))         /*!< Value 0x01000000 */
#define SCB_CLIDR_LOC_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOC))         /*!< Value 0x02000000 */
#define SCB_CLIDR_LOC_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOC))         /*!< Value 0x04000000 */

// Level of unification inner shareable (LoUIS) register
#define SCB_CLIDR_LOUIS_OFFSET       (21U)
#define SCB_CLIDR_LOUIS_MASK         (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUIS))       /*!< Mask  0x00E00000 */
#define SCB_CLIDR_LOUIS_0            (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUIS))       /*!< Value 0x00200000 */
#define SCB_CLIDR_LOUIS_1            (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUIS))       /*!< Value 0x00400000 */
#define SCB_CLIDR_LOUIS_2            (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, LOUIS))       /*!< Value 0x00800000 */

#define SCB_CLIDR_CACHETYPE7_OFFSET  (18U)
#define SCB_CLIDR_CACHETYPE7_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE7))  /*!< Mask  0x001C0000 */
#define SCB_CLIDR_CACHETYPE7_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPEj))  /*!< Value 0x00040000 */
#define SCB_CLIDR_CACHETYPE7_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE7))  /*!< Value 0x00080000 */
#define SCB_CLIDR_CACHETYPE7_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE7))  /*!< Value 0x00100000 */

#define SCB_CLIDR_CACHETYPE6_OFFSET  (15U)
#define SCB_CLIDR_CACHETYPE6_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE6))  /*!< Mask  0x00038000 */
#define SCB_CLIDR_CACHETYPE6_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE6))  /*!< Value 0x00008000 */
#define SCB_CLIDR_CACHETYPE6_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE6))  /*!< Value 0x00010000 */
#define SCB_CLIDR_CACHETYPE6_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE6))  /*!< Value 0x00020000 */

#define SCB_CLIDR_CACHETYPE5_OFFSET  (12U)
#define SCB_CLIDR_CACHETYPE5_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE5))  /*!< Mask  0x00007000 */
#define SCB_CLIDR_CACHETYPE5_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE5))  /*!< Value 0x00001000 */
#define SCB_CLIDR_CACHETYPE5_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE5))  /*!< Value 0x00002000 */
#define SCB_CLIDR_CACHETYPE5_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE5))  /*!< Value 0x00004000 */

#define SCB_CLIDR_CACHETYPE4_OFFSET  (9U)
#define SCB_CLIDR_CACHETYPE4_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE4))  /*!< Mask  0x00000E00 */
#define SCB_CLIDR_CACHETYPE4_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE4))  /*!< Value 0x00000200 */
#define SCB_CLIDR_CACHETYPE4_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE4))  /*!< Value 0x00000400 */
#define SCB_CLIDR_CACHETYPE4_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE4))  /*!< Value 0x00000800 */

#define SCB_CLIDR_CACHETYPE3_OFFSET  (6U)
#define SCB_CLIDR_CACHETYPE3_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE3))  /*!< Mask  0x000001C0 */
#define SCB_CLIDR_CACHETYPE3_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE3))  /*!< Value 0x00000040 */
#define SCB_CLIDR_CACHETYPE3_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE3))  /*!< Value 0x00000080 */
#define SCB_CLIDR_CACHETYPE3_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE3))  /*!< Value 0x00000100 */

#define SCB_CLIDR_CACHETYPE2_OFFSET  (3U)
#define SCB_CLIDR_CACHETYPE2_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE2))  /*!< Mask  0x00000038 */
#define SCB_CLIDR_CACHETYPE2_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE2))  /*!< Value 0x00000008 */
#define SCB_CLIDR_CACHETYPE2_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE2))  /*!< Value 0x00000010 */
#define SCB_CLIDR_CACHETYPE2_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE2))  /*!< Value 0x00000020 */

#define SCB_CLIDR_CACHETYPE1_OFFSET  (0U)
#define SCB_CLIDR_CACHETYPE1_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE1))  /*!< Mask  0x00000007 */
#define SCB_CLIDR_CACHETYPE1_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE1))  /*!< Value 0x00000001 */
#define SCB_CLIDR_CACHETYPE1_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE1))  /*!< Value 0x00000002 */
#define SCB_CLIDR_CACHETYPE1_2       (0x4UL << REGISTER_FIELD_OFFSET(SCB, CLIDR, CACHETYPE1))  /*!< Value 0x00000004 */

// Values of level of unification, uniprocessor (LoUU) register
#define SCB_LOUU_NOCLEANNEEDED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_LOUU_CACHELEVEL1      (0x1UL)  /*!< Value 0x00000001 */
#define SCB_LOUU_CACHELEVEL2      (0x2UL)  /*!< Value 0x00000002 */
#define SCB_LOUU_CACHELEVEL3      (0x3UL)  /*!< Value 0x00000003 */
#define SCB_LOUU_CACHELEVEL4      (0x4UL)  /*!< Value 0x00000004 */
#define SCB_LOUU_CACHELEVEL5      (0x5UL)  /*!< Value 0x00000005 */
#define SCB_LOUU_CACHELEVEL6      (0x6UL)  /*!< Value 0x00000006 */
#define SCB_LOUU_CACHELEVEL7      (0x7UL)  /*!< Value 0x00000007 */

// Values of level of coherency (LoC) register
#define SCB_LOC_NOCLEANNEEDED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_LOC_CACHELEVEL1      (0x1UL)  /*!< Value 0x00000001 */
#define SCB_LOC_CACHELEVEL2      (0x2UL)  /*!< Value 0x00000002 */
#define SCB_LOC_CACHELEVEL3      (0x3UL)  /*!< Value 0x00000003 */
#define SCB_LOC_CACHELEVEL4      (0x4UL)  /*!< Value 0x00000004 */
#define SCB_LOC_CACHELEVEL5      (0x5UL)  /*!< Value 0x00000005 */
#define SCB_LOC_CACHELEVEL6      (0x6UL)  /*!< Value 0x00000006 */
#define SCB_LOC_CACHELEVEL7      (0x7UL)  /*!< Value 0x00000007 */

// Values of cache type register
#define SCB_CTR_NOCACHE                 (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CTR_INSTRUCTIONCACHEONLY    (0x1UL)  /*!< Value 0x00000001 */
#define SCB_CTR_DATACACHEONLY           (0x2UL)  /*!< Value 0x00000002 */
#define SCB_CTR_SEPARATEINSTRDATACACHE  (0x3UL)  /*!< Value 0x00000003 */
#define SCB_CTR_UNIFIEDCACHE            (0x4UL)  /*!< Value 0x00000004 */

/*!< Cache type register */
#define SCB_CTR_FORMAT_OFFSET              (29U)
#define SCB_CTR_FORMAT_MASK                (0x7UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, FORMAT))             /*!< Mask  0xE0000000 */
#define SCB_CTR_FORMAT_0                   (0x1UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, FORMAT))             /*!< Mask  0x20000000 */
#define SCB_CTR_FORMAT_1                   (0x2UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, FORMAT))             /*!< Mask  0x40000000 */
#define SCB_CTR_FORMAT_2                   (0x4UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, FORMAT))             /*!< Mask  0x80000000 */

#define SCB_CTR_CWG_OFFSET                 (24U)
#define SCB_CTR_CWG_MASK                   (0xFUL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, CWG))                /*!< Mask  0x0F000000 */
#define SCB_CTR_CWG_0                      (0x1UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, CWG))                /*!< Mask  0x01000000 */
#define SCB_CTR_CWG_1                      (0x2UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, CWG))                /*!< Mask  0x02000000 */
#define SCB_CTR_CWG_2                      (0x4UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, CWG))                /*!< Mask  0x04000000 */
#define SCB_CTR_CWG_3                      (0x8UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, CWG))                /*!< Mask  0x08000000 */

#define SCB_CTR_ERG_OFFSET                 (20U)
#define SCB_CTR_ERG_MASK                   (0xFUL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, ERG))                /*!< Mask  0x00F00000 */
#define SCB_CTR_ERG_0                      (0x1UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, ERG))                /*!< Value 0x00100000 */
#define SCB_CTR_ERG_1                      (0x2UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, ERG))                /*!< Value 0x00200000 */
#define SCB_CTR_ERG_2                      (0x4UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, ERG))                /*!< Value 0x00400000 */
#define SCB_CTR_ERG_3                      (0x8UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, ERG))                /*!< Value 0x00800000 */

#define SCB_CTR_MINDATACACHELINE_OFFSET    (16U)
#define SCB_CTR_MINDATACACHELINE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MINDATACACHELINE))   /*!< Mask  0x000F0000 */
#define SCB_CTR_MINDATACACHELINE_0         (0x1UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MINDATACACHELINE))   /*!< Value 0x00010000 */
#define SCB_CTR_MINDATACACHELINE_1         (0x2UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MINDATACACHELINE))   /*!< Value 0x00020000 */
#define SCB_CTR_MINDATACACHELINE_2         (0x4UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MINDATACACHELINE))   /*!< Value 0x00040000 */
#define SCB_CTR_MINDATACACHELINE_3         (0x8UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MINDATACACHELINE))   /*!< Value 0x00080000 */

#define SCB_CTR_MININSTRCACHELINE_OFFSET   (0U)
#define SCB_CTR_MININSTRCACHELINE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MININSTRCACHELINE))  /*!< Mask  0x0000000F */
#define SCB_CTR_MININSTRCACHELINE_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MININSTRCACHELINE))  /*!< Mask  0x00000001 */
#define SCB_CTR_MININSTRCACHELINE_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MININSTRCACHELINE))  /*!< Mask  0x00000002 */
#define SCB_CTR_MININSTRCACHELINE_2        (0x4UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MININSTRCACHELINE))  /*!< Mask  0x00000004 */
#define SCB_CTR_MININSTRCACHELINE_4        (0x8UL << REGISTER_FIELD_OFFSET(SCB, CACHETYPE, MININSTRCACHELINE))  /*!< Mask  0x00000008 */

// Values of cache type format register
#define SCB_CACHETYPEFORMAT_NOCACHES  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHETYPEFORMAT_ARMV7M    (0x4UL)  /*!< Value 0x00000004 */

// Values of cache write-back granule (CWG) register
#define SCB_CWG_CACHELINESIZE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CWG_2WORDS         (0x1UL)  /*!< Value 0x00000001 */
#define SCB_CWG_4WORDS         (0x2UL)  /*!< Value 0x00000002 */
#define SCB_CWG_8WORDS         (0x3UL)  /*!< Value 0x00000003 */
#define SCB_CWG_16WORDS        (0x4UL)  /*!< Value 0x00000004 */
#define SCB_CWG_32WORDS        (0x5UL)  /*!< Value 0x00000005 */
#define SCB_CWG_64WORDS        (0x6UL)  /*!< Value 0x00000006 */
#define SCB_CWG_128WORDS       (0x7UL)  /*!< Value 0x00000007 */
#define SCB_CWG_256WORDS       (0x8UL)  /*!< Value 0x00000008 */
#define SCB_CWG_512WORDS       (0x9UL)  /*!< Value 0x00000009 */

// Values of exclusives reservation granule (ERG) register
#define SCB_ERG_CACHELINESIZE  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ERG_2WORDS         (0x1UL)  /*!< Value 0x00000001 */
#define SCB_ERG_4WORDS         (0x2UL)  /*!< Value 0x00000002 */
#define SCB_ERG_8WORDS         (0x3UL)  /*!< Value 0x00000003 */
#define SCB_ERG_16WORDS        (0x4UL)  /*!< Value 0x00000004 */
#define SCB_ERG_32WORDS        (0x5UL)  /*!< Value 0x00000005 */
#define SCB_ERG_64WORDS        (0x6UL)  /*!< Value 0x00000006 */
#define SCB_ERG_128WORDS       (0x7UL)  /*!< Value 0x00000007 */
#define SCB_ERG_256WORDS       (0x8UL)  /*!< Value 0x00000008 */
#define SCB_ERG_512WORDS       (0x9UL)  /*!< Value 0x00000009 */

// Values of the number of words in the smallest data cache line register
#define SCB_MINDATACACHELINE_1WORD     (0x0UL)  /*!< Value 0x00000000 */
#define SCB_MINDATACACHELINE_2WORDS    (0x1UL)  /*!< Value 0x00000001 */
#define SCB_MINDATACACHELINE_4WORDS    (0x2UL)  /*!< Value 0x00000002 */
#define SCB_MINDATACACHELINE_8WORDS    (0x3UL)  /*!< Value 0x00000003 */
#define SCB_MINDATACACHELINE_16WORDS   (0x4UL)  /*!< Value 0x00000004 */
#define SCB_MINDATACACHELINE_32WORDS   (0x5UL)  /*!< Value 0x00000005 */
#define SCB_MINDATACACHELINE_64WORDS   (0x6UL)  /*!< Value 0x00000006 */
#define SCB_MINDATACACHELINE_128WORDS  (0x7UL)  /*!< Value 0x00000007 */
#define SCB_MINDATACACHELINE_256WORDS  (0x8UL)  /*!< Value 0x00000008 */
#define SCB_MINDATACACHELINE_512WORDS  (0x9UL)  /*!< Value 0x00000009 */

// Values of the number of words in the smallest instruction cache line register
#define SCB_MININSTRCACHELINE_1WORD     (0x0UL)  /*!< Value 0x00000000 */
#define SCB_MININSTRCACHELINE_2WORDS    (0x1UL)  /*!< Value 0x00000001 */
#define SCB_MININSTRCACHELINE_4WORDS    (0x2UL)  /*!< Value 0x00000002 */
#define SCB_MININSTRCACHELINE_8WORDS    (0x3UL)  /*!< Value 0x00000003 */
#define SCB_MININSTRCACHELINE_16WORDS   (0x4UL)  /*!< Value 0x00000004 */
#define SCB_MININSTRCACHELINE_32WORDS   (0x5UL)  /*!< Value 0x00000005 */
#define SCB_MININSTRCACHELINE_64WORDS   (0x6UL)  /*!< Value 0x00000006 */
#define SCB_MININSTRCACHELINE_128WORDS  (0x7UL)  /*!< Value 0x00000007 */
#define SCB_MININSTRCACHELINE_256WORDS  (0x8UL)  /*!< Value 0x00000008 */
#define SCB_MININSTRCACHELINE_512WORDS  (0x9UL)  /*!< Value 0x00000009 */

/*!< Cache size ID register */
#define SCB_CCSIDR_WRITETHROUGH_OFFSET     (31U)
#define SCB_CCSIDR_WRITETHROUGH_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, WRITETHROUGH))     /*!< Mask  0x80000000 */

#define SCB_CCSIDR_WRITEBACK_OFFSET        (30U)
#define SCB_CCSIDR_WRITEBACK_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, WRITEBACK))        /*!< Mask  0x40000000 */

#define SCB_CCSIDR_READALLOCATION_OFFSET   (29U)
#define SCB_CCSIDR_READALLOCATION_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, READALLOCATION))   /*!< Mask  0x20000000 */

#define SCB_CCSIDR_WRITEALLOCATION_OFFSET  (28U)
#define SCB_CCSIDR_WRITEALLOCATION_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, WRITEALLOCATION))  /*!< Mask  0x10000000 */

#define SCB_CCSIDR_NUMSETS_OFFSET          (13U)
#define SCB_CCSIDR_NUMSETS_MASK            (0x7FFFUL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Mask  0x0FFFE000 */
#define SCB_CCSIDR_NUMSETS_0               (0x0001UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00002000 */
#define SCB_CCSIDR_NUMSETS_1               (0x0002UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00004000 */
#define SCB_CCSIDR_NUMSETS_2               (0x0004UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00008000 */
#define SCB_CCSIDR_NUMSETS_3               (0x0008UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00010000 */
#define SCB_CCSIDR_NUMSETS_4               (0x0010UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00020000 */
#define SCB_CCSIDR_NUMSETS_5               (0x0020UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00040000 */
#define SCB_CCSIDR_NUMSETS_6               (0x0040UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00080000 */
#define SCB_CCSIDR_NUMSETS_7               (0x0080UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00100000 */
#define SCB_CCSIDR_NUMSETS_8               (0x0100UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00200000 */
#define SCB_CCSIDR_NUMSETS_9               (0x0200UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00400000 */
#define SCB_CCSIDR_NUMSETS_10              (0x0400UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x00800000 */
#define SCB_CCSIDR_NUMSETS_11              (0x0800UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x01000000 */
#define SCB_CCSIDR_NUMSETS_12              (0x1000UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x02000000 */
#define SCB_CCSIDR_NUMSETS_13              (0x2000UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x04000000 */
#define SCB_CCSIDR_NUMSETS_14              (0x4000UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, NUMSETS))       /*!< Value 0x08000000 */

#define SCB_CCSIDR_ASSOCIATIVITY_OFFSET    (3U)
#define SCB_CCSIDR_ASSOCIATIVITY_MASK      (0x3FFUL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Mask  0x00001FF8 */
#define SCB_CCSIDR_ASSOCIATIVITY_0         (0x001UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000008 */
#define SCB_CCSIDR_ASSOCIATIVITY_1         (0x002UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000010 */
#define SCB_CCSIDR_ASSOCIATIVITY_2         (0x004UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000020 */
#define SCB_CCSIDR_ASSOCIATIVITY_3         (0x008UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000040 */
#define SCB_CCSIDR_ASSOCIATIVITY_4         (0x010UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000080 */
#define SCB_CCSIDR_ASSOCIATIVITY_5         (0x020UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000100 */
#define SCB_CCSIDR_ASSOCIATIVITY_6         (0x040UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000200 */
#define SCB_CCSIDR_ASSOCIATIVITY_7         (0x080UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000400 */
#define SCB_CCSIDR_ASSOCIATIVITY_8         (0x100UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00000800 */
#define SCB_CCSIDR_ASSOCIATIVITY_9         (0x200UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, ASSOCIATIVITY))  /*!< Value 0x00001000 */

#define SCB_CCSIDR_LINESIZE_OFFSET         (0U)
#define SCB_CCSIDR_LINESIZE_MASK           (0x7UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, LINESIZE))         /*!< Mask  0x00000007 */
#define SCB_CCSIDR_LINESIZE_0              (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, LINESIZE))         /*!< Mask  0x00000001 */
#define SCB_CCSIDR_LINESIZE_1              (0x2UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, LINESIZE))         /*!< Mask  0x00000002 */
#define SCB_CCSIDR_LINESIZE_2              (0x4UL << REGISTER_FIELD_OFFSET(SCB, CCSIDR, LINESIZE))         /*!< Mask  0x00000004 */

// Values of cache write through support bit
#define SCB_CACHEWRITETHROUGH_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHEWRITETHROUGH_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of cache write back support bit
#define SCB_CACHEWRITEBACK_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHEWRITEBACK_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of cache read allocation support bit
#define SCB_CACHEREADALLOCATION_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHEREADALLOCATION_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of cache write allocation support bit
#define SCB_CACHEWRITEALLOCATION_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHEWRITEALLOCATION_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of number of sets register
#define SCB_CACHENUMSETS_32    (0x01FUL)  /*!< Value 0x0000001F */
#define SCB_CACHENUMSETS_64    (0x03FUL)  /*!< Value 0x0000003F */
#define SCB_CACHENUMSETS_128   (0x07FUL)  /*!< Value 0x0000007F */
#define SCB_CACHENUMSETS_256   (0x0FFUL)  /*!< Value 0x000000FF */
#define SCB_CACHENUMSETS_512   (0x1FFUL)  /*!< Value 0x000001FF */
#define SCB_CACHENUMSETS_1024  (0x3FFUL)  /*!< Value 0x000003FF */

// Values of associativity register
#define SCB_CACHEASSOCIATIVITY_2WAYS  (0x1UL)  /*!< Value 0x00000001 - used for instruction cache */
#define SCB_CACHEASSOCIATIVITY_4WAYS  (0x3UL)  /*!< Value 0x00000003 - used for data cache */

// Values of line size register
#define SCB_CACHELINESIZE_4WORDS    (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHELINESIZE_8WORDS    (0x1UL)  /*!< Value 0x00000001 */
#define SCB_CACHELINESIZE_16WORDS   (0x2UL)  /*!< Value 0x00000002 */
#define SCB_CACHELINESIZE_32WORDS   (0x3UL)  /*!< Value 0x00000003 */
#define SCB_CACHELINESIZE_64WORDS   (0x4UL)  /*!< Value 0x00000004 */
#define SCB_CACHELINESIZE_128WORDS  (0x5UL)  /*!< Value 0x00000005 */
#define SCB_CACHELINESIZE_256WORDS  (0x6UL)  /*!< Value 0x00000006 */
#define SCB_CACHELINESIZE_512WORDS  (0x7UL)  /*!< Value 0x00000007 */

/*!< Cache size selection register */
#define SCB_CCSELR_LEVEL_OFFSET    (1U)
#define SCB_CCSELR_LEVEL_MASK      (0x7UL << REGISTER_FIELD_OFFSET(SCB, CCSELR, LEVEL))  /*!< Mask  0x0000000E */
#define SCB_CCSELR_LEVEL_0         (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSELR, LEVEL))  /*!< Value 0x00000002 */
#define SCB_CCSELR_LEVEL_1         (0x2UL << REGISTER_FIELD_OFFSET(SCB, CCSELR, LEVEL))  /*!< Value 0x00000004 */
#define SCB_CCSELR_LEVEL_2         (0x4UL << REGISTER_FIELD_OFFSET(SCB, CCSELR, LEVEL))  /*!< Value 0x00000008 */

#define SCB_CCSELR_TYPE_OFFSET         (0U)
#define SCB_CCSELR_TYPE_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SCB, CCSELR, TYPE))         /*!< Mask  0x00000001 */

// Values of cache write allocation support bit
#define SCB_CACHELEVEL_LEVEL0  (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHELEVEL_LEVEL1  (0x1UL)  /*!< Value 0x00000001 */
#define SCB_CACHELEVEL_LEVEL2  (0x2UL)  /*!< Value 0x00000002 */
#define SCB_CACHELEVEL_LEVEL3  (0x3UL)  /*!< Value 0x00000003 */
#define SCB_CACHELEVEL_LEVEL4  (0x4UL)  /*!< Value 0x00000004 */
#define SCB_CACHELEVEL_LEVEL5  (0x5UL)  /*!< Value 0x00000005 */
#define SCB_CACHELEVEL_LEVEL6  (0x6UL)  /*!< Value 0x00000006 */
#define SCB_CACHELEVEL_LEVEL7  (0x7UL)  /*!< Value 0x00000007 */

// Values of cache write allocation support bit
#define SCB_CACHETYPE_UNIFIED    (0x0UL)  /*!< Value 0x00000000 */
#define SCB_CACHETYPE_INSTRDATA  (0x1UL)  /*!< Value 0x00000001 */

/*!< Coprocessor access control register */
#define SCB_CPACR_CP11_OFFSET  (22U)
#define SCB_CPACR_CP11_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP11))  /*!< Mask  0x00C00000 */
#define SCB_CPACR_CP11_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP11))  /*!< Value 0x00400000 */
#define SCB_CPACR_CP11_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP11))  /*!< Value 0x00800000 */

#define SCB_CPACR_CP10_OFFSET  (20U)
#define SCB_CPACR_CP10_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP10))  /*!< Mask  0x00300000 */
#define SCB_CPACR_CP10_0       (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP10))  /*!< Value 0x00100000 */
#define SCB_CPACR_CP10_1       (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP10))  /*!< Value 0x00200000 */

#define SCB_CPACR_CP7_OFFSET   (14U)
#define SCB_CPACR_CP7_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP7))   /*!< Mask  0x0000C000 */
#define SCB_CPACR_CP7_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP7))   /*!< Value 0x00004000 */
#define SCB_CPACR_CP7_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP7))   /*!< Value 0x00008000 */

#define SCB_CPACR_CP6_OFFSET   (12U)
#define SCB_CPACR_CP6_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP6))   /*!< Mask  0x00003000 */
#define SCB_CPACR_CP6_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP6))   /*!< Value 0x00001000 */
#define SCB_CPACR_CP6_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP6))   /*!< Value 0x00002000 */

#define SCB_CPACR_CP5_OFFSET   (10U)
#define SCB_CPACR_CP5_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP5))   /*!< Mask  0x00000C00 */
#define SCB_CPACR_CP5_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP5))   /*!< Value 0x00000400 */
#define SCB_CPACR_CP5_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP5))   /*!< Value 0x00000800 */

#define SCB_CPACR_CP4_OFFSET   (8U)
#define SCB_CPACR_CP4_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP4))   /*!< Mask  0x00000300 */
#define SCB_CPACR_CP4_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP4))   /*!< Value 0x00000100 */
#define SCB_CPACR_CP4_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP4))   /*!< Value 0x00000200 */

#define SCB_CPACR_CP3_OFFSET   (6U)
#define SCB_CPACR_CP3_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP3))   /*!< Mask  0x000000C0 */
#define SCB_CPACR_CP3_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP3))   /*!< Value 0x00000040 */
#define SCB_CPACR_CP3_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP3))   /*!< Value 0x00000080 */

#define SCB_CPACR_CP2_OFFSET   (4U)
#define SCB_CPACR_CP2_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP2))   /*!< Mask  0x00000030 */
#define SCB_CPACR_CP2_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP2))   /*!< Value 0x00000010 */
#define SCB_CPACR_CP2_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP2))   /*!< Value 0x00000020 */

#define SCB_CPACR_CP1_OFFSET   (2U)
#define SCB_CPACR_CP1_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP1))   /*!< Mask  0x0000000C */
#define SCB_CPACR_CP1_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP1))   /*!< Value 0x00000004 */
#define SCB_CPACR_CP1_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP1))   /*!< Value 0x00000008 */

#define SCB_CPACR_CP0_OFFSET   (0U)
#define SCB_CPACR_CP0_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP0))   /*!< Mask  0x00000003 */
#define SCB_CPACR_CP0_0        (0x1UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP0))   /*!< Value 0x00000001 */
#define SCB_CPACR_CP0_1        (0x2UL << REGISTER_FIELD_OFFSET(SCB, CPACR, CP0))   /*!< Value 0x00000002 */

// Values of coprocess access privileges register
#define SCB_COPROCESSORACCESSPRIVILEGES_ACCESSDENIED      (0x0UL)  /*!< Value 0x00000000 */
#define SCB_COPROCESSORACCESSPRIVILEGES_PRIVILEGEDACCESS  (0x1UL)  /*!< Value 0x00000001 */
#define SCB_COPROCESSORACCESSPRIVILEGES_FULLACCESS        (0x3UL)  /*!< Value 0x00000003 */

#define SCB_OFFSET 0xD00UL
#define SCB_BASE OFFSET_ADDRESS(SCS_BASE, SCB_OFFSET)
#define SCB REGISTER_PTR(scs_scb_regs, SCB_BASE)

/** @} */ // End of SCB group

/** @} */ // End of RegisterGroup group

#endif // SCB_REGISTERS_H
