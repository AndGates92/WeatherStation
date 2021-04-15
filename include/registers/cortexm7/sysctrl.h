#ifndef SYSCTRL_REGISTERS_H
#define SYSCTRL_REGISTERS_H
/**
 * @copyright
 * @file sysctrlscs.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief System control registers in system control space (SCS) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SysCtrl System control registers in system control space (SCS)
 *  @brief System control registers in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;  /*!< Reserved                            (Offset 0x0)  */
	RO uint32_t ICT;        /*!< Interrupt controller type register  (Offset 0x4)  */
	RW uint32_t ACTL;       /*!< Auxiliary control register          (Offset 0x8)  */
	   uint32_t reserved1;  /*!< Reserved                            (Offset 0xC)  */
} scs_sysctrl_regs;

/*!< System control registers in system control space (SCS) registers */
/*!< Interrupt controller type register */
#define SYSCTRL_ICT_INTLINESGROUP_OFFSET  (0U)
#define SYSCTRL_ICT_INTLINESGROUP_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCTRL, ICT, INTLINESGROUP))  /*!< Mask  0x0000000F */

// Available delays between non volatile memory signals during programming operations
#define SYSCTRL_INTLINES_0_31     (0x0UL)  /*!< Value 0x00000000 */
#define SYSCTRL_INTLINES_32_63    (0x1UL)  /*!< Value 0x00000001 */
#define SYSCTRL_INTLINES_64_95    (0x2UL)  /*!< Value 0x00000002 */
#define SYSCTRL_INTLINES_96_127   (0x3UL)  /*!< Value 0x00000003 */
#define SYSCTRL_INTLINES_128_159  (0x4UL)  /*!< Value 0x00000004 */
#define SYSCTRL_INTLINES_160_191  (0x5UL)  /*!< Value 0x00000005 */
#define SYSCTRL_INTLINES_192_223  (0x6UL)  /*!< Value 0x00000006 */
#define SYSCTRL_INTLINES_224_256  (0x7UL)  /*!< Value 0x00000007 */
#define SYSCTRL_INTLINES_256_287  (0x8UL)  /*!< Value 0x00000008 */
#define SYSCTRL_INTLINES_288_319  (0x9UL)  /*!< Value 0x00000009 */
#define SYSCTRL_INTLINES_320_351  (0xAUL)  /*!< Value 0x0000000A */
#define SYSCTRL_INTLINES_352_383  (0xBUL)  /*!< Value 0x0000000B */
#define SYSCTRL_INTLINES_384_415  (0xCUL)  /*!< Value 0x0000000C */
#define SYSCTRL_INTLINES_416_447  (0xDUL)  /*!< Value 0x0000000D */
#define SYSCTRL_INTLINES_448_479  (0xEUL)  /*!< Value 0x0000000E */
#define SYSCTRL_INTLINES_480_495  (0xFUL)  /*!< Value 0x0000000F */

/*!< Auxiliary control register */
#define SYSCTRL_ACTL_FPUDUALISSUE_OFFSET      (28U)
#define SYSCTRL_ACTL_FPUDUALISSUE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, FPUDUALISSUE))      /*!< Mask  0x10000000 */

#define SYSCTRL_ACTL_CRITAXIRDUWR_OFFSET      (27U)
#define SYSCTRL_ACTL_CRITAXIRDUWR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, CRITAXIRDUWR))      /*!< Mask  0x08000000 */

#define SYSCTRL_ACTL_DYNALLADDSUB_OFFSET      (26U)
#define SYSCTRL_ACTL_DYNALLADDSUB_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, DYNALLADDSUB))      /*!< Mask  0x04000000 */

#define SYSCTRL_ACTL_DUALISSUECH1_OFFSET      (21U)
#define SYSCTRL_ACTL_DUALISSUECH1_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, DUALISSUECH1))      /*!< Mask  0x03E00000 */

#define SYSCTRL_ACTL_DUALISSUECH0_OFFSET      (16U)
#define SYSCTRL_ACTL_DUALISSUECH0_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, DUALISSUECH0))      /*!< Mask  0x001F0000 */

#define SYSCTRL_ACTL_CRITAXIRDURD_OFFSET      (15U)
#define SYSCTRL_ACTL_CRITAXIRDURD_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, CRITAXIRDURD))      /*!< Mask  0x00008000 */

#define SYSCTRL_ACTL_BTACALLOC_OFFSET         (14U)
#define SYSCTRL_ACTL_BTACALLOC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, BTACALLOC))         /*!< Mask  0x00004000 */

#define SYSCTRL_ACTL_BTACREAD_OFFSET          (13U)
#define SYSCTRL_ACTL_BTACREAD_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, BTACREAD))          /*!< Mask  0x00002000 */

#define SYSCTRL_ACTL_ITMDWTATBFLUSH_OFFSET    (12U)
#define SYSCTRL_ACTL_ITMDWTATBFLUSH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, ITMDWTATBFLUSH))    /*!< Mask  0x00001000 */

#define SYSCTRL_ACTL_READALLOCATEMODE_OFFSET  (11U)
#define SYSCTRL_ACTL_READALLOCATEMODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, READALLOCATEMODE))  /*!< Mask  0x00000800 */

#define SYSCTRL_ACTL_FPUEXCOUT_OFFSET         (10U)
#define SYSCTRL_ACTL_FPUEXCOUT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, FPUEXCOUT))         /*!< Mask  0x00000400 */

#define SYSCTRL_ACTL_FOLDEDINSTR_OFFSET       (2U)
#define SYSCTRL_ACTL_FOLDEDINSTR_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SYSCTRL, ACTL, FOLDEDINSTR))       /*!< Mask  0x00000004 */

// Values of dual issue bits
#define SYSCTRL_DUALISSUE_DIRECTBRANCH     (0x01UL)  /*!< Value 0x00000001 */
#define SYSCTRL_DUALISSUE_INDIRECTBRANCH   (0x02UL)  /*!< Value 0x00000002 */
#define SYSCTRL_DUALISSUE_LOADPC           (0x04UL)  /*!< Value 0x00000004 */
#define SYSCTRL_DUALISSUE_INTMACMUL        (0x08UL)  /*!< Value 0x00000008 */
#define SYSCTRL_DUALISSUE_VFP              (0x10UL)  /*!< Value 0x00000010 */

// Values of enable bits
#define SYSCTRL_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCTRL_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

#define SYSCTRL_OFFSET 0x0
#define SYSCTRL_BASE (SCS_BASE + SYSCTRL_OFFSET)
#define SYSCTRL REGISTER_PTR(scs_sysctrl_regs, SYSCTRL_BASE)

/** @} */ // End of SysCtrl group

/** @} */ // End of RegisterGroup group

#endif // SYSCTRL_REGISTERS_H
