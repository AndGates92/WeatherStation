#ifndef RCC_H
#define RCC_H
/**
 * @copyright
 * @file registers.h
 * @author Andrea Gianarda
 * @date 15th of February 2021
 * @brief Reset and clock control registers
*/

#include "global/peripherals.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup RCC Reset and clock control
 *  @brief Reset and clock control macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t CR;     /*!< source control register (Offset 0x0) */
	RW uint32_t HSICFG; /*!< HSI (high speed internal oscillator) configuration register (Offset 0x4) */
	RO uint32_t CRRCFG; /*!< Clock recovery RC register (Offset 0x8) */
	RW uint32_t CSICFG; /*!< CSI (Low power internal oscillator) configuration register (Offset 0xC) */
	RW uint32_t CLKCFG; /*!< Clock configuration register (Offset 0x10) */
	   uint32_t reserved0; /*!< Reserved (Offset 0x14) */
	RW uint32_t D1CLKCFG; /*!< Domain 1 clock configuration register (Offset 0x18) */
	RW uint32_t D2CLKCFG; /*!< Domain 2 clock configuration register (Offset 0x1C) */
	RW uint32_t D3CLKCFG; /*!< Domain 3 clock configuration register (Offset 0x20) */
	   uint32_t reserved1; /*!< Reserved (Offset 0x24) */
	RW uint32_t PLLCLKSEL; /*!< PLLs clock source selection register (Offset 0x28) */
	RW uint32_t PLLCFG; /*!< PLLs configuration (Offset 0x2C) */
	RW uint32_t PLL1DIV; /*!< PLL 1 divider (Offset 0x30) */
	RW uint32_t PLL1FRACDIV; /*!< PLL 1 fractional divider (Offset 0x34) */
	RW uint32_t PLL2DIV; /*!< PLL 2 divider (Offset 0x38) */
	RW uint32_t PLL2FRACDIV; /*!< PLL 2 fractional divider (Offset 0x3C) */
	RW uint32_t PLL3DIV; /*!< PLL 3 divider (Offset 0x40) */
	RW uint32_t PLL3FRACDIV; /*!< PLL 3 fractional divider (Offset 0x44) */
	   uint32_t reserved2; /*!< Reserved (Offset 0x48) */
	RW uint32_t D1KERNELCLKCFG; /*!< Domain 1 kernel clock configuration (Offset 0x4C) */
	RW uint32_t D2KERNELCLKCFG1; /*!< Domain 2 kernel clock configuration 1 (Offset 0x50) */
	RW uint32_t D2KERNELCLKCFG2; /*!< Domain 2 kernel clock configuration 2 (Offset 0x54) */
	RW uint32_t D3KERNELCLKCFG; /*!< Domain 3 kernel clock configuration (Offset 0x58) */
	   uint32_t reserved3; /*!< Reserved (Offset 0x5C) */
	RW uint32_t CLKINTEN; /*!< Clock source interrupt enable (Offset 0x60) */
	RO uint32_t CLKINTFLAG; /*!< Clock source interrupt flag (Offset 0x64) */
	RW uint32_t CLKINTCLR; /*!< Clock source interrupt clear (Offset 0x68) */
	   uint32_t reserved4; /*!< Reserved (Offset 0x6C) */
	RW uint32_t BCKDCTR; /*!< Backup domain control register (Offset 0x70) */
	RW uint32_t CLKCTRLSTATUS; /*!< Clock control and status register (Offset 0x74) */
	   uint32_t reserved5; /*!< Reserved (Offset 0x78) */
	RW uint32_t AHB3RST; /*!< AHB3 reset register (Offset 0x7C) */
	RW uint32_t AHB1RST; /*!< AHB1 reset register (Offset 0x80) */
	RW uint32_t AHB2RST; /*!< AHB2 reset register (Offset 0x84) */
	RW uint32_t AHB4RST; /*!< AHB4 reset register (Offset 0x88) */
	RW uint32_t APB3RST; /*!< APB3 reset register (Offset 0x8C) */
	RW uint32_t APB1LRST; /*!< APB1 reset low register (Offset 0x90) */
	RW uint32_t APB1HRST; /*!< APB1 reset high register (Offset 0x94) */
	RW uint32_t APB2RST; /*!< APB2 reset register (Offset 0x98) */
	RW uint32_t APB4RST; /*!< APB4 reset register (Offset 0x9C) */
	RW uint32_t GBLCTRL; /*!< Global control register (Offset 0xA0) */
	   uint32_t reserved6; /*!< Reserved (Offset 0xA4) */
	RW uint32_t D3AM; /*!< Domain 3 autonomous mode (Offset 0xA8) */
	   uint32_t reserved7[9U]; /*!< Reserved (Offset 0xAC to 0xCC) */
	RW uint32_t RSTSTATUS; /*!< Reset status (Offset 0xD0) */
	RW uint32_t AHB3CLK; /*!< AHB3 clock register (Offset 0xD4) */
	RW uint32_t AHB1CLK; /*!< AHB1 clock register (Offset 0xD8) */
	RW uint32_t AHB2CLK; /*!< AHB2 clock register (Offset 0xDC) */
	RW uint32_t AHB4CLK; /*!< AHB4 clock register (Offset 0xE0) */
	RW uint32_t APB3CLK; /*!< APB3 clock register (Offset 0xE4) */
	RW uint32_t APB1LCLK; /*!< APB1 low clock register (Offset 0xE8) */
	RW uint32_t APB1HCLK; /*!< APB1 high clock register (Offset 0xEC) */
	RW uint32_t APB2CLK; /*!< APB2 clock register (Offset 0xF0) */
	RW uint32_t APB4CLK; /*!< APB4 clock register (Offset 0xF4) */
	   uint32_t reserved8; /*!< Reserved (Offset 0xF8) */
	RW uint32_t AHB3LPCLK; /*!< AHB3 low power clock register (Offset 0xFC) */
	RW uint32_t AHB1LPCLK; /*!< AHB1 low power clock register (Offset 0x100) */
	RW uint32_t AHB2LPCLK; /*!< AHB2 low power clock register (Offset 0x104) */
	RW uint32_t AHB4LPCLK; /*!< AHB4 low power clock register (Offset 0x108) */
	RW uint32_t APB3LPCLK; /*!< APB3 low power clock register (Offset 0x10C) */
	RW uint32_t APB1LLPCLK; /*!< APB1 low low power clock register (Offset 0x110) */
	RW uint32_t APB1HLPCLK; /*!< APB1 high low power clock register (Offset 0x114) */
	RW uint32_t APB2LPCLK; /*!< APB2 low power clock register (Offset 0x118) */
	RW uint32_t APB4LPCLK; /*!< APB4 low power clock register (Offset 0x11C) */
	   uint32_t reserved9[4U]; /*!< Reserved (Offset 0x120 to 0x12C) */
} rcc_common_regs;

typedef struct {
	RW uint32_t RSTSTATUS; /*!< Reset status (Offset 0x0) */
	RW uint32_t AHB3CLK; /*!< AHB3 clock register (Offset 0x4) */
	RW uint32_t AHB1CLK; /*!< AHB1 clock register (Offset 0x8) */
	RW uint32_t AHB2CLK; /*!< AHB2 clock register (Offset 0xC) */
	RW uint32_t AHB4CLK; /*!< AHB4 clock register (Offset 0x10) */
	RW uint32_t APB3CLK; /*!< APB3 clock register (Offset 0x14) */
	RW uint32_t APB1LCLK; /*!< APB1 low clock register (Offset 0x18) */
	RW uint32_t APB1HCLK; /*!< APB1 high clock register (Offset 0x1C) */
	RW uint32_t APB2CLK; /*!< APB2 clock register (Offset 0x20) */
	RW uint32_t APB4CLK; /*!< APB4 clock register (Offset 0x24) */
	   uint32_t reserved0; /*!< Reserved (Offset 0x28) */
	RW uint32_t AHB3LPCLK; /*!< AHB3 low power clock register (Offset 0x2C) */
	RW uint32_t AHB1LPCLK; /*!< AHB1 low power clock register (Offset 0x30) */
	RW uint32_t AHB2LPCLK; /*!< AHB2 low power clock register (Offset 0x34) */
	RW uint32_t AHB4LPCLK; /*!< AHB4 low power clock register (Offset 0x38) */
	RW uint32_t APB3LPCLK; /*!< APB3 low power clock register (Offset 0x3C) */
	RW uint32_t APB1LLPCLK; /*!< APB1 low low power clock register (Offset 0x40) */
	RW uint32_t APB1HLPCLK; /*!< APB1 high low power clock register (Offset 0x44) */
	RW uint32_t APB2LPCLK; /*!< APB2 low power clock register (Offset 0x48) */
	RW uint32_t APB4LPCLK; /*!< APB4 low power clock register (Offset 0x4C) */
	   uint32_t reserved1[4U]; /*!< Reserved (Offset 0x50 to 0x5C) */
} rcc_core_regs;

/*!< RCC common registers */
#define RCC_OFFSET 0x4400UL
#define RCC_BASE OFFSET_ADDRESS(D3_AHB4_BASE, RCC_OFFSET)
#define RCC REGISTER_PTR(rcc_common_regs, RCC_BASE)



/*!< RCC registers for Cortex M7 */
#define RCC_M7_OFFSET 0x130UL
#define RCC_M7_BASE OFFSET_ADDRESS(RCC_BASE, RCC_M7_OFFSET)
#define RCC_M7 REGISTER_PTR(rcc_core_regs, RCC_M7_BASE)

/*!< RCC registers for Cortex M4 */
#define RCC_M4_OFFSET 0x190UL
#define RCC_M4_BASE OFFSET_ADDRESS(RCC_BASE, RCC_M4_OFFSET)
#define RCC_M4 REGISTER_PTR(rcc_core_regs, RCC_M4_BASE)

/** @} */ // End of RCC group

/** @} */ // End of RegisterGroup group

#endif // RCC_H
