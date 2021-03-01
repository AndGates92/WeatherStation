#ifndef CORTEXM7ITM_REGISTERS_H
#define CORTEXM7ITM_REGISTERS_H
/**
 * @copyright
 * @file itm.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) of Cortex M7
*/

#include <stdint.h>
#include "registers/debug/common/itm.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CortexM7ITM Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) of Cortex M7
 *  @brief Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) of Cortex M7 macros and structures
 *  @{
 */

#define CORTEXM7ITM_OFFSET 0x0UL
#define CORTEXM7ITM_BASE OFFSET_ADDRESS(PPB_BASE, CORTEXM7ITM_OFFSET)
#define CORTEXM7ITM REGISTER_PTR(itm_regs, CORTEXM7ITM_BASE)

/** @} */ // End of CortexM7ITM group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM7ITM_REGISTERS_H
