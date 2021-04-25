#ifndef RCC_REGISTERS_H
#define RCC_REGISTERS_H
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
	RW uint32_t CR;             /*!< Source control register                                     (Offset 0x0)            */
	RW uint32_t HSICFGR;        /*!< HSI (High speed internal oscillator) configuration register (Offset 0x4)            */
	RO uint32_t CRRCR;          /*!< Clock recovery RC register                                  (Offset 0x8)            */
	RW uint32_t CSICFGR;        /*!< CSI (Low power internal oscillator) configuration register  (Offset 0xC)            */
	RW uint32_t CFGR;           /*!< Clock configuration register                                (Offset 0x10)           */
	   uint32_t reserved0;      /*!< Reserved                                                    (Offset 0x14)           */
	RW uint32_t D1CFGR;         /*!< Domain 1 clock configuration register                       (Offset 0x18)           */
	RW uint32_t D2CFGR;         /*!< Domain 2 clock configuration register                       (Offset 0x1C)           */
	RW uint32_t D3CFGR;         /*!< Domain 3 clock configuration register                       (Offset 0x20)           */
	   uint32_t reserved1;      /*!< Reserved                                                    (Offset 0x24)           */
	RW uint32_t PLLCKSELR;      /*!< PLLs clock source selection register                        (Offset 0x28)           */
	RW uint32_t PLLCFGR;        /*!< PLLs configuration register                                 (Offset 0x2C)           */
	RW uint32_t PLL1DIVR;       /*!< PLL 1 divider register                                      (Offset 0x30)           */
	RW uint32_t PLL1FRACR;      /*!< PLL 1 fractional divider register                           (Offset 0x34)           */
	RW uint32_t PLL2DIVR;       /*!< PLL 2 divider register                                      (Offset 0x38)           */
	RW uint32_t PLL2FRACR;      /*!< PLL 2 fractional divider register                           (Offset 0x3C)           */
	RW uint32_t PLL3DIVR;       /*!< PLL 3 divider register                                      (Offset 0x40)           */
	RW uint32_t PLL3FRACR;      /*!< PLL 3 fractional divider register                           (Offset 0x44)           */
	   uint32_t reserved2;      /*!< Reserved register                                           (Offset 0x48)           */
	RW uint32_t D1CCIPR;        /*!< Domain 1 kernel clock configuration register                (Offset 0x4C)           */
	RW uint32_t D2CCIP1R;       /*!< Domain 2 kernel clock configuration 1 register              (Offset 0x50)           */
	RW uint32_t D2CCIP2R;       /*!< Domain 2 kernel clock configuration 2 register              (Offset 0x54)           */
	RW uint32_t D3CCIPR;        /*!< Domain 3 kernel clock configuration register                (Offset 0x58)           */
	   uint32_t reserved3;      /*!< Reserved                                                    (Offset 0x5C)           */
	RW uint32_t CIER;           /*!< Clock source interrupt enable register                      (Offset 0x60)           */
	RO uint32_t CLKINTFLAG;     /*!< Clock source interrupt flag register                        (Offset 0x64)           */
	RW uint32_t CLKINTCLR;      /*!< Clock source interrupt clear register                       (Offset 0x68)           */
	   uint32_t reserved4;      /*!< Reserved                                                    (Offset 0x6C)           */
	RW uint32_t BDCR;           /*!< Backup domain control register                              (Offset 0x70)           */
	RW uint32_t CSR;            /*!< Clock control and status register                           (Offset 0x74)           */
	   uint32_t reserved5;      /*!< Reserved                                                    (Offset 0x78)           */
	RW uint32_t AHB3RSTR;       /*!< AHB3 reset register                                         (Offset 0x7C)           */
	RW uint32_t AHB1RSTR;       /*!< AHB1 reset register                                         (Offset 0x80)           */
	RW uint32_t AHB2RSTR;       /*!< AHB2 reset register                                         (Offset 0x84)           */
	RW uint32_t AHB4RSTR;       /*!< AHB4 reset register                                         (Offset 0x88)           */
	RW uint32_t APB3RSTR;       /*!< APB3 reset register                                         (Offset 0x8C)           */
	RW uint32_t APB1LRSTR;      /*!< APB1 reset low register                                     (Offset 0x90)           */
	RW uint32_t APB1HRSTR;      /*!< APB1 reset high register                                    (Offset 0x94)           */
	RW uint32_t APB2RSTR;       /*!< APB2 reset register                                         (Offset 0x98)           */
	RW uint32_t APB4RSTR;       /*!< APB4 reset register                                         (Offset 0x9C)           */
	RW uint32_t GCR;            /*!< Global control register                                     (Offset 0xA0)           */
	   uint32_t reserved6;      /*!< Reserved                                                    (Offset 0xA4)           */
	RW uint32_t D3AMR;          /*!< Domain 3 autonomous mode                                    (Offset 0xA8)           */
	   uint32_t reserved7[9U];  /*!< Reserved                                                    (Offset 0xAC to 0xCC)   */
	RW uint32_t RSR;            /*!< Reset status                                                (Offset 0xD0)           */
	RW uint32_t AHB3ENR;        /*!< AHB3 clock register                                         (Offset 0xD4)           */
	RW uint32_t AHB1ENR;        /*!< AHB1 clock register                                         (Offset 0xD8)           */
	RW uint32_t AHB2ENR;        /*!< AHB2 clock register                                         (Offset 0xDC)           */
	RW uint32_t AHB4ENR;        /*!< AHB4 clock register                                         (Offset 0xE0)           */
	RW uint32_t APB3ENR;        /*!< APB3 clock register                                         (Offset 0xE4)           */
	RW uint32_t APB1LENR;       /*!< APB1 low clock register                                     (Offset 0xE8)           */
	RW uint32_t APB1HENR;       /*!< APB1 high clock register                                    (Offset 0xEC)           */
	RW uint32_t APB2ENR;        /*!< APB2 clock register                                         (Offset 0xF0)           */
	RW uint32_t APB4ENR;        /*!< APB4 clock register                                         (Offset 0xF4)           */
	   uint32_t reserved8;      /*!< Reserved                                                    (Offset 0xF8)           */
	RW uint32_t AHB3LPENR;      /*!< AHB3 low power clock register                               (Offset 0xFC)           */
	RW uint32_t AHB1LPENR;      /*!< AHB1 low power clock register                               (Offset 0x100)          */
	RW uint32_t AHB2LPENR;      /*!< AHB2 low power clock register                               (Offset 0x104)          */
	RW uint32_t AHB4LPENR;      /*!< AHB4 low power clock register                               (Offset 0x108)          */
	RW uint32_t APB3LPENR;      /*!< APB3 low power clock register                               (Offset 0x10C)          */
	RW uint32_t APB1LLPENR;     /*!< APB1 low low power clock register                           (Offset 0x110)          */
	RW uint32_t APB1HLPENR;     /*!< APB1 high low power clock register                          (Offset 0x114)          */
	RW uint32_t APB2LPENR;      /*!< APB2 low power clock register                               (Offset 0x118)          */
	RW uint32_t APB4LPENR;      /*!< APB4 low power clock register                               (Offset 0x11C)          */
	   uint32_t reserved9[4U];  /*!< Reserved                                                    (Offset 0x120 to 0x12C) */
} rcc_common_regs;

typedef struct {
	RW uint32_t RSR;            /*!< Reset status                       (Offset 0x0)          */
	RW uint32_t AHB3ENR;        /*!< AHB3 clock register                (Offset 0x4)          */
	RW uint32_t AHB1ENR;        /*!< AHB1 clock register                (Offset 0x8)          */
	RW uint32_t AHB2ENR;        /*!< AHB2 clock register                (Offset 0xC)          */
	RW uint32_t AHB4ENR;        /*!< AHB4 clock register                (Offset 0x10)         */
	RW uint32_t APB3ENR;        /*!< APB3 clock register                (Offset 0x14)         */
	RW uint32_t APB1LENR;       /*!< APB1 low clock register            (Offset 0x18)         */
	RW uint32_t APB1HENR;       /*!< APB1 high clock register           (Offset 0x1C)         */
	RW uint32_t APB2ENR;        /*!< APB2 clock register                (Offset 0x20)         */
	RW uint32_t APB4ENR;        /*!< APB4 clock register                (Offset 0x24)         */
	   uint32_t reserved0;      /*!< Reserved                           (Offset 0x28)         */
	RW uint32_t AHB3LPENR;      /*!< AHB3 low power clock register      (Offset 0x2C)         */
	RW uint32_t AHB1LPENR;      /*!< AHB1 low power clock register      (Offset 0x30)         */
	RW uint32_t AHB2LPENR;      /*!< AHB2 low power clock register      (Offset 0x34)         */
	RW uint32_t AHB4LPENR;      /*!< AHB4 low power clock register      (Offset 0x38)         */
	RW uint32_t APB3LPENR;      /*!< APB3 low power clock register      (Offset 0x3C)         */
	RW uint32_t APB1LLPENR;     /*!< APB1 low low power clock register  (Offset 0x40)         */
	RW uint32_t APB1HLPENR;     /*!< APB1 high low power clock register (Offset 0x44)         */
	RW uint32_t APB2LPENR;      /*!< APB2 low power clock register      (Offset 0x48)         */
	RW uint32_t APB4LPENR;      /*!< APB4 low power clock register      (Offset 0x4C)         */
	   uint32_t reserved1[4U];  /*!< Reserved                           (Offset 0x50 to 0x5C) */
} rcc_core_regs;

/*!< RCC common registers */
/*!< Source control register */
#define RCC_CR_PLL3RDY_OFFSET    (29U)
#define RCC_CR_PLL3RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL3RDY))    /*!< Mask  0x20000000 */

#define RCC_CR_PLL3ON_OFFSET     (28U)
#define RCC_CR_PLL3ON_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL3ON))     /*!< Mask  0x10000000 */

#define RCC_CR_PLL2RDY_OFFSET    (27U)
#define RCC_CR_PLL2RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL2RDY))    /*!< Mask  0x08000000 */

#define RCC_CR_PLL2ON_OFFSET     (26U)
#define RCC_CR_PLL2ON_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL2ON))     /*!< Mask  0x04000000 */

#define RCC_CR_PLL1RDY_OFFSET    (25U)
#define RCC_CR_PLL1RDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL1RDY))    /*!< Mask  0x02000000 */

#define RCC_CR_PLL1ON_OFFSET     (24U)
#define RCC_CR_PLL1ON_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, PLL1ON))     /*!< Mask  0x01000000 */

#define RCC_CR_HSECSSON_OFFSET   (19U)
#define RCC_CR_HSECSSON_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSECSSON))   /*!< Mask  0x00080000 */

#define RCC_CR_HSEBYP_OFFSET     (18U)
#define RCC_CR_HSEBYP_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSEBYP))     /*!< Mask  0x00040000 */

#define RCC_CR_HSERDY_OFFSET     (17U)
#define RCC_CR_HSERDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSERDY))     /*!< Mask  0x00020000 */

#define RCC_CR_HSEON_OFFSET      (16U)
#define RCC_CR_HSEON_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSEON))      /*!< Mask  0x00010000 */

#define RCC_CR_D2CKRDY_OFFSET    (15U)
#define RCC_CR_D2CKRDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, D2CKRDY))    /*!< Mask  0x00008000 */

#define RCC_CR_D1CKRDY_OFFSET    (14U)
#define RCC_CR_D1CKRDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, D1CKRDY))    /*!< Mask  0x00004000 */

#define RCC_CR_HSI48RDY_OFFSET   (13U)
#define RCC_CR_HSI48RDY_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSI48RDY))   /*!< Mask  0x00002000 */

#define RCC_CR_HSI48ON_OFFSET    (12U)
#define RCC_CR_HSI48ON_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSI48ON))    /*!< Mask  0x00001000 */

#define RCC_CR_CSISMON_OFFSET    (9U)
#define RCC_CR_CSISMON_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, CSISMON))    /*!< Mask  0x00000200 */

#define RCC_CR_CSIKERRDY_OFFSET  (8U)
#define RCC_CR_CSIKERRDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, CSIKERRDY))  /*!< Mask  0x00000100 */

#define RCC_CR_CSION_OFFSET      (7U)
#define RCC_CR_CSION_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, CSION))      /*!< Mask  0x00000080 */

#define RCC_CR_HSIDIVF_OFFSET    (5U)
#define RCC_CR_HSIDIVF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIDIVF))    /*!< Mask  0x00000020 */

#define RCC_CR_HSIDIV_OFFSET     (3U)
#define RCC_CR_HSIDIV_MASK       (0x3UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIDIV))     /*!< Mask  0x00000018 */

#define RCC_CR_HSIRDY_OFFSET     (2U)
#define RCC_CR_HSIRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIRDY))     /*!< Mask  0x00000004 */

#define RCC_CR_HSIKERON_OFFSET   (1U)
#define RCC_CR_HSIKERON_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSIKERON))   /*!< Mask  0x00000002 */

#define RCC_CR_HSION_OFFSET      (0U)
#define RCC_CR_HSION_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, CR, HSION))      /*!< Mask  0x00000001 */

// Values of PLL ready bit
#define RCC_PLL_UNLOCKED  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLL_LOCKED    (0x1UL)  /*!< Value 0x00000001 */

// Values of PLL enable bit
#define RCC_PLL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of HSE bypass flag
#define RCC_HSE_NOBYPASS  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_HSE_BYPASS    (0x1UL)  /*!< Value 0x00000001 */

// Values of HSI clock divider flag
#define RCC_HSIDIV_UPDATING  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_HSIDIV_UPDATED   (0x1UL)  /*!< Value 0x00000001 */

// Values of HSI clock divider
#define RCC_HSI_DIVBYPASS  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_HSI_DIV2       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_HSI_DIV4       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_HSI_DIV8       (0x3UL)  /*!< Value 0x00000003 */

// Values of clock ready bit
#define RCC_CLK_NOTREADY  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_CLK_READY     (0x1UL)  /*!< Value 0x00000001 */

// Values of clock enable bit
#define RCC_CLK_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_CLK_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< HSI (High speed internal oscillator) configuration register */
#define RCC_HSICFGR_HSITRIM_OFFSET  (24U)
#define RCC_HSICFGR_HSITRIM_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, HSICFGR, HSITRIM))  /*!< Mask  0x7F000000 */
#define RCC_HSICFGR_HSITRIM_0       (0x01UL)                                                  /*!< Value 0x00000001 */
#define RCC_HSICFGR_HSITRIM_1       (0x02UL)                                                  /*!< Value 0x00000002 */
#define RCC_HSICFGR_HSITRIM_2       (0x04UL)                                                  /*!< Value 0x00000004 */
#define RCC_HSICFGR_HSITRIM_3       (0x08UL)                                                  /*!< Value 0x00000008 */
#define RCC_HSICFGR_HSITRIM_4       (0x10UL)                                                  /*!< Value 0x00000010 */
#define RCC_HSICFGR_HSITRIM_5       (0x20UL)                                                  /*!< Value 0x00000020 */
#define RCC_HSICFGR_HSITRIM_6       (0x40UL)                                                  /*!< Value 0x00000040 */

#define RCC_HSICFGR_HSICAL_OFFSET   (0U)
#define RCC_HSICFGR_HSICAL_MASK     (0xFFFUL << REGISTER_FIELD_OFFSET(RCC, HSICFGR, HSICAL))  /*!< Mask  0x00000FFF */
#define RCC_HSICFGR_HSICAL_0        (0x001UL)                                                 /*!< Value 0x00000001 */
#define RCC_HSICFGR_HSICAL_1        (0x002UL)                                                 /*!< Value 0x00000002 */
#define RCC_HSICFGR_HSICAL_2        (0x004UL)                                                 /*!< Value 0x00000004 */
#define RCC_HSICFGR_HSICAL_3        (0x008UL)                                                 /*!< Value 0x00000008 */
#define RCC_HSICFGR_HSICAL_4        (0x010UL)                                                 /*!< Value 0x00000010 */
#define RCC_HSICFGR_HSICAL_5        (0x020UL)                                                 /*!< Value 0x00000020 */
#define RCC_HSICFGR_HSICAL_6        (0x040UL)                                                 /*!< Value 0x00000040 */
#define RCC_HSICFGR_HSICAL_7        (0x080UL)                                                 /*!< Value 0x00000080 */
#define RCC_HSICFGR_HSICAL_8        (0x100UL)                                                 /*!< Value 0x00000100 */
#define RCC_HSICFGR_HSICAL_9        (0x200UL)                                                 /*!< Value 0x00000200 */
#define RCC_HSICFGR_HSICAL_10       (0x400UL)                                                 /*!< Value 0x00000400 */
#define RCC_HSICFGR_HSICAL_11       (0x800UL)                                                 /*!< Value 0x00000800 */

/*!< Clock recovery RC register */
#define RCC_CRRCR_HSI48CAL_OFFSET  (0U)
#define RCC_CRRCR_HSI48CAL_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(RCC, CRRCR, HSI48CAL))  /*!< Mask  0x00000FFF */
#define RCC_CRRCR_HSI48CAL_0       (0x001UL)                                                 /*!< Value 0x00000001 */
#define RCC_CRRCR_HSI48CAL_1       (0x002UL)                                                 /*!< Value 0x00000002 */
#define RCC_CRRCR_HSI48CAL_2       (0x004UL)                                                 /*!< Value 0x00000004 */
#define RCC_CRRCR_HSI48CAL_3       (0x008UL)                                                 /*!< Value 0x00000008 */
#define RCC_CRRCR_HSI48CAL_4       (0x010UL)                                                 /*!< Value 0x00000010 */
#define RCC_CRRCR_HSI48CAL_5       (0x020UL)                                                 /*!< Value 0x00000020 */
#define RCC_CRRCR_HSI48CAL_6       (0x040UL)                                                 /*!< Value 0x00000040 */
#define RCC_CRRCR_HSI48CAL_7       (0x080UL)                                                 /*!< Value 0x00000080 */
#define RCC_CRRCR_HSI48CAL_8       (0x100UL)                                                 /*!< Value 0x00000100 */
#define RCC_CRRCR_HSI48CAL_9       (0x200UL)                                                 /*!< Value 0x00000200 */

/*!< CSI (Low power internal oscillator) configuration register */
#define RCC_CSICFGR_CSITRIM_OFFSET  (24U)
#define RCC_CSICFGR_CSITRIM_MASK    (0x3FUL << REGISTER_FIELD_OFFSET(RCC, CSICFGR, CSITRIM))  /*!< Mask  0x3F000000 */
#define RCC_CSICFGR_CSITRIM_0       (0x01UL)                                                  /*!< Value 0x00000001 */
#define RCC_CSICFGR_CSITRIM_1       (0x02UL)                                                  /*!< Value 0x00000002 */
#define RCC_CSICFGR_CSITRIM_2       (0x04UL)                                                  /*!< Value 0x00000004 */
#define RCC_CSICFGR_CSITRIM_3       (0x08UL)                                                  /*!< Value 0x00000008 */
#define RCC_CSICFGR_CSITRIM_4       (0x10UL)                                                  /*!< Value 0x00000010 */
#define RCC_CSICFGR_CSITRIM_5       (0x20UL)                                                  /*!< Value 0x00000020 */

#define RCC_CSICFGR_CSICAL_OFFSET  (0U)
#define RCC_CSICFGR_CSICAL_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(RCC, CSICFGR, CSICAL))  /*!< Mask  0x00000FFF */
#define RCC_CSICFGR_CSICAL_0       (0x001UL)                                                 /*!< Value 0x00000001 */
#define RCC_CSICFGR_CSICAL_1       (0x002UL)                                                 /*!< Value 0x00000002 */
#define RCC_CSICFGR_CSICAL_2       (0x004UL)                                                 /*!< Value 0x00000004 */
#define RCC_CSICFGR_CSICAL_3       (0x008UL)                                                 /*!< Value 0x00000008 */
#define RCC_CSICFGR_CSICAL_4       (0x010UL)                                                 /*!< Value 0x00000010 */
#define RCC_CSICFGR_CSICAL_5       (0x020UL)                                                 /*!< Value 0x00000020 */
#define RCC_CSICFGR_CSICAL_6       (0x040UL)                                                 /*!< Value 0x00000040 */
#define RCC_CSICFGR_CSICAL_7       (0x080UL)                                                 /*!< Value 0x00000080 */
#define RCC_CSICFGR_CSICAL_8       (0x100UL)                                                 /*!< Value 0X00000100 */
#define RCC_CSICFGR_CSICAL_9       (0x200UL)                                                 /*!< Value 0x00000200 */

/*!< Clock configuration register */
#define RCC_CFGR_MCO2SEL_OFFSET      (29U)
#define RCC_CFGR_MCO2SEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(RCC, CFGR, MCO2SEL))      /*!< Mask  0xE0000000 */

#define RCC_CFGR_MCO2PRE_OFFSET      (25U)
#define RCC_CFGR_MCO2PRE_MASK        (0xFUL << REGISTER_FIELD_OFFSET(RCC, CFGR, MCO2PRE))      /*!< Mask  0x1E000000 */

#define RCC_CFGR_MCO1SEL_OFFSET      (22U)
#define RCC_CFGR_MCO1SEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(RCC, CFGR, MCO1SEL))      /*!< Mask  0x01C00000 */

#define RCC_CFGR_MCO1PRE_OFFSET      (18U)
#define RCC_CFGR_MCO1PRE_MASK        (0xFUL << REGISTER_FIELD_OFFSET(RCC, CFGR, MCO1PRE))      /*!< Mask  0x003C0000 */

#define RCC_CFGR_TIMPRE_OFFSET       (15U)
#define RCC_CFGR_TIMPRE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, CFGR, TIMPRE))       /*!< Mask  0x00008000 */

#define RCC_CFGR_HRTIMSEL_OFFSET     (14U)
#define RCC_CFGR_HRTIMSEL_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CFGR, HRTIMSEL))     /*!< Mask  0x00004000 */

#define RCC_CFGR_RTCPRE_OFFSET       (8U)
#define RCC_CFGR_RTCPRE_MASK         (0x3FUL << REGISTER_FIELD_OFFSET(RCC, CFGR, RTCPRE))      /*!< Mask  0x00003F00 */

#define RCC_CFGR_STOPKERWUCK_OFFSET  (7U)
#define RCC_CFGR_STOPKERWUCK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CFGR, STOPKERWUCK))  /*!< Mask  0x00000080 */

#define RCC_CFGR_STOPWUCK_OFFSET     (6U)
#define RCC_CFGR_STOPWUCK_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, CFGR, STOPWUCK))     /*!< Mask  0x00000040 */

#define RCC_CFGR_SWS_OFFSET          (3U)
#define RCC_CFGR_SWS_MASK            (0x7UL << REGISTER_FIELD_OFFSET(RCC, CFGR, SWS))          /*!< Mask  0x00000038 */

#define RCC_CFGR_SW_OFFSET           (0U)
#define RCC_CFGR_SW_MASK             (0x7UL << REGISTER_FIELD_OFFSET(RCC, CFGR, SW))           /*!< Mask  0x00000007 */

// Values of micro-controller 2 clock output selection
#define RCC_MCO2_SYSCLK  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_MCO2_PLL2    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_MCO2_HSE     (0x2UL)  /*!< Value 0x00000002 */
#define RCC_MCO2_PLL1    (0x3UL)  /*!< Value 0x00000003 */
#define RCC_MCO2_CSI     (0x4UL)  /*!< Value 0x00000004 */
#define RCC_MCO2_LSI     (0x5UL)  /*!< Value 0x00000005 */

// Values of micro-controller 1 clock output selection
#define RCC_MCO1_HSI    (0x0UL)  /*!< Value 0x00000000 */
#define RCC_MCO1_LSE    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_MCO1_HSE    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_MCO1_PLL1   (0x3UL)  /*!< Value 0x00000003 */
#define RCC_MCO1_HSI48  (0x4UL)  /*!< Value 0x00000004 */

// Values of timer prescaler
#define RCC_TIMERPRE_MUL2  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_TIMERPRE_MUL4  (0x1UL)  /*!< Value 0x00000001 */

// Values of high resolution timer clock prescaler
#define RCC_HRTIMERPRE_TIMERS  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_HRTIMERPRE_CPU1    (0x1UL)  /*!< Value 0x00000001 */

// Values of micro-controller clock output prescaler
#define RCC_MCOPRE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_MCOPRE_BYPASS   (0x1UL)  /*!< Value 0x00000001 */
#define RCC_MCOPRE_DIV2     (0x2UL)  /*!< Value 0x00000002 */
#define RCC_MCOPRE_DIV3     (0x3UL)  /*!< Value 0x00000003 */
#define RCC_MCOPRE_DIV4     (0x4UL)  /*!< Value 0x00000004 */
#define RCC_MCOPRE_DIV5     (0x5UL)  /*!< Value 0x00000005 */
#define RCC_MCOPRE_DIV6     (0x6UL)  /*!< Value 0x00000006 */
#define RCC_MCOPRE_DIV7     (0x7UL)  /*!< Value 0x00000007 */
#define RCC_MCOPRE_DIV8     (0x8UL)  /*!< Value 0x00000008 */
#define RCC_MCOPRE_DIV9     (0x9UL)  /*!< Value 0x00000009 */
#define RCC_MCOPRE_DIV10    (0xAUL)  /*!< Value 0x0000000A */
#define RCC_MCOPRE_DIV11    (0xBUL)  /*!< Value 0x0000000B */
#define RCC_MCOPRE_DIV12    (0xCUL)  /*!< Value 0x0000000C */
#define RCC_MCOPRE_DIV13    (0xDUL)  /*!< Value 0x0000000D */
#define RCC_MCOPRE_DIV14    (0xEUL)  /*!< Value 0x0000000E */
#define RCC_MCOPRE_DIV15    (0xFUL)  /*!< Value 0x0000000F */

// Values of RTC prescaler
#define RCC_RTCPRE_NOCLK_DEFAULT  (0x00UL)  /*!< Value 0x00000000 */
#define RCC_RTCPRE_NOCLK          (0x01UL)  /*!< Value 0x00000001 */
#define RCC_RTCPRE_DIV2           (0x02UL)  /*!< Value 0x00000002 */
#define RCC_RTCPRE_DIV3           (0x03UL)  /*!< Value 0x00000003 */
#define RCC_RTCPRE_DIV4           (0x04UL)  /*!< Value 0x00000004 */
#define RCC_RTCPRE_DIV5           (0x05UL)  /*!< Value 0x00000005 */
#define RCC_RTCPRE_DIV6           (0x06UL)  /*!< Value 0x00000006 */
#define RCC_RTCPRE_DIV7           (0x07UL)  /*!< Value 0x00000007 */
#define RCC_RTCPRE_DIV8           (0x08UL)  /*!< Value 0x00000008 */
#define RCC_RTCPRE_DIV9           (0x09UL)  /*!< Value 0x00000009 */
#define RCC_RTCPRE_DIV10          (0x0AUL)  /*!< Value 0x0000000A */
#define RCC_RTCPRE_DIV11          (0x0BUL)  /*!< Value 0x0000000B */
#define RCC_RTCPRE_DIV12          (0x0CUL)  /*!< Value 0x0000000C */
#define RCC_RTCPRE_DIV13          (0x0DUL)  /*!< Value 0x0000000D */
#define RCC_RTCPRE_DIV14          (0x0EUL)  /*!< Value 0x0000000E */
#define RCC_RTCPRE_DIV15          (0x0FUL)  /*!< Value 0x0000000F */
#define RCC_RTCPRE_DIV16          (0x10UL)  /*!< Value 0x00000010 */
#define RCC_RTCPRE_DIV17          (0x11UL)  /*!< Value 0x00000011 */
#define RCC_RTCPRE_DIV18          (0x12UL)  /*!< Value 0x00000012 */
#define RCC_RTCPRE_DIV19          (0x13UL)  /*!< Value 0x00000013 */
#define RCC_RTCPRE_DIV20          (0x14UL)  /*!< Value 0x00000014 */
#define RCC_RTCPRE_DIV21          (0x15UL)  /*!< Value 0x00000015 */
#define RCC_RTCPRE_DIV22          (0x16UL)  /*!< Value 0x00000016 */
#define RCC_RTCPRE_DIV23          (0x17UL)  /*!< Value 0x00000017 */
#define RCC_RTCPRE_DIV24          (0x18UL)  /*!< Value 0x00000018 */
#define RCC_RTCPRE_DIV25          (0x19UL)  /*!< Value 0x00000019 */
#define RCC_RTCPRE_DIV26          (0x1AUL)  /*!< Value 0x0000001A */
#define RCC_RTCPRE_DIV27          (0x1BUL)  /*!< Value 0x0000001B */
#define RCC_RTCPRE_DIV28          (0x1CUL)  /*!< Value 0x0000001C */
#define RCC_RTCPRE_DIV29          (0x1DUL)  /*!< Value 0x0000001D */
#define RCC_RTCPRE_DIV30          (0x1EUL)  /*!< Value 0x0000001E */
#define RCC_RTCPRE_DIV31          (0x1FUL)  /*!< Value 0x0000001F */
#define RCC_RTCPRE_DIV32          (0x20UL)  /*!< Value 0x00000020 */
#define RCC_RTCPRE_DIV33          (0x21UL)  /*!< Value 0x00000021 */
#define RCC_RTCPRE_DIV34          (0x22UL)  /*!< Value 0x00000022 */
#define RCC_RTCPRE_DIV35          (0x23UL)  /*!< Value 0x00000023 */
#define RCC_RTCPRE_DIV36          (0x24UL)  /*!< Value 0x00000024 */
#define RCC_RTCPRE_DIV37          (0x25UL)  /*!< Value 0x00000025 */
#define RCC_RTCPRE_DIV38          (0x26UL)  /*!< Value 0x00000026 */
#define RCC_RTCPRE_DIV39          (0x27UL)  /*!< Value 0x00000027 */
#define RCC_RTCPRE_DIV40          (0x28UL)  /*!< Value 0x00000028 */
#define RCC_RTCPRE_DIV41          (0x29UL)  /*!< Value 0x00000029 */
#define RCC_RTCPRE_DIV42          (0x2AUL)  /*!< Value 0x0000002A */
#define RCC_RTCPRE_DIV43          (0x2BUL)  /*!< Value 0x0000002B */
#define RCC_RTCPRE_DIV44          (0x2CUL)  /*!< Value 0x0000002C */
#define RCC_RTCPRE_DIV45          (0x2DUL)  /*!< Value 0x0000002D */
#define RCC_RTCPRE_DIV46          (0x2EUL)  /*!< Value 0x0000002E */
#define RCC_RTCPRE_DIV47          (0x2FUL)  /*!< Value 0x0000002F */
#define RCC_RTCPRE_DIV48          (0x30UL)  /*!< Value 0x00000030 */
#define RCC_RTCPRE_DIV49          (0x31UL)  /*!< Value 0x00000031 */
#define RCC_RTCPRE_DIV50          (0x32UL)  /*!< Value 0x00000032 */
#define RCC_RTCPRE_DIV51          (0x33UL)  /*!< Value 0x00000033 */
#define RCC_RTCPRE_DIV52          (0x34UL)  /*!< Value 0x00000034 */
#define RCC_RTCPRE_DIV53          (0x35UL)  /*!< Value 0x00000035 */
#define RCC_RTCPRE_DIV54          (0x36UL)  /*!< Value 0x00000036 */
#define RCC_RTCPRE_DIV55          (0x37UL)  /*!< Value 0x00000037 */
#define RCC_RTCPRE_DIV56          (0x38UL)  /*!< Value 0x00000038 */
#define RCC_RTCPRE_DIV57          (0x39UL)  /*!< Value 0x00000039 */
#define RCC_RTCPRE_DIV58          (0x3AUL)  /*!< Value 0x0000003A */
#define RCC_RTCPRE_DIV59          (0x3BUL)  /*!< Value 0x0000003B */
#define RCC_RTCPRE_DIV60          (0x3CUL)  /*!< Value 0x0000003C */
#define RCC_RTCPRE_DIV61          (0x3DUL)  /*!< Value 0x0000003D */
#define RCC_RTCPRE_DIV62          (0x3EUL)  /*!< Value 0x0000003E */
#define RCC_RTCPRE_DIV63          (0x3FUL)  /*!< Value 0x0000003F */

// Values of possible kernel clocks when exiting system stop
#define RCC_KERCLKEXITSTOP_HSI  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_KERCLKEXITSTOP_CSI  (0x1UL)  /*!< Value 0x00000001 */

// Values of possible system clocks when exiting system stop
#define RCC_SYSCLKEXITSTOP_HSI  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SYSCLKEXITSTOP_CSI  (0x1UL)  /*!< Value 0x00000001 */

// Values of system clock selection bits
#define RCC_SYSCLK_HSI   (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SYSCLK_CSI   (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SYSCLK_HSE   (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SYSCLK_PLL1  (0x3UL)  /*!< Value 0x00000003 */

/*!< Domain 1 clock configuration register */
#define RCC_D1CFGR_D1CPRE_OFFSET  (8U)
#define RCC_D1CFGR_D1CPRE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(RCC, D1CFGR, D1CPRE))  /*!< Mask  0x00000F00 */

#define RCC_D1CFGR_D1PPRE_OFFSET  (4U)
#define RCC_D1CFGR_D1PPRE_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D1CFGR, D1PPRE))  /*!< Mask  0x00000070 */

#define RCC_D1CFGR_HPRE_OFFSET    (0U)
#define RCC_D1CFGR_HPRE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(RCC, D1CFGR, HPRE))    /*!< Mask  0x0000000F */

// Values of core prescaler
#define RCC_COREPRE_BYPASS  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_COREPRE_DIV2    (0x8UL)  /*!< Value 0x00000008 */
#define RCC_COREPRE_DIV4    (0x9UL)  /*!< Value 0x00000009 */
#define RCC_COREPRE_DIV8    (0xAUL)  /*!< Value 0x0000000A */
#define RCC_COREPRE_DIV16   (0xBUL)  /*!< Value 0x0000000B */
#define RCC_COREPRE_DIV64   (0xCUL)  /*!< Value 0x0000000C */
#define RCC_COREPRE_DIV128  (0xDUL)  /*!< Value 0x0000000D */
#define RCC_COREPRE_DIV256  (0xEUL)  /*!< Value 0x0000000E */
#define RCC_COREPRE_DIV512  (0xFUL)  /*!< Value 0x0000000F */

// Values of AHB prescaler
#define RCC_AHBPRE_BYPASS   (0x0UL)  /*!< Value 0x00000000 */
#define RCC_AHBPRE_DIV2     (0x8UL)  /*!< Value 0x00000008 */
#define RCC_AHBPRE_DIV4     (0x9UL)  /*!< Value 0x00000009 */
#define RCC_AHBPRE_DIV8     (0xAUL)  /*!< Value 0x0000000A */
#define RCC_AHBPRE_DIV16    (0xBUL)  /*!< Value 0x0000000B */
#define RCC_AHBPRE_DIV64    (0xCUL)  /*!< Value 0x0000000C */
#define RCC_AHBPRE_DIV128   (0xDUL)  /*!< Value 0x0000000D */
#define RCC_AHBPRE_DIV256   (0xEUL)  /*!< Value 0x0000000E */
#define RCC_AHBPRE_DIV512   (0xFUL)  /*!< Value 0x0000000F */

/*!< Domain 2 clock configuration register */
#define RCC_D2CFGR_D2PPRE2_OFFSET  (8U)
#define RCC_D2CFGR_D2PPRE2_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CFGR, D2PPRE2))  /*!< Mask  0x00000F00 */

#define RCC_D2CFGR_D2PPRE1_OFFSET  (4U)
#define RCC_D2CFGR_D2PPRE1_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CFGR, D2PPRE1))  /*!< Mask  0x00000070 */

/*!< Domain 3 clock configuration register */
#define RCC_D3CFGR_D3PPRE_OFFSET  (4U)
#define RCC_D3CFGR_D3PPRE_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CFGR, D3PPRE))  /*!< Mask  0x00000070 */

// Values of APB prescaler
#define RCC_APBPRE_BYPASS  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_APBPRE_DIV2    (0x4UL)  /*!< Value 0x00000004 */
#define RCC_APBPRE_DIV4    (0x5UL)  /*!< Value 0x00000005 */
#define RCC_APBPRE_DIV8    (0x6UL)  /*!< Value 0x00000006 */
#define RCC_APBPRE_DIV16   (0x7UL)  /*!< Value 0x00000007 */

/*!< PLL clock source selection register */
#define RCC_PLLCKSELR_DIVM3_OFFSET   (20U)
#define RCC_PLLCKSELR_DIVM3_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(RCC, PLLCKSELR, DIVM3))  /*!< Mask  0x03F00000 */

#define RCC_PLLCKSELR_DIVM2_OFFSET   (12U)
#define RCC_PLLCKSELR_DIVM2_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(RCC, PLLCKSELR, DIVM2))  /*!< Mask  0x0003F000 */

#define RCC_PLLCKSELR_DIVM1_OFFSET   (4U)
#define RCC_PLLCKSELR_DIVM1_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(RCC, PLLCKSELR, DIVM1))  /*!< Mask  0x000003F0 */

#define RCC_PLLCKSELR_PLLSRC_OFFSET  (0U)
#define RCC_PLLCKSELR_PLLSRC_MASK    (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCKSELR, PLLSRC))  /*!< Mask  0x00000003 */

// Value of PLL prescaler
#define RCC_PLLPRE_DISABLE  (0x00UL)  /*!< Value 0x00000000 */
#define RCC_PLLPRE_BYPASS   (0x01UL)  /*!< Value 0x00000001 */
#define RCC_PLLPRE_DIV2     (0x02UL)  /*!< Value 0x00000002 */
#define RCC_PLLPRE_DIV3     (0x03UL)  /*!< Value 0x00000003 */
#define RCC_PLLPRE_DIV4     (0x04UL)  /*!< Value 0x00000004 */
#define RCC_PLLPRE_DIV5     (0x05UL)  /*!< Value 0x00000005 */
#define RCC_PLLPRE_DIV6     (0x06UL)  /*!< Value 0x00000006 */
#define RCC_PLLPRE_DIV7     (0x07UL)  /*!< Value 0x00000007 */
#define RCC_PLLPRE_DIV8     (0x08UL)  /*!< Value 0x00000008 */
#define RCC_PLLPRE_DIV9     (0x09UL)  /*!< Value 0x00000009 */
#define RCC_PLLPRE_DIV10    (0x0AUL)  /*!< Value 0x0000000A */
#define RCC_PLLPRE_DIV11    (0x0BUL)  /*!< Value 0x0000000B */
#define RCC_PLLPRE_DIV12    (0x0CUL)  /*!< Value 0x0000000C */
#define RCC_PLLPRE_DIV13    (0x0DUL)  /*!< Value 0x0000000D */
#define RCC_PLLPRE_DIV14    (0x0EUL)  /*!< Value 0x0000000E */
#define RCC_PLLPRE_DIV15    (0x0FUL)  /*!< Value 0x0000000F */
#define RCC_PLLPRE_DIV16    (0x10UL)  /*!< Value 0x00000010 */
#define RCC_PLLPRE_DIV17    (0x11UL)  /*!< Value 0x00000011 */
#define RCC_PLLPRE_DIV18    (0x12UL)  /*!< Value 0x00000012 */
#define RCC_PLLPRE_DIV19    (0x13UL)  /*!< Value 0x00000013 */
#define RCC_PLLPRE_DIV20    (0x14UL)  /*!< Value 0x00000014 */
#define RCC_PLLPRE_DIV21    (0x15UL)  /*!< Value 0x00000015 */
#define RCC_PLLPRE_DIV22    (0x16UL)  /*!< Value 0x00000016 */
#define RCC_PLLPRE_DIV23    (0x17UL)  /*!< Value 0x00000017 */
#define RCC_PLLPRE_DIV24    (0x18UL)  /*!< Value 0x00000018 */
#define RCC_PLLPRE_DIV25    (0x19UL)  /*!< Value 0x00000019 */
#define RCC_PLLPRE_DIV26    (0x1AUL)  /*!< Value 0x0000001A */
#define RCC_PLLPRE_DIV27    (0x1BUL)  /*!< Value 0x0000001B */
#define RCC_PLLPRE_DIV28    (0x1CUL)  /*!< Value 0x0000001C */
#define RCC_PLLPRE_DIV29    (0x1DUL)  /*!< Value 0x0000001D */
#define RCC_PLLPRE_DIV30    (0x1EUL)  /*!< Value 0x0000001E */
#define RCC_PLLPRE_DIV31    (0x1FUL)  /*!< Value 0x0000001F */
#define RCC_PLLPRE_DIV32    (0x20UL)  /*!< Value 0x00000020 */
#define RCC_PLLPRE_DIV33    (0x21UL)  /*!< Value 0x00000021 */
#define RCC_PLLPRE_DIV34    (0x22UL)  /*!< Value 0x00000022 */
#define RCC_PLLPRE_DIV35    (0x23UL)  /*!< Value 0x00000023 */
#define RCC_PLLPRE_DIV36    (0x24UL)  /*!< Value 0x00000024 */
#define RCC_PLLPRE_DIV37    (0x25UL)  /*!< Value 0x00000025 */
#define RCC_PLLPRE_DIV38    (0x26UL)  /*!< Value 0x00000026 */
#define RCC_PLLPRE_DIV39    (0x27UL)  /*!< Value 0x00000027 */
#define RCC_PLLPRE_DIV40    (0x28UL)  /*!< Value 0x00000028 */
#define RCC_PLLPRE_DIV41    (0x29UL)  /*!< Value 0x00000029 */
#define RCC_PLLPRE_DIV42    (0x2AUL)  /*!< Value 0x0000002A */
#define RCC_PLLPRE_DIV43    (0x2BUL)  /*!< Value 0x0000002B */
#define RCC_PLLPRE_DIV44    (0x2CUL)  /*!< Value 0x0000002C */
#define RCC_PLLPRE_DIV45    (0x2DUL)  /*!< Value 0x0000002D */
#define RCC_PLLPRE_DIV46    (0x2EUL)  /*!< Value 0x0000002E */
#define RCC_PLLPRE_DIV47    (0x2FUL)  /*!< Value 0x0000002F */
#define RCC_PLLPRE_DIV48    (0x30UL)  /*!< Value 0x00000030 */
#define RCC_PLLPRE_DIV49    (0x31UL)  /*!< Value 0x00000031 */
#define RCC_PLLPRE_DIV50    (0x32UL)  /*!< Value 0x00000032 */
#define RCC_PLLPRE_DIV51    (0x33UL)  /*!< Value 0x00000033 */
#define RCC_PLLPRE_DIV52    (0x34UL)  /*!< Value 0x00000034 */
#define RCC_PLLPRE_DIV53    (0x35UL)  /*!< Value 0x00000035 */
#define RCC_PLLPRE_DIV54    (0x36UL)  /*!< Value 0x00000036 */
#define RCC_PLLPRE_DIV55    (0x37UL)  /*!< Value 0x00000037 */
#define RCC_PLLPRE_DIV56    (0x38UL)  /*!< Value 0x00000038 */
#define RCC_PLLPRE_DIV57    (0x39UL)  /*!< Value 0x00000039 */
#define RCC_PLLPRE_DIV58    (0x3AUL)  /*!< Value 0x0000003A */
#define RCC_PLLPRE_DIV59    (0x3BUL)  /*!< Value 0x0000003B */
#define RCC_PLLPRE_DIV60    (0x3CUL)  /*!< Value 0x0000003C */
#define RCC_PLLPRE_DIV61    (0x3DUL)  /*!< Value 0x0000003D */
#define RCC_PLLPRE_DIV62    (0x3EUL)  /*!< Value 0x0000003E */
#define RCC_PLLPRE_DIV63    (0x3FUL)  /*!< Value 0x0000003F */

// Values of PLL clock source
#define RCC_PLLSRC_HSI    (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLSRC_CSI    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_PLLSRC_HSE    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_PLLSRC_NOCLK  (0x3UL)  /*!< Value 0x00000003 */

/*!< RCC PLL configuration register */
#define RCC_PLLCFGR_DIVR3EN_OFFSET     (24U)
#define RCC_PLLCFGR_DIVR3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVR3EN))     /*!< Mask  0x01000000 */

#define RCC_PLLCFGR_DIVQ3EN_OFFSET     (23U)
#define RCC_PLLCFGR_DIVQ3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVQ3EN))     /*!< Mask  0x00800000 */

#define RCC_PLLCFGR_DIVP3EN_OFFSET     (22U)
#define RCC_PLLCFGR_DIVP3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVP3EN))     /*!< Mask  0x00400000 */

#define RCC_PLLCFGR_DIVR2EN_OFFSET     (21U)
#define RCC_PLLCFGR_DIVR2EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVR2EN))     /*!< Mask  0x00200000 */

#define RCC_PLLCFGR_DIVQ2EN_OFFSET     (20U)
#define RCC_PLLCFGR_DIVQ2EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVQ2EN))     /*!< Mask  0x00100000 */

#define RCC_PLLCFGR_DIVP2EN_OFFSET     (19U)
#define RCC_PLLCFGR_DIVP2EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVP2EN))     /*!< Mask  0x00080000 */

#define RCC_PLLCFGR_DIVR1EN_OFFSET     (18U)
#define RCC_PLLCFGR_DIVR1EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVR1EN))     /*!< Mask  0x00040000 */

#define RCC_PLLCFGR_DIVQ1EN_OFFSET     (17U)
#define RCC_PLLCFGR_DIVQ1EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVQ1EN))     /*!< Mask  0x00020000 */

#define RCC_PLLCFGR_DIVP1EN_OFFSET     (16U)
#define RCC_PLLCFGR_DIVP1EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, DIVP1EN))     /*!< Mask  0x00010000 */

#define RCC_PLLCFGR_PLL3RGE_OFFSET     (10U)
#define RCC_PLLCFGR_PLL3RGE_MASK       (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL3RGE))     /*!< Mask  0x00000C00 */

#define RCC_PLLCFGR_PLL3VCOSEL_OFFSET  (9U)
#define RCC_PLLCFGR_PLL3VCOSEL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL3VCOSEL))  /*!< Mask  0x00000200 */

#define RCC_PLLCFGR_PLL3FRACEN_OFFSET  (8U)
#define RCC_PLLCFGR_PLL3FRACEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL3FRACEN))  /*!< Mask  0x00000100 */

#define RCC_PLLCFGR_PLL2RGE_OFFSET     (6U)
#define RCC_PLLCFGR_PLL2RGE_MASK       (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL2RGE))     /*!< Mask  0x000000C0 */

#define RCC_PLLCFGR_PLL2VCOSEL_OFFSET  (5U)
#define RCC_PLLCFGR_PLL2VCOSEL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL2VCOSEL))  /*!< Mask  0x00000020 */

#define RCC_PLLCFGR_PLL2FRACEN_OFFSET  (4U)
#define RCC_PLLCFGR_PLL2FRACEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL2FRACEN))  /*!< Mask  0x00000010 */

#define RCC_PLLCFGR_PLL1RGE_OFFSET     (2U)
#define RCC_PLLCFGR_PLL1RGE_MASK       (0x3UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL1RGE))     /*!< Mask  0x0000000C */

#define RCC_PLLCFGR_PLL1VCOSEL_OFFSET  (1U)
#define RCC_PLLCFGR_PLL1VCOSEL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL1VCOSEL))  /*!< Mask  0x00000002 */

#define RCC_PLLCFGR_PLL1FRACEN_OFFSET  (0U)
#define RCC_PLLCFGR_PLL1FRACEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, PLLCFGR, PLL1FRACEN))  /*!< Mask  0x00000001 */

// PLL DIVR enable bit
#define RCC_PLLDIVR_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLDIVR_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// PLL DIVQ enable bit
#define RCC_PLLDIVQ_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLDIVQ_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// PLL DIVP enable bit
#define RCC_PLLDIVP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLDIVP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< RCC PLL VCO selection for PLL1, PLL2 and PLL3 (Macros valid for register PLLCFG) */
#define RCC_PLLVCOSEL_WIDE    (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLVCOSEL_MEDIUM  (0x1UL)  /*!< Value 0x00000001 */

/*!< RCC PLL frequency range for PLL1, PLL2 and PLL3 (Macros valid for register PLLCFG) */
#define RCC_PLLFREQRANGE_1_2MHZ   (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLFREQRANGE_2_4MHZ   (0x1UL)  /*!< Value 0x00000001 */
#define RCC_PLLFREQRANGE_4_8MHZ   (0x2UL)  /*!< Value 0x00000002 */
#define RCC_PLLFREQRANGE_8_16MHZ  (0x3UL)  /*!< Value 0x00000003 */

// PLL fractional ratio enable bit
#define RCC_PLLFRAC_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PLLFRAC_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< RCC PLL divider configuration register (Macros valid for registers PLL1DIVR, PLL2DIVR and PLL3DIVR) */
#define RCC_PLLDIVR_DIVR_OFFSET  (24U)
#define RCC_PLLDIVR_DIVR_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, PLLDIVR, DIVR))   /*!< Mask  0x7F000000 */

#define RCC_PLLDIVR_DIVQ_OFFSET  (16U)
#define RCC_PLLDIVR_DIVQ_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, PLLDIVR, DIVQ))   /*!< Mask  0x007F0000 */

#define RCC_PLLDIVR_DIVP_OFFSET  (9U)
#define RCC_PLLDIVR_DIVP_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(RCC, PLLDIVR, DIVP))   /*!< Mask  0x000000FE */

#define RCC_PLLDIVR_DIVN_OFFSET  (0U)
#define RCC_PLLDIVR_DIVN_MASK    (0x1FFUL << REGISTER_FIELD_OFFSET(RCC, PLLDIVR, DIVN))  /*!< Mask  0x000001FF */

/*!< RCC PLL divider for PLL1, PLL2 and PLL3 (Macros valid for registers PLL3DIVR, PLL2DIVR and PLL1DIVR) */
#define RCC_PLLDIV_BYPASS  (0x000UL)  /*!< Value 0x00000000 */
#define RCC_PLLDIV2        (0x001UL)  /*!< Value 0x00000001 */
#define RCC_PLLDIV3        (0x002UL)  /*!< Value 0x00000002 */
#define RCC_PLLDIV4        (0x003UL)  /*!< Value 0x00000003 */
#define RCC_PLLDIV5        (0x004UL)  /*!< Value 0x00000004 */
#define RCC_PLLDIV6        (0x005UL)  /*!< Value 0x00000005 */
#define RCC_PLLDIV7        (0x006UL)  /*!< Value 0x00000006 */
#define RCC_PLLDIV8        (0x007UL)  /*!< Value 0x00000007 */
#define RCC_PLLDIV9        (0x008UL)  /*!< Value 0x00000008 */
#define RCC_PLLDIV10       (0x009UL)  /*!< Value 0x00000009 */
#define RCC_PLLDIV11       (0x00AUL)  /*!< Value 0x0000000A */
#define RCC_PLLDIV12       (0x00BUL)  /*!< Value 0x0000000B */
#define RCC_PLLDIV13       (0x00CUL)  /*!< Value 0x0000000C */
#define RCC_PLLDIV14       (0x00DUL)  /*!< Value 0x0000000D */
#define RCC_PLLDIV15       (0x00EUL)  /*!< Value 0x0000000E */
#define RCC_PLLDIV16       (0x00FUL)  /*!< Value 0x0000000F */
#define RCC_PLLDIV17       (0x010UL)  /*!< Value 0x00000010 */
#define RCC_PLLDIV18       (0x011UL)  /*!< Value 0x00000011 */
#define RCC_PLLDIV19       (0x012UL)  /*!< Value 0x00000012 */
#define RCC_PLLDIV20       (0x013UL)  /*!< Value 0x00000013 */
#define RCC_PLLDIV21       (0x014UL)  /*!< Value 0x00000014 */
#define RCC_PLLDIV22       (0x015UL)  /*!< Value 0x00000015 */
#define RCC_PLLDIV23       (0x016UL)  /*!< Value 0x00000016 */
#define RCC_PLLDIV24       (0x017UL)  /*!< Value 0x00000017 */
#define RCC_PLLDIV25       (0x018UL)  /*!< Value 0x00000018 */
#define RCC_PLLDIV26       (0x019UL)  /*!< Value 0x00000019 */
#define RCC_PLLDIV27       (0x01AUL)  /*!< Value 0x0000001A */
#define RCC_PLLDIV28       (0x01BUL)  /*!< Value 0x0000001B */
#define RCC_PLLDIV29       (0x01CUL)  /*!< Value 0x0000001C */
#define RCC_PLLDIV30       (0x01DUL)  /*!< Value 0x0000001D */
#define RCC_PLLDIV31       (0x01EUL)  /*!< Value 0x0000001E */
#define RCC_PLLDIV32       (0x01FUL)  /*!< Value 0x0000001F */
#define RCC_PLLDIV33       (0x020UL)  /*!< Value 0x00000020 */
#define RCC_PLLDIV34       (0x021UL)  /*!< Value 0x00000021 */
#define RCC_PLLDIV35       (0x022UL)  /*!< Value 0x00000022 */
#define RCC_PLLDIV36       (0x023UL)  /*!< Value 0x00000023 */
#define RCC_PLLDIV37       (0x024UL)  /*!< Value 0x00000024 */
#define RCC_PLLDIV38       (0x025UL)  /*!< Value 0x00000025 */
#define RCC_PLLDIV39       (0x026UL)  /*!< Value 0x00000026 */
#define RCC_PLLDIV40       (0x027UL)  /*!< Value 0x00000027 */
#define RCC_PLLDIV41       (0x028UL)  /*!< Value 0x00000028 */
#define RCC_PLLDIV42       (0x029UL)  /*!< Value 0x00000029 */
#define RCC_PLLDIV43       (0x02AUL)  /*!< Value 0x0000002A */
#define RCC_PLLDIV44       (0x02BUL)  /*!< Value 0x0000002B */
#define RCC_PLLDIV45       (0x02CUL)  /*!< Value 0x0000002C */
#define RCC_PLLDIV46       (0x02DUL)  /*!< Value 0x0000002D */
#define RCC_PLLDIV47       (0x02EUL)  /*!< Value 0x0000002E */
#define RCC_PLLDIV48       (0x02FUL)  /*!< Value 0x0000002F */
#define RCC_PLLDIV49       (0x030UL)  /*!< Value 0x00000030 */
#define RCC_PLLDIV50       (0x031UL)  /*!< Value 0x00000031 */
#define RCC_PLLDIV51       (0x032UL)  /*!< Value 0x00000032 */
#define RCC_PLLDIV52       (0x033UL)  /*!< Value 0x00000033 */
#define RCC_PLLDIV53       (0x034UL)  /*!< Value 0x00000034 */
#define RCC_PLLDIV54       (0x035UL)  /*!< Value 0x00000035 */
#define RCC_PLLDIV55       (0x036UL)  /*!< Value 0x00000036 */
#define RCC_PLLDIV56       (0x037UL)  /*!< Value 0x00000037 */
#define RCC_PLLDIV57       (0x038UL)  /*!< Value 0x00000038 */
#define RCC_PLLDIV58       (0x039UL)  /*!< Value 0x00000039 */
#define RCC_PLLDIV59       (0x03AUL)  /*!< Value 0x0000003A */
#define RCC_PLLDIV60       (0x03BUL)  /*!< Value 0x0000003B */
#define RCC_PLLDIV61       (0x03CUL)  /*!< Value 0x0000003C */
#define RCC_PLLDIV62       (0x03DUL)  /*!< Value 0x0000003D */
#define RCC_PLLDIV63       (0x03EUL)  /*!< Value 0x0000003E */
#define RCC_PLLDIV64       (0x03FUL)  /*!< Value 0x0000003F */
#define RCC_PLLDIV65       (0x040UL)  /*!< Value 0x00000040 */
#define RCC_PLLDIV66       (0x041UL)  /*!< Value 0x00000041 */
#define RCC_PLLDIV67       (0x042UL)  /*!< Value 0x00000042 */
#define RCC_PLLDIV68       (0x043UL)  /*!< Value 0x00000043 */
#define RCC_PLLDIV69       (0x044UL)  /*!< Value 0x00000044 */
#define RCC_PLLDIV70       (0x045UL)  /*!< Value 0x00000045 */
#define RCC_PLLDIV71       (0x046UL)  /*!< Value 0x00000046 */
#define RCC_PLLDIV72       (0x047UL)  /*!< Value 0x00000047 */
#define RCC_PLLDIV73       (0x048UL)  /*!< Value 0x00000048 */
#define RCC_PLLDIV74       (0x049UL)  /*!< Value 0x00000049 */
#define RCC_PLLDIV75       (0x04AUL)  /*!< Value 0x0000004A */
#define RCC_PLLDIV76       (0x04BUL)  /*!< Value 0x0000004B */
#define RCC_PLLDIV77       (0x04CUL)  /*!< Value 0x0000004C */
#define RCC_PLLDIV78       (0x04DUL)  /*!< Value 0x0000004D */
#define RCC_PLLDIV79       (0x04EUL)  /*!< Value 0x0000004E */
#define RCC_PLLDIV80       (0x04FUL)  /*!< Value 0x0000004F */
#define RCC_PLLDIV81       (0x050UL)  /*!< Value 0x00000050 */
#define RCC_PLLDIV82       (0x051UL)  /*!< Value 0x00000051 */
#define RCC_PLLDIV83       (0x052UL)  /*!< Value 0x00000052 */
#define RCC_PLLDIV84       (0x053UL)  /*!< Value 0x00000053 */
#define RCC_PLLDIV85       (0x054UL)  /*!< Value 0x00000054 */
#define RCC_PLLDIV86       (0x055UL)  /*!< Value 0x00000055 */
#define RCC_PLLDIV87       (0x056UL)  /*!< Value 0x00000056 */
#define RCC_PLLDIV88       (0x057UL)  /*!< Value 0x00000057 */
#define RCC_PLLDIV89       (0x058UL)  /*!< Value 0x00000058 */
#define RCC_PLLDIV90       (0x059UL)  /*!< Value 0x00000059 */
#define RCC_PLLDIV91       (0x05AUL)  /*!< Value 0x0000005A */
#define RCC_PLLDIV92       (0x05BUL)  /*!< Value 0x0000005B */
#define RCC_PLLDIV93       (0x05CUL)  /*!< Value 0x0000005C */
#define RCC_PLLDIV94       (0x05DUL)  /*!< Value 0x0000005D */
#define RCC_PLLDIV95       (0x05EUL)  /*!< Value 0x0000005E */
#define RCC_PLLDIV96       (0x05FUL)  /*!< Value 0x0000005F */
#define RCC_PLLDIV97       (0x060UL)  /*!< Value 0x00000060 */
#define RCC_PLLDIV98       (0x061UL)  /*!< Value 0x00000061 */
#define RCC_PLLDIV99       (0x062UL)  /*!< Value 0x00000062 */
#define RCC_PLLDIV100      (0x063UL)  /*!< Value 0x00000063 */
#define RCC_PLLDIV101      (0x064UL)  /*!< Value 0x00000064 */
#define RCC_PLLDIV102      (0x065UL)  /*!< Value 0x00000065 */
#define RCC_PLLDIV103      (0x066UL)  /*!< Value 0x00000066 */
#define RCC_PLLDIV104      (0x067UL)  /*!< Value 0x00000067 */
#define RCC_PLLDIV105      (0x068UL)  /*!< Value 0x00000068 */
#define RCC_PLLDIV106      (0x069UL)  /*!< Value 0x00000069 */
#define RCC_PLLDIV107      (0x06AUL)  /*!< Value 0x0000006A */
#define RCC_PLLDIV108      (0x06BUL)  /*!< Value 0x0000006B */
#define RCC_PLLDIV109      (0x06CUL)  /*!< Value 0x0000006C */
#define RCC_PLLDIV110      (0x06DUL)  /*!< Value 0x0000006D */
#define RCC_PLLDIV111      (0x06EUL)  /*!< Value 0x0000006E */
#define RCC_PLLDIV112      (0x06FUL)  /*!< Value 0x0000006F */
#define RCC_PLLDIV113      (0x070UL)  /*!< Value 0x00000070 */
#define RCC_PLLDIV114      (0x071UL)  /*!< Value 0x00000071 */
#define RCC_PLLDIV115      (0x072UL)  /*!< Value 0x00000072 */
#define RCC_PLLDIV116      (0x073UL)  /*!< Value 0x00000073 */
#define RCC_PLLDIV117      (0x074UL)  /*!< Value 0x00000074 */
#define RCC_PLLDIV118      (0x075UL)  /*!< Value 0x00000075 */
#define RCC_PLLDIV119      (0x076UL)  /*!< Value 0x00000076 */
#define RCC_PLLDIV120      (0x077UL)  /*!< Value 0x00000077 */
#define RCC_PLLDIV121      (0x078UL)  /*!< Value 0x00000078 */
#define RCC_PLLDIV122      (0x079UL)  /*!< Value 0x00000079 */
#define RCC_PLLDIV123      (0x07AUL)  /*!< Value 0x0000007A */
#define RCC_PLLDIV124      (0x07BUL)  /*!< Value 0x0000007B */
#define RCC_PLLDIV125      (0x07CUL)  /*!< Value 0x0000007C */
#define RCC_PLLDIV126      (0x07DUL)  /*!< Value 0x0000007D */
#define RCC_PLLDIV127      (0x07EUL)  /*!< Value 0x0000007E */
#define RCC_PLLDIV128      (0x07FUL)  /*!< Value 0x0000007F */
#define RCC_PLLDIV129      (0x080UL)  /*!< Value 0x00000080 */
#define RCC_PLLDIV130      (0x081UL)  /*!< Value 0x00000081 */
#define RCC_PLLDIV131      (0x082UL)  /*!< Value 0x00000082 */
#define RCC_PLLDIV132      (0x083UL)  /*!< Value 0x00000083 */
#define RCC_PLLDIV133      (0x084UL)  /*!< Value 0x00000084 */
#define RCC_PLLDIV134      (0x085UL)  /*!< Value 0x00000085 */
#define RCC_PLLDIV135      (0x086UL)  /*!< Value 0x00000086 */
#define RCC_PLLDIV136      (0x087UL)  /*!< Value 0x00000087 */
#define RCC_PLLDIV137      (0x088UL)  /*!< Value 0x00000088 */
#define RCC_PLLDIV138      (0x089UL)  /*!< Value 0x00000089 */
#define RCC_PLLDIV139      (0x08AUL)  /*!< Value 0x0000008A */
#define RCC_PLLDIV140      (0x08BUL)  /*!< Value 0x0000008B */
#define RCC_PLLDIV141      (0x08CUL)  /*!< Value 0x0000008C */
#define RCC_PLLDIV142      (0x08DUL)  /*!< Value 0x0000008D */
#define RCC_PLLDIV143      (0x08EUL)  /*!< Value 0x0000008E */
#define RCC_PLLDIV144      (0x08FUL)  /*!< Value 0x0000008F */
#define RCC_PLLDIV145      (0x090UL)  /*!< Value 0x00000090 */
#define RCC_PLLDIV146      (0x091UL)  /*!< Value 0x00000091 */
#define RCC_PLLDIV147      (0x092UL)  /*!< Value 0x00000092 */
#define RCC_PLLDIV148      (0x093UL)  /*!< Value 0x00000093 */
#define RCC_PLLDIV149      (0x094UL)  /*!< Value 0x00000094 */
#define RCC_PLLDIV150      (0x095UL)  /*!< Value 0x00000095 */
#define RCC_PLLDIV151      (0x096UL)  /*!< Value 0x00000096 */
#define RCC_PLLDIV152      (0x097UL)  /*!< Value 0x00000097 */
#define RCC_PLLDIV153      (0x098UL)  /*!< Value 0x00000098 */
#define RCC_PLLDIV154      (0x099UL)  /*!< Value 0x00000099 */
#define RCC_PLLDIV155      (0x09AUL)  /*!< Value 0x0000009A */
#define RCC_PLLDIV156      (0x09BUL)  /*!< Value 0x0000009B */
#define RCC_PLLDIV157      (0x09CUL)  /*!< Value 0x0000009C */
#define RCC_PLLDIV158      (0x09DUL)  /*!< Value 0x0000009D */
#define RCC_PLLDIV159      (0x09EUL)  /*!< Value 0x0000009E */
#define RCC_PLLDIV160      (0x09FUL)  /*!< Value 0x0000009F */
#define RCC_PLLDIV161      (0x0A0UL)  /*!< Value 0x000000A0 */
#define RCC_PLLDIV162      (0x0A1UL)  /*!< Value 0x000000A1 */
#define RCC_PLLDIV163      (0x0A2UL)  /*!< Value 0x000000A2 */
#define RCC_PLLDIV164      (0x0A3UL)  /*!< Value 0x000000A3 */
#define RCC_PLLDIV165      (0x0A4UL)  /*!< Value 0x000000A4 */
#define RCC_PLLDIV166      (0x0A5UL)  /*!< Value 0x000000A5 */
#define RCC_PLLDIV167      (0x0A6UL)  /*!< Value 0x000000A6 */
#define RCC_PLLDIV168      (0x0A7UL)  /*!< Value 0x000000A7 */
#define RCC_PLLDIV169      (0x0A8UL)  /*!< Value 0x000000A8 */
#define RCC_PLLDIV170      (0x0A9UL)  /*!< Value 0x000000A9 */
#define RCC_PLLDIV171      (0x0AAUL)  /*!< Value 0x000000AA */
#define RCC_PLLDIV172      (0x0ABUL)  /*!< Value 0x000000AB */
#define RCC_PLLDIV173      (0x0ACUL)  /*!< Value 0x000000AC */
#define RCC_PLLDIV174      (0x0ADUL)  /*!< Value 0x000000AD */
#define RCC_PLLDIV175      (0x0AEUL)  /*!< Value 0x000000AE */
#define RCC_PLLDIV176      (0x0AFUL)  /*!< Value 0x000000AF */
#define RCC_PLLDIV177      (0x0B0UL)  /*!< Value 0x000000B0 */
#define RCC_PLLDIV178      (0x0B1UL)  /*!< Value 0x000000B1 */
#define RCC_PLLDIV179      (0x0B2UL)  /*!< Value 0x000000B2 */
#define RCC_PLLDIV180      (0x0B3UL)  /*!< Value 0x000000B3 */
#define RCC_PLLDIV181      (0x0B4UL)  /*!< Value 0x000000B4 */
#define RCC_PLLDIV182      (0x0B5UL)  /*!< Value 0x000000B5 */
#define RCC_PLLDIV183      (0x0B6UL)  /*!< Value 0x000000B6 */
#define RCC_PLLDIV184      (0x0B7UL)  /*!< Value 0x000000B7 */
#define RCC_PLLDIV185      (0x0B8UL)  /*!< Value 0x000000B8 */
#define RCC_PLLDIV186      (0x0B9UL)  /*!< Value 0x000000B9 */
#define RCC_PLLDIV187      (0x0BAUL)  /*!< Value 0x000000BA */
#define RCC_PLLDIV188      (0x0BBUL)  /*!< Value 0x000000BB */
#define RCC_PLLDIV189      (0x0BCUL)  /*!< Value 0x000000BC */
#define RCC_PLLDIV190      (0x0BDUL)  /*!< Value 0x000000BD */
#define RCC_PLLDIV191      (0x0BEUL)  /*!< Value 0x000000BE */
#define RCC_PLLDIV192      (0x0BFUL)  /*!< Value 0x000000BF */
#define RCC_PLLDIV193      (0x0C0UL)  /*!< Value 0x000000C0 */
#define RCC_PLLDIV194      (0x0C1UL)  /*!< Value 0x000000C1 */
#define RCC_PLLDIV195      (0x0C2UL)  /*!< Value 0x000000C2 */
#define RCC_PLLDIV196      (0x0C3UL)  /*!< Value 0x000000C3 */
#define RCC_PLLDIV197      (0x0C4UL)  /*!< Value 0x000000C4 */
#define RCC_PLLDIV198      (0x0C5UL)  /*!< Value 0x000000C5 */
#define RCC_PLLDIV199      (0x0C6UL)  /*!< Value 0x000000C6 */
#define RCC_PLLDIV200      (0x0C7UL)  /*!< Value 0x000000C7 */
#define RCC_PLLDIV201      (0x0C8UL)  /*!< Value 0x000000C8 */
#define RCC_PLLDIV202      (0x0C9UL)  /*!< Value 0x000000C9 */
#define RCC_PLLDIV203      (0x0CAUL)  /*!< Value 0x000000CA */
#define RCC_PLLDIV204      (0x0CBUL)  /*!< Value 0x000000CB */
#define RCC_PLLDIV205      (0x0CCUL)  /*!< Value 0x000000CC */
#define RCC_PLLDIV206      (0x0CDUL)  /*!< Value 0x000000CD */
#define RCC_PLLDIV207      (0x0CEUL)  /*!< Value 0x000000CE */
#define RCC_PLLDIV208      (0x0CFUL)  /*!< Value 0x000000CF */
#define RCC_PLLDIV209      (0x0D0UL)  /*!< Value 0x000000D0 */
#define RCC_PLLDIV210      (0x0D1UL)  /*!< Value 0x000000D1 */
#define RCC_PLLDIV211      (0x0D2UL)  /*!< Value 0x000000D2 */
#define RCC_PLLDIV212      (0x0D3UL)  /*!< Value 0x000000D3 */
#define RCC_PLLDIV213      (0x0D4UL)  /*!< Value 0x000000D4 */
#define RCC_PLLDIV214      (0x0D5UL)  /*!< Value 0x000000D5 */
#define RCC_PLLDIV215      (0x0D6UL)  /*!< Value 0x000000D6 */
#define RCC_PLLDIV216      (0x0D7UL)  /*!< Value 0x000000D7 */
#define RCC_PLLDIV217      (0x0D8UL)  /*!< Value 0x000000D8 */
#define RCC_PLLDIV218      (0x0D9UL)  /*!< Value 0x000000D9 */
#define RCC_PLLDIV219      (0x0DAUL)  /*!< Value 0x000000DA */
#define RCC_PLLDIV220      (0x0DBUL)  /*!< Value 0x000000DB */
#define RCC_PLLDIV221      (0x0DCUL)  /*!< Value 0x000000DC */
#define RCC_PLLDIV222      (0x0DDUL)  /*!< Value 0x000000DD */
#define RCC_PLLDIV223      (0x0DEUL)  /*!< Value 0x000000DE */
#define RCC_PLLDIV224      (0x0DFUL)  /*!< Value 0x000000DF */
#define RCC_PLLDIV225      (0x0E0UL)  /*!< Value 0x000000E0 */
#define RCC_PLLDIV226      (0x0E1UL)  /*!< Value 0x000000E1 */
#define RCC_PLLDIV227      (0x0E2UL)  /*!< Value 0x000000E2 */
#define RCC_PLLDIV228      (0x0E3UL)  /*!< Value 0x000000E3 */
#define RCC_PLLDIV229      (0x0E4UL)  /*!< Value 0x000000E4 */
#define RCC_PLLDIV230      (0x0E5UL)  /*!< Value 0x000000E5 */
#define RCC_PLLDIV231      (0x0E6UL)  /*!< Value 0x000000E6 */
#define RCC_PLLDIV232      (0x0E7UL)  /*!< Value 0x000000E7 */
#define RCC_PLLDIV233      (0x0E8UL)  /*!< Value 0x000000E8 */
#define RCC_PLLDIV234      (0x0E9UL)  /*!< Value 0x000000E9 */
#define RCC_PLLDIV235      (0x0EAUL)  /*!< Value 0x000000EA */
#define RCC_PLLDIV236      (0x0EBUL)  /*!< Value 0x000000EB */
#define RCC_PLLDIV237      (0x0ECUL)  /*!< Value 0x000000EC */
#define RCC_PLLDIV238      (0x0EDUL)  /*!< Value 0x000000ED */
#define RCC_PLLDIV239      (0x0EEUL)  /*!< Value 0x000000EE */
#define RCC_PLLDIV240      (0x0EFUL)  /*!< Value 0x000000EF */
#define RCC_PLLDIV241      (0x0F0UL)  /*!< Value 0x000000F0 */
#define RCC_PLLDIV242      (0x0F1UL)  /*!< Value 0x000000F1 */
#define RCC_PLLDIV243      (0x0F2UL)  /*!< Value 0x000000F2 */
#define RCC_PLLDIV244      (0x0F3UL)  /*!< Value 0x000000F3 */
#define RCC_PLLDIV245      (0x0F4UL)  /*!< Value 0x000000F4 */
#define RCC_PLLDIV246      (0x0F5UL)  /*!< Value 0x000000F5 */
#define RCC_PLLDIV247      (0x0F6UL)  /*!< Value 0x000000F6 */
#define RCC_PLLDIV248      (0x0F7UL)  /*!< Value 0x000000F7 */
#define RCC_PLLDIV249      (0x0F8UL)  /*!< Value 0x000000F8 */
#define RCC_PLLDIV250      (0x0F9UL)  /*!< Value 0x000000F9 */
#define RCC_PLLDIV251      (0x0FAUL)  /*!< Value 0x000000FA */
#define RCC_PLLDIV252      (0x0FBUL)  /*!< Value 0x000000FB */
#define RCC_PLLDIV253      (0x0FCUL)  /*!< Value 0x000000FC */
#define RCC_PLLDIV254      (0x0FDUL)  /*!< Value 0x000000FD */
#define RCC_PLLDIV255      (0x0FEUL)  /*!< Value 0x000000FE */
#define RCC_PLLDIV256      (0x0FFUL)  /*!< Value 0x000000FF */
#define RCC_PLLDIV257      (0x100UL)  /*!< Value 0x00000100 */
#define RCC_PLLDIV258      (0x101UL)  /*!< Value 0x00000101 */
#define RCC_PLLDIV259      (0x102UL)  /*!< Value 0x00000102 */
#define RCC_PLLDIV260      (0x103UL)  /*!< Value 0x00000103 */
#define RCC_PLLDIV261      (0x104UL)  /*!< Value 0x00000104 */
#define RCC_PLLDIV262      (0x105UL)  /*!< Value 0x00000105 */
#define RCC_PLLDIV263      (0x106UL)  /*!< Value 0x00000106 */
#define RCC_PLLDIV264      (0x107UL)  /*!< Value 0x00000107 */
#define RCC_PLLDIV265      (0x108UL)  /*!< Value 0x00000108 */
#define RCC_PLLDIV266      (0x109UL)  /*!< Value 0x00000109 */
#define RCC_PLLDIV267      (0x10AUL)  /*!< Value 0x0000010A */
#define RCC_PLLDIV268      (0x10BUL)  /*!< Value 0x0000010B */
#define RCC_PLLDIV269      (0x10CUL)  /*!< Value 0x0000010C */
#define RCC_PLLDIV270      (0x10DUL)  /*!< Value 0x0000010D */
#define RCC_PLLDIV271      (0x10EUL)  /*!< Value 0x0000010E */
#define RCC_PLLDIV272      (0x10FUL)  /*!< Value 0x0000010F */
#define RCC_PLLDIV273      (0x110UL)  /*!< Value 0x00000110 */
#define RCC_PLLDIV274      (0x111UL)  /*!< Value 0x00000111 */
#define RCC_PLLDIV275      (0x112UL)  /*!< Value 0x00000112 */
#define RCC_PLLDIV276      (0x113UL)  /*!< Value 0x00000113 */
#define RCC_PLLDIV277      (0x114UL)  /*!< Value 0x00000114 */
#define RCC_PLLDIV278      (0x115UL)  /*!< Value 0x00000115 */
#define RCC_PLLDIV279      (0x116UL)  /*!< Value 0x00000116 */
#define RCC_PLLDIV280      (0x117UL)  /*!< Value 0x00000117 */
#define RCC_PLLDIV281      (0x118UL)  /*!< Value 0x00000118 */
#define RCC_PLLDIV282      (0x119UL)  /*!< Value 0x00000119 */
#define RCC_PLLDIV283      (0x11AUL)  /*!< Value 0x0000011A */
#define RCC_PLLDIV284      (0x11BUL)  /*!< Value 0x0000011B */
#define RCC_PLLDIV285      (0x11CUL)  /*!< Value 0x0000011C */
#define RCC_PLLDIV286      (0x11DUL)  /*!< Value 0x0000011D */
#define RCC_PLLDIV287      (0x11EUL)  /*!< Value 0x0000011E */
#define RCC_PLLDIV288      (0x11FUL)  /*!< Value 0x0000011F */
#define RCC_PLLDIV289      (0x120UL)  /*!< Value 0x00000120 */
#define RCC_PLLDIV290      (0x121UL)  /*!< Value 0x00000121 */
#define RCC_PLLDIV291      (0x122UL)  /*!< Value 0x00000122 */
#define RCC_PLLDIV292      (0x123UL)  /*!< Value 0x00000123 */
#define RCC_PLLDIV293      (0x124UL)  /*!< Value 0x00000124 */
#define RCC_PLLDIV294      (0x125UL)  /*!< Value 0x00000125 */
#define RCC_PLLDIV295      (0x126UL)  /*!< Value 0x00000126 */
#define RCC_PLLDIV296      (0x127UL)  /*!< Value 0x00000127 */
#define RCC_PLLDIV297      (0x128UL)  /*!< Value 0x00000128 */
#define RCC_PLLDIV298      (0x129UL)  /*!< Value 0x00000129 */
#define RCC_PLLDIV299      (0x12AUL)  /*!< Value 0x0000012A */
#define RCC_PLLDIV300      (0x12BUL)  /*!< Value 0x0000012B */
#define RCC_PLLDIV301      (0x12CUL)  /*!< Value 0x0000012C */
#define RCC_PLLDIV302      (0x12DUL)  /*!< Value 0x0000012D */
#define RCC_PLLDIV303      (0x12EUL)  /*!< Value 0x0000012E */
#define RCC_PLLDIV304      (0x12FUL)  /*!< Value 0x0000012F */
#define RCC_PLLDIV305      (0x130UL)  /*!< Value 0x00000130 */
#define RCC_PLLDIV306      (0x131UL)  /*!< Value 0x00000131 */
#define RCC_PLLDIV307      (0x132UL)  /*!< Value 0x00000132 */
#define RCC_PLLDIV308      (0x133UL)  /*!< Value 0x00000133 */
#define RCC_PLLDIV309      (0x134UL)  /*!< Value 0x00000134 */
#define RCC_PLLDIV310      (0x135UL)  /*!< Value 0x00000135 */
#define RCC_PLLDIV311      (0x136UL)  /*!< Value 0x00000136 */
#define RCC_PLLDIV312      (0x137UL)  /*!< Value 0x00000137 */
#define RCC_PLLDIV313      (0x138UL)  /*!< Value 0x00000138 */
#define RCC_PLLDIV314      (0x139UL)  /*!< Value 0x00000139 */
#define RCC_PLLDIV315      (0x13AUL)  /*!< Value 0x0000013A */
#define RCC_PLLDIV316      (0x13BUL)  /*!< Value 0x0000013B */
#define RCC_PLLDIV317      (0x13CUL)  /*!< Value 0x0000013C */
#define RCC_PLLDIV318      (0x13DUL)  /*!< Value 0x0000013D */
#define RCC_PLLDIV319      (0x13EUL)  /*!< Value 0x0000013E */
#define RCC_PLLDIV320      (0x13FUL)  /*!< Value 0x0000013F */
#define RCC_PLLDIV321      (0x140UL)  /*!< Value 0x00000140 */
#define RCC_PLLDIV322      (0x141UL)  /*!< Value 0x00000141 */
#define RCC_PLLDIV323      (0x142UL)  /*!< Value 0x00000142 */
#define RCC_PLLDIV324      (0x143UL)  /*!< Value 0x00000143 */
#define RCC_PLLDIV325      (0x144UL)  /*!< Value 0x00000144 */
#define RCC_PLLDIV326      (0x145UL)  /*!< Value 0x00000145 */
#define RCC_PLLDIV327      (0x146UL)  /*!< Value 0x00000146 */
#define RCC_PLLDIV328      (0x147UL)  /*!< Value 0x00000147 */
#define RCC_PLLDIV329      (0x148UL)  /*!< Value 0x00000148 */
#define RCC_PLLDIV330      (0x149UL)  /*!< Value 0x00000149 */
#define RCC_PLLDIV331      (0x14AUL)  /*!< Value 0x0000014A */
#define RCC_PLLDIV332      (0x14BUL)  /*!< Value 0x0000014B */
#define RCC_PLLDIV333      (0x14CUL)  /*!< Value 0x0000014C */
#define RCC_PLLDIV334      (0x14DUL)  /*!< Value 0x0000014D */
#define RCC_PLLDIV335      (0x14EUL)  /*!< Value 0x0000014E */
#define RCC_PLLDIV336      (0x14FUL)  /*!< Value 0x0000014F */
#define RCC_PLLDIV337      (0x150UL)  /*!< Value 0x00000150 */
#define RCC_PLLDIV338      (0x151UL)  /*!< Value 0x00000151 */
#define RCC_PLLDIV339      (0x152UL)  /*!< Value 0x00000152 */
#define RCC_PLLDIV340      (0x153UL)  /*!< Value 0x00000153 */
#define RCC_PLLDIV341      (0x154UL)  /*!< Value 0x00000154 */
#define RCC_PLLDIV342      (0x155UL)  /*!< Value 0x00000155 */
#define RCC_PLLDIV343      (0x156UL)  /*!< Value 0x00000156 */
#define RCC_PLLDIV344      (0x157UL)  /*!< Value 0x00000157 */
#define RCC_PLLDIV345      (0x158UL)  /*!< Value 0x00000158 */
#define RCC_PLLDIV346      (0x159UL)  /*!< Value 0x00000159 */
#define RCC_PLLDIV347      (0x15AUL)  /*!< Value 0x0000015A */
#define RCC_PLLDIV348      (0x15BUL)  /*!< Value 0x0000015B */
#define RCC_PLLDIV349      (0x15CUL)  /*!< Value 0x0000015C */
#define RCC_PLLDIV350      (0x15DUL)  /*!< Value 0x0000015D */
#define RCC_PLLDIV351      (0x15EUL)  /*!< Value 0x0000015E */
#define RCC_PLLDIV352      (0x15FUL)  /*!< Value 0x0000015F */
#define RCC_PLLDIV353      (0x160UL)  /*!< Value 0x00000160 */
#define RCC_PLLDIV354      (0x161UL)  /*!< Value 0x00000161 */
#define RCC_PLLDIV355      (0x162UL)  /*!< Value 0x00000162 */
#define RCC_PLLDIV356      (0x163UL)  /*!< Value 0x00000163 */
#define RCC_PLLDIV357      (0x164UL)  /*!< Value 0x00000164 */
#define RCC_PLLDIV358      (0x165UL)  /*!< Value 0x00000165 */
#define RCC_PLLDIV359      (0x166UL)  /*!< Value 0x00000166 */
#define RCC_PLLDIV360      (0x167UL)  /*!< Value 0x00000167 */
#define RCC_PLLDIV361      (0x168UL)  /*!< Value 0x00000168 */
#define RCC_PLLDIV362      (0x169UL)  /*!< Value 0x00000169 */
#define RCC_PLLDIV363      (0x16AUL)  /*!< Value 0x0000016A */
#define RCC_PLLDIV364      (0x16BUL)  /*!< Value 0x0000016B */
#define RCC_PLLDIV365      (0x16CUL)  /*!< Value 0x0000016C */
#define RCC_PLLDIV366      (0x16DUL)  /*!< Value 0x0000016D */
#define RCC_PLLDIV367      (0x16EUL)  /*!< Value 0x0000016E */
#define RCC_PLLDIV368      (0x16FUL)  /*!< Value 0x0000016F */
#define RCC_PLLDIV369      (0x170UL)  /*!< Value 0x00000170 */
#define RCC_PLLDIV370      (0x171UL)  /*!< Value 0x00000171 */
#define RCC_PLLDIV371      (0x172UL)  /*!< Value 0x00000172 */
#define RCC_PLLDIV372      (0x173UL)  /*!< Value 0x00000173 */
#define RCC_PLLDIV373      (0x174UL)  /*!< Value 0x00000174 */
#define RCC_PLLDIV374      (0x175UL)  /*!< Value 0x00000175 */
#define RCC_PLLDIV375      (0x176UL)  /*!< Value 0x00000176 */
#define RCC_PLLDIV376      (0x177UL)  /*!< Value 0x00000177 */
#define RCC_PLLDIV377      (0x178UL)  /*!< Value 0x00000178 */
#define RCC_PLLDIV378      (0x179UL)  /*!< Value 0x00000179 */
#define RCC_PLLDIV379      (0x17AUL)  /*!< Value 0x0000017A */
#define RCC_PLLDIV380      (0x17BUL)  /*!< Value 0x0000017B */
#define RCC_PLLDIV381      (0x17CUL)  /*!< Value 0x0000017C */
#define RCC_PLLDIV382      (0x17DUL)  /*!< Value 0x0000017D */
#define RCC_PLLDIV383      (0x17EUL)  /*!< Value 0x0000017E */
#define RCC_PLLDIV384      (0x17FUL)  /*!< Value 0x0000017F */
#define RCC_PLLDIV385      (0x180UL)  /*!< Value 0x00000180 */
#define RCC_PLLDIV386      (0x181UL)  /*!< Value 0x00000181 */
#define RCC_PLLDIV387      (0x182UL)  /*!< Value 0x00000182 */
#define RCC_PLLDIV388      (0x183UL)  /*!< Value 0x00000183 */
#define RCC_PLLDIV389      (0x184UL)  /*!< Value 0x00000184 */
#define RCC_PLLDIV390      (0x185UL)  /*!< Value 0x00000185 */
#define RCC_PLLDIV391      (0x186UL)  /*!< Value 0x00000186 */
#define RCC_PLLDIV392      (0x187UL)  /*!< Value 0x00000187 */
#define RCC_PLLDIV393      (0x188UL)  /*!< Value 0x00000188 */
#define RCC_PLLDIV394      (0x189UL)  /*!< Value 0x00000189 */
#define RCC_PLLDIV395      (0x18AUL)  /*!< Value 0x0000018A */
#define RCC_PLLDIV396      (0x18BUL)  /*!< Value 0x0000018B */
#define RCC_PLLDIV397      (0x18CUL)  /*!< Value 0x0000018C */
#define RCC_PLLDIV398      (0x18DUL)  /*!< Value 0x0000018D */
#define RCC_PLLDIV399      (0x18EUL)  /*!< Value 0x0000018E */
#define RCC_PLLDIV400      (0x18FUL)  /*!< Value 0x0000018F */
#define RCC_PLLDIV401      (0x190UL)  /*!< Value 0x00000190 */
#define RCC_PLLDIV402      (0x191UL)  /*!< Value 0x00000191 */
#define RCC_PLLDIV403      (0x192UL)  /*!< Value 0x00000192 */
#define RCC_PLLDIV404      (0x193UL)  /*!< Value 0x00000193 */
#define RCC_PLLDIV405      (0x194UL)  /*!< Value 0x00000194 */
#define RCC_PLLDIV406      (0x195UL)  /*!< Value 0x00000195 */
#define RCC_PLLDIV407      (0x196UL)  /*!< Value 0x00000196 */
#define RCC_PLLDIV408      (0x197UL)  /*!< Value 0x00000197 */
#define RCC_PLLDIV409      (0x198UL)  /*!< Value 0x00000198 */
#define RCC_PLLDIV410      (0x199UL)  /*!< Value 0x00000199 */
#define RCC_PLLDIV411      (0x19AUL)  /*!< Value 0x0000019A */
#define RCC_PLLDIV412      (0x19BUL)  /*!< Value 0x0000019B */
#define RCC_PLLDIV413      (0x19CUL)  /*!< Value 0x0000019C */
#define RCC_PLLDIV414      (0x19DUL)  /*!< Value 0x0000019D */
#define RCC_PLLDIV415      (0x19EUL)  /*!< Value 0x0000019E */
#define RCC_PLLDIV416      (0x19FUL)  /*!< Value 0x0000019F */
#define RCC_PLLDIV417      (0x1A0UL)  /*!< Value 0x000001A0 */
#define RCC_PLLDIV418      (0x1A1UL)  /*!< Value 0x000001A1 */
#define RCC_PLLDIV419      (0x1A2UL)  /*!< Value 0x000001A2 */
#define RCC_PLLDIV420      (0x1A3UL)  /*!< Value 0x000001A3 */
#define RCC_PLLDIV421      (0x1A4UL)  /*!< Value 0x000001A4 */
#define RCC_PLLDIV422      (0x1A5UL)  /*!< Value 0x000001A5 */
#define RCC_PLLDIV423      (0x1A6UL)  /*!< Value 0x000001A6 */
#define RCC_PLLDIV424      (0x1A7UL)  /*!< Value 0x000001A7 */
#define RCC_PLLDIV425      (0x1A8UL)  /*!< Value 0x000001A8 */
#define RCC_PLLDIV426      (0x1A9UL)  /*!< Value 0x000001A9 */
#define RCC_PLLDIV427      (0x1AAUL)  /*!< Value 0x000001AA */
#define RCC_PLLDIV428      (0x1ABUL)  /*!< Value 0x000001AB */
#define RCC_PLLDIV429      (0x1ACUL)  /*!< Value 0x000001AC */
#define RCC_PLLDIV430      (0x1ADUL)  /*!< Value 0x000001AD */
#define RCC_PLLDIV431      (0x1AEUL)  /*!< Value 0x000001AE */
#define RCC_PLLDIV432      (0x1AFUL)  /*!< Value 0x000001AF */
#define RCC_PLLDIV433      (0x1B0UL)  /*!< Value 0x000001B0 */
#define RCC_PLLDIV434      (0x1B1UL)  /*!< Value 0x000001B1 */
#define RCC_PLLDIV435      (0x1B2UL)  /*!< Value 0x000001B2 */
#define RCC_PLLDIV436      (0x1B3UL)  /*!< Value 0x000001B3 */
#define RCC_PLLDIV437      (0x1B4UL)  /*!< Value 0x000001B4 */
#define RCC_PLLDIV438      (0x1B5UL)  /*!< Value 0x000001B5 */
#define RCC_PLLDIV439      (0x1B6UL)  /*!< Value 0x000001B6 */
#define RCC_PLLDIV440      (0x1B7UL)  /*!< Value 0x000001B7 */
#define RCC_PLLDIV441      (0x1B8UL)  /*!< Value 0x000001B8 */
#define RCC_PLLDIV442      (0x1B9UL)  /*!< Value 0x000001B9 */
#define RCC_PLLDIV443      (0x1BAUL)  /*!< Value 0x000001BA */
#define RCC_PLLDIV444      (0x1BBUL)  /*!< Value 0x000001BB */
#define RCC_PLLDIV445      (0x1BCUL)  /*!< Value 0x000001BC */
#define RCC_PLLDIV446      (0x1BDUL)  /*!< Value 0x000001BD */
#define RCC_PLLDIV447      (0x1BEUL)  /*!< Value 0x000001BE */
#define RCC_PLLDIV448      (0x1BFUL)  /*!< Value 0x000001BF */
#define RCC_PLLDIV449      (0x1C0UL)  /*!< Value 0x000001C0 */
#define RCC_PLLDIV450      (0x1C1UL)  /*!< Value 0x000001C1 */
#define RCC_PLLDIV451      (0x1C2UL)  /*!< Value 0x000001C2 */
#define RCC_PLLDIV452      (0x1C3UL)  /*!< Value 0x000001C3 */
#define RCC_PLLDIV453      (0x1C4UL)  /*!< Value 0x000001C4 */
#define RCC_PLLDIV454      (0x1C5UL)  /*!< Value 0x000001C5 */
#define RCC_PLLDIV455      (0x1C6UL)  /*!< Value 0x000001C6 */
#define RCC_PLLDIV456      (0x1C7UL)  /*!< Value 0x000001C7 */
#define RCC_PLLDIV457      (0x1C8UL)  /*!< Value 0x000001C8 */
#define RCC_PLLDIV458      (0x1C9UL)  /*!< Value 0x000001C9 */
#define RCC_PLLDIV459      (0x1CAUL)  /*!< Value 0x000001CA */
#define RCC_PLLDIV460      (0x1CBUL)  /*!< Value 0x000001CB */
#define RCC_PLLDIV461      (0x1CCUL)  /*!< Value 0x000001CC */
#define RCC_PLLDIV462      (0x1CDUL)  /*!< Value 0x000001CD */
#define RCC_PLLDIV463      (0x1CEUL)  /*!< Value 0x000001CE */
#define RCC_PLLDIV464      (0x1CFUL)  /*!< Value 0x000001CF */
#define RCC_PLLDIV465      (0x1D0UL)  /*!< Value 0x000001D0 */
#define RCC_PLLDIV466      (0x1D1UL)  /*!< Value 0x000001D1 */
#define RCC_PLLDIV467      (0x1D2UL)  /*!< Value 0x000001D2 */
#define RCC_PLLDIV468      (0x1D3UL)  /*!< Value 0x000001D3 */
#define RCC_PLLDIV469      (0x1D4UL)  /*!< Value 0x000001D4 */
#define RCC_PLLDIV470      (0x1D5UL)  /*!< Value 0x000001D5 */
#define RCC_PLLDIV471      (0x1D6UL)  /*!< Value 0x000001D6 */
#define RCC_PLLDIV472      (0x1D7UL)  /*!< Value 0x000001D7 */
#define RCC_PLLDIV473      (0x1D8UL)  /*!< Value 0x000001D8 */
#define RCC_PLLDIV474      (0x1D9UL)  /*!< Value 0x000001D9 */
#define RCC_PLLDIV475      (0x1DAUL)  /*!< Value 0x000001DA */
#define RCC_PLLDIV476      (0x1DBUL)  /*!< Value 0x000001DB */
#define RCC_PLLDIV477      (0x1DCUL)  /*!< Value 0x000001DC */
#define RCC_PLLDIV478      (0x1DDUL)  /*!< Value 0x000001DD */
#define RCC_PLLDIV479      (0x1DEUL)  /*!< Value 0x000001DE */
#define RCC_PLLDIV480      (0x1DFUL)  /*!< Value 0x000001DF */
#define RCC_PLLDIV481      (0x1E0UL)  /*!< Value 0x000001E0 */
#define RCC_PLLDIV482      (0x1E1UL)  /*!< Value 0x000001E1 */
#define RCC_PLLDIV483      (0x1E2UL)  /*!< Value 0x000001E2 */
#define RCC_PLLDIV484      (0x1E3UL)  /*!< Value 0x000001E3 */
#define RCC_PLLDIV485      (0x1E4UL)  /*!< Value 0x000001E4 */
#define RCC_PLLDIV486      (0x1E5UL)  /*!< Value 0x000001E5 */
#define RCC_PLLDIV487      (0x1E6UL)  /*!< Value 0x000001E6 */
#define RCC_PLLDIV488      (0x1E7UL)  /*!< Value 0x000001E7 */
#define RCC_PLLDIV489      (0x1E8UL)  /*!< Value 0x000001E8 */
#define RCC_PLLDIV490      (0x1E9UL)  /*!< Value 0x000001E9 */
#define RCC_PLLDIV491      (0x1EAUL)  /*!< Value 0x000001EA */
#define RCC_PLLDIV492      (0x1EBUL)  /*!< Value 0x000001EB */
#define RCC_PLLDIV493      (0x1ECUL)  /*!< Value 0x000001EC */
#define RCC_PLLDIV494      (0x1EDUL)  /*!< Value 0x000001ED */
#define RCC_PLLDIV495      (0x1EEUL)  /*!< Value 0x000001EE */
#define RCC_PLLDIV496      (0x1EFUL)  /*!< Value 0x000001EF */
#define RCC_PLLDIV497      (0x1F0UL)  /*!< Value 0x000001F0 */
#define RCC_PLLDIV498      (0x1F1UL)  /*!< Value 0x000001F1 */
#define RCC_PLLDIV499      (0x1F2UL)  /*!< Value 0x000001F2 */
#define RCC_PLLDIV500      (0x1F3UL)  /*!< Value 0x000001F3 */
#define RCC_PLLDIV501      (0x1F4UL)  /*!< Value 0x000001F4 */
#define RCC_PLLDIV502      (0x1F5UL)  /*!< Value 0x000001F5 */
#define RCC_PLLDIV503      (0x1F6UL)  /*!< Value 0x000001F6 */
#define RCC_PLLDIV504      (0x1F7UL)  /*!< Value 0x000001F7 */
#define RCC_PLLDIV505      (0x1F8UL)  /*!< Value 0x000001F8 */
#define RCC_PLLDIV506      (0x1F9UL)  /*!< Value 0x000001F9 */
#define RCC_PLLDIV507      (0x1FAUL)  /*!< Value 0x000001FA */
#define RCC_PLLDIV508      (0x1FBUL)  /*!< Value 0x000001FB */
#define RCC_PLLDIV509      (0x1FCUL)  /*!< Value 0x000001FC */
#define RCC_PLLDIV510      (0x1FDUL)  /*!< Value 0x000001FD */
#define RCC_PLLDIV511      (0x1FEUL)  /*!< Value 0x000001FE */
#define RCC_PLLDIV512      (0x1FFUL)  /*!< Value 0x000001FF */

/*!< PLL fractional divider register (Macros valid for registers PLL1FRACR, PLL2FRACR and PLL3FRACR) */
#define RCC_PLLFRACR_FRACN_OFFSET  (3U)
#define RCC_PLLFRACR_FRACN_MASK    (0x1FFFUL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Mask  0x0000FFF8 */
#define RCC_PLLFRACR_FRACN_0       (0x0001UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000008 */
#define RCC_PLLFRACR_FRACN_1       (0x0002UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000010 */
#define RCC_PLLFRACR_FRACN_2       (0x0004UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000020 */
#define RCC_PLLFRACR_FRACN_3       (0x0008UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000040 */
#define RCC_PLLFRACR_FRACN_4       (0x0010UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000080 */
#define RCC_PLLFRACR_FRACN_5       (0x0020UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000100 */
#define RCC_PLLFRACR_FRACN_6       (0x0040UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000200 */
#define RCC_PLLFRACR_FRACN_7       (0x0080UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000400 */
#define RCC_PLLFRACR_FRACN_8       (0x0100UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00000800 */
#define RCC_PLLFRACR_FRACN_9       (0x0200UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00001000 */
#define RCC_PLLFRACR_FRACN_10      (0x0400UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00002000 */
#define RCC_PLLFRACR_FRACN_11      (0x0800UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00004000 */
#define RCC_PLLFRACR_FRACN_12      (0x1000UL << REGISTER_FIELD_OFFSET(RCC, PLLFRACR, FRACN))  /*!< Value 0x00008000 */

/*!< Domain 1 kernel configuration register */
#define RCC_D1CCIPR_CLKPERSEL_OFFSET  (28U)
#define RCC_D1CCIPR_CLKPERSEL_MASK    (0x3UL << REGISTER_FIELD_OFFSET(RCC, D1CCIPR, CLKPERSEL))  /*!< Mask  0x30000000 */

#define RCC_D1CCIPR_SDMMCSEL_OFFSET   (16U)
#define RCC_D1CCIPR_SDMMCSEL_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D1CCIPR, SDMMCSEL))   /*!< Mask  0x00010000 */

#define RCC_D1CCIPR_DSISEL_OFFSET     (8U)
#define RCC_D1CCIPR_DSISEL_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D1CCIPR, DSISEL))     /*!< Mask  0x00001000 */

#define RCC_D1CCIPR_QSPISEL_OFFSET    (4U)
#define RCC_D1CCIPR_QSPISEL_MASK      (0x3UL << REGISTER_FIELD_OFFSET(RCC, D1CCIPR, QSPISEL))    /*!< Mask  0x00000030 */

#define RCC_D1CCIPR_FMCSEL_OFFSET     (0U)
#define RCC_D1CCIPR_FMCSEL_MASK       (0x3UL << REGISTER_FIELD_OFFSET(RCC, D1CCIPR, FMCSEL))     /*!< Mask  0x00000003 */

// Values of the clock peripheral single wire kernel clock
#define RCC_CLKPERIPHERAL_HSI      (0x0UL)  /*!< Value 0x00000000 */
#define RCC_CLKPERIPHERAL_CSI      (0x1UL)  /*!< Value 0x00000001 */
#define RCC_CLKPERIPHERAL_HSE      (0x2UL)  /*!< Value 0x00000002 */
#define RCC_CLKPERIPHERAL_DISABLE  (0x3UL)  /*!< Value 0x00000003 */

// Values of the secure digital input/output MultiMediaCard inteerface kernel clock
#define RCC_SDMMCCLK_PLL1Q  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SDMMCCLK_PLL2R  (0x1UL)  /*!< Value 0x00000001 */

// Values of the display serial interface kernel clock
#define RCC_DSICLK_PHYCLK  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_DSICLK_PLL2Q   (0x1UL)  /*!< Value 0x00000001 */

// Values of the quad serial peripheral interface (QSPI) kernel clock
#define RCC_QSPICLK_HCLK3      (0x0UL)  /*!< Value 0x00000000 */
#define RCC_QSPICLK_PLL1Q      (0x1UL)  /*!< Value 0x00000001 */
#define RCC_QSPICLK_PLL2R      (0x2UL)  /*!< Value 0x00000002 */
#define RCC_QSPICLK_PERIPERAL  (0x3UL)  /*!< Value 0x00000003 */

// Values of the flexibler memory controller kernel clock
#define RCC_FMCCLK_HCLK3      (0x0UL)  /*!< Value 0x00000000 */
#define RCC_FMCCLK_PLL1Q      (0x1UL)  /*!< Value 0x00000001 */
#define RCC_FMCCLK_PLL2R      (0x2UL)  /*!< Value 0x00000002 */
#define RCC_FMCCLK_PERIPERAL  (0x3UL)  /*!< Value 0x00000003 */

/*!< Domain 2 kernel configuration register 1 */
#define RCC_D2CCIP1R_SWPSEL_OFFSET     (31U)
#define RCC_D2CCIP1R_SWPSEL_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, SWPSEL))     /*!< Mask  0x80000000 */

#define RCC_D2CCIP1R_FDCANSEL_OFFSET   (28U)
#define RCC_D2CCIP1R_FDCANSEL_MASK     (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, FDCANSEL))   /*!< Mask  0x30000000 */

#define RCC_D2CCIP1R_DFSDM1SEL_OFFSET  (24U)
#define RCC_D2CCIP1R_DFSDM1SEL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, DFSDM1SEL))  /*!< Mask  0x01000000 */

#define RCC_D2CCIP1R_SPDIFSEL_OFFSET   (20U)
#define RCC_D2CCIP1R_SPDIFSEL_MASK     (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, SPDIFSEL))   /*!< Mask  0x00300000 */

#define RCC_D2CCIP1R_SPI45SEL_OFFSET   (16U)
#define RCC_D2CCIP1R_SPI45SEL_MASK     (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, SPI45SEL))   /*!< Mask  0x00070000 */

#define RCC_D2CCIP1R_SPI123SEL_OFFSET  (12U)
#define RCC_D2CCIP1R_SPI123SEL_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, SPI123SEL))  /*!< Mask  0x00007000 */

#define RCC_D2CCIP1R_SAI23SEL_OFFSET   (6U)
#define RCC_D2CCIP1R_SAI23SEL_MASK     (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, SAI23SEL))   /*!< Mask  0x000001C0 */

#define RCC_D2CCIP1R_SAI1SEL_OFFSET    (0U)
#define RCC_D2CCIP1R_SAI1SEL_MASK      (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP1R, SAI1SEL))    /*!< Mask  0x00000007 */

// Values of single wire kernel clock
#define RCC_SINGLEWIRECLK_PCLK  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SINGLEWIRECLK_HSI   (0x1UL)  /*!< Value 0x00000001 */

// Values of the flexible data rate controller area network kernel clock
#define RCC_FDCANCLK_HSE      (0x0UL)  /*!< Value 0x00000000 */
#define RCC_FDCANCLK_PLL1Q    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_FDCANCLK_PLL2Q    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_FDCANCLK_DISABLE  (0x3UL)  /*!< Value 0x00000003 */

// Values of the digital filter sigma delta modulator kernel clock
#define RCC_SIGMADELTAMODCLK_PCLK2   (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SIGMADELTAMODCLK_SYSCLK  (0x1UL)  /*!< Value 0x00000001 */

// Values of the Sony/Philips digital interface kernel clock
#define RCC_SPDIFRXCLK_PLL1Q  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SPDIFRXCLK_PLL2R  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SPDIFRXCLK_PLL3R  (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SPDIFRXCLK_HSI    (0x3UL)  /*!< Value 0x00000003 */

// Values of serial peripheral interface 4/5 (SPI4/5) kernel clock
#define RCC_SPI45CLK_APB    (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SPI45CLK_PLL2Q  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SPI45CLK_PLL3Q  (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SPI45CLK_HSI    (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SPI45CLK_CSI    (0x4UL)  /*!< Value 0x00000004 */
#define RCC_SPI45CLK_HSE    (0x5UL)  /*!< Value 0x00000005 */

// Values of serial peripheral interface 1/2/3 (SPI1/2/3) kernel clock
#define RCC_SPI123CLK_PLL1Q       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SPI123CLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SPI123CLK_PLL3P       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SPI123CLK_I2S         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SPI123CLK_PERIPHERAL  (0x4UL)  /*!< Value 0x00000004 */

// Values of the serial audio interface 2/3 (SAI2/3) kernel clock
#define RCC_SAI23CLK_PLL1Q       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SAI23CLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SAI23CLK_PLL3P       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SAI23CLK_I2S         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SAI23CLK_PERIPHERAL  (0x4UL)  /*!< Value 0x00000004 */

// Values of the serial audio interface 1 (SAI1) kernel clock
#define RCC_SAI1CLK_PLL1Q       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SAI1CLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SAI1CLK_PLL3P       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SAI1CLK_I2S         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SAI1CLK_PERIPHERAL  (0x4UL)  /*!< Value 0x00000004 */

/*!< Domain 2 kernel configuration register 2 */
#define RCC_D2CCIP2R_LPTIM1SEL_OFFSET       (28U)
#define RCC_D2CCIP2R_LPTIM1SEL_MASK         (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, LPTIM1SEL))       /*!< Mask  0x70000000 */

#define RCC_D2CCIP2R_CECSEL_OFFSET          (22U)
#define RCC_D2CCIP2R_CECSEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, CECSEL))          /*!< Mask  0x00C00000 */

#define RCC_D2CCIP2R_USBSEL_OFFSET          (20U)
#define RCC_D2CCIP2R_USBSEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, USBSEL))          /*!< Mask  0x00300000 */

#define RCC_D2CCIP2R_I2C123SEL_OFFSET       (12U)
#define RCC_D2CCIP2R_I2C123SEL_MASK         (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, I2C123SEL))       /*!< Mask  0x00003000 */

#define RCC_D2CCIP2R_RNGSEL_OFFSET          (8U)
#define RCC_D2CCIP2R_RNGSEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, RNGSEL))          /*!< Mask  0x00000300 */

#define RCC_D2CCIP2R_USART16SEL_OFFSET      (3U)
#define RCC_D2CCIP2R_USART16SEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, USART16SEL))      /*!< Mask  0x0000001C */

#define RCC_D2CCIP2R_USART234578SEL_OFFSET  (0U)
#define RCC_D2CCIP2R_USART234578SEL_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D2CCIP2R, USART234578SEL))  /*!< Mask  0x00000007 */

// Values of low power timer 1 kernel clock
#define RCC_LPTIMER1CLK_PCLK1       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LPTIMER1CLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_LPTIMER1CLK_PLL3R       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_LPTIMER1CLK_LSE         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_LPTIMER1CLK_LSI         (0x4UL)  /*!< Value 0x00000004 */
#define RCC_LPTIMER1CLK_PERIPHERAL  (0x5UL)  /*!< Value 0x00000005 */

// Values of HDMI consumer electronics control (CEC) kernel clock
#define RCC_HDMICECCLK_LSE      (0x0UL)  /*!< Value 0x00000000 */
#define RCC_HDMICECCLK_LSI      (0x1UL)  /*!< Value 0x00000001 */
#define RCC_HDMICECCLK_CSI      (0x2UL)  /*!< Value 0x00000002 */
#define RCC_HDMICECCLK_DISABLE  (0x3UL)  /*!< Value 0x00000003 */

// Values of USB kernel clock
#define RCC_USBCLK_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_USBCLK_PLL1Q    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_USBCLK_PLL3Q    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_USBCLK_HSI48    (0x3UL)  /*!< Value 0x00000003 */

// Values of inter-integrated circuit 1/2/3 (I2C1/2/3) kernel clock
#define RCC_I2C123CLK_PCLK1  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_I2C123CLK_PLL3R  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_I2C123CLK_HSI    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_I2C123CLK_CSI    (0x3UL)  /*!< Value 0x00000003 */

// Values of random number generator kernel clock
#define RCC_RNGCLK_HSI48  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_RNGCLK_PLL1Q  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_RNGCLK_LSE    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_RNGCLK_LSI    (0x3UL)  /*!< Value 0x00000003 */

// Values of universal sychronous and asynchronous receiver transmitter (USART) 1/6 kernel clock
#define RCC_USART16CLK_PCLK2  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_USART16CLK_PLL2Q  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_USART16CLK_PLL3Q  (0x2UL)  /*!< Value 0x00000002 */
#define RCC_USART16CLK_HSI    (0x3UL)  /*!< Value 0x00000003 */
#define RCC_USART16CLK_LSI    (0x4UL)  /*!< Value 0x00000004 */
#define RCC_USART16CLK_LSE    (0x5UL)  /*!< Value 0x00000005 */

// Values of universal sychronous and asynchronous receiver transmitter (USART) 2/3/4/5/7/8 kernel clock
#define RCC_USART234578CLK_PCLK1  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_USART234578CLK_PLL2Q  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_USART234578CLK_PLL3Q  (0x2UL)  /*!< Value 0x00000002 */
#define RCC_USART234578CLK_HSI    (0x3UL)  /*!< Value 0x00000003 */
#define RCC_USART234578CLK_CSI    (0x4UL)  /*!< Value 0x00000004 */
#define RCC_USART234578CLK_LSE    (0x5UL)  /*!< Value 0x00000005 */

/*!< Domain 3 kernel configuration register */
#define RCC_D3CCIPR_SPI6SEL_OFFSET      (28U)
#define RCC_D3CCIPR_SPI6SEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, SPI6SEL))      /*!< Mask  0x70000000 */

#define RCC_D3CCIPR_SAI4BSEL_OFFSET     (24U)
#define RCC_D3CCIPR_SAI4BSEL_MASK       (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, SAI4BSEL))     /*!< Mask  0x07000000 */

#define RCC_D3CCIPR_SAI4ASEL_OFFSET     (21U)
#define RCC_D3CCIPR_SAI4ASEL_MASK       (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, SAI4ASEL))     /*!< Mask  0x00E00000 */

#define RCC_D3CCIPR_ADCSEL_OFFSET       (16U)
#define RCC_D3CCIPR_ADCSEL_MASK         (0x3UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, ADCSEL))       /*!< Mask  0x00030000 */

#define RCC_D3CCIPR_LPTIM345SEL_OFFSET  (13U)
#define RCC_D3CCIPR_LPTIM345SEL_MASK    (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, LPTIM345SEL))  /*!< Mask  0x0000E000 */

#define RCC_D3CCIPR_LPTIM2SEL_OFFSET    (10U)
#define RCC_D3CCIPR_LPTIM2SEL_MASK      (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, LPTIM2SEL))    /*!< Mask  0x00001C00 */

#define RCC_D3CCIPR_I2C4SEL_OFFSET      (8U)
#define RCC_D3CCIPR_I2C4SEL_MASK        (0x3UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, I2C4SEL))      /*!< Mask  0x00000300 */

#define RCC_D3CCIPR_LPUART1SEL_OFFSET   (0U)
#define RCC_D3CCIPR_LPUART1SEL_MASK     (0x7UL << REGISTER_FIELD_OFFSET(RCC, D3CCIPR, LPUART1SEL))   /*!< Mask  0x00000007 */

// Values of serial peripheral interface 6 (SPI6) kernel clock
#define RCC_SPI6CLK_PCLK4  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SPI6CLK_PLL2Q  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SPI6CLK_PLL3Q  (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SPI6CLK_HSI    (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SPI6CLK_CSI    (0x4UL)  /*!< Value 0x00000004 */
#define RCC_SPI6CLK_HSE    (0x5UL)  /*!< Value 0x00000005 */

// Values of the sub-block B of serial audio interface 4 (SAI4) kernel clock
#define RCC_SAI4BCLK_PLL1Q       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SAI4BCLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SAI4BCLK_PLL3P       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SAI4BCLK_I2S         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SAI4BCLK_PERIPHERAL  (0x4UL)  /*!< Value 0x00000004 */

// Values of the sub-block A of serial audio interface 4 (SAI4) kernel clock
#define RCC_SAI4ACLK_PLL1Q       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_SAI4ACLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_SAI4ACLK_PLL3P       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_SAI4ACLK_I2S         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_SAI4ACLK_PERIPHERAL  (0x4UL)  /*!< Value 0x00000004 */

// Values of analog to digital converter kernel clock
#define RCC_ADCCLK_PLL2P       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_ADCCLK_PLL3R       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_ADCCLK_PERIPHERAL  (0x2UL)  /*!< Value 0x00000002 */

// Values of low power timer 3/4/5 kernel clock
#define RCC_LPTIMER345CLK_PCLK4       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LPTIMER345CLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_LPTIMER345CLK_PLL3R       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_LPTIMER345CLK_LSE         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_LPTIMER345CLK_LSI         (0x4UL)  /*!< Value 0x00000004 */
#define RCC_LPTIMER345CLK_PERIPHERAL  (0x5UL)  /*!< Value 0x00000005 */

// Values of low power timer 2 kernel clock
#define RCC_LPTIMER2CLK_PCLK4       (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LPTIMER2CLK_PLL2P       (0x1UL)  /*!< Value 0x00000001 */
#define RCC_LPTIMER2CLK_PLL3R       (0x2UL)  /*!< Value 0x00000002 */
#define RCC_LPTIMER2CLK_LSE         (0x3UL)  /*!< Value 0x00000003 */
#define RCC_LPTIMER2CLK_LSI         (0x4UL)  /*!< Value 0x00000004 */
#define RCC_LPTIMER2CLK_PERIPHERAL  (0x5UL)  /*!< Value 0x00000005 */

// Values of inter-integrated circuit 4 (I2C4) kernel clock
#define RCC_I2C4CLK_PCLK4  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_I2C4CLK_PLL3R  (0x1UL)  /*!< Value 0x00000001 */
#define RCC_I2C4CLK_HSI    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_I2C4CLK_CSI    (0x3UL)  /*!< Value 0x00000003 */

// Values of low power UART 1 kernel clock
#define RCC_LPUART1CLK_PCLKD3   (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LPUART1CLK_PLL2Q    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_LPUART1CLK_PLL3Q    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_LPUART1CLK_HSI      (0x3UL)  /*!< Value 0x00000003 */
#define RCC_LPUART1CLK_CSI      (0x4UL)  /*!< Value 0x00000004 */
#define RCC_LPUART1CLK_LSE      (0x5UL)  /*!< Value 0x00000005 */
#define RCC_LPUART1CLK_DISABLE  (0x7UL)  /*!< Value 0x00000007 */

/*!< Clock source interrupt enable register */
#define RCC_CIER_LSECSSIE_OFFSET    (9U)
#define RCC_CIER_LSECSSIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, LSECSSIE))    /*!< Mask  0x00000200 */

#define RCC_CIER_PLL3RDYIE_OFFSET   (8U)
#define RCC_CIER_PLL3RDYIE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, PLL3RDYIE))   /*!< Mask  0x00000100 */

#define RCC_CIER_PLL2RDYIE_OFFSET   (7U)
#define RCC_CIER_PLL2RDYIE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, PLL2RDYIE))   /*!< Mask  0x00000080 */

#define RCC_CIER_PLL1RDYIE_OFFSET   (6U)
#define RCC_CIER_PLL1RDYIE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, PLL1RDYIE))   /*!< Mask  0x00000040 */

#define RCC_CIER_HSI48RDYIE_OFFSET  (5U)
#define RCC_CIER_HSI48RDYIE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, HSI48RDYIE))  /*!< Mask  0x00000020 */

#define RCC_CIER_CSIRDYIE_OFFSET    (4U)
#define RCC_CIER_CSIRDYIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, CSIRDYIE))    /*!< Mask  0x00000010 */

#define RCC_CIER_HSERDYIE_OFFSET    (3U)
#define RCC_CIER_HSERDYIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, HSERDYIE))    /*!< Mask  0x00000008 */

#define RCC_CIER_HSIRDYIE_OFFSET    (2U)
#define RCC_CIER_HSIRDYIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, HSIRDYIE))    /*!< Mask  0x00000004 */

#define RCC_CIER_LSERDYIE_OFFSET    (1U)
#define RCC_CIER_LSERDYIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, LSERDYIE))    /*!< Mask  0x00000002 */

#define RCC_CIER_LSIRDYIE_OFFSET    (0U)
#define RCC_CIER_LSIRDYIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CIER, LSIRDYIE))    /*!< Mask  0x00000001 */

// Values of clock interrupt enable bit
#define RCC_CLKINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_CLKINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Clock source interrupt flag register */
#define RCC_CLKINTFLAG_HSECSSF_OFFSET    (10U)
#define RCC_CLKINTFLAG_HSECSSF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSECSSF))    /*!< Mask  0x00000400 */

#define RCC_CLKINTFLAG_LSECSSF_OFFSET    (9U)
#define RCC_CLKINTFLAG_LSECSSF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, LSECSSF))    /*!< Mask  0x00000200 */

#define RCC_CLKINTFLAG_PLL3RDYF_OFFSET   (8U)
#define RCC_CLKINTFLAG_PLL3RDYF_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, PLL3RDYF))   /*!< Mask  0x00000100 */

#define RCC_CLKINTFLAG_PLL2RDYF_OFFSET   (7U)
#define RCC_CLKINTFLAG_PLL2RDYF_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, PLL2RDYF))   /*!< Mask  0x00000080 */

#define RCC_CLKINTFLAG_PLL1RDYF_OFFSET   (6U)
#define RCC_CLKINTFLAG_PLL1RDYF_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, PLL1RDYF))   /*!< Mask  0x00000040 */

#define RCC_CLKINTFLAG_HSI48RDYF_OFFSET  (5U)
#define RCC_CLKINTFLAG_HSI48RDYF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSI48RDYF))  /*!< Mask  0x00000020 */

#define RCC_CLKINTFLAG_CSIRDYF_OFFSET    (4U)
#define RCC_CLKINTFLAG_CSIRDYF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, CSIRDYF))    /*!< Mask  0x00000010 */

#define RCC_CLKINTFLAG_HSERDYF_OFFSET    (3U)
#define RCC_CLKINTFLAG_HSERDYF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSERDYF))    /*!< Mask  0x00000008 */

#define RCC_CLKINTFLAG_HSIRDYF_OFFSET    (2U)
#define RCC_CLKINTFLAG_HSIRDYF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, HSIRDYF))    /*!< Mask  0x00000004 */

#define RCC_CLKINTFLAG_LSERDYF_OFFSET    (1U)
#define RCC_CLKINTFLAG_LSERDYF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, LSERDYF))    /*!< Mask  0x00000002 */

#define RCC_CLKINTFLAG_LSIRDYF_OFFSET    (0U)
#define RCC_CLKINTFLAG_LSIRDYF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTFLAG, LSIRDYF))    /*!< Mask  0x00000001 */

// Values of clock interrupt triggered bit
#define RCC_CLKINT_NOTTRIGGERED  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_CLKINT_TRIGGERED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Clock source interrupt clear register */
#define RCC_CLKINTCLR_HSECSSC_OFFSET    (10U)
#define RCC_CLKINTCLR_HSECSSC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSECSSC))    /*!< Mask  0x00000400 */

#define RCC_CLKINTCLR_LSECSSC_OFFSET    (9U)
#define RCC_CLKINTCLR_LSECSSC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, LSECSSC))    /*!< Mask  0x00000200 */

#define RCC_CLKINTCLR_PLL3RDYC_OFFSET   (8U)
#define RCC_CLKINTCLR_PLL3RDYC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, PLL3RDYC))   /*!< Mask  0x00000100 */

#define RCC_CLKINTCLR_PLL2RDYC_OFFSET   (7U)
#define RCC_CLKINTCLR_PLL2RDYC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, PLL2RDYC))   /*!< Mask  0x00000080 */

#define RCC_CLKINTCLR_PLL1RDYC_OFFSET   (6U)
#define RCC_CLKINTCLR_PLL1RDYC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, PLL1RDYC))   /*!< Mask  0x00000040 */

#define RCC_CLKINTCLR_HSI48RDYC_OFFSET  (5U)
#define RCC_CLKINTCLR_HSI48RDYC_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSI48RDYC))  /*!< Mask  0x00000020 */

#define RCC_CLKINTCLR_CSIRDYC_OFFSET    (4U)
#define RCC_CLKINTCLR_CSIRDYC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, CSIRDYC))    /*!< Mask  0x00000010 */

#define RCC_CLKINTCLR_HSERDYC_OFFSET    (3U)
#define RCC_CLKINTCLR_HSERDYC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSERDYC))    /*!< Mask  0x00000008 */

#define RCC_CLKINTCLR_HSIRDYC_OFFSET    (2U)
#define RCC_CLKINTCLR_HSIRDYC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, HSIRDYC))    /*!< Mask  0x00000004 */

#define RCC_CLKINTCLR_LSERDYC_OFFSET    (1U)
#define RCC_CLKINTCLR_LSERDYC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, LSERDYC))    /*!< Mask  0x00000002 */

#define RCC_CLKINTCLR_LSIRDYC_OFFSET    (0U)
#define RCC_CLKINTCLR_LSIRDYC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, CLKINTCLR, LSIRDYC))    /*!< Mask  0x00000001 */

// Values of clock interrupt clear bit
#define RCC_CLKINT_CLEARED  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_CLKINT_CLEAR    (0x1UL)  /*!< Value 0x00000001 */

/*!< Backup domain control register */
#define RCC_BDCR_BCDRST_OFFSET    (16U)
#define RCC_BDCR_BCDRST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, BCDRST))    /*!< Mask  0x00010000 */

#define RCC_BDCR_RTCEN_OFFSET     (15U)
#define RCC_BDCR_RTCEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, RTCEN))     /*!< Mask  0x00008000 */

#define RCC_BDCR_RTCSEL_OFFSET    (8U)
#define RCC_BDCR_RTCSEL_MASK      (0x3UL << REGISTER_FIELD_OFFSET(RCC, BDCR, RTCSEL))    /*!< Mask  0x00000008 */

#define RCC_BDCR_LSECSSD_OFFSET   (6U)
#define RCC_BDCR_LSECSSD_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, LSECSSD))   /*!< Mask  0x00000006 */

#define RCC_BDCR_LSECSSON_OFFSET  (5U)
#define RCC_BDCR_LSECSSON_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, LSECSSON))  /*!< Mask  0x00000005 */

#define RCC_BDCR_LSEDRV_OFFSET    (3U)
#define RCC_BDCR_LSEDRV_MASK      (0x3UL << REGISTER_FIELD_OFFSET(RCC, BDCR, LSEDRV))    /*!< Mask  0x00000018 */

#define RCC_BDCR_LSEBYP_OFFSET    (2U)
#define RCC_BDCR_LSEBYP_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, LSEBYP))    /*!< Mask  0x00000002 */

#define RCC_BDCR_LSERDY_OFFSET    (1U)
#define RCC_BDCR_LSERDY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, LSERDY))    /*!< Mask  0x00000001 */

#define RCC_BDCR_LSEON_OFFSET     (0U)
#define RCC_BDCR_LSEON_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, BDCR, LSEON))     /*!< Mask  0x00000000 */

// Values of software reset
#define RCC_BCKDSW_NORST   (0x0UL)  /*!< Value 0x00000001 */
#define RCC_BCKDSW_RSTVSW  (0x1UL)  /*!< Value 0x00000001 */

// Values of real time clock (RTC) enable bit
#define RCC_RTC_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_RTC_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of real time clock (RTC) source
#define RCC_RTCSRC_NOCLK  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_RTCSRC_LSE    (0x1UL)  /*!< Value 0x00000001 */
#define RCC_RTCSRC_LSI    (0x2UL)  /*!< Value 0x00000002 */
#define RCC_RTCSRC_HSE    (0x3UL)  /*!< Value 0x00000003 */

// Values of low speed external (LSE) RC oscillator clock security system security bit
#define RCC_LSECLKSECSYSFAILDET_SUCCESS  (0x0UL)  /*!< Value 0x00000001 */
#define RCC_LSECLKSECSYSFAILDET_FAILURE  (0x1UL)  /*!< Value 0x00000001 */

// Values of low speed external (LSE) RC oscillator clock security system enable bit
#define RCC_LSECLKSECSYS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSECLKSECSYS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of low speed external (LSE) RC oscillator driving capability
#define RCC_LSEOSCDRV_LOW         (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSEOSCDRV_MEDIUMLOW   (0x1UL)  /*!< Value 0x00000001 */
#define RCC_LSEOSCDRV_MEDIUMHIGH  (0x2UL)  /*!< Value 0x00000002 */
#define RCC_LSEOSCDRV_HIGH        (0x3UL)  /*!< Value 0x00000003 */

// Values of low speed external (LSE) RC oscillator bypass bit
#define RCC_LSEBYPASS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSEBYPASS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of low speed external (LSE) RC oscillator ready bit
#define RCC_LSE_NOTREADY  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSE_READY     (0x1UL)  /*!< Value 0x00000001 */

// Values of low speed external (LSE) RC oscillator enable bit
#define RCC_LSE_OFF  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSE_ON   (0x1UL)  /*!< Value 0x00000001 */

/*!< Clock control and status register */
#define RCC_CSR_LSIRDY_OFFSET  (1U)
#define RCC_CSR_LSIRDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, CSR, LSIRDY))  /*!< Mask  0x00000001 */

#define RCC_CSR_LSION_OFFSET   (0U)
#define RCC_CSR_LSION_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, CSR, LSION))   /*!< Mask  0x00000000 */

// Values of low speed internal (LSI) RC oscillator ready bit
#define RCC_LSI_NOTREADY  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSI_READY     (0x1UL)  /*!< Value 0x00000001 */

// Values of low speed internal (LSI) RC oscillator enable bit
#define RCC_LSI_OFF  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_LSI_ON   (0x1UL)  /*!< Value 0x00000001 */

/*!< AHB3 reset register */
#define RCC_AHB3RSTR_SDMMC1RST_OFFSET  (16U)
#define RCC_AHB3RSTR_SDMMC1RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RSTR, SDMMC1RST))  /*!< Mask  0x00010000 */

#define RCC_AHB3RSTR_QSPIRST_OFFSET    (14U)
#define RCC_AHB3RSTR_QSPIRST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RSTR, QSPIRST))    /*!< Mask  0x00004000 */

#define RCC_AHB3RSTR_FMCRST_OFFSET     (12U)
#define RCC_AHB3RSTR_FMCRST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RSTR, FMCRST))     /*!< Mask  0x00001000 */

#define RCC_AHB3RSTR_JPGDECRST_OFFSET  (5U)
#define RCC_AHB3RSTR_JPGDECRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RSTR, JPGDECRST))  /*!< Mask  0x00000020 */

#define RCC_AHB3RSTR_DMA2DRST_OFFSET   (4U)
#define RCC_AHB3RSTR_DMA2DRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RSTR, DMA2DRST))   /*!< Mask  0x00000010 */

#define RCC_AHB3RSTR_MDMARST_OFFSET    (0U)
#define RCC_AHB3RSTR_MDMARST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3RSTR, MDMARST))    /*!< Mask  0x00000001 */

/*!< AHB1 reset register */
#define RCC_AHB1RSTR_USB2OTGRST_OFFSET  (27U)
#define RCC_AHB1RSTR_USB2OTGRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, USB2OTGRST))  /*!< Mask  0x08000000 */

#define RCC_AHB1RSTR_USB1OTGRST_OFFSET  (25U)
#define RCC_AHB1RSTR_USB1OTGRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, USB1OTGRST))  /*!< Mask  0x02000000 */

#define RCC_AHB1RSTR_ETH1MACRST_OFFSET  (15U)
#define RCC_AHB1RSTR_ETH1MACRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, ETH1MACRST))  /*!< Mask  0x00008000 */

#define RCC_AHB1RSTR_ARTRST_OFFSET      (14U)
#define RCC_AHB1RSTR_ARTRST_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, ARTRST))      /*!< Mask  0x00004000 */

#define RCC_AHB1RSTR_ADC12RST_OFFSET    (5U)
#define RCC_AHB1RSTR_ADC12RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, ADC12RST))    /*!< Mask  0x00000020 */

#define RCC_AHB1RSTR_DMA2RST_OFFSET     (1U)
#define RCC_AHB1RSTR_DMA2RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, DMA2RST))     /*!< Mask  0x00000002 */

#define RCC_AHB1RSTR_DMA1RST_OFFSET     (0U)
#define RCC_AHB1RSTR_DMA1RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1RSTR, DMA1RST))     /*!< Mask  0x00000001 */

/*!< AHB2 reset register */
#define RCC_AHB2RSTR_SDMMC2RST_OFFSET  (9U)
#define RCC_AHB2RSTR_SDMMC2RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RSTR, SDMMC2RST))  /*!< Mask  0x00000200 */

#define RCC_AHB2RSTR_RNGRST_OFFSET     (6U)
#define RCC_AHB2RSTR_RNGRST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RSTR, RNGRST))     /*!< Mask  0x02000040 */

#define RCC_AHB2RSTR_HASHRST_OFFSET    (5U)
#define RCC_AHB2RSTR_HASHRST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RSTR, HASHRST))    /*!< Mask  0x00000020 */

#define RCC_AHB2RSTR_CRYPTRST_OFFSET   (4U)
#define RCC_AHB2RSTR_CRYPTRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RSTR, CRYPTRST))   /*!< Mask  0x00000010 */

#define RCC_AHB2RSTR_CAMITFRST_OFFSET  (0U)
#define RCC_AHB2RSTR_CAMITFRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2RSTR, CAMITFRST))  /*!< Mask  0x00000001 */

/*!< AHB4 reset register */
#define RCC_AHB4RSTR_HSEMRST_OFFSET   (25U)
#define RCC_AHB4RSTR_HSEMRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, HSEMRST))   /*!< Mask  0x02000000 */

#define RCC_AHB4RSTR_ADC3RST_OFFSET   (24U)
#define RCC_AHB4RSTR_ADC3RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, ADC3RST))   /*!< Mask  0x01000000 */

#define RCC_AHB4RSTR_BDMARST_OFFSET   (21U)
#define RCC_AHB4RSTR_BDMARST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, BDMARST))   /*!< Mask  0x00200000 */

#define RCC_AHB4RSTR_CRCRST_OFFSET    (19U)
#define RCC_AHB4RSTR_CRCRST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, CRCRST))    /*!< Mask  0x00080000 */

#define RCC_AHB4RSTR_GPIOKRST_OFFSET  (10U)
#define RCC_AHB4RSTR_GPIOKRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOKRST))  /*!< Mask  0x00000400 */

#define RCC_AHB4RSTR_GPIOJRST_OFFSET  (9U)
#define RCC_AHB4RSTR_GPIOJRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOJRST))  /*!< Mask  0x00000200 */

#define RCC_AHB4RSTR_GPIOIRST_OFFSET  (8U)
#define RCC_AHB4RSTR_GPIOIRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOIRST))  /*!< Mask  0x00000100 */

#define RCC_AHB4RSTR_GPIOHRST_OFFSET  (7U)
#define RCC_AHB4RSTR_GPIOHRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOHRST))  /*!< Mask  0x00000080 */

#define RCC_AHB4RSTR_GPIOGRST_OFFSET  (6U)
#define RCC_AHB4RSTR_GPIOGRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOGRST))  /*!< Mask  0x00000040 */

#define RCC_AHB4RSTR_GPIOFRST_OFFSET  (5U)
#define RCC_AHB4RSTR_GPIOFRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOFRST))  /*!< Mask  0x00000020 */

#define RCC_AHB4RSTR_GPIOERST_OFFSET  (4U)
#define RCC_AHB4RSTR_GPIOERST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOERST))  /*!< Mask  0x00000010 */

#define RCC_AHB4RSTR_GPIODRST_OFFSET  (3U)
#define RCC_AHB4RSTR_GPIODRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIODRST))  /*!< Mask  0x00000008 */

#define RCC_AHB4RSTR_GPIOCRST_OFFSET  (2U)
#define RCC_AHB4RSTR_GPIOCRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOCRST))  /*!< Mask  0x00000004 */

#define RCC_AHB4RSTR_GPIOBRST_OFFSET  (1U)
#define RCC_AHB4RSTR_GPIOBRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOBRST))  /*!< Mask  0x00000002 */

#define RCC_AHB4RSTR_GPIOARST_OFFSET  (0U)
#define RCC_AHB4RSTR_GPIOARST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4RSTR, GPIOARST))  /*!< Mask  0x00000001 */

/*!< APB3 reset register */
#define RCC_APB3RSTR_DSIRST_OFFSET   (4U)
#define RCC_APB3RSTR_DSIRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3RSTR, DSIRST))   /*!< Mask  0x00000010 */

#define RCC_APB3RSTR_LTDCRST_OFFSET  (3U)
#define RCC_APB3RSTR_LTDCRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3RSTR, LTDCRST))  /*!< Mask  0x00000001 */

/*!< APB1 reset low register */
#define RCC_APB1LRSTR_UART8RST_OFFSET    (31U)
#define RCC_APB1LRSTR_UART8RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, UART8RST))    /*!< Mask  0x80000000 */

#define RCC_APB1LRSTR_UART7RST_OFFSET    (30U)
#define RCC_APB1LRSTR_UART7RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, UART7RST))    /*!< Mask  0x40000000 */

#define RCC_APB1LRSTR_DAC12RST_OFFSET    (29U)
#define RCC_APB1LRSTR_DAC12RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, DAC12RST))    /*!< Mask  0x20000000 */

#define RCC_APB1LRSTR_CECRST_OFFSET      (27U)
#define RCC_APB1LRSTR_CECRST_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, CECRST))      /*!< Mask  0x08000000 */

#define RCC_APB1LRSTR_I2C3RST_OFFSET     (23U)
#define RCC_APB1LRSTR_I2C3RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, I2C3RST))     /*!< Mask  0x00800000 */

#define RCC_APB1LRSTR_I2C2RST_OFFSET     (22U)
#define RCC_APB1LRSTR_I2C2RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, I2C2RST))     /*!< Mask  0x00400000 */

#define RCC_APB1LRSTR_I2C1RST_OFFSET     (21U)
#define RCC_APB1LRSTR_I2C1RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, I2C1RST))     /*!< Mask  0x00200000 */

#define RCC_APB1LRSTR_UART5RST_OFFSET    (20U)
#define RCC_APB1LRSTR_UART5RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, UART5RST))    /*!< Mask  0x00100000 */

#define RCC_APB1LRSTR_UART4RST_OFFSET    (19U)
#define RCC_APB1LRSTR_UART4RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, UART4RST))    /*!< Mask  0x00080000 */

#define RCC_APB1LRSTR_USART3RST_OFFSET   (18U)
#define RCC_APB1LRSTR_USART3RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, USART3RST))   /*!< Mask  0x00040000 */

#define RCC_APB1LRSTR_USART2RST_OFFSET   (17U)
#define RCC_APB1LRSTR_USART2RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, USART2RST))   /*!< Mask  0x00020000 */

#define RCC_APB1LRSTR_SPDIFRXRST_OFFSET  (16U)
#define RCC_APB1LRSTR_SPDIFRXRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, SPDIFRXRST))  /*!< Mask  0x00010000 */

#define RCC_APB1LRSTR_SPI3RST_OFFSET     (15U)
#define RCC_APB1LRSTR_SPI3RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, SPI3RST))     /*!< Mask  0x00008000 */

#define RCC_APB1LRSTR_SPI2RST_OFFSET     (14U)
#define RCC_APB1LRSTR_SPI2RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, SPI2RST))     /*!< Mask  0x00004000 */

#define RCC_APB1LRSTR_LPTIM1RST_OFFSET   (9U)
#define RCC_APB1LRSTR_LPTIM1RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, LPTIM1RST))   /*!< Mask  0x00000200 */

#define RCC_APB1LRSTR_TIM14RST_OFFSET    (8U)
#define RCC_APB1LRSTR_TIM14RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM14RST))    /*!< Mask  0x00000100 */

#define RCC_APB1LRSTR_TIM13RST_OFFSET    (7U)
#define RCC_APB1LRSTR_TIM13RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM13RST))    /*!< Mask  0x00000080 */

#define RCC_APB1LRSTR_TIM12RST_OFFSET    (6U)
#define RCC_APB1LRSTR_TIM12RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM12RST))    /*!< Mask  0x00000040 */

#define RCC_APB1LRSTR_TIM7RST_OFFSET     (5U)
#define RCC_APB1LRSTR_TIM7RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM7RST))     /*!< Mask  0x00000020 */

#define RCC_APB1LRSTR_TIM6RST_OFFSET     (4U)
#define RCC_APB1LRSTR_TIM6RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM6RST))     /*!< Mask  0x00000010 */

#define RCC_APB1LRSTR_TIM5RST_OFFSET     (3U)
#define RCC_APB1LRSTR_TIM5RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM5RST))     /*!< Mask  0x00000008 */

#define RCC_APB1LRSTR_TIM4RST_OFFSET     (2U)
#define RCC_APB1LRSTR_TIM4RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM4RST))     /*!< Mask  0x00000004 */

#define RCC_APB1LRSTR_TIM3RST_OFFSET     (1U)
#define RCC_APB1LRSTR_TIM3RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM3RST))     /*!< Mask  0x00000002 */

#define RCC_APB1LRSTR_TIM2RST_OFFSET     (0U)
#define RCC_APB1LRSTR_TIM2RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LRSTR, TIM2RST))     /*!< Mask  0x00000001 */

/*!< APB1 reset high register */
#define RCC_APB1HRSTR_FDCANRST_OFFSET  (8U)
#define RCC_APB1HRSTR_FDCANRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRSTR, FDCANRST))  /*!< Mask  0x00000100 */

#define RCC_APB1HRSTR_MDIOSRST_OFFSET  (5U)
#define RCC_APB1HRSTR_MDIOSRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRSTR, MDIOSRST))  /*!< Mask  0x00000020 */

#define RCC_APB1HRSTR_OPAMPRST_OFFSET  (4U)
#define RCC_APB1HRSTR_OPAMPRST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRSTR, OPAMPRST))  /*!< Mask  0x00000010 */

#define RCC_APB1HRSTR_SWPRST_OFFSET    (2U)
#define RCC_APB1HRSTR_SWPRST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRSTR, SWPRST))    /*!< Mask  0x00000004 */

#define RCC_APB1HRSTR_CRSRST_OFFSET    (1U)
#define RCC_APB1HRSTR_CRSRST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HRSTR, CRSRST))    /*!< Mask  0x00000002 */

/*!< APB2 reset register */
#define RCC_APB2RSTR_HRTIMRST_OFFSET   (29U)
#define RCC_APB2RSTR_HRTIMRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, HRTIMRST))   /*!< Mask  0x20000000 */

#define RCC_APB2RSTR_DFSDM1RST_OFFSET  (28U)
#define RCC_APB2RSTR_DFSDM1RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, DFSDM1RST))  /*!< Mask  0x10000000 */

#define RCC_APB2RSTR_SAI3RST_OFFSET    (24U)
#define RCC_APB2RSTR_SAI3RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, SAI3RST))    /*!< Mask  0x01000000 */

#define RCC_APB2RSTR_SAI2RST_OFFSET    (23U)
#define RCC_APB2RSTR_SAI2RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, SAI2RST))    /*!< Mask  0x00800000 */

#define RCC_APB2RSTR_SAI1RST_OFFSET    (22U)
#define RCC_APB2RSTR_SAI1RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, SAI1RST))    /*!< Mask  0x00400000 */

#define RCC_APB2RSTR_SPI5RST_OFFSET    (20U)
#define RCC_APB2RSTR_SPI5RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, SPI5RST))    /*!< Mask  0x00100000 */

#define RCC_APB2RSTR_TIM17RST_OFFSET   (18U)
#define RCC_APB2RSTR_TIM17RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, TIM17RST))   /*!< Mask  0x00040000 */

#define RCC_APB2RSTR_TIM16RST_OFFSET   (17U)
#define RCC_APB2RSTR_TIM16RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, TIM16RST))   /*!< Mask  0x00020000 */

#define RCC_APB2RSTR_TIM15RST_OFFSET   (16U)
#define RCC_APB2RSTR_TIM15RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, TIM15RST))   /*!< Mask  0x00010000 */

#define RCC_APB2RSTR_SPI4RST_OFFSET    (13U)
#define RCC_APB2RSTR_SPI4RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, SPI4RST))    /*!< Mask  0x00002000 */

#define RCC_APB2RSTR_SPI1RST_OFFSET    (12U)
#define RCC_APB2RSTR_SPI1RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, SPI1RST))    /*!< Mask  0x00002000 */

#define RCC_APB2RSTR_USART6RST_OFFSET  (5U)
#define RCC_APB2RSTR_USART6RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, USART6RST))  /*!< Mask  0x00000020 */

#define RCC_APB2RSTR_USART1RST_OFFSET  (4U)
#define RCC_APB2RSTR_USART1RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, USART1RST))  /*!< Mask  0x00000010 */

#define RCC_APB2RSTR_TIM8RST_OFFSET    (1U)
#define RCC_APB2RSTR_TIM8RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, TIM8RST))    /*!< Mask  0x00000002 */

#define RCC_APB2RSTR_TIM1RST_OFFSET    (0U)
#define RCC_APB2RSTR_TIM1RST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2RSTR, TIM1RST))    /*!< Mask  0x00000001 */

/*!< APB4 reset register */
#define RCC_APB4RSTR_SAI4RST_OFFSET     (21U)
#define RCC_APB4RSTR_SAI4RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, SAI4RST))      /*!< Mask  0x00200000 */

#define RCC_APB4RSTR_VREFRST_OFFSET     (15U)
#define RCC_APB4RSTR_VREFRST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, VREFRST))      /*!< Mask  0x00008000 */

#define RCC_APB4RSTR_COMP12RST_OFFSET   (14U)
#define RCC_APB4RSTR_COMP12RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, COMP12RST))    /*!< Mask  0x00004000 */

#define RCC_APB4RSTR_LPTIM5RST_OFFSET   (12U)
#define RCC_APB4RSTR_LPTIM5RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, LPTIM5RST))  /*!< Mask  0x00001000 */

#define RCC_APB4RSTR_LPTIM4RST_OFFSET   (11U)
#define RCC_APB4RSTR_LPTIM4RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, LPTIM4RST))  /*!< Mask  0x00000800 */

#define RCC_APB4RSTR_LPTIM3RST_OFFSET   (10U)
#define RCC_APB4RSTR_LPTIM3RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, LPTIM3RST))  /*!< Mask  0x00000400 */

#define RCC_APB4RSTR_LPTIM2RST_OFFSET   (9U)
#define RCC_APB4RSTR_LPTIM2RST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, LPTIM2RST))  /*!< Mask  0x00000200 */

#define RCC_APB4RSTR_I2C4RST_OFFSET     (7U)
#define RCC_APB4RSTR_I2C4RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, I2C4RST))      /*!< Mask  0x00000080 */

#define RCC_APB4RSTR_SPI6RST_OFFSET     (5U)
#define RCC_APB4RSTR_SPI6RST_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, SPI6RST))      /*!< Mask  0x00000020 */

#define RCC_APB4RSTR_LPUART1RST_OFFSET  (3U)
#define RCC_APB4RSTR_LPUART1RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, LPUART1RST))   /*!< Mask  0x00000008 */

#define RCC_APB4RSTR_SYSCFGRST_OFFSET   (1U)
#define RCC_APB4RSTR_SYSCFGRST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4RSTR, SYSCFGRST))    /*!< Mask  0x00000002 */

// Values of reset register of peripherals
#define RCC_PERIPHERALRST_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PERIPHERALRST_SET    (0x1UL)  /*!< Value 0x00000001 */

/*!< Global control register */
#define RCC_GCR_BOOT_C2_OFFSET  (3U)
#define RCC_GCR_BOOT_C2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, GCR, BOOT_C2))  /*!< Mask  0x00000008 */

#define RCC_GCR_BOOT_C1_OFFSET  (2U)
#define RCC_GCR_BOOT_C1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, GCR, BOOT_C1))  /*!< Mask  0x00000004 */

#define RCC_GCR_WW2RSC_OFFSET   (1U)
#define RCC_GCR_WW2RSC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, GCR, WW2RSC))   /*!< Mask  0x00000002 */

#define RCC_GCR_WW1RSC_OFFSET   (0U)
#define RCC_GCR_WW1RSC_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, GCR, WW1RSC))   /*!< Mask  0x00000001 */

// Values of reset register of peripherals
#define RCC_BOOTCPU_OPTBYTE        (0x0UL)  /*!< Value 0x00000000 */
#define RCC_BOOTCPU_INDEPENDENT    (0x1UL)  /*!< Value 0x00000001 */

// Values of system watchdog reset scope
#define RCC_WINWATCHDOGRSTSCOPE_CPURST   (0x1UL)  /*!< Value 0x00000001 */
#define RCC_WINWATCHDOGRSTSCOPE_SYSRST   (0x1UL)  /*!< Value 0x00000001 */

/*!< Domain 3 autonomous mode register */
#define RCC_D3AMR_SRAM4AMEN_OFFSET    (29U)
#define RCC_D3AMR_SRAM4AMEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, SRAM4AMEN))    /*!< Mask  0x20000000 */

#define RCC_D3AMR_BKPRAMAMEN_OFFSET   (28U)
#define RCC_D3AMR_BKPRAMAMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, BKPRAMAMEN))   /*!< Mask  0x10000000 */

#define RCC_D3AMR_ADC3AMEN_OFFSET     (24U)
#define RCC_D3AMR_ADC3AMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, ADC3AMEN))     /*!< Mask  0x01000000 */

#define RCC_D3AMR_SAI4AMEN_OFFSET     (21U)
#define RCC_D3AMR_SAI4AMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, SAI4AMEN))     /*!< Mask  0x00200000 */

#define RCC_D3AMR_CRCAMEN_OFFSET      (19U)
#define RCC_D3AMR_CRCAMEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, CRCAMEN))      /*!< Mask  0x00080000 */

#define RCC_D3AMR_RTCAMEN_OFFSET      (16U)
#define RCC_D3AMR_RTCAMEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, RTCAMEN))      /*!< Mask  0x00010000 */

#define RCC_D3AMR_VREFAMEN_OFFSET     (15U)
#define RCC_D3AMR_VREFAMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, VREFAMEN))     /*!< Mask  0x00008000 */

#define RCC_D3AMR_COMP12AMEN_OFFSET   (14U)
#define RCC_D3AMR_COMP12AMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, COMP12AMEN))   /*!< Mask  0x00004000 */

#define RCC_D3AMR_LPTIM5AMEN_OFFSET   (12U)
#define RCC_D3AMR_LPTIM5AMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, LPTIM5AMEN))   /*!< Mask  0x00001000 */

#define RCC_D3AMR_LPTIM4AMEN_OFFSET   (11U)
#define RCC_D3AMR_LPTIM4AMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, LPTIM4AMEN))   /*!< Mask  0x00000800 */

#define RCC_D3AMR_LPTIM3AMEN_OFFSET   (10U)
#define RCC_D3AMR_LPTIM3AMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, LPTIM3AMEN))   /*!< Mask  0x00000400 */

#define RCC_D3AMR_LPTIM2AMEN_OFFSET   (9U)
#define RCC_D3AMR_LPTIM2AMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, LPTIM2AMEN))   /*!< Mask  0x00000200 */

#define RCC_D3AMR_I2C4AMEN_OFFSET     (7U)
#define RCC_D3AMR_I2C4AMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, I2C4AMEN))     /*!< Mask  0x00000080 */

#define RCC_D3AMR_SPI6AMEN_OFFSET     (5U)
#define RCC_D3AMR_SPI6AMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, SPI6AMEN))     /*!< Mask  0x00000020 */

#define RCC_D3AMR_LPUART1AMEN_OFFSET  (3U)
#define RCC_D3AMR_LPUART1AMEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, LPUART1AMEN))  /*!< Mask  0x00000008 */

#define RCC_D3AMR_BDMAAMEN_OFFSET     (0U)
#define RCC_D3AMR_BDMAAMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, D3AMR, BDMAAMEN))     /*!< Mask  0x00000001 */

// Values of autonomous mode enable bit
#define RCC_AUTOMODE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_AUTOMODE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Reset status register */
#define RCC_RSR_LPWR2RSTF_OFFSET  (31U)
#define RCC_RSR_LPWR2RSTF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, LPWR2RSTF))  /*!< Mask  0x80000000 */

#define RCC_RSR_LPWR1RSTF_OFFSET  (30U)
#define RCC_RSR_LPWR1RSTF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, LPWR1RSTF))  /*!< Mask  0x40000000 */

#define RCC_RSR_WWDG2RSTF_OFFSET  (29U)
#define RCC_RSR_WWDG2RSTF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, WWDG2RSTF))  /*!< Mask  0x20000000 */

#define RCC_RSR_WWDG1RSTF_OFFSET  (28U)
#define RCC_RSR_WWDG1RSTF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, WWDG1RSTF))  /*!< Mask  0x10000000 */

#define RCC_RSR_IWDG2RSTF_OFFSET  (27U)
#define RCC_RSR_IWDG2RSTF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, IWDG2RSTF))  /*!< Mask  0x08000000 */

#define RCC_RSR_IWDG1RSTF_OFFSET  (26U)
#define RCC_RSR_IWDG1RSTF_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, IWDG1RSTF))  /*!< Mask  0x04000000 */

#define RCC_RSR_SFT2RSTF_OFFSET   (25U)
#define RCC_RSR_SFT2RSTF_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, SFT2RSTF))   /*!< Mask  0x02000000 */

#define RCC_RSR_SFT1RSTF_OFFSET   (24U)
#define RCC_RSR_SFT1RSTF_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, SFT1RSTF))   /*!< Mask  0x01000000 */

#define RCC_RSR_PORRSTF_OFFSET    (23U)
#define RCC_RSR_PORRSTF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, PORRSTF))    /*!< Mask  0x00800000 */

#define RCC_RSR_PINRSTF_OFFSET    (22U)
#define RCC_RSR_PINRSTF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, PINRSTF))    /*!< Mask  0x00400000 */

#define RCC_RSR_BORRSTF_OFFSET    (21U)
#define RCC_RSR_BORRSTF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, BORRSTF))    /*!< Mask  0x00200000 */

#define RCC_RSR_D2RSTF_OFFSET     (20U)
#define RCC_RSR_D2RSTF_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, D2RSTF))     /*!< Mask  0x00100000 */

#define RCC_RSR_D1RSTF_OFFSET     (19U)
#define RCC_RSR_D1RSTF_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, D1RSTF))     /*!< Mask  0x00080000 */

#define RCC_RSR_C2RSTF_OFFSET     (18U)
#define RCC_RSR_C2RSTF_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, C2RSTF))     /*!< Mask  0x00040000 */

#define RCC_RSR_C1RSTF_OFFSET     (17U)
#define RCC_RSR_C1RSTF_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, C1RSTF))     /*!< Mask  0x00020000 */

#define RCC_RSR_RMVF_OFFSET       (16U)
#define RCC_RSR_RMVF_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, RSR, RMVF))       /*!< Mask  0x00010000 */

// Values of reset status bit
#define RCC_RSTSTATUS_ILLEGAL  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_RSTSTATUS_VALID    (0x1UL)  /*!< Value 0x00000001 */

/*!< AHB3 clock register */
#define RCC_AHB3ENR_AXISRAMEN_OFFSET     (31U)
#define RCC_AHB3ENR_AXISRAMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, AXISRAMEN))    /*!< Mask  0x80000000 */

#define RCC_AHB3ENR_ITCM1EN_OFFSET       (30U)
#define RCC_AHB3ENR_ITCM1EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, ITCM1EN))      /*!< Mask  0x40000000 */

#define RCC_AHB3ENR_DTCM2EN_OFFSET       (29U)
#define RCC_AHB3ENR_DTCM2EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, DTCM2EN))      /*!< Mask  0x20000000 */

#define RCC_AHB3ENR_DTCM1EN_OFFSET       (28U)
#define RCC_AHB3ENR_DTCM1EN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, DTCM1EN))      /*!< Mask  0x10000000 */

#define RCC_AHB3ENR_SDMMC1EN_OFFSET      (16U)
#define RCC_AHB3ENR_SDMMC1EN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, SDMMC1EN))     /*!< Mask  0x00010000 */

#define RCC_AHB3ENR_QSPIEN_OFFSET        (14U)
#define RCC_AHB3ENR_QSPIEN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, QSPIEN))       /*!< Mask  0x00004000 */

#define RCC_AHB3ENR_FMCEN_OFFSET         (12U)
#define RCC_AHB3ENR_FMCEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, FMCEN))        /*!< Mask  0x00001000 */

#define RCC_AHB3ENR_FLITFEN_OFFSET   (8U)
#define RCC_AHB3ENR_FLITFEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, FLITFEN))  /*!< Mask  0x00000100 */

#define RCC_AHB3ENR_JPGDECEN_OFFSET      (5U)
#define RCC_AHB3ENR_JPGDECEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, JPGDECEN))     /*!< Mask  0x00000020 */

#define RCC_AHB3ENR_DMA2DEN_OFFSET       (4U)
#define RCC_AHB3ENR_DMA2DEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, DMA2DEN))      /*!< Mask  0x00000010 */

#define RCC_AHB3ENR_MDMAEN_OFFSET        (0U)
#define RCC_AHB3ENR_MDMAEN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3ENR, MDMAEN))       /*!< Mask  0x00000001 */

/*!< AHB1 clock register */
#define RCC_AHB1ENR_USB2OTGHEN_OFFSET   (27U)
#define RCC_AHB1ENR_USB2OTGHEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, USB2OTGHEN))  /*!< Mask  0x08000000 */

#define RCC_AHB1ENR_USB1OTGHSULPIEN_OFFSET   (26U)
#define RCC_AHB1ENR_USB1OTGHSULPIEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, USB1OTGHSULPIEN))  /*!< Mask  0x04000000 */

#define RCC_AHB1ENR_USB1OTGHEN_OFFSET   (25U)
#define RCC_AHB1ENR_USB1OTGHEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, USB1OTGHEN))  /*!< Mask  0x02000000 */

#define RCC_AHB1ENR_USB2OTGHSULPIEN_OFFSET   (18U)
#define RCC_AHB1ENR_USB2OTGHSULPIEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, USB2OTGHSULPIEN))  /*!< Mask  0x00040000 */

#define RCC_AHB1ENR_ETH1RXEN_OFFSET    (17U)
#define RCC_AHB1ENR_ETH1RXEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, ETH1RXEN))   /*!< Mask  0x00020000 */

#define RCC_AHB1ENR_ETH1TXEN_OFFSET    (16U)
#define RCC_AHB1ENR_ETH1TXEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, ETH1TXEN))   /*!< Mask  0x00010000 */

#define RCC_AHB1ENR_ETH1MACEN_OFFSET   (15U)
#define RCC_AHB1ENR_ETH1MACEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, ETH1MACEN))  /*!< Mask  0x00008000 */

#define RCC_AHB1ENR_ARTEN_OFFSET       (14U)
#define RCC_AHB1ENR_ARTEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, ARTEN))      /*!< Mask  0x00004000 */

#define RCC_AHB1ENR_ADC12EN_OFFSET     (5U)
#define RCC_AHB1ENR_ADC12EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, ADC12EN))    /*!< Mask  0x00000020 */

#define RCC_AHB1ENR_DMA2EN_OFFSET      (1U)
#define RCC_AHB1ENR_DMA2EN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, DMA2EN))     /*!< Mask  0x00000002 */

#define RCC_AHB1ENR_DMA1EN_OFFSET      (0U)
#define RCC_AHB1ENR_DMA1EN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1ENR, DMA1EN))     /*!< Mask  0x00000001 */

/*!< AHB2 clock register */
#define RCC_AHB2ENR_SRAM3EN_OFFSET    (31U)
#define RCC_AHB2ENR_SRAM3EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, SRAM3EN))   /*!< Mask  0x80000000 */

#define RCC_AHB2ENR_SRAM2EN_OFFSET    (30U)
#define RCC_AHB2ENR_SRAM2EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, SRAM2EN))   /*!< Mask  0x40000000 */

#define RCC_AHB2ENR_SRAM1EN_OFFSET    (29U)
#define RCC_AHB2ENR_SRAM1EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, SRAM1EN))   /*!< Mask  0x20000000 */

#define RCC_AHB2ENR_SDMMC2EN_OFFSET   (9U)
#define RCC_AHB2ENR_SDMMC2EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, SDMMC2EN))  /*!< Mask  0x00000200 */

#define RCC_AHB2ENR_RNGEN_OFFSET      (6U)
#define RCC_AHB2ENR_RNGEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, RNGEN))     /*!< Mask  0x00000040 */

#define RCC_AHB2ENR_HASHEN_OFFSET     (5U)
#define RCC_AHB2ENR_HASHEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, HASHEN))    /*!< Mask  0x00000020 */

#define RCC_AHB2ENR_CRYPTEN_OFFSET   (4U)
#define RCC_AHB2ENR_CRYPTEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, CRYPTEN))  /*!< Mask  0x00000010 */

#define RCC_AHB2ENR_DCMIEN_OFFSET     (0U)
#define RCC_AHB2ENR_DCMIEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2ENR, DCMIEN))    /*!< Mask  0x00000001 */

/*!< AHB4 clock register */
#define RCC_AHB4ENR_BKPRAMEN_OFFSET   (28U)
#define RCC_AHB4ENR_BKPRAMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, BKPRAMEN))  /*!< Mask  0x10000000 */

#define RCC_AHB4ENR_HSEMEN_OFFSET     (25U)
#define RCC_AHB4ENR_HSEMEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, HSEMEN))    /*!< Mask  0x02000000 */

#define RCC_AHB4ENR_ADC3EN_OFFSET     (24U)
#define RCC_AHB4ENR_ADC3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, ADC3EN))    /*!< Mask  0x01000000 */

#define RCC_AHB4ENR_BDMAEN_OFFSET     (21U)
#define RCC_AHB4ENR_BDMAEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, BDMAEN))    /*!< Mask  0x00200000 */

#define RCC_AHB4ENR_CRCEN_OFFSET      (19U)
#define RCC_AHB4ENR_CRCEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, CRCEN))     /*!< Mask  0x00080000 */

#define RCC_AHB4ENR_GPIOKEN_OFFSET    (10U)
#define RCC_AHB4ENR_GPIOKEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOKEN))   /*!< Mask  0x00000400 */

#define RCC_AHB4ENR_GPIOJEN_OFFSET    (9U)
#define RCC_AHB4ENR_GPIOJEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOJEN))   /*!< Mask  0x00000200 */

#define RCC_AHB4ENR_GPIOIEN_OFFSET    (8U)
#define RCC_AHB4ENR_GPIOIEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOIEN))   /*!< Mask  0x00000100 */

#define RCC_AHB4ENR_GPIOHEN_OFFSET    (7U)
#define RCC_AHB4ENR_GPIOHEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOHEN))   /*!< Mask  0x00000080 */

#define RCC_AHB4ENR_GPIOGEN_OFFSET    (6U)
#define RCC_AHB4ENR_GPIOGEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOGEN))   /*!< Mask  0x00000040 */

#define RCC_AHB4ENR_GPIOFEN_OFFSET    (5U)
#define RCC_AHB4ENR_GPIOFEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOFEN))   /*!< Mask  0x00000020 */

#define RCC_AHB4ENR_GPIOEEN_OFFSET    (4U)
#define RCC_AHB4ENR_GPIOEEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOEEN))   /*!< Mask  0x00000010 */

#define RCC_AHB4ENR_GPIODEN_OFFSET    (3U)
#define RCC_AHB4ENR_GPIODEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIODEN))   /*!< Mask  0x00000008 */

#define RCC_AHB4ENR_GPIOCEN_OFFSET    (2U)
#define RCC_AHB4ENR_GPIOCEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOCEN))   /*!< Mask  0x00000004 */

#define RCC_AHB4ENR_GPIOBEN_OFFSET    (1U)
#define RCC_AHB4ENR_GPIOBEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOBEN))   /*!< Mask  0x00000002 */

#define RCC_AHB4ENR_GPIOAEN_OFFSET    (0U)
#define RCC_AHB4ENR_GPIOAEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4ENR, GPIOAEN))   /*!< Mask  0x00000001 */

/*!< APB3 clock register */
#define RCC_APB3ENR_WWDG1EN_OFFSET  (6U)
#define RCC_APB3ENR_WWDG1EN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3ENR, WWDG1EN))  /*!< Mask  0x00000040 */

#define RCC_APB3ENR_DSIEN_OFFSET    (4U)
#define RCC_APB3ENR_DSIEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3ENR, DSIEN))    /*!< Mask  0x00000010 */

#define RCC_APB3ENR_LTDCEN_OFFSET   (3U)
#define RCC_APB3ENR_LTDCEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3ENR, LTDCEN))   /*!< Mask  0x00000001 */

/*!< APB1 clock low register */
#define RCC_APB1LENR_UART8EN_OFFSET    (31U)
#define RCC_APB1LENR_UART8EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, UART8EN))    /*!< Mask  0x80000000 */

#define RCC_APB1LENR_UART7EN_OFFSET    (30U)
#define RCC_APB1LENR_UART7EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, UART7EN))    /*!< Mask  0x40000000 */

#define RCC_APB1LENR_DAC12EN_OFFSET    (29U)
#define RCC_APB1LENR_DAC12EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, DAC12EN))    /*!< Mask  0x20000000 */

#define RCC_APB1LENR_CECEN_OFFSET      (27U)
#define RCC_APB1LENR_CECEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, CECEN))      /*!< Mask  0x08000000 */

#define RCC_APB1LENR_I2C3EN_OFFSET     (23U)
#define RCC_APB1LENR_I2C3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, I2C3EN))     /*!< Mask  0x00800000 */

#define RCC_APB1LENR_I2C2EN_OFFSET     (22U)
#define RCC_APB1LENR_I2C2EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, I2C2EN))     /*!< Mask  0x00400000 */

#define RCC_APB1LENR_I2C1EN_OFFSET     (21U)
#define RCC_APB1LENR_I2C1EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, I2C1EN))     /*!< Mask  0x00200000 */

#define RCC_APB1LENR_UART5EN_OFFSET    (20U)
#define RCC_APB1LENR_UART5EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, UART5EN))    /*!< Mask  0x00100000 */

#define RCC_APB1LENR_UART4EN_OFFSET    (19U)
#define RCC_APB1LENR_UART4EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, UART4EN))    /*!< Mask  0x00080000 */

#define RCC_APB1LENR_USART3EN_OFFSET   (18U)
#define RCC_APB1LENR_USART3EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, USART3EN))   /*!< Mask  0x00040000 */

#define RCC_APB1LENR_USART2EN_OFFSET   (17U)
#define RCC_APB1LENR_USART2EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, USART2EN))   /*!< Mask  0x00020000 */

#define RCC_APB1LENR_SPDIFRXEN_OFFSET  (16U)
#define RCC_APB1LENR_SPDIFRXEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, SPDIFRXEN))  /*!< Mask  0x00010000 */

#define RCC_APB1LENR_SPI3EN_OFFSET     (15U)
#define RCC_APB1LENR_SPI3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, SPI3EN))     /*!< Mask  0x00008000 */

#define RCC_APB1LENR_SPI2EN_OFFSET     (14U)
#define RCC_APB1LENR_SPI2EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, SPI2EN))     /*!< Mask  0x00004000 */

#define RCC_APB1LENR_WWDG2EN_OFFSET    (11U)
#define RCC_APB1LENR_WWDG2EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, WWDG2EN))    /*!< Mask  0x00000800 */

#define RCC_APB1LENR_LPTIM1EN_OFFSET   (9U)
#define RCC_APB1LENR_LPTIM1EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, LPTIM1EN))   /*!< Mask  0x00000200 */

#define RCC_APB1LENR_TIM14EN_OFFSET    (8U)
#define RCC_APB1LENR_TIM14EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM14EN))    /*!< Mask  0x00000100 */

#define RCC_APB1LENR_TIM13EN_OFFSET    (7U)
#define RCC_APB1LENR_TIM13EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM13EN))    /*!< Mask  0x00000080 */

#define RCC_APB1LENR_TIM12EN_OFFSET    (6U)
#define RCC_APB1LENR_TIM12EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM12EN))    /*!< Mask  0x00000040 */

#define RCC_APB1LENR_TIM7EN_OFFSET     (5U)
#define RCC_APB1LENR_TIM7EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM7EN))     /*!< Mask  0x00000020 */

#define RCC_APB1LENR_TIM6EN_OFFSET     (4U)
#define RCC_APB1LENR_TIM6EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM6EN))     /*!< Mask  0x00000010 */

#define RCC_APB1LENR_TIM5EN_OFFSET     (3U)
#define RCC_APB1LENR_TIM5EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM5EN))     /*!< Mask  0x00000008 */

#define RCC_APB1LENR_TIM4EN_OFFSET     (2U)
#define RCC_APB1LENR_TIM4EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM4EN))     /*!< Mask  0x00000004 */

#define RCC_APB1LENR_TIM3EN_OFFSET     (1U)
#define RCC_APB1LENR_TIM3EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM3EN))     /*!< Mask  0x00000002 */

#define RCC_APB1LENR_TIM2EN_OFFSET     (0U)
#define RCC_APB1LENR_TIM2EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LENR, TIM2EN))     /*!< Mask  0x00000001 */

/*!< APB1 clock high register */
#define RCC_APB1HENR_FDCANEN_OFFSET  (8U)
#define RCC_APB1HENR_FDCANEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HENR, FDCANEN))  /*!< Mask  0x00000100 */

#define RCC_APB1HENR_MDIOSEN_OFFSET  (5U)
#define RCC_APB1HENR_MDIOSEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HENR, MDIOSEN))  /*!< Mask  0x00000020 */

#define RCC_APB1HENR_OPAMPEN_OFFSET  (4U)
#define RCC_APB1HENR_OPAMPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HENR, OPAMPEN))  /*!< Mask  0x00000010 */

#define RCC_APB1HENR_SWPEN_OFFSET    (2U)
#define RCC_APB1HENR_SWPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HENR, SWPEN))    /*!< Mask  0x00000004 */

#define RCC_APB1HENR_CRSEN_OFFSET    (1U)
#define RCC_APB1HENR_CRSEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HENR, CRSEN))    /*!< Mask  0x00000002 */

/*!< APB2 clock register */
#define RCC_APB2ENR_HRTIMEN_OFFSET   (29U)
#define RCC_APB2ENR_HRTIMEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, HRTIMEN))   /*!< Mask  0x20000000 */

#define RCC_APB2ENR_DFSDM1EN_OFFSET  (28U)
#define RCC_APB2ENR_DFSDM1EN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, DFSDM1EN))  /*!< Mask  0x10000000 */

#define RCC_APB2ENR_SAI3EN_OFFSET    (24U)
#define RCC_APB2ENR_SAI3EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, SAI3EN))    /*!< Mask  0x01000000 */

#define RCC_APB2ENR_SAI2EN_OFFSET    (23U)
#define RCC_APB2ENR_SAI2EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, SAI2EN))    /*!< Mask  0x00800000 */

#define RCC_APB2ENR_SAI1EN_OFFSET    (22U)
#define RCC_APB2ENR_SAI1EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, SAI1EN))    /*!< Mask  0x00400000 */

#define RCC_APB2ENR_SPI5EN_OFFSET    (20U)
#define RCC_APB2ENR_SPI5EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, SPI5EN))    /*!< Mask  0x00100000 */

#define RCC_APB2ENR_TIM17EN_OFFSET   (18U)
#define RCC_APB2ENR_TIM17EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, TIM17EN))   /*!< Mask  0x00040000 */

#define RCC_APB2ENR_TIM16EN_OFFSET   (17U)
#define RCC_APB2ENR_TIM16EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, TIM16EN))   /*!< Mask  0x00020000 */

#define RCC_APB2ENR_TIM15EN_OFFSET   (16U)
#define RCC_APB2ENR_TIM15EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, TIM15EN))   /*!< Mask  0x00010000 */

#define RCC_APB2ENR_SPI4EN_OFFSET    (13U)
#define RCC_APB2ENR_SPI4EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, SPI4EN))    /*!< Mask  0x00002000 */

#define RCC_APB2ENR_SPI1EN_OFFSET    (12U)
#define RCC_APB2ENR_SPI1EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, SPI1EN))    /*!< Mask  0x00002000 */

#define RCC_APB2ENR_USART6EN_OFFSET  (5U)
#define RCC_APB2ENR_USART6EN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, USART6EN))  /*!< Mask  0x00000020 */

#define RCC_APB2ENR_USART1EN_OFFSET  (4U)
#define RCC_APB2ENR_USART1EN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, USART1EN))  /*!< Mask  0x00000010 */

#define RCC_APB2ENR_TIM8EN_OFFSET    (1U)
#define RCC_APB2ENR_TIM8EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, TIM8EN))    /*!< Mask  0x00000002 */

#define RCC_APB2ENR_TIM1EN_OFFSET    (0U)
#define RCC_APB2ENR_TIM1EN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2ENR, TIM1EN))    /*!< Mask  0x00000001 */

/*!< APB4 clock register */
#define RCC_APB4ENR_SAI4EN_OFFSET     (21U)
#define RCC_APB4ENR_SAI4EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, SAI4EN))     /*!< Mask  0x00200000 */

#define RCC_APB4ENR_RTCAPBEN_OFFSET   (16U)
#define RCC_APB4ENR_RTCAPBEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, RTCAPBEN))   /*!< Mask  0x00010000 */

#define RCC_APB4ENR_VREFEN_OFFSET     (15U)
#define RCC_APB4ENR_VREFEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, VREFEN))     /*!< Mask  0x00008000 */

#define RCC_APB4ENR_COMP12EN_OFFSET   (14U)
#define RCC_APB4ENR_COMP12EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, COMP12EN))   /*!< Mask  0x00004000 */

#define RCC_APB4ENR_LPTIM5EN_OFFSET   (12U)
#define RCC_APB4ENR_LPTIM5EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, LPTIM5EN))   /*!< Mask  0x00001000 */

#define RCC_APB4ENR_LPTIM4EN_OFFSET   (11U)
#define RCC_APB4ENR_LPTIM4EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, LPTIM4EN))   /*!< Mask  0x00000800 */

#define RCC_APB4ENR_LPTIM3EN_OFFSET   (10U)
#define RCC_APB4ENR_LPTIM3EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, LPTIM3EN))   /*!< Mask  0x00000400 */

#define RCC_APB4ENR_LPTIM2EN_OFFSET   (9U)
#define RCC_APB4ENR_LPTIM2EN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, LPTIM2EN))   /*!< Mask  0x00000200 */

#define RCC_APB4ENR_I2C4EN_OFFSET     (7U)
#define RCC_APB4ENR_I2C4EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, I2C4EN))     /*!< Mask  0x00000080 */

#define RCC_APB4ENR_SPI6EN_OFFSET     (5U)
#define RCC_APB4ENR_SPI6EN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, SPI6EN))     /*!< Mask  0x00000020 */

#define RCC_APB4ENR_LPUART1EN_OFFSET  (3U)
#define RCC_APB4ENR_LPUART1EN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, LPUART1EN))  /*!< Mask  0x00000008 */

#define RCC_APB4ENR_SYSCFGEN_OFFSET   (1U)
#define RCC_APB4ENR_SYSCFGEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4ENR, SYSCFGEN))   /*!< Mask  0x00000002 */

/*!< AHB3 low power clock register */
#define RCC_AHB3LPENR_AXISRAMLPEN_OFFSET  (31U)
#define RCC_AHB3LPENR_AXISRAMLPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, AXISRAMLPEN))  /*!< Mask  0x80000000 */

#define RCC_AHB3LPENR_ITCMLPEN_OFFSET     (30U)
#define RCC_AHB3LPENR_ITCMLPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, ITCMLPEN))     /*!< Mask  0x40000000 */

#define RCC_AHB3LPENR_DTCM2LPEN_OFFSET    (29U)
#define RCC_AHB3LPENR_DTCM2LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, DTCM2LPEN))    /*!< Mask  0x20000000 */

#define RCC_AHB3LPENR_D1DTCM1LPEN_OFFSET  (28U)
#define RCC_AHB3LPENR_D1DTCM1LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, D1DTCM1LPEN))  /*!< Mask  0x10000000 */

#define RCC_AHB3LPENR_SDMMC1LPEN_OFFSET   (16U)
#define RCC_AHB3LPENR_SDMMC1LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, SDMMC1LPEN))   /*!< Mask  0x00010000 */

#define RCC_AHB3LPENR_QSPILPEN_OFFSET     (14U)
#define RCC_AHB3LPENR_QSPILPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, QSPILPEN))     /*!< Mask  0x00004000 */

#define RCC_AHB3LPENR_FMCLPEN_OFFSET      (12U)
#define RCC_AHB3LPENR_FMCLPEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, FMCLPEN))      /*!< Mask  0x00001000 */

#define RCC_AHB3LPENR_FLITFLPEN_OFFSET    (8U)
#define RCC_AHB3LPENR_FLITFLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, FLITFLPEN))    /*!< Mask  0x00000100 */

#define RCC_AHB3LPENR_JPGDECLPEN_OFFSET   (5U)
#define RCC_AHB3LPENR_JPGDECLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, JPGDECLPEN))   /*!< Mask  0x00000020 */

#define RCC_AHB3LPENR_DMA2DLPEN_OFFSET    (4U)
#define RCC_AHB3LPENR_DMA2DLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, DMA2DLPEN))    /*!< Mask  0x00000010 */

#define RCC_AHB3LPENR_MDMALPEN_OFFSET     (0U)
#define RCC_AHB3LPENR_MDMALPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB3LPENR, MDMALPEN))     /*!< Mask  0x00000001 */

/*!< AHB1 low power clock register */
#define RCC_AHB1LPENR_USB2OTGHSULPILPEN_OFFSET  (28U)
#define RCC_AHB1LPENR_USB2OTGHSULPILPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, USB2OTGHSULPILPEN))  /*!< Mask  0x10000000 */

#define RCC_AHB1LPENR_USB2OTGHLPEN_OFFSET       (27U)
#define RCC_AHB1LPENR_USB2OTGHLPEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, USB2OTGHLPEN))       /*!< Mask  0x08000000 */

#define RCC_AHB1LPENR_USB1OTGHSULPILPEN_OFFSET  (26U)
#define RCC_AHB1LPENR_USB1OTGHSULPILPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, USB1OTGHSULPILPEN))  /*!< Mask  0x04000000 */

#define RCC_AHB1LPENR_USB1OTGHLPEN_OFFSET       (25U)
#define RCC_AHB1LPENR_USB1OTGHLPEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, USB1OTGHLPEN))       /*!< Mask  0x02000000 */

#define RCC_AHB1LPENR_ETH1RXLPEN_OFFSET         (17U)
#define RCC_AHB1LPENR_ETH1RXLPEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, ETH1RXLPEN))         /*!< Mask  0x00020000 */

#define RCC_AHB1LPENR_ETH1TXLPEN_OFFSET         (16U)
#define RCC_AHB1LPENR_ETH1TXLPEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, ETH1TXLPEN))         /*!< Mask  0x00010000 */

#define RCC_AHB1LPENR_ETH1MACLPEN_OFFSET        (15U)
#define RCC_AHB1LPENR_ETH1MACLPEN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, ETH1MACLPEN))        /*!< Mask  0x00008000 */

#define RCC_AHB1LPENR_ARTLPEN_OFFSET            (14U)
#define RCC_AHB1LPENR_ARTLPEN_MASK              (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, ARTLPEN))            /*!< Mask  0x00004000 */

#define RCC_AHB1LPENR_ADC12LPEN_OFFSET          (5U)
#define RCC_AHB1LPENR_ADC12LPEN_MASK            (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, ADC12LPEN))          /*!< Mask  0x00000020 */

#define RCC_AHB1LPENR_DMA2LPEN_OFFSET           (1U)
#define RCC_AHB1LPENR_DMA2LPEN_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, DMA2LPEN))           /*!< Mask  0x00000002 */

#define RCC_AHB1LPENR_DMA1LPEN_OFFSET           (0U)
#define RCC_AHB1LPENR_DMA1LPEN_MASK             (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB1LPENR, DMA1LPEN))           /*!< Mask  0x00000001 */

/*!< AHB2 low power clock register */
#define RCC_AHB2LPENR_SRAM3LPEN_OFFSET   (31U)
#define RCC_AHB2LPENR_SRAM3LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, SRAM3LPEN))   /*!< Mask  0x80000000 */

#define RCC_AHB2LPENR_SRAM2LPEN_OFFSET   (30U)
#define RCC_AHB2LPENR_SRAM2LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, SRAM2LPEN))   /*!< Mask  0x40000000 */

#define RCC_AHB2LPENR_SRAM1LPEN_OFFSET   (29U)
#define RCC_AHB2LPENR_SRAM1LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, SRAM1LPEN))   /*!< Mask  0x20000000 */

#define RCC_AHB2LPENR_SDMMC2LPEN_OFFSET  (9U)
#define RCC_AHB2LPENR_SDMMC2LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, SDMMC2LPEN))  /*!< Mask  0x00000200 */

#define RCC_AHB2LPENR_RNGLPEN_OFFSET     (6U)
#define RCC_AHB2LPENR_RNGLPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, RNGLPEN))     /*!< Mask  0x00000040 */

#define RCC_AHB2LPENR_HASHLPEN_OFFSET    (5U)
#define RCC_AHB2LPENR_HASHLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, HASHLPEN))    /*!< Mask  0x00000020 */

#define RCC_AHB2LPENR_CRYPTLPEN_OFFSET   (4U)
#define RCC_AHB2LPENR_CRYPTLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, CRYPTLPEN))   /*!< Mask  0x00000010 */

#define RCC_AHB2LPENR_DCMILPEN_OFFSET    (0U)
#define RCC_AHB2LPENR_DCMILPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB2LPENR, DCMILPEN))    /*!< Mask  0x00000001 */

/*!< AHB4 low power clock register */
#define RCC_AHB4LPENR_SRAM4LPEN_OFFSET    (29U)
#define RCC_AHB4LPENR_SRAM4LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, SRAM1LPEN))   /*!< Mask  0x20000000 */

#define RCC_AHB4LPENR_BKPRAMLPEN_OFFSET   (28U)
#define RCC_AHB4LPENR_BKPRAMLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, BKPRAMLPEN))  /*!< Mask  0x10000000 */

#define RCC_AHB4LPENR_ADC3LPEN_OFFSET     (24U)
#define RCC_AHB4LPENR_ADC3LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, ADC3LPEN))    /*!< Mask  0x01000000 */

#define RCC_AHB4LPENR_BDMALPEN_OFFSET     (21U)
#define RCC_AHB4LPENR_BDMALPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, BDMALPEN))    /*!< Mask  0x00200000 */

#define RCC_AHB4LPENR_CRCLPEN_OFFSET      (19U)
#define RCC_AHB4LPENR_CRCLPEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, CRCLPEN))     /*!< Mask  0x00080000 */

#define RCC_AHB4LPENR_GPIOKLPEN_OFFSET    (10U)
#define RCC_AHB4LPENR_GPIOKLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOKLPEN))   /*!< Mask  0x00000400 */

#define RCC_AHB4LPENR_GPIOJLPEN_OFFSET    (9U)
#define RCC_AHB4LPENR_GPIOJLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOJLPEN))   /*!< Mask  0x00000200 */

#define RCC_AHB4LPENR_GPIOILPEN_OFFSET    (8U)
#define RCC_AHB4LPENR_GPIOILPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOILPEN))   /*!< Mask  0x00000100 */

#define RCC_AHB4LPENR_GPIOHLPEN_OFFSET    (7U)
#define RCC_AHB4LPENR_GPIOHLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOHLPEN))   /*!< Mask  0x00000080 */

#define RCC_AHB4LPENR_GPIOGLPEN_OFFSET    (6U)
#define RCC_AHB4LPENR_GPIOGLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOGLPEN))   /*!< Mask  0x00000040 */

#define RCC_AHB4LPENR_GPIOFLPEN_OFFSET    (5U)
#define RCC_AHB4LPENR_GPIOFLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOFLPEN))   /*!< Mask  0x00000020 */

#define RCC_AHB4LPENR_GPIOELPEN_OFFSET    (4U)
#define RCC_AHB4LPENR_GPIOELPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOELPEN))   /*!< Mask  0x00000010 */

#define RCC_AHB4LPENR_GPIODLPEN_OFFSET    (3U)
#define RCC_AHB4LPENR_GPIODLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIODLPEN))   /*!< Mask  0x00000008 */

#define RCC_AHB4LPENR_GPIOCLPEN_OFFSET    (2U)
#define RCC_AHB4LPENR_GPIOCLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOCLPEN))   /*!< Mask  0x00000004 */

#define RCC_AHB4LPENR_GPIOBLPEN_OFFSET    (1U)
#define RCC_AHB4LPENR_GPIOBLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOBLPEN))   /*!< Mask  0x00000002 */

#define RCC_AHB4LPENR_GPIOALPEN_OFFSET    (0U)
#define RCC_AHB4LPENR_GPIOALPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, AHB4LPENR, GPIOALPEN))   /*!< Mask  0x00000001 */

/*!< APB3 low power clock register */
#define RCC_APB3LPENR_WWDG1LPEN_OFFSET  (6U)
#define RCC_APB3LPENR_WWDG1LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3LPENR, WWDG1LPEN))  /*!< Mask  0x00000040 */

#define RCC_APB3LPENR_DSILPEN_OFFSET    (4U)
#define RCC_APB3LPENR_DSILPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3LPENR, DSILPEN))    /*!< Mask  0x00000010 */

#define RCC_APB3LPENR_LTDCLPEN_OFFSET   (3U)
#define RCC_APB3LPENR_LTDCLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB3LPENR, LTDCLPEN))   /*!< Mask  0x00000001 */

/*!< APB1 low power clock low register */
#define RCC_APB1LLPENR_UART8LPEN_OFFSET    (31U)
#define RCC_APB1LLPENR_UART8LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, UART8LPEN))    /*!< Mask  0x80000000 */

#define RCC_APB1LLPENR_UART7LPEN_OFFSET    (30U)
#define RCC_APB1LLPENR_UART7LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, UART7LPEN))    /*!< Mask  0x40000000 */

#define RCC_APB1LLPENR_DAC12LPEN_OFFSET    (29U)
#define RCC_APB1LLPENR_DAC12LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, DAC12LPEN))    /*!< Mask  0x20000000 */

#define RCC_APB1LLPENR_CECLPEN_OFFSET      (27U)
#define RCC_APB1LLPENR_CECLPEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, CECLPEN))      /*!< Mask  0x08000000 */

#define RCC_APB1LLPENR_I2C3LPEN_OFFSET     (23U)
#define RCC_APB1LLPENR_I2C3LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, I2C3LPEN))     /*!< Mask  0x00800000 */

#define RCC_APB1LLPENR_I2C2LPEN_OFFSET     (22U)
#define RCC_APB1LLPENR_I2C2LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, I2C2LPEN))     /*!< Mask  0x00400000 */

#define RCC_APB1LLPENR_I2C1LPEN_OFFSET     (21U)
#define RCC_APB1LLPENR_I2C1LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, I2C1LPEN))     /*!< Mask  0x00200000 */

#define RCC_APB1LLPENR_UART5LPEN_OFFSET    (20U)
#define RCC_APB1LLPENR_UART5LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, UART5LPEN))    /*!< Mask  0x00100000 */

#define RCC_APB1LLPENR_UART4LPEN_OFFSET    (19U)
#define RCC_APB1LLPENR_UART4LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, UART4LPEN))    /*!< Mask  0x00080000 */

#define RCC_APB1LLPENR_USART3LPEN_OFFSET   (18U)
#define RCC_APB1LLPENR_USART3LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, USART3LPEN))   /*!< Mask  0x00040000 */

#define RCC_APB1LLPENR_USART2LPEN_OFFSET   (17U)
#define RCC_APB1LLPENR_USART2LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, USART2LPEN))   /*!< Mask  0x00020000 */

#define RCC_APB1LLPENR_SPDIFRXLPEN_OFFSET  (16U)
#define RCC_APB1LLPENR_SPDIFRXLPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, SPDIFRXLPEN))  /*!< Mask  0x00010000 */

#define RCC_APB1LLPENR_SPI3LPEN_OFFSET     (15U)
#define RCC_APB1LLPENR_SPI3LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, SPI3LPEN))     /*!< Mask  0x00008000 */

#define RCC_APB1LLPENR_SPI2LPEN_OFFSET     (14U)
#define RCC_APB1LLPENR_SPI2LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, SPI2LPEN))     /*!< Mask  0x00004000 */

#define RCC_APB1LLPENR_WWDG2LPEN_OFFSET    (11U)
#define RCC_APB1LLPENR_WWDG2LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, WWDG2LPEN))    /*!< Mask  0x00000800 */

#define RCC_APB1LLPENR_LPTIM1LPEN_OFFSET   (9U)
#define RCC_APB1LLPENR_LPTIM1LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, LPTIM1LPEN))   /*!< Mask  0x00000200 */

#define RCC_APB1LLPENR_TIM14LPEN_OFFSET    (8U)
#define RCC_APB1LLPENR_TIM14LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM14LPEN))    /*!< Mask  0x00000100 */

#define RCC_APB1LLPENR_TIM13LPEN_OFFSET    (7U)
#define RCC_APB1LLPENR_TIM13LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM13LPEN))    /*!< Mask  0x00000080 */

#define RCC_APB1LLPENR_TIM12LPEN_OFFSET    (6U)
#define RCC_APB1LLPENR_TIM12LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM12LPEN))    /*!< Mask  0x00000040 */

#define RCC_APB1LLPENR_TIM7LPEN_OFFSET     (5U)
#define RCC_APB1LLPENR_TIM7LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM7LPEN))     /*!< Mask  0x00000020 */

#define RCC_APB1LLPENR_TIM6LPEN_OFFSET     (4U)
#define RCC_APB1LLPENR_TIM6LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM6LPEN))     /*!< Mask  0x00000010 */

#define RCC_APB1LLPENR_TIM5LPEN_OFFSET     (3U)
#define RCC_APB1LLPENR_TIM5LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM5LPEN))     /*!< Mask  0x00000008 */

#define RCC_APB1LLPENR_TIM4LPEN_OFFSET     (2U)
#define RCC_APB1LLPENR_TIM4LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM4LPEN))     /*!< Mask  0x00000004 */

#define RCC_APB1LLPENR_TIM3LPEN_OFFSET     (1U)
#define RCC_APB1LLPENR_TIM3LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM3LPEN))     /*!< Mask  0x00000002 */

#define RCC_APB1LLPENR_TIM2LPEN_OFFSET     (0U)
#define RCC_APB1LLPENR_TIM2LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1LLPENR, TIM2LPEN))     /*!< Mask  0x00000001 */

/*!< APB1 low power clock high register */
#define RCC_APB1HLPENR_FDCANLPEN_OFFSET  (8U)
#define RCC_APB1HLPENR_FDCANLPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPENR, FDCANLPEN))  /*!< Mask  0x00000100 */

#define RCC_APB1HLPENR_MDIOSLPEN_OFFSET  (5U)
#define RCC_APB1HLPENR_MDIOSLPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPENR, MDIOSLPEN))  /*!< Mask  0x00000020 */

#define RCC_APB1HLPENR_OPAMPLPEN_OFFSET  (4U)
#define RCC_APB1HLPENR_OPAMPLPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPENR, OPAMPLPEN))  /*!< Mask  0x00000010 */

#define RCC_APB1HLPENR_SWPLPEN_OFFSET    (2U)
#define RCC_APB1HLPENR_SWPLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPENR, SWPLPEN))    /*!< Mask  0x00000004 */

#define RCC_APB1HLPENR_CRSLPEN_OFFSET    (1U)
#define RCC_APB1HLPENR_CRSLPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB1HLPENR, CRSLPEN))    /*!< Mask  0x00000002 */

/*!< APB2 low power clock register */
#define RCC_APB2LPENR_HRTIMLPEN_OFFSET   (29U)
#define RCC_APB2LPENR_HRTIMLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, HRTIMLPEN))   /*!< Mask  0x20000000 */

#define RCC_APB2LPENR_DFSDM1LPEN_OFFSET  (28U)
#define RCC_APB2LPENR_DFSDM1LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, DFSDM1LPEN))  /*!< Mask  0x10000000 */

#define RCC_APB2LPENR_SAI3LPEN_OFFSET    (24U)
#define RCC_APB2LPENR_SAI3LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, SAI3LPEN))    /*!< Mask  0x01000000 */

#define RCC_APB2LPENR_SAI2LPEN_OFFSET    (23U)
#define RCC_APB2LPENR_SAI2LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, SAI2LPEN))    /*!< Mask  0x00800000 */

#define RCC_APB2LPENR_SAI1LPEN_OFFSET    (22U)
#define RCC_APB2LPENR_SAI1LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, SAI1LPEN))    /*!< Mask  0x00400000 */

#define RCC_APB2LPENR_SPI5LPEN_OFFSET    (20U)
#define RCC_APB2LPENR_SPI5LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, SPI5LPEN))    /*!< Mask  0x00100000 */

#define RCC_APB2LPENR_TIM17LPEN_OFFSET   (18U)
#define RCC_APB2LPENR_TIM17LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, TIM17LPEN))   /*!< Mask  0x00040000 */

#define RCC_APB2LPENR_TIM16LPEN_OFFSET   (17U)
#define RCC_APB2LPENR_TIM16LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, TIM16LPEN))   /*!< Mask  0x00020000 */

#define RCC_APB2LPENR_TIM15LPEN_OFFSET   (16U)
#define RCC_APB2LPENR_TIM15LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, TIM15LPEN))   /*!< Mask  0x00010000 */

#define RCC_APB2LPENR_SPI4LPEN_OFFSET    (13U)
#define RCC_APB2LPENR_SPI4LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, SPI4LPEN))    /*!< Mask  0x00002000 */

#define RCC_APB2LPENR_SPI1LPEN_OFFSET    (12U)
#define RCC_APB2LPENR_SPI1LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, SPI1LPEN))    /*!< Mask  0x00002000 */

#define RCC_APB2LPENR_USART6LPEN_OFFSET  (5U)
#define RCC_APB2LPENR_USART6LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, USART6LPEN))  /*!< Mask  0x00000020 */

#define RCC_APB2LPENR_USART1LPEN_OFFSET  (4U)
#define RCC_APB2LPENR_USART1LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, USART1LPEN))  /*!< Mask  0x00000010 */

#define RCC_APB2LPENR_TIM8LPEN_OFFSET    (1U)
#define RCC_APB2LPENR_TIM8LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, TIM8LPEN))    /*!< Mask  0x00000002 */

#define RCC_APB2LPENR_TIM1LPEN_OFFSET    (0U)
#define RCC_APB2LPENR_TIM1LPEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB2LPENR, TIM1LPEN))    /*!< Mask  0x00000001 */

/*!< APB4 low power clock register */
#define RCC_APB4LPENR_SAI4LPEN_OFFSET     (21U)
#define RCC_APB4LPENR_SAI4LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, SAI4LPEN))     /*!< Mask  0x00200000 */

#define RCC_APB4LPENR_RTCAPBLPEN_OFFSET   (16U)
#define RCC_APB4LPENR_RTCAPBLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, RTCAPBLPEN))   /*!< Mask  0x00010000 */

#define RCC_APB4LPENR_VREFLPEN_OFFSET     (15U)
#define RCC_APB4LPENR_VREFLPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, VREFLPEN))     /*!< Mask  0x00008000 */

#define RCC_APB4LPENR_COMP12LPEN_OFFSET   (14U)
#define RCC_APB4LPENR_COMP12LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, COMP12LPEN))   /*!< Mask  0x00004000 */

#define RCC_APB4LPENR_LPTIM5LPEN_OFFSET   (12U)
#define RCC_APB4LPENR_LPTIM5LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, LPTIM5LPEN))   /*!< Mask  0x00001000 */

#define RCC_APB4LPENR_LPTIM4LPEN_OFFSET   (11U)
#define RCC_APB4LPENR_LPTIM4LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, LPTIM4LPEN))   /*!< Mask  0x00000800 */

#define RCC_APB4LPENR_LPTIM3LPEN_OFFSET   (10U)
#define RCC_APB4LPENR_LPTIM3LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, LPTIM3LPEN))   /*!< Mask  0x00000400 */

#define RCC_APB4LPENR_LPTIM2LPEN_OFFSET   (9U)
#define RCC_APB4LPENR_LPTIM2LPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, LPTIM2LPEN))   /*!< Mask  0x00000200 */

#define RCC_APB4LPENR_I2C4LPEN_OFFSET     (7U)
#define RCC_APB4LPENR_I2C4LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, I2C4LPEN))     /*!< Mask  0x00000080 */

#define RCC_APB4LPENR_SPI6LPEN_OFFSET     (5U)
#define RCC_APB4LPENR_SPI6LPEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, SPI6LPEN))     /*!< Mask  0x00000020 */

#define RCC_APB4LPENR_LPUART1LPEN_OFFSET  (3U)
#define RCC_APB4LPENR_LPUART1LPEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, LPUART1LPEN))  /*!< Mask  0x00000008 */

#define RCC_APB4LPENR_SYSCFGLPEN_OFFSET   (1U)
#define RCC_APB4LPENR_SYSCFGLPEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(RCC, APB4LPENR, SYSCFGLPEN))   /*!< Mask  0x00000002 */

// Value of clock enable bit
#define RCC_PERIPHERALCLK_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define RCC_PERIPHERALCLK_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

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

#endif // RCC_REGISTERS_H
