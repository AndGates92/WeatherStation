#ifndef RCC_H
#define RCC_H
/**
 * @copyright
 * @file rcc.h
 * @author Andrea Gianarda
 * @date 15th of February 2021
 * @brief Reset and clock control registers
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
 *  @defgroup RCC Reset and clock control
 *  @brief Reset and clock control macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t CR;              /*!< source control register (Offset 0x0) */
	RW uint32_t HSICFG;          /*!< HSI (High speed internal oscillator) configuration register (Offset 0x4) */
	RO uint32_t CRRC;            /*!< Clock recovery RC register (Offset 0x8) */
	RW uint32_t CSICFG;          /*!< CSI (Low power internal oscillator) configuration register (Offset 0xC) */
	RW uint32_t CLKCFG;          /*!< Clock configuration register (Offset 0x10) */
	   uint32_t reserved0;       /*!< Reserved (Offset 0x14) */
	RW uint32_t D1CLKCFG;        /*!< Domain 1 clock configuration register (Offset 0x18) */
	RW uint32_t D2CLKCFG;        /*!< Domain 2 clock configuration register (Offset 0x1C) */
	RW uint32_t D3CLKCFG;        /*!< Domain 3 clock configuration register (Offset 0x20) */
	   uint32_t reserved1;       /*!< Reserved (Offset 0x24) */
	RW uint32_t PLLCLKSEL;       /*!< PLLs clock source selection register (Offset 0x28) */
	RW uint32_t PLLCFG;          /*!< PLLs configuration (Offset 0x2C) */
	RW uint32_t PLL1DIV;         /*!< PLL 1 divider (Offset 0x30) */
	RW uint32_t PLL1FRACDIV;     /*!< PLL 1 fractional divider (Offset 0x34) */
	RW uint32_t PLL2DIV;         /*!< PLL 2 divider (Offset 0x38) */
	RW uint32_t PLL2FRACDIV;     /*!< PLL 2 fractional divider (Offset 0x3C) */
	RW uint32_t PLL3DIV;         /*!< PLL 3 divider (Offset 0x40) */
	RW uint32_t PLL3FRACDIV;     /*!< PLL 3 fractional divider (Offset 0x44) */
	   uint32_t reserved2;       /*!< Reserved (Offset 0x48) */
	RW uint32_t D1KERNELCLKCFG;  /*!< Domain 1 kernel clock configuration (Offset 0x4C) */
	RW uint32_t D2KERNELCLKCFG0; /*!< Domain 2 kernel clock configuration 1 (Offset 0x50) */
	RW uint32_t D2KERNELCLKCFG1; /*!< Domain 2 kernel clock configuration 2 (Offset 0x54) */
	RW uint32_t D3KERNELCLKCFG;  /*!< Domain 3 kernel clock configuration (Offset 0x58) */
	   uint32_t reserved3;       /*!< Reserved (Offset 0x5C) */
	RW uint32_t CLKINTEN;        /*!< Clock source interrupt enable (Offset 0x60) */
	RO uint32_t CLKINTFLAG;      /*!< Clock source interrupt flag (Offset 0x64) */
	RW uint32_t CLKINTCLR;       /*!< Clock source interrupt clear (Offset 0x68) */
	   uint32_t reserved4;       /*!< Reserved (Offset 0x6C) */
	RW uint32_t BCKDCTR;         /*!< Backup domain control register (Offset 0x70) */
	RW uint32_t CLKCTRLSTATUS;   /*!< Clock control and status register (Offset 0x74) */
	   uint32_t reserved5;       /*!< Reserved (Offset 0x78) */
	RW uint32_t AHB3RST;         /*!< AHB3 reset register (Offset 0x7C) */
	RW uint32_t AHB1RST;         /*!< AHB1 reset register (Offset 0x80) */
	RW uint32_t AHB2RST;         /*!< AHB2 reset register (Offset 0x84) */
	RW uint32_t AHB4RST;         /*!< AHB4 reset register (Offset 0x88) */
	RW uint32_t APB3RST;         /*!< APB3 reset register (Offset 0x8C) */
	RW uint32_t APB1LRST;        /*!< APB1 reset low register (Offset 0x90) */
	RW uint32_t APB1HRST;        /*!< APB1 reset high register (Offset 0x94) */
	RW uint32_t APB2RST;         /*!< APB2 reset register (Offset 0x98) */
	RW uint32_t APB4RST;         /*!< APB4 reset register (Offset 0x9C) */
	RW uint32_t GBLCTRL;         /*!< Global control register (Offset 0xA0) */
	   uint32_t reserved6;       /*!< Reserved (Offset 0xA4) */
	RW uint32_t D3AM;            /*!< Domain 3 autonomous mode (Offset 0xA8) */
	   uint32_t reserved7[9U];   /*!< Reserved (Offset 0xAC to 0xCC) */
	RW uint32_t RSTSTATUS;       /*!< Reset status (Offset 0xD0) */
	RW uint32_t AHB3CLKEN;       /*!< AHB3 clock register (Offset 0xD4) */
	RW uint32_t AHB1CLKEN;       /*!< AHB1 clock register (Offset 0xD8) */
	RW uint32_t AHB2CLKEN;       /*!< AHB2 clock register (Offset 0xDC) */
	RW uint32_t AHB4CLKEN;       /*!< AHB4 clock register (Offset 0xE0) */
	RW uint32_t APB3CLKEN;       /*!< APB3 clock register (Offset 0xE4) */
	RW uint32_t APB1LCLKEN;      /*!< APB1 low clock register (Offset 0xE8) */
	RW uint32_t APB1HCLKEN;      /*!< APB1 high clock register (Offset 0xEC) */
	RW uint32_t APB2CLKEN;       /*!< APB2 clock register (Offset 0xF0) */
	RW uint32_t APB4CLKEN;       /*!< APB4 clock register (Offset 0xF4) */
	   uint32_t reserved8;       /*!< Reserved (Offset 0xF8) */
	RW uint32_t AHB3LPCLKEN;     /*!< AHB3 low power clock register (Offset 0xFC) */
	RW uint32_t AHB1LPCLKEN;     /*!< AHB1 low power clock register (Offset 0x100) */
	RW uint32_t AHB2LPCLKEN;     /*!< AHB2 low power clock register (Offset 0x104) */
	RW uint32_t AHB4LPCLKEN;     /*!< AHB4 low power clock register (Offset 0x108) */
	RW uint32_t APB3LPCLKEN;     /*!< APB3 low power clock register (Offset 0x10C) */
	RW uint32_t APB1LLPCLKEN;    /*!< APB1 low low power clock register (Offset 0x110) */
	RW uint32_t APB1HLPCLKEN;    /*!< APB1 high low power clock register (Offset 0x114) */
	RW uint32_t APB2LPCLKEN;     /*!< APB2 low power clock register (Offset 0x118) */
	RW uint32_t APB4LPCLKEN;     /*!< APB4 low power clock register (Offset 0x11C) */
	   uint32_t reserved9[4U];   /*!< Reserved (Offset 0x120 to 0x12C) */
} rcc_common_regs;

typedef struct {
	RW uint32_t RSTSTATUS;     /*!< Reset status (Offset 0x0) */
	RW uint32_t AHB3CLKEN;     /*!< AHB3 clock register (Offset 0x4) */
	RW uint32_t AHB1CLKEN;     /*!< AHB1 clock register (Offset 0x8) */
	RW uint32_t AHB2CLKEN;     /*!< AHB2 clock register (Offset 0xC) */
	RW uint32_t AHB4CLKEN;     /*!< AHB4 clock register (Offset 0x10) */
	RW uint32_t APB3CLKEN;     /*!< APB3 clock register (Offset 0x14) */
	RW uint32_t APB1LCLKEN;    /*!< APB1 low clock register (Offset 0x18) */
	RW uint32_t APB1HCLKEN;    /*!< APB1 high clock register (Offset 0x1C) */
	RW uint32_t APB2CLKEN;     /*!< APB2 clock register (Offset 0x20) */
	RW uint32_t APB4CLKEN;     /*!< APB4 clock register (Offset 0x24) */
	   uint32_t reserved0;     /*!< Reserved (Offset 0x28) */
	RW uint32_t AHB3LPCLKEN;   /*!< AHB3 low power clock register (Offset 0x2C) */
	RW uint32_t AHB1LPCLKEN;   /*!< AHB1 low power clock register (Offset 0x30) */
	RW uint32_t AHB2LPCLKEN;   /*!< AHB2 low power clock register (Offset 0x34) */
	RW uint32_t AHB4LPCLKEN;   /*!< AHB4 low power clock register (Offset 0x38) */
	RW uint32_t APB3LPCLKEN;   /*!< APB3 low power clock register (Offset 0x3C) */
	RW uint32_t APB1LLPCLKEN;  /*!< APB1 low low power clock register (Offset 0x40) */
	RW uint32_t APB1HLPCLKEN;  /*!< APB1 high low power clock register (Offset 0x44) */
	RW uint32_t APB2LPCLKEN;   /*!< APB2 low power clock register (Offset 0x48) */
	RW uint32_t APB4LPCLKEN;   /*!< APB4 low power clock register (Offset 0x4C) */
	   uint32_t reserved1[4U]; /*!< Reserved (Offset 0x50 to 0x5C) */
} rcc_core_regs;

/*!< RCC common registers */
/*!< Control register */
#define RCC_CR_PLL3RDY_OFFSET       (29U)
#define RCC_CR_PLL3RDY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL3RDY))     /*!< Mask  0x20000000 */
#define RCC_CR_PLL3RDY_UNLOCKED     (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_PLL3RDY_LOCKED       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_PLL3EN_OFFSET        (28U)
#define RCC_CR_PLL3EN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL3EN))      /*!< Mask  0x10000000 */
#define RCC_CR_PLL3EN_DISABLE       (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_PLL3EN_ENABLE        (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_PLL2RDY_OFFSET       (27U)
#define RCC_CR_PLL2RDY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL2RDY))     /*!< Mask  0x08000000 */
#define RCC_CR_PLL2RDY_UNLOCKED     (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_PLL2RDY_LOCKED       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_PLL2EN_OFFSET        (26U)
#define RCC_CR_PLL2EN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL2EN))      /*!< Mask  0x04000000 */
#define RCC_CR_PLL2EN_DISABLE       (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_PLL2EN_ENABLE        (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_PLL1RDY_OFFSET       (25U)
#define RCC_CR_PLL1RDY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL1RDY))     /*!< Mask  0x02000000 */
#define RCC_CR_PLL1RDY_UNLOCKED     (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_PLL1RDY_LOCKED       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_PLL1EN_OFFSET        (24U)
#define RCC_CR_PLL1EN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL1EN))      /*!< Mask  0x01000000 */
#define RCC_CR_PLL1EN_DISABLE       (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_PLL1EN_ENABLE        (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSECSSEN_OFFSET      (19U)
#define RCC_CR_HSECSSEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSECSSEN))    /*!< Mask  0x00080000 */
#define RCC_CR_HSECSSEN_DISABLE     (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSECSSEN_ENABLE      (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSEBYPASS_OFFSET     (18U)
#define RCC_CR_HSEBYPASS_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSEBYPASS))   /*!< Mask  0x00040000 */
#define RCC_CR_HSEBYPASS_DISABLE    (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSEBYPASS_ENABLE     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSERDY_OFFSET        (17U)
#define RCC_CR_HSERDY_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSERDY))      /*!< Mask  0x00020000 */
#define RCC_CR_HSERDY_NOTREADY      (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSERDY_READY         (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSEEN_OFFSET         (16U)
#define RCC_CR_HSEEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSEEN))       /*!< Mask  0x00010000 */
#define RCC_CR_HSEEN_DISABLE        (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSEEN_ENABLE         (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_D2RDY_OFFSET         (15U)
#define RCC_CR_D2RDY_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, D2RDY))       /*!< Mask  0x00008000 */
#define RCC_CR_D2RDY_NOTREADY       (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_D2RDY_READY          (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_D1RDY_OFFSET         (14U)
#define RCC_CR_D1RDY_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, D1RDY))       /*!< Mask  0x00004000 */
#define RCC_CR_D1RDY_NOTREADY       (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_D1RDY_READY          (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSI48RDY_OFFSET      (13U)
#define RCC_CR_HSI48RDY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSI48RDY))    /*!< Mask  0x00002000 */
#define RCC_CR_HSI48RDY_NOTREADY    (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSI48RDY_READY       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSI48EN_OFFSET       (12U)
#define RCC_CR_HSI48EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSI48EN))     /*!< Mask  0x00001000 */
#define RCC_CR_HSI48EN_DISABLE      (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSI48EN_ENABLE       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_CSISMEN_OFFSET       (9U)
#define RCC_CR_CSISMEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, CSISMEN))     /*!< Mask  0x00000200 */
#define RCC_CR_CSISMEN_DISABLE      (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_CSISMEN_ENABLE       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_CSIRDY_OFFSET        (8U)
#define RCC_CR_CSIRDY_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, CSIRDY))      /*!< Mask  0x00000100 */
#define RCC_CR_CSIRDY_NOTREADY      (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_CSIRDY_READY         (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_CSIEN_OFFSET         (7U)
#define RCC_CR_CSIEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, CSIEN))       /*!< Mask  0x00000080 */
#define RCC_CR_CSIEN_DISABLE        (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_CSIEN_ENABLE         (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSIDIVFLAG_OFFSET    (5U)
#define RCC_CR_HSIDIVFLAG_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIDIVFLAG))  /*!< Mask  0x00000020 */
#define RCC_CR_HSIDIVFLAG_UPDATING  (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSIDIVFLAG_UPDATED   (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSIPRE_OFFSET        (3U)
#define RCC_CR_HSIPRE_MASK          (0x3UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIPRE))      /*!< Mask  0x00000018 */
#define RCC_CR_HSIPRE_DIV1          (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSIPRE_DIV2          (0x1UL)                                                /*!< Value 0x00000001 */
#define RCC_CR_HSIPRE_DIV4          (0x2UL)                                                /*!< Value 0x00000002 */
#define RCC_CR_HSIPRE_DIV8          (0x3UL)                                                /*!< Value 0x00000003 */

#define RCC_CR_HSIRDY_OFFSET        (2U)
#define RCC_CR_HSIRDY_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIRDY))      /*!< Mask  0x00000004 */
#define RCC_CR_HSIRDY_NOTREADY      (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSIRDY_READY         (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSISMEN_OFFSET       (1U)
#define RCC_CR_HSISMEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSISMEN))     /*!< Mask  0x00000002 */
#define RCC_CR_HSISMEN_DISABLE      (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSISMEN_ENABLE       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_CR_HSIEN_OFFSET         (0U)
#define RCC_CR_HSIEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIEN))       /*!< Mask  0x00000001 */
#define RCC_CR_HSIEN_DISABLE        (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_CR_HSIEN_ENABLE         (0x1UL)                                                /*!< Value 0x00000001 */

/*!< HSI (High speed internal oscillator) configuration register */
#define RCC_HSICFG_HSITRIM_OFFSET  (24U)
#define RCC_HSICFG_HSITRIM_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, HSICFG, HSITRIM))  /*!< Mask  0x7F000000 */
#define RCC_HSICFG_HSITRIM_0       (0x01UL)                                                 /*!< Value 0x00000001 */
#define RCC_HSICFG_HSITRIM_1       (0x02UL)                                                 /*!< Value 0x00000002 */
#define RCC_HSICFG_HSITRIM_2       (0x04UL)                                                 /*!< Value 0x00000004 */
#define RCC_HSICFG_HSITRIM_3       (0x08UL)                                                 /*!< Value 0x00000008 */
#define RCC_HSICFG_HSITRIM_4       (0x10UL)                                                 /*!< Value 0x00000010 */
#define RCC_HSICFG_HSITRIM_5       (0x20UL)                                                 /*!< Value 0x00000020 */
#define RCC_HSICFG_HSITRIM_6       (0x40UL)                                                 /*!< Value 0x00000040 */

#define RCC_HSICFG_HSICAL_OFFSET   (0U)
#define RCC_HSICFG_HSICAL_MASK     (0xFFFUL << REGISTER_FIELD_OFFSET(RCC, HSICFG, HSICAL))  /*!< Mask  0x00000FFF */
#define RCC_HSICFG_HSICAL_0        (0x001UL)                                                /*!< Value 0x00000001 */
#define RCC_HSICFG_HSICAL_1        (0x002UL)                                                /*!< Value 0x00000002 */
#define RCC_HSICFG_HSICAL_2        (0x004UL)                                                /*!< Value 0x00000004 */
#define RCC_HSICFG_HSICAL_3        (0x008UL)                                                /*!< Value 0x00000008 */
#define RCC_HSICFG_HSICAL_4        (0x010UL)                                                /*!< Value 0x00000010 */
#define RCC_HSICFG_HSICAL_5        (0x020UL)                                                /*!< Value 0x00000020 */
#define RCC_HSICFG_HSICAL_6        (0x040UL)                                                /*!< Value 0x00000040 */
#define RCC_HSICFG_HSICAL_7        (0x080UL)                                                /*!< Value 0x00000080 */
#define RCC_HSICFG_HSICAL_8        (0x100UL)                                                /*!< Value 0x00000100 */
#define RCC_HSICFG_HSICAL_9        (0x200UL)                                                /*!< Value 0x00000200 */
#define RCC_HSICFG_HSICAL_10       (0x400UL)                                                /*!< Value 0x00000400 */
#define RCC_HSICFG_HSICAL_11       (0x800UL)                                                /*!< Value 0x00000800 */

/*!< Clock recovery RC register */
#define RCC_CRRC_HSI48CAL_OFFSET  (0U)
#define RCC_CRRC_HSI48CAL_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(RCC, CRRC, HSI48CAL))  /*!< Mask  0x00000FFF */
#define RCC_CRRC_HSI48CAL_0       (0x001UL)                                                /*!< Value 0x00000001 */
#define RCC_CRRC_HSI48CAL_1       (0x002UL)                                                /*!< Value 0x00000002 */
#define RCC_CRRC_HSI48CAL_2       (0x004UL)                                                /*!< Value 0x00000004 */
#define RCC_CRRC_HSI48CAL_3       (0x008UL)                                                /*!< Value 0x00000008 */
#define RCC_CRRC_HSI48CAL_4       (0x010UL)                                                /*!< Value 0x00000010 */
#define RCC_CRRC_HSI48CAL_5       (0x020UL)                                                /*!< Value 0x00000020 */
#define RCC_CRRC_HSI48CAL_6       (0x040UL)                                                /*!< Value 0x00000040 */
#define RCC_CRRC_HSI48CAL_7       (0x080UL)                                                /*!< Value 0x00000080 */
#define RCC_CRRC_HSI48CAL_8       (0x100UL)                                                /*!< Value 0x00000100 */
#define RCC_CRRC_HSI48CAL_9       (0x200UL)                                                /*!< Value 0x00000200 */

/*!< CSI (Low power internal oscillator) configuration register */
#define RCC_CSICFG_CSITRIM_OFFSET  (24U)
#define RCC_CSICFG_CSITRIM_MASK    (0x3FUL << REGISTER_FIELD_OFFSET(RCC, CSICFG, CSITRIM))  /*!< Mask  0x3F000000 */
#define RCC_CSICFG_CSITRIM_0       (0x01UL)                                                 /*!< Value 0x00000001 */
#define RCC_CSICFG_CSITRIM_1       (0x02UL)                                                 /*!< Value 0x00000002 */
#define RCC_CSICFG_CSITRIM_2       (0x04UL)                                                 /*!< Value 0x00000004 */
#define RCC_CSICFG_CSITRIM_3       (0x08UL)                                                 /*!< Value 0x00000008 */
#define RCC_CSICFG_CSITRIM_4       (0x10UL)                                                 /*!< Value 0x00000010 */
#define RCC_CSICFG_CSITRIM_5       (0x20UL)                                                 /*!< Value 0x00000020 */

#define RCC_CSICFG_CSICAL_OFFSET  (0U)
#define RCC_CSICFG_CSICAL_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(RCC, CSICFG, CSICAL))  /*!< Mask  0x00000FFF */
#define RCC_CSICFG_CSICAL_0       (0x001UL)                                                /*!< Value 0x00000001 */
#define RCC_CSICFG_CSICAL_1       (0x002UL)                                                /*!< Value 0x00000002 */
#define RCC_CSICFG_CSICAL_2       (0x004UL)                                                /*!< Value 0x00000004 */
#define RCC_CSICFG_CSICAL_3       (0x008UL)                                                /*!< Value 0x00000008 */
#define RCC_CSICFG_CSICAL_4       (0x010UL)                                                /*!< Value 0x00000010 */
#define RCC_CSICFG_CSICAL_5       (0x020UL)                                                /*!< Value 0x00000020 */
#define RCC_CSICFG_CSICAL_6       (0x040UL)                                                /*!< Value 0x00000040 */
#define RCC_CSICFG_CSICAL_7       (0x080UL)                                                /*!< Value 0x00000080 */
#define RCC_CSICFG_CSICAL_8       (0x100UL)                                                /*!< Mask 0X00000100 */
#define RCC_CSICFG_CSICAL_9       (0x200UL)                                                /*!< Value 0x00000200 */

/*!< Clock configuration register */
#define RCC_CLKCFG_MSO2SEL_OFFSET        (29U)
#define RCC_CLKCFG_MSO2SEL_MASK          (0x7UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, MSO2SEL))       /*!< Mask  0xE0000000 */
#define RCC_CLKCFG_MSO2SEL_SYSCLK        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKCFG_MSO2SEL_PLL2          (0x1UL)                                                      /*!< Value 0x00000001 */
#define RCC_CLKCFG_MSO2SEL_HSE           (0x2UL)                                                      /*!< Value 0x00000002 */
#define RCC_CLKCFG_MSO2SEL_PLL1          (0x3UL)                                                      /*!< Value 0x00000003 */
#define RCC_CLKCFG_MSO2SEL_CSI           (0x4UL)                                                      /*!< Value 0x00000004 */
#define RCC_CLKCFG_MSO2SEL_LSI           (0x5UL)                                                      /*!< Value 0x00000005 */

#define RCC_CLKCFG_MSO2PRE_OFFSET        (25U)
#define RCC_CLKCFG_MSO2PRE_MASK          (0xFUL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, MSO2PRE))       /*!< Mask  0x1E000000 */
#define RCC_CLKCFG_MSO2PRE_DISABLED      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKCFG_MSO2PRE_BYPASS        (0x1UL)                                                      /*!< Value 0x00000001 */
#define RCC_CLKCFG_MSO2PRE_DIV2          (0x2UL)                                                      /*!< Value 0x00000002 */
#define RCC_CLKCFG_MSO2PRE_DIV3          (0x3UL)                                                      /*!< Value 0x00000003 */
#define RCC_CLKCFG_MSO2PRE_DIV4          (0x4UL)                                                      /*!< Value 0x00000004 */
#define RCC_CLKCFG_MSO2PRE_DIV5          (0x5UL)                                                      /*!< Value 0x00000005 */
#define RCC_CLKCFG_MSO2PRE_DIV6          (0x6UL)                                                      /*!< Value 0x00000006 */
#define RCC_CLKCFG_MSO2PRE_DIV7          (0x7UL)                                                      /*!< Value 0x00000007 */
#define RCC_CLKCFG_MSO2PRE_DIV8          (0x8UL)                                                      /*!< Value 0x00000008 */
#define RCC_CLKCFG_MSO2PRE_DIV9          (0x9UL)                                                      /*!< Value 0x00000009 */
#define RCC_CLKCFG_MSO2PRE_DIV10         (0xAUL)                                                      /*!< Value 0x0000000A */
#define RCC_CLKCFG_MSO2PRE_DIV11         (0xBUL)                                                      /*!< Value 0x0000000B */
#define RCC_CLKCFG_MSO2PRE_DIV12         (0xCUL)                                                      /*!< Value 0x0000000C */
#define RCC_CLKCFG_MSO2PRE_DIV13         (0xDUL)                                                      /*!< Value 0x0000000D */
#define RCC_CLKCFG_MSO2PRE_DIV14         (0xEUL)                                                      /*!< Value 0x0000000E */
#define RCC_CLKCFG_MSO2PRE_DIV15         (0xFUL)                                                      /*!< Value 0x0000000F */

#define RCC_CLKCFG_MSO1SEL_OFFSET        (22U)
#define RCC_CLKCFG_MSO1SEL_MASK          (0x7UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, MSO1SEL))       /*!< Mask  0x01C00000 */
#define RCC_CLKCFG_MSO1SEL_HSI           (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKCFG_MSO1SEL_LSE           (0x1UL)                                                      /*!< Value 0x00000001 */
#define RCC_CLKCFG_MSO1SEL_HSE           (0x2UL)                                                      /*!< Value 0x00000002 */
#define RCC_CLKCFG_MSO1SEL_PLL1          (0x3UL)                                                      /*!< Value 0x00000003 */
#define RCC_CLKCFG_MSO1SEL_HSI48         (0x4UL)                                                      /*!< Value 0x00000004 */

#define RCC_CLKCFG_MSO1PRE_OFFSET        (18U)
#define RCC_CLKCFG_MSO1PRE_MASK          (0xFUL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, MSO1PRE))       /*!< Mask  0x003C0000 */
#define RCC_CLKCFG_MSO1PRE_DISABLED      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKCFG_MSO1PRE_BYPASS        (0x1UL)                                                      /*!< Value 0x00000001 */
#define RCC_CLKCFG_MSO1PRE_DIV2          (0x2UL)                                                      /*!< Value 0x00000002 */
#define RCC_CLKCFG_MSO1PRE_DIV3          (0x3UL)                                                      /*!< Value 0x00000003 */
#define RCC_CLKCFG_MSO1PRE_DIV4          (0x4UL)                                                      /*!< Value 0x00000004 */
#define RCC_CLKCFG_MSO1PRE_DIV5          (0x5UL)                                                      /*!< Value 0x00000005 */
#define RCC_CLKCFG_MSO1PRE_DIV6          (0x6UL)                                                      /*!< Value 0x00000006 */
#define RCC_CLKCFG_MSO1PRE_DIV7          (0x7UL)                                                      /*!< Value 0x00000007 */
#define RCC_CLKCFG_MSO1PRE_DIV8          (0x8UL)                                                      /*!< Value 0x00000008 */
#define RCC_CLKCFG_MSO1PRE_DIV9          (0x9UL)                                                      /*!< Value 0x00000009 */
#define RCC_CLKCFG_MSO1PRE_DIV10         (0xAUL)                                                      /*!< Value 0x0000000A */
#define RCC_CLKCFG_MSO1PRE_DIV11         (0xBUL)                                                      /*!< Value 0x0000000B */
#define RCC_CLKCFG_MSO1PRE_DIV12         (0xCUL)                                                      /*!< Value 0x0000000C */
#define RCC_CLKCFG_MSO1PRE_DIV13         (0xDUL)                                                      /*!< Value 0x0000000D */
#define RCC_CLKCFG_MSO1PRE_DIV14         (0xEUL)                                                      /*!< Value 0x0000000E */
#define RCC_CLKCFG_MSO1PRE_DIV15         (0xFUL)                                                      /*!< Value 0x0000000F */

#define RCC_CLKCFG_TIMPRE_OFFSET         (15U)
#define RCC_CLKCFG_TIMPRE_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, TIMPRE))        /*!< Mask  0x00008000 */

#define RCC_CLKCFG_HRTIMSEL_OFFSET       (14U)
#define RCC_CLKCFG_HRTIMSEL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, HRTIMSEL))      /*!< Mask  0x00004000 */
#define RCC_CLKCFG_HRTIMSEL_TMRSRC       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKCFG_HRTIMSEL_CPU1         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKCFG_HSEPRE_OFFSET         (8U)
#define RCC_CLKCFG_HSEPRE_MASK           (0x3FUL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, HSEPRE))       /*!< Mask  0x00003F00 */
#define RCC_CLKCFG_HSEPRE_NOCLK_DEFAULT  (0x00UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKCFG_HSEPRE_NOCLK          (0x01UL)                                                     /*!< Value 0x00000001 */
#define RCC_CLKCFG_HSEPRE_DIV2           (0x02UL)                                                     /*!< Value 0x00000002 */
#define RCC_CLKCFG_HSEPRE_DIV3           (0x03UL)                                                     /*!< Value 0x00000003 */
#define RCC_CLKCFG_HSEPRE_DIV4           (0x04UL)                                                     /*!< Value 0x00000004 */
#define RCC_CLKCFG_HSEPRE_DIV5           (0x05UL)                                                     /*!< Value 0x00000005 */
#define RCC_CLKCFG_HSEPRE_DIV6           (0x06UL)                                                     /*!< Value 0x00000006 */
#define RCC_CLKCFG_HSEPRE_DIV7           (0x07UL)                                                     /*!< Value 0x00000007 */
#define RCC_CLKCFG_HSEPRE_DIV8           (0x08UL)                                                     /*!< Value 0x00000008 */
#define RCC_CLKCFG_HSEPRE_DIV9           (0x09UL)                                                     /*!< Value 0x00000009 */
#define RCC_CLKCFG_HSEPRE_DIV10          (0x0AUL)                                                     /*!< Value 0x0000000A */
#define RCC_CLKCFG_HSEPRE_DIV11          (0x0BUL)                                                     /*!< Value 0x0000000B */
#define RCC_CLKCFG_HSEPRE_DIV12          (0x0CUL)                                                     /*!< Value 0x0000000C */
#define RCC_CLKCFG_HSEPRE_DIV13          (0x0DUL)                                                     /*!< Value 0x0000000D */
#define RCC_CLKCFG_HSEPRE_DIV14          (0x0EUL)                                                     /*!< Value 0x0000000E */
#define RCC_CLKCFG_HSEPRE_DIV15          (0x0FUL)                                                     /*!< Value 0x0000000F */
#define RCC_CLKCFG_HSEPRE_DIV16          (0x10UL)                                                     /*!< Value 0x00000010 */
#define RCC_CLKCFG_HSEPRE_DIV17          (0x11UL)                                                     /*!< Value 0x00000011 */
#define RCC_CLKCFG_HSEPRE_DIV18          (0x12UL)                                                     /*!< Value 0x00000012 */
#define RCC_CLKCFG_HSEPRE_DIV19          (0x13UL)                                                     /*!< Value 0x00000013 */
#define RCC_CLKCFG_HSEPRE_DIV20          (0x14UL)                                                     /*!< Value 0x00000014 */
#define RCC_CLKCFG_HSEPRE_DIV21          (0x15UL)                                                     /*!< Value 0x00000015 */
#define RCC_CLKCFG_HSEPRE_DIV22          (0x16UL)                                                     /*!< Value 0x00000016 */
#define RCC_CLKCFG_HSEPRE_DIV23          (0x17UL)                                                     /*!< Value 0x00000017 */
#define RCC_CLKCFG_HSEPRE_DIV24          (0x18UL)                                                     /*!< Value 0x00000018 */
#define RCC_CLKCFG_HSEPRE_DIV25          (0x19UL)                                                     /*!< Value 0x00000019 */
#define RCC_CLKCFG_HSEPRE_DIV26          (0x1AUL)                                                     /*!< Value 0x0000001A */
#define RCC_CLKCFG_HSEPRE_DIV27          (0x1BUL)                                                     /*!< Value 0x0000001B */
#define RCC_CLKCFG_HSEPRE_DIV28          (0x1CUL)                                                     /*!< Value 0x0000001C */
#define RCC_CLKCFG_HSEPRE_DIV29          (0x1DUL)                                                     /*!< Value 0x0000001D */
#define RCC_CLKCFG_HSEPRE_DIV30          (0x1EUL)                                                     /*!< Value 0x0000001E */
#define RCC_CLKCFG_HSEPRE_DIV31          (0x1FUL)                                                     /*!< Value 0x0000001F */
#define RCC_CLKCFG_HSEPRE_DIV32          (0x20UL)                                                     /*!< Value 0x00000020 */
#define RCC_CLKCFG_HSEPRE_DIV33          (0x21UL)                                                     /*!< Value 0x00000021 */
#define RCC_CLKCFG_HSEPRE_DIV34          (0x22UL)                                                     /*!< Value 0x00000022 */
#define RCC_CLKCFG_HSEPRE_DIV35          (0x23UL)                                                     /*!< Value 0x00000023 */
#define RCC_CLKCFG_HSEPRE_DIV36          (0x24UL)                                                     /*!< Value 0x00000024 */
#define RCC_CLKCFG_HSEPRE_DIV37          (0x25UL)                                                     /*!< Value 0x00000025 */
#define RCC_CLKCFG_HSEPRE_DIV38          (0x26UL)                                                     /*!< Value 0x00000026 */
#define RCC_CLKCFG_HSEPRE_DIV39          (0x27UL)                                                     /*!< Value 0x00000027 */
#define RCC_CLKCFG_HSEPRE_DIV40          (0x28UL)                                                     /*!< Value 0x00000028 */
#define RCC_CLKCFG_HSEPRE_DIV41          (0x29UL)                                                     /*!< Value 0x00000029 */
#define RCC_CLKCFG_HSEPRE_DIV42          (0x2AUL)                                                     /*!< Value 0x0000002A */
#define RCC_CLKCFG_HSEPRE_DIV43          (0x2BUL)                                                     /*!< Value 0x0000002B */
#define RCC_CLKCFG_HSEPRE_DIV44          (0x2CUL)                                                     /*!< Value 0x0000002C */
#define RCC_CLKCFG_HSEPRE_DIV45          (0x2DUL)                                                     /*!< Value 0x0000002D */
#define RCC_CLKCFG_HSEPRE_DIV46          (0x2EUL)                                                     /*!< Value 0x0000002E */
#define RCC_CLKCFG_HSEPRE_DIV47          (0x2FUL)                                                     /*!< Value 0x0000002F */
#define RCC_CLKCFG_HSEPRE_DIV48          (0x30UL)                                                     /*!< Value 0x00000030 */
#define RCC_CLKCFG_HSEPRE_DIV49          (0x31UL)                                                     /*!< Value 0x00000031 */
#define RCC_CLKCFG_HSEPRE_DIV50          (0x32UL)                                                     /*!< Value 0x00000032 */
#define RCC_CLKCFG_HSEPRE_DIV51          (0x33UL)                                                     /*!< Value 0x00000033 */
#define RCC_CLKCFG_HSEPRE_DIV52          (0x34UL)                                                     /*!< Value 0x00000034 */
#define RCC_CLKCFG_HSEPRE_DIV53          (0x35UL)                                                     /*!< Value 0x00000035 */
#define RCC_CLKCFG_HSEPRE_DIV54          (0x36UL)                                                     /*!< Value 0x00000036 */
#define RCC_CLKCFG_HSEPRE_DIV55          (0x37UL)                                                     /*!< Value 0x00000037 */
#define RCC_CLKCFG_HSEPRE_DIV56          (0x38UL)                                                     /*!< Value 0x00000038 */
#define RCC_CLKCFG_HSEPRE_DIV57          (0x39UL)                                                     /*!< Value 0x00000039 */
#define RCC_CLKCFG_HSEPRE_DIV58          (0x3AUL)                                                     /*!< Value 0x0000003A */
#define RCC_CLKCFG_HSEPRE_DIV59          (0x3BUL)                                                     /*!< Value 0x0000003B */
#define RCC_CLKCFG_HSEPRE_DIV60          (0x3CUL)                                                     /*!< Value 0x0000003C */
#define RCC_CLKCFG_HSEPRE_DIV61          (0x3DUL)                                                     /*!< Value 0x0000003D */
#define RCC_CLKCFG_HSEPRE_DIV62          (0x3EUL)                                                     /*!< Value 0x0000003E */
#define RCC_CLKCFG_HSEPRE_DIV63          (0x3FUL)                                                     /*!< Value 0x0000003F */

#define RCC_CLKCFG_KERCLKSYSSTOP_OFFSET  (7U)
#define RCC_CLKCFG_KERCLKSYSSTOP_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, KERCLKSYSSTOP))  /*!< Mask  0x00000080 */
#define RCC_CLKCFG_KERCLKSYSSTOP_HSI     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKCFG_KERCLKSYSSTOP_CSI     (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKCFG_SYSCLKSYSSTOP_OFFSET  (6U)
#define RCC_CLKCFG_SYSCLKSYSSTOP_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, SYSCLKSYSSTOP))  /*!< Mask  0x00000040 */
#define RCC_CLKCFG_SYSCLKSYSSTOP_HSI     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKCFG_SYSCLKSYSSTOP_CSI     (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKCFG_SYSCLKSTATUS_OFFSET   (3U)
#define RCC_CLKCFG_SYSCLKSTATUS_MASK     (0x7UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, SYSCLKSTATUS))   /*!< Mask  0x00000038 */
#define RCC_CLKCFG_SYSCLKSTATUS_HSI      (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKCFG_SYSCLKSTATUS_CSI      (0x1UL)                                                       /*!< Value 0x00000001 */
#define RCC_CLKCFG_SYSCLKSTATUS_HSE      (0x2UL)                                                       /*!< Value 0x00000002 */
#define RCC_CLKCFG_SYSCLKSTATUS_PLL1     (0x3UL)                                                       /*!< Value 0x00000003 */

#define RCC_CLKCFG_SYSCLKSEL_OFFSET      (0U)
#define RCC_CLKCFG_SYSCLKSEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(RCC, CLKCFG, SYSCLKSEL))         /*!< Mask  0x00000007 */
#define RCC_CLKCFG_SYSCLKSEL_HSI         (0x0UL)                                                          /*!< Value 0x00000000 */
#define RCC_CLKCFG_SYSCLKSEL_CSI         (0x1UL)                                                          /*!< Value 0x00000001 */
#define RCC_CLKCFG_SYSCLKSEL_HSE         (0x2UL)                                                          /*!< Value 0x00000002 */
#define RCC_CLKCFG_SYSCLKSEL_PLL1        (0x3UL)                                                          /*!< Value 0x00000003 */

/*!< Domain 1 clock configuration register */
#define RCC_D1CLKCFG_COREPRE_OFFSET  (8U)
#define RCC_D1CLKCFG_COREPRE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(RCC, D1CLKCFG, COREPRE))  /*!< Mask  0x00000F00 */
#define RCC_D1CLKCFG_COREPRE_DIV1    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_D1CLKCFG_COREPRE_DIV2    (0x8UL)                                                   /*!< Value 0x00000008 */
#define RCC_D1CLKCFG_COREPRE_DIV4    (0x9UL)                                                   /*!< Value 0x00000009 */
#define RCC_D1CLKCFG_COREPRE_DIV8    (0xAUL)                                                   /*!< Value 0x0000000A */
#define RCC_D1CLKCFG_COREPRE_DIV16   (0xBUL)                                                   /*!< Value 0x0000000B */
#define RCC_D1CLKCFG_COREPRE_DIV64   (0xCUL)                                                   /*!< Value 0x0000000C */
#define RCC_D1CLKCFG_COREPRE_DIV128  (0xDUL)                                                   /*!< Value 0x0000000D */
#define RCC_D1CLKCFG_COREPRE_DIV256  (0xEUL)                                                   /*!< Value 0x0000000E */
#define RCC_D1CLKCFG_COREPRE_DIV512  (0xFUL)                                                   /*!< Value 0x0000000F */

#define RCC_D1CLKCFG_APB3PRE_OFFSET  (4U)
#define RCC_D1CLKCFG_APB3PRE_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D1CLKCFG, APB3PRE))  /*!< Mask  0x00000070 */
#define RCC_D1CLKCFG_APB3PRE_DIV1    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_D1CLKCFG_APB3PRE_DIV2    (0x4UL)                                                   /*!< Value 0x00000004 */
#define RCC_D1CLKCFG_APB3PRE_DIV4    (0x5UL)                                                   /*!< Value 0x00000005 */
#define RCC_D1CLKCFG_APB3PRE_DIV8    (0x6UL)                                                   /*!< Value 0x00000006 */
#define RCC_D1CLKCFG_APB3PRE_DIV16   (0x7UL)                                                   /*!< Value 0x00000007 */

#define RCC_D1CLKCFG_AHBPRE_OFFSET   (0U)
#define RCC_D1CLKCFG_AHBPRE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(RCC, D1CLKCFG, AHBPRE))   /*!< Mask  0x0000000F */
#define RCC_D1CLKCFG_AHBPRE_DIV1     (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_D1CLKCFG_AHBPRE_DIV2     (0x8UL)                                                   /*!< Value 0x00000008 */
#define RCC_D1CLKCFG_AHBPRE_DIV4     (0x9UL)                                                   /*!< Value 0x00000009 */
#define RCC_D1CLKCFG_AHBPRE_DIV8     (0xAUL)                                                   /*!< Value 0x0000000A */
#define RCC_D1CLKCFG_AHBPRE_DIV16    (0xBUL)                                                   /*!< Value 0x0000000B */
#define RCC_D1CLKCFG_AHBPRE_DIV64    (0xCUL)                                                   /*!< Value 0x0000000C */
#define RCC_D1CLKCFG_AHBPRE_DIV128   (0xDUL)                                                   /*!< Value 0x0000000D */
#define RCC_D1CLKCFG_AHBPRE_DIV256   (0xEUL)                                                   /*!< Value 0x0000000E */
#define RCC_D1CLKCFG_AHBPRE_DIV512   (0xFUL)                                                   /*!< Value 0x0000000F */

/*!< Domain 2 clock configuration register */
#define RCC_D2CLKCFG_APB2PRE_OFFSET  (8U)
#define RCC_D2CLKCFG_APB2PRE_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CLKCFG, APB2PRE))  /*!< Mask  0x00000F00 */
#define RCC_D2CLKCFG_APB2PRE_DIV1    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_D2CLKCFG_APB2PRE_DIV2    (0x4UL)                                                   /*!< Value 0x00000004 */
#define RCC_D2CLKCFG_APB2PRE_DIV4    (0x5UL)                                                   /*!< Value 0x00000005 */
#define RCC_D2CLKCFG_APB2PRE_DIV8    (0x6UL)                                                   /*!< Value 0x00000006 */
#define RCC_D2CLKCFG_APB2PRE_DIV16   (0x7UL)                                                   /*!< Value 0x00000007 */

#define RCC_D2CLKCFG_APB1PRE_OFFSET  (4U)
#define RCC_D2CLKCFG_APB1PRE_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CLKCFG, APB1PRE))  /*!< Mask  0x00000070 */
#define RCC_D2CLKCFG_APB1PRE_DIV1    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_D2CLKCFG_APB1PRE_DIV2    (0x4UL)                                                   /*!< Value 0x00000004 */
#define RCC_D2CLKCFG_APB1PRE_DIV4    (0x5UL)                                                   /*!< Value 0x00000005 */
#define RCC_D2CLKCFG_APB1PRE_DIV8    (0x6UL)                                                   /*!< Value 0x00000006 */
#define RCC_D2CLKCFG_APB1PRE_DIV16   (0x7UL)                                                   /*!< Value 0x00000007 */

/*!< Domain 3 clock configuration register */
#define RCC_D3CLKCFG_APB4PRE_OFFSET  (4U)
#define RCC_D3CLKCFG_APB4PRE_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CLKCFG, APB4PRE))  /*!< Mask  0x00000070 */
#define RCC_D3CLKCFG_APB4PRE_DIV1    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_D3CLKCFG_APB4PRE_DIV2    (0x4UL)                                                   /*!< Value 0x00000004 */
#define RCC_D3CLKCFG_APB4PRE_DIV4    (0x5UL)                                                   /*!< Value 0x00000005 */
#define RCC_D3CLKCFG_APB4PRE_DIV8    (0x6UL)                                                   /*!< Value 0x00000006 */
#define RCC_D3CLKCFG_APB4PRE_DIV16   (0x7UL)                                                   /*!< Value 0x00000007 */

/*!< PLL clock source selection register */
#define RCC_PLLCLKSEL_PLL3PRE_OFFSET   (20U)
#define RCC_PLLCLKSEL_PLL3PRE_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(RCC, PLLCLKSEL, PLL3PRE))  /*!< Mask  0x03F00000 */
#define RCC_PLLCLKSEL_PLL3PRE_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_PLLCLKSEL_PLL3PRE_BYPASS   (0x1UL)                                                     /*!< Value 0x00000001 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV2     (0x2UL)                                                     /*!< Value 0x00000002 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV3     (0x3UL)                                                     /*!< Value 0x00000003 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV4     (0x4UL)                                                     /*!< Value 0x00000004 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV5     (0x5UL)                                                     /*!< Value 0x00000005 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV6     (0x6UL)                                                     /*!< Value 0x00000006 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV7     (0x7UL)                                                     /*!< Value 0x00000007 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV8     (0x8UL)                                                     /*!< Value 0x00000008 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV9     (0x9UL)                                                     /*!< Value 0x00000009 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV10    (0xAUL)                                                     /*!< Value 0x0000000A */
#define RCC_PLLCLKSEL_PLL3PRE_DIV11    (0xBUL)                                                     /*!< Value 0x0000000B */
#define RCC_PLLCLKSEL_PLL3PRE_DIV12    (0xCUL)                                                     /*!< Value 0x0000000C */
#define RCC_PLLCLKSEL_PLL3PRE_DIV13    (0xDUL)                                                     /*!< Value 0x0000000D */
#define RCC_PLLCLKSEL_PLL3PRE_DIV14    (0xEUL)                                                     /*!< Value 0x0000000E */
#define RCC_PLLCLKSEL_PLL3PRE_DIV15    (0xFUL)                                                     /*!< Value 0x0000000F */
#define RCC_PLLCLKSEL_PLL3PRE_DIV16    (0x10UL)                                                    /*!< Value 0x00000010 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV17    (0x11UL)                                                    /*!< Value 0x00000011 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV18    (0x12UL)                                                    /*!< Value 0x00000012 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV19    (0x13UL)                                                    /*!< Value 0x00000013 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV20    (0x14UL)                                                    /*!< Value 0x00000014 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV21    (0x15UL)                                                    /*!< Value 0x00000015 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV22    (0x16UL)                                                    /*!< Value 0x00000016 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV23    (0x17UL)                                                    /*!< Value 0x00000017 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV24    (0x18UL)                                                    /*!< Value 0x00000018 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV25    (0x19UL)                                                    /*!< Value 0x00000019 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV26    (0x1AUL)                                                    /*!< Value 0x0000001A */
#define RCC_PLLCLKSEL_PLL3PRE_DIV27    (0x1BUL)                                                    /*!< Value 0x0000001B */
#define RCC_PLLCLKSEL_PLL3PRE_DIV28    (0x1CUL)                                                    /*!< Value 0x0000001C */
#define RCC_PLLCLKSEL_PLL3PRE_DIV29    (0x1DUL)                                                    /*!< Value 0x0000001D */
#define RCC_PLLCLKSEL_PLL3PRE_DIV30    (0x1EUL)                                                    /*!< Value 0x0000001E */
#define RCC_PLLCLKSEL_PLL3PRE_DIV31    (0x1FUL)                                                    /*!< Value 0x0000001F */
#define RCC_PLLCLKSEL_PLL3PRE_DIV32    (0x20UL)                                                    /*!< Value 0x00000020 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV33    (0x21UL)                                                    /*!< Value 0x00000021 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV34    (0x22UL)                                                    /*!< Value 0x00000022 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV35    (0x23UL)                                                    /*!< Value 0x00000023 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV36    (0x24UL)                                                    /*!< Value 0x00000024 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV37    (0x25UL)                                                    /*!< Value 0x00000025 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV38    (0x26UL)                                                    /*!< Value 0x00000026 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV39    (0x27UL)                                                    /*!< Value 0x00000027 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV40    (0x28UL)                                                    /*!< Value 0x00000028 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV41    (0x29UL)                                                    /*!< Value 0x00000029 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV42    (0x2AUL)                                                    /*!< Value 0x0000002A */
#define RCC_PLLCLKSEL_PLL3PRE_DIV43    (0x2BUL)                                                    /*!< Value 0x0000002B */
#define RCC_PLLCLKSEL_PLL3PRE_DIV44    (0x2CUL)                                                    /*!< Value 0x0000002C */
#define RCC_PLLCLKSEL_PLL3PRE_DIV45    (0x2DUL)                                                    /*!< Value 0x0000002D */
#define RCC_PLLCLKSEL_PLL3PRE_DIV46    (0x2EUL)                                                    /*!< Value 0x0000002E */
#define RCC_PLLCLKSEL_PLL3PRE_DIV47    (0x2FUL)                                                    /*!< Value 0x0000002F */
#define RCC_PLLCLKSEL_PLL3PRE_DIV48    (0x30UL)                                                    /*!< Value 0x00000030 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV49    (0x31UL)                                                    /*!< Value 0x00000031 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV50    (0x32UL)                                                    /*!< Value 0x00000032 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV51    (0x33UL)                                                    /*!< Value 0x00000033 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV52    (0x34UL)                                                    /*!< Value 0x00000034 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV53    (0x35UL)                                                    /*!< Value 0x00000035 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV54    (0x36UL)                                                    /*!< Value 0x00000036 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV55    (0x37UL)                                                    /*!< Value 0x00000037 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV56    (0x38UL)                                                    /*!< Value 0x00000038 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV57    (0x39UL)                                                    /*!< Value 0x00000039 */
#define RCC_PLLCLKSEL_PLL3PRE_DIV58    (0x3AUL)                                                    /*!< Value 0x0000003A */
#define RCC_PLLCLKSEL_PLL3PRE_DIV59    (0x3BUL)                                                    /*!< Value 0x0000003B */
#define RCC_PLLCLKSEL_PLL3PRE_DIV60    (0x3CUL)                                                    /*!< Value 0x0000003C */
#define RCC_PLLCLKSEL_PLL3PRE_DIV61    (0x3DUL)                                                    /*!< Value 0x0000003D */
#define RCC_PLLCLKSEL_PLL3PRE_DIV62    (0x3EUL)                                                    /*!< Value 0x0000003E */
#define RCC_PLLCLKSEL_PLL3PRE_DIV63    (0x3FUL)                                                    /*!< Value 0x0000003F */

#define RCC_PLLCLKSEL_PLL2PRE_OFFSET   (12U)
#define RCC_PLLCLKSEL_PLL2PRE_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(RCC, PLLCLKSEL, PLL2PRE))  /*!< Mask  0x0003F000 */
#define RCC_PLLCLKSEL_PLL2PRE_DISABLE  (0x00UL)                                                    /*!< Value 0x00000000 */
#define RCC_PLLCLKSEL_PLL2PRE_BYPASS   (0x01UL)                                                    /*!< Value 0x00000001 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV2     (0x02UL)                                                    /*!< Value 0x00000002 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV3     (0x03UL)                                                    /*!< Value 0x00000003 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV4     (0x04UL)                                                    /*!< Value 0x00000004 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV5     (0x05UL)                                                    /*!< Value 0x00000005 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV6     (0x06UL)                                                    /*!< Value 0x00000006 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV7     (0x07UL)                                                    /*!< Value 0x00000007 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV8     (0x08UL)                                                    /*!< Value 0x00000008 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV9     (0x09UL)                                                    /*!< Value 0x00000009 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV10    (0x0AUL)                                                    /*!< Value 0x0000000A */
#define RCC_PLLCLKSEL_PLL2PRE_DIV11    (0x0BUL)                                                    /*!< Value 0x0000000B */
#define RCC_PLLCLKSEL_PLL2PRE_DIV12    (0x0CUL)                                                    /*!< Value 0x0000000C */
#define RCC_PLLCLKSEL_PLL2PRE_DIV13    (0x0DUL)                                                    /*!< Value 0x0000000D */
#define RCC_PLLCLKSEL_PLL2PRE_DIV14    (0x0EUL)                                                    /*!< Value 0x0000000E */
#define RCC_PLLCLKSEL_PLL2PRE_DIV15    (0x0FUL)                                                    /*!< Value 0x0000000F */
#define RCC_PLLCLKSEL_PLL2PRE_DIV16    (0x10UL)                                                    /*!< Value 0x00000010 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV17    (0x11UL)                                                    /*!< Value 0x00000011 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV18    (0x12UL)                                                    /*!< Value 0x00000012 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV19    (0x13UL)                                                    /*!< Value 0x00000013 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV20    (0x14UL)                                                    /*!< Value 0x00000014 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV21    (0x15UL)                                                    /*!< Value 0x00000015 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV22    (0x16UL)                                                    /*!< Value 0x00000016 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV23    (0x17UL)                                                    /*!< Value 0x00000017 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV24    (0x18UL)                                                    /*!< Value 0x00000018 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV25    (0x19UL)                                                    /*!< Value 0x00000019 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV26    (0x1AUL)                                                    /*!< Value 0x0000001A */
#define RCC_PLLCLKSEL_PLL2PRE_DIV27    (0x1BUL)                                                    /*!< Value 0x0000001B */
#define RCC_PLLCLKSEL_PLL2PRE_DIV28    (0x1CUL)                                                    /*!< Value 0x0000001C */
#define RCC_PLLCLKSEL_PLL2PRE_DIV29    (0x1DUL)                                                    /*!< Value 0x0000001D */
#define RCC_PLLCLKSEL_PLL2PRE_DIV30    (0x1EUL)                                                    /*!< Value 0x0000001E */
#define RCC_PLLCLKSEL_PLL2PRE_DIV31    (0x1FUL)                                                    /*!< Value 0x0000001F */
#define RCC_PLLCLKSEL_PLL2PRE_DIV32    (0x20UL)                                                    /*!< Value 0x00000020 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV33    (0x21UL)                                                    /*!< Value 0x00000021 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV34    (0x22UL)                                                    /*!< Value 0x00000022 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV35    (0x23UL)                                                    /*!< Value 0x00000023 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV36    (0x24UL)                                                    /*!< Value 0x00000024 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV37    (0x25UL)                                                    /*!< Value 0x00000025 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV38    (0x26UL)                                                    /*!< Value 0x00000026 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV39    (0x27UL)                                                    /*!< Value 0x00000027 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV40    (0x28UL)                                                    /*!< Value 0x00000028 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV41    (0x29UL)                                                    /*!< Value 0x00000029 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV42    (0x2AUL)                                                    /*!< Value 0x0000002A */
#define RCC_PLLCLKSEL_PLL2PRE_DIV43    (0x2BUL)                                                    /*!< Value 0x0000002B */
#define RCC_PLLCLKSEL_PLL2PRE_DIV44    (0x2CUL)                                                    /*!< Value 0x0000002C */
#define RCC_PLLCLKSEL_PLL2PRE_DIV45    (0x2DUL)                                                    /*!< Value 0x0000002D */
#define RCC_PLLCLKSEL_PLL2PRE_DIV46    (0x2EUL)                                                    /*!< Value 0x0000002E */
#define RCC_PLLCLKSEL_PLL2PRE_DIV47    (0x2FUL)                                                    /*!< Value 0x0000002F */
#define RCC_PLLCLKSEL_PLL2PRE_DIV48    (0x30UL)                                                    /*!< Value 0x00000030 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV49    (0x31UL)                                                    /*!< Value 0x00000031 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV50    (0x32UL)                                                    /*!< Value 0x00000032 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV51    (0x33UL)                                                    /*!< Value 0x00000033 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV52    (0x34UL)                                                    /*!< Value 0x00000034 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV53    (0x35UL)                                                    /*!< Value 0x00000035 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV54    (0x36UL)                                                    /*!< Value 0x00000036 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV55    (0x37UL)                                                    /*!< Value 0x00000037 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV56    (0x38UL)                                                    /*!< Value 0x00000038 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV57    (0x39UL)                                                    /*!< Value 0x00000039 */
#define RCC_PLLCLKSEL_PLL2PRE_DIV58    (0x3AUL)                                                    /*!< Value 0x0000003A */
#define RCC_PLLCLKSEL_PLL2PRE_DIV59    (0x3BUL)                                                    /*!< Value 0x0000003B */
#define RCC_PLLCLKSEL_PLL2PRE_DIV60    (0x3CUL)                                                    /*!< Value 0x0000003C */
#define RCC_PLLCLKSEL_PLL2PRE_DIV61    (0x3DUL)                                                    /*!< Value 0x0000003D */
#define RCC_PLLCLKSEL_PLL2PRE_DIV62    (0x3EUL)                                                    /*!< Value 0x0000003E */
#define RCC_PLLCLKSEL_PLL2PRE_DIV63    (0x3FUL)                                                    /*!< Value 0x0000003F */

#define RCC_PLLCLKSEL_PLL1PRE_OFFSET   (4U)
#define RCC_PLLCLKSEL_PLL1PRE_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(RCC, PLLCLKSEL, PLL1PRE))  /*!< Mask  0x000003F0 */
#define RCC_PLLCLKSEL_PLL1PRE_DISABLE  (0x00UL)                                                    /*!< Value 0x00000000 */
#define RCC_PLLCLKSEL_PLL1PRE_BYPASS   (0x01UL)                                                    /*!< Value 0x00000001 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV2     (0x02UL)                                                    /*!< Value 0x00000002 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV3     (0x03UL)                                                    /*!< Value 0x00000003 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV4     (0x04UL)                                                    /*!< Value 0x00000004 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV5     (0x05UL)                                                    /*!< Value 0x00000005 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV6     (0x06UL)                                                    /*!< Value 0x00000006 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV7     (0x07UL)                                                    /*!< Value 0x00000007 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV8     (0x08UL)                                                    /*!< Value 0x00000008 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV9     (0x09UL)                                                    /*!< Value 0x00000009 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV10    (0x0AUL)                                                    /*!< Value 0x0000000A */
#define RCC_PLLCLKSEL_PLL1PRE_DIV11    (0x0BUL)                                                    /*!< Value 0x0000000B */
#define RCC_PLLCLKSEL_PLL1PRE_DIV12    (0x0CUL)                                                    /*!< Value 0x0000000C */
#define RCC_PLLCLKSEL_PLL1PRE_DIV13    (0x0DUL)                                                    /*!< Value 0x0000000D */
#define RCC_PLLCLKSEL_PLL1PRE_DIV14    (0x0EUL)                                                    /*!< Value 0x0000000E */
#define RCC_PLLCLKSEL_PLL1PRE_DIV15    (0x0FUL)                                                    /*!< Value 0x0000000F */
#define RCC_PLLCLKSEL_PLL1PRE_DIV16    (0x10UL)                                                    /*!< Value 0x00000010 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV17    (0x11UL)                                                    /*!< Value 0x00000011 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV18    (0x12UL)                                                    /*!< Value 0x00000012 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV19    (0x13UL)                                                    /*!< Value 0x00000013 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV20    (0x14UL)                                                    /*!< Value 0x00000014 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV21    (0x15UL)                                                    /*!< Value 0x00000015 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV22    (0x16UL)                                                    /*!< Value 0x00000016 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV23    (0x17UL)                                                    /*!< Value 0x00000017 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV24    (0x18UL)                                                    /*!< Value 0x00000018 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV25    (0x19UL)                                                    /*!< Value 0x00000019 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV26    (0x1AUL)                                                    /*!< Value 0x0000001A */
#define RCC_PLLCLKSEL_PLL1PRE_DIV27    (0x1BUL)                                                    /*!< Value 0x0000001B */
#define RCC_PLLCLKSEL_PLL1PRE_DIV28    (0x1CUL)                                                    /*!< Value 0x0000001C */
#define RCC_PLLCLKSEL_PLL1PRE_DIV29    (0x1DUL)                                                    /*!< Value 0x0000001D */
#define RCC_PLLCLKSEL_PLL1PRE_DIV30    (0x1EUL)                                                    /*!< Value 0x0000001E */
#define RCC_PLLCLKSEL_PLL1PRE_DIV31    (0x1FUL)                                                    /*!< Value 0x0000001F */
#define RCC_PLLCLKSEL_PLL1PRE_DIV32    (0x20UL)                                                    /*!< Value 0x00000020 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV33    (0x21UL)                                                    /*!< Value 0x00000021 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV34    (0x22UL)                                                    /*!< Value 0x00000022 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV35    (0x23UL)                                                    /*!< Value 0x00000023 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV36    (0x24UL)                                                    /*!< Value 0x00000024 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV37    (0x25UL)                                                    /*!< Value 0x00000025 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV38    (0x26UL)                                                    /*!< Value 0x00000026 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV39    (0x27UL)                                                    /*!< Value 0x00000027 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV40    (0x28UL)                                                    /*!< Value 0x00000028 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV41    (0x29UL)                                                    /*!< Value 0x00000029 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV42    (0x2AUL)                                                    /*!< Value 0x0000002A */
#define RCC_PLLCLKSEL_PLL1PRE_DIV43    (0x2BUL)                                                    /*!< Value 0x0000002B */
#define RCC_PLLCLKSEL_PLL1PRE_DIV44    (0x2CUL)                                                    /*!< Value 0x0000002C */
#define RCC_PLLCLKSEL_PLL1PRE_DIV45    (0x2DUL)                                                    /*!< Value 0x0000002D */
#define RCC_PLLCLKSEL_PLL1PRE_DIV46    (0x2EUL)                                                    /*!< Value 0x0000002E */
#define RCC_PLLCLKSEL_PLL1PRE_DIV47    (0x2FUL)                                                    /*!< Value 0x0000002F */
#define RCC_PLLCLKSEL_PLL1PRE_DIV48    (0x30UL)                                                    /*!< Value 0x00000030 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV49    (0x31UL)                                                    /*!< Value 0x00000031 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV50    (0x32UL)                                                    /*!< Value 0x00000032 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV51    (0x33UL)                                                    /*!< Value 0x00000033 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV52    (0x34UL)                                                    /*!< Value 0x00000034 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV53    (0x35UL)                                                    /*!< Value 0x00000035 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV54    (0x36UL)                                                    /*!< Value 0x00000036 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV55    (0x37UL)                                                    /*!< Value 0x00000037 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV56    (0x38UL)                                                    /*!< Value 0x00000038 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV57    (0x39UL)                                                    /*!< Value 0x00000039 */
#define RCC_PLLCLKSEL_PLL1PRE_DIV58    (0x3AUL)                                                    /*!< Value 0x0000003A */
#define RCC_PLLCLKSEL_PLL1PRE_DIV59    (0x3BUL)                                                    /*!< Value 0x0000003B */
#define RCC_PLLCLKSEL_PLL1PRE_DIV60    (0x3CUL)                                                    /*!< Value 0x0000003C */
#define RCC_PLLCLKSEL_PLL1PRE_DIV61    (0x3DUL)                                                    /*!< Value 0x0000003D */
#define RCC_PLLCLKSEL_PLL1PRE_DIV62    (0x3EUL)                                                    /*!< Value 0x0000003E */
#define RCC_PLLCLKSEL_PLL1PRE_DIV63    (0x3FUL)                                                    /*!< Value 0x0000003F */

#define RCC_PLLCLKSEL_PLLSRC_OFFSET    (0U)
#define RCC_PLLCLKSEL_PLLSRC_MASK      (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCLKSEL, PLLSRC))    /*!< Mask  0x00000003 */
#define RCC_PLLCLKSEL_PLLSRC_HSI       (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_PLLCLKSEL_PLLSRC_CSI       (0x1UL)                                                     /*!< Value 0x00000001 */
#define RCC_PLLCLKSEL_PLLSRC_HSE       (0x2UL)                                                     /*!< Value 0x00000002 */
#define RCC_PLLCLKSEL_PLLSRC_NOCLK     (0x3UL)                                                     /*!< Value 0x00000003 */

/*!< RCC PLL configuration register */
#define RCC_PLLCFG_PLL3DIVREN_OFFSET      (24U)
#define RCC_PLLCFG_PLL3DIVREN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3DIVREN))     /*!< Mask  0x01000000 */
#define RCC_PLLCFG_PLL3DIVREN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3DIVREN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL3DIVQEN_OFFSET      (23U)
#define RCC_PLLCFG_PLL3DIVQEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3DIVQEN))     /*!< Mask  0x00800000 */
#define RCC_PLLCFG_PLL3DIVQEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3DIVQEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL3DIVPEN_OFFSET      (22U)
#define RCC_PLLCFG_PLL3DIVPEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3DIVPEN))     /*!< Mask  0x00400000 */
#define RCC_PLLCFG_PLL3DIVPEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3DIVPEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL2DIVREN_OFFSET      (21U)
#define RCC_PLLCFG_PLL2DIVREN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL2DIVREN))     /*!< Mask  0x00200000 */
#define RCC_PLLCFG_PLL2DIVREN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL2DIVREN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL2DIVQEN_OFFSET      (20U)
#define RCC_PLLCFG_PLL2DIVQEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL2DIVQEN))     /*!< Mask  0x00100000 */
#define RCC_PLLCFG_PLL2DIVQEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL2DIVQEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL2DIVPEN_OFFSET      (19U)
#define RCC_PLLCFG_PLL2DIVPEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL2DIVPEN))     /*!< Mask  0x00080000 */
#define RCC_PLLCFG_PLL2DIVPEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL2DIVPEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL1DIVREN_OFFSET      (18U)
#define RCC_PLLCFG_PLL1DIVREN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL1DIVREN))     /*!< Mask  0x00040000 */
#define RCC_PLLCFG_PLL1DIVREN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL1DIVREN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL1DIVQEN_OFFSET      (17U)
#define RCC_PLLCFG_PLL1DIVQEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL1DIVQEN))     /*!< Mask  0x00020000 */
#define RCC_PLLCFG_PLL1DIVQEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL1DIVQEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL1DIVPEN_OFFSET      (16U)
#define RCC_PLLCFG_PLL1DIVPEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL1DIVPEN))     /*!< Mask  0x00010000 */
#define RCC_PLLCFG_PLL1DIVPEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL1DIVPEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL3FREQRANGE_OFFSET   (10U)
#define RCC_PLLCFG_PLL3FREQRANGE_MASK     (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3FREQRANGE))  /*!< Mask  0x00000C00 */
#define RCC_PLLCFG_PLL3FREQRANGE_1_2MHZ   (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3FREQRANGE_2_4MHZ   (0x1UL)                                                       /*!< Value 0x00000001 */
#define RCC_PLLCFG_PLL3FREQRANGE_4_8MHZ   (0x2UL)                                                       /*!< Value 0x00000002 */
#define RCC_PLLCFG_PLL3FREQRANGE_8_16MHZ  (0x3UL)                                                       /*!< Value 0x00000003 */

#define RCC_PLLCFG_PLL3VCOSEL_OFFSET      (9U)
#define RCC_PLLCFG_PLL3VCOSEL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3VCOSEL))     /*!< Mask  0x00000200 */
#define RCC_PLLCFG_PLL3VCOSEL_WIDE        (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3VCOSEL_MEDIUM      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL3FRACEN_OFFSET      (8U)
#define RCC_PLLCFG_PLL3FRACEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3FRACEN))     /*!< Mask  0x00000100 */
#define RCC_PLLCFG_PLL3FRACEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3FRACEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL2FREQRANGE_OFFSET   (6U)
#define RCC_PLLCFG_PLL2FREQRANGE_MASK     (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL2FREQRANGE))  /*!< Mask  0x000000C0 */
#define RCC_PLLCFG_PLL2FREQRANGE_1_2MHZ   (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL2FREQRANGE_2_4MHZ   (0x1UL)                                                       /*!< Value 0x00000001 */
#define RCC_PLLCFG_PLL2FREQRANGE_4_8MHZ   (0x2UL)                                                       /*!< Value 0x00000002 */
#define RCC_PLLCFG_PLL2FREQRANGE_8_16MHZ  (0x3UL)                                                       /*!< Value 0x00000003 */

#define RCC_PLLCFG_PLL2VCOSEL_OFFSET      (5U)
#define RCC_PLLCFG_PLL2VCOSEL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL2VCOSEL))     /*!< Mask  0x00000020 */
#define RCC_PLLCFG_PLL2VCOSEL_WIDE        (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL2VCOSEL_MEDIUM      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL2FRACEN_OFFSET      (4U)
#define RCC_PLLCFG_PLL2FRACEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL2FRACEN))     /*!< Mask  0x00000010 */
#define RCC_PLLCFG_PLL2FRACEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL2FRACEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL3FREQRANGE_OFFSET   (2U)
#define RCC_PLLCFG_PLL3FREQRANGE_MASK     (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3FREQRANGE))  /*!< Mask  0x0000000C */
#define RCC_PLLCFG_PLL3FREQRANGE_1_2MHZ   (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3FREQRANGE_2_4MHZ   (0x1UL)                                                       /*!< Value 0x00000001 */
#define RCC_PLLCFG_PLL3FREQRANGE_4_8MHZ   (0x2UL)                                                       /*!< Value 0x00000002 */
#define RCC_PLLCFG_PLL3FREQRANGE_8_16MHZ  (0x3UL)                                                       /*!< Value 0x00000003 */

#define RCC_PLLCFG_PLL3VCOSEL_OFFSET      (1U)
#define RCC_PLLCFG_PLL3VCOSEL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3VCOSEL))     /*!< Mask  0x00000002 */
#define RCC_PLLCFG_PLL3VCOSEL_WIDE        (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3VCOSEL_MEDIUM      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_PLLCFG_PLL3FRACEN_OFFSET      (0U)
#define RCC_PLLCFG_PLL3FRACEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFG, PLL3FRACEN))     /*!< Mask  0x00000001 */
#define RCC_PLLCFG_PLL3FRACEN_DISABLE     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_PLLCFG_PLL3FRACEN_ENABLE      (0x1UL)                                                       /*!< Value 0x00000001 */

/*!< RCC PLL divider configuration register (Macros valid for registers PLL1DIV, PLL2DIV and PLL3DIV) */
#define RCC_PLLDIV_DIVR_OFFSET  (24U)
#define RCC_PLLDIV_DIVR_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, PLLDIV, DIVR))   /*!< Mask  0x7F000000 */
#define RCC_PLLDIV_DIVR_DIV1    (0x00UL)                                               /*!< Value 0x00000000 */
#define RCC_PLLDIV_DIVR_DIV2    (0x01UL)                                               /*!< Value 0x00000001 */
#define RCC_PLLDIV_DIVR_DIV3    (0x02UL)                                               /*!< Value 0x00000002 */
#define RCC_PLLDIV_DIVR_DIV4    (0x03UL)                                               /*!< Value 0x00000003 */
#define RCC_PLLDIV_DIVR_DIV5    (0x04UL)                                               /*!< Value 0x00000004 */
#define RCC_PLLDIV_DIVR_DIV6    (0x05UL)                                               /*!< Value 0x00000005 */
#define RCC_PLLDIV_DIVR_DIV7    (0x06UL)                                               /*!< Value 0x00000006 */
#define RCC_PLLDIV_DIVR_DIV8    (0x07UL)                                               /*!< Value 0x00000007 */
#define RCC_PLLDIV_DIVR_DIV9    (0x08UL)                                               /*!< Value 0x00000008 */
#define RCC_PLLDIV_DIVR_DIV10   (0x09UL)                                               /*!< Value 0x00000009 */
#define RCC_PLLDIV_DIVR_DIV11   (0x0AUL)                                               /*!< Value 0x0000000A */
#define RCC_PLLDIV_DIVR_DIV12   (0x0BUL)                                               /*!< Value 0x0000000B */
#define RCC_PLLDIV_DIVR_DIV13   (0x0CUL)                                               /*!< Value 0x0000000C */
#define RCC_PLLDIV_DIVR_DIV14   (0x0DUL)                                               /*!< Value 0x0000000D */
#define RCC_PLLDIV_DIVR_DIV15   (0x0EUL)                                               /*!< Value 0x0000000E */
#define RCC_PLLDIV_DIVR_DIV16   (0x0FUL)                                               /*!< Value 0x0000000F */
#define RCC_PLLDIV_DIVR_DIV17   (0x10UL)                                               /*!< Value 0x00000010 */
#define RCC_PLLDIV_DIVR_DIV18   (0x11UL)                                               /*!< Value 0x00000011 */
#define RCC_PLLDIV_DIVR_DIV19   (0x12UL)                                               /*!< Value 0x00000012 */
#define RCC_PLLDIV_DIVR_DIV20   (0x13UL)                                               /*!< Value 0x00000013 */
#define RCC_PLLDIV_DIVR_DIV21   (0x14UL)                                               /*!< Value 0x00000014 */
#define RCC_PLLDIV_DIVR_DIV22   (0x15UL)                                               /*!< Value 0x00000015 */
#define RCC_PLLDIV_DIVR_DIV23   (0x16UL)                                               /*!< Value 0x00000016 */
#define RCC_PLLDIV_DIVR_DIV24   (0x17UL)                                               /*!< Value 0x00000017 */
#define RCC_PLLDIV_DIVR_DIV25   (0x18UL)                                               /*!< Value 0x00000018 */
#define RCC_PLLDIV_DIVR_DIV26   (0x19UL)                                               /*!< Value 0x00000019 */
#define RCC_PLLDIV_DIVR_DIV27   (0x1AUL)                                               /*!< Value 0x0000001A */
#define RCC_PLLDIV_DIVR_DIV28   (0x1BUL)                                               /*!< Value 0x0000001B */
#define RCC_PLLDIV_DIVR_DIV29   (0x1CUL)                                               /*!< Value 0x0000001C */
#define RCC_PLLDIV_DIVR_DIV30   (0x1DUL)                                               /*!< Value 0x0000001D */
#define RCC_PLLDIV_DIVR_DIV31   (0x1EUL)                                               /*!< Value 0x0000001E */
#define RCC_PLLDIV_DIVR_DIV32   (0x1FUL)                                               /*!< Value 0x0000001F */
#define RCC_PLLDIV_DIVR_DIV33   (0x20UL)                                               /*!< Value 0x00000020 */
#define RCC_PLLDIV_DIVR_DIV34   (0x21UL)                                               /*!< Value 0x00000021 */
#define RCC_PLLDIV_DIVR_DIV35   (0x22UL)                                               /*!< Value 0x00000022 */
#define RCC_PLLDIV_DIVR_DIV36   (0x23UL)                                               /*!< Value 0x00000023 */
#define RCC_PLLDIV_DIVR_DIV37   (0x24UL)                                               /*!< Value 0x00000024 */
#define RCC_PLLDIV_DIVR_DIV38   (0x25UL)                                               /*!< Value 0x00000025 */
#define RCC_PLLDIV_DIVR_DIV39   (0x26UL)                                               /*!< Value 0x00000026 */
#define RCC_PLLDIV_DIVR_DIV40   (0x27UL)                                               /*!< Value 0x00000027 */
#define RCC_PLLDIV_DIVR_DIV41   (0x28UL)                                               /*!< Value 0x00000028 */
#define RCC_PLLDIV_DIVR_DIV42   (0x29UL)                                               /*!< Value 0x00000029 */
#define RCC_PLLDIV_DIVR_DIV43   (0x2AUL)                                               /*!< Value 0x0000002A */
#define RCC_PLLDIV_DIVR_DIV44   (0x2BUL)                                               /*!< Value 0x0000002B */
#define RCC_PLLDIV_DIVR_DIV45   (0x2CUL)                                               /*!< Value 0x0000002C */
#define RCC_PLLDIV_DIVR_DIV46   (0x2DUL)                                               /*!< Value 0x0000002D */
#define RCC_PLLDIV_DIVR_DIV47   (0x2EUL)                                               /*!< Value 0x0000002E */
#define RCC_PLLDIV_DIVR_DIV48   (0x2FUL)                                               /*!< Value 0x0000002F */
#define RCC_PLLDIV_DIVR_DIV49   (0x30UL)                                               /*!< Value 0x00000030 */
#define RCC_PLLDIV_DIVR_DIV50   (0x31UL)                                               /*!< Value 0x00000031 */
#define RCC_PLLDIV_DIVR_DIV51   (0x32UL)                                               /*!< Value 0x00000032 */
#define RCC_PLLDIV_DIVR_DIV52   (0x33UL)                                               /*!< Value 0x00000033 */
#define RCC_PLLDIV_DIVR_DIV53   (0x34UL)                                               /*!< Value 0x00000034 */
#define RCC_PLLDIV_DIVR_DIV54   (0x35UL)                                               /*!< Value 0x00000035 */
#define RCC_PLLDIV_DIVR_DIV55   (0x36UL)                                               /*!< Value 0x00000036 */
#define RCC_PLLDIV_DIVR_DIV56   (0x37UL)                                               /*!< Value 0x00000037 */
#define RCC_PLLDIV_DIVR_DIV57   (0x38UL)                                               /*!< Value 0x00000038 */
#define RCC_PLLDIV_DIVR_DIV58   (0x39UL)                                               /*!< Value 0x00000039 */
#define RCC_PLLDIV_DIVR_DIV59   (0x3AUL)                                               /*!< Value 0x0000003A */
#define RCC_PLLDIV_DIVR_DIV60   (0x3BUL)                                               /*!< Value 0x0000003B */
#define RCC_PLLDIV_DIVR_DIV61   (0x3CUL)                                               /*!< Value 0x0000003C */
#define RCC_PLLDIV_DIVR_DIV62   (0x3DUL)                                               /*!< Value 0x0000003D */
#define RCC_PLLDIV_DIVR_DIV63   (0x3EUL)                                               /*!< Value 0x0000003E */
#define RCC_PLLDIV_DIVR_DIV64   (0x3FUL)                                               /*!< Value 0x0000003F */
#define RCC_PLLDIV_DIVR_DIV65   (0x40UL)                                               /*!< Value 0x00000040 */
#define RCC_PLLDIV_DIVR_DIV66   (0x41UL)                                               /*!< Value 0x00000041 */
#define RCC_PLLDIV_DIVR_DIV67   (0x42UL)                                               /*!< Value 0x00000042 */
#define RCC_PLLDIV_DIVR_DIV68   (0x43UL)                                               /*!< Value 0x00000043 */
#define RCC_PLLDIV_DIVR_DIV69   (0x44UL)                                               /*!< Value 0x00000044 */
#define RCC_PLLDIV_DIVR_DIV70   (0x45UL)                                               /*!< Value 0x00000045 */
#define RCC_PLLDIV_DIVR_DIV71   (0x46UL)                                               /*!< Value 0x00000046 */
#define RCC_PLLDIV_DIVR_DIV72   (0x47UL)                                               /*!< Value 0x00000047 */
#define RCC_PLLDIV_DIVR_DIV73   (0x48UL)                                               /*!< Value 0x00000048 */
#define RCC_PLLDIV_DIVR_DIV74   (0x49UL)                                               /*!< Value 0x00000049 */
#define RCC_PLLDIV_DIVR_DIV75   (0x4AUL)                                               /*!< Value 0x0000004A */
#define RCC_PLLDIV_DIVR_DIV76   (0x4BUL)                                               /*!< Value 0x0000004B */
#define RCC_PLLDIV_DIVR_DIV77   (0x4CUL)                                               /*!< Value 0x0000004C */
#define RCC_PLLDIV_DIVR_DIV78   (0x4DUL)                                               /*!< Value 0x0000004D */
#define RCC_PLLDIV_DIVR_DIV79   (0x4EUL)                                               /*!< Value 0x0000004E */
#define RCC_PLLDIV_DIVR_DIV80   (0x4FUL)                                               /*!< Value 0x0000004F */
#define RCC_PLLDIV_DIVR_DIV81   (0x50UL)                                               /*!< Value 0x00000050 */
#define RCC_PLLDIV_DIVR_DIV82   (0x51UL)                                               /*!< Value 0x00000051 */
#define RCC_PLLDIV_DIVR_DIV83   (0x52UL)                                               /*!< Value 0x00000052 */
#define RCC_PLLDIV_DIVR_DIV84   (0x53UL)                                               /*!< Value 0x00000053 */
#define RCC_PLLDIV_DIVR_DIV85   (0x54UL)                                               /*!< Value 0x00000054 */
#define RCC_PLLDIV_DIVR_DIV86   (0x55UL)                                               /*!< Value 0x00000055 */
#define RCC_PLLDIV_DIVR_DIV87   (0x56UL)                                               /*!< Value 0x00000056 */
#define RCC_PLLDIV_DIVR_DIV88   (0x57UL)                                               /*!< Value 0x00000057 */
#define RCC_PLLDIV_DIVR_DIV89   (0x58UL)                                               /*!< Value 0x00000058 */
#define RCC_PLLDIV_DIVR_DIV90   (0x59UL)                                               /*!< Value 0x00000059 */
#define RCC_PLLDIV_DIVR_DIV91   (0x5AUL)                                               /*!< Value 0x0000005A */
#define RCC_PLLDIV_DIVR_DIV92   (0x5BUL)                                               /*!< Value 0x0000005B */
#define RCC_PLLDIV_DIVR_DIV93   (0x5CUL)                                               /*!< Value 0x0000005C */
#define RCC_PLLDIV_DIVR_DIV94   (0x5DUL)                                               /*!< Value 0x0000005D */
#define RCC_PLLDIV_DIVR_DIV95   (0x5EUL)                                               /*!< Value 0x0000005E */
#define RCC_PLLDIV_DIVR_DIV96   (0x5FUL)                                               /*!< Value 0x0000005F */
#define RCC_PLLDIV_DIVR_DIV97   (0x60UL)                                               /*!< Value 0x00000060 */
#define RCC_PLLDIV_DIVR_DIV98   (0x61UL)                                               /*!< Value 0x00000061 */
#define RCC_PLLDIV_DIVR_DIV99   (0x62UL)                                               /*!< Value 0x00000062 */
#define RCC_PLLDIV_DIVR_DIV100  (0x63UL)                                               /*!< Value 0x00000063 */
#define RCC_PLLDIV_DIVR_DIV101  (0x64UL)                                               /*!< Value 0x00000064 */
#define RCC_PLLDIV_DIVR_DIV102  (0x65UL)                                               /*!< Value 0x00000065 */
#define RCC_PLLDIV_DIVR_DIV103  (0x66UL)                                               /*!< Value 0x00000066 */
#define RCC_PLLDIV_DIVR_DIV104  (0x67UL)                                               /*!< Value 0x00000067 */
#define RCC_PLLDIV_DIVR_DIV105  (0x68UL)                                               /*!< Value 0x00000068 */
#define RCC_PLLDIV_DIVR_DIV106  (0x69UL)                                               /*!< Value 0x00000069 */
#define RCC_PLLDIV_DIVR_DIV107  (0x6AUL)                                               /*!< Value 0x0000006A */
#define RCC_PLLDIV_DIVR_DIV108  (0x6BUL)                                               /*!< Value 0x0000006B */
#define RCC_PLLDIV_DIVR_DIV109  (0x6CUL)                                               /*!< Value 0x0000006C */
#define RCC_PLLDIV_DIVR_DIV110  (0x6DUL)                                               /*!< Value 0x0000006D */
#define RCC_PLLDIV_DIVR_DIV111  (0x6EUL)                                               /*!< Value 0x0000006E */
#define RCC_PLLDIV_DIVR_DIV112  (0x6FUL)                                               /*!< Value 0x0000006F */
#define RCC_PLLDIV_DIVR_DIV113  (0x70UL)                                               /*!< Value 0x00000070 */
#define RCC_PLLDIV_DIVR_DIV114  (0x71UL)                                               /*!< Value 0x00000071 */
#define RCC_PLLDIV_DIVR_DIV115  (0x72UL)                                               /*!< Value 0x00000072 */
#define RCC_PLLDIV_DIVR_DIV116  (0x73UL)                                               /*!< Value 0x00000073 */
#define RCC_PLLDIV_DIVR_DIV117  (0x74UL)                                               /*!< Value 0x00000074 */
#define RCC_PLLDIV_DIVR_DIV118  (0x75UL)                                               /*!< Value 0x00000075 */
#define RCC_PLLDIV_DIVR_DIV119  (0x76UL)                                               /*!< Value 0x00000076 */
#define RCC_PLLDIV_DIVR_DIV120  (0x77UL)                                               /*!< Value 0x00000077 */
#define RCC_PLLDIV_DIVR_DIV121  (0x78UL)                                               /*!< Value 0x00000078 */
#define RCC_PLLDIV_DIVR_DIV122  (0x79UL)                                               /*!< Value 0x00000079 */
#define RCC_PLLDIV_DIVR_DIV123  (0x7AUL)                                               /*!< Value 0x0000007A */
#define RCC_PLLDIV_DIVR_DIV124  (0x7BUL)                                               /*!< Value 0x0000007B */
#define RCC_PLLDIV_DIVR_DIV125  (0x7CUL)                                               /*!< Value 0x0000007C */
#define RCC_PLLDIV_DIVR_DIV126  (0x7DUL)                                               /*!< Value 0x0000007D */
#define RCC_PLLDIV_DIVR_DIV127  (0x7EUL)                                               /*!< Value 0x0000007E */
#define RCC_PLLDIV_DIVR_DIV128  (0x7FUL)                                               /*!< Value 0x0000007F */

#define RCC_PLLDIV_DIVQ_OFFSET  (16U)
#define RCC_PLLDIV_DIVQ_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, PLLDIV, DIVQ))   /*!< Mask  0x007F0000 */
#define RCC_PLLDIV_DIVQ_DIV1    (0x00UL)                                               /*!< Value 0x00000000 */
#define RCC_PLLDIV_DIVQ_DIV2    (0x01UL)                                               /*!< Value 0x00000001 */
#define RCC_PLLDIV_DIVQ_DIV3    (0x02UL)                                               /*!< Value 0x00000002 */
#define RCC_PLLDIV_DIVQ_DIV4    (0x03UL)                                               /*!< Value 0x00000003 */
#define RCC_PLLDIV_DIVQ_DIV5    (0x04UL)                                               /*!< Value 0x00000004 */
#define RCC_PLLDIV_DIVQ_DIV6    (0x05UL)                                               /*!< Value 0x00000005 */
#define RCC_PLLDIV_DIVQ_DIV7    (0x06UL)                                               /*!< Value 0x00000006 */
#define RCC_PLLDIV_DIVQ_DIV8    (0x07UL)                                               /*!< Value 0x00000007 */
#define RCC_PLLDIV_DIVQ_DIV9    (0x08UL)                                               /*!< Value 0x00000008 */
#define RCC_PLLDIV_DIVQ_DIV10   (0x09UL)                                               /*!< Value 0x00000009 */
#define RCC_PLLDIV_DIVQ_DIV11   (0x0AUL)                                               /*!< Value 0x0000000A */
#define RCC_PLLDIV_DIVQ_DIV12   (0x0BUL)                                               /*!< Value 0x0000000B */
#define RCC_PLLDIV_DIVQ_DIV13   (0x0CUL)                                               /*!< Value 0x0000000C */
#define RCC_PLLDIV_DIVQ_DIV14   (0x0DUL)                                               /*!< Value 0x0000000D */
#define RCC_PLLDIV_DIVQ_DIV15   (0x0EUL)                                               /*!< Value 0x0000000E */
#define RCC_PLLDIV_DIVQ_DIV16   (0x0FUL)                                               /*!< Value 0x0000000F */
#define RCC_PLLDIV_DIVQ_DIV17   (0x10UL)                                               /*!< Value 0x00000010 */
#define RCC_PLLDIV_DIVQ_DIV18   (0x11UL)                                               /*!< Value 0x00000011 */
#define RCC_PLLDIV_DIVQ_DIV19   (0x12UL)                                               /*!< Value 0x00000012 */
#define RCC_PLLDIV_DIVQ_DIV20   (0x13UL)                                               /*!< Value 0x00000013 */
#define RCC_PLLDIV_DIVQ_DIV21   (0x14UL)                                               /*!< Value 0x00000014 */
#define RCC_PLLDIV_DIVQ_DIV22   (0x15UL)                                               /*!< Value 0x00000015 */
#define RCC_PLLDIV_DIVQ_DIV23   (0x16UL)                                               /*!< Value 0x00000016 */
#define RCC_PLLDIV_DIVQ_DIV24   (0x17UL)                                               /*!< Value 0x00000017 */
#define RCC_PLLDIV_DIVQ_DIV25   (0x18UL)                                               /*!< Value 0x00000018 */
#define RCC_PLLDIV_DIVQ_DIV26   (0x19UL)                                               /*!< Value 0x00000019 */
#define RCC_PLLDIV_DIVQ_DIV27   (0x1AUL)                                               /*!< Value 0x0000001A */
#define RCC_PLLDIV_DIVQ_DIV28   (0x1BUL)                                               /*!< Value 0x0000001B */
#define RCC_PLLDIV_DIVQ_DIV29   (0x1CUL)                                               /*!< Value 0x0000001C */
#define RCC_PLLDIV_DIVQ_DIV30   (0x1DUL)                                               /*!< Value 0x0000001D */
#define RCC_PLLDIV_DIVQ_DIV31   (0x1EUL)                                               /*!< Value 0x0000001E */
#define RCC_PLLDIV_DIVQ_DIV32   (0x1FUL)                                               /*!< Value 0x0000001F */
#define RCC_PLLDIV_DIVQ_DIV33   (0x20UL)                                               /*!< Value 0x00000020 */
#define RCC_PLLDIV_DIVQ_DIV34   (0x21UL)                                               /*!< Value 0x00000021 */
#define RCC_PLLDIV_DIVQ_DIV35   (0x22UL)                                               /*!< Value 0x00000022 */
#define RCC_PLLDIV_DIVQ_DIV36   (0x23UL)                                               /*!< Value 0x00000023 */
#define RCC_PLLDIV_DIVQ_DIV37   (0x24UL)                                               /*!< Value 0x00000024 */
#define RCC_PLLDIV_DIVQ_DIV38   (0x25UL)                                               /*!< Value 0x00000025 */
#define RCC_PLLDIV_DIVQ_DIV39   (0x26UL)                                               /*!< Value 0x00000026 */
#define RCC_PLLDIV_DIVQ_DIV40   (0x27UL)                                               /*!< Value 0x00000027 */
#define RCC_PLLDIV_DIVQ_DIV41   (0x28UL)                                               /*!< Value 0x00000028 */
#define RCC_PLLDIV_DIVQ_DIV42   (0x29UL)                                               /*!< Value 0x00000029 */
#define RCC_PLLDIV_DIVQ_DIV43   (0x2AUL)                                               /*!< Value 0x0000002A */
#define RCC_PLLDIV_DIVQ_DIV44   (0x2BUL)                                               /*!< Value 0x0000002B */
#define RCC_PLLDIV_DIVQ_DIV45   (0x2CUL)                                               /*!< Value 0x0000002C */
#define RCC_PLLDIV_DIVQ_DIV46   (0x2DUL)                                               /*!< Value 0x0000002D */
#define RCC_PLLDIV_DIVQ_DIV47   (0x2EUL)                                               /*!< Value 0x0000002E */
#define RCC_PLLDIV_DIVQ_DIV48   (0x2FUL)                                               /*!< Value 0x0000002F */
#define RCC_PLLDIV_DIVQ_DIV49   (0x30UL)                                               /*!< Value 0x00000030 */
#define RCC_PLLDIV_DIVQ_DIV50   (0x31UL)                                               /*!< Value 0x00000031 */
#define RCC_PLLDIV_DIVQ_DIV51   (0x32UL)                                               /*!< Value 0x00000032 */
#define RCC_PLLDIV_DIVQ_DIV52   (0x33UL)                                               /*!< Value 0x00000033 */
#define RCC_PLLDIV_DIVQ_DIV53   (0x34UL)                                               /*!< Value 0x00000034 */
#define RCC_PLLDIV_DIVQ_DIV54   (0x35UL)                                               /*!< Value 0x00000035 */
#define RCC_PLLDIV_DIVQ_DIV55   (0x36UL)                                               /*!< Value 0x00000036 */
#define RCC_PLLDIV_DIVQ_DIV56   (0x37UL)                                               /*!< Value 0x00000037 */
#define RCC_PLLDIV_DIVQ_DIV57   (0x38UL)                                               /*!< Value 0x00000038 */
#define RCC_PLLDIV_DIVQ_DIV58   (0x39UL)                                               /*!< Value 0x00000039 */
#define RCC_PLLDIV_DIVQ_DIV59   (0x3AUL)                                               /*!< Value 0x0000003A */
#define RCC_PLLDIV_DIVQ_DIV60   (0x3BUL)                                               /*!< Value 0x0000003B */
#define RCC_PLLDIV_DIVQ_DIV61   (0x3CUL)                                               /*!< Value 0x0000003C */
#define RCC_PLLDIV_DIVQ_DIV62   (0x3DUL)                                               /*!< Value 0x0000003D */
#define RCC_PLLDIV_DIVQ_DIV63   (0x3EUL)                                               /*!< Value 0x0000003E */
#define RCC_PLLDIV_DIVQ_DIV64   (0x3FUL)                                               /*!< Value 0x0000003F */
#define RCC_PLLDIV_DIVQ_DIV65   (0x40UL)                                               /*!< Value 0x00000040 */
#define RCC_PLLDIV_DIVQ_DIV66   (0x41UL)                                               /*!< Value 0x00000041 */
#define RCC_PLLDIV_DIVQ_DIV67   (0x42UL)                                               /*!< Value 0x00000042 */
#define RCC_PLLDIV_DIVQ_DIV68   (0x43UL)                                               /*!< Value 0x00000043 */
#define RCC_PLLDIV_DIVQ_DIV69   (0x44UL)                                               /*!< Value 0x00000044 */
#define RCC_PLLDIV_DIVQ_DIV70   (0x45UL)                                               /*!< Value 0x00000045 */
#define RCC_PLLDIV_DIVQ_DIV71   (0x46UL)                                               /*!< Value 0x00000046 */
#define RCC_PLLDIV_DIVQ_DIV72   (0x47UL)                                               /*!< Value 0x00000047 */
#define RCC_PLLDIV_DIVQ_DIV73   (0x48UL)                                               /*!< Value 0x00000048 */
#define RCC_PLLDIV_DIVQ_DIV74   (0x49UL)                                               /*!< Value 0x00000049 */
#define RCC_PLLDIV_DIVQ_DIV75   (0x4AUL)                                               /*!< Value 0x0000004A */
#define RCC_PLLDIV_DIVQ_DIV76   (0x4BUL)                                               /*!< Value 0x0000004B */
#define RCC_PLLDIV_DIVQ_DIV77   (0x4CUL)                                               /*!< Value 0x0000004C */
#define RCC_PLLDIV_DIVQ_DIV78   (0x4DUL)                                               /*!< Value 0x0000004D */
#define RCC_PLLDIV_DIVQ_DIV79   (0x4EUL)                                               /*!< Value 0x0000004E */
#define RCC_PLLDIV_DIVQ_DIV80   (0x4FUL)                                               /*!< Value 0x0000004F */
#define RCC_PLLDIV_DIVQ_DIV81   (0x50UL)                                               /*!< Value 0x00000050 */
#define RCC_PLLDIV_DIVQ_DIV82   (0x51UL)                                               /*!< Value 0x00000051 */
#define RCC_PLLDIV_DIVQ_DIV83   (0x52UL)                                               /*!< Value 0x00000052 */
#define RCC_PLLDIV_DIVQ_DIV84   (0x53UL)                                               /*!< Value 0x00000053 */
#define RCC_PLLDIV_DIVQ_DIV85   (0x54UL)                                               /*!< Value 0x00000054 */
#define RCC_PLLDIV_DIVQ_DIV86   (0x55UL)                                               /*!< Value 0x00000055 */
#define RCC_PLLDIV_DIVQ_DIV87   (0x56UL)                                               /*!< Value 0x00000056 */
#define RCC_PLLDIV_DIVQ_DIV88   (0x57UL)                                               /*!< Value 0x00000057 */
#define RCC_PLLDIV_DIVQ_DIV89   (0x58UL)                                               /*!< Value 0x00000058 */
#define RCC_PLLDIV_DIVQ_DIV90   (0x59UL)                                               /*!< Value 0x00000059 */
#define RCC_PLLDIV_DIVQ_DIV91   (0x5AUL)                                               /*!< Value 0x0000005A */
#define RCC_PLLDIV_DIVQ_DIV92   (0x5BUL)                                               /*!< Value 0x0000005B */
#define RCC_PLLDIV_DIVQ_DIV93   (0x5CUL)                                               /*!< Value 0x0000005C */
#define RCC_PLLDIV_DIVQ_DIV94   (0x5DUL)                                               /*!< Value 0x0000005D */
#define RCC_PLLDIV_DIVQ_DIV95   (0x5EUL)                                               /*!< Value 0x0000005E */
#define RCC_PLLDIV_DIVQ_DIV96   (0x5FUL)                                               /*!< Value 0x0000005F */
#define RCC_PLLDIV_DIVQ_DIV97   (0x60UL)                                               /*!< Value 0x00000060 */
#define RCC_PLLDIV_DIVQ_DIV98   (0x61UL)                                               /*!< Value 0x00000061 */
#define RCC_PLLDIV_DIVQ_DIV99   (0x62UL)                                               /*!< Value 0x00000062 */
#define RCC_PLLDIV_DIVQ_DIV100  (0x63UL)                                               /*!< Value 0x00000063 */
#define RCC_PLLDIV_DIVQ_DIV101  (0x64UL)                                               /*!< Value 0x00000064 */
#define RCC_PLLDIV_DIVQ_DIV102  (0x65UL)                                               /*!< Value 0x00000065 */
#define RCC_PLLDIV_DIVQ_DIV103  (0x66UL)                                               /*!< Value 0x00000066 */
#define RCC_PLLDIV_DIVQ_DIV104  (0x67UL)                                               /*!< Value 0x00000067 */
#define RCC_PLLDIV_DIVQ_DIV105  (0x68UL)                                               /*!< Value 0x00000068 */
#define RCC_PLLDIV_DIVQ_DIV106  (0x69UL)                                               /*!< Value 0x00000069 */
#define RCC_PLLDIV_DIVQ_DIV107  (0x6AUL)                                               /*!< Value 0x0000006A */
#define RCC_PLLDIV_DIVQ_DIV108  (0x6BUL)                                               /*!< Value 0x0000006B */
#define RCC_PLLDIV_DIVQ_DIV109  (0x6CUL)                                               /*!< Value 0x0000006C */
#define RCC_PLLDIV_DIVQ_DIV110  (0x6DUL)                                               /*!< Value 0x0000006D */
#define RCC_PLLDIV_DIVQ_DIV111  (0x6EUL)                                               /*!< Value 0x0000006E */
#define RCC_PLLDIV_DIVQ_DIV112  (0x6FUL)                                               /*!< Value 0x0000006F */
#define RCC_PLLDIV_DIVQ_DIV113  (0x70UL)                                               /*!< Value 0x00000070 */
#define RCC_PLLDIV_DIVQ_DIV114  (0x71UL)                                               /*!< Value 0x00000071 */
#define RCC_PLLDIV_DIVQ_DIV115  (0x72UL)                                               /*!< Value 0x00000072 */
#define RCC_PLLDIV_DIVQ_DIV116  (0x73UL)                                               /*!< Value 0x00000073 */
#define RCC_PLLDIV_DIVQ_DIV117  (0x74UL)                                               /*!< Value 0x00000074 */
#define RCC_PLLDIV_DIVQ_DIV118  (0x75UL)                                               /*!< Value 0x00000075 */
#define RCC_PLLDIV_DIVQ_DIV119  (0x76UL)                                               /*!< Value 0x00000076 */
#define RCC_PLLDIV_DIVQ_DIV120  (0x77UL)                                               /*!< Value 0x00000077 */
#define RCC_PLLDIV_DIVQ_DIV121  (0x78UL)                                               /*!< Value 0x00000078 */
#define RCC_PLLDIV_DIVQ_DIV122  (0x79UL)                                               /*!< Value 0x00000079 */
#define RCC_PLLDIV_DIVQ_DIV123  (0x7AUL)                                               /*!< Value 0x0000007A */
#define RCC_PLLDIV_DIVQ_DIV124  (0x7BUL)                                               /*!< Value 0x0000007B */
#define RCC_PLLDIV_DIVQ_DIV125  (0x7CUL)                                               /*!< Value 0x0000007C */
#define RCC_PLLDIV_DIVQ_DIV126  (0x7DUL)                                               /*!< Value 0x0000007D */
#define RCC_PLLDIV_DIVQ_DIV127  (0x7EUL)                                               /*!< Value 0x0000007E */
#define RCC_PLLDIV_DIVQ_DIV128  (0x7FUL)                                               /*!< Value 0x0000007F */

#define RCC_PLLDIV_DIVP_OFFSET  (9U)
#define RCC_PLLDIV_DIVP_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, PLLDIV, DIVP))   /*!< Mask  0x000000FE */
#define RCC_PLLDIV_DIVP_DIV1    (0x00UL)                                               /*!< Value 0x00000000 */
#define RCC_PLLDIV_DIVP_DIV2    (0x01UL)                                               /*!< Value 0x00000001 */
#define RCC_PLLDIV_DIVP_DIV3    (0x02UL)                                               /*!< Value 0x00000002 */
#define RCC_PLLDIV_DIVP_DIV4    (0x03UL)                                               /*!< Value 0x00000003 */
#define RCC_PLLDIV_DIVP_DIV5    (0x04UL)                                               /*!< Value 0x00000004 */
#define RCC_PLLDIV_DIVP_DIV6    (0x05UL)                                               /*!< Value 0x00000005 */
#define RCC_PLLDIV_DIVP_DIV7    (0x06UL)                                               /*!< Value 0x00000006 */
#define RCC_PLLDIV_DIVP_DIV8    (0x07UL)                                               /*!< Value 0x00000007 */
#define RCC_PLLDIV_DIVP_DIV9    (0x08UL)                                               /*!< Value 0x00000008 */
#define RCC_PLLDIV_DIVP_DIV10   (0x09UL)                                               /*!< Value 0x00000009 */
#define RCC_PLLDIV_DIVP_DIV11   (0x0AUL)                                               /*!< Value 0x0000000A */
#define RCC_PLLDIV_DIVP_DIV12   (0x0BUL)                                               /*!< Value 0x0000000B */
#define RCC_PLLDIV_DIVP_DIV13   (0x0CUL)                                               /*!< Value 0x0000000C */
#define RCC_PLLDIV_DIVP_DIV14   (0x0DUL)                                               /*!< Value 0x0000000D */
#define RCC_PLLDIV_DIVP_DIV15   (0x0EUL)                                               /*!< Value 0x0000000E */
#define RCC_PLLDIV_DIVP_DIV16   (0x0FUL)                                               /*!< Value 0x0000000F */
#define RCC_PLLDIV_DIVP_DIV17   (0x10UL)                                               /*!< Value 0x00000010 */
#define RCC_PLLDIV_DIVP_DIV18   (0x11UL)                                               /*!< Value 0x00000011 */
#define RCC_PLLDIV_DIVP_DIV19   (0x12UL)                                               /*!< Value 0x00000012 */
#define RCC_PLLDIV_DIVP_DIV20   (0x13UL)                                               /*!< Value 0x00000013 */
#define RCC_PLLDIV_DIVP_DIV21   (0x14UL)                                               /*!< Value 0x00000014 */
#define RCC_PLLDIV_DIVP_DIV22   (0x15UL)                                               /*!< Value 0x00000015 */
#define RCC_PLLDIV_DIVP_DIV23   (0x16UL)                                               /*!< Value 0x00000016 */
#define RCC_PLLDIV_DIVP_DIV24   (0x17UL)                                               /*!< Value 0x00000017 */
#define RCC_PLLDIV_DIVP_DIV25   (0x18UL)                                               /*!< Value 0x00000018 */
#define RCC_PLLDIV_DIVP_DIV26   (0x19UL)                                               /*!< Value 0x00000019 */
#define RCC_PLLDIV_DIVP_DIV27   (0x1AUL)                                               /*!< Value 0x0000001A */
#define RCC_PLLDIV_DIVP_DIV28   (0x1BUL)                                               /*!< Value 0x0000001B */
#define RCC_PLLDIV_DIVP_DIV29   (0x1CUL)                                               /*!< Value 0x0000001C */
#define RCC_PLLDIV_DIVP_DIV30   (0x1DUL)                                               /*!< Value 0x0000001D */
#define RCC_PLLDIV_DIVP_DIV31   (0x1EUL)                                               /*!< Value 0x0000001E */
#define RCC_PLLDIV_DIVP_DIV32   (0x1FUL)                                               /*!< Value 0x0000001F */
#define RCC_PLLDIV_DIVP_DIV33   (0x20UL)                                               /*!< Value 0x00000020 */
#define RCC_PLLDIV_DIVP_DIV34   (0x21UL)                                               /*!< Value 0x00000021 */
#define RCC_PLLDIV_DIVP_DIV35   (0x22UL)                                               /*!< Value 0x00000022 */
#define RCC_PLLDIV_DIVP_DIV36   (0x23UL)                                               /*!< Value 0x00000023 */
#define RCC_PLLDIV_DIVP_DIV37   (0x24UL)                                               /*!< Value 0x00000024 */
#define RCC_PLLDIV_DIVP_DIV38   (0x25UL)                                               /*!< Value 0x00000025 */
#define RCC_PLLDIV_DIVP_DIV39   (0x26UL)                                               /*!< Value 0x00000026 */
#define RCC_PLLDIV_DIVP_DIV40   (0x27UL)                                               /*!< Value 0x00000027 */
#define RCC_PLLDIV_DIVP_DIV41   (0x28UL)                                               /*!< Value 0x00000028 */
#define RCC_PLLDIV_DIVP_DIV42   (0x29UL)                                               /*!< Value 0x00000029 */
#define RCC_PLLDIV_DIVP_DIV43   (0x2AUL)                                               /*!< Value 0x0000002A */
#define RCC_PLLDIV_DIVP_DIV44   (0x2BUL)                                               /*!< Value 0x0000002B */
#define RCC_PLLDIV_DIVP_DIV45   (0x2CUL)                                               /*!< Value 0x0000002C */
#define RCC_PLLDIV_DIVP_DIV46   (0x2DUL)                                               /*!< Value 0x0000002D */
#define RCC_PLLDIV_DIVP_DIV47   (0x2EUL)                                               /*!< Value 0x0000002E */
#define RCC_PLLDIV_DIVP_DIV48   (0x2FUL)                                               /*!< Value 0x0000002F */
#define RCC_PLLDIV_DIVP_DIV49   (0x30UL)                                               /*!< Value 0x00000030 */
#define RCC_PLLDIV_DIVP_DIV50   (0x31UL)                                               /*!< Value 0x00000031 */
#define RCC_PLLDIV_DIVP_DIV51   (0x32UL)                                               /*!< Value 0x00000032 */
#define RCC_PLLDIV_DIVP_DIV52   (0x33UL)                                               /*!< Value 0x00000033 */
#define RCC_PLLDIV_DIVP_DIV53   (0x34UL)                                               /*!< Value 0x00000034 */
#define RCC_PLLDIV_DIVP_DIV54   (0x35UL)                                               /*!< Value 0x00000035 */
#define RCC_PLLDIV_DIVP_DIV55   (0x36UL)                                               /*!< Value 0x00000036 */
#define RCC_PLLDIV_DIVP_DIV56   (0x37UL)                                               /*!< Value 0x00000037 */
#define RCC_PLLDIV_DIVP_DIV57   (0x38UL)                                               /*!< Value 0x00000038 */
#define RCC_PLLDIV_DIVP_DIV58   (0x39UL)                                               /*!< Value 0x00000039 */
#define RCC_PLLDIV_DIVP_DIV59   (0x3AUL)                                               /*!< Value 0x0000003A */
#define RCC_PLLDIV_DIVP_DIV60   (0x3BUL)                                               /*!< Value 0x0000003B */
#define RCC_PLLDIV_DIVP_DIV61   (0x3CUL)                                               /*!< Value 0x0000003C */
#define RCC_PLLDIV_DIVP_DIV62   (0x3DUL)                                               /*!< Value 0x0000003D */
#define RCC_PLLDIV_DIVP_DIV63   (0x3EUL)                                               /*!< Value 0x0000003E */
#define RCC_PLLDIV_DIVP_DIV64   (0x3FUL)                                               /*!< Value 0x0000003F */
#define RCC_PLLDIV_DIVP_DIV65   (0x40UL)                                               /*!< Value 0x00000040 */
#define RCC_PLLDIV_DIVP_DIV66   (0x41UL)                                               /*!< Value 0x00000041 */
#define RCC_PLLDIV_DIVP_DIV67   (0x42UL)                                               /*!< Value 0x00000042 */
#define RCC_PLLDIV_DIVP_DIV68   (0x43UL)                                               /*!< Value 0x00000043 */
#define RCC_PLLDIV_DIVP_DIV69   (0x44UL)                                               /*!< Value 0x00000044 */
#define RCC_PLLDIV_DIVP_DIV70   (0x45UL)                                               /*!< Value 0x00000045 */
#define RCC_PLLDIV_DIVP_DIV71   (0x46UL)                                               /*!< Value 0x00000046 */
#define RCC_PLLDIV_DIVP_DIV72   (0x47UL)                                               /*!< Value 0x00000047 */
#define RCC_PLLDIV_DIVP_DIV73   (0x48UL)                                               /*!< Value 0x00000048 */
#define RCC_PLLDIV_DIVP_DIV74   (0x49UL)                                               /*!< Value 0x00000049 */
#define RCC_PLLDIV_DIVP_DIV75   (0x4AUL)                                               /*!< Value 0x0000004A */
#define RCC_PLLDIV_DIVP_DIV76   (0x4BUL)                                               /*!< Value 0x0000004B */
#define RCC_PLLDIV_DIVP_DIV77   (0x4CUL)                                               /*!< Value 0x0000004C */
#define RCC_PLLDIV_DIVP_DIV78   (0x4DUL)                                               /*!< Value 0x0000004D */
#define RCC_PLLDIV_DIVP_DIV79   (0x4EUL)                                               /*!< Value 0x0000004E */
#define RCC_PLLDIV_DIVP_DIV80   (0x4FUL)                                               /*!< Value 0x0000004F */
#define RCC_PLLDIV_DIVP_DIV81   (0x50UL)                                               /*!< Value 0x00000050 */
#define RCC_PLLDIV_DIVP_DIV82   (0x51UL)                                               /*!< Value 0x00000051 */
#define RCC_PLLDIV_DIVP_DIV83   (0x52UL)                                               /*!< Value 0x00000052 */
#define RCC_PLLDIV_DIVP_DIV84   (0x53UL)                                               /*!< Value 0x00000053 */
#define RCC_PLLDIV_DIVP_DIV85   (0x54UL)                                               /*!< Value 0x00000054 */
#define RCC_PLLDIV_DIVP_DIV86   (0x55UL)                                               /*!< Value 0x00000055 */
#define RCC_PLLDIV_DIVP_DIV87   (0x56UL)                                               /*!< Value 0x00000056 */
#define RCC_PLLDIV_DIVP_DIV88   (0x57UL)                                               /*!< Value 0x00000057 */
#define RCC_PLLDIV_DIVP_DIV89   (0x58UL)                                               /*!< Value 0x00000058 */
#define RCC_PLLDIV_DIVP_DIV90   (0x59UL)                                               /*!< Value 0x00000059 */
#define RCC_PLLDIV_DIVP_DIV91   (0x5AUL)                                               /*!< Value 0x0000005A */
#define RCC_PLLDIV_DIVP_DIV92   (0x5BUL)                                               /*!< Value 0x0000005B */
#define RCC_PLLDIV_DIVP_DIV93   (0x5CUL)                                               /*!< Value 0x0000005C */
#define RCC_PLLDIV_DIVP_DIV94   (0x5DUL)                                               /*!< Value 0x0000005D */
#define RCC_PLLDIV_DIVP_DIV95   (0x5EUL)                                               /*!< Value 0x0000005E */
#define RCC_PLLDIV_DIVP_DIV96   (0x5FUL)                                               /*!< Value 0x0000005F */
#define RCC_PLLDIV_DIVP_DIV97   (0x60UL)                                               /*!< Value 0x00000060 */
#define RCC_PLLDIV_DIVP_DIV98   (0x61UL)                                               /*!< Value 0x00000061 */
#define RCC_PLLDIV_DIVP_DIV99   (0x62UL)                                               /*!< Value 0x00000062 */
#define RCC_PLLDIV_DIVP_DIV100  (0x63UL)                                               /*!< Value 0x00000063 */
#define RCC_PLLDIV_DIVP_DIV101  (0x64UL)                                               /*!< Value 0x00000064 */
#define RCC_PLLDIV_DIVP_DIV102  (0x65UL)                                               /*!< Value 0x00000065 */
#define RCC_PLLDIV_DIVP_DIV103  (0x66UL)                                               /*!< Value 0x00000066 */
#define RCC_PLLDIV_DIVP_DIV104  (0x67UL)                                               /*!< Value 0x00000067 */
#define RCC_PLLDIV_DIVP_DIV105  (0x68UL)                                               /*!< Value 0x00000068 */
#define RCC_PLLDIV_DIVP_DIV106  (0x69UL)                                               /*!< Value 0x00000069 */
#define RCC_PLLDIV_DIVP_DIV107  (0x6AUL)                                               /*!< Value 0x0000006A */
#define RCC_PLLDIV_DIVP_DIV108  (0x6BUL)                                               /*!< Value 0x0000006B */
#define RCC_PLLDIV_DIVP_DIV109  (0x6CUL)                                               /*!< Value 0x0000006C */
#define RCC_PLLDIV_DIVP_DIV110  (0x6DUL)                                               /*!< Value 0x0000006D */
#define RCC_PLLDIV_DIVP_DIV111  (0x6EUL)                                               /*!< Value 0x0000006E */
#define RCC_PLLDIV_DIVP_DIV112  (0x6FUL)                                               /*!< Value 0x0000006F */
#define RCC_PLLDIV_DIVP_DIV113  (0x70UL)                                               /*!< Value 0x00000070 */
#define RCC_PLLDIV_DIVP_DIV114  (0x71UL)                                               /*!< Value 0x00000071 */
#define RCC_PLLDIV_DIVP_DIV115  (0x72UL)                                               /*!< Value 0x00000072 */
#define RCC_PLLDIV_DIVP_DIV116  (0x73UL)                                               /*!< Value 0x00000073 */
#define RCC_PLLDIV_DIVP_DIV117  (0x74UL)                                               /*!< Value 0x00000074 */
#define RCC_PLLDIV_DIVP_DIV118  (0x75UL)                                               /*!< Value 0x00000075 */
#define RCC_PLLDIV_DIVP_DIV119  (0x76UL)                                               /*!< Value 0x00000076 */
#define RCC_PLLDIV_DIVP_DIV120  (0x77UL)                                               /*!< Value 0x00000077 */
#define RCC_PLLDIV_DIVP_DIV121  (0x78UL)                                               /*!< Value 0x00000078 */
#define RCC_PLLDIV_DIVP_DIV122  (0x79UL)                                               /*!< Value 0x00000079 */
#define RCC_PLLDIV_DIVP_DIV123  (0x7AUL)                                               /*!< Value 0x0000007A */
#define RCC_PLLDIV_DIVP_DIV124  (0x7BUL)                                               /*!< Value 0x0000007B */
#define RCC_PLLDIV_DIVP_DIV125  (0x7CUL)                                               /*!< Value 0x0000007C */
#define RCC_PLLDIV_DIVP_DIV126  (0x7DUL)                                               /*!< Value 0x0000007D */
#define RCC_PLLDIV_DIVP_DIV127  (0x7EUL)                                               /*!< Value 0x0000007E */
#define RCC_PLLDIV_DIVP_DIV128  (0x7FUL)                                               /*!< Value 0x0000007F */

#define RCC_PLLDIV_DIVN_OFFSET  (0U)
#define RCC_PLLDIV_DIVN_MASK    (0x1FFUL << REGISTER_FIELD_OFFSET(RCC, PLLDIV, DIVN))  /*!< Mask  0x000001FF */
#define RCC_PLLDIV_DIVN_DIV4    (0x003UL)                                              /*!< Value 0x00000003 */
#define RCC_PLLDIV_DIVN_DIV5    (0x004UL)                                              /*!< Value 0x00000004 */
#define RCC_PLLDIV_DIVN_DIV6    (0x005UL)                                              /*!< Value 0x00000005 */
#define RCC_PLLDIV_DIVN_DIV7    (0x006UL)                                              /*!< Value 0x00000006 */
#define RCC_PLLDIV_DIVN_DIV8    (0x007UL)                                              /*!< Value 0x00000007 */
#define RCC_PLLDIV_DIVN_DIV9    (0x008UL)                                              /*!< Value 0x00000008 */
#define RCC_PLLDIV_DIVN_DIV10   (0x009UL)                                              /*!< Value 0x00000009 */
#define RCC_PLLDIV_DIVN_DIV11   (0x00AUL)                                              /*!< Value 0x0000000A */
#define RCC_PLLDIV_DIVN_DIV12   (0x00BUL)                                              /*!< Value 0x0000000B */
#define RCC_PLLDIV_DIVN_DIV13   (0x00CUL)                                              /*!< Value 0x0000000C */
#define RCC_PLLDIV_DIVN_DIV14   (0x00DUL)                                              /*!< Value 0x0000000D */
#define RCC_PLLDIV_DIVN_DIV15   (0x00EUL)                                              /*!< Value 0x0000000E */
#define RCC_PLLDIV_DIVN_DIV16   (0x00FUL)                                              /*!< Value 0x0000000F */
#define RCC_PLLDIV_DIVN_DIV17   (0x010UL)                                              /*!< Value 0x00000010 */
#define RCC_PLLDIV_DIVN_DIV18   (0x011UL)                                              /*!< Value 0x00000011 */
#define RCC_PLLDIV_DIVN_DIV19   (0x012UL)                                              /*!< Value 0x00000012 */
#define RCC_PLLDIV_DIVN_DIV20   (0x013UL)                                              /*!< Value 0x00000013 */
#define RCC_PLLDIV_DIVN_DIV21   (0x014UL)                                              /*!< Value 0x00000014 */
#define RCC_PLLDIV_DIVN_DIV22   (0x015UL)                                              /*!< Value 0x00000015 */
#define RCC_PLLDIV_DIVN_DIV23   (0x016UL)                                              /*!< Value 0x00000016 */
#define RCC_PLLDIV_DIVN_DIV24   (0x017UL)                                              /*!< Value 0x00000017 */
#define RCC_PLLDIV_DIVN_DIV25   (0x018UL)                                              /*!< Value 0x00000018 */
#define RCC_PLLDIV_DIVN_DIV26   (0x019UL)                                              /*!< Value 0x00000019 */
#define RCC_PLLDIV_DIVN_DIV27   (0x01AUL)                                              /*!< Value 0x0000001A */
#define RCC_PLLDIV_DIVN_DIV28   (0x01BUL)                                              /*!< Value 0x0000001B */
#define RCC_PLLDIV_DIVN_DIV29   (0x01CUL)                                              /*!< Value 0x0000001C */
#define RCC_PLLDIV_DIVN_DIV30   (0x01DUL)                                              /*!< Value 0x0000001D */
#define RCC_PLLDIV_DIVN_DIV31   (0x01EUL)                                              /*!< Value 0x0000001E */
#define RCC_PLLDIV_DIVN_DIV32   (0x01FUL)                                              /*!< Value 0x0000001F */
#define RCC_PLLDIV_DIVN_DIV33   (0x020UL)                                              /*!< Value 0x00000020 */
#define RCC_PLLDIV_DIVN_DIV34   (0x021UL)                                              /*!< Value 0x00000021 */
#define RCC_PLLDIV_DIVN_DIV35   (0x022UL)                                              /*!< Value 0x00000022 */
#define RCC_PLLDIV_DIVN_DIV36   (0x023UL)                                              /*!< Value 0x00000023 */
#define RCC_PLLDIV_DIVN_DIV37   (0x024UL)                                              /*!< Value 0x00000024 */
#define RCC_PLLDIV_DIVN_DIV38   (0x025UL)                                              /*!< Value 0x00000025 */
#define RCC_PLLDIV_DIVN_DIV39   (0x026UL)                                              /*!< Value 0x00000026 */
#define RCC_PLLDIV_DIVN_DIV40   (0x027UL)                                              /*!< Value 0x00000027 */
#define RCC_PLLDIV_DIVN_DIV41   (0x028UL)                                              /*!< Value 0x00000028 */
#define RCC_PLLDIV_DIVN_DIV42   (0x029UL)                                              /*!< Value 0x00000029 */
#define RCC_PLLDIV_DIVN_DIV43   (0x02AUL)                                              /*!< Value 0x0000002A */
#define RCC_PLLDIV_DIVN_DIV44   (0x02BUL)                                              /*!< Value 0x0000002B */
#define RCC_PLLDIV_DIVN_DIV45   (0x02CUL)                                              /*!< Value 0x0000002C */
#define RCC_PLLDIV_DIVN_DIV46   (0x02DUL)                                              /*!< Value 0x0000002D */
#define RCC_PLLDIV_DIVN_DIV47   (0x02EUL)                                              /*!< Value 0x0000002E */
#define RCC_PLLDIV_DIVN_DIV48   (0x02FUL)                                              /*!< Value 0x0000002F */
#define RCC_PLLDIV_DIVN_DIV49   (0x030UL)                                              /*!< Value 0x00000030 */
#define RCC_PLLDIV_DIVN_DIV50   (0x031UL)                                              /*!< Value 0x00000031 */
#define RCC_PLLDIV_DIVN_DIV51   (0x032UL)                                              /*!< Value 0x00000032 */
#define RCC_PLLDIV_DIVN_DIV52   (0x033UL)                                              /*!< Value 0x00000033 */
#define RCC_PLLDIV_DIVN_DIV53   (0x034UL)                                              /*!< Value 0x00000034 */
#define RCC_PLLDIV_DIVN_DIV54   (0x035UL)                                              /*!< Value 0x00000035 */
#define RCC_PLLDIV_DIVN_DIV55   (0x036UL)                                              /*!< Value 0x00000036 */
#define RCC_PLLDIV_DIVN_DIV56   (0x037UL)                                              /*!< Value 0x00000037 */
#define RCC_PLLDIV_DIVN_DIV57   (0x038UL)                                              /*!< Value 0x00000038 */
#define RCC_PLLDIV_DIVN_DIV58   (0x039UL)                                              /*!< Value 0x00000039 */
#define RCC_PLLDIV_DIVN_DIV59   (0x03AUL)                                              /*!< Value 0x0000003A */
#define RCC_PLLDIV_DIVN_DIV60   (0x03BUL)                                              /*!< Value 0x0000003B */
#define RCC_PLLDIV_DIVN_DIV61   (0x03CUL)                                              /*!< Value 0x0000003C */
#define RCC_PLLDIV_DIVN_DIV62   (0x03DUL)                                              /*!< Value 0x0000003D */
#define RCC_PLLDIV_DIVN_DIV63   (0x03EUL)                                              /*!< Value 0x0000003E */
#define RCC_PLLDIV_DIVN_DIV64   (0x03FUL)                                              /*!< Value 0x0000003F */
#define RCC_PLLDIV_DIVN_DIV65   (0x040UL)                                              /*!< Value 0x00000040 */
#define RCC_PLLDIV_DIVN_DIV66   (0x041UL)                                              /*!< Value 0x00000041 */
#define RCC_PLLDIV_DIVN_DIV67   (0x042UL)                                              /*!< Value 0x00000042 */
#define RCC_PLLDIV_DIVN_DIV68   (0x043UL)                                              /*!< Value 0x00000043 */
#define RCC_PLLDIV_DIVN_DIV69   (0x044UL)                                              /*!< Value 0x00000044 */
#define RCC_PLLDIV_DIVN_DIV70   (0x045UL)                                              /*!< Value 0x00000045 */
#define RCC_PLLDIV_DIVN_DIV71   (0x046UL)                                              /*!< Value 0x00000046 */
#define RCC_PLLDIV_DIVN_DIV72   (0x047UL)                                              /*!< Value 0x00000047 */
#define RCC_PLLDIV_DIVN_DIV73   (0x048UL)                                              /*!< Value 0x00000048 */
#define RCC_PLLDIV_DIVN_DIV74   (0x049UL)                                              /*!< Value 0x00000049 */
#define RCC_PLLDIV_DIVN_DIV75   (0x04AUL)                                              /*!< Value 0x0000004A */
#define RCC_PLLDIV_DIVN_DIV76   (0x04BUL)                                              /*!< Value 0x0000004B */
#define RCC_PLLDIV_DIVN_DIV77   (0x04CUL)                                              /*!< Value 0x0000004C */
#define RCC_PLLDIV_DIVN_DIV78   (0x04DUL)                                              /*!< Value 0x0000004D */
#define RCC_PLLDIV_DIVN_DIV79   (0x04EUL)                                              /*!< Value 0x0000004E */
#define RCC_PLLDIV_DIVN_DIV80   (0x04FUL)                                              /*!< Value 0x0000004F */
#define RCC_PLLDIV_DIVN_DIV81   (0x050UL)                                              /*!< Value 0x00000050 */
#define RCC_PLLDIV_DIVN_DIV82   (0x051UL)                                              /*!< Value 0x00000051 */
#define RCC_PLLDIV_DIVN_DIV83   (0x052UL)                                              /*!< Value 0x00000052 */
#define RCC_PLLDIV_DIVN_DIV84   (0x053UL)                                              /*!< Value 0x00000053 */
#define RCC_PLLDIV_DIVN_DIV85   (0x054UL)                                              /*!< Value 0x00000054 */
#define RCC_PLLDIV_DIVN_DIV86   (0x055UL)                                              /*!< Value 0x00000055 */
#define RCC_PLLDIV_DIVN_DIV87   (0x056UL)                                              /*!< Value 0x00000056 */
#define RCC_PLLDIV_DIVN_DIV88   (0x057UL)                                              /*!< Value 0x00000057 */
#define RCC_PLLDIV_DIVN_DIV89   (0x058UL)                                              /*!< Value 0x00000058 */
#define RCC_PLLDIV_DIVN_DIV90   (0x059UL)                                              /*!< Value 0x00000059 */
#define RCC_PLLDIV_DIVN_DIV91   (0x05AUL)                                              /*!< Value 0x0000005A */
#define RCC_PLLDIV_DIVN_DIV92   (0x05BUL)                                              /*!< Value 0x0000005B */
#define RCC_PLLDIV_DIVN_DIV93   (0x05CUL)                                              /*!< Value 0x0000005C */
#define RCC_PLLDIV_DIVN_DIV94   (0x05DUL)                                              /*!< Value 0x0000005D */
#define RCC_PLLDIV_DIVN_DIV95   (0x05EUL)                                              /*!< Value 0x0000005E */
#define RCC_PLLDIV_DIVN_DIV96   (0x05FUL)                                              /*!< Value 0x0000005F */
#define RCC_PLLDIV_DIVN_DIV97   (0x060UL)                                              /*!< Value 0x00000060 */
#define RCC_PLLDIV_DIVN_DIV98   (0x061UL)                                              /*!< Value 0x00000061 */
#define RCC_PLLDIV_DIVN_DIV99   (0x062UL)                                              /*!< Value 0x00000062 */
#define RCC_PLLDIV_DIVN_DIV100  (0x063UL)                                              /*!< Value 0x00000063 */
#define RCC_PLLDIV_DIVN_DIV101  (0x064UL)                                              /*!< Value 0x00000064 */
#define RCC_PLLDIV_DIVN_DIV102  (0x065UL)                                              /*!< Value 0x00000065 */
#define RCC_PLLDIV_DIVN_DIV103  (0x066UL)                                              /*!< Value 0x00000066 */
#define RCC_PLLDIV_DIVN_DIV104  (0x067UL)                                              /*!< Value 0x00000067 */
#define RCC_PLLDIV_DIVN_DIV105  (0x068UL)                                              /*!< Value 0x00000068 */
#define RCC_PLLDIV_DIVN_DIV106  (0x069UL)                                              /*!< Value 0x00000069 */
#define RCC_PLLDIV_DIVN_DIV107  (0x06AUL)                                              /*!< Value 0x0000006A */
#define RCC_PLLDIV_DIVN_DIV108  (0x06BUL)                                              /*!< Value 0x0000006B */
#define RCC_PLLDIV_DIVN_DIV109  (0x06CUL)                                              /*!< Value 0x0000006C */
#define RCC_PLLDIV_DIVN_DIV110  (0x06DUL)                                              /*!< Value 0x0000006D */
#define RCC_PLLDIV_DIVN_DIV111  (0x06EUL)                                              /*!< Value 0x0000006E */
#define RCC_PLLDIV_DIVN_DIV112  (0x06FUL)                                              /*!< Value 0x0000006F */
#define RCC_PLLDIV_DIVN_DIV113  (0x070UL)                                              /*!< Value 0x00000070 */
#define RCC_PLLDIV_DIVN_DIV114  (0x071UL)                                              /*!< Value 0x00000071 */
#define RCC_PLLDIV_DIVN_DIV115  (0x072UL)                                              /*!< Value 0x00000072 */
#define RCC_PLLDIV_DIVN_DIV116  (0x073UL)                                              /*!< Value 0x00000073 */
#define RCC_PLLDIV_DIVN_DIV117  (0x074UL)                                              /*!< Value 0x00000074 */
#define RCC_PLLDIV_DIVN_DIV118  (0x075UL)                                              /*!< Value 0x00000075 */
#define RCC_PLLDIV_DIVN_DIV119  (0x076UL)                                              /*!< Value 0x00000076 */
#define RCC_PLLDIV_DIVN_DIV120  (0x077UL)                                              /*!< Value 0x00000077 */
#define RCC_PLLDIV_DIVN_DIV121  (0x078UL)                                              /*!< Value 0x00000078 */
#define RCC_PLLDIV_DIVN_DIV122  (0x079UL)                                              /*!< Value 0x00000079 */
#define RCC_PLLDIV_DIVN_DIV123  (0x07AUL)                                              /*!< Value 0x0000007A */
#define RCC_PLLDIV_DIVN_DIV124  (0x07BUL)                                              /*!< Value 0x0000007B */
#define RCC_PLLDIV_DIVN_DIV125  (0x07CUL)                                              /*!< Value 0x0000007C */
#define RCC_PLLDIV_DIVN_DIV126  (0x07DUL)                                              /*!< Value 0x0000007D */
#define RCC_PLLDIV_DIVN_DIV127  (0x07EUL)                                              /*!< Value 0x0000007E */
#define RCC_PLLDIV_DIVN_DIV128  (0x07FUL)                                              /*!< Value 0x0000007F */
#define RCC_PLLDIV_DIVN_DIV129  (0x080UL)                                              /*!< Value 0x00000080 */
#define RCC_PLLDIV_DIVN_DIV130  (0x081UL)                                              /*!< Value 0x00000081 */
#define RCC_PLLDIV_DIVN_DIV131  (0x082UL)                                              /*!< Value 0x00000082 */
#define RCC_PLLDIV_DIVN_DIV132  (0x083UL)                                              /*!< Value 0x00000083 */
#define RCC_PLLDIV_DIVN_DIV133  (0x084UL)                                              /*!< Value 0x00000084 */
#define RCC_PLLDIV_DIVN_DIV134  (0x085UL)                                              /*!< Value 0x00000085 */
#define RCC_PLLDIV_DIVN_DIV135  (0x086UL)                                              /*!< Value 0x00000086 */
#define RCC_PLLDIV_DIVN_DIV136  (0x087UL)                                              /*!< Value 0x00000087 */
#define RCC_PLLDIV_DIVN_DIV137  (0x088UL)                                              /*!< Value 0x00000088 */
#define RCC_PLLDIV_DIVN_DIV138  (0x089UL)                                              /*!< Value 0x00000089 */
#define RCC_PLLDIV_DIVN_DIV139  (0x08AUL)                                              /*!< Value 0x0000008A */
#define RCC_PLLDIV_DIVN_DIV140  (0x08BUL)                                              /*!< Value 0x0000008B */
#define RCC_PLLDIV_DIVN_DIV141  (0x08CUL)                                              /*!< Value 0x0000008C */
#define RCC_PLLDIV_DIVN_DIV142  (0x08DUL)                                              /*!< Value 0x0000008D */
#define RCC_PLLDIV_DIVN_DIV143  (0x08EUL)                                              /*!< Value 0x0000008E */
#define RCC_PLLDIV_DIVN_DIV144  (0x08FUL)                                              /*!< Value 0x0000008F */
#define RCC_PLLDIV_DIVN_DIV145  (0x090UL)                                              /*!< Value 0x00000090 */
#define RCC_PLLDIV_DIVN_DIV146  (0x091UL)                                              /*!< Value 0x00000091 */
#define RCC_PLLDIV_DIVN_DIV147  (0x092UL)                                              /*!< Value 0x00000092 */
#define RCC_PLLDIV_DIVN_DIV148  (0x093UL)                                              /*!< Value 0x00000093 */
#define RCC_PLLDIV_DIVN_DIV149  (0x094UL)                                              /*!< Value 0x00000094 */
#define RCC_PLLDIV_DIVN_DIV150  (0x095UL)                                              /*!< Value 0x00000095 */
#define RCC_PLLDIV_DIVN_DIV151  (0x096UL)                                              /*!< Value 0x00000096 */
#define RCC_PLLDIV_DIVN_DIV152  (0x097UL)                                              /*!< Value 0x00000097 */
#define RCC_PLLDIV_DIVN_DIV153  (0x098UL)                                              /*!< Value 0x00000098 */
#define RCC_PLLDIV_DIVN_DIV154  (0x099UL)                                              /*!< Value 0x00000099 */
#define RCC_PLLDIV_DIVN_DIV155  (0x09AUL)                                              /*!< Value 0x0000009A */
#define RCC_PLLDIV_DIVN_DIV156  (0x09BUL)                                              /*!< Value 0x0000009B */
#define RCC_PLLDIV_DIVN_DIV157  (0x09CUL)                                              /*!< Value 0x0000009C */
#define RCC_PLLDIV_DIVN_DIV158  (0x09DUL)                                              /*!< Value 0x0000009D */
#define RCC_PLLDIV_DIVN_DIV159  (0x09EUL)                                              /*!< Value 0x0000009E */
#define RCC_PLLDIV_DIVN_DIV160  (0x09FUL)                                              /*!< Value 0x0000009F */
#define RCC_PLLDIV_DIVN_DIV161  (0x0A0UL)                                              /*!< Value 0x000000A0 */
#define RCC_PLLDIV_DIVN_DIV162  (0x0A1UL)                                              /*!< Value 0x000000A1 */
#define RCC_PLLDIV_DIVN_DIV163  (0x0A2UL)                                              /*!< Value 0x000000A2 */
#define RCC_PLLDIV_DIVN_DIV164  (0x0A3UL)                                              /*!< Value 0x000000A3 */
#define RCC_PLLDIV_DIVN_DIV165  (0x0A4UL)                                              /*!< Value 0x000000A4 */
#define RCC_PLLDIV_DIVN_DIV166  (0x0A5UL)                                              /*!< Value 0x000000A5 */
#define RCC_PLLDIV_DIVN_DIV167  (0x0A6UL)                                              /*!< Value 0x000000A6 */
#define RCC_PLLDIV_DIVN_DIV168  (0x0A7UL)                                              /*!< Value 0x000000A7 */
#define RCC_PLLDIV_DIVN_DIV169  (0x0A8UL)                                              /*!< Value 0x000000A8 */
#define RCC_PLLDIV_DIVN_DIV170  (0x0A9UL)                                              /*!< Value 0x000000A9 */
#define RCC_PLLDIV_DIVN_DIV171  (0x0AAUL)                                              /*!< Value 0x000000AA */
#define RCC_PLLDIV_DIVN_DIV172  (0x0ABUL)                                              /*!< Value 0x000000AB */
#define RCC_PLLDIV_DIVN_DIV173  (0x0ACUL)                                              /*!< Value 0x000000AC */
#define RCC_PLLDIV_DIVN_DIV174  (0x0ADUL)                                              /*!< Value 0x000000AD */
#define RCC_PLLDIV_DIVN_DIV175  (0x0AEUL)                                              /*!< Value 0x000000AE */
#define RCC_PLLDIV_DIVN_DIV176  (0x0AFUL)                                              /*!< Value 0x000000AF */
#define RCC_PLLDIV_DIVN_DIV177  (0x0B0UL)                                              /*!< Value 0x000000B0 */
#define RCC_PLLDIV_DIVN_DIV178  (0x0B1UL)                                              /*!< Value 0x000000B1 */
#define RCC_PLLDIV_DIVN_DIV179  (0x0B2UL)                                              /*!< Value 0x000000B2 */
#define RCC_PLLDIV_DIVN_DIV180  (0x0B3UL)                                              /*!< Value 0x000000B3 */
#define RCC_PLLDIV_DIVN_DIV181  (0x0B4UL)                                              /*!< Value 0x000000B4 */
#define RCC_PLLDIV_DIVN_DIV182  (0x0B5UL)                                              /*!< Value 0x000000B5 */
#define RCC_PLLDIV_DIVN_DIV183  (0x0B6UL)                                              /*!< Value 0x000000B6 */
#define RCC_PLLDIV_DIVN_DIV184  (0x0B7UL)                                              /*!< Value 0x000000B7 */
#define RCC_PLLDIV_DIVN_DIV185  (0x0B8UL)                                              /*!< Value 0x000000B8 */
#define RCC_PLLDIV_DIVN_DIV186  (0x0B9UL)                                              /*!< Value 0x000000B9 */
#define RCC_PLLDIV_DIVN_DIV187  (0x0BAUL)                                              /*!< Value 0x000000BA */
#define RCC_PLLDIV_DIVN_DIV188  (0x0BBUL)                                              /*!< Value 0x000000BB */
#define RCC_PLLDIV_DIVN_DIV189  (0x0BCUL)                                              /*!< Value 0x000000BC */
#define RCC_PLLDIV_DIVN_DIV190  (0x0BDUL)                                              /*!< Value 0x000000BD */
#define RCC_PLLDIV_DIVN_DIV191  (0x0BEUL)                                              /*!< Value 0x000000BE */
#define RCC_PLLDIV_DIVN_DIV192  (0x0BFUL)                                              /*!< Value 0x000000BF */
#define RCC_PLLDIV_DIVN_DIV193  (0x0C0UL)                                              /*!< Value 0x000000C0 */
#define RCC_PLLDIV_DIVN_DIV194  (0x0C1UL)                                              /*!< Value 0x000000C1 */
#define RCC_PLLDIV_DIVN_DIV195  (0x0C2UL)                                              /*!< Value 0x000000C2 */
#define RCC_PLLDIV_DIVN_DIV196  (0x0C3UL)                                              /*!< Value 0x000000C3 */
#define RCC_PLLDIV_DIVN_DIV197  (0x0C4UL)                                              /*!< Value 0x000000C4 */
#define RCC_PLLDIV_DIVN_DIV198  (0x0C5UL)                                              /*!< Value 0x000000C5 */
#define RCC_PLLDIV_DIVN_DIV199  (0x0C6UL)                                              /*!< Value 0x000000C6 */
#define RCC_PLLDIV_DIVN_DIV200  (0x0C7UL)                                              /*!< Value 0x000000C7 */
#define RCC_PLLDIV_DIVN_DIV201  (0x0C8UL)                                              /*!< Value 0x000000C8 */
#define RCC_PLLDIV_DIVN_DIV202  (0x0C9UL)                                              /*!< Value 0x000000C9 */
#define RCC_PLLDIV_DIVN_DIV203  (0x0CAUL)                                              /*!< Value 0x000000CA */
#define RCC_PLLDIV_DIVN_DIV204  (0x0CBUL)                                              /*!< Value 0x000000CB */
#define RCC_PLLDIV_DIVN_DIV205  (0x0CCUL)                                              /*!< Value 0x000000CC */
#define RCC_PLLDIV_DIVN_DIV206  (0x0CDUL)                                              /*!< Value 0x000000CD */
#define RCC_PLLDIV_DIVN_DIV207  (0x0CEUL)                                              /*!< Value 0x000000CE */
#define RCC_PLLDIV_DIVN_DIV208  (0x0CFUL)                                              /*!< Value 0x000000CF */
#define RCC_PLLDIV_DIVN_DIV209  (0x0D0UL)                                              /*!< Value 0x000000D0 */
#define RCC_PLLDIV_DIVN_DIV210  (0x0D1UL)                                              /*!< Value 0x000000D1 */
#define RCC_PLLDIV_DIVN_DIV211  (0x0D2UL)                                              /*!< Value 0x000000D2 */
#define RCC_PLLDIV_DIVN_DIV212  (0x0D3UL)                                              /*!< Value 0x000000D3 */
#define RCC_PLLDIV_DIVN_DIV213  (0x0D4UL)                                              /*!< Value 0x000000D4 */
#define RCC_PLLDIV_DIVN_DIV214  (0x0D5UL)                                              /*!< Value 0x000000D5 */
#define RCC_PLLDIV_DIVN_DIV215  (0x0D6UL)                                              /*!< Value 0x000000D6 */
#define RCC_PLLDIV_DIVN_DIV216  (0x0D7UL)                                              /*!< Value 0x000000D7 */
#define RCC_PLLDIV_DIVN_DIV217  (0x0D8UL)                                              /*!< Value 0x000000D8 */
#define RCC_PLLDIV_DIVN_DIV218  (0x0D9UL)                                              /*!< Value 0x000000D9 */
#define RCC_PLLDIV_DIVN_DIV219  (0x0DAUL)                                              /*!< Value 0x000000DA */
#define RCC_PLLDIV_DIVN_DIV220  (0x0DBUL)                                              /*!< Value 0x000000DB */
#define RCC_PLLDIV_DIVN_DIV221  (0x0DCUL)                                              /*!< Value 0x000000DC */
#define RCC_PLLDIV_DIVN_DIV222  (0x0DDUL)                                              /*!< Value 0x000000DD */
#define RCC_PLLDIV_DIVN_DIV223  (0x0DEUL)                                              /*!< Value 0x000000DE */
#define RCC_PLLDIV_DIVN_DIV224  (0x0DFUL)                                              /*!< Value 0x000000DF */
#define RCC_PLLDIV_DIVN_DIV225  (0x0E0UL)                                              /*!< Value 0x000000E0 */
#define RCC_PLLDIV_DIVN_DIV226  (0x0E1UL)                                              /*!< Value 0x000000E1 */
#define RCC_PLLDIV_DIVN_DIV227  (0x0E2UL)                                              /*!< Value 0x000000E2 */
#define RCC_PLLDIV_DIVN_DIV228  (0x0E3UL)                                              /*!< Value 0x000000E3 */
#define RCC_PLLDIV_DIVN_DIV229  (0x0E4UL)                                              /*!< Value 0x000000E4 */
#define RCC_PLLDIV_DIVN_DIV230  (0x0E5UL)                                              /*!< Value 0x000000E5 */
#define RCC_PLLDIV_DIVN_DIV231  (0x0E6UL)                                              /*!< Value 0x000000E6 */
#define RCC_PLLDIV_DIVN_DIV232  (0x0E7UL)                                              /*!< Value 0x000000E7 */
#define RCC_PLLDIV_DIVN_DIV233  (0x0E8UL)                                              /*!< Value 0x000000E8 */
#define RCC_PLLDIV_DIVN_DIV234  (0x0E9UL)                                              /*!< Value 0x000000E9 */
#define RCC_PLLDIV_DIVN_DIV235  (0x0EAUL)                                              /*!< Value 0x000000EA */
#define RCC_PLLDIV_DIVN_DIV236  (0x0EBUL)                                              /*!< Value 0x000000EB */
#define RCC_PLLDIV_DIVN_DIV237  (0x0ECUL)                                              /*!< Value 0x000000EC */
#define RCC_PLLDIV_DIVN_DIV238  (0x0EDUL)                                              /*!< Value 0x000000ED */
#define RCC_PLLDIV_DIVN_DIV239  (0x0EEUL)                                              /*!< Value 0x000000EE */
#define RCC_PLLDIV_DIVN_DIV240  (0x0EFUL)                                              /*!< Value 0x000000EF */
#define RCC_PLLDIV_DIVN_DIV241  (0x0F0UL)                                              /*!< Value 0x000000F0 */
#define RCC_PLLDIV_DIVN_DIV242  (0x0F1UL)                                              /*!< Value 0x000000F1 */
#define RCC_PLLDIV_DIVN_DIV243  (0x0F2UL)                                              /*!< Value 0x000000F2 */
#define RCC_PLLDIV_DIVN_DIV244  (0x0F3UL)                                              /*!< Value 0x000000F3 */
#define RCC_PLLDIV_DIVN_DIV245  (0x0F4UL)                                              /*!< Value 0x000000F4 */
#define RCC_PLLDIV_DIVN_DIV246  (0x0F5UL)                                              /*!< Value 0x000000F5 */
#define RCC_PLLDIV_DIVN_DIV247  (0x0F6UL)                                              /*!< Value 0x000000F6 */
#define RCC_PLLDIV_DIVN_DIV248  (0x0F7UL)                                              /*!< Value 0x000000F7 */
#define RCC_PLLDIV_DIVN_DIV249  (0x0F8UL)                                              /*!< Value 0x000000F8 */
#define RCC_PLLDIV_DIVN_DIV250  (0x0F9UL)                                              /*!< Value 0x000000F9 */
#define RCC_PLLDIV_DIVN_DIV251  (0x0FAUL)                                              /*!< Value 0x000000FA */
#define RCC_PLLDIV_DIVN_DIV252  (0x0FBUL)                                              /*!< Value 0x000000FB */
#define RCC_PLLDIV_DIVN_DIV253  (0x0FCUL)                                              /*!< Value 0x000000FC */
#define RCC_PLLDIV_DIVN_DIV254  (0x0FDUL)                                              /*!< Value 0x000000FD */
#define RCC_PLLDIV_DIVN_DIV255  (0x0FEUL)                                              /*!< Value 0x000000FE */
#define RCC_PLLDIV_DIVN_DIV256  (0x0FFUL)                                              /*!< Value 0x000000FF */
#define RCC_PLLDIV_DIVN_DIV257  (0x100UL)                                              /*!< Value 0x00000100 */
#define RCC_PLLDIV_DIVN_DIV258  (0x101UL)                                              /*!< Value 0x00000101 */
#define RCC_PLLDIV_DIVN_DIV259  (0x102UL)                                              /*!< Value 0x00000102 */
#define RCC_PLLDIV_DIVN_DIV260  (0x103UL)                                              /*!< Value 0x00000103 */
#define RCC_PLLDIV_DIVN_DIV261  (0x104UL)                                              /*!< Value 0x00000104 */
#define RCC_PLLDIV_DIVN_DIV262  (0x105UL)                                              /*!< Value 0x00000105 */
#define RCC_PLLDIV_DIVN_DIV263  (0x106UL)                                              /*!< Value 0x00000106 */
#define RCC_PLLDIV_DIVN_DIV264  (0x107UL)                                              /*!< Value 0x00000107 */
#define RCC_PLLDIV_DIVN_DIV265  (0x108UL)                                              /*!< Value 0x00000108 */
#define RCC_PLLDIV_DIVN_DIV266  (0x109UL)                                              /*!< Value 0x00000109 */
#define RCC_PLLDIV_DIVN_DIV267  (0x10AUL)                                              /*!< Value 0x0000010A */
#define RCC_PLLDIV_DIVN_DIV268  (0x10BUL)                                              /*!< Value 0x0000010B */
#define RCC_PLLDIV_DIVN_DIV269  (0x10CUL)                                              /*!< Value 0x0000010C */
#define RCC_PLLDIV_DIVN_DIV270  (0x10DUL)                                              /*!< Value 0x0000010D */
#define RCC_PLLDIV_DIVN_DIV271  (0x10EUL)                                              /*!< Value 0x0000010E */
#define RCC_PLLDIV_DIVN_DIV272  (0x10FUL)                                              /*!< Value 0x0000010F */
#define RCC_PLLDIV_DIVN_DIV273  (0x110UL)                                              /*!< Value 0x00000110 */
#define RCC_PLLDIV_DIVN_DIV274  (0x111UL)                                              /*!< Value 0x00000111 */
#define RCC_PLLDIV_DIVN_DIV275  (0x112UL)                                              /*!< Value 0x00000112 */
#define RCC_PLLDIV_DIVN_DIV276  (0x113UL)                                              /*!< Value 0x00000113 */
#define RCC_PLLDIV_DIVN_DIV277  (0x114UL)                                              /*!< Value 0x00000114 */
#define RCC_PLLDIV_DIVN_DIV278  (0x115UL)                                              /*!< Value 0x00000115 */
#define RCC_PLLDIV_DIVN_DIV279  (0x116UL)                                              /*!< Value 0x00000116 */
#define RCC_PLLDIV_DIVN_DIV280  (0x117UL)                                              /*!< Value 0x00000117 */
#define RCC_PLLDIV_DIVN_DIV281  (0x118UL)                                              /*!< Value 0x00000118 */
#define RCC_PLLDIV_DIVN_DIV282  (0x119UL)                                              /*!< Value 0x00000119 */
#define RCC_PLLDIV_DIVN_DIV283  (0x11AUL)                                              /*!< Value 0x0000011A */
#define RCC_PLLDIV_DIVN_DIV284  (0x11BUL)                                              /*!< Value 0x0000011B */
#define RCC_PLLDIV_DIVN_DIV285  (0x11CUL)                                              /*!< Value 0x0000011C */
#define RCC_PLLDIV_DIVN_DIV286  (0x11DUL)                                              /*!< Value 0x0000011D */
#define RCC_PLLDIV_DIVN_DIV287  (0x11EUL)                                              /*!< Value 0x0000011E */
#define RCC_PLLDIV_DIVN_DIV288  (0x11FUL)                                              /*!< Value 0x0000011F */
#define RCC_PLLDIV_DIVN_DIV289  (0x120UL)                                              /*!< Value 0x00000120 */
#define RCC_PLLDIV_DIVN_DIV290  (0x121UL)                                              /*!< Value 0x00000121 */
#define RCC_PLLDIV_DIVN_DIV291  (0x122UL)                                              /*!< Value 0x00000122 */
#define RCC_PLLDIV_DIVN_DIV292  (0x123UL)                                              /*!< Value 0x00000123 */
#define RCC_PLLDIV_DIVN_DIV293  (0x124UL)                                              /*!< Value 0x00000124 */
#define RCC_PLLDIV_DIVN_DIV294  (0x125UL)                                              /*!< Value 0x00000125 */
#define RCC_PLLDIV_DIVN_DIV295  (0x126UL)                                              /*!< Value 0x00000126 */
#define RCC_PLLDIV_DIVN_DIV296  (0x127UL)                                              /*!< Value 0x00000127 */
#define RCC_PLLDIV_DIVN_DIV297  (0x128UL)                                              /*!< Value 0x00000128 */
#define RCC_PLLDIV_DIVN_DIV298  (0x129UL)                                              /*!< Value 0x00000129 */
#define RCC_PLLDIV_DIVN_DIV299  (0x12AUL)                                              /*!< Value 0x0000012A */
#define RCC_PLLDIV_DIVN_DIV300  (0x12BUL)                                              /*!< Value 0x0000012B */
#define RCC_PLLDIV_DIVN_DIV301  (0x12CUL)                                              /*!< Value 0x0000012C */
#define RCC_PLLDIV_DIVN_DIV302  (0x12DUL)                                              /*!< Value 0x0000012D */
#define RCC_PLLDIV_DIVN_DIV303  (0x12EUL)                                              /*!< Value 0x0000012E */
#define RCC_PLLDIV_DIVN_DIV304  (0x12FUL)                                              /*!< Value 0x0000012F */
#define RCC_PLLDIV_DIVN_DIV305  (0x130UL)                                              /*!< Value 0x00000130 */
#define RCC_PLLDIV_DIVN_DIV306  (0x131UL)                                              /*!< Value 0x00000131 */
#define RCC_PLLDIV_DIVN_DIV307  (0x132UL)                                              /*!< Value 0x00000132 */
#define RCC_PLLDIV_DIVN_DIV308  (0x133UL)                                              /*!< Value 0x00000133 */
#define RCC_PLLDIV_DIVN_DIV309  (0x134UL)                                              /*!< Value 0x00000134 */
#define RCC_PLLDIV_DIVN_DIV310  (0x135UL)                                              /*!< Value 0x00000135 */
#define RCC_PLLDIV_DIVN_DIV311  (0x136UL)                                              /*!< Value 0x00000136 */
#define RCC_PLLDIV_DIVN_DIV312  (0x137UL)                                              /*!< Value 0x00000137 */
#define RCC_PLLDIV_DIVN_DIV313  (0x138UL)                                              /*!< Value 0x00000138 */
#define RCC_PLLDIV_DIVN_DIV314  (0x139UL)                                              /*!< Value 0x00000139 */
#define RCC_PLLDIV_DIVN_DIV315  (0x13AUL)                                              /*!< Value 0x0000013A */
#define RCC_PLLDIV_DIVN_DIV316  (0x13BUL)                                              /*!< Value 0x0000013B */
#define RCC_PLLDIV_DIVN_DIV317  (0x13CUL)                                              /*!< Value 0x0000013C */
#define RCC_PLLDIV_DIVN_DIV318  (0x13DUL)                                              /*!< Value 0x0000013D */
#define RCC_PLLDIV_DIVN_DIV319  (0x13EUL)                                              /*!< Value 0x0000013E */
#define RCC_PLLDIV_DIVN_DIV320  (0x13FUL)                                              /*!< Value 0x0000013F */
#define RCC_PLLDIV_DIVN_DIV321  (0x140UL)                                              /*!< Value 0x00000140 */
#define RCC_PLLDIV_DIVN_DIV322  (0x141UL)                                              /*!< Value 0x00000141 */
#define RCC_PLLDIV_DIVN_DIV323  (0x142UL)                                              /*!< Value 0x00000142 */
#define RCC_PLLDIV_DIVN_DIV324  (0x143UL)                                              /*!< Value 0x00000143 */
#define RCC_PLLDIV_DIVN_DIV325  (0x144UL)                                              /*!< Value 0x00000144 */
#define RCC_PLLDIV_DIVN_DIV326  (0x145UL)                                              /*!< Value 0x00000145 */
#define RCC_PLLDIV_DIVN_DIV327  (0x146UL)                                              /*!< Value 0x00000146 */
#define RCC_PLLDIV_DIVN_DIV328  (0x147UL)                                              /*!< Value 0x00000147 */
#define RCC_PLLDIV_DIVN_DIV329  (0x148UL)                                              /*!< Value 0x00000148 */
#define RCC_PLLDIV_DIVN_DIV330  (0x149UL)                                              /*!< Value 0x00000149 */
#define RCC_PLLDIV_DIVN_DIV331  (0x14AUL)                                              /*!< Value 0x0000014A */
#define RCC_PLLDIV_DIVN_DIV332  (0x14BUL)                                              /*!< Value 0x0000014B */
#define RCC_PLLDIV_DIVN_DIV333  (0x14CUL)                                              /*!< Value 0x0000014C */
#define RCC_PLLDIV_DIVN_DIV334  (0x14DUL)                                              /*!< Value 0x0000014D */
#define RCC_PLLDIV_DIVN_DIV335  (0x14EUL)                                              /*!< Value 0x0000014E */
#define RCC_PLLDIV_DIVN_DIV336  (0x14FUL)                                              /*!< Value 0x0000014F */
#define RCC_PLLDIV_DIVN_DIV337  (0x150UL)                                              /*!< Value 0x00000150 */
#define RCC_PLLDIV_DIVN_DIV338  (0x151UL)                                              /*!< Value 0x00000151 */
#define RCC_PLLDIV_DIVN_DIV339  (0x152UL)                                              /*!< Value 0x00000152 */
#define RCC_PLLDIV_DIVN_DIV340  (0x153UL)                                              /*!< Value 0x00000153 */
#define RCC_PLLDIV_DIVN_DIV341  (0x154UL)                                              /*!< Value 0x00000154 */
#define RCC_PLLDIV_DIVN_DIV342  (0x155UL)                                              /*!< Value 0x00000155 */
#define RCC_PLLDIV_DIVN_DIV343  (0x156UL)                                              /*!< Value 0x00000156 */
#define RCC_PLLDIV_DIVN_DIV344  (0x157UL)                                              /*!< Value 0x00000157 */
#define RCC_PLLDIV_DIVN_DIV345  (0x158UL)                                              /*!< Value 0x00000158 */
#define RCC_PLLDIV_DIVN_DIV346  (0x159UL)                                              /*!< Value 0x00000159 */
#define RCC_PLLDIV_DIVN_DIV347  (0x15AUL)                                              /*!< Value 0x0000015A */
#define RCC_PLLDIV_DIVN_DIV348  (0x15BUL)                                              /*!< Value 0x0000015B */
#define RCC_PLLDIV_DIVN_DIV349  (0x15CUL)                                              /*!< Value 0x0000015C */
#define RCC_PLLDIV_DIVN_DIV350  (0x15DUL)                                              /*!< Value 0x0000015D */
#define RCC_PLLDIV_DIVN_DIV351  (0x15EUL)                                              /*!< Value 0x0000015E */
#define RCC_PLLDIV_DIVN_DIV352  (0x15FUL)                                              /*!< Value 0x0000015F */
#define RCC_PLLDIV_DIVN_DIV353  (0x160UL)                                              /*!< Value 0x00000160 */
#define RCC_PLLDIV_DIVN_DIV354  (0x161UL)                                              /*!< Value 0x00000161 */
#define RCC_PLLDIV_DIVN_DIV355  (0x162UL)                                              /*!< Value 0x00000162 */
#define RCC_PLLDIV_DIVN_DIV356  (0x163UL)                                              /*!< Value 0x00000163 */
#define RCC_PLLDIV_DIVN_DIV357  (0x164UL)                                              /*!< Value 0x00000164 */
#define RCC_PLLDIV_DIVN_DIV358  (0x165UL)                                              /*!< Value 0x00000165 */
#define RCC_PLLDIV_DIVN_DIV359  (0x166UL)                                              /*!< Value 0x00000166 */
#define RCC_PLLDIV_DIVN_DIV360  (0x167UL)                                              /*!< Value 0x00000167 */
#define RCC_PLLDIV_DIVN_DIV361  (0x168UL)                                              /*!< Value 0x00000168 */
#define RCC_PLLDIV_DIVN_DIV362  (0x169UL)                                              /*!< Value 0x00000169 */
#define RCC_PLLDIV_DIVN_DIV363  (0x16AUL)                                              /*!< Value 0x0000016A */
#define RCC_PLLDIV_DIVN_DIV364  (0x16BUL)                                              /*!< Value 0x0000016B */
#define RCC_PLLDIV_DIVN_DIV365  (0x16CUL)                                              /*!< Value 0x0000016C */
#define RCC_PLLDIV_DIVN_DIV366  (0x16DUL)                                              /*!< Value 0x0000016D */
#define RCC_PLLDIV_DIVN_DIV367  (0x16EUL)                                              /*!< Value 0x0000016E */
#define RCC_PLLDIV_DIVN_DIV368  (0x16FUL)                                              /*!< Value 0x0000016F */
#define RCC_PLLDIV_DIVN_DIV369  (0x170UL)                                              /*!< Value 0x00000170 */
#define RCC_PLLDIV_DIVN_DIV370  (0x171UL)                                              /*!< Value 0x00000171 */
#define RCC_PLLDIV_DIVN_DIV371  (0x172UL)                                              /*!< Value 0x00000172 */
#define RCC_PLLDIV_DIVN_DIV372  (0x173UL)                                              /*!< Value 0x00000173 */
#define RCC_PLLDIV_DIVN_DIV373  (0x174UL)                                              /*!< Value 0x00000174 */
#define RCC_PLLDIV_DIVN_DIV374  (0x175UL)                                              /*!< Value 0x00000175 */
#define RCC_PLLDIV_DIVN_DIV375  (0x176UL)                                              /*!< Value 0x00000176 */
#define RCC_PLLDIV_DIVN_DIV376  (0x177UL)                                              /*!< Value 0x00000177 */
#define RCC_PLLDIV_DIVN_DIV377  (0x178UL)                                              /*!< Value 0x00000178 */
#define RCC_PLLDIV_DIVN_DIV378  (0x179UL)                                              /*!< Value 0x00000179 */
#define RCC_PLLDIV_DIVN_DIV379  (0x17AUL)                                              /*!< Value 0x0000017A */
#define RCC_PLLDIV_DIVN_DIV380  (0x17BUL)                                              /*!< Value 0x0000017B */
#define RCC_PLLDIV_DIVN_DIV381  (0x17CUL)                                              /*!< Value 0x0000017C */
#define RCC_PLLDIV_DIVN_DIV382  (0x17DUL)                                              /*!< Value 0x0000017D */
#define RCC_PLLDIV_DIVN_DIV383  (0x17EUL)                                              /*!< Value 0x0000017E */
#define RCC_PLLDIV_DIVN_DIV384  (0x17FUL)                                              /*!< Value 0x0000017F */
#define RCC_PLLDIV_DIVN_DIV385  (0x180UL)                                              /*!< Value 0x00000180 */
#define RCC_PLLDIV_DIVN_DIV386  (0x181UL)                                              /*!< Value 0x00000181 */
#define RCC_PLLDIV_DIVN_DIV387  (0x182UL)                                              /*!< Value 0x00000182 */
#define RCC_PLLDIV_DIVN_DIV388  (0x183UL)                                              /*!< Value 0x00000183 */
#define RCC_PLLDIV_DIVN_DIV389  (0x184UL)                                              /*!< Value 0x00000184 */
#define RCC_PLLDIV_DIVN_DIV390  (0x185UL)                                              /*!< Value 0x00000185 */
#define RCC_PLLDIV_DIVN_DIV391  (0x186UL)                                              /*!< Value 0x00000186 */
#define RCC_PLLDIV_DIVN_DIV392  (0x187UL)                                              /*!< Value 0x00000187 */
#define RCC_PLLDIV_DIVN_DIV393  (0x188UL)                                              /*!< Value 0x00000188 */
#define RCC_PLLDIV_DIVN_DIV394  (0x189UL)                                              /*!< Value 0x00000189 */
#define RCC_PLLDIV_DIVN_DIV395  (0x18AUL)                                              /*!< Value 0x0000018A */
#define RCC_PLLDIV_DIVN_DIV396  (0x18BUL)                                              /*!< Value 0x0000018B */
#define RCC_PLLDIV_DIVN_DIV397  (0x18CUL)                                              /*!< Value 0x0000018C */
#define RCC_PLLDIV_DIVN_DIV398  (0x18DUL)                                              /*!< Value 0x0000018D */
#define RCC_PLLDIV_DIVN_DIV399  (0x18EUL)                                              /*!< Value 0x0000018E */
#define RCC_PLLDIV_DIVN_DIV400  (0x18FUL)                                              /*!< Value 0x0000018F */
#define RCC_PLLDIV_DIVN_DIV401  (0x190UL)                                              /*!< Value 0x00000190 */
#define RCC_PLLDIV_DIVN_DIV402  (0x191UL)                                              /*!< Value 0x00000191 */
#define RCC_PLLDIV_DIVN_DIV403  (0x192UL)                                              /*!< Value 0x00000192 */
#define RCC_PLLDIV_DIVN_DIV404  (0x193UL)                                              /*!< Value 0x00000193 */
#define RCC_PLLDIV_DIVN_DIV405  (0x194UL)                                              /*!< Value 0x00000194 */
#define RCC_PLLDIV_DIVN_DIV406  (0x195UL)                                              /*!< Value 0x00000195 */
#define RCC_PLLDIV_DIVN_DIV407  (0x196UL)                                              /*!< Value 0x00000196 */
#define RCC_PLLDIV_DIVN_DIV408  (0x197UL)                                              /*!< Value 0x00000197 */
#define RCC_PLLDIV_DIVN_DIV409  (0x198UL)                                              /*!< Value 0x00000198 */
#define RCC_PLLDIV_DIVN_DIV410  (0x199UL)                                              /*!< Value 0x00000199 */
#define RCC_PLLDIV_DIVN_DIV411  (0x19AUL)                                              /*!< Value 0x0000019A */
#define RCC_PLLDIV_DIVN_DIV412  (0x19BUL)                                              /*!< Value 0x0000019B */
#define RCC_PLLDIV_DIVN_DIV413  (0x19CUL)                                              /*!< Value 0x0000019C */
#define RCC_PLLDIV_DIVN_DIV414  (0x19DUL)                                              /*!< Value 0x0000019D */
#define RCC_PLLDIV_DIVN_DIV415  (0x19EUL)                                              /*!< Value 0x0000019E */
#define RCC_PLLDIV_DIVN_DIV416  (0x19FUL)                                              /*!< Value 0x0000019F */
#define RCC_PLLDIV_DIVN_DIV417  (0x1A0UL)                                              /*!< Value 0x000001A0 */
#define RCC_PLLDIV_DIVN_DIV418  (0x1A1UL)                                              /*!< Value 0x000001A1 */
#define RCC_PLLDIV_DIVN_DIV419  (0x1A2UL)                                              /*!< Value 0x000001A2 */
#define RCC_PLLDIV_DIVN_DIV420  (0x1A3UL)                                              /*!< Value 0x000001A3 */
#define RCC_PLLDIV_DIVN_DIV421  (0x1A4UL)                                              /*!< Value 0x000001A4 */
#define RCC_PLLDIV_DIVN_DIV422  (0x1A5UL)                                              /*!< Value 0x000001A5 */
#define RCC_PLLDIV_DIVN_DIV423  (0x1A6UL)                                              /*!< Value 0x000001A6 */
#define RCC_PLLDIV_DIVN_DIV424  (0x1A7UL)                                              /*!< Value 0x000001A7 */
#define RCC_PLLDIV_DIVN_DIV425  (0x1A8UL)                                              /*!< Value 0x000001A8 */
#define RCC_PLLDIV_DIVN_DIV426  (0x1A9UL)                                              /*!< Value 0x000001A9 */
#define RCC_PLLDIV_DIVN_DIV427  (0x1AAUL)                                              /*!< Value 0x000001AA */
#define RCC_PLLDIV_DIVN_DIV428  (0x1ABUL)                                              /*!< Value 0x000001AB */
#define RCC_PLLDIV_DIVN_DIV429  (0x1ACUL)                                              /*!< Value 0x000001AC */
#define RCC_PLLDIV_DIVN_DIV430  (0x1ADUL)                                              /*!< Value 0x000001AD */
#define RCC_PLLDIV_DIVN_DIV431  (0x1AEUL)                                              /*!< Value 0x000001AE */
#define RCC_PLLDIV_DIVN_DIV432  (0x1AFUL)                                              /*!< Value 0x000001AF */
#define RCC_PLLDIV_DIVN_DIV433  (0x1B0UL)                                              /*!< Value 0x000001B0 */
#define RCC_PLLDIV_DIVN_DIV434  (0x1B1UL)                                              /*!< Value 0x000001B1 */
#define RCC_PLLDIV_DIVN_DIV435  (0x1B2UL)                                              /*!< Value 0x000001B2 */
#define RCC_PLLDIV_DIVN_DIV436  (0x1B3UL)                                              /*!< Value 0x000001B3 */
#define RCC_PLLDIV_DIVN_DIV437  (0x1B4UL)                                              /*!< Value 0x000001B4 */
#define RCC_PLLDIV_DIVN_DIV438  (0x1B5UL)                                              /*!< Value 0x000001B5 */
#define RCC_PLLDIV_DIVN_DIV439  (0x1B6UL)                                              /*!< Value 0x000001B6 */
#define RCC_PLLDIV_DIVN_DIV440  (0x1B7UL)                                              /*!< Value 0x000001B7 */
#define RCC_PLLDIV_DIVN_DIV441  (0x1B8UL)                                              /*!< Value 0x000001B8 */
#define RCC_PLLDIV_DIVN_DIV442  (0x1B9UL)                                              /*!< Value 0x000001B9 */
#define RCC_PLLDIV_DIVN_DIV443  (0x1BAUL)                                              /*!< Value 0x000001BA */
#define RCC_PLLDIV_DIVN_DIV444  (0x1BBUL)                                              /*!< Value 0x000001BB */
#define RCC_PLLDIV_DIVN_DIV445  (0x1BCUL)                                              /*!< Value 0x000001BC */
#define RCC_PLLDIV_DIVN_DIV446  (0x1BDUL)                                              /*!< Value 0x000001BD */
#define RCC_PLLDIV_DIVN_DIV447  (0x1BEUL)                                              /*!< Value 0x000001BE */
#define RCC_PLLDIV_DIVN_DIV448  (0x1BFUL)                                              /*!< Value 0x000001BF */
#define RCC_PLLDIV_DIVN_DIV449  (0x1C0UL)                                              /*!< Value 0x000001C0 */
#define RCC_PLLDIV_DIVN_DIV450  (0x1C1UL)                                              /*!< Value 0x000001C1 */
#define RCC_PLLDIV_DIVN_DIV451  (0x1C2UL)                                              /*!< Value 0x000001C2 */
#define RCC_PLLDIV_DIVN_DIV452  (0x1C3UL)                                              /*!< Value 0x000001C3 */
#define RCC_PLLDIV_DIVN_DIV453  (0x1C4UL)                                              /*!< Value 0x000001C4 */
#define RCC_PLLDIV_DIVN_DIV454  (0x1C5UL)                                              /*!< Value 0x000001C5 */
#define RCC_PLLDIV_DIVN_DIV455  (0x1C6UL)                                              /*!< Value 0x000001C6 */
#define RCC_PLLDIV_DIVN_DIV456  (0x1C7UL)                                              /*!< Value 0x000001C7 */
#define RCC_PLLDIV_DIVN_DIV457  (0x1C8UL)                                              /*!< Value 0x000001C8 */
#define RCC_PLLDIV_DIVN_DIV458  (0x1C9UL)                                              /*!< Value 0x000001C9 */
#define RCC_PLLDIV_DIVN_DIV459  (0x1CAUL)                                              /*!< Value 0x000001CA */
#define RCC_PLLDIV_DIVN_DIV460  (0x1CBUL)                                              /*!< Value 0x000001CB */
#define RCC_PLLDIV_DIVN_DIV461  (0x1CCUL)                                              /*!< Value 0x000001CC */
#define RCC_PLLDIV_DIVN_DIV462  (0x1CDUL)                                              /*!< Value 0x000001CD */
#define RCC_PLLDIV_DIVN_DIV463  (0x1CEUL)                                              /*!< Value 0x000001CE */
#define RCC_PLLDIV_DIVN_DIV464  (0x1CFUL)                                              /*!< Value 0x000001CF */
#define RCC_PLLDIV_DIVN_DIV465  (0x1D0UL)                                              /*!< Value 0x000001D0 */
#define RCC_PLLDIV_DIVN_DIV466  (0x1D1UL)                                              /*!< Value 0x000001D1 */
#define RCC_PLLDIV_DIVN_DIV467  (0x1D2UL)                                              /*!< Value 0x000001D2 */
#define RCC_PLLDIV_DIVN_DIV468  (0x1D3UL)                                              /*!< Value 0x000001D3 */
#define RCC_PLLDIV_DIVN_DIV469  (0x1D4UL)                                              /*!< Value 0x000001D4 */
#define RCC_PLLDIV_DIVN_DIV470  (0x1D5UL)                                              /*!< Value 0x000001D5 */
#define RCC_PLLDIV_DIVN_DIV471  (0x1D6UL)                                              /*!< Value 0x000001D6 */
#define RCC_PLLDIV_DIVN_DIV472  (0x1D7UL)                                              /*!< Value 0x000001D7 */
#define RCC_PLLDIV_DIVN_DIV473  (0x1D8UL)                                              /*!< Value 0x000001D8 */
#define RCC_PLLDIV_DIVN_DIV474  (0x1D9UL)                                              /*!< Value 0x000001D9 */
#define RCC_PLLDIV_DIVN_DIV475  (0x1DAUL)                                              /*!< Value 0x000001DA */
#define RCC_PLLDIV_DIVN_DIV476  (0x1DBUL)                                              /*!< Value 0x000001DB */
#define RCC_PLLDIV_DIVN_DIV477  (0x1DCUL)                                              /*!< Value 0x000001DC */
#define RCC_PLLDIV_DIVN_DIV478  (0x1DDUL)                                              /*!< Value 0x000001DD */
#define RCC_PLLDIV_DIVN_DIV479  (0x1DEUL)                                              /*!< Value 0x000001DE */
#define RCC_PLLDIV_DIVN_DIV480  (0x1DFUL)                                              /*!< Value 0x000001DF */
#define RCC_PLLDIV_DIVN_DIV481  (0x1E0UL)                                              /*!< Value 0x000001E0 */
#define RCC_PLLDIV_DIVN_DIV482  (0x1E1UL)                                              /*!< Value 0x000001E1 */
#define RCC_PLLDIV_DIVN_DIV483  (0x1E2UL)                                              /*!< Value 0x000001E2 */
#define RCC_PLLDIV_DIVN_DIV484  (0x1E3UL)                                              /*!< Value 0x000001E3 */
#define RCC_PLLDIV_DIVN_DIV485  (0x1E4UL)                                              /*!< Value 0x000001E4 */
#define RCC_PLLDIV_DIVN_DIV486  (0x1E5UL)                                              /*!< Value 0x000001E5 */
#define RCC_PLLDIV_DIVN_DIV487  (0x1E6UL)                                              /*!< Value 0x000001E6 */
#define RCC_PLLDIV_DIVN_DIV488  (0x1E7UL)                                              /*!< Value 0x000001E7 */
#define RCC_PLLDIV_DIVN_DIV489  (0x1E8UL)                                              /*!< Value 0x000001E8 */
#define RCC_PLLDIV_DIVN_DIV490  (0x1E9UL)                                              /*!< Value 0x000001E9 */
#define RCC_PLLDIV_DIVN_DIV491  (0x1EAUL)                                              /*!< Value 0x000001EA */
#define RCC_PLLDIV_DIVN_DIV492  (0x1EBUL)                                              /*!< Value 0x000001EB */
#define RCC_PLLDIV_DIVN_DIV493  (0x1ECUL)                                              /*!< Value 0x000001EC */
#define RCC_PLLDIV_DIVN_DIV494  (0x1EDUL)                                              /*!< Value 0x000001ED */
#define RCC_PLLDIV_DIVN_DIV495  (0x1EEUL)                                              /*!< Value 0x000001EE */
#define RCC_PLLDIV_DIVN_DIV496  (0x1EFUL)                                              /*!< Value 0x000001EF */
#define RCC_PLLDIV_DIVN_DIV497  (0x1F0UL)                                              /*!< Value 0x000001F0 */
#define RCC_PLLDIV_DIVN_DIV498  (0x1F1UL)                                              /*!< Value 0x000001F1 */
#define RCC_PLLDIV_DIVN_DIV499  (0x1F2UL)                                              /*!< Value 0x000001F2 */
#define RCC_PLLDIV_DIVN_DIV500  (0x1F3UL)                                              /*!< Value 0x000001F3 */
#define RCC_PLLDIV_DIVN_DIV501  (0x1F4UL)                                              /*!< Value 0x000001F4 */
#define RCC_PLLDIV_DIVN_DIV502  (0x1F5UL)                                              /*!< Value 0x000001F5 */
#define RCC_PLLDIV_DIVN_DIV503  (0x1F6UL)                                              /*!< Value 0x000001F6 */
#define RCC_PLLDIV_DIVN_DIV504  (0x1F7UL)                                              /*!< Value 0x000001F7 */
#define RCC_PLLDIV_DIVN_DIV505  (0x1F8UL)                                              /*!< Value 0x000001F8 */
#define RCC_PLLDIV_DIVN_DIV506  (0x1F9UL)                                              /*!< Value 0x000001F9 */
#define RCC_PLLDIV_DIVN_DIV507  (0x1FAUL)                                              /*!< Value 0x000001FA */
#define RCC_PLLDIV_DIVN_DIV508  (0x1FBUL)                                              /*!< Value 0x000001FB */
#define RCC_PLLDIV_DIVN_DIV509  (0x1FCUL)                                              /*!< Value 0x000001FC */
#define RCC_PLLDIV_DIVN_DIV510  (0x1FDUL)                                              /*!< Value 0x000001FD */
#define RCC_PLLDIV_DIVN_DIV511  (0x1FEUL)                                              /*!< Value 0x000001FE */
#define RCC_PLLDIV_DIVN_DIV512  (0x1FFUL)                                              /*!< Value 0x000001FF */

/*!< PLL fractional divider register (Macros valid for registers PLL1FRACDIV, PLL2FRACDIV and PLL3FRACDIV) */
#define RCC_PLLFRACDIV_FRACN_OFFSET  (3U)
#define RCC_PLLFRACDIV_FRACN_MASK    (0x1FFFUL << REGISTER_FIELD_OFFSET(RCC, PLLFRACDIV, FRACN))  /*!< Mask  0x0000FFF8 */
#define RCC_PLLFRACDIV_FRACN_1       (0x0001UL)                                                   /*!< Value 0x00000001 */
#define RCC_PLLFRACDIV_FRACN_2       (0x0002UL)                                                   /*!< Value 0x00000002 */
#define RCC_PLLFRACDIV_FRACN_3       (0x0004UL)                                                   /*!< Value 0x00000004 */
#define RCC_PLLFRACDIV_FRACN_4       (0x0008UL)                                                   /*!< Value 0x00000008 */
#define RCC_PLLFRACDIV_FRACN_5       (0x0010UL)                                                   /*!< Value 0x00000010 */
#define RCC_PLLFRACDIV_FRACN_6       (0x0020UL)                                                   /*!< Value 0x00000020 */
#define RCC_PLLFRACDIV_FRACN_7       (0x0040UL)                                                   /*!< Value 0x00000040 */
#define RCC_PLLFRACDIV_FRACN_8       (0x0080UL)                                                   /*!< Value 0x00000080 */
#define RCC_PLLFRACDIV_FRACN_9       (0x0100UL)                                                   /*!< Value 0x00000100 */
#define RCC_PLLFRACDIV_FRACN_10      (0x0200UL)                                                   /*!< Value 0x00000200 */
#define RCC_PLLFRACDIV_FRACN_11      (0x0400UL)                                                   /*!< Value 0x00000400 */
#define RCC_PLLFRACDIV_FRACN_12      (0x0800UL)                                                   /*!< Value 0x00000800 */
#define RCC_PLLFRACDIV_FRACN_13      (0x1000UL)                                                   /*!< Value 0x00001000 */

/*!< Domain 1 kernel configuration register */
#define RCC_D1KERNELCLKCFG_CLKPERIPHERALSEL_OFFSET    (28U)
#define RCC_D1KERNELCLKCFG_CLKPERIPHERALSEL_MASK      (0x3UL << REGISTER_FIELD_OFFSET(RCC, D1KERNELCLKCFG, CLKPERIPHERALSEL))  /*!< Mask  0x30000000 */
#define RCC_D1KERNELCLKCFG_CLKPERIPHERALSEL_HSI       (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D1KERNELCLKCFG_CLKPERIPHERALSEL_CSI       (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D1KERNELCLKCFG_CLKPERIPHERALSEL_HSE       (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D1KERNELCLKCFG_CLKPERIPHERALSEL_DISABLE   (0x3UL)                                                                  /*!< Value 0x00000003 */

#define RCC_D1KERNELCLKCFG_SDMMCCLKSEL_OFFSET         (16U)
#define RCC_D1KERNELCLKCFG_SDMMCCLKSEL_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, D1KERNELCLKCFG, SDMMCCLKSEL))       /*!< Mask  0x00010000 */
#define RCC_D1KERNELCLKCFG_SDMMCCLKSEL_PLL1Q          (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D1KERNELCLKCFG_SDMMCCLKSEL_PLL2R          (0x1UL)                                                                  /*!< Value 0x00000001 */

#define RCC_D1KERNELCLKCFG_DSICLKSEL_OFFSET           (8U)
#define RCC_D1KERNELCLKCFG_DSICLKSEL_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, D1KERNELCLKCFG, DSICLKSEL))         /*!< Mask  0x00001000 */
#define RCC_D1KERNELCLKCFG_DSICLKSEL_PHYCLK           (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D1KERNELCLKCFG_DSICLKSEL_PLL2Q            (0x1UL)                                                                  /*!< Value 0x00000001 */

#define RCC_D1KERNELCLKCFG_QSPICLKSEL_OFFSET          (4U)
#define RCC_D1KERNELCLKCFG_QSPICLKSEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(RCC, D1KERNELCLKCFG, QSPICLKSEL))        /*!< Mask  0x00000030 */
#define RCC_D1KERNELCLKCFG_QSPICLKSEL_HCLK3           (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D1KERNELCLKCFG_QSPICLKSEL_PLL1Q           (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D1KERNELCLKCFG_QSPICLKSEL_PLL2R           (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D1KERNELCLKCFG_QSPICLKSEL_PERIPERAL       (0x3UL)                                                                  /*!< Value 0x00000003 */

#define RCC_D1KERNELCLKCFG_FMCCLKSEL_OFFSET           (0U)
#define RCC_D1KERNELCLKCFG_FMCCLKSEL_MASK             (0x3UL << REGISTER_FIELD_OFFSET(RCC, D1KERNELCLKCFG, FMCCLKSEL))         /*!< Mask  0x00000003 */
#define RCC_D1KERNELCLKCFG_FMCCLKSEL_HCLK3            (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D1KERNELCLKCFG_FMCCLKSEL_PLL1Q            (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D1KERNELCLKCFG_FMCCLKSEL_PLL2R            (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D1KERNELCLKCFG_FMCCLKSEL_PERIPERAL        (0x3UL)                                                                  /*!< Value 0x00000003 */

/*!< Domain 2 kernel configuration register */
#define RCC_D2KERNELCLKCFG0_SINGLEWIRECLKSEL_OFFSET     (31U)
#define RCC_D2KERNELCLKCFG0_SINGLEWIRECLKSEL_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SINGLEWIRECLKSEL))     /*!< Mask  0x80000000 */
#define RCC_D2KERNELCLKCFG0_SINGLEWIRECLKSEL_PCLK       (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SINGLEWIRECLKSEL_HSI        (0x1UL)                                                                      /*!< Value 0x00000001 */

#define RCC_D2KERNELCLKCFG0_FDCANCLKSEL_OFFSET          (28U)
#define RCC_D2KERNELCLKCFG0_FDCANCLKSEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, FDCANCLKSEL))          /*!< Mask  0x30000000 */
#define RCC_D2KERNELCLKCFG0_FDCANCLKSEL_HSE             (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_FDCANCLKSEL_PLL1Q           (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG0_FDCANCLKSEL_PLL2Q           (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG0_FDCANCLKSEL_DISABLE         (0x3UL)                                                                      /*!< Value 0x00000003 */

#define RCC_D2KERNELCLKCFG0_SIGMADELTAMODCLKSEL_OFFSET  (24U)
#define RCC_D2KERNELCLKCFG0_SIGMADELTAMODCLKSEL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SIGMADELTAMODCLKSEL))  /*!< Mask  0x01000000 */
#define RCC_D2KERNELCLKCFG0_SIGMADELTAMODCLKSEL_PCLK2   (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SIGMADELTAMODCLKSEL_SYSCLK  (0x1UL)                                                                      /*!< Value 0x00000001 */

#define RCC_D2KERNELCLKCFG0_SPDIFRXCLKSEL_OFFSET        (20U)
#define RCC_D2KERNELCLKCFG0_SPDIFRXCLKSEL_MASK          (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SPDIFRXCLKSEL))        /*!< Mask  0x00300000 */
#define RCC_D2KERNELCLKCFG0_SPDIFRXCLKSEL_PLL1Q         (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SPDIFRXCLKSEL_PLL2R         (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG0_SPDIFRXCLKSEL_PLL3R         (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG0_SPDIFRXCLKSEL_HSI           (0x3UL)                                                                      /*!< Value 0x00000003 */

#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_OFFSET          (16U)
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_MASK            (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SPI45CLKSEL))          /*!< Mask  0x00070000 */
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_APB             (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_PLL2Q           (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_PLL3Q           (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_HSI             (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_CSI             (0x4UL)                                                                      /*!< Value 0x00000004 */
#define RCC_D2KERNELCLKCFG0_SPI45CLKSEL_HSE             (0x5UL)                                                                      /*!< Value 0x00000005 */

#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_OFFSET         (12U)
#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_MASK           (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SPI123CLKSEL))         /*!< Mask  0x00007000 */
#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_PLL1Q          (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_PLL2P          (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_PLL3P          (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_I2S            (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG0_SPI123CLKSEL_PERIPHERAL     (0x4UL)                                                                      /*!< Value 0x00000004 */

#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_OFFSET          (6U)
#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_MASK            (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SAI23CLKSEL))          /*!< Mask  0x000001C0 */
#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_PLL1Q           (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_PLL2P           (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_PLL3P           (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_I2S             (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG0_SAI23CLKSEL_PERIPHERAL      (0x4UL)                                                                      /*!< Value 0x00000004 */

#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_OFFSET           (0U)
#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_MASK             (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG0, SAI1CLKSEL))           /*!< Mask  0x00000007 */
#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_PLL1Q            (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_PLL2P            (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_PLL3P            (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_I2S              (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG0_SAI1CLKSEL_PERIPHERAL       (0x4UL)                                                                      /*!< Value 0x00000004 */

#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_OFFSET        (28U)
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_MASK          (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, LPTIMERCLKSEL))        /*!< Mask  0x70000000 */
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_PCLK1         (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_PLL2P         (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_PLL3R         (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_LSE           (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_LSI           (0x4UL)                                                                      /*!< Value 0x00000004 */
#define RCC_D2KERNELCLKCFG1_LPTIMERCLKSEL_PERIPHERAL    (0x5UL)                                                                      /*!< Value 0x00000005 */

#define RCC_D2KERNELCLKCFG1_HDMICECCLKSEL_OFFSET        (22U)
#define RCC_D2KERNELCLKCFG1_HDMICECCLKSEL_MASK          (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, HDMICECCLKSEL))        /*!< Mask  0x00C00000 */
#define RCC_D2KERNELCLKCFG1_HDMICECCLKSEL_LSE           (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_HDMICECCLKSEL_LSI           (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_HDMICECCLKSEL_CSI           (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_HDMICECCLKSEL_DISABLE       (0x3UL)                                                                      /*!< Value 0x00000003 */

#define RCC_D2KERNELCLKCFG1_USBCLKSEL_OFFSET            (20U)
#define RCC_D2KERNELCLKCFG1_USBCLKSEL_MASK              (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, USBCLKSEL))            /*!< Mask  0x00300000 */
#define RCC_D2KERNELCLKCFG1_USBCLKSEL_DISABLE           (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_USBCLKSEL_PLL1Q             (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_USBCLKSEL_PLL3Q             (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_USBCLKSEL_HSI48             (0x3UL)                                                                      /*!< Value 0x00000003 */

#define RCC_D2KERNELCLKCFG1_I2C123CLKSEL_OFFSET         (12U)
#define RCC_D2KERNELCLKCFG1_I2C123CLKSEL_MASK           (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, I2C123CLKSEL))         /*!< Mask  0x00003000 */
#define RCC_D2KERNELCLKCFG1_I2C123CLKSEL_PCLK1          (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_I2C123CLKSEL_PLL3R          (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_I2C123CLKSEL_HSI            (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_I2C123CLKSEL_CSI            (0x3UL)                                                                      /*!< Value 0x00000003 */

#define RCC_D2KERNELCLKCFG1_RNGCLKSEL_OFFSET            (8U)
#define RCC_D2KERNELCLKCFG1_RNGCLKSEL_MASK              (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, RNGCLKSEL))            /*!< Mask  0x00000300 */
#define RCC_D2KERNELCLKCFG1_RNGCLKSEL_HSI48             (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_RNGCLKSEL_PLL1Q             (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_RNGCLKSEL_LSE               (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_RNGCLKSEL_LSI               (0x3UL)                                                                      /*!< Value 0x00000003 */

#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_OFFSET         (3U)
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_MASK           (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, UART16CLKSEL))         /*!< Mask  0x0000001C */
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_PCLK2          (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_PLL2Q          (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_PLL3Q          (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_HSI            (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_LSI            (0x4UL)                                                                      /*!< Value 0x00000004 */
#define RCC_D2KERNELCLKCFG1_UART16CLKSEL_LSE            (0x5UL)                                                                      /*!< Value 0x00000005 */

#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_OFFSET     (0U)
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_MASK       (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2KERNELCLKCFG1, UART234578CLKSEL))     /*!< Mask  0x00000007 */
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_PCLK1      (0x0UL)                                                                      /*!< Value 0x00000000 */
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_PLL2Q      (0x1UL)                                                                      /*!< Value 0x00000001 */
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_PLL3Q      (0x2UL)                                                                      /*!< Value 0x00000002 */
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_HSI        (0x3UL)                                                                      /*!< Value 0x00000003 */
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_CSI        (0x4UL)                                                                      /*!< Value 0x00000004 */
#define RCC_D2KERNELCLKCFG1_UART234578CLKSEL_LSE        (0x5UL)                                                                      /*!< Value 0x00000005 */

/*!< Domain 3 kernel configuration register */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_OFFSET            (28U)
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_MASK              (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, SPI6CLKSEL))        /*!< Mask  0x70000000 */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_PCLK4             (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_PLL2Q             (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_PLL3Q             (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_HSI               (0x3UL)                                                                  /*!< Value 0x00000003 */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_CSI               (0x4UL)                                                                  /*!< Value 0x00000004 */
#define RCC_D3KERNELCLKCFG_SPI6CLKSEL_HSE               (0x5UL)                                                                  /*!< Value 0x00000005 */

#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_OFFSET           (24U)
#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_MASK             (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, SAI4BCLKSEL))       /*!< Mask  0x07000000 */
#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_PLL1Q            (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_PLL2P            (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_PLL3P            (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_I2S              (0x3UL)                                                                  /*!< Value 0x00000003 */
#define RCC_D3KERNELCLKCFG_SAI4BCLKSEL_PERIPHERAL       (0x4UL)                                                                  /*!< Value 0x00000004 */

#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_OFFSET           (21U)
#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_MASK             (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, SAI4ACLKSEL))       /*!< Mask  0x00E00000 */
#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_PLL1Q            (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_PLL2P            (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_PLL3P            (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_I2S              (0x3UL)                                                                  /*!< Value 0x00000003 */
#define RCC_D3KERNELCLKCFG_SAI4ACLKSEL_PERIPHERAL       (0x4UL)                                                                  /*!< Value 0x00000004 */

#define RCC_D3KERNELCLKCFG_ADCCLKSEL_OFFSET             (16U)
#define RCC_D3KERNELCLKCFG_ADCCLKSEL_MASK               (0x3UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, ADCCLKSEL))         /*!< Mask  0x00030000 */
#define RCC_D3KERNELCLKCFG_ADCCLKSEL_PLL2P              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_ADCCLKSEL_PLL3R              (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_ADCCLKSEL_PERIPHERAL         (0x2UL)                                                                  /*!< Value 0x00000002 */

#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_OFFSET      (13U)
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, LPTIMER345CLKSEL))  /*!< Mask  0x0000E000 */
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_PCLK4       (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_PLL2P       (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_PLL3R       (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_LSE         (0x3UL)                                                                  /*!< Value 0x00000003 */
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_LSI         (0x4UL)                                                                  /*!< Value 0x00000004 */
#define RCC_D3KERNELCLKCFG_LPTIMER345CLKSEL_PERIPHERAL  (0x5UL)                                                                  /*!< Value 0x00000005 */

#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_OFFSET        (10U)
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_MASK          (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, LPTIMER2CLKSEL))    /*!< Mask  0x00001C00 */
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_PCLK4         (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_PLL2P         (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_PLL3R         (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_LSE           (0x3UL)                                                                  /*!< Value 0x00000003 */
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_LSI           (0x4UL)                                                                  /*!< Value 0x00000004 */
#define RCC_D3KERNELCLKCFG_LPTIMER2CLKSEL_PERIPHERAL    (0x5UL)                                                                  /*!< Value 0x00000005 */

#define RCC_D3KERNELCLKCFG_I2C4CLKSEL_OFFSET            (8U)
#define RCC_D3KERNELCLKCFG_I2C4CLKSEL_MASK              (0x3UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, I2C4CLKSEL))        /*!< Mask  0x00000300 */
#define RCC_D3KERNELCLKCFG_I2C4CLKSEL_PCLK4             (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_I2C4CLKSEL_PLL3R             (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_I2C4CLKSEL_HSI               (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_I2C4CLKSEL_CSI               (0x3UL)                                                                  /*!< Value 0x00000003 */

#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_OFFSET         (0U)
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_MASK           (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3KERNELCLKCFG, LPUART1CLKSEL))     /*!< Mask  0x00000007 */
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_PCLKD3         (0x0UL)                                                                  /*!< Value 0x00000000 */
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_PLL2Q          (0x1UL)                                                                  /*!< Value 0x00000001 */
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_PLL3Q          (0x2UL)                                                                  /*!< Value 0x00000002 */
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_HSI            (0x3UL)                                                                  /*!< Value 0x00000003 */
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_CSI            (0x4UL)                                                                  /*!< Value 0x00000004 */
#define RCC_D3KERNELCLKCFG_LPUART1CLKSEL_LSE            (0x5UL)                                                                  /*!< Value 0x00000005 */

/*!< Clock source interrupt enable register */
#define RCC_CLKINTEN_LSECLKSEC_OFFSET   (9U)
#define RCC_CLKINTEN_LSECLKSEC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, HSECLKSEC))  /*!< Mask  0x00000200 */
#define RCC_CLKINTEN_LSECLKSEC_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_LSECLKSEC_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_PLL3RDY_OFFSET     (8U)
#define RCC_CLKINTEN_PLL3RDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, PLL3RDY))    /*!< Mask  0x00000100 */
#define RCC_CLKINTEN_PLL3RDY_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_PLL3RDY_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_PLL2RDY_OFFSET     (7U)
#define RCC_CLKINTEN_PLL2RDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, PLL2RDY))    /*!< Mask  0x00000080 */
#define RCC_CLKINTEN_PLL2RDY_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_PLL2RDY_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_PLL1RDY_OFFSET     (6U)
#define RCC_CLKINTEN_PLL1RDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, PLL1RDY))    /*!< Mask  0x00000040 */
#define RCC_CLKINTEN_PLL1RDY_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_PLL1RDY_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_HSI48RDY_OFFSET    (5U)
#define RCC_CLKINTEN_HSI48RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, HSI48RDY))   /*!< Mask  0x00000020 */
#define RCC_CLKINTEN_HSI48RDY_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_HSI48RDY_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_CSIRDY_OFFSET      (4U)
#define RCC_CLKINTEN_CSIRDY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, CSIRDY))     /*!< Mask  0x00000010 */
#define RCC_CLKINTEN_CSIRDY_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_CSIRDY_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_HSERDY_OFFSET      (3U)
#define RCC_CLKINTEN_HSERDY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, HSERDY))     /*!< Mask  0x00000008 */
#define RCC_CLKINTEN_HSERDY_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_HSERDY_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_HSIRDY_OFFSET      (2U)
#define RCC_CLKINTEN_HSIRDY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, HSIRDY))     /*!< Mask  0x00000004 */
#define RCC_CLKINTEN_HSIRDY_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_HSIRDY_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_LSERDY_OFFSET      (1U)
#define RCC_CLKINTEN_LSERDY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, LSERDY))     /*!< Mask  0x00000002 */
#define RCC_CLKINTEN_LSERDY_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_LSERDY_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_CLKINTEN_LSIRDY_OFFSET      (0U)
#define RCC_CLKINTEN_LSIRDY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTEN, LSIRDY))     /*!< Mask  0x00000001 */
#define RCC_CLKINTEN_LSIRDY_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_CLKINTEN_LSIRDY_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

/*!< Clock source interrupt flag register */
#define RCC_CLKINTFLAG_HSECLKSEC_OFFSET  (10U)
#define RCC_CLKINTFLAG_HSECLKSEC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSECLKSEC))  /*!< Mask  0x00000400 */
#define RCC_CLKINTFLAG_HSECLKSEC_RESET   (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_HSECLKSEC_SET     (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_LSECLKSEC_OFFSET  (9U)
#define RCC_CLKINTFLAG_LSECLKSEC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, LSECLKSEC))  /*!< Mask  0x00000200 */
#define RCC_CLKINTFLAG_LSECLKSEC_RESET   (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_LSECLKSEC_SET     (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_PLL3RDY_OFFSET    (8U)
#define RCC_CLKINTFLAG_PLL3RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, PLL3RDY))    /*!< Mask  0x00000100 */
#define RCC_CLKINTFLAG_PLL3RDY_RESET     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_PLL3RDY_SET       (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_PLL2RDY_OFFSET    (7U)
#define RCC_CLKINTFLAG_PLL2RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, PLL2RDY))    /*!< Mask  0x00000080 */
#define RCC_CLKINTFLAG_PLL2RDY_RESET     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_PLL2RDY_SET       (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_PLL1RDY_OFFSET    (6U)
#define RCC_CLKINTFLAG_PLL1RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, PLL1RDY))    /*!< Mask  0x00000040 */
#define RCC_CLKINTFLAG_PLL1RDY_RESET     (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_PLL1RDY_SET       (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_HSI48RDY_OFFSET   (5U)
#define RCC_CLKINTFLAG_HSI48RDY_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSI48RDY))   /*!< Mask  0x00000020 */
#define RCC_CLKINTFLAG_HSI48RDY_RESET    (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_HSI48RDY_SET      (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_CSIRDY_OFFSET     (4U)
#define RCC_CLKINTFLAG_CSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, CSIRDY))     /*!< Mask  0x00000010 */
#define RCC_CLKINTFLAG_CSIRDY_RESET      (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_CSIRDY_SET        (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_HSERDY_OFFSET     (3U)
#define RCC_CLKINTFLAG_HSERDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSERDY))     /*!< Mask  0x00000008 */
#define RCC_CLKINTFLAG_HSERDY_RESET      (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_HSERDY_SET        (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_HSIRDY_OFFSET     (2U)
#define RCC_CLKINTFLAG_HSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSIRDY))     /*!< Mask  0x00000004 */
#define RCC_CLKINTFLAG_HSIRDY_RESET      (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_HSIRDY_SET        (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_LSERDY_OFFSET     (1U)
#define RCC_CLKINTFLAG_LSERDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, LSERDY))     /*!< Mask  0x00000002 */
#define RCC_CLKINTFLAG_LSERDY_RESET      (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_LSERDY_SET        (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKINTFLAG_LSIRDY_OFFSET     (0U)
#define RCC_CLKINTFLAG_LSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, LSIRDY))     /*!< Mask  0x00000001 */
#define RCC_CLKINTFLAG_LSIRDY_RESET      (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKINTFLAG_LSIRDY_SET        (0x1UL)                                                       /*!< Value 0x00000001 */

/*!< Clock source interrupt clear register */
#define RCC_CLKINTCLR_HSECLKSEC_OFFSET  (10U)
#define RCC_CLKINTCLR_HSECLKSEC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSECLKSEC))  /*!< Mask  0x00000400 */
#define RCC_CLKINTCLR_HSECLKSEC_DONE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_HSECLKSEC_START   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_LSECLKSEC_OFFSET  (9U)
#define RCC_CLKINTCLR_LSECLKSEC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, LSECLKSEC))  /*!< Mask  0x00000200 */
#define RCC_CLKINTCLR_LSECLKSEC_DONE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_LSECLKSEC_START   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_PLL3RDY_OFFSET    (8U)
#define RCC_CLKINTCLR_PLL3RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, PLL3RDY))    /*!< Mask  0x00000100 */
#define RCC_CLKINTCLR_PLL3RDY_DONE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_PLL3RDY_START     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_PLL2RDY_OFFSET    (7U)
#define RCC_CLKINTCLR_PLL2RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, PLL2RDY))    /*!< Mask  0x00000080 */
#define RCC_CLKINTCLR_PLL2RDY_DONE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_PLL2RDY_START     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_PLL1RDY_OFFSET    (6U)
#define RCC_CLKINTCLR_PLL1RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, PLL1RDY))    /*!< Mask  0x00000040 */
#define RCC_CLKINTCLR_PLL1RDY_DONE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_PLL1RDY_START     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_HSI48RDY_OFFSET   (5U)
#define RCC_CLKINTCLR_HSI48RDY_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSI48RDY))   /*!< Mask  0x00000020 */
#define RCC_CLKINTCLR_HSI48RDY_DONE     (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_HSI48RDY_START    (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_CSIRDY_OFFSET     (4U)
#define RCC_CLKINTCLR_CSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, CSIRDY))     /*!< Mask  0x00000010 */
#define RCC_CLKINTCLR_CSIRDY_DONE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_CSIRDY_START      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_HSERDY_OFFSET     (3U)
#define RCC_CLKINTCLR_HSERDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSERDY))     /*!< Mask  0x00000008 */
#define RCC_CLKINTCLR_HSERDY_DONE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_HSERDY_START      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_HSIRDY_OFFSET     (2U)
#define RCC_CLKINTCLR_HSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSIRDY))     /*!< Mask  0x00000004 */
#define RCC_CLKINTCLR_HSIRDY_DONE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_HSIRDY_START      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_LSERDY_OFFSET     (1U)
#define RCC_CLKINTCLR_LSERDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, LSERDY))     /*!< Mask  0x00000002 */
#define RCC_CLKINTCLR_LSERDY_DONE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_LSERDY_START      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_CLKINTCLR_LSIRDY_OFFSET     (0U)
#define RCC_CLKINTCLR_LSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, LSIRDY))     /*!< Mask  0x00000001 */
#define RCC_CLKINTCLR_LSIRDY_DONE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_CLKINTCLR_LSIRDY_START      (0x1UL)                                                      /*!< Value 0x00000001 */

/*!< Backup domain control register */
#define RCC_BCKDCTR_BCKDSWRST_OFFSET             (16U)
#define RCC_BCKDCTR_BCKDSWRST_MASK               (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, BCKDSWRST))            /*!< Mask  0x00010000 */

#define RCC_BCKDCTR_RTCEN_OFFSET                 (15U)
#define RCC_BCKDCTR_RTCEN_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, RTCEN))                /*!< Mask  0x00008000 */
#define RCC_BCKDCTR_RTCEN_DISABLE                (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_RTCEN_ENABLE                 (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_BCKDCTR_RTCSEL_OFFSET                (8U)
#define RCC_BCKDCTR_RTCSEL_MASK                  (0x3UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, RTCSEL))               /*!< Mask  0x00000008 */
#define RCC_BCKDCTR_RTCSEL_NOCLK                 (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_RTCSEL_LSE                   (0x1UL)                                                              /*!< Value 0x00000001 */
#define RCC_BCKDCTR_RTCSEL_LSI                   (0x2UL)                                                              /*!< Value 0x00000002 */
#define RCC_BCKDCTR_RTCSEL_HSE                   (0x3UL)                                                              /*!< Value 0x00000003 */

#define RCC_BCKDCTR_LSECLKSECSYSFAILDET_OFFSET   (6U)
#define RCC_BCKDCTR_LSECLKSECSYSFAILDET_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, LSECLKSECSYSFAILDET))  /*!< Mask  0x00000006 */
#define RCC_BCKDCTR_LSECLKSECSYSFAILDET_SUCCESS  (0x1UL)                                                              /*!< Value 0x00000001 */
#define RCC_BCKDCTR_LSECLKSECSYSFAILDET_FAILURE  (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_BCKDCTR_LSECLKSECSYSEN_OFFSET        (5U)
#define RCC_BCKDCTR_LSECLKSECSYSEN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, LSECLKSECSYSEN))       /*!< Mask  0x00000005 */
#define RCC_BCKDCTR_LSECLKSECSYSEN_DISABLE       (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_LSECLKSECSYSEN_ENABLE        (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_BCKDCTR_LSEOSCDRV_OFFSET             (3U)
#define RCC_BCKDCTR_LSEOSCDRV_MASK               (0x3UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, LSEOSCDRV))            /*!< Mask  0x00000018 */
#define RCC_BCKDCTR_LSEOSCDRV_LOW                (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_LSEOSCDRV_MEDIUMLOW          (0x1UL)                                                              /*!< Value 0x00000001 */
#define RCC_BCKDCTR_LSEOSCDRV_MEDIUMHIGH         (0x2UL)                                                              /*!< Value 0x00000002 */
#define RCC_BCKDCTR_LSEOSCDRV_HIGH               (0x3UL)                                                              /*!< Value 0x00000003 */

#define RCC_BCKDCTR_LSEBYPASS_OFFSET             (2U)
#define RCC_BCKDCTR_LSEBYPASS_MASK               (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, LSEBYPASS))            /*!< Mask  0x00000002 */
#define RCC_BCKDCTR_LSEBYPASS_DISABLE            (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_LSEBYPASS_ENABLE             (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_BCKDCTR_LSERDY_OFFSET                (1U)
#define RCC_BCKDCTR_LSERDY_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, LSERDY))               /*!< Mask  0x00000001 */
#define RCC_BCKDCTR_LSERDY_NOTREADY              (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_LSERDY_READY                 (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_BCKDCTR_LSEON_OFFSET                 (0U)
#define RCC_BCKDCTR_LSEON_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(RCC, BCKDCTR, LSEON))                /*!< Mask  0x00000000 */
#define RCC_BCKDCTR_LSEON_OFF                    (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_BCKDCTR_LSEON_ON                     (0x1UL)                                                              /*!< Value 0x00000001 */

/*!< Clock control and status register */
#define RCC_CLKCTRLSTATUS_LSIRDY_OFFSET    (1U)
#define RCC_CLKCTRLSTATUS_LSIRDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKCTRLSTATUS, LSIRDY))  /*!< Mask  0x00000001 */
#define RCC_CLKCTRLSTATUS_LSIRDY_NOTREADY  (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKCTRLSTATUS_LSIRDY_READY     (0x1UL)                                                       /*!< Value 0x00000001 */

#define RCC_CLKCTRLSTATUS_LSION_OFFSET     (0U)
#define RCC_CLKCTRLSTATUS_LSION_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKCTRLSTATUS, LSION))   /*!< Mask  0x00000000 */
#define RCC_CLKCTRLSTATUS_LSION_OFF        (0x0UL)                                                       /*!< Value 0x00000000 */
#define RCC_CLKCTRLSTATUS_LSION_ON         (0x1UL)                                                       /*!< Value 0x00000001 */

/*!< AHB3 reset register */
#define RCC_AHB3RST_SDMMC_OFFSET   (16U)
#define RCC_AHB3RST_SDMMC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RST, SDMMC))   /*!< Mask  0x00010000 */
#define RCC_AHB3RST_SDMMC_CLEAR    (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB3RST_SDMMC_SET      (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB3RST_QSPI_OFFSET    (14U)
#define RCC_AHB3RST_QSPI_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RST, QSPI))    /*!< Mask  0x00004000 */
#define RCC_AHB3RST_QSPI_CLEAR     (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB3RST_QSPI_SET       (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB3RST_FMC_OFFSET     (12U)
#define RCC_AHB3RST_FMC_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RST, FMC))     /*!< Mask  0x00001000 */
#define RCC_AHB3RST_FMC_CLEAR      (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB3RST_FMC_SET        (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB3RST_JPGDEC_OFFSET  (5U)
#define RCC_AHB3RST_JPGDEC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RST, JPGDEC))  /*!< Mask  0x00000020 */
#define RCC_AHB3RST_JPGDEC_CLEAR   (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB3RST_JPGDEC_SET     (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB3RST_DMA2D_OFFSET   (4U)
#define RCC_AHB3RST_DMA2D_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RST, DMA2D))   /*!< Mask  0x00000010 */
#define RCC_AHB3RST_DMA2D_CLEAR    (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB3RST_DMA2D_SET      (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB3RST_MDMA_OFFSET    (0U)
#define RCC_AHB3RST_MDMA_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RST, MDMA))    /*!< Mask  0x00000001 */
#define RCC_AHB3RST_MDMA_CLEAR     (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB3RST_MDMA_SET       (0x1UL)                                                 /*!< Value 0x00000001 */

/*!< AHB1 reset register */
#define RCC_AHB1RST_USB2OTG_OFFSET  (27U)
#define RCC_AHB1RST_USB2OTG_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, USB2OTG))  /*!< Mask  0x08000000 */
#define RCC_AHB1RST_USB2OTG_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_USB2OTG_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_AHB1RST_USB1OTG_OFFSET  (25U)
#define RCC_AHB1RST_USB1OTG_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, USB1OTG))  /*!< Mask  0x02000000 */
#define RCC_AHB1RST_USB1OTG_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_USB1OTG_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_AHB1RST_ETH1MAC_OFFSET  (15U)
#define RCC_AHB1RST_ETH1MAC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, ETH1MAC))  /*!< Mask  0x00008000 */
#define RCC_AHB1RST_ETH1MAC_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_ETH1MAC_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_AHB1RST_ART_OFFSET      (14U)
#define RCC_AHB1RST_ART_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, ART))      /*!< Mask  0x00004000 */
#define RCC_AHB1RST_ART_CLEAR       (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_ART_SET         (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_AHB1RST_ADC_OFFSET      (5U)
#define RCC_AHB1RST_ADC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, ADC))      /*!< Mask  0x00000020 */
#define RCC_AHB1RST_ADC_CLEAR       (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_ADC_SET         (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_AHB1RST_DMA2_OFFSET     (1U)
#define RCC_AHB1RST_DMA2_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, DMA2))     /*!< Mask  0x00000002 */
#define RCC_AHB1RST_DMA2_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_DMA2_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_AHB1RST_DMA1_OFFSET     (0U)
#define RCC_AHB1RST_DMA1_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RST, DMA1))     /*!< Mask  0x00000001 */
#define RCC_AHB1RST_DMA1_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_AHB1RST_DMA1_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

/*!< AHB2 reset register */
#define RCC_AHB2RST_SDMMC2_OFFSET  (9U)
#define RCC_AHB2RST_SDMMC2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RST, SDMMC2))  /*!< Mask  0x00000200 */
#define RCC_AHB2RST_SDMMC2_CLEAR   (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB2RST_SDMMC2_SET     (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB2RST_RNG_OFFSET     (6U)
#define RCC_AHB2RST_RNG_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RST, RNG))     /*!< Mask  0x02000040 */
#define RCC_AHB2RST_RNG_CLEAR      (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB2RST_RNG_SET        (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB2RST_HASH_OFFSET    (5U)
#define RCC_AHB2RST_HASH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RST, HASH))    /*!< Mask  0x00000020 */
#define RCC_AHB2RST_HASH_CLEAR     (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB2RST_HASH_SET       (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB2RST_CRYPTO_OFFSET  (4U)
#define RCC_AHB2RST_CRYPTO_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RST, CRYPTO))  /*!< Mask  0x00000010 */
#define RCC_AHB2RST_CRYPTO_CLEAR   (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB2RST_CRYPTO_SET     (0x1UL)                                                 /*!< Value 0x00000001 */

#define RCC_AHB2RST_CAMITF_OFFSET  (0U)
#define RCC_AHB2RST_CAMITF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RST, CAMITF))  /*!< Mask  0x00000001 */
#define RCC_AHB2RST_CAMITF_CLEAR   (0x0UL)                                                 /*!< Value 0x00000000 */
#define RCC_AHB2RST_CAMITF_SET     (0x1UL)                                                 /*!< Value 0x00000001 */

/*!< AHB4 reset register */
#define RCC_AHB4RST_HSEM_OFFSET   (25U)
#define RCC_AHB4RST_HSEM_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, HSEM))   /*!< Mask  0x02000000 */
#define RCC_AHB4RST_HSEM_CLEAR    (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_HSEM_SET      (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_ADC3_OFFSET   (24U)
#define RCC_AHB4RST_ADC3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, ADC3))   /*!< Mask  0x01000000 */
#define RCC_AHB4RST_ADC3_CLEAR    (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_ADC3_SET      (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_BDMA_OFFSET   (21U)
#define RCC_AHB4RST_BDMA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, BDMA))   /*!< Mask  0x00200000 */
#define RCC_AHB4RST_BDMA_CLEAR    (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_BDMA_SET      (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_CRC_OFFSET    (19U)
#define RCC_AHB4RST_CRC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, CRC))    /*!< Mask  0x00080000 */
#define RCC_AHB4RST_CRC_CLEAR     (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_CRC_SET       (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOK_OFFSET  (10U)
#define RCC_AHB4RST_GPIOK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOK))  /*!< Mask  0x00000400 */
#define RCC_AHB4RST_GPIOK_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOK_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOJ_OFFSET  (9U)
#define RCC_AHB4RST_GPIOJ_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOJ))  /*!< Mask  0x00000200 */
#define RCC_AHB4RST_GPIOJ_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOJ_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOI_OFFSET  (8U)
#define RCC_AHB4RST_GPIOI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOI))  /*!< Mask  0x00000100 */
#define RCC_AHB4RST_GPIOI_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOI_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOH_OFFSET  (7U)
#define RCC_AHB4RST_GPIOH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOH))  /*!< Mask  0x00000080 */
#define RCC_AHB4RST_GPIOH_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOH_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOG_OFFSET  (6U)
#define RCC_AHB4RST_GPIOG_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOG))  /*!< Mask  0x00000040 */
#define RCC_AHB4RST_GPIOG_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOG_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOF_OFFSET  (5U)
#define RCC_AHB4RST_GPIOF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOF))  /*!< Mask  0x00000020 */
#define RCC_AHB4RST_GPIOF_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOF_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOE_OFFSET  (4U)
#define RCC_AHB4RST_GPIOE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOE))  /*!< Mask  0x00000010 */
#define RCC_AHB4RST_GPIOE_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOE_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOD_OFFSET  (3U)
#define RCC_AHB4RST_GPIOD_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOD))  /*!< Mask  0x00000008 */
#define RCC_AHB4RST_GPIOD_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOD_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOC_OFFSET  (2U)
#define RCC_AHB4RST_GPIOC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOC))  /*!< Mask  0x00000004 */
#define RCC_AHB4RST_GPIOC_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOC_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOB_OFFSET  (1U)
#define RCC_AHB4RST_GPIOB_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOB))  /*!< Mask  0x00000002 */
#define RCC_AHB4RST_GPIOB_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOB_SET     (0x1UL)                                                /*!< Value 0x00000001 */

#define RCC_AHB4RST_GPIOA_OFFSET  (0U)
#define RCC_AHB4RST_GPIOA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RST, GPIOA))  /*!< Mask  0x00000001 */
#define RCC_AHB4RST_GPIOA_CLEAR   (0x0UL)                                                /*!< Value 0x00000000 */
#define RCC_AHB4RST_GPIOA_SET     (0x1UL)                                                /*!< Value 0x00000001 */

/*!< APB3 reset register */
#define RCC_APB3RST_DSI_OFFSET   (4U)
#define RCC_APB3RST_DSI_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3RST, DSI))   /*!< Mask  0x00000010 */
#define RCC_APB3RST_DSI_CLEAR    (0x0UL)                                               /*!< Value 0x00000000 */
#define RCC_APB3RST_DSI_SET      (0x1UL)                                               /*!< Value 0x00000001 */

#define RCC_APB3RST_LTDC_OFFSET  (3U)
#define RCC_APB3RST_LTDC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3RST, LTDC))  /*!< Mask  0x00000001 */
#define RCC_APB3RST_LTDC_CLEAR   (0x0UL)                                               /*!< Value 0x00000000 */
#define RCC_APB3RST_LTDC_SET     (0x1UL)                                               /*!< Value 0x00000001 */

/*!< APB1 reset register */
#define RCC_APB1LRST_UART8_OFFSET       (31U)
#define RCC_APB1LRST_UART8_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, UART8))       /*!< Mask  0x80000000 */
#define RCC_APB1LRST_UART8_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_UART8_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_UART7_OFFSET       (30U)
#define RCC_APB1LRST_UART7_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, UART7))       /*!< Mask  0x40000000 */
#define RCC_APB1LRST_UART7_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_UART7_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_HDMICEC_OFFSET     (27U)
#define RCC_APB1LRST_HDMICEC_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, HDMICEC))     /*!< Mask  0x08000000 */
#define RCC_APB1LRST_HDMICEC_CLEAR      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_HDMICEC_SET        (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_I2C3_OFFSET        (23U)
#define RCC_APB1LRST_I2C3_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, I2C3))        /*!< Mask  0x00800000 */
#define RCC_APB1LRST_I2C3_CLEAR         (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_I2C3_SET           (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_I2C2_OFFSET        (22U)
#define RCC_APB1LRST_I2C2_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, I2C2))        /*!< Mask  0x00400000 */
#define RCC_APB1LRST_I2C2_CLEAR         (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_I2C2_SET           (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_I2C1_OFFSET        (21U)
#define RCC_APB1LRST_I2C1_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, I2C1))        /*!< Mask  0x00200000 */
#define RCC_APB1LRST_I2C1_CLEAR         (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_I2C1_SET           (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_UART5_OFFSET       (20U)
#define RCC_APB1LRST_UART5_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, UART5))       /*!< Mask  0x00100000 */
#define RCC_APB1LRST_UART5_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_UART5_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_UART4_OFFSET       (19U)
#define RCC_APB1LRST_UART4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, UART4))       /*!< Mask  0x00080000 */
#define RCC_APB1LRST_UART4_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_UART4_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_UART3_OFFSET       (18U)
#define RCC_APB1LRST_UART3_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, UART3))       /*!< Mask  0x00040000 */
#define RCC_APB1LRST_UART3_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_UART3_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_UART2_OFFSET       (17U)
#define RCC_APB1LRST_UART2_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, UART2))       /*!< Mask  0x00020000 */
#define RCC_APB1LRST_UART2_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_UART2_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_SPDIFRX_OFFSET     (16U)
#define RCC_APB1LRST_SPDIFRX_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, SPDIFRX))     /*!< Mask  0x00010000 */
#define RCC_APB1LRST_SPDIFRX_CLEAR      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_SPDIFRX_SET        (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_SPI3_OFFSET        (15U)
#define RCC_APB1LRST_SPI3_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, SPI3))        /*!< Mask  0x00008000 */
#define RCC_APB1LRST_SPI3_CLEAR         (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_SPI3_SET           (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_SPI2_OFFSET        (14U)
#define RCC_APB1LRST_SPI2_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, SPI2))        /*!< Mask  0x00004000 */
#define RCC_APB1LRST_SPI2_CLEAR         (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_SPI2_SET           (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_LPTIMER1_OFFSET    (9U)
#define RCC_APB1LRST_LPTIMER1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, LPTIMER1))    /*!< Mask  0x00000200 */
#define RCC_APB1LRST_LPTIMER1_CLEAR     (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_LPTIMER1_SET       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER14_OFFSET     (8U)
#define RCC_APB1LRST_TIMER14_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER14))     /*!< Mask  0x00000100 */
#define RCC_APB1LRST_TIMER14_CLEAR      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER14_SET        (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER13_OFFSET     (7U)
#define RCC_APB1LRST_TIMER13_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER13))     /*!< Mask  0x00000080 */
#define RCC_APB1LRST_TIMER13_CLEAR      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER13_SET        (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER12_OFFSET     (6U)
#define RCC_APB1LRST_TIMER12_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER12))     /*!< Mask  0x00000040 */
#define RCC_APB1LRST_TIMER12_CLEAR      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER12_SET        (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER7_OFFSET      (5U)
#define RCC_APB1LRST_TIMER7_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER7))      /*!< Mask  0x00000020 */
#define RCC_APB1LRST_TIMER7_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER7_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER6_OFFSET      (4U)
#define RCC_APB1LRST_TIMER6_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER6))      /*!< Mask  0x00000010 */
#define RCC_APB1LRST_TIMER6_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER6_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER5_OFFSET      (3U)
#define RCC_APB1LRST_TIMER5_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER5))      /*!< Mask  0x00000008 */
#define RCC_APB1LRST_TIMER5_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER5_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER4_OFFSET      (2U)
#define RCC_APB1LRST_TIMER4_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER4))      /*!< Mask  0x00000004 */
#define RCC_APB1LRST_TIMER4_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER4_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER3_OFFSET      (1U)
#define RCC_APB1LRST_TIMER3_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER3))      /*!< Mask  0x00000002 */
#define RCC_APB1LRST_TIMER3_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER3_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1LRST_TIMER2_OFFSET      (0U)
#define RCC_APB1LRST_TIMER2_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRST, TIMER2))      /*!< Mask  0x00000001 */
#define RCC_APB1LRST_TIMER2_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1LRST_TIMER2_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1HRST_FDCAN_OFFSET       (8U)
#define RCC_APB1HRST_FDCAN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRST, FDCAN))       /*!< Mask  0x00000100 */
#define RCC_APB1HRST_FDCAN_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1HRST_FDCAN_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1HRST_MDIOS_OFFSET       (5U)
#define RCC_APB1HRST_MDIOS_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRST, MDIOS))       /*!< Mask  0x00000020 */
#define RCC_APB1HRST_MDIOS_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1HRST_MDIOS_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1HRST_OPAMP_OFFSET       (4U)
#define RCC_APB1HRST_OPAMP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRST, OPAMP))       /*!< Mask  0x00000010 */
#define RCC_APB1HRST_OPAMP_CLEAR        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1HRST_OPAMP_SET          (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1HRST_SINGLEWIRE_OFFSET  (2U)
#define RCC_APB1HRST_SINGLEWIRE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRST, SINGLEWIRE))  /*!< Mask  0x00000004 */
#define RCC_APB1HRST_SINGLEWIRE_CLEAR   (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1HRST_SINGLEWIRE_SET     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APB1HRST_CLKREC_OFFSET      (1U)
#define RCC_APB1HRST_CLKREC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRST, CLKREC))      /*!< Mask  0x00000002 */
#define RCC_APB1HRST_CLKREC_CLEAR       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APB1HRST_CLKREC_SET         (0x1UL)                                                      /*!< Value 0x00000001 */

/*!< APB2 reset register */
#define RCC_APB2RST_HRTIMER_OFFSET  (29U)
#define RCC_APB2RST_HRTIMER_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, HRTIMER))  /*!< Mask  0x20000000 */
#define RCC_APB2RST_HRTIMER_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_HRTIMER_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_DFSDM1_OFFSET   (28U)
#define RCC_APB2RST_DFSDM1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, DFSDM1))   /*!< Mask  0x10000000 */
#define RCC_APB2RST_DFSDM1_CLEAR    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_DFSDM1_SET      (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_SAI3_OFFSET     (24U)
#define RCC_APB2RST_SAI3_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, SAI3))     /*!< Mask  0x01000000 */
#define RCC_APB2RST_SAI3_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_SAI3_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_SAI2_OFFSET     (23U)
#define RCC_APB2RST_SAI2_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, SAI2))     /*!< Mask  0x00800000 */
#define RCC_APB2RST_SAI2_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_SAI2_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_SAI1_OFFSET     (22U)
#define RCC_APB2RST_SAI1_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, SAI1))     /*!< Mask  0x00400000 */
#define RCC_APB2RST_SAI1_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_SAI1_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_SPI5_OFFSET     (20U)
#define RCC_APB2RST_SPI5_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, SPI5))     /*!< Mask  0x00100000 */
#define RCC_APB2RST_SPI5_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_SPI5_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_TIMER17_OFFSET  (18U)
#define RCC_APB2RST_TIMER17_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, TIMER17))  /*!< Mask  0x00040000 */
#define RCC_APB2RST_TIMER17_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_TIMER17_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_TIMER16_OFFSET  (17U)
#define RCC_APB2RST_TIMER16_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, TIMER16))  /*!< Mask  0x00020000 */
#define RCC_APB2RST_TIMER16_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_TIMER16_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_TIMER15_OFFSET  (16U)
#define RCC_APB2RST_TIMER15_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, TIMER15))  /*!< Mask  0x00010000 */
#define RCC_APB2RST_TIMER15_CLEAR   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_TIMER15_SET     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_SPI4_OFFSET     (13U)
#define RCC_APB2RST_SPI4_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, SPI4))     /*!< Mask  0x00002000 */
#define RCC_APB2RST_SPI4_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_SPI4_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_SPI1_OFFSET     (12U)
#define RCC_APB2RST_SPI1_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, SPI1))     /*!< Mask  0x00002000 */
#define RCC_APB2RST_SPI1_CLEAR      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_SPI1_SET        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_USART6_OFFSET   (5U)
#define RCC_APB2RST_USART6_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, USART6))   /*!< Mask  0x00000020 */
#define RCC_APB2RST_USART6_CLEAR    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_USART6_SET      (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_USART1_OFFSET   (4U)
#define RCC_APB2RST_USART1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, USART1))   /*!< Mask  0x00000010 */
#define RCC_APB2RST_USART1_CLEAR    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_USART1_SET      (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_TIMER8_OFFSET   (1U)
#define RCC_APB2RST_TIMER8_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, TIMER8))   /*!< Mask  0x00000002 */
#define RCC_APB2RST_TIMER8_CLEAR    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_TIMER8_SET      (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_APB2RST_TIMER1_OFFSET   (0U)
#define RCC_APB2RST_TIMER1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RST, TIMER1))   /*!< Mask  0x00000001 */
#define RCC_APB2RST_TIMER1_CLEAR    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_APB2RST_TIMER1_SET      (0x1UL)                                                  /*!< Value 0x00000001 */

/*!< APB4 reset register */
#define RCC_APB4RST_SAI4_OFFSET      (21U)
#define RCC_APB4RST_SAI4_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, SAI4))      /*!< Mask  0x00200000 */
#define RCC_APB4RST_SAI4_CLEAR       (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_SAI4_SET         (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_VREF_OFFSET      (15U)
#define RCC_APB4RST_VREF_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, VREF))      /*!< Mask  0x00008000 */
#define RCC_APB4RST_VREF_CLEAR       (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_VREF_SET         (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_COMP12_OFFSET    (14U)
#define RCC_APB4RST_COMP12_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, COMP12))    /*!< Mask  0x00004000 */
#define RCC_APB4RST_COMP12_CLEAR     (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_COMP12_SET       (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_LPTIMER5_OFFSET  (12U)
#define RCC_APB4RST_LPTIMER5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, LPTIMER5))  /*!< Mask  0x00001000 */
#define RCC_APB4RST_LPTIMER5_CLEAR   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_LPTIMER5_SET     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_LPTIMER4_OFFSET  (11U)
#define RCC_APB4RST_LPTIMER4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, LPTIMER4))  /*!< Mask  0x00000800 */
#define RCC_APB4RST_LPTIMER4_CLEAR   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_LPTIMER4_SET     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_LPTIMER3_OFFSET  (10U)
#define RCC_APB4RST_LPTIMER3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, LPTIMER3))  /*!< Mask  0x00000400 */
#define RCC_APB4RST_LPTIMER3_CLEAR   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_LPTIMER3_SET     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_LPTIMER2_OFFSET  (9U)
#define RCC_APB4RST_LPTIMER2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, LPTIMER2))  /*!< Mask  0x00000200 */
#define RCC_APB4RST_LPTIMER2_CLEAR   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_LPTIMER2_SET     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_I2C4_OFFSET      (7U)
#define RCC_APB4RST_I2C4_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, I2C4))      /*!< Mask  0x00000080 */
#define RCC_APB4RST_I2C4_CLEAR       (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_I2C4_SET         (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_SPI6_OFFSET      (5U)
#define RCC_APB4RST_SPI6_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, SPI6))      /*!< Mask  0x00000020 */
#define RCC_APB4RST_SPI6_CLEAR       (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_SPI6_SET         (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_LPUART1_OFFSET   (3U)
#define RCC_APB4RST_LPUART1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, LPUART1))   /*!< Mask  0x00000008 */
#define RCC_APB4RST_LPUART1_CLEAR    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_LPUART1_SET      (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_APB4RST_SYSCFG_OFFSET    (1U)
#define RCC_APB4RST_SYSCFG_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RST, SYSCFG))    /*!< Mask  0x00000002 */
#define RCC_APB4RST_SYSCFG_CLEAR     (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_APB4RST_SYSCFG_SET       (0x1UL)                                                   /*!< Value 0x00000001 */

/*!< Global control register */
#define RCC_GBLCTRL_BOOTC2_OFFSET             (3U)
#define RCC_GBLCTRL_BOOTC2_MASK               (0x1UL << REGISTER_FIELD_OFFSET(RCC, GBLCTRL, BOOTC2))            /*!< Mask  0x00000008 */

#define RCC_GBLCTRL_BOOTC1_OFFSET             (2U)
#define RCC_GBLCTRL_BOOTC1_MASK               (0x1UL << REGISTER_FIELD_OFFSET(RCC, GBLCTRL, BOOTC1))            /*!< Mask  0x00000004 */

#define RCC_GBLCTRL_SYSWINWATCHDOGC2_OFFSET   (1U)
#define RCC_GBLCTRL_SYSWINWATCHDOGC2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, GBLCTRL, SYSWINWATCHDOGC2))  /*!< Mask  0x00000002 */
#define RCC_GBLCTRL_SYSWINWATCHDOGC2_CPU2RST  (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_GBLCTRL_SYSWINWATCHDOGC2_SYSRST   (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_GBLCTRL_SYSWINWATCHDOGC1_OFFSET   (0U)
#define RCC_GBLCTRL_SYSWINWATCHDOGC1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, GBLCTRL, SYSWINWATCHDOGC1))  /*!< Mask  0x00000001 */
#define RCC_GBLCTRL_SYSWINWATCHDOGC1_CPU1RST  (0x1UL)                                                           /*!< Value 0x00000001 */
#define RCC_GBLCTRL_SYSWINWATCHDOGC1_SYSRST   (0x1UL)                                                           /*!< Value 0x00000001 */

/*!< Domain 3 autonomous mode register */
#define RCC_D3AM_SRAM4EN_OFFSET      (29U)
#define RCC_D3AM_SRAM4EN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, SRAM4EN))     /*!< Mask  0x20000000 */
#define RCC_D3AM_SRAM4EN_DISABLE     (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_SRAM4EN_ENABLE      (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_BCKRAMEN_OFFSET     (28U)
#define RCC_D3AM_BCKRAMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, BCKRAMEN))    /*!< Mask  0x10000000 */
#define RCC_D3AM_BCKRAMEN_DISABLE    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_BCKRAMEN_ENABLE     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_ADC3EN_OFFSET       (24U)
#define RCC_D3AM_ADC3EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, ADC3EN))      /*!< Mask  0x01000000 */
#define RCC_D3AM_ADC3EN_DISABLE      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_ADC3EN_ENABLE       (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_SAI4EN_OFFSET       (21U)
#define RCC_D3AM_SAI4EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, SAI4EN))      /*!< Mask  0x00200000 */
#define RCC_D3AM_SAI4EN_DISABLE      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_SAI4EN_ENABLE       (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_CRCEN_OFFSET        (19U)
#define RCC_D3AM_CRCEN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, CRCEN))       /*!< Mask  0x00080000 */
#define RCC_D3AM_CRCEN_DISABLE       (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_CRCEN_ENABLE        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_RTCEN_OFFSET        (16U)
#define RCC_D3AM_RTCEN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, RTCEN))       /*!< Mask  0x00010000 */
#define RCC_D3AM_RTCEN_DISABLE       (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_RTCEN_ENABLE        (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_VREFEN_OFFSET       (15U)
#define RCC_D3AM_VREFEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, VREFEN))      /*!< Mask  0x00008000 */
#define RCC_D3AM_VREFEN_DISABLE      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_VREFEN_ENABLE       (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_COMP12EN_OFFSET     (14U)
#define RCC_D3AM_COMP12EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, COMP12EN))    /*!< Mask  0x00004000 */
#define RCC_D3AM_COMP12EN_DISABLE    (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_COMP12EN_ENABLE     (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_LPTIMER5EN_OFFSET   (12U)
#define RCC_D3AM_LPTIMER5EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, LPTIMER5EN))  /*!< Mask  0x00001000 */
#define RCC_D3AM_LPTIMER5EN_DISABLE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_LPTIMER5EN_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_LPTIMER4EN_OFFSET   (11U)
#define RCC_D3AM_LPTIMER4EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, LPTIMER4EN))  /*!< Mask  0x00000800 */
#define RCC_D3AM_LPTIMER4EN_DISABLE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_LPTIMER4EN_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_LPTIMER3EN_OFFSET   (10U)
#define RCC_D3AM_LPTIMER3EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, LPTIMER3EN))  /*!< Mask  0x00000400 */
#define RCC_D3AM_LPTIMER3EN_DISABLE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_LPTIMER3EN_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_LPTIMER2EN_OFFSET   (9U)
#define RCC_D3AM_LPTIMER2EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, LPTIMER2EN))  /*!< Mask  0x00000200 */
#define RCC_D3AM_LPTIMER2EN_DISABLE  (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_LPTIMER2EN_ENABLE   (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_I2C4EN_OFFSET       (7U)
#define RCC_D3AM_I2C4EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, I2C4EN))      /*!< Mask  0x00000080 */
#define RCC_D3AM_I2C4EN_DISABLE      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_I2C4EN_ENABLE       (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_SPI6EN_OFFSET       (5U)
#define RCC_D3AM_SPI6EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, SPI6EN))      /*!< Mask  0x00000020 */
#define RCC_D3AM_SPI6EN_DISABLE      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_SPI6EN_ENABLE       (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_LPUART1EN_OFFSET    (3U)
#define RCC_D3AM_LPUART1EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, LPUART1EN))   /*!< Mask  0x00000008 */
#define RCC_D3AM_LPUART1EN_DISABLE   (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_LPUART1EN_ENABLE    (0x1UL)                                                  /*!< Value 0x00000001 */

#define RCC_D3AM_BDMAEN_OFFSET       (0U)
#define RCC_D3AM_BDMAEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AM, BDMAEN))      /*!< Mask  0x00000001 */
#define RCC_D3AM_BDMAEN_DISABLE      (0x0UL)                                                  /*!< Value 0x00000000 */
#define RCC_D3AM_BDMAEN_ENABLE       (0x1UL)                                                  /*!< Value 0x00000001 */

/*!< Reset status register */
#define RCC_RSTSTATUS_LPSECRST2FLAG_OFFSET          (31U)
#define RCC_RSTSTATUS_LPSECRST2FLAG_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, LPSECRST2FLAG))         /*!< Mask  0x80000000 */
#define RCC_RSTSTATUS_LPSECRST2FLAG_ILLEGAL         (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_LPSECRST2FLAG_VALID           (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_LPSECRST1FLAG_OFFSET          (30U)
#define RCC_RSTSTATUS_LPSECRST1FLAG_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, LPSECRST1FLAG))         /*!< Mask  0x40000000 */
#define RCC_RSTSTATUS_LPSECRST1FLAG_ILLEGAL         (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_LPSECRST1FLAG_VALID           (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_SYSWINWATCHDOGC2FLAG_OFFSET   (29U)
#define RCC_RSTSTATUS_SYSWINWATCHDOGC2FLAG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, SYSWINWATCHDOGC2FLAG))  /*!< Mask  0x20000000 */
#define RCC_RSTSTATUS_SYSWINWATCHDOGC2FLAG_ILLEGAL  (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_SYSWINWATCHDOGC2FLAG_VALID    (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_SYSWINWATCHDOGC1FLAG_OFFSET   (28U)
#define RCC_RSTSTATUS_SYSWINWATCHDOGC1FLAG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, SYSWINWATCHDOGC1FLAG))  /*!< Mask  0x10000000 */
#define RCC_RSTSTATUS_SYSWINWATCHDOGC1FLAG_ILLEGAL  (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_SYSWINWATCHDOGC1FLAG_VALID    (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_INDWINWATCHDOGC2FLAG_OFFSET   (27U)
#define RCC_RSTSTATUS_INDWINWATCHDOGC2FLAG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, INDWINWATCHDOGC2FLAG))  /*!< Mask  0x08000000 */
#define RCC_RSTSTATUS_INDWINWATCHDOGC2FLAG_ILLEGAL  (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_INDWINWATCHDOGC2FLAG_VALID    (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_INDWINWATCHDOGC1FLAG_OFFSET   (26U)
#define RCC_RSTSTATUS_INDWINWATCHDOGC1FLAG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, INDWINWATCHDOGC1FLAG))  /*!< Mask  0x04000000 */
#define RCC_RSTSTATUS_INDWINWATCHDOGC1FLAG_ILLEGAL  (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_INDWINWATCHDOGC1FLAG_VALID    (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_SYSRSTC2FLAG_OFFSET           (25U)
#define RCC_RSTSTATUS_SYSRSTC2FLAG_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, SYSRSTC2FLAG))          /*!< Mask  0x02000000 */
#define RCC_RSTSTATUS_SYSRSTC2FLAG_ILLEGAL          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_SYSRSTC2FLAG_VALID            (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_SYSRSTC1FLAG_OFFSET           (24U)
#define RCC_RSTSTATUS_SYSRSTC1FLAG_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, SYSRSTC1FLAG))          /*!< Mask  0x01000000 */
#define RCC_RSTSTATUS_SYSRSTC1FLAG_ILLEGAL          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_SYSRSTC1FLAG_VALID            (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_PWRONDWNFLAG_OFFSET           (23U)
#define RCC_RSTSTATUS_PWRONDWNFLAG_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, PWRONDWNFLAG))          /*!< Mask  0x00800000 */
#define RCC_RSTSTATUS_PWRONDWNFLAG_ILLEGAL          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_PWRONDWNFLAG_VALID            (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_PINFLAG_OFFSET                (22U)
#define RCC_RSTSTATUS_PINFLAG_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, PINFLAG))               /*!< Mask  0x00400000 */
#define RCC_RSTSTATUS_PINFLAG_ILLEGAL               (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_PINFLAG_VALID                 (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_BRWOFLAG_OFFSET               (21U)
#define RCC_RSTSTATUS_BRWOFLAG_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, BRWOFLAG))              /*!< Mask  0x00200000 */
#define RCC_RSTSTATUS_BRWOFLAG_ILLEGAL              (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_BRWOFLAG_VALID                (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_D2PWRSWITCHFLAG_OFFSET        (20U)
#define RCC_RSTSTATUS_D2PWRSWITCHFLAG_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, D2PWRSWITCHFLAG))       /*!< Mask  0x00100000 */
#define RCC_RSTSTATUS_D2PWRSWITCHFLAG_ILLEGAL       (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_D2PWRSWITCHFLAG_VALID         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_D1PWRSWITCHFLAG_OFFSET        (19U)
#define RCC_RSTSTATUS_D1PWRSWITCHFLAG_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, D1PWRSWITCHFLAG))       /*!< Mask  0x00080000 */
#define RCC_RSTSTATUS_D1PWRSWITCHFLAG_ILLEGAL       (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_D1PWRSWITCHFLAG_VALID         (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_C2FLAG_OFFSET                 (18U)
#define RCC_RSTSTATUS_C2FLAG_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, C2FLAG))                /*!< Mask  0x00040000 */
#define RCC_RSTSTATUS_C2FLAG_ILLEGAL                (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_C2FLAG_VALID                  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_C1FLAG_OFFSET                 (17U)
#define RCC_RSTSTATUS_C1FLAG_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, C1FLAG))                /*!< Mask  0x00020000 */
#define RCC_RSTSTATUS_C1FLAG_ILLEGAL                (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_C1FLAG_VALID                  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define RCC_RSTSTATUS_RMVFLAG_OFFSET                (16U)
#define RCC_RSTSTATUS_RMVFLAG_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSTSTATUS, RMVFLAG))               /*!< Mask  0x00010000 */
#define RCC_RSTSTATUS_RMVFLAG_ILLEGAL               (0x0UL)                                                                 /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_RMVFLAG_VALID                 (0x1UL)                                                                 /*!< Value 0x00000001 */

/*!< AHB3 clock register */
#define RCC_AHB3CLKEN_AXISRAM_OFFSET     (31U)
#define RCC_AHB3CLKEN_AXISRAM_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, AXISRAM))    /*!< Mask  0x80000000 */
#define RCC_AHB3CLKEN_AXISRAM_DISABLE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_AXISRAM_ENABLE     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_ITCM1_OFFSET       (30U)
#define RCC_AHB3CLKEN_ITCM1_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, ITCM1))      /*!< Mask  0x40000000 */
#define RCC_AHB3CLKEN_ITCM1_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_ITCM1_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_DTCM2_OFFSET       (29U)
#define RCC_AHB3CLKEN_DTCM2_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, DTCM2))      /*!< Mask  0x20000000 */
#define RCC_AHB3CLKEN_DTCM2_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_DTCM2_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_DTCM1_OFFSET       (28U)
#define RCC_AHB3CLKEN_DTCM1_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, DTCM1))      /*!< Mask  0x10000000 */
#define RCC_AHB3CLKEN_DTCM1_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_DTCM1_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_SDMMC1_OFFSET      (16U)
#define RCC_AHB3CLKEN_SDMMC1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, SDMMC1))     /*!< Mask  0x00010000 */
#define RCC_AHB3CLKEN_SDMMC1_DISABLE     (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_SDMMC1_ENABLE      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_QSPI_OFFSET        (14U)
#define RCC_AHB3CLKEN_QSPI_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, QSPI))       /*!< Mask  0x00004000 */
#define RCC_AHB3CLKEN_QSPI_DISABLE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_QSPI_ENABLE        (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_FMC_OFFSET         (12U)
#define RCC_AHB3CLKEN_FMC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, FMC))        /*!< Mask  0x00001000 */
#define RCC_AHB3CLKEN_FMC_DISABLE        (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_FMC_ENABLE         (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_FLASHINTC_OFFSET   (8U)
#define RCC_AHB3CLKEN_FLASHINTC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, FLASHINTC))  /*!< Mask  0x00000100 */
#define RCC_AHB3CLKEN_FLASHINTC_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_FLASHINTC_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_JPGDEC_OFFSET      (5U)
#define RCC_AHB3CLKEN_JPGDEC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, JPGDEC))     /*!< Mask  0x00000020 */
#define RCC_AHB3CLKEN_JPGDEC_DISABLE     (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_JPGDEC_ENABLE      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_DMA2D_OFFSET       (4U)
#define RCC_AHB3CLKEN_DMA2D_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, DMA2D))      /*!< Mask  0x00000010 */
#define RCC_AHB3CLKEN_DMA2D_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_DMA2D_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB3CLKEN_MDMA_OFFSET        (0U)
#define RCC_AHB3CLKEN_MDMA_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3CLKEN, MDMA))       /*!< Mask  0x00000001 */
#define RCC_AHB3CLKEN_MDMA_DISABLE       (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB3CLKEN_MDMA_ENABLE        (0x1UL)                                                      /*!< Value 0x00000001 */

/*!< AHB1 clock register */
#define RCC_AHB1CLKEN_USB2OTG_OFFSET   (27U)
#define RCC_AHB1CLKEN_USB2OTG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, USB2OTG))  /*!< Mask  0x08000000 */
#define RCC_AHB1CLKEN_USB2OTG_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_USB2OTG_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_USBPHY1_OFFSET   (26U)
#define RCC_AHB1CLKEN_USBPHY1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, USBPHY1))  /*!< Mask  0x04000000 */
#define RCC_AHB1CLKEN_USBPHY1_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_USBPHY1_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_USB1OTG_OFFSET   (25U)
#define RCC_AHB1CLKEN_USB1OTG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, USB1OTG))  /*!< Mask  0x02000000 */
#define RCC_AHB1CLKEN_USB1OTG_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_USB1OTG_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_USBPHY2_OFFSET   (18U)
#define RCC_AHB1CLKEN_USBPHY2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, USBPHY2))  /*!< Mask  0x00040000 */
#define RCC_AHB1CLKEN_USBPHY2_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_USBPHY2_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_ETH1RX_OFFSET    (17U)
#define RCC_AHB1CLKEN_ETH1RX_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, ETH1RX))   /*!< Mask  0x00020000 */
#define RCC_AHB1CLKEN_ETH1RX_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_ETH1RX_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_ETH1TX_OFFSET    (16U)
#define RCC_AHB1CLKEN_ETH1TX_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, ETH1TX))   /*!< Mask  0x00010000 */
#define RCC_AHB1CLKEN_ETH1TX_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_ETH1TX_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_ETH1MAC_OFFSET   (15U)
#define RCC_AHB1CLKEN_ETH1MAC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, ETH1MAC))  /*!< Mask  0x00008000 */
#define RCC_AHB1CLKEN_ETH1MAC_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_ETH1MAC_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_ART_OFFSET       (14U)
#define RCC_AHB1CLKEN_ART_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, ART))      /*!< Mask  0x00004000 */
#define RCC_AHB1CLKEN_ART_DISABLE      (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_ART_ENABLE       (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_ADC12_OFFSET     (5U)
#define RCC_AHB1CLKEN_ADC12_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, ADC12))    /*!< Mask  0x00000020 */
#define RCC_AHB1CLKEN_ADC12_DISABLE    (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_ADC12_ENABLE     (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_DMA2_OFFSET      (1U)
#define RCC_AHB1CLKEN_DMA2_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, DMA2))     /*!< Mask  0x00000002 */
#define RCC_AHB1CLKEN_DMA2_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_DMA2_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_AHB1CLKEN_DMA1_OFFSET      (0U)
#define RCC_AHB1CLKEN_DMA1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1CLKEN, DMA1))     /*!< Mask  0x00000001 */
#define RCC_AHB1CLKEN_DMA1_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_AHB1CLKEN_DMA1_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

/*!< AHB2 clock register */
#define RCC_AHB2CLKEN_SRAM3_OFFSET    (31U)
#define RCC_AHB2CLKEN_SRAM3_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, SRAM3))   /*!< Mask  0x80000000 */
#define RCC_AHB2CLKEN_SRAM3_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_SRAM3_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_SRAM2_OFFSET    (30U)
#define RCC_AHB2CLKEN_SRAM2_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, SRAM2))   /*!< Mask  0x40000000 */
#define RCC_AHB2CLKEN_SRAM2_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_SRAM2_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_SRAM1_OFFSET    (29U)
#define RCC_AHB2CLKEN_SRAM1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, SRAM1))   /*!< Mask  0x20000000 */
#define RCC_AHB2CLKEN_SRAM1_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_SRAM1_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_SDMMC2_OFFSET   (9U)
#define RCC_AHB2CLKEN_SDMMC2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, SDMMC2))  /*!< Mask  0x00000200 */
#define RCC_AHB2CLKEN_SDMMC2_DISABLE  (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_SDMMC2_ENABLE   (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_RNG_OFFSET      (6U)
#define RCC_AHB2CLKEN_RNG_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, RNG))     /*!< Mask  0x00000040 */
#define RCC_AHB2CLKEN_RNG_DISABLE     (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_RNG_ENABLE      (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_HASH_OFFSET     (5U)
#define RCC_AHB2CLKEN_HASH_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, HASH))    /*!< Mask  0x00000020 */
#define RCC_AHB2CLKEN_HASH_DISABLE    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_HASH_ENABLE     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_CRYPTO_OFFSET   (4U)
#define RCC_AHB2CLKEN_CRYPTO_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, CRYPTO))  /*!< Mask  0x00000010 */
#define RCC_AHB2CLKEN_CRYPTO_DISABLE  (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_CRYPTO_ENABLE   (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB2CLKEN_DCMI_OFFSET     (0U)
#define RCC_AHB2CLKEN_DCMI_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2CLKEN, DCMI))    /*!< Mask  0x00000001 */
#define RCC_AHB2CLKEN_DCMI_DISABLE    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB2CLKEN_DCMI_ENABLE     (0x1UL)                                                   /*!< Value 0x00000001 */

/*!< AHB4 clock register */
#define RCC_AHB4CLKEN_BCKRAM_OFFSET   (28U)
#define RCC_AHB4CLKEN_BCKRAM_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, BCKRAM))  /*!< Mask  0x10000000 */
#define RCC_AHB4CLKEN_BCKRAM_DISABLE  (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_BCKRAM_ENABLE   (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_HSEM_OFFSET     (25U)
#define RCC_AHB4CLKEN_HSEM_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, HSEM))    /*!< Mask  0x02000000 */
#define RCC_AHB4CLKEN_HSEM_DISABLE    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_HSEM_ENABLE     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_ADC3_OFFSET     (24U)
#define RCC_AHB4CLKEN_ADC3_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, ADC3))    /*!< Mask  0x01000000 */
#define RCC_AHB4CLKEN_ADC3_DISABLE    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_ADC3_ENABLE     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_BDMA_OFFSET     (21U)
#define RCC_AHB4CLKEN_BDMA_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, BDMA))    /*!< Mask  0x00200000 */
#define RCC_AHB4CLKEN_BDMA_DISABLE    (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_BDMA_ENABLE     (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_CRC_OFFSET      (19U)
#define RCC_AHB4CLKEN_CRC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, CRC))     /*!< Mask  0x00080000 */
#define RCC_AHB4CLKEN_CRC_DISABLE     (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_CRC_ENABLE      (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOK_OFFSET    (10U)
#define RCC_AHB4CLKEN_GPIOK_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOK))   /*!< Mask  0x00000400 */
#define RCC_AHB4CLKEN_GPIOK_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOK_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOJ_OFFSET    (9U)
#define RCC_AHB4CLKEN_GPIOJ_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOJ))   /*!< Mask  0x00000200 */
#define RCC_AHB4CLKEN_GPIOJ_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOJ_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOI_OFFSET    (8U)
#define RCC_AHB4CLKEN_GPIOI_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOI))   /*!< Mask  0x00000100 */
#define RCC_AHB4CLKEN_GPIOI_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOI_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOH_OFFSET    (7U)
#define RCC_AHB4CLKEN_GPIOH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOH))   /*!< Mask  0x00000080 */
#define RCC_AHB4CLKEN_GPIOH_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOH_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOG_OFFSET    (6U)
#define RCC_AHB4CLKEN_GPIOG_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOG))   /*!< Mask  0x00000040 */
#define RCC_AHB4CLKEN_GPIOG_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOG_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOF_OFFSET    (5U)
#define RCC_AHB4CLKEN_GPIOF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOF))   /*!< Mask  0x00000020 */
#define RCC_AHB4CLKEN_GPIOF_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOF_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOE_OFFSET    (4U)
#define RCC_AHB4CLKEN_GPIOE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOE))   /*!< Mask  0x00000010 */
#define RCC_AHB4CLKEN_GPIOE_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOE_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOD_OFFSET    (3U)
#define RCC_AHB4CLKEN_GPIOD_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOD))   /*!< Mask  0x00000008 */
#define RCC_AHB4CLKEN_GPIOD_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOD_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOC_OFFSET    (2U)
#define RCC_AHB4CLKEN_GPIOC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOC))   /*!< Mask  0x00000004 */
#define RCC_AHB4CLKEN_GPIOC_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOC_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOB_OFFSET    (1U)
#define RCC_AHB4CLKEN_GPIOB_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOB))   /*!< Mask  0x00000002 */
#define RCC_AHB4CLKEN_GPIOB_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOB_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

#define RCC_AHB4CLKEN_GPIOA_OFFSET    (0U)
#define RCC_AHB4CLKEN_GPIOA_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4CLKEN, GPIOA))   /*!< Mask  0x00000001 */
#define RCC_AHB4CLKEN_GPIOA_DISABLE   (0x0UL)                                                   /*!< Value 0x00000000 */
#define RCC_AHB4CLKEN_GPIOA_ENABLE    (0x1UL)                                                   /*!< Value 0x00000001 */

/*!< APB3 clock register */
#define RCC_APB3CLKEN_WINWATCHDOGC1_OFFSET   (6U)
#define RCC_APB3CLKEN_WINWATCHDOGC1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3CLKEN, WINWATCHDOGC1))  /*!< Mask  0x00000040 */
#define RCC_APB3CLKEN_WINWATCHDOGC1_DISABLE  (0x0UL)                                                          /*!< Value 0x00000000 */
#define RCC_APB3CLKEN_WINWATCHDOGC1_ENABLE   (0x1UL)                                                          /*!< Value 0x00000001 */

#define RCC_APB3CLKEN_DSI_OFFSET             (4U)
#define RCC_APB3CLKEN_DSI_MASK               (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3CLKEN, DSI))            /*!< Mask  0x00000010 */
#define RCC_APB3CLKEN_DSI_DISABLE            (0x0UL)                                                          /*!< Value 0x00000000 */
#define RCC_APB3CLKEN_DSI_ENABLE             (0x1UL)                                                          /*!< Value 0x00000001 */

#define RCC_APB3CLKEN_LTDC_OFFSET            (3U)
#define RCC_APB3CLKEN_LTDC_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3CLKEN, LTDC))           /*!< Mask  0x00000001 */
#define RCC_APB3CLKEN_LTDC_DISABLE           (0x0UL)                                                          /*!< Value 0x00000000 */
#define RCC_APB3CLKEN_LTDC_ENABLE            (0x1UL)                                                          /*!< Value 0x00000001 */

/*!< APB1 clock register */
#define RCC_APB1LCLKEN_UART8_OFFSET           (31U)
#define RCC_APB1LCLKEN_UART8_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, UART8))          /*!< Mask  0x80000000 */
#define RCC_APB1LCLKEN_UART8_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_UART8_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_UART7_OFFSET           (30U)
#define RCC_APB1LCLKEN_UART7_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, UART7))          /*!< Mask  0x40000000 */
#define RCC_APB1LCLKEN_UART7_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_UART7_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_DAC12_OFFSET           (29U)
#define RCC_APB1LCLKEN_DAC12_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, DAC12))          /*!< Mask  0x20000000 */
#define RCC_APB1LCLKEN_DAC12_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_DAC12_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_HDMICEC_OFFSET         (27U)
#define RCC_APB1LCLKEN_HDMICEC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, HDMICEC))        /*!< Mask  0x08000000 */
#define RCC_APB1LCLKEN_HDMICEC_DISABLE        (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_HDMICEC_ENABLE         (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_I2C3_OFFSET            (23U)
#define RCC_APB1LCLKEN_I2C3_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, I2C3))           /*!< Mask  0x00800000 */
#define RCC_APB1LCLKEN_I2C3_DISABLE           (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_I2C3_ENABLE            (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_I2C2_OFFSET            (22U)
#define RCC_APB1LCLKEN_I2C2_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, I2C2))           /*!< Mask  0x00400000 */
#define RCC_APB1LCLKEN_I2C2_DISABLE           (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_I2C2_ENABLE            (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_I2C1_OFFSET            (21U)
#define RCC_APB1LCLKEN_I2C1_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, I2C1))           /*!< Mask  0x00200000 */
#define RCC_APB1LCLKEN_I2C1_DISABLE           (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_I2C1_ENABLE            (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_UART5_OFFSET           (20U)
#define RCC_APB1LCLKEN_UART5_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, UART5))          /*!< Mask  0x00100000 */
#define RCC_APB1LCLKEN_UART5_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_UART5_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_UART4_OFFSET           (19U)
#define RCC_APB1LCLKEN_UART4_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, UART4))          /*!< Mask  0x00080000 */
#define RCC_APB1LCLKEN_UART4_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_UART4_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_UART3_OFFSET           (18U)
#define RCC_APB1LCLKEN_UART3_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, UART3))          /*!< Mask  0x00040000 */
#define RCC_APB1LCLKEN_UART3_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_UART3_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_UART2_OFFSET           (17U)
#define RCC_APB1LCLKEN_UART2_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, UART2))          /*!< Mask  0x00020000 */
#define RCC_APB1LCLKEN_UART2_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_UART2_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_SPDIFRX_OFFSET         (16U)
#define RCC_APB1LCLKEN_SPDIFRX_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, SPDIFRX))        /*!< Mask  0x00010000 */
#define RCC_APB1LCLKEN_SPDIFRX_DISABLE        (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_SPDIFRX_ENABLE         (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_SPI3_OFFSET            (15U)
#define RCC_APB1LCLKEN_SPI3_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, SPI3))           /*!< Mask  0x00008000 */
#define RCC_APB1LCLKEN_SPI3_DISABLE           (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_SPI3_ENABLE            (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_SPI2_OFFSET            (14U)
#define RCC_APB1LCLKEN_SPI2_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, SPI2))           /*!< Mask  0x00004000 */
#define RCC_APB1LCLKEN_SPI2_DISABLE           (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_SPI2_ENABLE            (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_WINWATCHDOGC2_OFFSET   (11U)
#define RCC_APB1LCLKEN_WINWATCHDOGC2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, WINWATCHDOGC2))  /*!< Mask  0x00000800 */
#define RCC_APB1LCLKEN_WINWATCHDOGC2_DISABLE  (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_WINWATCHDOGC2_ENABLE   (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_LPTIMER1_OFFSET        (9U)
#define RCC_APB1LCLKEN_LPTIMER1_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, LPTIMER1))       /*!< Mask  0x00000200 */
#define RCC_APB1LCLKEN_LPTIMER1_DISABLE       (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_LPTIMER1_ENABLE        (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER14_OFFSET         (8U)
#define RCC_APB1LCLKEN_TIMER14_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER14))        /*!< Mask  0x00000100 */
#define RCC_APB1LCLKEN_TIMER14_DISABLE        (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER14_ENABLE         (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER13_OFFSET         (7U)
#define RCC_APB1LCLKEN_TIMER13_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER13))        /*!< Mask  0x00000080 */
#define RCC_APB1LCLKEN_TIMER13_DISABLE        (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER13_ENABLE         (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER12_OFFSET         (6U)
#define RCC_APB1LCLKEN_TIMER12_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER12))        /*!< Mask  0x00000040 */
#define RCC_APB1LCLKEN_TIMER12_DISABLE        (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER12_ENABLE         (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER7_OFFSET          (5U)
#define RCC_APB1LCLKEN_TIMER7_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER7))         /*!< Mask  0x00000020 */
#define RCC_APB1LCLKEN_TIMER7_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER7_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER6_OFFSET          (4U)
#define RCC_APB1LCLKEN_TIMER6_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER6))         /*!< Mask  0x00000010 */
#define RCC_APB1LCLKEN_TIMER6_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER6_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER5_OFFSET          (3U)
#define RCC_APB1LCLKEN_TIMER5_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER5))         /*!< Mask  0x00000008 */
#define RCC_APB1LCLKEN_TIMER5_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER5_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER4_OFFSET          (2U)
#define RCC_APB1LCLKEN_TIMER4_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER4))         /*!< Mask  0x00000004 */
#define RCC_APB1LCLKEN_TIMER4_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER4_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER3_OFFSET          (1U)
#define RCC_APB1LCLKEN_TIMER3_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER3))         /*!< Mask  0x00000002 */
#define RCC_APB1LCLKEN_TIMER3_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER3_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1LCLKEN_TIMER2_OFFSET          (0U)
#define RCC_APB1LCLKEN_TIMER2_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LCLKEN, TIMER2))         /*!< Mask  0x00000001 */
#define RCC_APB1LCLKEN_TIMER2_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1LCLKEN_TIMER2_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1HCLKEN_FDCAN_OFFSET           (8U)
#define RCC_APB1HCLKEN_FDCAN_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HCLKEN, FDCAN))          /*!< Mask  0x00000100 */
#define RCC_APB1HCLKEN_FDCAN_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1HCLKEN_FDCAN_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1HCLKEN_MDIOS_OFFSET           (5U)
#define RCC_APB1HCLKEN_MDIOS_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HCLKEN, MDIOS))          /*!< Mask  0x00000020 */
#define RCC_APB1HCLKEN_MDIOS_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1HCLKEN_MDIOS_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1HCLKEN_OPAMP_OFFSET           (4U)
#define RCC_APB1HCLKEN_OPAMP_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HCLKEN, OPAMP))          /*!< Mask  0x00000010 */
#define RCC_APB1HCLKEN_OPAMP_DISABLE          (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1HCLKEN_OPAMP_ENABLE           (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1HCLKEN_SINGLEWIRE_OFFSET      (2U)
#define RCC_APB1HCLKEN_SINGLEWIRE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HCLKEN, SINGLEWIRE))     /*!< Mask  0x00000004 */
#define RCC_APB1HCLKEN_SINGLEWIRE_DISABLE     (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1HCLKEN_SINGLEWIRE_ENABLE      (0x1UL)                                                           /*!< Value 0x00000001 */

#define RCC_APB1HCLKEN_CLKREC_OFFSET          (1U)
#define RCC_APB1HCLKEN_CLKREC_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HCLKEN, CLKREC))         /*!< Mask  0x00000002 */
#define RCC_APB1HCLKEN_CLKREC_DISABLE         (0x0UL)                                                           /*!< Value 0x00000000 */
#define RCC_APB1HCLKEN_CLKREC_ENABLE          (0x1UL)                                                           /*!< Value 0x00000001 */

/*!< APB2 clock register */
#define RCC_APB2CLKEN_HRTIMER_OFFSET   (29U)
#define RCC_APB2CLKEN_HRTIMER_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, HRTIMER))  /*!< Mask  0x20000000 */
#define RCC_APB2CLKEN_HRTIMER_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_HRTIMER_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_DFSDM1_OFFSET    (28U)
#define RCC_APB2CLKEN_DFSDM1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, DFSDM1))   /*!< Mask  0x10000000 */
#define RCC_APB2CLKEN_DFSDM1_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_DFSDM1_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_SAI3_OFFSET      (24U)
#define RCC_APB2CLKEN_SAI3_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, SAI3))     /*!< Mask  0x01000000 */
#define RCC_APB2CLKEN_SAI3_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_SAI3_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_SAI2_OFFSET      (23U)
#define RCC_APB2CLKEN_SAI2_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, SAI2))     /*!< Mask  0x00800000 */
#define RCC_APB2CLKEN_SAI2_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_SAI2_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_SAI1_OFFSET      (22U)
#define RCC_APB2CLKEN_SAI1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, SAI1))     /*!< Mask  0x00400000 */
#define RCC_APB2CLKEN_SAI1_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_SAI1_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_SPI5_OFFSET      (20U)
#define RCC_APB2CLKEN_SPI5_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, SPI5))     /*!< Mask  0x00100000 */
#define RCC_APB2CLKEN_SPI5_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_SPI5_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_TIMER17_OFFSET   (18U)
#define RCC_APB2CLKEN_TIMER17_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, TIMER17))  /*!< Mask  0x00040000 */
#define RCC_APB2CLKEN_TIMER17_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_TIMER17_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_TIMER16_OFFSET   (17U)
#define RCC_APB2CLKEN_TIMER16_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, TIMER16))  /*!< Mask  0x00020000 */
#define RCC_APB2CLKEN_TIMER16_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_TIMER16_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_TIMER15_OFFSET   (16U)
#define RCC_APB2CLKEN_TIMER15_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, TIMER15))  /*!< Mask  0x00010000 */
#define RCC_APB2CLKEN_TIMER15_DISABLE  (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_TIMER15_ENABLE   (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_SPI4_OFFSET      (13U)
#define RCC_APB2CLKEN_SPI4_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, SPI4))     /*!< Mask  0x00002000 */
#define RCC_APB2CLKEN_SPI4_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_SPI4_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_SPI1_OFFSET      (12U)
#define RCC_APB2CLKEN_SPI1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, SPI1))     /*!< Mask  0x00002000 */
#define RCC_APB2CLKEN_SPI1_DISABLE     (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_SPI1_ENABLE      (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_USART6_OFFSET    (5U)
#define RCC_APB2CLKEN_USART6_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, USART6))   /*!< Mask  0x00000020 */
#define RCC_APB2CLKEN_USART6_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_USART6_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_USART1_OFFSET    (4U)
#define RCC_APB2CLKEN_USART1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, USART1))   /*!< Mask  0x00000010 */
#define RCC_APB2CLKEN_USART1_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_USART1_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_TIMER8_OFFSET    (1U)
#define RCC_APB2CLKEN_TIMER8_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, TIMER8))   /*!< Mask  0x00000002 */
#define RCC_APB2CLKEN_TIMER8_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_TIMER8_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

#define RCC_APB2CLKEN_TIMER1_OFFSET    (0U)
#define RCC_APB2CLKEN_TIMER1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2CLKEN, TIMER1))   /*!< Mask  0x00000001 */
#define RCC_APB2CLKEN_TIMER1_DISABLE   (0x0UL)                                                    /*!< Value 0x00000000 */
#define RCC_APB2CLKEN_TIMER1_ENABLE    (0x1UL)                                                    /*!< Value 0x00000001 */

/*!< APB4 clock register */
#define RCC_APB4CLKEN_SAI4_OFFSET       (21U)
#define RCC_APB4CLKEN_SAI4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, SAI4))      /*!< Mask  0x00200000 */
#define RCC_APB4CLKEN_SAI4_DISABLE      (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_SAI4_ENABLE       (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_RTCAPB_OFFSET     (16U)
#define RCC_APB4CLKEN_RTCAPB_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, RTCAPB))    /*!< Mask  0x00010000 */
#define RCC_APB4CLKEN_RTCAPB_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_RTCAPB_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_VREF_OFFSET       (15U)
#define RCC_APB4CLKEN_VREF_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, VREF))      /*!< Mask  0x00008000 */
#define RCC_APB4CLKEN_VREF_DISABLE      (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_VREF_ENABLE       (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_COMP12_OFFSET     (14U)
#define RCC_APB4CLKEN_COMP12_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, COMP12))    /*!< Mask  0x00004000 */
#define RCC_APB4CLKEN_COMP12_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_COMP12_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_LPTIMER5_OFFSET   (12U)
#define RCC_APB4CLKEN_LPTIMER5_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, LPTIMER5))  /*!< Mask  0x00001000 */
#define RCC_APB4CLKEN_LPTIMER5_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_LPTIMER5_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_LPTIMER4_OFFSET   (11U)
#define RCC_APB4CLKEN_LPTIMER4_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, LPTIMER4))  /*!< Mask  0x00000800 */
#define RCC_APB4CLKEN_LPTIMER4_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_LPTIMER4_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_LPTIMER3_OFFSET   (10U)
#define RCC_APB4CLKEN_LPTIMER3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, LPTIMER3))  /*!< Mask  0x00000400 */
#define RCC_APB4CLKEN_LPTIMER3_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_LPTIMER3_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_LPTIMER2_OFFSET   (9U)
#define RCC_APB4CLKEN_LPTIMER2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, LPTIMER2))  /*!< Mask  0x00000200 */
#define RCC_APB4CLKEN_LPTIMER2_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_LPTIMER2_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_I2C4_OFFSET       (7U)
#define RCC_APB4CLKEN_I2C4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, I2C4))      /*!< Mask  0x00000080 */
#define RCC_APB4CLKEN_I2C4_DISABLE      (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_I2C4_ENABLE       (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_SPI6_OFFSET       (5U)
#define RCC_APB4CLKEN_SPI6_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, SPI6))      /*!< Mask  0x00000020 */
#define RCC_APB4CLKEN_SPI6_DISABLE      (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_SPI6_ENABLE       (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_LPUART1_OFFSET    (3U)
#define RCC_APB4CLKEN_LPUART1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, LPUART1))   /*!< Mask  0x00000008 */
#define RCC_APB4CLKEN_LPUART1_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_LPUART1_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APB4CLKEN_SYSCFG_OFFSET     (1U)
#define RCC_APB4CLKEN_SYSCFG_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4CLKEN, SYSCFG))    /*!< Mask  0x00000002 */
#define RCC_APB4CLKEN_SYSCFG_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APB4CLKEN_SYSCFG_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

/*!< AHB3 low power clock register */
#define RCC_AHB3LPCLKEN_AXISRAM_OFFSET     (31U)
#define RCC_AHB3LPCLKEN_AXISRAM_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, AXISRAM))    /*!< Mask  0x80000000 */
#define RCC_AHB3LPCLKEN_AXISRAM_DISABLE    (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_AXISRAM_ENABLE     (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_ITCM1_OFFSET       (30U)
#define RCC_AHB3LPCLKEN_ITCM1_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, ITCM1))      /*!< Mask  0x40000000 */
#define RCC_AHB3LPCLKEN_ITCM1_DISABLE      (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_ITCM1_ENABLE       (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_DTCM2_OFFSET       (29U)
#define RCC_AHB3LPCLKEN_DTCM2_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, DTCM2))      /*!< Mask  0x20000000 */
#define RCC_AHB3LPCLKEN_DTCM2_DISABLE      (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_DTCM2_ENABLE       (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_DTCM1_OFFSET       (28U)
#define RCC_AHB3LPCLKEN_DTCM1_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, DTCM1))      /*!< Mask  0x10000000 */
#define RCC_AHB3LPCLKEN_DTCM1_DISABLE      (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_DTCM1_ENABLE       (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_SDMMC1_OFFSET      (16U)
#define RCC_AHB3LPCLKEN_SDMMC1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, SDMMC1))     /*!< Mask  0x00010000 */
#define RCC_AHB3LPCLKEN_SDMMC1_DISABLE     (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_SDMMC1_ENABLE      (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_QSPI_OFFSET        (14U)
#define RCC_AHB3LPCLKEN_QSPI_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, QSPI))       /*!< Mask  0x00004000 */
#define RCC_AHB3LPCLKEN_QSPI_DISABLE       (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_QSPI_ENABLE        (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_FMC_OFFSET         (12U)
#define RCC_AHB3LPCLKEN_FMC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, FMC))        /*!< Mask  0x00001000 */
#define RCC_AHB3LPCLKEN_FMC_DISABLE        (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_FMC_ENABLE         (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_FLASHINTC_OFFSET   (8U)
#define RCC_AHB3LPCLKEN_FLASHINTC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, FLASHINTC))  /*!< Mask  0x00000100 */
#define RCC_AHB3LPCLKEN_FLASHINTC_DISABLE  (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_FLASHINTC_ENABLE   (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_JPGDEC_OFFSET      (5U)
#define RCC_AHB3LPCLKEN_JPGDEC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, JPGDEC))     /*!< Mask  0x00000020 */
#define RCC_AHB3LPCLKEN_JPGDEC_DISABLE     (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_JPGDEC_ENABLE      (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_DMA2D_OFFSET       (4U)
#define RCC_AHB3LPCLKEN_DMA2D_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, DMA2D))      /*!< Mask  0x00000010 */
#define RCC_AHB3LPCLKEN_DMA2D_DISABLE      (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_DMA2D_ENABLE       (0x1UL)                                                        /*!< Value 0x00000001 */

#define RCC_AHB3LPCLKEN_MDMA_OFFSET        (0U)
#define RCC_AHB3LPCLKEN_MDMA_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPCLKEN, MDMA))       /*!< Mask  0x00000001 */
#define RCC_AHB3LPCLKEN_MDMA_DISABLE       (0x0UL)                                                        /*!< Value 0x00000000 */
#define RCC_AHB3LPCLKEN_MDMA_ENABLE        (0x1UL)                                                        /*!< Value 0x00000001 */

/*!< AHB1 low power clock register */
#define RCC_AHB1LPCLKEN_USB2OTG_OFFSET   (27U)
#define RCC_AHB1LPCLKEN_USB2OTG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, USB2OTG))  /*!< Mask  0x08000000 */
#define RCC_AHB1LPCLKEN_USB2OTG_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_USB2OTG_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_USBPHY1_OFFSET   (26U)
#define RCC_AHB1LPCLKEN_USBPHY1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, USBPHY1))  /*!< Mask  0x04000000 */
#define RCC_AHB1LPCLKEN_USBPHY1_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_USBPHY1_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_USB1OTG_OFFSET   (25U)
#define RCC_AHB1LPCLKEN_USB1OTG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, USB1OTG))  /*!< Mask  0x02000000 */
#define RCC_AHB1LPCLKEN_USB1OTG_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_USB1OTG_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_USBPHY2_OFFSET   (18U)
#define RCC_AHB1LPCLKEN_USBPHY2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, USBPHY2))  /*!< Mask  0x00040000 */
#define RCC_AHB1LPCLKEN_USBPHY2_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_USBPHY2_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_ETH1RX_OFFSET    (17U)
#define RCC_AHB1LPCLKEN_ETH1RX_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, ETH1RX))   /*!< Mask  0x00020000 */
#define RCC_AHB1LPCLKEN_ETH1RX_DISABLE   (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_ETH1RX_ENABLE    (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_ETH1TX_OFFSET    (16U)
#define RCC_AHB1LPCLKEN_ETH1TX_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, ETH1TX))   /*!< Mask  0x00010000 */
#define RCC_AHB1LPCLKEN_ETH1TX_DISABLE   (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_ETH1TX_ENABLE    (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_ETH1MAC_OFFSET   (15U)
#define RCC_AHB1LPCLKEN_ETH1MAC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, ETH1MAC))  /*!< Mask  0x00008000 */
#define RCC_AHB1LPCLKEN_ETH1MAC_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_ETH1MAC_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_ART_OFFSET       (14U)
#define RCC_AHB1LPCLKEN_ART_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, ART))      /*!< Mask  0x00004000 */
#define RCC_AHB1LPCLKEN_ART_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_ART_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_ADC12_OFFSET     (5U)
#define RCC_AHB1LPCLKEN_ADC12_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, ADC12))    /*!< Mask  0x00000020 */
#define RCC_AHB1LPCLKEN_ADC12_DISABLE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_ADC12_ENABLE     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_DMA2_OFFSET      (1U)
#define RCC_AHB1LPCLKEN_DMA2_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, DMA2))     /*!< Mask  0x00000002 */
#define RCC_AHB1LPCLKEN_DMA2_DISABLE     (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_DMA2_ENABLE      (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_AHB1LPCLKEN_DMA1_OFFSET      (0U)
#define RCC_AHB1LPCLKEN_DMA1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPCLKEN, DMA1))     /*!< Mask  0x00000001 */
#define RCC_AHB1LPCLKEN_DMA1_DISABLE     (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_AHB1LPCLKEN_DMA1_ENABLE      (0x1UL)                                                      /*!< Value 0x00000001 */

/*!< AHB2 low power clock register */
#define RCC_AHB2LPCLKEN_SRAM3_OFFSET    (31U)
#define RCC_AHB2LPCLKEN_SRAM3_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, SRAM3))   /*!< Mask  0x80000000 */
#define RCC_AHB2LPCLKEN_SRAM3_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_SRAM3_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_SRAM2_OFFSET    (30U)
#define RCC_AHB2LPCLKEN_SRAM2_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, SRAM2))   /*!< Mask  0x40000000 */
#define RCC_AHB2LPCLKEN_SRAM2_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_SRAM2_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_SRAM1_OFFSET    (29U)
#define RCC_AHB2LPCLKEN_SRAM1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, SRAM1))   /*!< Mask  0x20000000 */
#define RCC_AHB2LPCLKEN_SRAM1_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_SRAM1_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_SDMMC2_OFFSET   (9U)
#define RCC_AHB2LPCLKEN_SDMMC2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, SDMMC2))  /*!< Mask  0x00000200 */
#define RCC_AHB2LPCLKEN_SDMMC2_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_SDMMC2_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_RNG_OFFSET      (6U)
#define RCC_AHB2LPCLKEN_RNG_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, RNG))     /*!< Mask  0x00000040 */
#define RCC_AHB2LPCLKEN_RNG_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_RNG_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_HASH_OFFSET     (5U)
#define RCC_AHB2LPCLKEN_HASH_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, HASH))    /*!< Mask  0x00000020 */
#define RCC_AHB2LPCLKEN_HASH_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_HASH_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_CRYPTO_OFFSET   (4U)
#define RCC_AHB2LPCLKEN_CRYPTO_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, CRYPTO))  /*!< Mask  0x00000010 */
#define RCC_AHB2LPCLKEN_CRYPTO_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_CRYPTO_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB2LPCLKEN_DCMI_OFFSET     (0U)
#define RCC_AHB2LPCLKEN_DCMI_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPCLKEN, DCMI))    /*!< Mask  0x00000001 */
#define RCC_AHB2LPCLKEN_DCMI_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB2LPCLKEN_DCMI_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

/*!< AHB4 low power clock register */
#define RCC_AHB4LPCLKEN_BCKRAM_OFFSET   (28U)
#define RCC_AHB4LPCLKEN_BCKRAM_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, BCKRAM))  /*!< Mask  0x10000000 */
#define RCC_AHB4LPCLKEN_BCKRAM_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_BCKRAM_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_HSEM_OFFSET     (25U)
#define RCC_AHB4LPCLKEN_HSEM_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, HSEM))    /*!< Mask  0x02000000 */
#define RCC_AHB4LPCLKEN_HSEM_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_HSEM_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_ADC3_OFFSET     (24U)
#define RCC_AHB4LPCLKEN_ADC3_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, ADC3))    /*!< Mask  0x01000000 */
#define RCC_AHB4LPCLKEN_ADC3_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_ADC3_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_BDMA_OFFSET     (21U)
#define RCC_AHB4LPCLKEN_BDMA_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, BDMA))    /*!< Mask  0x00200000 */
#define RCC_AHB4LPCLKEN_BDMA_DISABLE    (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_BDMA_ENABLE     (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_CRC_OFFSET      (19U)
#define RCC_AHB4LPCLKEN_CRC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, CRC))     /*!< Mask  0x00080000 */
#define RCC_AHB4LPCLKEN_CRC_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_CRC_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOK_OFFSET    (10U)
#define RCC_AHB4LPCLKEN_GPIOK_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOK))   /*!< Mask  0x00000400 */
#define RCC_AHB4LPCLKEN_GPIOK_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOK_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOJ_OFFSET    (9U)
#define RCC_AHB4LPCLKEN_GPIOJ_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOJ))   /*!< Mask  0x00000200 */
#define RCC_AHB4LPCLKEN_GPIOJ_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOJ_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOI_OFFSET    (8U)
#define RCC_AHB4LPCLKEN_GPIOI_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOI))   /*!< Mask  0x00000100 */
#define RCC_AHB4LPCLKEN_GPIOI_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOI_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOH_OFFSET    (7U)
#define RCC_AHB4LPCLKEN_GPIOH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOH))   /*!< Mask  0x00000080 */
#define RCC_AHB4LPCLKEN_GPIOH_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOH_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOG_OFFSET    (6U)
#define RCC_AHB4LPCLKEN_GPIOG_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOG))   /*!< Mask  0x00000040 */
#define RCC_AHB4LPCLKEN_GPIOG_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOG_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOF_OFFSET    (5U)
#define RCC_AHB4LPCLKEN_GPIOF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOF))   /*!< Mask  0x00000020 */
#define RCC_AHB4LPCLKEN_GPIOF_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOF_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOE_OFFSET    (4U)
#define RCC_AHB4LPCLKEN_GPIOE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOE))   /*!< Mask  0x00000010 */
#define RCC_AHB4LPCLKEN_GPIOE_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOE_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOD_OFFSET    (3U)
#define RCC_AHB4LPCLKEN_GPIOD_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOD))   /*!< Mask  0x00000008 */
#define RCC_AHB4LPCLKEN_GPIOD_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOD_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOC_OFFSET    (2U)
#define RCC_AHB4LPCLKEN_GPIOC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOC))   /*!< Mask  0x00000004 */
#define RCC_AHB4LPCLKEN_GPIOC_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOC_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOB_OFFSET    (1U)
#define RCC_AHB4LPCLKEN_GPIOB_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOB))   /*!< Mask  0x00000002 */
#define RCC_AHB4LPCLKEN_GPIOB_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOB_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_AHB4LPCLKEN_GPIOA_OFFSET    (0U)
#define RCC_AHB4LPCLKEN_GPIOA_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPCLKEN, GPIOA))   /*!< Mask  0x00000001 */
#define RCC_AHB4LPCLKEN_GPIOA_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_AHB4LPCLKEN_GPIOA_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

/*!< APB3 low power clock register */
#define RCC_APB3LPCLKEN_WINWATCHDOGC1_OFFSET   (6U)
#define RCC_APB3LPCLKEN_WINWATCHDOGC1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3LPCLKEN, WINWATCHDOGC1))  /*!< Mask  0x00000040 */
#define RCC_APB3LPCLKEN_WINWATCHDOGC1_DISABLE  (0x0UL)                                                            /*!< Value 0x00000000 */
#define RCC_APB3LPCLKEN_WINWATCHDOGC1_ENABLE   (0x1UL)                                                            /*!< Value 0x00000001 */

#define RCC_APB3LPCLKEN_DSI_OFFSET             (4U)
#define RCC_APB3LPCLKEN_DSI_MASK               (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3LPCLKEN, DSI))            /*!< Mask  0x00000010 */
#define RCC_APB3LPCLKEN_DSI_DISABLE            (0x0UL)                                                            /*!< Value 0x00000000 */
#define RCC_APB3LPCLKEN_DSI_ENABLE             (0x1UL)                                                            /*!< Value 0x00000001 */

#define RCC_APB3LPCLKEN_LTDC_OFFSET            (3U)
#define RCC_APB3LPCLKEN_LTDC_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3LPCLKEN, LTDC))           /*!< Mask  0x00000001 */
#define RCC_APB3LPCLKEN_LTDC_DISABLE           (0x0UL)                                                            /*!< Value 0x00000000 */
#define RCC_APB3LPCLKEN_LTDC_ENABLE            (0x1UL)                                                            /*!< Value 0x00000001 */

/*!< APB1 low power clock register */
#define RCC_APB1LLPCLKEN_UART8_OFFSET           (31U)
#define RCC_APB1LLPCLKEN_UART8_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, UART8))           /*!< Mask  0x80000000 */
#define RCC_APB1LLPCLKEN_UART8_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_UART8_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_UART7_OFFSET           (30U)
#define RCC_APB1LLPCLKEN_UART7_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, UART7))           /*!< Mask  0x40000000 */
#define RCC_APB1LLPCLKEN_UART7_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_UART7_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_DAC12_OFFSET           (29U)
#define RCC_APB1LLPCLKEN_DAC12_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, DAC12))           /*!< Mask  0x20000000 */
#define RCC_APB1LLPCLKEN_DAC12_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_DAC12_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_HDMICEC_OFFSET         (27U)
#define RCC_APB1LLPCLKEN_HDMICEC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, HDMICEC))         /*!< Mask  0x08000000 */
#define RCC_APB1LLPCLKEN_HDMICEC_DISABLE        (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_HDMICEC_ENABLE         (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_I2C3_OFFSET            (23U)
#define RCC_APB1LLPCLKEN_I2C3_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, I2C3))            /*!< Mask  0x00800000 */
#define RCC_APB1LLPCLKEN_I2C3_DISABLE           (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_I2C3_ENABLE            (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_I2C2_OFFSET            (22U)
#define RCC_APB1LLPCLKEN_I2C2_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, I2C2))            /*!< Mask  0x00400000 */
#define RCC_APB1LLPCLKEN_I2C2_DISABLE           (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_I2C2_ENABLE            (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_I2C1_OFFSET            (21U)
#define RCC_APB1LLPCLKEN_I2C1_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, I2C1))            /*!< Mask  0x00200000 */
#define RCC_APB1LLPCLKEN_I2C1_DISABLE           (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_I2C1_ENABLE            (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_UART5_OFFSET           (20U)
#define RCC_APB1LLPCLKEN_UART5_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, UART5))           /*!< Mask  0x00100000 */
#define RCC_APB1LLPCLKEN_UART5_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_UART5_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_UART4_OFFSET           (19U)
#define RCC_APB1LLPCLKEN_UART4_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, UART4))           /*!< Mask  0x00080000 */
#define RCC_APB1LLPCLKEN_UART4_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_UART4_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_UART3_OFFSET           (18U)
#define RCC_APB1LLPCLKEN_UART3_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, UART3))           /*!< Mask  0x00040000 */
#define RCC_APB1LLPCLKEN_UART3_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_UART3_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_UART2_OFFSET           (17U)
#define RCC_APB1LLPCLKEN_UART2_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, UART2))           /*!< Mask  0x00020000 */
#define RCC_APB1LLPCLKEN_UART2_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_UART2_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_SPDIFRX_OFFSET         (16U)
#define RCC_APB1LLPCLKEN_SPDIFRX_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, SPDIFRX))         /*!< Mask  0x00010000 */
#define RCC_APB1LLPCLKEN_SPDIFRX_DISABLE        (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_SPDIFRX_ENABLE         (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_SPI3_OFFSET            (15U)
#define RCC_APB1LLPCLKEN_SPI3_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, SPI3))            /*!< Mask  0x00008000 */
#define RCC_APB1LLPCLKEN_SPI3_DISABLE           (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_SPI3_ENABLE            (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_SPI2_OFFSET            (14U)
#define RCC_APB1LLPCLKEN_SPI2_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, SPI2))            /*!< Mask  0x00004000 */
#define RCC_APB1LLPCLKEN_SPI2_DISABLE           (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_SPI2_ENABLE            (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_WINWATCHDOGC2_OFFSET   (11U)
#define RCC_APB1LLPCLKEN_WINWATCHDOGC2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, WINWATCHDOGC2))   /*!< Mask  0x00000800 */
#define RCC_APB1LLPCLKEN_WINWATCHDOGC2_DISABLE  (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_WINWATCHDOGC2_ENABLE   (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_LPTIMER1_OFFSET        (9U)
#define RCC_APB1LLPCLKEN_LPTIMER1_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, LPTIMER1))        /*!< Mask  0x00000200 */
#define RCC_APB1LLPCLKEN_LPTIMER1_DISABLE       (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_LPTIMER1_ENABLE        (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER14_OFFSET         (8U)
#define RCC_APB1LLPCLKEN_TIMER14_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER14))         /*!< Mask  0x00000100 */
#define RCC_APB1LLPCLKEN_TIMER14_DISABLE        (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER14_ENABLE         (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER13_OFFSET         (7U)
#define RCC_APB1LLPCLKEN_TIMER13_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER13))         /*!< Mask  0x00000080 */
#define RCC_APB1LLPCLKEN_TIMER13_DISABLE        (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER13_ENABLE         (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER12_OFFSET         (6U)
#define RCC_APB1LLPCLKEN_TIMER12_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER12))         /*!< Mask  0x00000040 */
#define RCC_APB1LLPCLKEN_TIMER12_DISABLE        (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER12_ENABLE         (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER7_OFFSET          (5U)
#define RCC_APB1LLPCLKEN_TIMER7_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER7))          /*!< Mask  0x00000020 */
#define RCC_APB1LLPCLKEN_TIMER7_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER7_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER6_OFFSET          (4U)
#define RCC_APB1LLPCLKEN_TIMER6_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER6))          /*!< Mask  0x00000010 */
#define RCC_APB1LLPCLKEN_TIMER6_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER6_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER5_OFFSET          (3U)
#define RCC_APB1LLPCLKEN_TIMER5_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER5))          /*!< Mask  0x00000008 */
#define RCC_APB1LLPCLKEN_TIMER5_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER5_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER4_OFFSET          (2U)
#define RCC_APB1LLPCLKEN_TIMER4_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER4))          /*!< Mask  0x00000004 */
#define RCC_APB1LLPCLKEN_TIMER4_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER4_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER3_OFFSET          (1U)
#define RCC_APB1LLPCLKEN_TIMER3_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER3))          /*!< Mask  0x00000002 */
#define RCC_APB1LLPCLKEN_TIMER3_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER3_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1LLPCLKEN_TIMER2_OFFSET          (0U)
#define RCC_APB1LLPCLKEN_TIMER2_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPCLKEN, TIMER2))          /*!< Mask  0x00000001 */
#define RCC_APB1LLPCLKEN_TIMER2_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1LLPCLKEN_TIMER2_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1HLPCLKEN_FDCAN_OFFSET           (8U)
#define RCC_APB1HLPCLKEN_FDCAN_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPCLKEN, FDCAN))           /*!< Mask  0x00000100 */
#define RCC_APB1HLPCLKEN_FDCAN_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1HLPCLKEN_FDCAN_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1HLPCLKEN_MDIOS_OFFSET           (5U)
#define RCC_APB1HLPCLKEN_MDIOS_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPCLKEN, MDIOS))           /*!< Mask  0x00000020 */
#define RCC_APB1HLPCLKEN_MDIOS_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1HLPCLKEN_MDIOS_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1HLPCLKEN_OPAMP_OFFSET           (4U)
#define RCC_APB1HLPCLKEN_OPAMP_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPCLKEN, OPAMP))           /*!< Mask  0x00000010 */
#define RCC_APB1HLPCLKEN_OPAMP_DISABLE          (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1HLPCLKEN_OPAMP_ENABLE           (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1HLPCLKEN_SINGLEWIRE_OFFSET      (2U)
#define RCC_APB1HLPCLKEN_SINGLEWIRE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPCLKEN, SINGLEWIRE))      /*!< Mask  0x00000004 */
#define RCC_APB1HLPCLKEN_SINGLEWIRE_DISABLE     (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1HLPCLKEN_SINGLEWIRE_ENABLE      (0x1UL)                                                              /*!< Value 0x00000001 */

#define RCC_APB1HLPCLKEN_CLKREC_OFFSET          (1U)
#define RCC_APB1HLPCLKEN_CLKREC_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPCLKEN, CLKREC))          /*!< Mask  0x00000002 */
#define RCC_APB1HLPCLKEN_CLKREC_DISABLE         (0x0UL)                                                              /*!< Value 0x00000000 */
#define RCC_APB1HLPCLKEN_CLKREC_ENABLE          (0x1UL)                                                              /*!< Value 0x00000001 */

/*!< APB2 low power clock register */
#define RCC_APBLPCLKEN_HRTIMER_OFFSET   (29U)
#define RCC_APBLPCLKEN_HRTIMER_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, HRTIMER))  /*!< Mask  0x20000000 */
#define RCC_APBLPCLKEN_HRTIMER_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_HRTIMER_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_DFSDM1_OFFSET    (28U)
#define RCC_APBLPCLKEN_DFSDM1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, DFSDM1))   /*!< Mask  0x10000000 */
#define RCC_APBLPCLKEN_DFSDM1_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_DFSDM1_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SAI3_OFFSET      (24U)
#define RCC_APBLPCLKEN_SAI3_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SAI3))     /*!< Mask  0x01000000 */
#define RCC_APBLPCLKEN_SAI3_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SAI3_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SAI2_OFFSET      (23U)
#define RCC_APBLPCLKEN_SAI2_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SAI2))     /*!< Mask  0x00800000 */
#define RCC_APBLPCLKEN_SAI2_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SAI2_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SAI1_OFFSET      (22U)
#define RCC_APBLPCLKEN_SAI1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SAI1))     /*!< Mask  0x00400000 */
#define RCC_APBLPCLKEN_SAI1_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SAI1_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SPI5_OFFSET      (20U)
#define RCC_APBLPCLKEN_SPI5_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SPI5))     /*!< Mask  0x00100000 */
#define RCC_APBLPCLKEN_SPI5_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SPI5_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_TIMER17_OFFSET   (18U)
#define RCC_APBLPCLKEN_TIMER17_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, TIMER17))  /*!< Mask  0x00040000 */
#define RCC_APBLPCLKEN_TIMER17_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_TIMER17_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_TIMER16_OFFSET   (17U)
#define RCC_APBLPCLKEN_TIMER16_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, TIMER16))  /*!< Mask  0x00020000 */
#define RCC_APBLPCLKEN_TIMER16_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_TIMER16_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_TIMER15_OFFSET   (16U)
#define RCC_APBLPCLKEN_TIMER15_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, TIMER15))  /*!< Mask  0x00010000 */
#define RCC_APBLPCLKEN_TIMER15_DISABLE  (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_TIMER15_ENABLE   (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SPI4_OFFSET      (13U)
#define RCC_APBLPCLKEN_SPI4_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SPI4))     /*!< Mask  0x00002000 */
#define RCC_APBLPCLKEN_SPI4_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SPI4_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SPI1_OFFSET      (12U)
#define RCC_APBLPCLKEN_SPI1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SPI1))     /*!< Mask  0x00002000 */
#define RCC_APBLPCLKEN_SPI1_DISABLE     (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SPI1_ENABLE      (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_USART6_OFFSET    (5U)
#define RCC_APBLPCLKEN_USART6_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, USART6))   /*!< Mask  0x00000020 */
#define RCC_APBLPCLKEN_USART6_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_USART6_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_USART1_OFFSET    (4U)
#define RCC_APBLPCLKEN_USART1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, USART1))   /*!< Mask  0x00000010 */
#define RCC_APBLPCLKEN_USART1_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_USART1_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_TIMER8_OFFSET    (1U)
#define RCC_APBLPCLKEN_TIMER8_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, TIMER8))   /*!< Mask  0x00000002 */
#define RCC_APBLPCLKEN_TIMER8_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_TIMER8_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_TIMER1_OFFSET    (0U)
#define RCC_APBLPCLKEN_TIMER1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, TIMER1))   /*!< Mask  0x00000001 */
#define RCC_APBLPCLKEN_TIMER1_DISABLE   (0x0UL)                                                     /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_TIMER1_ENABLE    (0x1UL)                                                     /*!< Value 0x00000001 */

/*!< APB4 low power clock register */
#define RCC_APBLPCLKEN_SAI4_OFFSET       (21U)
#define RCC_APBLPCLKEN_SAI4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SAI4))      /*!< Mask  0x00200000 */
#define RCC_APBLPCLKEN_SAI4_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SAI4_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_RTCAPB_OFFSET     (16U)
#define RCC_APBLPCLKEN_RTCAPB_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, RTCAPB))    /*!< Mask  0x00010000 */
#define RCC_APBLPCLKEN_RTCAPB_DISABLE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_RTCAPB_ENABLE     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_VREF_OFFSET       (15U)
#define RCC_APBLPCLKEN_VREF_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, VREF))      /*!< Mask  0x00008000 */
#define RCC_APBLPCLKEN_VREF_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_VREF_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_COMP12_OFFSET     (14U)
#define RCC_APBLPCLKEN_COMP12_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, COMP12))    /*!< Mask  0x00004000 */
#define RCC_APBLPCLKEN_COMP12_DISABLE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_COMP12_ENABLE     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_LPTIMER5_OFFSET   (12U)
#define RCC_APBLPCLKEN_LPTIMER5_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, LPTIMER5))  /*!< Mask  0x00001000 */
#define RCC_APBLPCLKEN_LPTIMER5_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_LPTIMER5_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_LPTIMER4_OFFSET   (11U)
#define RCC_APBLPCLKEN_LPTIMER4_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, LPTIMER4))  /*!< Mask  0x00000800 */
#define RCC_APBLPCLKEN_LPTIMER4_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_LPTIMER4_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_LPTIMER3_OFFSET   (10U)
#define RCC_APBLPCLKEN_LPTIMER3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, LPTIMER3))  /*!< Mask  0x00000400 */
#define RCC_APBLPCLKEN_LPTIMER3_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_LPTIMER3_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_LPTIMER2_OFFSET   (9U)
#define RCC_APBLPCLKEN_LPTIMER2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, LPTIMER2))  /*!< Mask  0x00000200 */
#define RCC_APBLPCLKEN_LPTIMER2_DISABLE  (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_LPTIMER2_ENABLE   (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_I2C4_OFFSET       (7U)
#define RCC_APBLPCLKEN_I2C4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, I2C4))      /*!< Mask  0x00000080 */
#define RCC_APBLPCLKEN_I2C4_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_I2C4_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SPI6_OFFSET       (5U)
#define RCC_APBLPCLKEN_SPI6_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SPI6))      /*!< Mask  0x00000020 */
#define RCC_APBLPCLKEN_SPI6_DISABLE      (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SPI6_ENABLE       (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_LPUART1_OFFSET    (3U)
#define RCC_APBLPCLKEN_LPUART1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, LPUART1))   /*!< Mask  0x00000008 */
#define RCC_APBLPCLKEN_LPUART1_DISABLE   (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_LPUART1_ENABLE    (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_APBLPCLKEN_SYSCFG_OFFSET     (1U)
#define RCC_APBLPCLKEN_SYSCFG_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APBLPCLKEN, SYSCFG))    /*!< Mask  0x00000002 */
#define RCC_APBLPCLKEN_SYSCFG_DISABLE    (0x0UL)                                                      /*!< Value 0x00000000 */
#define RCC_APBLPCLKEN_SYSCFG_ENABLE     (0x1UL)                                                      /*!< Value 0x00000001 */

#define RCC_OFFSET 0x4400UL
#define RCC_BASE  (D3_AHB4_BASE + RCC_OFFSET)

/*!< RCC common registers */
#define RCC_COMMON_OFFSET 0x0
#define RCC_COMMON_BASE OFFSET_ADDRESS(RCC_BASE, RCC_COMMON_OFFSET)
#define RCC_COMMON REGISTER_PTR(rcc_common_regs, RCC_COMMON_BASE)

/*!< RCC registers for Core 1 */
#define RCC_C1_OFFSET 0x130UL
#define RCC_C1_BASE OFFSET_ADDRESS(RCC_BASE, RCC_C1_OFFSET)
#define RCC_C1 REGISTER_PTR(rcc_core_regs, RCC_C1_BASE)

/*!< RCC registers for Core 2 */
#define RCC_C2_OFFSET 0x190UL
#define RCC_C2_BASE OFFSET_ADDRESS(RCC_BASE, RCC_C2_OFFSET)
#define RCC_C2 REGISTER_PTR(rcc_core_regs, RCC_C2_BASE)

/** @} */ // End of RCC group

/** @} */ // End of RegisterGroup group

#endif // RCC_H
