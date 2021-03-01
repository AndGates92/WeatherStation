#ifndef SYSTEMMEMAP_REGISTERS_H
#define SYSTEMMEMAP_REGISTERS_H
/**
 * @copyright
 * @file cti.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Memory access port (AP) registers
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemMEMAP Memory access port (AP) registers
 *  @brief Memory access port (AP) registers
 *  @{
 */

/*!< Lower base address register */
#define MEMAP_BASEADDR_D3        (0x00000UL)  /*!< AP1 */
#define MEMAP_BASEADDR_SYSTEM    (0xE00E0UL)  /*!< AP2 */
#define MEMAP_BASEADDR_CORTEXM7  (0xE00FEUL)  /*!< AP0 */
#define MEMAP_BASEADDR_CORTEXM4  (0xE00FFUL)  /*!< AP3 */

/*!< Target identification register */
#define MEMAP_REVISION_R0P3  (0x2UL)
#define MEMAP_REVISION_R1P0  (0x5UL)
#define MEMAP_REVISION_R0P9  (0x8UL)

#define MEMAP_JEDECBANK  (0x4UL)
#define MEMAP_JEDECCODE  (0x3BUL)

/** @} */ // End of SystemMEMAP group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMMEMAP_REGISTERS_H
