#ifndef CORESIGHT_H
#define CORESIGHT_H
/**
 * @copyright
 * @file coresight.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief CoreSight global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CoreSight CoreSight macros
 *  @brief CoreSight macros
 *  @{
 */

// Values of register bit enabling embedding of triggers in formatted trace
#define CLAIMCLR_NONE       (0x0UL)  /*!< Value 0x00000000 */

// Values of register bit enabling embedding of triggers in formatted trace
#define CLAIMSET_NONE       (0x0UL)  /*!< Value 0x00000000 */
#define CLAIMSET_READVALUE  (0xFUL)  /*!< Value 0x0000000F */

// Values of claim tag bit
#define CLAIM_BIT3  (3U)
#define CLAIM_BIT2  (2U)
#define CLAIM_BIT1  (1U)
#define CLAIM_BIT0  (0U)

// Values of integration mode enable bit
#define INTEGRATIONMODE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define INTEGRATIONMODE_ENABLE   (0x1UL)  /*!< Value 0x00000001 - enable debug agent to perform topology detection and system-on-chip (SoC) test software to perform integration testing */

// Values of integration mode enable bit
#define WRITEACCESS_ENABLE  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

// Values of integration mode enable bit
#define KEY_LOCKCLEAR  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

// Values of lock key size select bit
#define LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */
#define LOCKKEYSIZE_8BIT   (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock status bit
#define SWLOCK_RW  (0x0UL)  /*!< Value 0x00000000 */
#define SWLOCK_RO  (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock status bit
#define SWLOCK_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define SWLOCK_SET    (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of authentification signal status register
#define AUTHSIGNAL_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define AUTHSIGNAL_DISABLED        (0x2UL)  /*!< Value 0x00000002 */
#define AUTHSIGNAL_ENABLED         (0x3UL)  /*!< Value 0x00000003 */

// Values of the register bit stating the presence of the system memory on the bus
#define SYSMEM_NOTPRESENT  (0x0UL)  /*!< Value 0x00000000 */
#define SYSMEM_PRESENT     (0x1UL)  /*!< Value 0x00000001 */

// Values of square root of the number of 4K blocks register
#define 4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define 4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define 4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define 4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define 4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define 4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define 4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define 4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define 4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define 4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define 4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define 4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define 4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define 4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define 4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define 4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

/** @} */ // End of CoreSight group

/** @} */ // End of RegisterGroup group

#endif // CORESIGHT_H
