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
	   uint32_t reserved0;        /*!< Reserved                                       (Offset 0x0)            */
	RW uint32_t PMCR;             /*!< Peripheral mode configuration register         (Offset 0x4)            */
	RW uint32_t EXTICR1;          /*!< External interrupt configuration 1 register    (Offset 0x8)            */
	RW uint32_t EXTICR2;          /*!< External interrupt configuration 2 register    (Offset 0xC)            */
	RW uint32_t EXTICR3;          /*!< External interrupt configuration 3 register    (Offset 0x10)           */
	RW uint32_t EXTICR4;          /*!< External interrupt configuration 4 register    (Offset 0x14)           */
	RW uint32_t CFGR;             /*!< Configuration register                         (Offset 0x18)           */
	RW uint32_t CCCR;             /*!< Compensation cell control and status register  (Offset 0x20)           */
	RO uint32_t CCVR;             /*!< Compensation cell value register               (Offset 0x24)           */
	RW uint32_t CCCR;             /*!< Compensation cell code register                (Offset 0x28)           */
	RW uint32_t PWRCR;            /*!< Power control register                         (Offset 0x2C)           */
	   uint32_t reserved1[61U];   /*!< Reserved                                       (Offset 0x30 to 0x120)  */
	RO uint32_t PKGR;             /*!< Package register                               (Offset 0x124)          */
	   uint32_t reserved2[118U];  /*!< Reserved                                       (Offset 0x128 to 0x2FC) */
	RO uint32_t UR0;              /*!< User 0  register                               (Offset 0x300)          */
	RW uint32_t UR1;              /*!< User 1  register                               (Offset 0x304)          */
	RW uint32_t UR2;              /*!< User 2  register                               (Offset 0x308)          */
	RW uint32_t UR3;              /*!< User 3  register                               (Offset 0x30C)          */
	RW uint32_t UR4;              /*!< User 4  register                               (Offset 0x310)          */
	RO uint32_t UR5;              /*!< User 5  register                               (Offset 0x314)          */
	RO uint32_t UR6;              /*!< User 6  register                               (Offset 0x318)          */
	RO uint32_t UR7;              /*!< User 7  register                               (Offset 0x31C)          */
	RO uint32_t UR8;              /*!< User 8  register                               (Offset 0x320)          */
	RO uint32_t UR9;              /*!< User 9  register                               (Offset 0x324)          */
	RO uint32_t UR10;             /*!< User 10 register                               (Offset 0x328)          */
	RO uint32_t UR11;             /*!< User 11 register                               (Offset 0x32C)          */
	RO uint32_t UR12;             /*!< User 12 register                               (Offset 0x330)          */
	RW uint32_t UR13;             /*!< User 13 register                               (Offset 0x334)          */
	RW uint32_t UR14;             /*!< User 14 register                               (Offset 0x338)          */
	RW uint32_t UR15;             /*!< User 15 register                               (Offset 0x33C)          */
	RO uint32_t UR16;             /*!< User 16 register                               (Offset 0x340)          */
	RO uint32_t UR17;             /*!< User 17 register                               (Offset 0x344)          */
} syscfg_bank_regs;

/*!< System configuration registers */
/*!< Peripheral mode configuration register */
#define SYSCFG_PMCR_PC3SO_OFFSET        (27U)
#define SYSCFG_PMCR_PC3SO_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PC3SO))        /*!< Mask  0x08000000 */

#define SYSCFG_PMCR_PC2SO_OFFSET        (26U)
#define SYSCFG_PMCR_PC2SO_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PC2SO))        /*!< Mask  0x04000000 */

#define SYSCFG_PMCR_PA1SO_OFFSET        (25U)
#define SYSCFG_PMCR_PA1SO_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PA1SO))        /*!< Mask  0x02000000 */

#define SYSCFG_PMCR_PA0SO_OFFSET        (24U)
#define SYSCFG_PMCR_PA0SO_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PA0SO))        /*!< Mask  0x01000000 */

#define SYSCFG_PMCR_EPIS_OFFSET         (210U)
#define SYSCFG_PMCR_EPIS_MASK           (0x7UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, EPIS))         /*!< Mask  0x00E00000 */

#define SYSCFG_PMCR_BOOSTVDDSEL_OFFSET  (9U)
#define SYSCFG_PMCR_BOOSTVDDSEL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, BOOSTVDDSEL))  /*!< Mask  0x00000200 */

#define SYSCFG_PMCR_BOOSTE_OFFSET       (8U)
#define SYSCFG_PMCR_BOOSTE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, BOOSTE))       /*!< Mask  0x00000100 */

#define SYSCFG_PMCR_PB9FMP_OFFSET       (7U)
#define SYSCFG_PMCR_PB9FMP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PB9FMP))       /*!< Mask  0x00000080 */

#define SYSCFG_PMCR_PB8FMP_OFFSET       (6U)
#define SYSCFG_PMCR_PB8FMP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PB8FMP))       /*!< Mask  0x00000040 */

#define SYSCFG_PMCR_PB7FMP_OFFSET       (5U)
#define SYSCFG_PMCR_PB7FMP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PB7FMP))       /*!< Mask  0x00000020 */

#define SYSCFG_PMCR_PB6FMP_OFFSET       (4U)
#define SYSCFG_PMCR_PB6FMP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, PB6FMP))       /*!< Mask  0x00000010 */

#define SYSCFG_PMCR_I2C4FMP_OFFSET      (3U)
#define SYSCFG_PMCR_I2C4FMP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, I2C4FMP))      /*!< Mask  0x00000008 */

#define SYSCFG_PMCR_I2C3FMP_OFFSET      (2U)
#define SYSCFG_PMCR_I2C3FMP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, I2C3FMP))      /*!< Mask  0x00000004 */

#define SYSCFG_PMCR_I2C2FMP_OFFSET      (1U)
#define SYSCFG_PMCR_I2C2FMP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, I2C2FMP))      /*!< Mask  0x00000002 */

#define SYSCFG_PMCR_I2C1FMP_OFFSET      (0U)
#define SYSCFG_PMCR_I2C1FMP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PMCR, I2C1FMP))      /*!< Mask  0x00000001 */

// Values of analog switch between PC and PC_C control bit
#define SYSCFG_PCSWITCH_CLOSE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PCSWITCH_OPEN   (0x1UL)  /*!< Value 0x00000001 */

// Values of analog switch between PA and PA_C control bit
#define SYSCFG_PASWITCH_CLOSE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PASWITCH_OPEN   (0x1UL)  /*!< Value 0x00000001 */

// Values of ethernet PHY interface selection register
#define SYSCFG_ETHERNETPHY_MII   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_ETHERNETPHY_RMII  (0x4UL)  /*!< Value 0x00000001 */

// Values of analog switch supply voltage selection register
#define SYSCFG_ANALOGPWESUPPLY_VDDIFNOBOOSTER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_ANALOGPWESUPPLY_ALWAYSBOOTSER   (0x1UL)  /*!< Value 0x00000001 */

// Values of booster enable bit
#define SYSCFG_BOOSTER_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_BOOSTER_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of inter-integrated circuit (I2C) fast mode plus (FMP) on pin B enable bit
#define SYSCFG_PBFMP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PBFMP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of inter-integrated circuit (I2C) fast mode plus (FMP) enable bit
#define SYSCFG_I2CFMP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_I2CFMP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< External interrupt configuration 1 register */
#define SYSCFG_EXTICR1_EXTI3_OFFSET  (12U)
#define SYSCFG_EXTICR1_EXTI3_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR1, EXTI3))  /*!< Mask  0x0000F000 */

#define SYSCFG_EXTICR1_EXTI2_OFFSET  (8U)
#define SYSCFG_EXTICR1_EXTI2_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR1, EXTI2))  /*!< Mask  0x00000F00 */

#define SYSCFG_EXTICR1_EXTI1_OFFSET  (4U)
#define SYSCFG_EXTICR1_EXTI1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR1, EXTI1))  /*!< Mask  0x000000F0 */

#define SYSCFG_EXTICR1_EXTI0_OFFSET  (0U)
#define SYSCFG_EXTICR1_EXTI0_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR1, EXTI0))  /*!< Mask  0x0000000F */

/*!< External interrupt configuration 2 register */
#define SYSCFG_EXTICR2_EXTI7_OFFSET  (12U)
#define SYSCFG_EXTICR2_EXTI7_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR2, EXTI7))  /*!< Mask  0x0000F000 */

#define SYSCFG_EXTICR2_EXTI6_OFFSET  (8U)
#define SYSCFG_EXTICR2_EXTI6_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR2, EXTI6))  /*!< Mask  0x00000F00 */

#define SYSCFG_EXTICR2_EXTI5_OFFSET  (4U)
#define SYSCFG_EXTICR2_EXTI5_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR2, EXTI5))  /*!< Mask  0x000000F0 */

#define SYSCFG_EXTICR2_EXTI4_OFFSET  (0U)
#define SYSCFG_EXTICR2_EXTI4_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR2, EXTI4))  /*!< Mask  0x0000000F */

/*!< External interrupt configuration 3 register */
#define SYSCFG_EXTICR3_EXTI11_OFFSET  (12U)
#define SYSCFG_EXTICR3_EXTI11_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR3, EXTI11))  /*!< Mask  0x0000F000 */

#define SYSCFG_EXTICR3_EXTI10_OFFSET  (8U)
#define SYSCFG_EXTICR3_EXTI10_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR3, EXTI10))  /*!< Mask  0x00000F00 */

#define SYSCFG_EXTICR3_EXTI9_OFFSET  (4U)
#define SYSCFG_EXTICR3_EXTI9_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR3, EXTI9))    /*!< Mask  0x000000F0 */

#define SYSCFG_EXTICR3_EXTI8_OFFSET  (0U)
#define SYSCFG_EXTICR3_EXTI8_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR3, EXTI8))    /*!< Mask  0x0000000F */

/*!< External interrupt configuration 4 register */
#define SYSCFG_EXTICR4_EXTI15_OFFSET  (12U)
#define SYSCFG_EXTICR4_EXTI15_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR4, EXTI15))  /*!< Mask  0x0000F000 */

#define SYSCFG_EXTICR4_EXTI14_OFFSET  (8U)
#define SYSCFG_EXTICR4_EXTI14_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR4, EXTI14))  /*!< Mask  0x00000F00 */

#define SYSCFG_EXTICR4_EXTI13_OFFSET  (4U)
#define SYSCFG_EXTICR4_EXTI13_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR4, EXTI13))  /*!< Mask  0x000000F0 */

#define SYSCFG_EXTICR4_EXTI12_OFFSET  (0U)
#define SYSCFG_EXTICR4_EXTI12_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, EXTICR4, EXTI12))  /*!< Mask  0x0000000F */

// Values of external interrupt input source
#define SYSCFG_EXTERNALINTSRC_PA  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_EXTERNALINTSRC_PB  (0x1UL)  /*!< Value 0x00000001 */
#define SYSCFG_EXTERNALINTSRC_PC  (0x2UL)  /*!< Value 0x00000002 */
#define SYSCFG_EXTERNALINTSRC_PD  (0x3UL)  /*!< Value 0x00000003 */
#define SYSCFG_EXTERNALINTSRC_PE  (0x4UL)  /*!< Value 0x00000004 */
#define SYSCFG_EXTERNALINTSRC_PF  (0x5UL)  /*!< Value 0x00000005 */
#define SYSCFG_EXTERNALINTSRC_PG  (0x6UL)  /*!< Value 0x00000006 */
#define SYSCFG_EXTERNALINTSRC_PH  (0x7UL)  /*!< Value 0x00000007 */
#define SYSCFG_EXTERNALINTSRC_PI  (0x8UL)  /*!< Value 0x00000008 */
#define SYSCFG_EXTERNALINTSRC_PJ  (0x9UL)  /*!< Value 0x00000009 */
#define SYSCFG_EXTERNALINTSRC_PK  (0xAUL)  /*!< Value 0x0000000A */

/*!< Timer connection configuration register */
#define SYSCFG_CFGR_AXISRAML_OFFSET  (15U)
#define SYSCFG_CFGR_AXISRAML_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, AXISRAML))  /*!< Mask  0x00008000 */

#define SYSCFG_CFGR_ITCML_OFFSET     (14U)
#define SYSCFG_CFGR_ITCML_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, ITCML))     /*!< Mask  0x00004000 */

#define SYSCFG_CFGR_DTCML_OFFSET     (13U)
#define SYSCFG_CFGR_DTCML_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, DTCML))     /*!< Mask  0x00002000 */

#define SYSCFG_CFGR_D2SRAM1L_OFFSET  (12U)
#define SYSCFG_CFGR_D2SRAM1L_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, D2SRAM1L))  /*!< Mask  0x00001000 */

#define SYSCFG_CFGR_D2SRAM2L_OFFSET  (11U)
#define SYSCFG_CFGR_D2SRAM2L_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, D2SRAM2L))  /*!< Mask  0x00000800 */

#define SYSCFG_CFGR_D2SRAM3L_OFFSET  (10U)
#define SYSCFG_CFGR_D2SRAM3L_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, D2SRAM3L))  /*!< Mask  0x00000400 */

#define SYSCFG_CFGR_D3SRAM4L_OFFSET  (9U)
#define SYSCFG_CFGR_D3SRAM4L_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, D3SRAM4L))  /*!< Mask  0x00000200 */

#define SYSCFG_CFGR_BKSRAML_OFFSET   (7U)
#define SYSCFG_CFGR_BKSRAML_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, BKSRAML))   /*!< Mask  0x00000080 */

#define SYSCFG_CFGR_CM7L_OFFSET      (6U)
#define SYSCFG_CFGR_CM7L_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, CM7L))      /*!< Mask  0x00000040 */

#define SYSCFG_CFGR_FLASHL_OFFSET    (3U)
#define SYSCFG_CFGR_FLASHL_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, FLASHL))    /*!< Mask  0x00000008 */

#define SYSCFG_CFGR_PVDL_OFFSET      (2U)
#define SYSCFG_CFGR_PVDL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, PVDL))      /*!< Mask  0x00000004 */

#define SYSCFG_CFGR_CM4L_OFFSET      (0U)
#define SYSCFG_CFGR_CM4L_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CFGR, CM4L))      /*!< Mask  0x00000001 */

// Values of D1 AXI SRAM double ECC error lock bit
#define SYSCFG_AXISRAMDBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_AXISRAMDBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of D1 instruction tightly coupled RAM (ITCM) double ECC error lock bit
#define SYSCFG_ITCMDBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_ITCMDBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of D1 data tightly coupled RAM (DTCM) double ECC error lock bit
#define SYSCFG_DTCMDBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_DTCMDBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of D2 SRAM1 double ECC error lock bit
#define SYSCFG_D2SRAM1DBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D2SRAM1DBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of D2 SRAM2 double ECC error lock bit
#define SYSCFG_D2SRAM2DBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D2SRAM2DBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of D2 SRAM3 double ECC error lock bit
#define SYSCFG_D2SRAM3DBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D2SRAM3DBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of D3 SRAM4 double ECC error lock bit
#define SYSCFG_D3SRAM4DBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D3SRAM4DBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of backup SRAM double ECC error lock bit
#define SYSCFG_BCKSRAMDBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_BCKSRAMDBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of Cortex M7 lockup enable bit
#define SYSCFG_M7HARDFAULT_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_M7HARDFAULT_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of flash double ECC error lock bit
#define SYSCFG_FLASHDBLECCLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_FLASHDBLECCLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of programmable voltage detector (PVD) lock enable bit
#define SYSCFG_PVDLOCK_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PVDLOCK_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

// Values of Cortex M4 lockup enable bit
#define SYSCFG_M4HARDFAULT_DISCONNECTFROMTIMER  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_M4HARDFAULT_CONNECTTOTIMER       (0x1UL)  /*!< Value 0x00000001 */

/*!< Compensation cell control and status register */
#define SYSCFG_CCCR_HSLV_OFFSET   (16U)
#define SYSCFG_CCCR_HSLV_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, HSLV))   /*!< Mask  0x00010000 */

#define SYSCFG_CCCR_READY_OFFSET  (8U)
#define SYSCFG_CCCR_READY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, READY))  /*!< Mask  0x00000100 */

#define SYSCFG_CCCR_CS_OFFSET     (1U)
#define SYSCFG_CCCR_CS_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, CS))     /*!< Mask  0x00000002 */

#define SYSCFG_CCCR_EN_OFFSET     (0U)
#define SYSCFG_CCCR_EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, EN))     /*!< Mask  0x00000001 */

// Values of high speed at low voltage optimization enable bit
#define SYSCFG_IOSPEEDLOWVLTOPT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_IOSPEEDLOWVLTOPT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of compensation cell ready bit
#define SYSCFG_COMPCELL_NOTREADY  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_COMPCELL_READY     (0x1UL)  /*!< Value 0x00000001 */

// Values of compensation cell code selection bit
#define SYSCFG_COMPCELLCODE_CELLVALUE  (0x0UL)  /*!< Value 0x00000000 - available in CCVR register */
#define SYSCFG_COMPCELLCODE_CELLCODE   (0x1UL)  /*!< Value 0x00000001 - available in CCCR register  */

// Values of compensation cell enable bit
#define SYSCFG_IOCOMPCELL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_IOCOMPCELL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Compensation cell value register */
#define SYSCFG_CCVR_PCV_OFFSET  (4U)
#define SYSCFG_CCVR_PCV_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, PCV))  /*!< Mask  0x000000F0 */
#define SYSCFG_CCVR_PCV_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, PCV))  /*!< Value 0x00000001 */
#define SYSCFG_CCVR_PCV_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, PCV))  /*!< Value 0x00000002 */
#define SYSCFG_CCVR_PCV_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, PCV))  /*!< Value 0x00000004 */
#define SYSCFG_CCVR_PCV_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, PCV))  /*!< Value 0x00000008 */

#define SYSCFG_CCVR_NCV_OFFSET  (0U)
#define SYSCFG_CCVR_NCV_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, NCV))  /*!< Mask  0x0000000F */
#define SYSCFG_CCVR_NCV_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, NCV))  /*!< Value 0x00000001 */
#define SYSCFG_CCVR_NCV_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, NCV))  /*!< Value 0x00000002 */
#define SYSCFG_CCVR_NCV_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, NCV))  /*!< Value 0x00000004 */
#define SYSCFG_CCVR_NCV_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, CCVR, NCV))  /*!< Value 0x00000008 */

/*!< Compensation cell code register */
#define SYSCFG_CCCR_PCC_OFFSET  (4U)
#define SYSCFG_CCCR_PCC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, PCC))  /*!< Mask  0x000000F0 */
#define SYSCFG_CCCR_PCC_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, PCC))  /*!< Value 0x00000001 */
#define SYSCFG_CCCR_PCC_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, PCC))  /*!< Value 0x00000002 */
#define SYSCFG_CCCR_PCC_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, PCC))  /*!< Value 0x00000004 */
#define SYSCFG_CCCR_PCC_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, PCC))  /*!< Value 0x00000008 */

#define SYSCFG_CCCR_NCC_OFFSET  (0U)
#define SYSCFG_CCCR_NCC_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, NCC))  /*!< Mask  0x0000000F */
#define SYSCFG_CCCR_NCC_0       (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, NCC))  /*!< Value 0x00000001 */
#define SYSCFG_CCCR_NCC_1       (0x2UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, NCC))  /*!< Value 0x00000002 */
#define SYSCFG_CCCR_NCC_2       (0x4UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, NCC))  /*!< Value 0x00000004 */
#define SYSCFG_CCCR_NCC_3       (0x8UL << REGISTER_FIELD_OFFSET(SYSCFG, CCCR, NCC))  /*!< Value 0x00000008 */

/*!< Power control register */
#define SYSCFG_PWRCR_ODEN_OFFSET  (0U)
#define SYSCFG_PWRCR_ODEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, PWRCR, ODEN))  /*!< Mask  0x00000001 */

// Values of power overdrive enable bit
#define SYSCFG_PWROVDR_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PWROVDR_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Package register */
#define SYSCFG_PKGR_PKG_OFFSET  (0U)
#define SYSCFG_PKGR_PKG_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SYSCFG, PKGR, PKG))  /*!< Mask  0x0000000F */

// Values of device package ID
#define SYSCFG_DEVICEPKG_UFBGA169STM32H7x7  (0x2UL)  /*!< Value 0x00000002 */
#define SYSCFG_DEVICEPKG_LQFP176STM32H7x7   (0x2UL)  /*!< Value 0x00000002 */
#define SYSCFG_DEVICEPKG_LQFP144STM32H7x5   (0x3UL)  /*!< Value 0x00000003 */
#define SYSCFG_DEVICEPKG_LQFP176STM32H7x5   (0x6UL)  /*!< Value 0x00000006 */
#define SYSCFG_DEVICEPKG_UFBGA176STM32H7x5  (0x7UL)  /*!< Value 0x00000007 */
#define SYSCFG_DEVICEPKG_LQFP208STM32H7x7   (0x9UL)  /*!< Value 0x00000009 */
#define SYSCFG_DEVICEPKG_LQFP208STM32H7x5   (0xAUL)  /*!< Value 0x0000000A */
#define SYSCFG_DEVICEPKG_OTHERS             (0xFUL)  /*!< Value 0x0000000F */

/*!< User 0 register */
#define SYSCFG_UR0_RDP_OFFSET  (16U)
#define SYSCFG_UR0_RDP_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR0, RDP))  /*!< Mask  0x00FF0000 */

#define SYSCFG_UR0_BKS_OFFSET  (0U)
#define SYSCFG_UR0_BKS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR0, BKS))   /*!< Mask  0x00000001 */

// Values of read out protection level
#define SYSCFG_READOUTPROT_LEVEL1  (0x88UL)  /*!< Value 0x00000088 */
#define SYSCFG_READOUTPROT_LEVEL0  (0xAAUL)  /*!< Value 0x000000AA */
#define SYSCFG_READOUTPROT_LEVEL2  (0xCCUL)  /*!< Value 0x000000CC */

// Values of flash memory bank map
#define SYSCFG_BANKSWAP_INVERTEDADDR  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_BANKSWAP_ORIGINALADDR  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 1 register */
#define SYSCFG_UR1_BCM7_OFFSET  (16U)
#define SYSCFG_UR1_BCM7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR1, BCM7))  /*!< Mask  0x00010000 */

#define SYSCFG_UR1_BCM4_OFFSET  (0U)
#define SYSCFG_UR1_BCM4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR1, BCM4))  /*!< Mask  0x00000001 */

// Values of Cortex M7 boot enable
#define SYSCFG_M7BOOT_CLKGATE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_M7BOOT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of Cortex M4 boot enable
#define SYSCFG_M4BOOT_CLKGATE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_M4BOOT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< User 2 register */
#define SYSCFG_UR2_BCM7_ADD0_OFFSET  (16U)
#define SYSCFG_UR2_BCM7_ADD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Mask  0xFFFF0000 */
#define SYSCFG_UR2_BCM7_ADD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00010000 */
#define SYSCFG_UR2_BCM7_ADD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00020000 */
#define SYSCFG_UR2_BCM7_ADD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00040000 */
#define SYSCFG_UR2_BCM7_ADD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00080000 */
#define SYSCFG_UR2_BCM7_ADD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00100000 */
#define SYSCFG_UR2_BCM7_ADD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00200000 */
#define SYSCFG_UR2_BCM7_ADD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00400000 */
#define SYSCFG_UR2_BCM7_ADD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x00800000 */
#define SYSCFG_UR2_BCM7_ADD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x01000000 */
#define SYSCFG_UR2_BCM7_ADD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x02000000 */
#define SYSCFG_UR2_BCM7_ADD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x04000000 */
#define SYSCFG_UR2_BCM7_ADD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x08000000 */
#define SYSCFG_UR2_BCM7_ADD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x10000000 */
#define SYSCFG_UR2_BCM7_ADD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x20000000 */
#define SYSCFG_UR2_BCM7_ADD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x40000000 */
#define SYSCFG_UR2_BCM7_ADD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BCM7_ADD0))  /*!< Value 0x80000000 */

#define SYSCFG_UR2_BORH_OFFSET  (0U)
#define SYSCFG_UR2_BORH_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SYSCFG, UR2, BORH))  /*!< Mask  0x00000003 */

// Value of brownout reset threshold level
#define SYSCFG_RSTBROWLEVEL_VTH0  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_RSTBROWLEVEL_VTH1  (0x1UL)  /*!< Value 0x00000001 */
#define SYSCFG_RSTBROWLEVEL_VTH2  (0x2UL)  /*!< Value 0x00000002 */
#define SYSCFG_RSTBROWLEVEL_VTH3  (0x3UL)  /*!< Value 0x00000003 */

/*!< User 3 register */
#define SYSCFG_UR3_BCM7_ADD1_OFFSET  (16U)
#define SYSCFG_UR3_BCM7_ADD1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Mask  0xFFFF0000 */
#define SYSCFG_UR3_BCM7_ADD1_0       (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000001 */
#define SYSCFG_UR3_BCM7_ADD1_1       (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000002 */
#define SYSCFG_UR3_BCM7_ADD1_2       (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000004 */
#define SYSCFG_UR3_BCM7_ADD1_3       (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000008 */
#define SYSCFG_UR3_BCM7_ADD1_4       (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000010 */
#define SYSCFG_UR3_BCM7_ADD1_5       (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000020 */
#define SYSCFG_UR3_BCM7_ADD1_6       (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000040 */
#define SYSCFG_UR3_BCM7_ADD1_7       (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000080 */
#define SYSCFG_UR3_BCM7_ADD1_8       (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000100 */
#define SYSCFG_UR3_BCM7_ADD1_9       (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000200 */
#define SYSCFG_UR3_BCM7_ADD1_10      (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000400 */
#define SYSCFG_UR3_BCM7_ADD1_11      (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00000800 */
#define SYSCFG_UR3_BCM7_ADD1_12      (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00001000 */
#define SYSCFG_UR3_BCM7_ADD1_13      (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00002000 */
#define SYSCFG_UR3_BCM7_ADD1_14      (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00004000 */
#define SYSCFG_UR3_BCM7_ADD1_15      (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM7_ADD1))  /*!< Value 0x00008000 */

#define SYSCFG_UR3_BCM4_ADD0_OFFSET  (0U)
#define SYSCFG_UR3_BCM4_ADD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Mask  0x0000FFFF */
#define SYSCFG_UR3_BCM4_ADD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00010000 */
#define SYSCFG_UR3_BCM4_ADD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00020000 */
#define SYSCFG_UR3_BCM4_ADD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00040000 */
#define SYSCFG_UR3_BCM4_ADD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00080000 */
#define SYSCFG_UR3_BCM4_ADD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00100000 */
#define SYSCFG_UR3_BCM4_ADD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00200000 */
#define SYSCFG_UR3_BCM4_ADD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00400000 */
#define SYSCFG_UR3_BCM4_ADD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x00800000 */
#define SYSCFG_UR3_BCM4_ADD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x01000000 */
#define SYSCFG_UR3_BCM4_ADD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x02000000 */
#define SYSCFG_UR3_BCM4_ADD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x04000000 */
#define SYSCFG_UR3_BCM4_ADD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x08000000 */
#define SYSCFG_UR3_BCM4_ADD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x10000000 */
#define SYSCFG_UR3_BCM4_ADD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x20000000 */
#define SYSCFG_UR3_BCM4_ADD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x40000000 */
#define SYSCFG_UR3_BCM4_ADD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR3, BCM4_ADD0))  /*!< Value 0x80000000 */

/*!< User 4 register */
#define SYSCFG_UR4_MEPAD_1_OFFSET    (16U)
#define SYSCFG_UR4_MEPAD_1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, MEPAD_1))       /*!< Mask  0x00010000 */

#define SYSCFG_UR4_BCM4_ADD1_OFFSET  (0U)
#define SYSCFG_UR4_BCM4_ADD1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Mask  0x0000FFFF */
#define SYSCFG_UR4_BCM4_ADD1_0       (0x0001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000001 */
#define SYSCFG_UR4_BCM4_ADD1_1       (0x0002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000002 */
#define SYSCFG_UR4_BCM4_ADD1_2       (0x0004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000004 */
#define SYSCFG_UR4_BCM4_ADD1_3       (0x0008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000008 */
#define SYSCFG_UR4_BCM4_ADD1_4       (0x0010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000010 */
#define SYSCFG_UR4_BCM4_ADD1_5       (0x0020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000020 */
#define SYSCFG_UR4_BCM4_ADD1_6       (0x0040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000040 */
#define SYSCFG_UR4_BCM4_ADD1_7       (0x0080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000080 */
#define SYSCFG_UR4_BCM4_ADD1_8       (0x0100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000100 */
#define SYSCFG_UR4_BCM4_ADD1_9       (0x0200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000200 */
#define SYSCFG_UR4_BCM4_ADD1_10      (0x0400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000400 */
#define SYSCFG_UR4_BCM4_ADD1_11      (0x0800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00000800 */
#define SYSCFG_UR4_BCM4_ADD1_12      (0x1000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00001000 */
#define SYSCFG_UR4_BCM4_ADD1_13      (0x2000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00002000 */
#define SYSCFG_UR4_BCM4_ADD1_14      (0x4000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00004000 */
#define SYSCFG_UR4_BCM4_ADD1_15      (0x8000UL << REGISTER_FIELD_OFFSET(SYSCFG, UR4, BCM4_ADD1))  /*!< Value 0x00008000 */

// Values of protected area of bank 1 erase on mass erase select bit
#define SYSCFG_BANK1PROTAREA_ERASEDBYMASSERASE     (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_BANK1PROTAREA_NOTERASEDBYMASSERASE  (0x1UL)  /*!< Value 0x00000001 */


/*!< User 5 register */
#define SYSCFG_UR5_WRPN_1_OFFSET   (16U)
#define SYSCFG_UR5_WRPN_1_MASK     (0xFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Mask  0x00FF0000 */
#define SYSCFG_UR5_WRPN_1_0        (0x01UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00010000 */
#define SYSCFG_UR5_WRPN_1_1        (0x02UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00020000 */
#define SYSCFG_UR5_WRPN_1_2        (0x04UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00040000 */
#define SYSCFG_UR5_WRPN_1_3        (0x08UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00080000 */
#define SYSCFG_UR5_WRPN_1_4        (0x10UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00100000 */
#define SYSCFG_UR5_WRPN_1_5        (0x20UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00200000 */
#define SYSCFG_UR5_WRPN_1_6        (0x40UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1))  /*!< Value 0x00400000 */

#define SYSCFG_UR5_MESAD_1_OFFSET  (0U)
#define SYSCFG_UR5_MESAD_1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR5, MESAD_1))  /*!< Mask  0x00000001 */

// Values of write protection for flash bank bits
#define SYSCFG_WRPROT_SEC7  (7U)
#define SYSCFG_WRPROT_SEC6  (6U)
#define SYSCFG_WRPROT_SEC5  (5U)
#define SYSCFG_WRPROT_SEC4  (4U)
#define SYSCFG_WRPROT_SEC3  (3U)
#define SYSCFG_WRPROT_SEC2  (2U)
#define SYSCFG_WRPROT_SEC1  (1U)
#define SYSCFG_WRPROT_SEC0  (0U)

// Values of write protection for flash bank 1 register bit
#define SYSCFG_WRPROTBANK1_SEC7_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC7)
#define SYSCFG_WRPROTBANK1_SEC7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC7))  /*!< Mask  0x00800000 */

#define SYSCFG_WRPROTBANK1_SEC6_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC6)
#define SYSCFG_WRPROTBANK1_SEC6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC6))  /*!< Mask  0x00400000 */

#define SYSCFG_WRPROTBANK1_SEC5_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC5)
#define SYSCFG_WRPROTBANK1_SEC5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC5))  /*!< Mask  0x00200000 */

#define SYSCFG_WRPROTBANK1_SEC4_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC4)
#define SYSCFG_WRPROTBANK1_SEC4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC4))  /*!< Mask  0x00100000 */

#define SYSCFG_WRPROTBANK1_SEC3_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC3)
#define SYSCFG_WRPROTBANK1_SEC3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC3))  /*!< Mask  0x00080000 */

#define SYSCFG_WRPROTBANK1_SEC2_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC2)
#define SYSCFG_WRPROTBANK1_SEC2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC2))  /*!< Mask  0x00040000 */

#define SYSCFG_WRPROTBANK1_SEC1_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC1)
#define SYSCFG_WRPROTBANK1_SEC1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC1))  /*!< Mask  0x00020000 */

#define SYSCFG_WRPROTBANK1_SEC0_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR5, WRPN_1) + SYSCFG_WRPROT_SEC0)
#define SYSCFG_WRPROTBANK1_SEC0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK1, SEC0))  /*!< Mask  0x00010000 */

// Values of secure area of bank 1 erase on mass erase select bit
#define SYSCFG_BANK1SECAREA_ERASEDBYMASSERASE     (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_BANK1SECAREA_NOTERASEDBYMASSERASE  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 6 register */
#define SYSCFG_UR6_PA_END_1_OFFSET  (16U)
#define SYSCFG_UR6_PA_END_1_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Mask  0x0FFF0000 */
#define SYSCFG_UR6_PA_END_1_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00010000 */
#define SYSCFG_UR6_PA_END_1_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00020000 */
#define SYSCFG_UR6_PA_END_1_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00040000 */
#define SYSCFG_UR6_PA_END_1_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00080000 */
#define SYSCFG_UR6_PA_END_1_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00100000 */
#define SYSCFG_UR6_PA_END_1_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00200000 */
#define SYSCFG_UR6_PA_END_1_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00400000 */
#define SYSCFG_UR6_PA_END_1_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x00800000 */
#define SYSCFG_UR6_PA_END_1_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x01000000 */
#define SYSCFG_UR6_PA_END_1_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x02000000 */
#define SYSCFG_UR6_PA_END_1_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x04000000 */
#define SYSCFG_UR6_PA_END_1_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_END_1))  /*!< Value 0x08000000 */

#define SYSCFG_UR6_PA_BEG_1_OFFSET  (0U)
#define SYSCFG_UR6_PA_BEG_1_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Mask  0x00000FFF */
#define SYSCFG_UR6_PA_BEG_1_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000001 */
#define SYSCFG_UR6_PA_BEG_1_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000002 */
#define SYSCFG_UR6_PA_BEG_1_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000004 */
#define SYSCFG_UR6_PA_BEG_1_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000008 */
#define SYSCFG_UR6_PA_BEG_1_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000010 */
#define SYSCFG_UR6_PA_BEG_1_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000020 */
#define SYSCFG_UR6_PA_BEG_1_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000040 */
#define SYSCFG_UR6_PA_BEG_1_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000080 */
#define SYSCFG_UR6_PA_BEG_1_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000100 */
#define SYSCFG_UR6_PA_BEG_1_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000200 */
#define SYSCFG_UR6_PA_BEG_1_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000400 */
#define SYSCFG_UR6_PA_BEG_1_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR6, PA_BEG_1))  /*!< Value 0x00000800 */

/*!< User 7 register */
#define SYSCFG_UR7_SA_END_1_OFFSET  (16U)
#define SYSCFG_UR7_SA_END_1_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Mask  0x0FFF0000 */
#define SYSCFG_UR7_SA_END_1_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00010000 */
#define SYSCFG_UR7_SA_END_1_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00020000 */
#define SYSCFG_UR7_SA_END_1_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00040000 */
#define SYSCFG_UR7_SA_END_1_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00080000 */
#define SYSCFG_UR7_SA_END_1_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00100000 */
#define SYSCFG_UR7_SA_END_1_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00200000 */
#define SYSCFG_UR7_SA_END_1_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00400000 */
#define SYSCFG_UR7_SA_END_1_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x00800000 */
#define SYSCFG_UR7_SA_END_1_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x01000000 */
#define SYSCFG_UR7_SA_END_1_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x02000000 */
#define SYSCFG_UR7_SA_END_1_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x04000000 */
#define SYSCFG_UR7_SA_END_1_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_END_1))  /*!< Value 0x08000000 */

#define SYSCFG_UR7_SA_BEG_1_OFFSET  (0U)
#define SYSCFG_UR7_SA_BEG_1_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Mask  0x00000FFF */
#define SYSCFG_UR7_SA_BEG_1_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000001 */
#define SYSCFG_UR7_SA_BEG_1_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000002 */
#define SYSCFG_UR7_SA_BEG_1_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000004 */
#define SYSCFG_UR7_SA_BEG_1_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000008 */
#define SYSCFG_UR7_SA_BEG_1_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000010 */
#define SYSCFG_UR7_SA_BEG_1_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000020 */
#define SYSCFG_UR7_SA_BEG_1_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000040 */
#define SYSCFG_UR7_SA_BEG_1_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000080 */
#define SYSCFG_UR7_SA_BEG_1_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000100 */
#define SYSCFG_UR7_SA_BEG_1_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000200 */
#define SYSCFG_UR7_SA_BEG_1_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000400 */
#define SYSCFG_UR7_SA_BEG_1_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR7, SA_BEG_1))  /*!< Value 0x00000800 */

/*!< User 8 register */
#define SYSCFG_UR8_MESAD_2_OFFSET  (16U)
#define SYSCFG_UR8_MESAD_2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR8, MESAD_2))  /*!< Mask  0x00000001 */

#define SYSCFG_UR8_MEPAD_2_OFFSET  (0U)
#define SYSCFG_UR8_MEPAD_2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR8, MEPAD_2))  /*!< Mask  0x00010000 */

// Values of flash protected area mass erase enable bit
#define SYSCFG_PROTAREAMASSERASE_ENABLED   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PROTAREAMASSERASE_DISABLED  (0x1UL)  /*!< Value 0x00000001 */

// Values of flash secure area mass erase enable bit
#define SYSCFG_SECAREAMASSERASE_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_SECAREAMASSERASE_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 9 register */
#define SYSCFG_UR9_PA_BEG_2_OFFSET  (16U)
#define SYSCFG_UR9_PA_BEG_2_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Mask  0x0FFF0000 */
#define SYSCFG_UR9_PA_BEG_2_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00010000 */
#define SYSCFG_UR9_PA_BEG_2_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00020000 */
#define SYSCFG_UR9_PA_BEG_2_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00040000 */
#define SYSCFG_UR9_PA_BEG_2_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00080000 */
#define SYSCFG_UR9_PA_BEG_2_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00100000 */
#define SYSCFG_UR9_PA_BEG_2_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00200000 */
#define SYSCFG_UR9_PA_BEG_2_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00400000 */
#define SYSCFG_UR9_PA_BEG_2_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x00800000 */
#define SYSCFG_UR9_PA_BEG_2_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x01000000 */
#define SYSCFG_UR9_PA_BEG_2_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x02000000 */
#define SYSCFG_UR9_PA_BEG_2_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x04000000 */
#define SYSCFG_UR9_PA_BEG_2_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, PA_BEG_2))  /*!< Value 0x08000000 */

#define SYSCFG_UR9_WRPN_2_OFFSET    (0U)
#define SYSCFG_UR9_WRPN_2_MASK      (0xFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Mask  0x000000FF */
#define SYSCFG_UR9_WRPN_2_0         (0x01UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000001 */
#define SYSCFG_UR9_WRPN_2_1         (0x02UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000002 */
#define SYSCFG_UR9_WRPN_2_2         (0x04UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000004 */
#define SYSCFG_UR9_WRPN_2_3         (0x08UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000008 */
#define SYSCFG_UR9_WRPN_2_4         (0x10UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000010 */
#define SYSCFG_UR9_WRPN_2_5         (0x20UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000020 */
#define SYSCFG_UR9_WRPN_2_6         (0x40UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000040 */
#define SYSCFG_UR9_WRPN_2_7         (0x80UL << REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2))     /*!< Value 0x00000080 */

// Values of write protection for flash bank 2 register bit
#define SYSCFG_WRPROTBANK2_SEC7_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC7)
#define SYSCFG_WRPROTBANK2_SEC7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC7))  /*!< Mask  0x00000080 */

#define SYSCFG_WRPROTBANK2_SEC6_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC6)
#define SYSCFG_WRPROTBANK2_SEC6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC6))  /*!< Mask  0x00000040 */

#define SYSCFG_WRPROTBANK2_SEC5_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC5)
#define SYSCFG_WRPROTBANK2_SEC5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC5))  /*!< Mask  0x00000020 */

#define SYSCFG_WRPROTBANK2_SEC4_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC4)
#define SYSCFG_WRPROTBANK2_SEC4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC4))  /*!< Mask  0x00000010 */

#define SYSCFG_WRPROTBANK2_SEC3_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC3)
#define SYSCFG_WRPROTBANK2_SEC3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC3))  /*!< Mask  0x00000008 */

#define SYSCFG_WRPROTBANK2_SEC2_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC2)
#define SYSCFG_WRPROTBANK2_SEC2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC2))  /*!< Mask  0x00000004 */

#define SYSCFG_WRPROTBANK2_SEC1_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC1)
#define SYSCFG_WRPROTBANK2_SEC1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC1))  /*!< Mask  0x00000002 */

#define SYSCFG_WRPROTBANK2_SEC0_OFFSET  (REGISTER_FIELD_OFFSET(SYSCFG, UR9, WRPN_2) + SYSCFG_WRPROT_SEC0)
#define SYSCFG_WRPROTBANK2_SEC0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, WRPROTBANK2, SEC0))  /*!< Mask  0x00000001 */

// Value of write protection active bit
#define SYSCFG_WRPROTSEC_ENABLED   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_WRPROTSEC_DISABLED  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 10 register */
#define SYSCFG_UR10_SA_BEG_2_OFFSET  (16U)
#define SYSCFG_UR10_SA_BEG_2_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Mask  0x0FFF0000 */
#define SYSCFG_UR10_SA_BEG_2_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00010000 */
#define SYSCFG_UR10_SA_BEG_2_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00020000 */
#define SYSCFG_UR10_SA_BEG_2_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00040000 */
#define SYSCFG_UR10_SA_BEG_2_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00080000 */
#define SYSCFG_UR10_SA_BEG_2_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00100000 */
#define SYSCFG_UR10_SA_BEG_2_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00200000 */
#define SYSCFG_UR10_SA_BEG_2_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00400000 */
#define SYSCFG_UR10_SA_BEG_2_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x00800000 */
#define SYSCFG_UR10_SA_BEG_2_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x01000000 */
#define SYSCFG_UR10_SA_BEG_2_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x02000000 */
#define SYSCFG_UR10_SA_BEG_2_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x04000000 */
#define SYSCFG_UR10_SA_BEG_2_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, SA_BEG_2))  /*!< Value 0x08000000 */

#define SYSCFG_UR10_PA_END_2_OFFSET  (0U)
#define SYSCFG_UR10_PA_END_2_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Mask  0x00000FFF */
#define SYSCFG_UR10_PA_END_2_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000001 */
#define SYSCFG_UR10_PA_END_2_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000002 */
#define SYSCFG_UR10_PA_END_2_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000004 */
#define SYSCFG_UR10_PA_END_2_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000008 */
#define SYSCFG_UR10_PA_END_2_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000010 */
#define SYSCFG_UR10_PA_END_2_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000020 */
#define SYSCFG_UR10_PA_END_2_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000040 */
#define SYSCFG_UR10_PA_END_2_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000080 */
#define SYSCFG_UR10_PA_END_2_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000100 */
#define SYSCFG_UR10_PA_END_2_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000200 */
#define SYSCFG_UR10_PA_END_2_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000400 */
#define SYSCFG_UR10_PA_END_2_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR10, PA_END_2))  /*!< Value 0x00000800 */

/*!< User 11 register */
#define SYSCFG_UR11_IWDG1M_OFFSET    (16U)
#define SYSCFG_UR11_IWDG1M_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, IWDG1M))       /*!< Mask  0x00010000 */

#define SYSCFG_UR11_SA_END_2_OFFSET  (0U)
#define SYSCFG_UR11_SA_END_2_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Mask  0x00000FFF */
#define SYSCFG_UR11_SA_END_2_0       (0x001UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000001 */
#define SYSCFG_UR11_SA_END_2_1       (0x002UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000002 */
#define SYSCFG_UR11_SA_END_2_2       (0x004UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000004 */
#define SYSCFG_UR11_SA_END_2_3       (0x008UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000008 */
#define SYSCFG_UR11_SA_END_2_4       (0x010UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000010 */
#define SYSCFG_UR11_SA_END_2_5       (0x020UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000020 */
#define SYSCFG_UR11_SA_END_2_6       (0x040UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000040 */
#define SYSCFG_UR11_SA_END_2_7       (0x080UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000080 */
#define SYSCFG_UR11_SA_END_2_8       (0x100UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000100 */
#define SYSCFG_UR11_SA_END_2_9       (0x200UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000200 */
#define SYSCFG_UR11_SA_END_2_10      (0x400UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000400 */
#define SYSCFG_UR11_SA_END_2_11      (0x800UL << REGISTER_FIELD_OFFSET(SYSCFG, UR11, SA_END_2))   /*!< Value 0x00000800 */

/*!< User 12 register */
#define SYSCFG_UR12_SECURE_OFFSET  (16U)
#define SYSCFG_UR12_SECURE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR12, SECURE))  /*!< Mask  0x00010000 */

#define SYSCFG_UR12_IWDG2M_OFFSET  (0U)
#define SYSCFG_UR12_IWDG2M_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR12, IWDG2M))  /*!< Mask  0x00000001 */

// Values of secure mode enable bit
#define SYSCFG_SECUREMODE_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_SECUREMODE_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of independent watchdog controller mode register
#define SYSCFG_INDWATCHDOGCTRL_HW  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_INDWATCHDOGCTRL_SW  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 13 register */
#define SYSCFG_UR13_D1SBRST_OFFSET  (16U)
#define SYSCFG_UR13_D1SBRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR13, D1SBRST))  /*!< Mask  0x00010000 */

#define SYSCFG_UR13_SDRS_OFFSET     (0U)
#define SYSCFG_UR13_SDRS_MASK       (0x3UL << REGISTER_FIELD_OFFSET(SYSCFG, UR13, SDRS))     /*!< Mask  0x00000003 */

// Values of reset enable when entering domain 1 standby
#define SYSCFG_D1STANDBYRSTONENTER_ON   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D1STANDBYRSTONENTER_OFF  (0x1UL)  /*!< Value 0x00000001 */

// Values of secured data tightly coupled RAM (DTCM) size register
#define SYSCFG_SECDTCMRAMSIZE_2K   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_SECDTCMRAMSIZE_4K   (0x1UL)  /*!< Value 0x00000001 */
#define SYSCFG_SECDTCMRAMSIZE_8K   (0x2UL)  /*!< Value 0x00000002 */
#define SYSCFG_SECDTCMRAMSIZE_16K  (0x3UL)  /*!< Value 0x00000003 */

/*!< User 14 register */
#define SYSCFG_UR14_D2SBRST_OFFSET   (16U)
#define SYSCFG_UR14_D2SBRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR14, D2SBRST))   /*!< Mask  0x00010000 */

#define SYSCFG_UR14_D1STPRST_OFFSET  (0U)
#define SYSCFG_UR14_D1STPRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR14, D1STPRST))  /*!< Mask  0x00010000 */

// Values of reset enable when entering domain 2 standby
#define SYSCFG_D2STANDBYRSTONENTER_ON   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D2STANDBYRSTONENTER_OFF  (0x1UL)  /*!< Value 0x00000001 */

// Values of reset enable when entering domain 1 stop
#define SYSCFG_D1STOPRSTONENTER_ON   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D1STOPRSTONENTER_OFF  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 15 register */
#define SYSCFG_UR15_FZIWDGSTB_OFFSET  (16U)
#define SYSCFG_UR15_FZIWDGSTB_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR15, FZIWDGSTB))  /*!< Mask  0x00000001 */

#define SYSCFG_UR15_D2STPRST_OFFSET   (0U)
#define SYSCFG_UR15_D2STPRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR15, D2STPRST))   /*!< Mask  0x00010000 */

// Values of the status of independent watchdog in standby mode
#define SYSCFG_INDWATCHDOGSTATEINSTANDBYMODE_FREEZE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_INDWATCHDOGSTATEINSTANDBYMODE_RUN     (0x1UL)  /*!< Value 0x00000001 */

// Values of reset enable when entering domain 2 stop
#define SYSCFG_D2STOPRSTONENTER_ON   (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_D2STOPRSTONENTER_OFF  (0x1UL)  /*!< Value 0x00000001 */

/*!< User 16 register */
#define SYSCFG_UR16_PKP_OFFSET        (16U)
#define SYSCFG_UR16_PKP_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR16, PKP))        /*!< Mask  0x00010000 */

#define SYSCFG_UR16_FZIWDGSTP_OFFSET  (0U)
#define SYSCFG_UR16_FZIWDGSTP_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR16, FZIWDGSTP))  /*!< Mask  0x00000001 */

// Values of private key programmed register
#define SYSCFG_PRIVATEKEY_NOTPROGRAMMED  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_PRIVATEKEY_PROGRAMMED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the status of independent watchdog in stop mode
#define SYSCFG_INDWATCHDOGSTATEINSTOPMODE_FREEZE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_INDWATCHDOGSTATEINSTOPMODE_RUN     (0x1UL)  /*!< Value 0x00000001 */

/*!< User 17 register */
#define SYSCFG_UR17_IO_HSLV_OFFSET  (0U)
#define SYSCFG_UR17_IO_HSLV_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SYSCFG, UR17, IO_HSLV))  /*!< Mask  0x00000001 */

// Values of voltage range of I/O high speed
#define SYSCFG_IOVLT_FULLVLTRANGE  (0x0UL)  /*!< Value 0x00000000 */
#define SYSCFG_IOVLT_BELOW2_7V     (0x1UL)  /*!< Value 0x00000001 */

#define SYSCFG_OFFSET 0x400UL
#define SYSCFG_BASE (D3_APB4_BASE + SYSCFG_OFFSET)
#define SYSCFG_ADDRESS_RANGE 0x400UL

/*!< SYSCFG registers */
#define SYSCFG_OFFSET (0*SYSCFG_ADDRESS_RANGE)
#define SYSCFG_BASE OFFSET_ADDRESS(SYSCFG_BASE, SYSCFG_OFFSET)
#define SYSCFG REGISTER_PTR(syscfg_bank_regs, SYSCFG_BASE)

/** @} */ // End of SystemConfiguration group

/** @} */ // End of RegisterGroup group

#endif // SYSCFG_REGISTERS_H
