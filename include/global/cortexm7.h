#ifndef CORTEXM7_H
#define CORTEXM7_H
/**
 * @copyright
 * @file cortexm7.h
 * @author Andrea Gianarda
 * @date 31st of August 2021
 * @brief Cortex M7 registers global definitions
*/

#include "global/registers.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CortexM7 Cortex M7 macros
 *  @brief Cortex M7 global macros
 *  @{
 */

/*!< Cortex M7 address boundaries */
#define CORTEXM7DEBUG_BASE 0xE0000000UL

// Private peripheral bus (PPB) area
#define CORTEXM7PPB_OFFSET 0x0UL
#define CORTEXM7PPB_BASE OFFSET_ADDRESS(CORTEXM7DEBUG_BASE, CORTEXM7PPB_OFFSET)

#define CORTEXM7SCS_OFFSET 0xE000UL
#define CORTEXM7SCS_BASE OFFSET_ADDRESS(CORTEXM7PPB_BASE, CORTEXM7SCS_OFFSET)

#define CORTEXM7VENDOR_OFFSET 0x00100000UL
#define CORTEXM7VENDOR_BASE OFFSET_ADDRESS(CORTEXM7DEBUG_BASE, CORTEXM7VENDOR_OFFSET)

/** @} */ // End of Peripherals group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM7_H
