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
 *  @defgroup NVIC Nested Vector Interrupt Controller (NVIC)
 *  @brief Nested vector interrupt controller (NVIC) macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t ISE[8U];         /*!< Interrupt set enable rgister      (Offset 0x000 to 0x01C)  */
	   uint32_t reserved0[24U];  /*!< Reserved                          (Offset 0x020 to 0x07C)  */
	RW uint32_t ICE[8U];         /*!< Interrupt clear enable register   (Offset 0x080 to 0x09C)  */
	   uint32_t reserved1[24U];  /*!< Reserved                          (Offset 0x0A0 to 0x0FC)  */
	RW uint32_t ISP[8U];         /*!< Interrupt set pending register    (Offset 0x100 to 0x11C)  */
	   uint32_t reserved2[24U];  /*!< Reserved                          (Offset 0x120 to 0x17C)  */
	RW uint32_t ICP[8U];         /*!< Interrupt clear pending register  (Offset 0x180 to 0x19C)  */
	   uint32_t reserved3[24U];  /*!< Reserved                          (Offset 0x1A0 to 0x1FC)  */
	RO uint32_t IAB[8U];         /*!< Interrupt active bit register     (Offset 0x200 to 0x21C)  */
	   uint32_t reserved4[56U];  /*!< Reserved                          (Offset 0x220 to 0x3FC)  */
	RW uint8_t  IP[240U];        /*!< Interrupt priority register       (Offset 0x400 to 0x5EC)  */
	   uint32_t reserved5[56U];  /*!< Reserved                          (Offset 0x5F0 to 0xCFC)  */
} scs_nvic_regs;

/*!< Nested vector interrupt controller (NVIC) registers */
/*!< Interrupt set enable register */
#define NVIC_ISE_BIT31_OFFSET  (31U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x80000000 */

#define NVIC_ISE_BIT31_OFFSET  (30U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x40000000 */

#define NVIC_ISE_BIT31_OFFSET  (29U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x20000000 */

#define NVIC_ISE_BIT31_OFFSET  (28U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x10000000 */

#define NVIC_ISE_BIT31_OFFSET  (27U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x08000000 */

#define NVIC_ISE_BIT31_OFFSET  (26U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x04000000 */

#define NVIC_ISE_BIT31_OFFSET  (25U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x02000000 */

#define NVIC_ISE_BIT31_OFFSET  (24U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x01000000 */

#define NVIC_ISE_BIT31_OFFSET  (23U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00800000 */

#define NVIC_ISE_BIT31_OFFSET  (22U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00400000 */

#define NVIC_ISE_BIT31_OFFSET  (21U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00200000 */

#define NVIC_ISE_BIT31_OFFSET  (20U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00100000 */

#define NVIC_ISE_BIT31_OFFSET  (19U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00080000 */

#define NVIC_ISE_BIT31_OFFSET  (18U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00040000 */

#define NVIC_ISE_BIT31_OFFSET  (17U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00020000 */

#define NVIC_ISE_BIT31_OFFSET  (16U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00010000 */

#define NVIC_ISE_BIT31_OFFSET  (15U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00008000 */

#define NVIC_ISE_BIT31_OFFSET  (14U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00004000 */

#define NVIC_ISE_BIT31_OFFSET  (13U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00002000 */

#define NVIC_ISE_BIT31_OFFSET  (12U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00001000 */

#define NVIC_ISE_BIT31_OFFSET  (11U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000800 */

#define NVIC_ISE_BIT31_OFFSET  (10U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000400 */

#define NVIC_ISE_BIT31_OFFSET  (9U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000200 */

#define NVIC_ISE_BIT31_OFFSET  (8U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000100 */

#define NVIC_ISE_BIT31_OFFSET  (7U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000080 */

#define NVIC_ISE_BIT31_OFFSET  (6U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000040 */

#define NVIC_ISE_BIT31_OFFSET  (5U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000020 */

#define NVIC_ISE_BIT31_OFFSET  (4U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000010 */

#define NVIC_ISE_BIT31_OFFSET  (3U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000008 */

#define NVIC_ISE_BIT31_OFFSET  (2U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000004 */

#define NVIC_ISE_BIT31_OFFSET  (1U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000002 */

#define NVIC_ISE_BIT31_OFFSET  (0U)
#define NVIC_ISE_BIT31_MASK    (0x1UL << REGISTER_FIELD_OFFSET(NVIC, ISE, BIT31))  /*!< Mask  0x00000001 */

// Available delays between non volatile memory signals during programming operations
#define NVIC_PROGDLY_0  (0x0UL)  /*!< Value 0x00000000 */
#define NVIC_PROGDLY_1  (0x1UL)  /*!< Value 0x00000001 */
#define NVIC_PROGDLY_2  (0x2UL)  /*!< Value 0x00000002 */
#define NVIC_PROGDLY_3  (0x3UL)  /*!< Value 0x00000003 */


#define NVIC_OFFSET 0x100
#define NVIC_BASE (SCS_BASE + NVIC_OFFSET)
#define NVIC_ADDRESS_RANGE 0x100

#define NVIC_BANK1 REGISTER_PTR(scs_nvic_regs, NVIC_BASE)

/** @} */ // End of NVIC group

/** @} */ // End of RegisterGroup group

#endif // NVIC_REGISTERS_H
