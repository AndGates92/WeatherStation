#ifndef SYSTEMETF_REGISTERS_H
#define SYSTEMETF_REGISTERS_H
/**
 * @copyright
 * @file etf.h
 * @author Andrea Gianarda
 * @date 4th of August 2021
 * @brief Embedded trace FIFO (ETF) registers in private peripheral bus (PPB) of system register
*/

#include <stdint.h>
#include "registers/debug/system/tmc.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemETF Embedded trace FIFO (ETF) registers in private peripheral bus (PPB) of system
 *  @brief Embedded trace FIFO (ETF) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

#define SYSTEMETF_OFFSET 0x14000UL
#define SYSTEMETFDEBUGGER_BASE OFFSET_ADDRESS(ARMV7MDEBUGGERADDRESS_BASE, SYSTEMETF_OFFSET)
#define SYSTEMETFDEBUGGER REGISTER_PTR(tmc_regs, SYSTEMETFDEBUGGER_BASE)

#define SYSTEMETFSYSTEMBUS_BASE OFFSET_ADDRESS(ARMV7MSYSTEMDEBUGADDRESS_BASE, SYSTEMETF_OFFSET)
#define SYSTEMETF REGISTER_PTR(cstf_regs, SYSTEMETFSYSTEMBUS_BASE)

/** @} */ // End of SystemETF group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMETF_REGISTERS_H
