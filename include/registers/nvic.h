#ifndef NVIC_REGISTERS_H
#define NVIC_REGISTERS_H
/**
 * @copyright
 * @file nvic.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Nested vectored interrupt controller registers (NVIC)
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
 *  @defgroup NVIC Nested Vector Interrupt Controller
 *  @brief Nested vector interrupt controller (NVIC) macros and structures
 *  @{
 */

typedef struct {
	RO uint32_t ICTR;         /*!< Access control register                                    (Offset 0x0)  */
	WO uint32_t ACTRL         /*!< Bank key register register                                 (Offset 0x4)  */
	RW uint32_t ISE[8U];         /*!< Interrupt set enable rgister      (Offset 0x000 to 0x01C)  */
	   uint32_t reserved0[24U];  /*!< Reserved                          (Offset 0x020 to 0x07C)  */
	RW uint32_t ICE[8U];         /*!< Interrupt clear enable register   (Offset 0x080 to 0x09C)  */
	   uint32_t reserved1[24U];  /*!< Reserved                          (Offset 0x0A0 to 0x0FC)  */
	RW uint32_t ISP[8U];         /*!< Interrupt set pending register    (Offset 0x100 to 0x11C)  */
	   uint32_t reserved2[24U];  /*!< Reserved                          (Offset 0x120 to 0x17C)  */
	RW uint32_t ICP[8U];         /*!< Interrupt clear pending register  (Offset 0x180 to 0x19C)  */
	   uint32_t reserved3[24U];  /*!< Reserved                          (Offset 0x1A0 to 0x1FC)  */
	RO uint32_t IAB[8U];         /*!< Interrupt active bit register     (Offset 0x200 to 0x21C)  */
	   uint32_t reserved4[56U];  /*!< Reserved                          (Offset 0x220 to 0x2FC)  */
	RW uint8_t  IP[240U];        /*!< Interrupt priority register       (Offset 0x14) */
} nvic_bank_regs;

/*!< Nested vector interrupt controller (NVIC) registers */
/*!< Access control register */
#define NVIC_ACCESSCTRL_PROGDLY_OFFSET  (4U)
#define NVIC_ACCESSCTRL_PROGDLY_MASK    (0x3UL << REGISTER_FIELD_OFFSET(NVIC, ACCESSCTRL, PROGDLY))  /*!< Mask  0x00000030 */

#define NVIC_ACCESSCTRL_LATENCY_OFFSET  (0U)
#define NVIC_ACCESSCTRL_LATENCY_MASK    (0xFUL << REGISTER_FIELD_OFFSET(NVIC, ACCESSCTRL, LATENCY))  /*!< Mask  0x0000000F */

// Available delays between non volatile memory signals during programming operations
#define NVIC_PROGDLY_0  (0x0UL)  /*!< Value 0x00000000 */
#define NVIC_PROGDLY_1  (0x1UL)  /*!< Value 0x00000001 */
#define NVIC_PROGDLY_2  (0x2UL)  /*!< Value 0x00000002 */
#define NVIC_PROGDLY_3  (0x3UL)  /*!< Value 0x00000003 */

#define NVIC_OFFSET 0x1004000
#define NVIC_BASE (D1_AHB3_BASE + NVIC_OFFSET)
#define NVIC_ADDRESS_RANGE 0x100

/*!< NVIC registers for bank 1 */
#define NVIC_BANK1_OFFSET (0*NVIC_ADDRESS_RANGE)
#define NVIC_BANK1_BASE OFFSET_ADDRESS(NVIC_BASE, NVIC_BANK1_OFFSET)
#define NVIC_BANK1 REGISTER_PTR(nvic_bank_regs, NVIC_BANK1_BASE)

/*!< NVIC registers for bank 2 */
#define NVIC_BANK2_OFFSET (1*NVIC_ADDRESS_RANGE)
#define NVIC_BANK2_BASE OFFSET_ADDRESS(NVIC_BASE, NVIC_BANK2_OFFSET)
#define NVIC_BANK2 REGISTER_PTR(nvic_bank_regs, NVIC_BANK2_BASE)

/** @} */ // End of NVIC group

/** @} */ // End of RegisterGroup group

#endif // NVIC_REGISTERS_H
