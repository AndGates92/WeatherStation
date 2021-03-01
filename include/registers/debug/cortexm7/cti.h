#ifndef CORTEXM7CTI_REGISTERS_H
#define CORTEXM7CTI_REGISTERS_H
/**
 * @copyright
 * @file cti.h
 * @author Andrea Gianarda
 * @date 16th of June 2021
 * @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) of Cortex M7
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
 *  @defgroup CortexM7CTI Cross trigger interface (CTI) registers in private peripheral bus (PPB) of Cortex M7
 *  @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) of Cortex M7 macros and structures
 *  @{
 */

#define CORTEXM7CTI_OFFSET 0x42000UL
#define CORTEXM7CTI_BASE OFFSET_ADDRESS(PPB_BASE, CORTEXM7CTI_OFFSET)
#define CORTEXM7CTI REGISTER_PTR(cti_regs, CORTEXM7CTI_BASE)

/** @} */ // End of CortexM7CTI group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM7CTI_REGISTERS_H
