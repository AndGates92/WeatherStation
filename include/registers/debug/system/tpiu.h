#ifndef SYSTEMTPIU_REGISTERS_H
#define SYSTEMTPIU_REGISTERS_H
/**
 * @copyright
 * @file tpiu.h
 * @author Andrea Gianarda
 * @date 10th of May 2021
 * @brief Trace port interface unit (TPIU) registers in private peripheral bus (PPB) of system register
*/

#include <stdint.h>
#include "registers/debug/common/tpiu.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemTPIU Trace port interface unit (TPIU) registers in private peripheral bus (PPB) of system
 *  @brief Trace port interface unit (TPIU) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

#define SYSTEMTPIU_OFFSET 0x15000UL
#define SYSTEMTPIUDEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMTPIU_OFFSET)
#define SYSTEMTPIUDEBUGGER REGISTER_PTR(tpiu_regs, SYSTEMTPIU_BASE)

#define SYSTEMTPIUSYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMTPIU_OFFSET)
#define SYSTEMTPIU REGISTER_PTR(cstf_regs, SYSTEMTPIUSYSTEMBUS_BASE)

/** @} */ // End of SystemTPIU group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMTPIU_REGISTERS_H
