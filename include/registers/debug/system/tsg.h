#ifndef SYSTEMTSG_REGISTERS_H
#define SYSTEMTSG_REGISTERS_H
/**
 * @copyright
 * @file tsg.h
 * @author Andrea Gianarda
 * @date 1st of August 2021
 * @brief Timestamp generator (TSG) unit registers in private peripheral bus (PPB) of system
*/

#include <stdint.h>
#include "registers/debug/common/tsg.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemTSG Timestamp generator (TSG) unit registers in private peripheral bus (PPB) of system
 *  @brief Timestamp generator (TSG) unit registers in private peripheral bus (PPB) of system macros and structures
 *  @{
 */

#define SYSTEMTSG_OFFSET 0x5000UL
#define SYSTEMTSGDEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMTSG_OFFSET)
#define SYSTEMTSGDEBUGGER REGISTER_PTR(tsg_regs, SYSTEMTSG_BASE)

#define SYSTEMTSGSYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMTSG_OFFSET)
#define SYSTEMTSG REGISTER_PTR(cstf_regs, SYSTEMTSGSYSTEMBUS_BASE)

/** @} */ // End of SystemTSG group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMTSG_REGISTERS_H
