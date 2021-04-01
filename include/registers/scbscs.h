#ifndef SCB_REGISTERS_H
#define SCB_REGISTERS_H
/**
 * @copyright
 * @file sysctrlscs.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief System control register in system control space (SCS) register
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
 *  @defgroup SysCtrl System control register in system control space (SCS)
 *  @brief System control register in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	RO uint32_t CPUID;      /*!< CPU ID register                                   (Offset 0x0)          */
	RW uint32_t ICS;        /*!< Interrupt control and state register              (Offset 0x4)          */
	RW uint32_t VTOR;       /*!< Vector table offset register                      (Offset 0x8)          */
	RW uint32_t AIRC;       /*!< Application interrupt and reset control register  (Offset 0xC)          */
	RW uint32_t SC;         /*!< System control register                           (Offset 0x10)         */
	RW uint32_t CC;         /*!< Configuration and control register                (Offset 0x14)         */
	RW uint32_t SHP[3U];    /*!< System handler priority register                  (Offset 0x18 - 0x20)  */
	RW uint32_t SHCR;       /*!< System handler control and state register         (Offset 0x24)         */
	RW uint32_t CFSR;       /*!< Configurable fault status register                (Offset 0x28)         */
	RW uint32_t HFSR;       /*!< Hard fault status register                        (Offset 0x2C)         */
	RW uint32_t DFSR;       /*!< Debug fault status register                       (Offset 0x30)         */
	RW uint32_t MMAR;       /*!< MemManage handler control and state register      (Offset 0x34)         */
	RW uint32_t BFAR;       /*!< Bus fault status register                         (Offset 0x38)         */
	RW uint32_t AFSR;       /*!< Auxiliary fault status register                   (Offset 0x3C)         */
	RO uint32_t PF0;        /*!< Processor feature register 0                      (Offset 0x40)         */
	RO uint32_t PF1;        /*!< Processor feature register 1                      (Offset 0x44)         */
	RO uint32_t DF;         /*!< Debug feature register                            (Offset 0x48)         */
	RO uint32_t AF;         /*!< Auxiliary feature register                        (Offset 0x4C)         */
	RO uint32_t MMF0;       /*!< Model memory feature register 0                   (Offset 0x50)         */
	RO uint32_t MMF1;       /*!< Model memory feature register 1                   (Offset 0x54)         */
	RO uint32_t MMF2;       /*!< Model memory feature register 2                   (Offset 0x58)         */
	RO uint32_t MMF3;       /*!< Model memory feature register 3                   (Offset 0x5C)         */
	RO uint32_t ISA0;       /*!< Instruction set attribute register 0              (Offset 0x60)         */
	RO uint32_t ISA1;       /*!< Instruction set attribute register 1              (Offset 0x64)         */
	RO uint32_t ISA2;       /*!< Instruction set attribute register 2              (Offset 0x68)         */
	RO uint32_t ISA3;       /*!< Instruction set attribute register 3              (Offset 0x6C)         */
	RO uint32_t ISA4;       /*!< Instruction set attribute register 4              (Offset 0x70)         */
	RO uint32_t ISA5;       /*!< Instruction set attribute register 5              (Offset 0x74)         */
	RO uint32_t CLID;       /*!< Cache level ID register                           (Offset 0x78)         */
	RO uint32_t CT;         /*!< Cache type register                               (Offset 0x7C)         */
	RO uint32_t CSID;       /*!< Cache size ID register                            (Offset 0x80)         */
	RO uint32_t CSSEL;      /*!< Cache size selection register                     (Offset 0x84)         */
	RO uint32_t CPAC;       /*!< Compressor access control register                (Offset 0x88)         */
	   uint32_t reserved;   /*!< Reserved                                          (Offset 0x8C)         */
} scs_scb_regs;

/*!< System control registers in system control space (SCS) registers */
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
#define SCB_ACTL_NMIEN_OFFSET      (31U)
#define SCB_ACTL_NMIEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, NMIEN))      /*!< Mask  0x80000000 */

#define SCB_ACTL_SVEXCEPTIONPEND_OFFSET      (28U)
#define SCB_ACTL_SVEXCEPTIONPEND_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, SVEXCEPTIONPEND))      /*!< Mask  0x10000000 */

#define SCB_ACTL_SVEXCEPTIONCLR_OFFSET      (27U)
#define SCB_ACTL_SVEXCEPTIONCLR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, SVEXCEPTIONCLR))      /*!< Mask  0x08000000 */

#define SCB_ACTL_SYSTICKEXCEPTIONSET_OFFSET      (26U)
#define SCB_ACTL_SYSTICKEXCEPTIONSET_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, SYSTICKEXCEPTIONSET))      /*!< Mask  0x04000000 */

#define SCB_ACTL_SYSTICKEXCEPTIONCLR_OFFSET      (25U)
#define SCB_ACTL_SYSTICKEXCEPTIONCLR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, SYSTICKEXCEPTIONCLR))      /*!< Mask  0x02000000 */

#define SCB_ACTL_SERVICEEXCEPTIONONDEBUGSTATEEXIT_OFFSET      (23U)
#define SCB_ACTL_SERVICEEXCEPTIONONDEBUGSTATEEXIT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, SERVICEEXCEPTIONONDEBUGSTATEEXIT))      /*!< Mask  0x00800000 */

#define SCB_ACTL_ISRPENDING_OFFSET      (22U)
#define SCB_ACTL_ISRPENDING_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, ISRPENDING))      /*!< Mask  0x00400000 */

#define SCB_ACTL_EXCEPTIOPEND_OFFSET      (12U)
#define SCB_ACTL_EXCEPTIOPEND_MASK        (0x1FFUL << REGISTER_FIELD_OFFSET(SCB, ACTL, EXCEPTIOPEND))      /*!< Mask  0x001F0000 */

#define SCB_ACTL_MULTIPLEACTIVEEXCEPTIONS_OFFSET  (11U)
#define SCB_ACTL_MULTIPLEACTIVEEXCEPTIONS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, MULTIPLEACTIVEEXCEPTIONS))  /*!< Mask  0x00000800 */

#define SCB_ACTL_ACTIVEEXCEPTION_OFFSET       (0U)
#define SCB_ACTL_ACTIVEEXCEPTION_MASK         (0x1FFUL << REGISTER_FIELD_OFFSET(SCB, ACTL, ACTIVEEXCEPTION))       /*!< Mask  0x000001FF */

// Values of dual issue bits
#define SCB_ACTL_DUALISSUE_VFP              (0x10UL)  /*!< Value 0x00000010 */
#define SCB_ACTL_DUALISSUE_INTMACMUL        (0x08UL)  /*!< Value 0x00000008 */
#define SCB_ACTL_DUALISSUE_LOADPC           (0x04UL)  /*!< Value 0x00000004 */
#define SCB_ACTL_DUALISSUE_INDIRECTBRANCH   (0x02UL)  /*!< Value 0x00000002 */
#define SCB_ACTL_DUALISSUE_DIRECTBRANCH     (0x01UL)  /*!< Value 0x00000001 */

// Values of enable bits
#define SCB_ACTL_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define SCB_ACTL_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

#define SCB_OFFSET 0xD00
#define SCB_BASE (SCS_BASE + SCB_OFFSET)
#define SCB REGISTER_PTR(scs_scb_regs, SCB_BASE)

/** @} */ // End of SysCtrl group

/** @} */ // End of RegisterGroup group

#endif // SCB_REGISTERS_H
