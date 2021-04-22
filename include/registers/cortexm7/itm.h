#ifndef ITM_REGISTERS_H
#define ITM_REGISTERS_H
/**
 * @copyright
 * @file itm.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup ITM Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB)
 *  @brief Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t STIM[32];        /*!< Stimulus port register     (Offset 0x0 to 0x7C)           */
	   uint32_t reserved0[864U];  /*!< Reserved                   (Offset 0x80 to 0xDFC)  */
	WO uint32_t TER;          /*!< Trace enable register          (Offset 0xE00)           */
	   uint32_t reserved1[64U];  /*!< Reserved                   (Offset 0xE04 to 0xE3C)  */
	RW uint32_t TPR;          /*!< Trace privilege register      (Offset 0xE40)           */
	   uint32_t reserved1[64U];  /*!< Reserved                   (Offset 0xE44 to 0xE7C)  */
	RW uint32_t TCR;          /*!< Trace control register  (Offset 0xE80)           */
	   uint32_t reserved1[64U];  /*!< Reserved                   (Offset 0xE84 to 0xEEC)  */
	RO uint32_t ITATRDY;          /*!< Integration mode: Read ATB ready register  (Offset 0xEF0)           */
	WO uint32_t ITATVAL;          /*!< Integration mode: Write ATB valid register  (Offset 0xEF8)           */
	   uint32_t reserved1;  /*!< Reserved                   (Offset 0xEFC)  */
	RW uint32_t TCTRL;          /*!< Integration mode control register  (Offset 0xF00)           */
	   uint32_t reserved1[64U];  /*!< Reserved                   (Offset 0xF04 to 0xFAC)  */
	RW uint32_t LAR;          /*!< CoreSight lock access register  (Offset 0xFB0)           */
	RW uint32_t LSR;          /*!< CoreSight lock status register  (Offset 0xFB4)           */
	   uint32_t reserved1[64U];  /*!< Reserved                   (Offset 0xFB8 to 0xFCF)  */
	RW uint32_t PID4;          /*!< Peripheral identification 4 register  (Offset 0xFD0)           */
	RW uint32_t PID5;          /*!< Peripheral identification 5 register  (Offset 0xFD4)           */
	RW uint32_t PID6;          /*!< Peripheral identification 6 register  (Offset 0xFD8)           */
	RW uint32_t PID7;          /*!< Peripheral identification 7 register  (Offset 0xFDC)           */
	RW uint32_t PID0;          /*!< Peripheral identification 0 register  (Offset 0xFE0)           */
	RW uint32_t PID1;          /*!< Peripheral identification 1 register  (Offset 0xFE4)           */
	RW uint32_t PID2;          /*!< Peripheral identification 2 register  (Offset 0xFE8)           */
	RW uint32_t PID3;          /*!< Peripheral identification 3 register  (Offset 0xFEC)           */
	RW uint32_t CID0;          /*!< Component identification 0 register  (Offset 0xFF0)           */
	RW uint32_t CID1;          /*!< Component identification 1 register  (Offset 0xFF4)           */
	RW uint32_t CID2;          /*!< Component identification 2 register  (Offset 0xFF8)           */
	RW uint32_t CID3;          /*!< Component identification 3 register  (Offset 0xFFC)           */
} ppb_itm_regs;

/*!< Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) registers */
/*!< Debug halting control and status register */
#define ITM_DHCSR_S_RESET_ST_OFFSET   (25U)
#define ITM_DHCSR_S_RESET_ST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, S_RESET_ST))   /*!< Mask  0x02000000 - read only field */

#define ITM_DHCSR_S_RETIRE_ST_OFFSET  (24U)
#define ITM_DHCSR_S_RETIRE_ST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, S_RETIRE_ST))  /*!< Mask  0x01000000 - read only field */

#define ITM_DHCSR_S_LOCKUP_OFFSET     (19U)
#define ITM_DHCSR_S_LOCKUP_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, S_LOCKUP))     /*!< Mask  0x00080000 - read only field */

#define ITM_DHCSR_S_SLEEP_OFFSET      (18U)
#define ITM_DHCSR_S_SLEEP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, S_SLEEP))      /*!< Mask  0x00040000 - read only field */

#define ITM_DHCSR_S_HARD_OFFSET       (17U)
#define ITM_DHCSR_S_HARD_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, S_HARD))       /*!< Mask  0x00020000 - read only field */

#define ITM_DHCSR_S_REGRDY_OFFSET     (16U)
#define ITM_DHCSR_S_REGRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, S_REGRDY))     /*!< Mask  0x00010000 - read only field */

#define ITM_DHCSR_DBGKEY_OFFSET       (16U)
#define ITM_DHCSR_DBGKEY_MASK         (0xFFFFUL << REGISTER_FIELD_OFFSET(ITM, DHCSR, DBGKEY))    /*!< Mask  0xFFFF0000  - write only field */

#define ITM_DHCSR_C_SNAPSTALL_OFFSET  (5U)
#define ITM_DHCSR_C_SNAPSTALL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, C_SNAPSTALL))  /*!< Mask  0x00000020 */

#define ITM_DHCSR_C_MASKINTS_OFFSET   (3U)
#define ITM_DHCSR_C_MASKINTS_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, C_MASKINTS))   /*!< Mask  0x00000008 */

#define ITM_DHCSR_C_STEP_OFFSET       (2U)
#define ITM_DHCSR_C_STEP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, C_STEP))       /*!< Mask  0x00000004 */

#define ITM_DHCSR_C_HALT_OFFSET       (1U)
#define ITM_DHCSR_C_HALT_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, C_HALT))       /*!< Mask  0x00000002 */

#define ITM_DHCSR_C_DEBUGEN_OFFSET    (0U)
#define ITM_DHCSR_C_DEBUGEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ITM, DHCSR, C_DEBUGEN))    /*!< Mask  0x00000001 */

#define ITM_OFFSET 0x0UL
#define ITM_BASE OFFSET_ADDRESS(PPB_BASE, ITM_OFFSET)
#define ITM REGISTER_PTR(ppb_itm_regs, ITM_BASE)

/** @} */ // End of ITM group

/** @} */ // End of RegisterGroup group

#endif // ITM_REGISTERS_H
