#ifndef SYSTEMSWTF_REGISTERS_H
#define SYSTEMSWTF_REGISTERS_H
/**
 * @copyright
 * @file itm.h
 * @author Andrea Gianarda
 * @date 31st of August 2021
 * @brief Serial Wire Output Trace Funnel (SWTF) registers in private peripheral bus (PPB) of system
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
 *  @defgroup SystemSWTF Serial Wire Output Trace Funnel (SWTF) registers in private peripheral bus (PPB) of system
 *  @brief Serial Wire Output Trace Funnel (SWTF) registers in private peripheral bus (PPB) of system macros and structures
 *  @{
 */

#define SYSTEMSWTF_OFFSET 0x4000UL
#define SYSTEMSWTFDEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMSWTF_OFFSET)
#define SYSTEMSWTFDEBUGGER REGISTER_PTR(cstf_regs, SYSTEMSWTF_BASE)

#define SYSTEMSWTFSYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMSWTF_OFFSET)
#define SYSTEMSWTF REGISTER_PTR(cstf_regs, SYSTEMSWTFSYSTEMBUS_BASE)

/** @} */ // End of SystemSWTF group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMSWTF_REGISTERS_H
