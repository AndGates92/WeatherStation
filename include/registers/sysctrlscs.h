#ifndef SYSCTRLSCS_REGISTERS_H
#define SYSCTRLSCS_REGISTERS_H
/**
 * @copyright
 * @file nvic.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief System control and ID registers in system control space (SCS)
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
 *  @defgroup SysCtrlScs System control and ID registers in system control space (SCS)
 *  @brief System control and ID registers in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;       /*!< Reserved                               (Offset 0x0)           */
	RO uint32_t ICT;             /*!< Interrupt controller type register     (Offset 0x4)           */
	RW uint32_t ACTL;            /*!< Auxiliary control register             (Offset 0x8)           */
	   uint32_t reserved0[62];  /*!< Reserved                               (Offset 0xC to 0x0FC)  */
	WO uint32_t STI;             /*!< Software triggered interrupt register  (Offset 0x100)         */
} nvic_bank_regs;

/*!< System control and ID registers in system control space (SCS) registers */
/*!< Access control register */
#define SYSCTRLSCS_ACCESSCTRL_PROGDLY_OFFSET  (4U)
#define SYSCTRLSCS_ACCESSCTRL_PROGDLY_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SYSCTRLSCS, ACCESSCTRL, PROGDLY))  /*!< Mask  0x00000030 */

#define SYSCTRLSCS_ACCESSCTRL_LATENCY_OFFSET  (0U)
#define SYSCTRLSCS_ACCESSCTRL_LATENCY_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCTRLSCS, ACCESSCTRL, LATENCY))  /*!< Mask  0x0000000F */

// Available delays between non volatile memory signals during programming operations
#define SYSCTRLSCS_PROGDLY_0  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCTRLSCS_PROGDLY_1  (0x1UL)  /*!< Value 0x00000001 */
#define SYSCTRLSCS_PROGDLY_2  (0x2UL)  /*!< Value 0x00000002 */
#define SYSCTRLSCS_PROGDLY_3  (0x3UL)  /*!< Value 0x00000003 */

#define SYSCTRLSCS_OFFSET 0x1004000
#define SYSCTRLSCS_BASE (D1_AHB3_BASE + SYSCTRLSCS_OFFSET)
#define SYSCTRLSCS_ADDRESS_RANGE 0x100

/*!< SYSCTRLSCS registers for bank 1 */
#define SYSCTRLSCS_BANK1_OFFSET (0*SYSCTRLSCS_ADDRESS_RANGE)
#define SYSCTRLSCS_BANK1_BASE OFFSET_ADDRESS(SYSCTRLSCS_BASE, SYSCTRLSCS_BANK1_OFFSET)
#define SYSCTRLSCS_BANK1 REGISTER_PTR(nvic_bank_regs, SYSCTRLSCS_BANK1_BASE)

/*!< SYSCTRLSCS registers for bank 2 */
#define SYSCTRLSCS_BANK2_OFFSET (1*SYSCTRLSCS_ADDRESS_RANGE)
#define SYSCTRLSCS_BANK2_BASE OFFSET_ADDRESS(SYSCTRLSCS_BASE, SYSCTRLSCS_BANK2_OFFSET)
#define SYSCTRLSCS_BANK2 REGISTER_PTR(nvic_bank_regs, SYSCTRLSCS_BANK2_BASE)

/** @} */ // End of SysCtrlScs group

/** @} */ // End of RegisterGroup group

#endif // SYSCTRLSCS_REGISTERS_H
