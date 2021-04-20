#ifndef DCB_REGISTERS_H
#define DCB_REGISTERS_H
/**
 * @copyright
 * @file dcb.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Debug control block (DCB) registers in system control space (SCS) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup DCB Debug control block (DCB) registers in system control space (SCS)
 *  @brief Debug control block (DCB) registers in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t DHCSR;          /*!< Debug halting control and status register     (Offset 0x0)           */
	WO uint32_t DCRSR;          /*!< Debug core regiser selector register          (Offset 0x4)           */
	RW uint32_t DCRDR;          /*!< Debug core register data register             (Offset 0x8)           */
	RW uint32_t DEMCR;          /*!< Debug exception and monitor control register  (Offset 0xC)           */
	   uint32_t reserved[64U];  /*!< Reserved                                      (Offset 0x10 to 0x8C)  */
} scs_dcb_regs;

/*!< Debug control block (DCB) registers in system control space (SCS) registers */
/*!< Debug halting control and status register */
#define DCB_DHCSR_S_RESET_ST_OFFSET       (25U)
#define DCB_DHCSR_S_RESET_ST_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, S_RESET_ST))       /*!< Mask  0x02000000 - read only field */

#define DCB_DHCSR_S_RETIRE_ST_OFFSET       (24U)
#define DCB_DHCSR_S_RETIRE_ST_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, S_RETIRE_ST))       /*!< Mask  0x01000000 - read only field */

#define DCB_DHCSR_S_LOCKUP_OFFSET       (19U)
#define DCB_DHCSR_S_LOCKUP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, S_LOCKUP))       /*!< Mask  0x00080000 - read only field */

#define DCB_DHCSR_S_SLEEP_OFFSET       (18U)
#define DCB_DHCSR_S_SLEEP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, S_SLEEP))       /*!< Mask  0x00040000 - read only field */

#define DCB_DHCSR_S_HARD_OFFSET       (17U)
#define DCB_DHCSR_S_HARD_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, S_HARD))       /*!< Mask  0x00020000 - read only field */

#define DCB_DHCSR_S_REGRDY_OFFSET       (16U)
#define DCB_DHCSR_S_REGRDY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, S_REGRDY))       /*!< Mask  0x00010000 - read only field */

#define DCB_DHCSR_DBGKEY_OFFSET   (16U)
#define DCB_DHCSR_DBGKEY_MASK     (0xFFFFUL << REGISTER_FIELD_OFFSET(DCB, DHCSR, DBGKEY))  /*!< Mask  0xFFFF0000  - write only field */

#define DCB_DHCSR_C_SNAPSTALL_OFFSET       (5U)
#define DCB_DHCSR_C_SNAPSTALL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, C_SNAPSTALL))       /*!< Mask  0x00000020 */

#define DCB_DHCSR_C_MASKINTS_OFFSET        (3U)
#define DCB_DHCSR_C_MASKINTS_MASK          (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, C_MASKINTS))      /*!< Mask  0x00000008 */

#define DCB_DHCSR_C_STEP_OFFSET      (2U)
#define DCB_DHCSR_C_STEP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, C_STEP))      /*!< Mask  0x00000004 */

#define DCB_DHCSR_C_HALT_OFFSET      (1U)
#define DCB_DHCSR_C_HALT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, C_HALT))      /*!< Mask  0x00000002 */

#define DCB_DHCSR_C_DEBUGEN_OFFSET      (0U)
#define DCB_DHCSR_C_DEBUGEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DCB, DHCSR, C_DEBUGEN))      /*!< Mask  0x00000001 */

// Values of the register field indicating whether the processor was reset since the last read of DHCSR
#define DCB_RESETSINCELASTRST_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define DCB_RESETSINCELASTRST_ATLEASTONE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether an instruction was retired since the last read of DHCSR
#define DCB_INSTRRETIRED_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define DCB_INSTRRETIRED_ATLEASTONE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether the processor is locked up because of an unrecoverable exception
#define DCB_PROCSTATUS_NOTLOCKED            (0x0UL)  /*!< Value 0x00000000 */
#define DCB_PROCSTATUS_LOCKEDDUETOUNRECEXC  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether the processor is sleeping
#define DCB_PROCSTATUS_NOTSLEEPING  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_PROCSTATUS_SLEEPING     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether the processor is in debug state
#define DCB_PROCSTATUS_NOTDEBUGSTATE  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_PROCSTATUS_DEBUGSTATE     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether a transfer through Debug core register data register (DCRDR) is completed
#define DCB_DEBUGDATATRANSFERSTATUS_ONGOING   (0x0UL)  /*!< Value 0x00000000 */
#define DCB_DEBUGDATATRANSFERSTATUS_COMPLETE  (0x1UL)  /*!< Value 0x00000001 */

// Value to write to enable write access to the 16 LSBs of DHCSR
#define DCB_DEBUGKEY  (0xA05FUL)  /*!< Value 0x0000A05F */

// Values of debug state imprecise entry enable state
#define DCB_IMPRECISEENTRY_NOACTION  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_IMPRECISEENTRY_ALLOWED   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether a transfer through Debug core register data register (DCRDR) is completed
#define DCB_DEBUGDATATRANSFERSTATUS_ONGOING   (0x0UL)  /*!< Value 0x00000000 */
#define DCB_DEBUGDATATRANSFERSTATUS_COMPLETE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether a transfer through Debug core register data register (DCRDR) is completed
#define DCB_DEBUGDATATRANSFERSTATUS_ONGOING   (0x0UL)  /*!< Value 0x00000000 */
#define DCB_DEBUGDATATRANSFERSTATUS_COMPLETE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether a transfer through Debug core register data register (DCRDR) is completed
#define DCB_DEBUGDATATRANSFERSTATUS_ONGOING   (0x0UL)  /*!< Value 0x00000000 */
#define DCB_DEBUGDATATRANSFERSTATUS_COMPLETE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether a transfer through Debug core register data register (DCRDR) is completed
#define DCB_DEBUGDATATRANSFERSTATUS_ONGOING   (0x0UL)  /*!< Value 0x00000000 */
#define DCB_DEBUGDATATRANSFERSTATUS_COMPLETE  (0x1UL)  /*!< Value 0x00000001 */

#define DCB_OFFSET 0xDF0UL
#define DCB_BASE OFFSET_ADDRESS(SCS_BASE, DCB_OFFSET)
#define DCB REGISTER_PTR(scs_dcb_regs, DCB_BASE)

/** @} */ // End of DCB group

/** @} */ // End of RegisterGroup group

#endif // DCB_REGISTERS_H
