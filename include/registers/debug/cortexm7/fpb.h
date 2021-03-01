#ifndef CORTEXM7FPB_REGISTERS_H
#define CORTEXM7FPB_REGISTERS_H
/**
 * @copyright
 * @file fpb.h
 * @author Andrea Gianarda
 * @date 27th of April 2021
 * @brief Flash patch and breakpoint (FPB) unit registers in private peripheral bus (PPB) of Cortex M7
*/

#include <stdint.h>
#include "registers/debug/common/fpb.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CortexM7FPB Flash patch and breakpoint (FPB) unit registers in private peripheral bus (PPB) of Cortex M7
 *  @brief Flash patch and breakpoint (FPB) unit registers in private peripheral bus (PPB) of Cortex M7 macros and structures
 *  @{
 */

#define CORTEXM7FPB_OFFSET 0x2000UL
#define CORTEXM7FPB_BASE OFFSET_ADDRESS(PPB_BASE, CORTEXM7FPB_OFFSET)
#define CORTEXM7FPB REGISTER_PTR(fpb_regs, CORTEXM7FPB_BASE)

/** @} */ // End of CortexM7FPB group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM7FPB_REGISTERS_H
