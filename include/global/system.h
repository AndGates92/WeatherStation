#ifndef SYSTEM_H
#define SYSTEM_H
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

/*!< System address debug boundaries */
#define ARMV7MDEBUGGERADDRESS_BASE    0xE0000000UL
#define ARMV7MSYSTEMDEBUGADDRESS_BASE 0x5C000000UL

// ROM table 1 base address
#define SYSTEMROM1DEBUGGER_OFFSET 0xE0000UL
#define SYSTEMROM1DEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMROM1DEBUGGER_OFFSET)

// ROM table 2 base address
#define SYSTEMROM2DEBUGGER_OFFSET 0xF0000UL
#define SYSTEMROM2DEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMROM2DEBUGGER_OFFSET)

/** @} */ // End of Peripherals group

/** @} */ // End of RegisterGroup group

#endif // SYSTEM_H
