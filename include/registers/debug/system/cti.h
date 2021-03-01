#ifndef SYSTEMCTI_REGISTERS_H
#define SYSTEMCTI_REGISTERS_H
/**
 * @copyright
 * @file cti.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) of the system
*/

#include <stdint.h>
#include "registers/debug/common/cti.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemCTI Cross trigger interface (CTI) registers in private peripheral bus (PPB) of the system
 *  @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) of the system macros and structures
 *  @{
 */

#define SYSTEMCTI_OFFSET 0x11000UL
#define SYSTEMCTIDEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMCTI_OFFSET)
#define SYSTEMCTIDEBUGGER REGISTER_PTR(cti_regs, SYSTEMCTIDEBUGGER_BASE)

#define SYSTEMCTISYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMCTI_OFFSET)
#define SYSTEMCTI REGISTER_PTR(cstf_regs, SYSTEMCTISYSTEMBUS_BASE)

/** @} */ // End of SystemCTI group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMCTI_REGISTERS_H
