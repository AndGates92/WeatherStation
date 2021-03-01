#ifndef SYSTEMJTAGDP_REGISTERS_H
#define SYSTEMJTAGDP_REGISTERS_H
/**
 * @copyright
 * @file cti.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief JTAG Debug port (DP) registers
*/

#include <stdint.h>
#include "registers/debug/common/dp.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemJTAGDP JTAG Debug port (DP) registers
 *  @brief JTAG Debug port (DP) registers
 *  @{
 */

/*!< Debug port identification register */
#define DP_DPIDR_REVISION  (0x6UL)
#define DP_DPIDR_PARTNO    (0xBAUL)
#define DP_DPIDR_DESIGNER  (0x23BUL)

/*!< Target identification register */
#define DP_TREVISION  (0x0UL)
#define DP_TPARTNO    (0x4500UL)
#define DP_TDESIGNER  (0x20UL)

/*!< Debug port SELECT register */
#define DP_SELECT_APSEL_OFFSET      (28U)
#define DP_SELECT_APSEL_MASK        (0xFUL << REGISTER_FIELD_OFFSET(DP, SELECT, APSEL))      /*!< Mask  0xF0000000 */

#define DP_SELECT_APBANKSEL_OFFSET  (4U)
#define DP_SELECT_APBANKSEL_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, SELECT, APBANKSEL))  /*!< Mask  0x000000F0 */

#define DP_SELECT_DPBANKSEL_OFFSET  (0U)
#define DP_SELECT_DPBANKSEL_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, SELECT, DPBANKSEL))  /*!< Mask  0x0000000F */

// Values of access port select register
#define DP_APSEL_CORTEXM7     (0x0UL)  /*!< Value 0x00000000 */
#define DP_APSEL_D3AP         (0x1UL)  /*!< Value 0x00000001 */
#define DP_APSEL_SYSTEMDEBUG  (0x2UL)  /*!< Value 0x00000002 */
#define DP_APSEL_CORTEXM4     (0x3UL)  /*!< Value 0x00000003 */

// Values of access port address bank select register
#define DP_APBANKSEL_BANK0   (0x0UL)  /*!< Value 0x00000000 */
#define DP_APBANKSEL_BANK1   (0x1UL)  /*!< Value 0x00000001 */
#define DP_APBANKSEL_BANK2   (0x2UL)  /*!< Value 0x00000002 */
#define DP_APBANKSEL_BANK3   (0x3UL)  /*!< Value 0x00000003 */
#define DP_APBANKSEL_BANK4   (0x4UL)  /*!< Value 0x00000004 */
#define DP_APBANKSEL_BANK5   (0x5UL)  /*!< Value 0x00000005 */
#define DP_APBANKSEL_BANK6   (0x6UL)  /*!< Value 0x00000006 */
#define DP_APBANKSEL_BANK7   (0x7UL)  /*!< Value 0x00000007 */
#define DP_APBANKSEL_BANK8   (0x8UL)  /*!< Value 0x00000008 */
#define DP_APBANKSEL_BANK9   (0x9UL)  /*!< Value 0x00000009 */
#define DP_APBANKSEL_BANK10  (0xAUL)  /*!< Value 0x0000000A */
#define DP_APBANKSEL_BANK11  (0xBUL)  /*!< Value 0x0000000B */
#define DP_APBANKSEL_BANK12  (0xCUL)  /*!< Value 0x0000000C */
#define DP_APBANKSEL_BANK13  (0xDUL)  /*!< Value 0x0000000D */
#define DP_APBANKSEL_BANK14  (0xEUL)  /*!< Value 0x0000000E */
#define DP_APBANKSEL_BANK15  (0xFUL)  /*!< Value 0x0000000F */

/** @} */ // End of SystemJTAGDP group

/** @} */ // End of RegisterGroup group

#endif // SYSTEMJTAGDP_REGISTERS_H
