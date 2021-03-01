#ifndef CORTEXM7ETM_REGISTERS_H
#define CORTEXM7ETM_REGISTERS_H
/**
 * @copyright
 * @file etm.h
 * @author Andrea Gianarda
 * @date 10th of May 2021
 * @brief Embedded trace macrocell (ETM) registers in private peripheral bus (PPB) of Cortex M7
*/

#include <stdint.h>
#include "registers/debug/common/etm.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CortexM7ETM Embedded trace macrocell (ETM) registers in private peripheral bus (PPB) of Cortex M7
 *  @brief Embedded trace macrocell (ETM) registers in private peripheral bus (PPB) of Cortex M7 macros and structures
 *  @{
 */

#define CORTEXM7ETM_OFFSET 0x41000UL
#define CORTEXM7ETM_BASE OFFSET_ADDRESS(PPB_BASE, CORTEXM7ETM_OFFSET)
#define CORTEXM7ETM REGISTER_PTR(etm_regs, CORTEXM7ETM_BASE)

/** @} */ // End of CortexM7ETM group

/** @} */ // End of RegisterGroup group

#endif // CORTEXM7ETM_REGISTERS_H
