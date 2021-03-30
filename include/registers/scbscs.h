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
#define SCB_ICT_INTLINESGROUP_OFFSET  (0U)
#define SCB_ICT_INTLINESGROUP_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCB, ICT, INTLINESGROUP))  /*!< Mask  0x0000000F */

// Available delays between non volatile memory signals during programming operations
#define SCB_INTLINES_0_31     (0x0UL)  /*!< Value 0x00000000 */
#define SCB_INTLINES_32_63    (0x1UL)  /*!< Value 0x00000001 */
#define SCB_INTLINES_64_95    (0x2UL)  /*!< Value 0x00000002 */
#define SCB_INTLINES_96_127   (0x3UL)  /*!< Value 0x00000003 */
#define SCB_INTLINES_128_159  (0x4UL)  /*!< Value 0x00000004 */
#define SCB_INTLINES_160_191  (0x5UL)  /*!< Value 0x00000005 */
#define SCB_INTLINES_192_223  (0x6UL)  /*!< Value 0x00000006 */
#define SCB_INTLINES_224_256  (0x7UL)  /*!< Value 0x00000007 */
#define SCB_INTLINES_256_287  (0x8UL)  /*!< Value 0x00000008 */
#define SCB_INTLINES_288_319  (0x9UL)  /*!< Value 0x00000009 */
#define SCB_INTLINES_320_351  (0xAUL)  /*!< Value 0x0000000A */
#define SCB_INTLINES_352_383  (0xBUL)  /*!< Value 0x0000000B */
#define SCB_INTLINES_384_415  (0xCUL)  /*!< Value 0x0000000C */
#define SCB_INTLINES_416_447  (0xDUL)  /*!< Value 0x0000000D */
#define SCB_INTLINES_448_479  (0xEUL)  /*!< Value 0x0000000E */
#define SCB_INTLINES_480_495  (0xFUL)  /*!< Value 0x0000000F */

/*!< Auxiliary control register */
#define SCB_ACTL_FPUDUALISSUE_OFFSET      (28U)
#define SCB_ACTL_FPUDUALISSUE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, FPUDUALISSUE))      /*!< Mask  0x10000000 */

#define SCB_ACTL_CRITAXIRDUWR_OFFSET      (27U)
#define SCB_ACTL_CRITAXIRDUWR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, CRITAXIRDUWR))      /*!< Mask  0x08000000 */

#define SCB_ACTL_DYNALLADDSUB_OFFSET      (26U)
#define SCB_ACTL_DYNALLADDSUB_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, DYNALLADDSUB))      /*!< Mask  0x04000000 */

#define SCB_ACTL_DUALISSUECH1_OFFSET      (21U)
#define SCB_ACTL_DUALISSUECH1_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SCB, ACTL, DUALISSUECH1))      /*!< Mask  0x03E00000 */

#define SCB_ACTL_DUALISSUECH0_OFFSET      (16U)
#define SCB_ACTL_DUALISSUECH0_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SCB, ACTL, DUALISSUECH0))      /*!< Mask  0x001F0000 */

#define SCB_ACTL_CRITAXIRDURD_OFFSET      (15U)
#define SCB_ACTL_CRITAXIRDURD_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, CRITAXIRDURD))      /*!< Mask  0x00008000 */

#define SCB_ACTL_BTACALLOC_OFFSET         (14U)
#define SCB_ACTL_BTACALLOC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, BTACALLOC))         /*!< Mask  0x00004000 */

#define SCB_ACTL_BTACREAD_OFFSET          (13U)
#define SCB_ACTL_BTACREAD_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, BTACREAD))          /*!< Mask  0x00002000 */

#define SCB_ACTL_ITMDWTATBFLUSH_OFFSET    (12U)
#define SCB_ACTL_ITMDWTATBFLUSH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, ITMDWTATBFLUSH))    /*!< Mask  0x00001000 */

#define SCB_ACTL_READALLOCATEMODE_OFFSET  (11U)
#define SCB_ACTL_READALLOCATEMODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, READALLOCATEMODE))  /*!< Mask  0x00000800 */

#define SCB_ACTL_FPUEXCOUT_OFFSET         (10U)
#define SCB_ACTL_FPUEXCOUT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, FPUEXCOUT))         /*!< Mask  0x00000400 */

#define SCB_ACTL_FOLDEDINSTR_OFFSET       (2U)
#define SCB_ACTL_FOLDEDINSTR_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCB, ACTL, FOLDEDINSTR))       /*!< Mask  0x00000004 */

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
