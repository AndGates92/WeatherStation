#ifndef CORTEXM7DWT_REGISTERS_H
#define CORTEXM7DWT_REGISTERS_H
/**
 * @copyright
 * @file dwt.h
 * @author Andrea Gianarda
 * @date 25th of April 2021
 * @brief Data watchpoint and trace (DWT) unit registers in private peripheral bus (PPB) of Cortex M7
*/

#include <stdint.h>
#include "registers/debug/common/dwt.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CortexM7DWT Data watchpoint and trace (DWT) unit registers in private peripheral bus (PPB) of Cortex M7
 *  @brief Data watchpoint and trace (DWT) unit registers in private peripheral bus (PPB) of Cortex M7 macros and structures
 *  @{
 */

#define CORTEXM7DWT_OFFSET 0x1000UL
#define CORTEXM7DWT_BASE OFFSET_ADDRESS(PPB_BASE, CORTEXM7DWT_OFFSET)
#define CORTEXM7DWT REGISTER_PTR(cortexm7dwt_regs, CORTEXM7DWT_BASE)

/** @} */ // End of CortexM7DWT group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM7DWT_REGISTERS_H
