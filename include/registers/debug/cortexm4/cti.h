#ifndef CORTEXM4CTI_REGISTERS_H
#define CORTEXM4CTI_REGISTERS_H
/**
 * @copyright
 * @file cti.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) of Cortex M4
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
 *  @defgroup CortexM4CTI Cross trigger interface (CTI) registers in private peripheral bus (PPB) of Cortex M4
 *  @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) of Cortex M4 macros and structures
 *  @{
 */

#define CORTEXM4CTI_OFFSET 0x42000UL
#define CORTEXM4CTI_BASE OFFSET_ADDRESS(PPB_BASE, CORTEXM4CTI_OFFSET)
#define CORTEXM4CTI REGISTER_PTR(cti_regs, CORTEXM4CTI_BASE)

/** @} */ // End of CortexM4CTI group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM4CTI_REGISTERS_H
