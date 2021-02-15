#ifndef PERIPHERALS_H
#define PERIPHERALS_H
/**
 * @copyright
 * @file registers.h
 * @author Andrea Gianarda
 * @date 15th of February 2021
 * @brief Registers global definitions
*/

#include "global/registers.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup Peripherals Peripherals macros
 *  @brief Peripherals global macros
 *  @{
 */

/*!< Peripherals address boundaries */
#define PERIPHERALS_BASE 0x4000000UL

#define D1_AHB3_OFFSET 0x11000000UL
#define D1_AHB3_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D1_AHB3_OFFSET)

#define D1_APB3_OFFSET 0x10000000UL
#define D1_APB3_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D1_APB3_OFFSET)

#define D2_AHB1_OFFSET 0x10000UL
#define D2_AHB1_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D2_AHB1_OFFSET)

#define D2_APB1_OFFSET 0x00000UL
#define D2_APB1_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D2_APB1_OFFSET)

#define D2_AHB2_OFFSET 0x8020000UL
#define D2_AHB2_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D2_AHB2_OFFSET)

#define D2_APB2_OFFSET 0x10000UL
#define D2_APB2_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D2_APB2_OFFSET)

#define D3_AHB4_OFFSET 0x18020000UL
#define D3_AHB4_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D3_AHB4_OFFSET)

#define D3_APB4_OFFSET 0x12009000UL
#define D3_APB4_BASE OFFSET_ADDRESS(PERIPHERALS_BASE, D3_APB4_OFFSET)

/** @} */ // End of Peripherals group

/** @} */ // End of RegisterGroup group

#endif // PERIPHERALS_H
