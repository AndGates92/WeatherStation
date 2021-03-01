#ifndef SYSTEMCSTF_REGISTERS_H
#define SYSTEMCSTF_REGISTERS_H
/**
 * @copyright
 * @file itm.h
 * @author Andrea Gianarda
 * @date 29th of July 2021
 * @brief CoreSight Trace Funnel (CSTF) registers in private peripheral bus (PPB) of system
*/

#include <stdint.h>
#include "registers/debug/common/cstf.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemCSTF CoreSight Trace Funnel (CSTF) registers in private peripheral bus (PPB) of system
 *  @brief CoreSight Trace Funnel (CSTF) registers in private peripheral bus (PPB) of system macros and structures
 *  @{
 */

#define SYSTEMCSTF_OFFSET 0x13000UL
#define SYSTEMCSTFDEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMCSTF_OFFSET)
#define SYSTEMCSTFDEBUGGER REGISTER_PTR(cstf_regs, SYSTEMCSTFDEBUGGER_BASE)

#define SYSTEMCSTFSYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMCSTF_OFFSET)
#define SYSTEMCSTF REGISTER_PTR(cstf_regs, SYSTEMCSTFSYSTEMBUS_BASE)

/** @} */ // End of SystemCSTF group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMCSTF_REGISTERS_H
