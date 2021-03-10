#ifndef SYSCFG_REGISTERS_H
#define SYSCFG_REGISTERS_H
/**
 * @copyright
 * @file syscfg.h
 * @author Andrea Gianarda
 * @date 5th of March 2021
 * @brief System configuration registers
*/

#include <stdint.h>

#include "global/peripherals.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SystemConfiguration System configuration
 *  @brief System configuration macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;           /*!< Reserved                                       (Offset 0x0)            */
	RW uint32_t PERIPHERALMODECFG;   /*!< Peripheral mode configuration register         (Offset 0x4)            */
	RW uint32_t EXTERNALINTCFG1;     /*!< External interrupt configuration 1 register    (Offset 0x8)            */
	RW uint32_t EXTERNALINTCFG2;     /*!< External interrupt configuration 2 register    (Offset 0xC)            */
	RW uint32_t EXTERNALINTCFG3;     /*!< External interrupt configuration 3 register    (Offset 0x10)           */
	RW uint32_t EXTERNALINTCFG4;     /*!< External interrupt configuration 4 register    (Offset 0x14)           */
	RW uint32_t TIMERCONNCFG;        /*!< Timer connection configuration register        (Offset 0x18)           */
	RW uint32_t COMPCELLCTRLSTATUS;  /*!< Compensation cell control and status register  (Offset 0x20)           */
	RO uint32_t COMPCELLVALUE;       /*!< Compensation cell value register               (Offset 0x24)           */
	RW uint32_t COMPCELLCODE;        /*!< Compensation cell code register                (Offset 0x28)           */
	RW uint32_t PWRCTRL;             /*!< Power control register                         (Offset 0x2C)           */
	   uint32_t reserved1[61U];      /*!< Reserved                                       (Offset 0x30 to 0x120)  */
	RO uint32_t PKG;                 /*!< Package register                               (Offset 0x124)          */
	   uint32_t reserved2[118U];     /*!< Reserved                                       (Offset 0x128 to 0x2FC) */
	RO uint32_t USER0;               /*!< User 0  register                               (Offset 0x300)          */
	RW uint32_t USER1;               /*!< User 1  register                               (Offset 0x304)          */
	RW uint32_t USER2;               /*!< User 2  register                               (Offset 0x308)          */
	RW uint32_t USER3;               /*!< User 3  register                               (Offset 0x30C)          */
	RW uint32_t USER4;               /*!< User 4  register                               (Offset 0x310)          */
	RO uint32_t USER5;               /*!< User 5  register                               (Offset 0x314)          */
	RO uint32_t USER6;               /*!< User 6  register                               (Offset 0x318)          */
	RO uint32_t USER7;               /*!< User 7  register                               (Offset 0x31C)          */
	RO uint32_t USER8;               /*!< User 8  register                               (Offset 0x320)          */
	RO uint32_t USER9;               /*!< User 9  register                               (Offset 0x324)          */
	RO uint32_t USER10;              /*!< User 10 register                               (Offset 0x328)          */
	RO uint32_t USER11;              /*!< User 11 register                               (Offset 0x32C)          */
	RO uint32_t USER12;              /*!< User 12 register                               (Offset 0x330)          */
	RW uint32_t USER13;              /*!< User 13 register                               (Offset 0x334)          */
	RW uint32_t USER14;              /*!< User 14 register                               (Offset 0x338)          */
	RW uint32_t USER15;              /*!< User 15 register                               (Offset 0x33C)          */
	RO uint32_t USER16;              /*!< User 16 register                               (Offset 0x340)          */
	RO uint32_t USER17;              /*!< User 17 register                               (Offset 0x344)          */
} syscfg_bank_regs;

/*!< System configuration registers */
/*!< Peripheral mode configuration register */
#define SYSCFG_PERIPHERALMODECFG_PC3SWITCH_OFFSET                (27U)
#define SYSCFG_PERIPHERALMODECFG_PC3SWITCH_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PC3SWITCH))         /*!< Mask  0x08000000 */
#define SYSCFG_PERIPHERALMODECFG_PC3SWITCH_CLOSE                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PC3SWITCH_OPEN                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PC2SWITCH_OFFSET                (26U)
#define SYSCFG_PERIPHERALMODECFG_PC2SWITCH_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PC2SWITCH))         /*!< Mask  0x04000000 */
#define SYSCFG_PERIPHERALMODECFG_PC2SWITCH_CLOSE                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PC2SWITCH_OPEN                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PC1SWITCH_OFFSET                (25U)
#define SYSCFG_PERIPHERALMODECFG_PC1SWITCH_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PC1SWITCH))         /*!< Mask  0x02000000 */
#define SYSCFG_PERIPHERALMODECFG_PC1SWITCH_CLOSE                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PC1SWITCH_OPEN                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PC0SWITCH_OFFSET                (24U)
#define SYSCFG_PERIPHERALMODECFG_PC0SWITCH_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PC0SWITCH))         /*!< Mask  0x01000000 */
#define SYSCFG_PERIPHERALMODECFG_PC0SWITCH_CLOSE                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PC0SWITCH_OPEN                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_ETHERNETPHY_OFFSET              (210U)
#define SYSCFG_PERIPHERALMODECFG_ETHERNETPHY_MASK                (0x7UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, ETHERNETPHY))       /*!< Mask  0x00600000 */
#define SYSCFG_PERIPHERALMODECFG_ETHERNETPHY_MII                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_ETHERNETPHY_RMII                (0x4UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_ANALOGPWESUPPLY_OFFSET          (9U)
#define SYSCFG_PERIPHERALMODECFG_ANALOGPWESUPPLY_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, ANALOGPWESUPPLY))   /*!< Mask  0x00000200 */
#define SYSCFG_PERIPHERALMODECFG_ANALOGPWESUPPLY_VDDIFNOBOOSTER  (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_ANALOGPWESUPPLY_ALWAYSBOOTSER   (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_BOOSTER_OFFSET                  (8U)
#define SYSCFG_PERIPHERALMODECFG_BOOSTER_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, BOOSTER))           /*!< Mask  0x00000100 */
#define SYSCFG_PERIPHERALMODECFG_BOOSTER_DISABLE                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_BOOSTER_ENABLE                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PB9FASTMODEPLUS_OFFSET          (7U)
#define SYSCFG_PERIPHERALMODECFG_PB9FASTMODEPLUS_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PB9FASTMODEPLUS))   /*!< Mask  0x00000080 */
#define SYSCFG_PERIPHERALMODECFG_PB9FASTMODEPLUS_DISABLE         (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PB9FASTMODEPLUS_ENABLE          (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PB8FASTMODEPLUS_OFFSET          (6U)
#define SYSCFG_PERIPHERALMODECFG_PB8FASTMODEPLUS_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PB8FASTMODEPLUS))   /*!< Mask  0x00000040 */
#define SYSCFG_PERIPHERALMODECFG_PB8FASTMODEPLUS_DISABLE         (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PB8FASTMODEPLUS_ENABLE          (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PB7FASTMODEPLUS_OFFSET          (5U)
#define SYSCFG_PERIPHERALMODECFG_PB7FASTMODEPLUS_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PB7FASTMODEPLUS))   /*!< Mask  0x00000020 */
#define SYSCFG_PERIPHERALMODECFG_PB7FASTMODEPLUS_DISABLE         (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PB7FASTMODEPLUS_ENABLE          (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_PB6FASTMODEPLUS_OFFSET          (4U)
#define SYSCFG_PERIPHERALMODECFG_PB6FASTMODEPLUS_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, PB6FASTMODEPLUS))   /*!< Mask  0x00000010 */
#define SYSCFG_PERIPHERALMODECFG_PB6FASTMODEPLUS_DISABLE         (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_PB6FASTMODEPLUS_ENABLE          (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_I2C4FASTMODEPLUS_OFFSET         (3U)
#define SYSCFG_PERIPHERALMODECFG_I2C4FASTMODEPLUS_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, I2C4FASTMODEPLUS))  /*!< Mask  0x00000008 */
#define SYSCFG_PERIPHERALMODECFG_I2C4FASTMODEPLUS_DISABLE        (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_I2C4FASTMODEPLUS_ENABLE         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_I2C3FASTMODEPLUS_OFFSET         (2U)
#define SYSCFG_PERIPHERALMODECFG_I2C3FASTMODEPLUS_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, I2C3FASTMODEPLUS))  /*!< Mask  0x00000004 */
#define SYSCFG_PERIPHERALMODECFG_I2C3FASTMODEPLUS_DISABLE        (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_I2C3FASTMODEPLUS_ENABLE         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_I2C2FASTMODEPLUS_OFFSET         (1U)
#define SYSCFG_PERIPHERALMODECFG_I2C2FASTMODEPLUS_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, I2C2FASTMODEPLUS))  /*!< Mask  0x00000002 */
#define SYSCFG_PERIPHERALMODECFG_I2C2FASTMODEPLUS_DISABLE        (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_I2C2FASTMODEPLUS_ENABLE         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_PERIPHERALMODECFG_I2C1FASTMODEPLUS_OFFSET         (0U)
#define SYSCFG_PERIPHERALMODECFG_I2C1FASTMODEPLUS_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PERIPHERALMODECFG, I2C1FASTMODEPLUS))  /*!< Mask  0x00000001 */
#define SYSCFG_PERIPHERALMODECFG_I2C1FASTMODEPLUS_DISABLE        (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_PERIPHERALMODECFG_I2C1FASTMODEPLUS_ENABLE         (0x1UL)                                                                        /*!< Value 0x00000001 */

/*!< External interrupt configuration 1 register */
#define SYSCFG_EXTERNALINTCFG3_SRC_OFFSET  (12U)
#define SYSCFG_EXTERNALINTCFG3_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG3, SRC))  /*!< Mask  0x0000F000 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PA3     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PB3     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PC3     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PD3     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PE3     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PF3     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PG3     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PH3     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PI3     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PJ3     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG3_SRC_PK3     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG2_SRC_OFFSET  (8U)
#define SYSCFG_EXTERNALINTCFG2_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG2, SRC))  /*!< Mask  0x00000F00 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PA2     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PB2     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PC2     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PD2     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PE2     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PF2     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PG2     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PH2     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PI2     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PJ2     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG2_SRC_PK2     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG1_SRC_OFFSET  (4U)
#define SYSCFG_EXTERNALINTCFG1_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG1, SRC))  /*!< Mask  0x000000F0 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PA1     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PB1     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PC1     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PD1     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PE1     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PF1     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PG1     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PH1     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PI1     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PJ1     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG1_SRC_PK1     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG0_SRC_OFFSET  (0U)
#define SYSCFG_EXTERNALINTCFG0_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG0, SRC))  /*!< Mask  0x0000000F */
#define SYSCFG_EXTERNALINTCFG0_SRC_PA0     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PB0     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PC0     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PD0     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PE0     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PF0     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PG0     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PH0     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PI0     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PJ0     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG0_SRC_PK0     (0xAUL)                                                         /*!< Value 0x0000000A */

/*!< External interrupt configuration 2 register */
#define SYSCFG_EXTERNALINTCFG7_SRC_OFFSET  (12U)
#define SYSCFG_EXTERNALINTCFG7_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG7, SRC))  /*!< Mask  0x0000F000 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PA7     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PB7     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PC7     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PD7     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PE7     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PF7     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PG7     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PH7     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PI7     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PJ7     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG7_SRC_PK7     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG6_SRC_OFFSET  (8U)
#define SYSCFG_EXTERNALINTCFG6_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG6, SRC))  /*!< Mask  0x00000F00 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PA6     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PB6     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PC6     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PD6     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PE6     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PF6     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PG6     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PH6     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PI6     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PJ6     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG6_SRC_PK6     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG5_SRC_OFFSET  (4U)
#define SYSCFG_EXTERNALINTCFG5_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG5, SRC))  /*!< Mask  0x000000F0 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PA5     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PB5     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PC5     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PD5     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PE5     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PF5     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PG5     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PH5     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PI5     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PJ5     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG5_SRC_PK5     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG4_SRC_OFFSET  (0U)
#define SYSCFG_EXTERNALINTCFG4_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG4, SRC))  /*!< Mask  0x0000000F */
#define SYSCFG_EXTERNALINTCFG4_SRC_PA4     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PB4     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PC4     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PD4     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PE4     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PF4     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PG4     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PH4     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PI4     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PJ4     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG4_SRC_PK4     (0xAUL)                                                         /*!< Value 0x0000000A */

/*!< External interrupt configuration 3 register */
#define SYSCFG_EXTERNALINTCFG11_SRC_OFFSET  (12U)
#define SYSCFG_EXTERNALINTCFG11_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG11, SRC))  /*!< Mask  0x0000F000 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PA11     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PB11     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PC11     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PD11     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PE11     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PF11     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PG11     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PH11     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PI11     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PJ11     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG11_SRC_PK11     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG10_SRC_OFFSET  (8U)
#define SYSCFG_EXTERNALINTCFG10_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG10, SRC))  /*!< Mask  0x00000F00 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PA10     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PB10     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PC10     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PD10     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PE10     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PF10     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PG10     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PH10     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PI10     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PJ10     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG10_SRC_PK10     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG9_SRC_OFFSET  (4U)
#define SYSCFG_EXTERNALINTCFG9_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG9, SRC))    /*!< Mask  0x000000F0 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PA9     (0x0UL)                                                           /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PB9     (0x1UL)                                                           /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PC9     (0x2UL)                                                           /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PD9     (0x3UL)                                                           /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PE9     (0x4UL)                                                           /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PF9     (0x5UL)                                                           /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PG9     (0x6UL)                                                           /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PH9     (0x7UL)                                                           /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PI9     (0x8UL)                                                           /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PJ9     (0x9UL)                                                           /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG9_SRC_PK9     (0xAUL)                                                           /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG8_SRC_OFFSET  (0U)
#define SYSCFG_EXTERNALINTCFG8_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG8, SRC))    /*!< Mask  0x0000000F */
#define SYSCFG_EXTERNALINTCFG8_SRC_PA8     (0x0UL)                                                           /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PB8     (0x1UL)                                                           /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PC8     (0x2UL)                                                           /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PD8     (0x3UL)                                                           /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PE8     (0x4UL)                                                           /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PF8     (0x5UL)                                                           /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PG8     (0x6UL)                                                           /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PH8     (0x7UL)                                                           /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PI8     (0x8UL)                                                           /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PJ8     (0x9UL)                                                           /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG8_SRC_PK8     (0xAUL)                                                           /*!< Value 0x0000000A */

/*!< External interrupt configuration 4 register */
#define SYSCFG_EXTERNALINTCFG15_SRC_OFFSET  (12U)
#define SYSCFG_EXTERNALINTCFG15_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG15, SRC))  /*!< Mask  0x0000F000 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PA15     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PB15     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PC15     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PD15     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PE15     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PF15     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PG15     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PH15     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PI15     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PJ15     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG15_SRC_PK15     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG14_SRC_OFFSET  (8U)
#define SYSCFG_EXTERNALINTCFG14_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG14, SRC))  /*!< Mask  0x00000F00 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PA14     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PB14     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PC14     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PD14     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PE14     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PF14     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PG14     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PH14     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PI14     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PJ14     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG14_SRC_PK14     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG13_SRC_OFFSET  (4U)
#define SYSCFG_EXTERNALINTCFG13_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG13, SRC))  /*!< Mask  0x000000F0 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PA13     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PB13     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PC13     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PD13     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PE13     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PF13     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PG13     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PH13     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PI13     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PJ13     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG13_SRC_PK13     (0xAUL)                                                         /*!< Value 0x0000000A */

#define SYSCFG_EXTERNALINTCFG12_SRC_OFFSET  (0U)
#define SYSCFG_EXTERNALINTCFG12_SRC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTERNALINTCFG12, SRC))  /*!< Mask  0x0000000F */
#define SYSCFG_EXTERNALINTCFG12_SRC_PA12     (0x0UL)                                                         /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PB12     (0x1UL)                                                         /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PC12     (0x2UL)                                                         /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PD12     (0x3UL)                                                         /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PE12     (0x4UL)                                                         /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PF12     (0x5UL)                                                         /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PG12     (0x6UL)                                                         /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PH12     (0x7UL)                                                         /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PI12     (0x8UL)                                                         /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PJ12     (0x9UL)                                                         /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTCFG12_SRC_PK12     (0xAUL)                                                         /*!< Value 0x0000000A */

/*!< Timer connection configuration register */
#define SYSCFG_TIMERCONNCFG_AXISRAMDBLECCLOCK_OFFSET          (15U)
#define SYSCFG_TIMERCONNCFG_AXISRAMDBLECCLOCK_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, AXISRAMDBLECCLOCK))      /*!< Mask  0x00008000 */
#define SYSCFG_TIMERCONNCFG_AXISRAMDBLECCLOCK_DISCONNECT      (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_AXISRAMDBLECCLOCK_CONNECT         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_ITCMDBLECCLOCK_OFFSET             (14U)
#define SYSCFG_TIMERCONNCFG_ITCMDBLECCLOCK_MASK               (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, ITCMDBLECCLOCK))         /*!< Mask  0x00004000 */
#define SYSCFG_TIMERCONNCFG_ITCMDBLECCLOCK_DISCONNECT         (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_ITCMDBLECCLOCK_CONNECT            (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_DTCMDBLECCLOCK_OFFSET             (13U)
#define SYSCFG_TIMERCONNCFG_DTCMDBLECCLOCK_MASK               (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, DTCMDBLECCLOCK))         /*!< Mask  0x00002000 */
#define SYSCFG_TIMERCONNCFG_DTCMDBLECCLOCK_DISCONNECT         (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_DTCMDBLECCLOCK_CONNECT            (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_D2SRAM1DBLECCLOCK_OFFSET          (12U)
#define SYSCFG_TIMERCONNCFG_D2SRAM1DBLECCLOCK_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, D2SRAM1DBLECCLOCK))      /*!< Mask  0x00001000 */
#define SYSCFG_TIMERCONNCFG_D2SRAM1DBLECCLOCK_DISCONNECT      (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_D2SRAM1DBLECCLOCK_CONNECT         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_D2SRAM2DBLECCLOCK_OFFSET          (11U)
#define SYSCFG_TIMERCONNCFG_D2SRAM2DBLECCLOCK_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, D2SRAM2DBLECCLOCK))      /*!< Mask  0x00000800 */
#define SYSCFG_TIMERCONNCFG_D2SRAM2DBLECCLOCK_DISCONNECT      (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_D2SRAM2DBLECCLOCK_CONNECT         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_D2SRAM3DBLECCLOCK_OFFSET          (10U)
#define SYSCFG_TIMERCONNCFG_D2SRAM3DBLECCLOCK_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, D2SRAM3DBLECCLOCK))      /*!< Mask  0x00000400 */
#define SYSCFG_TIMERCONNCFG_D2SRAM3DBLECCLOCK_DISCONNECT      (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_D2SRAM3DBLECCLOCK_CONNECT         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_D3SRAM4DBLECCLOCK_OFFSET          (9U)
#define SYSCFG_TIMERCONNCFG_D3SRAM4DBLECCLOCK_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, D3SRAM4DBLECCLOCK))      /*!< Mask  0x00000200 */
#define SYSCFG_TIMERCONNCFG_D3SRAM4DBLECCLOCK_DISCONNECT      (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_D3SRAM4DBLECCLOCK_CONNECT         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_BCKSRAMDBLECCLOCK_OFFSET          (7U)
#define SYSCFG_TIMERCONNCFG_BCKSRAMDBLECCLOCK_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, BCKSRAMDBLECCLOCK)       /*!< Mask  0x00000080 */
#define SYSCFG_TIMERCONNCFG_BCKSRAMDBLECCLOCK_DISCONNECT      (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_BCKSRAMDBLECCLOCK_CONNECT         (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_M7HARDFAULTDBLECCLOCK_OFFSET      (6U)
#define SYSCFG_TIMERCONNCFG_M7HARDFAULTDBLECCLOCK_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, M7HARDFAULTDBLECCLOCK))  /*!< Mask  0x00000040 */
#define SYSCFG_TIMERCONNCFG_M7HARDFAULTDBLECCLOCK_DISCONNECT  (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_M7HARDFAULTDBLECCLOCK_CONNECT     (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_FLASHDBLECCLOCK_OFFSET            (3U)
#define SYSCFG_TIMERCONNCFG_FLASHDBLECCLOCK_MASK              (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, FLASHDBLECCLOCK))        /*!< Mask  0x00000008 */
#define SYSCFG_TIMERCONNCFG_FLASHDBLECCLOCK_DISCONNECT        (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_FLASHDBLECCLOCK_CONNECT           (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_PVFDBLECCLOCK_OFFSET              (2U)
#define SYSCFG_TIMERCONNCFG_PVFDBLECCLOCK_MASK                (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, PVFDBLECCLOCK))          /*!< Mask  0x00000004 */
#define SYSCFG_TIMERCONNCFG_PVFDBLECCLOCK_DISCONNECT          (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_PVFDBLECCLOCK_CONNECT             (0x1UL)                                                                        /*!< Value 0x00000001 */

#define SYSCFG_TIMERCONNCFG_M4HARDFAULTDBLECCLOCK_OFFSET      (0U)
#define SYSCFG_TIMERCONNCFG_M4HARDFAULTDBLECCLOCK_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, TIMERCONNCFG, M4HARDFAULTDBLECCLOCK))  /*!< Mask  0x00000001 */
#define SYSCFG_TIMERCONNCFG_M4HARDFAULTDBLECCLOCK_DISCONNECT  (0x0UL)                                                                        /*!< Value 0x00000000 */
#define SYSCFG_TIMERCONNCFG_M4HARDFAULTDBLECCLOCK_CONNECT     (0x1UL)                                                                        /*!< Value 0x00000001 */

/*!< Compensation cell control and status register */
#define SYSCFG_COMPCELLCTRLSTATUS_IOSPEEDLOWVLTOPT_OFFSET   (16U)
#define SYSCFG_COMPCELLCTRLSTATUS_IOSPEEDLOWVLTOPT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCTRLSTATUS, IOSPEEDLOWVLTOPT))  /*!< Mask  0x00010000 */
#define SYSCFG_COMPCELLCTRLSTATUS_IOSPEEDLOWVLTOPT_DISABLE  (0x0UL)                                                                         /*!< Value 0x00000000 */
#define SYSCFG_COMPCELLCTRLSTATUS_IOSPEEDLOWVLTOPT_ENABLE   (0x1UL)                                                                         /*!< Value 0x00000001 */

#define SYSCFG_COMPCELLCTRLSTATUS_COMPCELLRDY_OFFSET        (8U)
#define SYSCFG_COMPCELLCTRLSTATUS_COMPCELLRDY_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCTRLSTATUS, COMPCELLRDY))       /*!< Mask  0x00000100 */
#define SYSCFG_COMPCELLCTRLSTATUS_COMPCELLRDY_NOTREADY      (0x0UL)                                                                         /*!< Value 0x00000000 */
#define SYSCFG_COMPCELLCTRLSTATUS_COMPCELLRDY_READY         (0x1UL)                                                                         /*!< Value 0x00000001 */

#define SYSCFG_COMPCELLCTRLSTATUS_CODESEL_OFFSET            (1U)
#define SYSCFG_COMPCELLCTRLSTATUS_CODESEL_MASK              (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCTRLSTATUS, CODESEL))           /*!< Mask  0x00000002 */
#define SYSCFG_COMPCELLCTRLSTATUS_CODESEL_CELLVALUE         (0x0UL)                                                                         /*!< Value 0x00000000 */
#define SYSCFG_COMPCELLCTRLSTATUS_CODESEL_CELLCODE          (0x1UL)                                                                         /*!< Value 0x00000001 */

#define SYSCFG_COMPCELLCTRLSTATUS_IOCOMPCELL_OFFSET         (0U)
#define SYSCFG_COMPCELLCTRLSTATUS_IOCOMPCELL_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCTRLSTATUS, IOCOMPCELL))        /*!< Mask  0x00000001 */
#define SYSCFG_COMPCELLCTRLSTATUS_IOCOMPCELL_DISABLE        (0x0UL)                                                                         /*!< Value 0x00000000 */
#define SYSCFG_COMPCELLCTRLSTATUS_IOCOMPCELL_ENABLE         (0x1UL)                                                                         /*!< Value 0x00000001 */

/*!< Compensation cell value register */
#define SYSCFG_COMPCELLVALUE_PMOS_OFFSET  (4U)
#define SYSCFG_COMPCELLVALUE_PMOS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, PMOS))  /*!< Mask  0x000000F0 */
#define SYSCFG_COMPCELLVALUE_PMOS_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, PMOS))  /*!< Value 0x00000001 */
#define SYSCFG_COMPCELLVALUE_PMOS_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, PMOS))  /*!< Value 0x00000002 */
#define SYSCFG_COMPCELLVALUE_PMOS_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, PMOS))  /*!< Value 0x00000004 */
#define SYSCFG_COMPCELLVALUE_PMOS_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, PMOS))  /*!< Value 0x00000008 */

#define SYSCFG_COMPCELLVALUE_NMOS_OFFSET  (0U)
#define SYSCFG_COMPCELLVALUE_NMOS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, NMOS))  /*!< Mask  0x0000000F */
#define SYSCFG_COMPCELLVALUE_NMOS_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, NMOS))  /*!< Value 0x00000001 */
#define SYSCFG_COMPCELLVALUE_NMOS_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, NMOS))  /*!< Value 0x00000002 */
#define SYSCFG_COMPCELLVALUE_NMOS_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, NMOS))  /*!< Value 0x00000004 */
#define SYSCFG_COMPCELLVALUE_NMOS_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLVALUE, NMOS))  /*!< Value 0x00000008 */

/*!< Compensation cell code register */
#define SYSCFG_COMPCELLCODE_PMOS_OFFSET  (4U)
#define SYSCFG_COMPCELLCODE_PMOS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, PMOS))  /*!< Mask  0x000000F0 */
#define SYSCFG_COMPCELLCODE_PMOS_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, PMOS))  /*!< Value 0x00000001 */
#define SYSCFG_COMPCELLCODE_PMOS_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, PMOS))  /*!< Value 0x00000002 */
#define SYSCFG_COMPCELLCODE_PMOS_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, PMOS))  /*!< Value 0x00000004 */
#define SYSCFG_COMPCELLCODE_PMOS_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, PMOS))  /*!< Value 0x00000008 */

#define SYSCFG_COMPCELLCODE_NMOS_OFFSET  (0U)
#define SYSCFG_COMPCELLCODE_NMOS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, NMOS))  /*!< Mask  0x0000000F */
#define SYSCFG_COMPCELLCODE_NMOS_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, NMOS))  /*!< Value 0x00000001 */
#define SYSCFG_COMPCELLCODE_NMOS_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, NMOS))  /*!< Value 0x00000002 */
#define SYSCFG_COMPCELLCODE_NMOS_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, NMOS))  /*!< Value 0x00000004 */
#define SYSCFG_COMPCELLCODE_NMOS_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, COMPCELLCODE, NMOS))  /*!< Value 0x00000008 */

/*!< Power control register */
#define SYSCFG_PWRCTRL_OVDR_OFFSET   (0U)
#define SYSCFG_PWRCTRL_OVDR_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PWRCTRL, OVDR))  /*!< Mask  0x00000001 */
#define SYSCFG_PWRCTRL_OVDR_DISABLE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define SYSCFG_PWRCTRL_OVDR_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

/*!< Package register */
#define SYSCFG_PKG_DEVICE_OFFSET             (0U)
#define SYSCFG_PKG_DEVICE_MASK               (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, PKG, DEVICE))  /*!< Mask  0x0000000F */
#define SYSCFG_PKG_DEVICE_UFBGA169STM32H7x7  (0x2UL)                                                /*!< Value 0x00000002 */
#define SYSCFG_PKG_DEVICE_LQFP176STM32H7x7   (0x2UL)                                                /*!< Value 0x00000002 */
#define SYSCFG_PKG_DEVICE_LQFP144STM32H7x5   (0x3UL)                                                /*!< Value 0x00000003 */
#define SYSCFG_PKG_DEVICE_LQFP176STM32H7x5   (0x6UL)                                                /*!< Value 0x00000006 */
#define SYSCFG_PKG_DEVICE_UFBGA176STM32H7x5  (0x7UL)                                                /*!< Value 0x00000007 */
#define SYSCFG_PKG_DEVICE_LQFP208STM32H7x7   (0x9UL)                                                /*!< Value 0x00000009 */
#define SYSCFG_PKG_DEVICE_LQFP208STM32H7x5   (0xAUL)                                                /*!< Value 0x0000000A */
#define SYSCFG_PKG_DEVICE_OTHERS             (0xFUL)                                                /*!< Value 0x0000000F */

/*!< User 0 register */
#define SYSCFG_USER0_READOUTPROT_OFFSET     (16U)
#define SYSCFG_USER0_READOUTPROT_MASK       (0xFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER0, READOUTPROT))  /*!< Mask  0x00FF0000 */
#define SYSCFG_USER0_READOUTPROT_LEVEL1     (0x88UL)                                                       /*!< Value 0x00000088 */
#define SYSCFG_USER0_READOUTPROT_LEVEL0     (0xAAUL)                                                       /*!< Value 0x000000AA */
#define SYSCFG_USER0_READOUTPROT_LEVEL2     (0xCCUL)                                                       /*!< Value 0x000000CC */

#define SYSCFG_USER0_BANKSWAP_OFFSET        (0U)
#define SYSCFG_USER0_BANKSWAP_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER0, BANKSWAP))      /*!< Mask  0x00000001 */
#define SYSCFG_USER0_BANKSWAP_INVERTEDADDR  (0x0UL)                                                        /*!< Value 0x00000000 */
#define SYSCFG_USER0_BANKSWAP_ORIGINALADDR  (0x1UL)                                                        /*!< Value 0x00000001 */

/*!< User 1 register */
#define SYSCFG_USER1_M7BOOT_OFFSET   (16U)
#define SYSCFG_USER1_M7BOOT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER1, M7BOOT))  /*!< Mask  0x00010000 */
#define SYSCFG_USER1_M7BOOT_CLKGATE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define SYSCFG_USER1_M7BOOT_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

#define SYSCFG_USER1_M4BOOT_OFFSET   (0U)
#define SYSCFG_USER1_M4BOOT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER1, M4BOOT))  /*!< Mask  0x00000001 */
#define SYSCFG_USER1_M4BOOT_CLKGATE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define SYSCFG_USER1_M4BOOT_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

/*!< User 2 register */
#define SYSCFG_USER2_M7ADDR0_OFFSET       (16U)
#define SYSCFG_USER2_M7ADDR0_MASK         (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Mask  0xFFFF0000 */
#define SYSCFG_USER2_M7ADDR0_0            (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00010000 */
#define SYSCFG_USER2_M7ADDR0_1            (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00020000 */
#define SYSCFG_USER2_M7ADDR0_2            (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00040000 */
#define SYSCFG_USER2_M7ADDR0_3            (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00080000 */
#define SYSCFG_USER2_M7ADDR0_4            (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00100000 */
#define SYSCFG_USER2_M7ADDR0_5            (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00200000 */
#define SYSCFG_USER2_M7ADDR0_6            (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00400000 */
#define SYSCFG_USER2_M7ADDR0_7            (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x00800000 */
#define SYSCFG_USER2_M7ADDR0_8            (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x01000000 */
#define SYSCFG_USER2_M7ADDR0_9            (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x02000000 */
#define SYSCFG_USER2_M7ADDR0_10           (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x04000000 */
#define SYSCFG_USER2_M7ADDR0_11           (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x08000000 */
#define SYSCFG_USER2_M7ADDR0_12           (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x10000000 */
#define SYSCFG_USER2_M7ADDR0_13           (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x20000000 */
#define SYSCFG_USER2_M7ADDR0_14           (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x40000000 */
#define SYSCFG_USER2_M7ADDR0_15           (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, M7ADDR0))    /*!< Value 0x80000000 */

#define SYSCFG_USER2_RSTBROWLEVEL_OFFSET  (0U)
#define SYSCFG_USER2_RSTBROWLEVEL_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SYSCFG, USER2, RSTBROWLEVEL))  /*!< Mask  0x00000003 */
#define SYSCFG_USER2_RSTBROWLEVEL_VTH0    (0x0UL)                                                        /*!< Value 0x00000000 */
#define SYSCFG_USER2_RSTBROWLEVEL_VTH1    (0x1UL)                                                        /*!< Value 0x00000001 */
#define SYSCFG_USER2_RSTBROWLEVEL_VTH2    (0x2UL)                                                        /*!< Value 0x00000002 */
#define SYSCFG_USER2_RSTBROWLEVEL_VTH3    (0x3UL)                                                        /*!< Value 0x00000003 */

/*!< User 3 register */
#define SYSCFG_USER3_M7ADDR1_OFFSET  (16U)
#define SYSCFG_USER3_M7ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Mask  0xFFFF0000 */
#define SYSCFG_USER3_M7ADDR1_0       (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000001 */
#define SYSCFG_USER3_M7ADDR1_1       (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000002 */
#define SYSCFG_USER3_M7ADDR1_2       (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000004 */
#define SYSCFG_USER3_M7ADDR1_3       (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000008 */
#define SYSCFG_USER3_M7ADDR1_4       (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000010 */
#define SYSCFG_USER3_M7ADDR1_5       (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000020 */
#define SYSCFG_USER3_M7ADDR1_6       (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000040 */
#define SYSCFG_USER3_M7ADDR1_7       (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000080 */
#define SYSCFG_USER3_M7ADDR1_8       (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000100 */
#define SYSCFG_USER3_M7ADDR1_9       (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000200 */
#define SYSCFG_USER3_M7ADDR1_10      (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000400 */
#define SYSCFG_USER3_M7ADDR1_11      (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00000800 */
#define SYSCFG_USER3_M7ADDR1_12      (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00001000 */
#define SYSCFG_USER3_M7ADDR1_13      (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00002000 */
#define SYSCFG_USER3_M7ADDR1_14      (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00004000 */
#define SYSCFG_USER3_M7ADDR1_15      (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M7ADDR1))  /*!< Value 0x00008000 */

#define SYSCFG_USER3_M4ADDR0_OFFSET  (0U)
#define SYSCFG_USER3_M4ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Mask  0x0000FFFF */
#define SYSCFG_USER3_M4ADDR0_0       (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00010000 */
#define SYSCFG_USER3_M4ADDR0_1       (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00020000 */
#define SYSCFG_USER3_M4ADDR0_2       (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00040000 */
#define SYSCFG_USER3_M4ADDR0_3       (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00080000 */
#define SYSCFG_USER3_M4ADDR0_4       (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00100000 */
#define SYSCFG_USER3_M4ADDR0_5       (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00200000 */
#define SYSCFG_USER3_M4ADDR0_6       (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00400000 */
#define SYSCFG_USER3_M4ADDR0_7       (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x00800000 */
#define SYSCFG_USER3_M4ADDR0_8       (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x01000000 */
#define SYSCFG_USER3_M4ADDR0_9       (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x02000000 */
#define SYSCFG_USER3_M4ADDR0_10      (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x04000000 */
#define SYSCFG_USER3_M4ADDR0_11      (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x08000000 */
#define SYSCFG_USER3_M4ADDR0_12      (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x10000000 */
#define SYSCFG_USER3_M4ADDR0_13      (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x20000000 */
#define SYSCFG_USER3_M4ADDR0_14      (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x40000000 */
#define SYSCFG_USER3_M4ADDR0_15      (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER3, M4ADDR0))  /*!< Value 0x80000000 */

/*!< User 4 register */
#define SYSCFG_USER4_MASSERASEBANK1PROTADDR_OFFSET     (16U)
#define SYSCFG_USER4_MASSERASEBANK1PROTADDR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, MASSERASEBANK1PROTADDR))  /*!< Mask  0x00010000 */
#define SYSCFG_USER4_MASSERASEBANK1PROTADDR_ERASED     (0x0UL)                                                                  /*!< Value 0x00000000 */
#define SYSCFG_USER4_MASSERASEBANK1PROTADDR_NOTERASED  (0x1UL)                                                                  /*!< Value 0x00000001 */

#define SYSCFG_USER4_M4ADDR1_OFFSET                    (0U)
#define SYSCFG_USER4_M4ADDR1_MASK                      (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Mask  0x0000FFFF */
#define SYSCFG_USER4_M4ADDR1_0                         (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000001 */
#define SYSCFG_USER4_M4ADDR1_1                         (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000002 */
#define SYSCFG_USER4_M4ADDR1_2                         (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000004 */
#define SYSCFG_USER4_M4ADDR1_3                         (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000008 */
#define SYSCFG_USER4_M4ADDR1_4                         (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000010 */
#define SYSCFG_USER4_M4ADDR1_5                         (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000020 */
#define SYSCFG_USER4_M4ADDR1_6                         (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000040 */
#define SYSCFG_USER4_M4ADDR1_7                         (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000080 */
#define SYSCFG_USER4_M4ADDR1_8                         (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000100 */
#define SYSCFG_USER4_M4ADDR1_9                         (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000200 */
#define SYSCFG_USER4_M4ADDR1_10                        (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000400 */
#define SYSCFG_USER4_M4ADDR1_11                        (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00000800 */
#define SYSCFG_USER4_M4ADDR1_12                        (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00001000 */
#define SYSCFG_USER4_M4ADDR1_13                        (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00002000 */
#define SYSCFG_USER4_M4ADDR1_14                        (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00004000 */
#define SYSCFG_USER4_M4ADDR1_15                        (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, USER4, M4ADDR1))              /*!< Value 0x00008000 */

/*!< User 5 register */
#define SYSCFG_USER5_WRPROTBANK1SEC7_OFFSET           (23U)
#define SYSCFG_USER5_WRPROTBANK1SEC7_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC7))        /*!< Mask  0x00800000 */
#define SYSCFG_USER5_WRPROTBANK1SEC7_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC7_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC6_OFFSET           (22U)
#define SYSCFG_USER5_WRPROTBANK1SEC6_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC6))        /*!< Mask  0x00400000 */
#define SYSCFG_USER5_WRPROTBANK1SEC6_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC6_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC5_OFFSET           (21U)
#define SYSCFG_USER5_WRPROTBANK1SEC5_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC5))        /*!< Mask  0x00200000 */
#define SYSCFG_USER5_WRPROTBANK1SEC5_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC5_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC4_OFFSET           (20U)
#define SYSCFG_USER5_WRPROTBANK1SEC4_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC4))        /*!< Mask  0x00100000 */
#define SYSCFG_USER5_WRPROTBANK1SEC4_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC4_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC3_OFFSET           (19U)
#define SYSCFG_USER5_WRPROTBANK1SEC3_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC3))        /*!< Mask  0x00080000 */
#define SYSCFG_USER5_WRPROTBANK1SEC3_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC3_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC2_OFFSET           (18U)
#define SYSCFG_USER5_WRPROTBANK1SEC2_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC2))        /*!< Mask  0x00040000 */
#define SYSCFG_USER5_WRPROTBANK1SEC2_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC2_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC1_OFFSET           (17U)
#define SYSCFG_USER5_WRPROTBANK1SEC1_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC1))        /*!< Mask  0x00020000 */
#define SYSCFG_USER5_WRPROTBANK1SEC1_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC1_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK1SEC0_OFFSET           (16U)
#define SYSCFG_USER5_WRPROTBANK1SEC0_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK1SEC0))        /*!< Mask  0x00010000 */
#define SYSCFG_USER5_WRPROTBANK1SEC0_ENABLED          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK1SEC0_DISABLED         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_MASSERASEBANK1SECADDR_OFFSET      (0U)
#define SYSCFG_USER5_MASSERASEBANK1SECADDR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, MASSERASEBANK1SECADDR))  /*!< Mask  0x00000001 */
#define SYSCFG_USER5_MASSERASEBANK1SECADDR_ERASED     (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_MASSERASEBANK1SECADDR_NOTERASED  (0x1UL)                                                                 /*!< Value 0x00000001 */

/*!< User 6 register */
#define SYSCFG_USER6_BANK1ENDPROTADDR_OFFSET    (16U)
#define SYSCFG_USER6_BANK1ENDPROTADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Mask  0x0FFF0000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00010000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00020000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00040000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00080000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00100000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00200000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00400000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x00800000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x01000000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x02000000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x04000000 */
#define SYSCFG_USER6_BANK1ENDPROTADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1ENDPROTADDR))    /*!< Value 0x08000000 */

#define SYSCFG_USER6_BANK1STARTPROTADDR_OFFSET  (0U)
#define SYSCFG_USER6_BANK1STARTPROTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Mask  0x00000FFF */
#define SYSCFG_USER6_BANK1STARTPROTADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000001 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000002 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000004 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000008 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000010 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000020 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000040 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000080 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000100 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000200 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000400 */
#define SYSCFG_USER6_BANK1STARTPROTADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER6, BANK1STARTPROTADDR))  /*!< Value 0x00000800 */

/*!< User 7 register */
#define SYSCFG_USER7_BANK1ENDSECADDR_OFFSET    (16U)
#define SYSCFG_USER7_BANK1ENDSECADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Mask  0x0FFF0000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00010000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00020000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00040000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00080000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00100000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00200000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00400000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x00800000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x01000000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x02000000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x04000000 */
#define SYSCFG_USER7_BANK1ENDSECADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1ENDSECADDR))    /*!< Value 0x08000000 */

#define SYSCFG_USER7_BANK1STARTSECADDR_OFFSET  (0U)
#define SYSCFG_USER7_BANK1STARTSECADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Mask  0x00000FFF */
#define SYSCFG_USER7_BANK1STARTSECADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000001 */
#define SYSCFG_USER7_BANK1STARTSECADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000002 */
#define SYSCFG_USER7_BANK1STARTSECADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000004 */
#define SYSCFG_USER7_BANK1STARTSECADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000008 */
#define SYSCFG_USER7_BANK1STARTSECADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000010 */
#define SYSCFG_USER7_BANK1STARTSECADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000020 */
#define SYSCFG_USER7_BANK1STARTSECADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000040 */
#define SYSCFG_USER7_BANK1STARTSECADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000080 */
#define SYSCFG_USER7_BANK1STARTSECADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000100 */
#define SYSCFG_USER7_BANK1STARTSECADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000200 */
#define SYSCFG_USER7_BANK1STARTSECADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000400 */
#define SYSCFG_USER7_BANK1STARTSECADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER7, BANK1STARTSECADDR))  /*!< Value 0x00000800 */

/*!< User 8 register */
#define SYSCFG_USER8_MASSERASEBANK2SECADDR_OFFSET      (0U)
#define SYSCFG_USER8_MASSERASEBANK2SECADDR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER8, MASSERASEBANK2SECADDR))   /*!< Mask  0x00000001 */
#define SYSCFG_USER8_MASSERASEBANK2SECADDR_ERASED      (0x0UL)                                                                  /*!< Value 0x00000000 */
#define SYSCFG_USER8_MASSERASEBANK2SECADDR_NOTERASED   (0x1UL)                                                                  /*!< Value 0x00000001 */

#define SYSCFG_USER8_MASSERASEBANK2PROTADDR_OFFSET     (16U)
#define SYSCFG_USER8_MASSERASEBANK2PROTADDR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER8, MASSERASEBANK2PROTADDR))  /*!< Mask  0x00010000 */
#define SYSCFG_USER8_MASSERASEBANK2PROTADDR_ERASED     (0x0UL)                                                                  /*!< Value 0x00000000 */
#define SYSCFG_USER8_MASSERASEBANK2PROTADDR_NOTERASED  (0x1UL)                                                                  /*!< Value 0x00000001 */

/*!< User 9 register */
#define SYSCFG_USER9_BANK2STARTPROTADDR_OFFSET  (16U)
#define SYSCFG_USER9_BANK2STARTPROTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Mask  0x0FFF0000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00010000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00020000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00040000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00080000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00100000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00200000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00400000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x00800000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x01000000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x02000000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x04000000 */
#define SYSCFG_USER9_BANK2STARTPROTADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER9, BANK2STARTPROTADDR))  /*!< Value 0x08000000 */

#define SYSCFG_USER5_WRPROTBANK2SEC7_OFFSET    (7U)
#define SYSCFG_USER5_WRPROTBANK2SEC7_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC7))        /*!< Mask  0x00000080 */
#define SYSCFG_USER5_WRPROTBANK2SEC7_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC7_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC6_OFFSET    (6U)
#define SYSCFG_USER5_WRPROTBANK2SEC6_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC6))        /*!< Mask  0x00000040 */
#define SYSCFG_USER5_WRPROTBANK2SEC6_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC6_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC5_OFFSET    (5U)
#define SYSCFG_USER5_WRPROTBANK2SEC5_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC5))        /*!< Mask  0x00000020 */
#define SYSCFG_USER5_WRPROTBANK2SEC5_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC5_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC4_OFFSET    (4U)
#define SYSCFG_USER5_WRPROTBANK2SEC4_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC4))        /*!< Mask  0x00000010 */
#define SYSCFG_USER5_WRPROTBANK2SEC4_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC4_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC3_OFFSET    (3U)
#define SYSCFG_USER5_WRPROTBANK2SEC3_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC3))        /*!< Mask  0x00000008 */
#define SYSCFG_USER5_WRPROTBANK2SEC3_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC3_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC2_OFFSET    (2U)
#define SYSCFG_USER5_WRPROTBANK2SEC2_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC2))        /*!< Mask  0x00000004 */
#define SYSCFG_USER5_WRPROTBANK2SEC2_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC2_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC1_OFFSET    (1U)
#define SYSCFG_USER5_WRPROTBANK2SEC1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC1))        /*!< Mask  0x00000002 */
#define SYSCFG_USER5_WRPROTBANK2SEC1_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC1_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define SYSCFG_USER5_WRPROTBANK2SEC0_OFFSET    (0U)
#define SYSCFG_USER5_WRPROTBANK2SEC0_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER5, WRPROTBANK2SEC0))        /*!< Mask  0x00000001 */
#define SYSCFG_USER5_WRPROTBANK2SEC0_ENABLED   (0x0UL)                                                                 /*!< Value 0x00000000 */
#define SYSCFG_USER5_WRPROTBANK2SEC0_DISABLED  (0x1UL)                                                                 /*!< Value 0x00000001 */

/*!< User 10 register */
#define SYSCFG_USER10_BANK2STARTSECADDR_OFFSET  (16U)
#define SYSCFG_USER10_BANK2STARTSECADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Mask  0x00000FFF */
#define SYSCFG_USER10_BANK2STARTSECADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000001 */
#define SYSCFG_USER10_BANK2STARTSECADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000002 */
#define SYSCFG_USER10_BANK2STARTSECADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000004 */
#define SYSCFG_USER10_BANK2STARTSECADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000008 */
#define SYSCFG_USER10_BANK2STARTSECADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000010 */
#define SYSCFG_USER10_BANK2STARTSECADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000020 */
#define SYSCFG_USER10_BANK2STARTSECADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000040 */
#define SYSCFG_USER10_BANK2STARTSECADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000080 */
#define SYSCFG_USER10_BANK2STARTSECADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000100 */
#define SYSCFG_USER10_BANK2STARTSECADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000200 */
#define SYSCFG_USER10_BANK2STARTSECADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000400 */
#define SYSCFG_USER10_BANK2STARTSECADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2STARTSECADDR))  /*!< Value 0x00000800 */

#define SYSCFG_USER10_BANK2ENDPROTADDR_OFFSET    (0U)
#define SYSCFG_USER10_BANK2ENDPROTADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Mask  0x00000FFF */
#define SYSCFG_USER10_BANK2ENDPROTADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000001 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000002 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000004 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000008 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000010 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000020 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000040 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000080 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000100 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000200 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000400 */
#define SYSCFG_USER10_BANK2ENDPROTADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER10, BANK2ENDPROTADDR))    /*!< Value 0x00000800 */

/*!< User 11 register */
#define SYSCFG_USER11_INDWATCHDOGCTRL_OFFSET  (16U)
#define SYSCFG_USER11_INDWATCHDOGCTRL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, INDWATCHDOGCTRL))     /*!< Mask  0x00010000 */
#define SYSCFG_USER11_INDWATCHDOGCTRL_HW      (0x0UL)                                                               /*!< Value 0x00000000 */
#define SYSCFG_USER11_INDWATCHDOGCTRL_SW      (0x1UL)                                                               /*!< Value 0x00000001 */

#define SYSCFG_USER11_BANK2ENDSECADDR_OFFSET  (0U)
#define SYSCFG_USER11_BANK2ENDSECADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Mask  0x00000FFF */
#define SYSCFG_USER11_BANK2ENDSECADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000001 */
#define SYSCFG_USER11_BANK2ENDSECADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000002 */
#define SYSCFG_USER11_BANK2ENDSECADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000004 */
#define SYSCFG_USER11_BANK2ENDSECADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000008 */
#define SYSCFG_USER11_BANK2ENDSECADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000010 */
#define SYSCFG_USER11_BANK2ENDSECADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000020 */
#define SYSCFG_USER11_BANK2ENDSECADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000040 */
#define SYSCFG_USER11_BANK2ENDSECADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000080 */
#define SYSCFG_USER11_BANK2ENDSECADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000100 */
#define SYSCFG_USER11_BANK2ENDSECADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000200 */
#define SYSCFG_USER11_BANK2ENDSECADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000400 */
#define SYSCFG_USER11_BANK2ENDSECADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, USER11, BANK2ENDSECADDR))   /*!< Value 0x00000800 */

/*!< User 12 register */
#define SYSCFG_USER12_SECUREMODE_OFFSET        (16U)
#define SYSCFG_USER12_SECUREMODE_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER12, SECUREMODE))        /*!< Mask  0x00010000 */
#define SYSCFG_USER12_SECUREMODE_DISABLED      (0x0UL)                                                             /*!< Value 0x00000000 */
#define SYSCFG_USER12_SECUREMODE_ENABLED       (0x1UL)                                                             /*!< Value 0x00000001 */

#define SYSCFG_USER12_INDWATCHDOG2CTRL_OFFSET  (0U)
#define SYSCFG_USER12_INDWATCHDOG2CTRL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER12, INDWATCHDOG2CTRL))  /*!< Mask  0x00000001 */
#define SYSCFG_USER12_INDWATCHDOG2CTRL_HW      (0x0UL)                                                             /*!< Value 0x00000000 */
#define SYSCFG_USER12_INDWATCHDOG2CTRL_SW      (0x1UL)                                                             /*!< Value 0x00000001 */

/*!< User 13 register */
#define SYSCFG_USER13_D1STANDBYRSTONENTER_OFFSET  (16U)
#define SYSCFG_USER13_D1STANDBYRSTONENTER_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER13, D1STANDBYRSTONENTER))  /*!< Mask  0x00010000 */
#define SYSCFG_USER13_D1STANDBYRSTONENTER_ON      (0x0UL)                                                                /*!< Value 0x00000000 */
#define SYSCFG_USER13_D1STANDBYRSTONENTER_OFF     (0x1UL)                                                                /*!< Value 0x00000001 */

#define SYSCFG_USER13_SECDTCMRAMIZE_OFFSET        (0U)
#define SYSCFG_USER13_SECDTCMRAMIZE_MASK          (0x3UL << REGISTER_FIELD_OFFSET(SYSCFG, USER13, SECDTCMRAMIZE))        /*!< Mask  0x00000003 */
#define SYSCFG_USER13_SECDTCMRAMIZE_2K            (0x0UL)                                                                /*!< Value 0x00000000 */
#define SYSCFG_USER13_SECDTCMRAMIZE_4K            (0x1UL)                                                                /*!< Value 0x00000001 */
#define SYSCFG_USER13_SECDTCMRAMIZE_8K            (0x2UL)                                                                /*!< Value 0x00000002 */
#define SYSCFG_USER13_SECDTCMRAMIZE_16K           (0x3UL)                                                                /*!< Value 0x00000003 */

/*!< User 14 register */
#define SYSCFG_USER14_D2STANDBYRSTONENTER_OFFSET  (16U)
#define SYSCFG_USER14_D2STANDBYRSTONENTER_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER14, D2STANDBYRSTONENTER))  /*!< Mask  0x00010000 */
#define SYSCFG_USER14_D2STANDBYRSTONENTER_ON      (0x0UL)                                                                /*!< Value 0x00000000 */
#define SYSCFG_USER14_D2STANDBYRSTONENTER_OFF     (0x1UL)                                                                /*!< Value 0x00000001 */

#define SYSCFG_USER14_D1STOPRSTONENTER_OFFSET     (0U)
#define SYSCFG_USER14_D1STOPRSTONENTER_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER14, D1STOPRSTONENTER))     /*!< Mask  0x00010000 */
#define SYSCFG_USER14_D1STOPRSTONENTER_ON         (0x0UL)                                                                /*!< Value 0x00000000 */
#define SYSCFG_USER14_D1STOPRSTONENTER_OFF        (0x1UL)                                                                /*!< Value 0x00000001 */

/*!< User 15 register */
#define SYSCFG_USER15_D1STOPRSTONENTER_OFFSET               (16U)
#define SYSCFG_USER15_D1STOPRSTONENTER_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER15, D1STOPRSTONENTER))               /*!< Mask  0x00010000 */
#define SYSCFG_USER15_D1STOPRSTONENTER_ON                   (0x0UL)                                                                          /*!< Value 0x00000000 */
#define SYSCFG_USER15_D1STOPRSTONENTER_OFF                  (0x1UL)                                                                          /*!< Value 0x00000001 */

#define SYSCFG_USER15_INDWATCHDOGSTATEINSTANDBYMODE_OFFSET  (0U)
#define SYSCFG_USER15_INDWATCHDOGSTATEINSTANDBYMODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER15, INDWATCHDOGSTATEINSTANDBYMODE))  /*!< Mask  0x00000001 */
#define SYSCFG_USER15_INDWATCHDOGSTATEINSTANDBYMODE_FREEZE  (0x0UL)                                                                          /*!< Value 0x00000000 */
#define SYSCFG_USER15_INDWATCHDOGSTATEINSTANDBYMODE_RUN     (0x1UL)                                                                          /*!< Value 0x00000001 */

/*!< User 16 register */
#define SYSCFG_USER16_PRIVATEKEY_OFFSET                  (16U)
#define SYSCFG_USER16_PRIVATEKEY_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER16, PRIVATEKEY))                  /*!< Mask  0x00010000 */
#define SYSCFG_USER16_PRIVATEKEY_NOTPROGRAMMED           (0x0UL)                                                                       /*!< Value 0x00000000 */
#define SYSCFG_USER16_PRIVATEKEY_PROGRAMMED              (0x1UL)                                                                       /*!< Value 0x00000001 */

#define SYSCFG_USER16_INDWATCHDOGSTATEINSTOPMODE_OFFSET  (0U)
#define SYSCFG_USER16_INDWATCHDOGSTATEINSTOPMODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER16, INDWATCHDOGSTATEINSTOPMODE))  /*!< Mask  0x00000001 */
#define SYSCFG_USER16_INDWATCHDOGSTATEINSTOPMODE_FREEZE  (0x0UL)                                                                       /*!< Value 0x00000000 */
#define SYSCFG_USER16_INDWATCHDOGSTATEINSTOPMODE_RUN     (0x1UL)                                                                       /*!< Value 0x00000001 */

/*!< User 17 register */
#define SYSCFG_USER17_IOVLT_OFFSET                          (0U)
#define SYSCFG_USER17_IOVLT_MASK                            (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, USER17, IOVLT))  /*!< Mask  0x00000001 */
#define SYSCFG_USER17_IOVLT_FULLVLTRANGE                    (0x0UL)                                                  /*!< Value 0x00000000 */
#define SYSCFG_USER17_IOVLT_BELOW2_7V                       (0x1UL)                                                  /*!< Value 0x00000001 */

#define SYSCFG_OFFSET 0x400
#define SYSCFG_BASE (D3_APB4_BASE + SYSCFG_OFFSET)
#define SYSCFG_ADDRESS_RANGE 0x400

/*!< SYSCFG registers */
#define SYSCFG_OFFSET (0*SYSCFG_ADDRESS_RANGE)
#define SYSCFG_BASE OFFSET_ADDRESS(SYSCFG_BASE, SYSCFG_OFFSET)
#define SYSCFG REGISTER_PTR(syscfg_bank_regs, SYSCFG_BASE)

/** @} */ // End of SystemConfiguration group

/** @} */ // End of RegisterGroup group

#endif // SYSCFG_REGISTERS_H
