#ifndef SYSTEMSWO_REGISTERS_H
#define SYSTEMSWO_REGISTERS_H
/**
 * @copyright
 * @file itm.h
 * @author Andrea Gianarda
 * @date 31st of August 2021
 * @brief Serial Wire Output (SWO) registers in private peripheral bus (PPB) of system
*/

#include <stdint.h>
#include "registers/debug/common/swo.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemSWO Serial Wire Output (SWO) registers in private peripheral bus (PPB) of system
 *  @brief Serial Wire Output (SWO) registers in private peripheral bus (PPB) of system macros and structures
 *  @{
 */

#define SYSTEMSWO_OFFSET 0x3000UL
#define SYSTEMSWODEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMSWO_OFFSET)
#define SYSTEMSWODEBUGGER REGISTER_PTR(swo_regs, SYSTEMSWO_BASE)

#define SYSTEMSWOSYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMSWO_OFFSET)
#define SYSTEMSWO REGISTER_PTR(cstf_regs, SYSTEMSWOSYSTEMBUS_BASE)

/** @} */ // End of SystemSWO group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMSWO_REGISTERS_H
