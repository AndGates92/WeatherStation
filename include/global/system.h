#ifndef PERIPHERALS_H
#define PERIPHERALS_H
/**
 * @copyright
 * @file system.h
 * @author Andrea Gianarda
 * @date 15th of April 2021
 * @brief System registers global definitions
*/

#include "global/registers.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup System System macros
 *  @brief System global macros
 *  @{
 */

/*!< System address boundaries */
#define ARMV7MSYSTEM_BASE 0xE0000000UL

// Private peripheral bus (PPB) area
#define PPB_OFFSET 0x00000000UL
#define PPB_BASE OFFSET_ADDRESS(ARMV7MSYSTEM_BASE, PPB_OFFSET)

#define SCS_OFFSET 0x0000E000UL
#define SCS_BASE OFFSET_ADDRESS(PPB_BASE, SCS_OFFSET)

#define VENDOR_OFFSET 0x00100000UL
#define VENDOR_BASE OFFSET_ADDRESS(ARMV7MSYSTEM_BASE, VENDOR_OFFSET)

/** @} */ // End of Peripherals group

/** @} */ // End of RegisterGroup group

#endif // PERIPHERALS_H
