#ifndef POWER_REGISTERS_H
#define POWER_REGISTERS_H
/**
 * @copyright
 * @file power.h
 * @author Andrea Gianarda
 * @date 25th of February 2021
 * @brief Power registers
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
 *  @defgroup Power Power control
 *  @brief Power control macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t CR1;      /*!< Power control 1 register            (Offset 0x0)  */
	RO uint32_t CSR1;     /*!< Control status 1 register           (Offset 0x4)  */
	RW uint32_t CR2;      /*!< Power control 2 register            (Offset 0x8)  */
	RW uint32_t CR3;      /*!< Power control 3 register            (Offset 0xC)  */
	RW uint32_t CPU1CR;   /*!< CPU1 control register               (Offset 0x10) */
	RW uint32_t CPU2CR;   /*!< CPU2 control register               (Offset 0x14) */
	RW uint32_t D3CR;     /*!< Domain 3 control register           (Offset 0x18) */
	RW uint32_t WKUPCR;   /*!< Wakeup clear register               (Offset 0x1C) */
	RO uint32_t WKUPFR;   /*!< Wakeup flag register                (Offset 0x20) */
	RW uint32_t WKUPEPR;  /*!< Wakeup enable and polarity register (Offset 0x24) */
} power_regs;

/*!< Power control registers */
/*!< Power control 1 register */
#define PWR_CR1_ALS_OFFSET    (17U)
#define PWR_CR1_ALS_MASK      (0x3UL << REGISTER_FIELD_OFFSET(PWR, CR1, ALS))    /*!< Mask  0x00060000 */

#define PWR_CR1_AVDEN_OFFSET  (16U)
#define PWR_CR1_AVDEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR1, AVDEN))  /*!< Mask  0x00010000 */

#define PWR_CR1_SVOS_OFFSET   (14U)
#define PWR_CR1_SVOS_MASK     (0x3UL << REGISTER_FIELD_OFFSET(PWR, CR1, SVOS))   /*!< Mask  0x0000C000 */

#define PWR_CR1_FLPS_OFFSET   (9U)
#define PWR_CR1_FLPS_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR1, FLPS))   /*!< Mask  0x00002000 */

#define PWR_CR1_DBP_OFFSET    (8U)
#define PWR_CR1_DBP_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR1, DBP))    /*!< Mask  0x00002000 */

#define PWR_CR1_PLS_OFFSET    (5U)
#define PWR_CR1_PLS_MASK      (0x7UL << REGISTER_FIELD_OFFSET(PWR, CR1, PLS))    /*!< Mask  0x000000E0 */

#define PWR_CR1_PVDE_OFFSET   (4U)
#define PWR_CR1_PVDE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR1, PVDE))   /*!< Mask  0x00000010 */

#define PWR_CR1_LPDS_OFFSET   (0U)
#define PWR_CR1_LPDS_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR1, LPDS))   /*!< Mask  0x00000001 */

// Values of analog voltage detector (AVD) threshold voltage register
#define PWR_VTHAVD_1_7V  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_VTHAVD_2_1V  (0x1UL)  /*!< Value 0x00000001 */
#define PWR_VTHAVD_2_5V  (0x2UL)  /*!< Value 0x00000002 */
#define PWR_VTHAVD_2_8V  (0x3UL)  /*!< Value 0x00000003 */

// Values of analog voltage detector (AVD) enable bit
#define PWR_AVD_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_AVD_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of system stop voltage supply (SVOS) scaling selection register
#define PWR_SYSSTOPVS_SCALE5   (0x1UL)  /*!< Value 0x00000001 */
#define PWR_SYSSTOPVS_SCALE4   (0x2UL)  /*!< Value 0x00000002 */
#define PWR_SYSSTOPVS_SCALE3   (0x3UL)  /*!< Value 0x00000003 */

// Values of flash low power mode in DStop mode register
#define PWR_FLASHLPSTOP_NORMALMODE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_FLASHLPSTOP_LPMODE      (0x1UL)  /*!< Value 0x00000001 */

// Values of backup domain write protection enable bit
#define PWR_BCKWRPROT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_BCKWRPROT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of programmable voltage detector (PVD) threshold voltage register
#define PWR_VTHPVD_1_95V     (0x0UL)  /*!< Value 0x00000000 */
#define PWR_VTHPVD_2_10V     (0x1UL)  /*!< Value 0x00000001 */
#define PWR_VTHPVD_2_25V     (0x2UL)  /*!< Value 0x00000002 */
#define PWR_VTHPVD_2_40V     (0x3UL)  /*!< Value 0x00000003 */
#define PWR_VTHPVD_2_55V     (0x4UL)  /*!< Value 0x00000004 */
#define PWR_VTHPVD_2_70V     (0x5UL)  /*!< Value 0x00000005 */
#define PWR_VTHPVD_2_85V     (0x6UL)  /*!< Value 0x00000006 */
#define PWR_VTHPVD_EXTERNAL  (0x7UL)  /*!< Value 0x00000007 */

// Values of programmable voltage detector (PVD) enable bit
#define PWR_PVD_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_PVD_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of low power deep sleep with system stop voltage supply 3 (SVOS3) scaling mode register
#define PWR_LPDSSVOS3_VRMAINMODE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_LPDSSVOS3_VRLPMODE    (0x1UL)  /*!< Value 0x00000001 */

/*!< Constrol status 1 register */
#define PWR_CSR1_AVDO_OFFSET       (16U)
#define PWR_CSR1_AVDO_MASK         (0x1UL << REGISTER_FIELD_OFFSET(PWR, CSR1, AVDO))       /*!< Mask  0x00010000 */

#define PWR_CSR1_ACTVOS_OFFSET     (14U)
#define PWR_CSR1_ACTVOS_MASK       (0x3UL << REGISTER_FIELD_OFFSET(PWR, CSR1, ACTVOS))     /*!< Mask  0x0000C000 */
#define PWR_CSR1_ACTVOS_0          (0x1UL)                                                 /*!< Value 0x00000001 */
#define PWR_CSR1_ACTVOS_1          (0x2UL)                                                 /*!< Value 0x00000002 */

#define PWR_CSR1_ACTVOSRDY_OFFSET  (13U)
#define PWR_CSR1_ACTVOSRDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CSR1, ACTVOSRDY))  /*!< Mask  0x00002000 */

#define PWR_CSR1_PVDO_OFFSET       (4U)
#define PWR_CSR1_PVDO_MASK         (0x1UL << REGISTER_FIELD_OFFSET(PWR, CSR1, PVDO))       /*!< Mask  0x00000010 */

// Values of analog voltage detector (AVD) output bit
#define PWR_AVDO_HEVTH  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_AVDO_LVTH   (0x1UL)  /*!< Value 0x00000001 */

// Values of voltage supply (VOS) ready bit
#define PWR_ACTIVEVOS_NOTREADY  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_ACTIVEVOS_READY     (0x1UL)  /*!< Value 0x00000001 */

// Values of programmable voltage detector (PVD) output bit
#define PWR_PVDO_HEVTH  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_PVDO_LVTH   (0x1UL)  /*!< Value 0x00000001 */

/*!< Power control 2 register */
#define PWR_CR2_TEMPH_OFFSET  (23U)
#define PWR_CR2_TEMPH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, TEMPH))  /*!< Mask  0x00800000 */

#define PWR_CR2_TEMPL_OFFSET  (22U)
#define PWR_CR2_TEMPL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, TEMPL))  /*!< Mask  0x00400000 */

#define PWR_CR2_VBATH_OFFSET  (21U)
#define PWR_CR2_VBATH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, VBATH))  /*!< Mask  0x00200000 */

#define PWR_CR2_VBATL_OFFSET  (20U)
#define PWR_CR2_VBATL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, VBATL))  /*!< Mask  0x00100000 */

#define PWR_CR2_BRRDY_OFFSET  (16U)
#define PWR_CR2_BRRDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, BRRDY))  /*!< Mask  0x00010000 */

#define PWR_CR2_MONEN_OFFSET  (4U)
#define PWR_CR2_MONEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, MONEN))  /*!< Mask  0x00000010 */

#define PWR_CR2_BREN_OFFSET   (0U)
#define PWR_CR2_BREN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR2, BREN))   /*!< Mask  0x00000001 */

// Values of temperature level monitoring versus high threshold bit
#define PWR_TEMPH_TLOWERHVTH        (0x0UL)  /*!< Value 0x00000000 */
#define PWR_TEMPH_THIGHEREQUALHVTH  (0x1UL)  /*!< Value 0x00000001 */

// Values of temperature level monitoring versus low threshold bit
#define PWR_TEMPL_TLOWERLVTH        (0x0UL)  /*!< Value 0x00000000 */
#define PWR_TEMPL_THIGHEREQUALLVTH  (0x1UL)  /*!< Value 0x00000001 */

// Values of battery voltage (VBAT) level monitoring versus high threshold bit
#define PWR_VBATH_VLOWERHVTH        (0x0UL)  /*!< Value 0x00000000 */
#define PWR_VBATH_VHIGHEREQUALHVTH  (0x1UL)  /*!< Value 0x00000001 */

// Values of battery voltage (VBAT) level monitoring versus low threshold bit
#define PWR_VBATL_VLOWERLVTH        (0x0UL)  /*!< Value 0x00000000 */
#define PWR_VBATL_VHIGHEREQUALLVTH  (0x1UL)  /*!< Value 0x00000001 */

// Values of backup regulator ready bit
#define PWR_BCKREG_NOTREADY  (0x0UL)  /*!< Mask  0x00000000 */
#define PWR_BCKREG_READY     (0x1UL)  /*!< Mask  0x00000001 */

// Values of monitoring enable bit
#define PWR_MON_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_MON_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of backup regulator enable bit
#define PWR_BCKREG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_BCKREG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Power control 3 register */
#define PWR_CR3_USB33RDY_OFFSET  (26U)
#define PWR_CR3_USB33RDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, USB33RDY))  /*!< Mask  0x04000000 */

#define PWR_CR3_USBREGEN_OFFSET  (25U)
#define PWR_CR3_USBREGEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, USBREGEN))  /*!< Mask  0x02000000 */

#define PWR_CR3_USB33DEN_OFFSET  (24U)
#define PWR_CR3_USB33DEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, USB33DEN))  /*!< Mask  0x01000000 */

#define PWR_CR3_SDEXTRDY_OFFSET  (16U)
#define PWR_CR3_SDEXTRDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, SDEXTRDY))  /*!< Mask  0x00010000 */

#define PWR_CR3_VBRSEL_OFFSET    (9U)
#define PWR_CR3_VBRSEL_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, VBRSEL))    /*!< Mask  0x00000200 */

#define PWR_CR3_VBEN_OFFSET      (8U)
#define PWR_CR3_VBEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, VBEN))      /*!< Mask  0x00000100 */

#define PWR_CR3_SDLEVEL_OFFSET   (4U)
#define PWR_CR3_SDLEVEL_MASK     (0x3UL << REGISTER_FIELD_OFFSET(PWR, CR3, SDLEVEL))   /*!< Mask  0x00000030 */

#define PWR_CR3_SDEXTHP_OFFSET   (3U)
#define PWR_CR3_SDEXTHP_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, SDEXTHP))   /*!< Mask  0x00000008 */

#define PWR_CR3_SDEN_OFFSET      (2U)
#define PWR_CR3_SDEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, SDEN))      /*!< Mask  0x00000004 */

#define PWR_CR3_LDOEN_OFFSET     (1U)
#define PWR_CR3_LDOEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, LDOEN))     /*!< Mask  0x00000002 */

#define PWR_CR3_BYPASS_OFFSET    (0U)
#define PWR_CR3_BYPASS_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CR3, BYPASS))    /*!< Mask  0x00000001 */

// Value of USB33 ready bit
#define PWR_USB33_NOTREADY  (0x0UL)  /*!< Mask  0x00000000 */
#define PWR_USB33_READY     (0x1UL)  /*!< Mask  0x04000000 */

// Value of USB regulator enable bit
#define PWR_USBREG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_USBREG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Value of USB33 voltage detector enable bit
#define PWR_USB33VDET_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_USB33VDET_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Value of step-down converter external power supply ready bit
#define PWR_STEPDOWNEXTCONV_NOTREADY  (0x0UL)  /*!< Mask  0x00000000 */
#define PWR_STEPDOWNEXTCONV_READY     (0x1UL)  /*!< Mask  0x00000001 */

// Value of battery voltage resistor selection bit
#define PWR_VBATR_5K    (0x0UL)  /*!< Value 0x00000000 */
#define PWR_VBATR_1_5K  (0x1UL)  /*!< Value 0x00000001 */

// Value of battery voltage enable bit
#define PWR_VBAT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_VBAT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Value of step-down converter output level selection
#define PWR_STEPDOWNCONVVOUT_RESETVALUE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_STEPDOWNCONVVOUT_1_8V        (0x1UL)  /*!< Value 0x00000001 */
#define PWR_STEPDOWNCONVVOUT_2_5V        (0x2UL)  /*!< Value 0x00000002 */

// Value of step-down converter forced ON and in high power MR mode select bit
#define PWR_STEPDOWNCONV_NORMALMODE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_STEPDOWNCONV_MAINMODE    (0x1UL)  /*!< Value 0x00000001 */

// Value of step-down converter enable bit
#define PWR_STEPDOWNCONV_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_STEPDOWNCONV_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Value of low drop-out regulator enable bit
#define PWR_LOWDROPOUTREG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_LOWDROPOUTREG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Value of power unit management unit bypass bit
#define PWR_PWRMGMTBYPASS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_PWRMGMTBYPASS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< CPU 1 power control register */
#define PWR_CPU1CR_RUN_D3_OFFSET   (11U)
#define PWR_CPU1CR_RUN_D3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, RUN_D3))   /*!< Mask  0x00000800 */

#define PWR_CPU1CR_HOLD2_OFFSET    (10U)
#define PWR_CPU1CR_HOLD2_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, HOLD2))    /*!< Mask  0x00000400 */

#define PWR_CPU1CR_CSSF_OFFSET     (9U)
#define PWR_CPU1CR_CSSF_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, CSSF))     /*!< Mask  0x00000200 */

#define PWR_CPU1CR_SBF_D2_OFFSET   (8U)
#define PWR_CPU1CR_SBF_D2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, SBF_D2))   /*!< Mask  0x00000100 */

#define PWR_CPU1CR_SBF_D1_OFFSET   (7U)
#define PWR_CPU1CR_SBF_D1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, SBF_D1))   /*!< Mask  0x00000080 */

#define PWR_CPU1CR_SBF_OFFSET      (6U)
#define PWR_CPU1CR_SBF_MASK        (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, SBF))      /*!< Mask  0x00000040 */

#define PWR_CPU1CR_STOPF_OFFSET    (5U)
#define PWR_CPU1CR_STOPF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, STOPF))    /*!< Mask  0x00000020 */

#define PWR_CPU1CR_HOLD2F_OFFSET   (4U)
#define PWR_CPU1CR_HOLD2F_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, HOLD2F))   /*!< Mask  0x00000010 */

#define PWR_CPU1CR_PDDS_D3_OFFSET  (2U)
#define PWR_CPU1CR_PDDS_D3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, PDDS_D3))  /*!< Mask  0x00000004 */

#define PWR_CPU1CR_PDDS_D2_OFFSET  (1U)
#define PWR_CPU1CR_PDDS_D2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, PDDS_D2))  /*!< Mask  0x00000002 */

#define PWR_CPU1CR_PDDS_D1_OFFSET  (0U)
#define PWR_CPU1CR_PDDS_D1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU1CR, PDDS_D1))  /*!< Mask  0x00000001 */

// Values of register controlling what happens to CPU2 and peripheral after CPU1 exits stop mode
#define PWR_CPU2HOLD_RUNAFTERWAKEUP  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_CPU2HOLD_KEEPONHOLD      (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling whether a CPU2 is waken up when CPU1 is woken up from a CPU2 wakeup source while CPU2 is on hold
#define PWR_HOLDCPU2FLAG_NOWAKEUPWITHHOLD  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_HOLDCPU2FLAG_WAKEUPWITHHOLD    (0x1UL)  /*!< Value 0x00000001 */

/*!< CPU 2 power control register */
#define PWR_CPU2CR_RUN_D3_OFFSET   (11U)
#define PWR_CPU2CR_RUN_D3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, RUN_D3))   /*!< Mask  0x00000800 */

#define PWR_CPU2CR_HOLD1_OFFSET    (10U)
#define PWR_CPU2CR_HOLD1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, HOLD1))    /*!< Mask  0x00000400 */

#define PWR_CPU2CR_CSSF_OFFSET     (9U)
#define PWR_CPU2CR_CSSF_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, CSSF))     /*!< Mask  0x00000200 */

#define PWR_CPU2CR_SBF_D2_OFFSET   (8U)
#define PWR_CPU2CR_SBF_D2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, SBF_D2))   /*!< Mask  0x00000100 */

#define PWR_CPU2CR_SBF_D1_OFFSET   (7U)
#define PWR_CPU2CR_SBF_D1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, SBF_D1))   /*!< Mask  0x00000080 */

#define PWR_CPU2CR_SBF_OFFSET      (6U)
#define PWR_CPU2CR_SBF_MASK        (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, SBF))      /*!< Mask  0x00000040 */

#define PWR_CPU2CR_STOPF_OFFSET    (5U)
#define PWR_CPU2CR_STOPF_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, STOPF))    /*!< Mask  0x00000020 */

#define PWR_CPU2CR_HOLD1F_OFFSET   (4U)
#define PWR_CPU2CR_HOLD1F_MASK     (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, HOLD1F))   /*!< Mask  0x00000010 */

#define PWR_CPU2CR_PDDS_D3_OFFSET  (2U)
#define PWR_CPU2CR_PDDS_D3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, PDDS_D3))  /*!< Mask  0x00000004 */

#define PWR_CPU2CR_PDDS_D2_OFFSET  (1U)
#define PWR_CPU2CR_PDDS_D2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, PDDS_D2))  /*!< Mask  0x00000002 */

#define PWR_CPU2CR_PDDS_D1_OFFSET  (0U)
#define PWR_CPU2CR_PDDS_D1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, CPU2CR, PDDS_D1))  /*!< Mask  0x00000001 */

// Values of register controlling run mode of domain 3
#define PWR_D3RUNMODE_FOLLOWSUBSYSMODE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_D3RUNMODE_ALWAYSON          (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling what happens to CPU1 and peripheral after CPU2 exits stop mode
#define PWR_CPU1HOLD_RUNAFTERWAKEUP  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_CPU1HOLD_KEEPONHOLD      (0x1UL)  /*!< Value 0x00000001 */

// Values of domain 1 clear flags bit
#define PWR_D1FLAGSCLR_NOEFFECT  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_D1FLAGSCLR_CLRFLAGS  (0x1UL)  /*!< Value 0x00000001 */

// Values of domain 2 standby flag bit
#define PWR_DSTANDBY_NOTENTERED  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_DSTANDBY_ENTERED     (0x1UL)  /*!< Value 0x00000001 */

// Values of system standby flag bit
#define PWR_SYSSTANDBY_NOTENTERED  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_SYSSTANDBY_ENTERED     (0x1UL)  /*!< Value 0x00000001 */

// Values of system stop flag bit
#define PWR_SYSSTOP_NOTENTERED  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_SYSSTOP_ENTERED     (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling whether a CPU1 is waken up when CPU2 is woken up from a CPU1 wakeup source while CPU1 is on hold
#define PWR_HOLDCPU1FLAG_NOWAKEUPWITHHOLD  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_HOLDCPU1FLAG_WAKEUPWITHHOLD    (0x1UL)  /*!< Value 0x00000001 */

// Value of domain power down deepsleep
#define PWR_PWRDOWNDS_KEEPSTOPMODE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_PWRDOWNDS_ALLOWSTANDBY  (0x1UL)  /*!< Value 0x00000001 */

/*!< Domain 3 control register */
#define PWR_D3CR_VOS_OFFSET     (14U)
#define PWR_D3CR_VOS_MASK       (0x3UL << REGISTER_FIELD_OFFSET(PWR, D3CR, VOS))     /*!< Mask  0x000C0000 */

#define PWR_D3CR_VOSRDY_OFFSET  (13U)
#define PWR_D3CR_VOSRDY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, D3CR, VOSRDY))  /*!< Mask  0x00020000 */

// Values of domain 3 voltage supply (VOS) voltage scaling register
#define PWR_D3VOS_RSVDSCALE3  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_D3VOS_SCALE3      (0x1UL)  /*!< Value 0x00000001 */
#define PWR_D3VOS_SCALE2      (0x2UL)  /*!< Value 0x00000002 */
#define PWR_D3VOS_SCALE1      (0x3UL)  /*!< Value 0x00000003 */

// Values of domain 3 voltage supply (VOS) ready bit
#define PWR_D3VOS_NOTREADY  (0x0UL)  /*!< Mask  0x00000000 */
#define PWR_D3VOS_READY     (0x1UL)  /*!< Mask  0x00020000 */

/*!< Wakeup clear register */
#define PWR_WKUPCR_WKUPC6_OFFSET  (5U)
#define PWR_WKUPCR_WKUPC6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPCR, WKUPC6))  /*!< Mask  0x00000020 */

#define PWR_WKUPCR_WKUPC5_OFFSET  (4U)
#define PWR_WKUPCR_WKUPC5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPCR, WKUPC5))  /*!< Mask  0x00000010 */

#define PWR_WKUPCR_WKUPC4_OFFSET  (3U)
#define PWR_WKUPCR_WKUPC4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPCR, WKUPC4))  /*!< Mask  0x00000008 */

#define PWR_WKUPCR_WKUPC3_OFFSET  (2U)
#define PWR_WKUPCR_WKUPC3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPCR, WKUPC3))  /*!< Mask  0x00000004 */

#define PWR_WKUPCR_WKUPC2_OFFSET  (1U)
#define PWR_WKUPCR_WKUPC2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPCR, WKUPC2))  /*!< Mask  0x00000002 */

#define PWR_WKUPCR_WKUPC1_OFFSET  (0U)
#define PWR_WKUPCR_WKUPC1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPCR, WKUPC1))  /*!< Mask  0x00000001 */

// Value to clear the wake up pin flag
#define PWR_WAKEUPCLR_CLEAR  (0x1UL)  /*!< Value 0x00000001 */

/*!< Wakeup flag register */
#define PWR_WKUPFR_WKUP6_OFFSET  (5U)
#define PWR_WKUPFR_WKUP6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPFR, WKUP6))  /*!< Mask  0x00000020 */

#define PWR_WKUPFR_WKUP5_OFFSET  (4U)
#define PWR_WKUPFR_WKUP5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPFR, WKUP5))  /*!< Mask  0x00000010 */

#define PWR_WKUPFR_WKUP4_OFFSET  (3U)
#define PWR_WKUPFR_WKUP4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPFR, WKUP4))  /*!< Mask  0x00000008 */

#define PWR_WKUPFR_WKUP3_OFFSET  (2U)
#define PWR_WKUPFR_WKUP3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPFR, WKUP3))  /*!< Mask  0x00000004 */

#define PWR_WKUPFR_WKUP2_OFFSET  (1U)
#define PWR_WKUPFR_WKUP2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPFR, WKUP2))  /*!< Mask  0x00000002 */

#define PWR_WKUPFR_WKUP1_OFFSET  (0U)
#define PWR_WKUPFR_WKUP1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPFR, WKUP1))  /*!< Mask  0x00000001 */

// Value of wake up pin flag
#define PWR_WAKEUPFLAG_NOEVENT   (0x0UL)  /*!< Value 0x00000000 */
#define PWR_WAKEUPFLAG_EVENTREC  (0x1UL)  /*!< Value 0x00000001 */

/*!< Wakeup flag register */
#define PWR_WKUPEPR_WKUPPUPD6_OFFSET  (26U)
#define PWR_WKUPEPR_WKUPPUPD6_MASK    (0x3UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPPUPD6))  /*!< Mask  0x0C000000 */

#define PWR_WKUPEPR_WKUPPUPD5_OFFSET  (24U)
#define PWR_WKUPEPR_WKUPPUPD5_MASK    (0x3UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPPUPD5))  /*!< Mask  0x03000000 */

#define PWR_WKUPEPR_WKUPPUPD4_OFFSET  (22U)
#define PWR_WKUPEPR_WKUPPUPD4_MASK    (0x3UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPPUPD4))  /*!< Mask  0x00C00000 */

#define PWR_WKUPEPR_WKUPPUPD3_OFFSET  (20U)
#define PWR_WKUPEPR_WKUPPUPD3_MASK    (0x3UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPPUPD3))  /*!< Mask  0x00300000 */

#define PWR_WKUPEPR_WKUPPUPD2_OFFSET  (18U)
#define PWR_WKUPEPR_WKUPPUPD2_MASK    (0x3UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPPUPD2))  /*!< Mask  0x000C0000 */

#define PWR_WKUPEPR_WKUPPUPD1_OFFSET  (16U)
#define PWR_WKUPEPR_WKUPPUPD1_MASK    (0x3UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPPUPD1))  /*!< Mask  0x00030000 */

#define PWR_WKUPEPR_WKUPP6_OFFSET     (13U)
#define PWR_WKUPEPR_WKUPP6_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPP6))      /*!< Mask  0x00002000 */

#define PWR_WKUPEPR_WKUPP5_OFFSET     (12U)
#define PWR_WKUPEPR_WKUPP5_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPP5))      /*!< Mask  0x00001000 */

#define PWR_WKUPEPR_WKUPP4_OFFSET     (11U)
#define PWR_WKUPEPR_WKUPP4_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPP4))      /*!< Mask  0x00000800 */

#define PWR_WKUPEPR_WKUPP3_OFFSET     (10U)
#define PWR_WKUPEPR_WKUPP3_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPP3))      /*!< Mask  0x00000400 */

#define PWR_WKUPEPR_WKUPP2_OFFSET     (9U)
#define PWR_WKUPEPR_WKUPP2_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPP2))      /*!< Mask  0x00000200 */

#define PWR_WKUPEPR_WKUPP1_OFFSET     (8U)
#define PWR_WKUPEPR_WKUPP1_MASK       (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPP1))      /*!< Mask  0x00000100 */

#define PWR_WKUPEPR_WKUPEN6_OFFSET    (5U)
#define PWR_WKUPEPR_WKUPEN6_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPEN6))       /*!< Mask  0x00000020 */

#define PWR_WKUPEPR_WKUPEN5_OFFSET    (4U)
#define PWR_WKUPEPR_WKUPEN5_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPEN5))       /*!< Mask  0x00000010 */

#define PWR_WKUPEPR_WKUPEN4_OFFSET    (3U)
#define PWR_WKUPEPR_WKUPEN4_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPEN4))       /*!< Mask  0x00000008 */

#define PWR_WKUPEPR_WKUPEN3_OFFSET    (2U)
#define PWR_WKUPEPR_WKUPEN3_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPEN3))       /*!< Mask  0x00000004 */

#define PWR_WKUPEPR_WKUPEN2_OFFSET    (1U)
#define PWR_WKUPEPR_WKUPEN2_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPEN2))       /*!< Mask  0x00000002 */

#define PWR_WKUPEPR_WKUPEN1_OFFSET    (0U)
#define PWR_WKUPEPR_WKUPEN1_MASK      (0x1UL << REGISTER_FIELD_OFFSET(PWR, WKUPEPR, WKUPEN1))       /*!< Mask  0x00000001 */

// Value of wakeup pin pull configuration
#define PWR_WAKEUPPULLCFG_NOPULLUP  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_WAKEUPPULLCFG_PULLUP    (0x1UL)  /*!< Value 0x00000001 */
#define PWR_WAKEUPPULLCFG_PULLDOWN  (0x2UL)  /*!< Value 0x00000002 */

// Value of wakeup pin polarity
#define PWR_WAKEUPPLR_RISEDET  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_WAKEUPPLR_FALLDET  (0x1UL)  /*!< Value 0x00000001 */

// Value of wakeup pin enable bit
#define PWR_WAKEUP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define PWR_WAKEUP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Power control registers */
#define PWR_OFFSET 0x4800UL
#define PWR_BASE OFFSET_ADDRESS(D3_AHB4_BASE, PWR_OFFSET)
#define PWR REGISTER_PTR(power_regs, PWR_BASE)

/** @} */ // End of Power control group

/** @} */ // End of RegisterGroup group

#endif // POWER_REGISTERS_H
