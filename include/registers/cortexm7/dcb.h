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

// Values of PendSV, SysTick and external configurable enable bit
#define DCB_INTERRUPTS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_INTERRUPTS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of single step enable bit
#define DCB_SINGLESTEP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_SINGLESTEP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of halt bit
#define DCB_HALT_LEAVEDEBUG  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_HALT_HALTPROC    (0x1UL)  /*!< Value 0x00000001 */

// Values of the halting debug enable bit
#define DCB_HALTINGDEBUG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DCB_HALTINGDEBUG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Debug core register selector register */
#define DCB_DCRSR_REGWnR_OFFSET  (16U)
#define DCB_DCRSR_REGWnR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DCB, DCRSR, REGWnR))       /*!< Mask  0x00010000 */

#define DCB_DCRSR_REGSEL_OFFSET  (0U)
#define DCB_DCRSR_REGSEL_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(DCB, DCRSR, REGSEL))      /*!< Mask  0x0000007F */

// Values of transfer access type bit
#define DCB_ACCESSTYPE_READ   (0x0UL)  /*!< Value 0x00000000 */
#define DCB_ACCESSTYPE_WRITE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register to transfer select bit
#define DCB_REGISTER_R0                 (0x00UL)  /*!< Value 0x00000000 */
#define DCB_REGISTER_R1                 (0x01UL)  /*!< Value 0x00000001 */
#define DCB_REGISTER_R2                 (0x02UL)  /*!< Value 0x00000002 */
#define DCB_REGISTER_R3                 (0x03UL)  /*!< Value 0x00000003 */
#define DCB_REGISTER_R4                 (0x04UL)  /*!< Value 0x00000004 */
#define DCB_REGISTER_R5                 (0x05UL)  /*!< Value 0x00000005 */
#define DCB_REGISTER_R6                 (0x06UL)  /*!< Value 0x00000006 */
#define DCB_REGISTER_R7                 (0x07UL)  /*!< Value 0x00000007 */
#define DCB_REGISTER_R8                 (0x08UL)  /*!< Value 0x00000008 */
#define DCB_REGISTER_R9                 (0x09UL)  /*!< Value 0x00000009 */
#define DCB_REGISTER_R10                (0x0AUL)  /*!< Value 0x0000000A */
#define DCB_REGISTER_R11                (0x0BUL)  /*!< Value 0x0000000B */
#define DCB_REGISTER_R12                (0x0CUL)  /*!< Value 0x0000000C */
#define DCB_REGISTER_SP                 (0x0DUL)  /*!< Value 0x0000000D */
#define DCB_REGISTER_LR                 (0x0EUL)  /*!< Value 0x0000000E */
#define DCB_REGISTER_DEBUGRETURNACCESS  (0x0FUL)  /*!< Value 0x0000000F */
#define DCB_REGISTER_xPSR               (0x10UL)  /*!< Value 0x00000010 */
#define DCB_REGISTER_MSP                (0x11UL)  /*!< Value 0x00000011 - main stack pointer */
#define DCB_REGISTER_PSP                (0x12UL)  /*!< Value 0x00000012 - process stack pointer  */
#define DCB_REGISTER_VALDIBITS          (0x14UL)  /*!< Value 0x00000014 */
#define DCB_REGISTER_FPSCR              (0x21UL)  /*!< Value 0x00000021 - floating point status and control register */
#define DCB_REGISTER_S0                 (0x40UL)  /*!< Value 0x00000040 */
#define DCB_REGISTER_S1                 (0x41UL)  /*!< Value 0x00000041 */
#define DCB_REGISTER_S2                 (0x42UL)  /*!< Value 0x00000042 */
#define DCB_REGISTER_S3                 (0x43UL)  /*!< Value 0x00000043 */
#define DCB_REGISTER_S4                 (0x44UL)  /*!< Value 0x00000044 */
#define DCB_REGISTER_S5                 (0x45UL)  /*!< Value 0x00000045 */
#define DCB_REGISTER_S6                 (0x46UL)  /*!< Value 0x00000046 */
#define DCB_REGISTER_S7                 (0x47UL)  /*!< Value 0x00000047 */
#define DCB_REGISTER_S8                 (0x48UL)  /*!< Value 0x00000048 */
#define DCB_REGISTER_S9                 (0x49UL)  /*!< Value 0x00000049 */
#define DCB_REGISTER_S10                (0x4AUL)  /*!< Value 0x0000004A */
#define DCB_REGISTER_S11                (0x4BUL)  /*!< Value 0x0000004B */
#define DCB_REGISTER_S12                (0x4CUL)  /*!< Value 0x0000004C */
#define DCB_REGISTER_S13                (0x4DUL)  /*!< Value 0x0000004D */
#define DCB_REGISTER_S14                (0x4EUL)  /*!< Value 0x0000004E */
#define DCB_REGISTER_S15                (0x4FUL)  /*!< Value 0x0000004F */
#define DCB_REGISTER_S16                (0x50UL)  /*!< Value 0x00000050 */
#define DCB_REGISTER_S17                (0x51UL)  /*!< Value 0x00000051 */
#define DCB_REGISTER_S18                (0x52UL)  /*!< Value 0x00000052 */
#define DCB_REGISTER_S19                (0x53UL)  /*!< Value 0x00000053 */
#define DCB_REGISTER_S20                (0x54UL)  /*!< Value 0x00000054 */
#define DCB_REGISTER_S21                (0x55UL)  /*!< Value 0x00000055 */
#define DCB_REGISTER_S22                (0x56UL)  /*!< Value 0x00000056 */
#define DCB_REGISTER_S23                (0x57UL)  /*!< Value 0x00000057 */
#define DCB_REGISTER_S24                (0x58UL)  /*!< Value 0x00000058 */
#define DCB_REGISTER_S25                (0x59UL)  /*!< Value 0x00000059 */
#define DCB_REGISTER_S26                (0x5AUL)  /*!< Value 0x0000005A */
#define DCB_REGISTER_S27                (0x5BUL)  /*!< Value 0x0000005B */
#define DCB_REGISTER_S28                (0x5CUL)  /*!< Value 0x0000005C */
#define DCB_REGISTER_S29                (0x5FUL)  /*!< Value 0x0000005D */
#define DCB_REGISTER_S30                (0x5EUL)  /*!< Value 0x0000005E */
#define DCB_REGISTER_S31                (0x5FUL)  /*!< Value 0x0000005F */

#define DCB_OFFSET 0xDF0UL
#define DCB_BASE OFFSET_ADDRESS(SCS_BASE, DCB_OFFSET)
#define DCB REGISTER_PTR(scs_dcb_regs, DCB_BASE)

/** @} */ // End of DCB group

/** @} */ // End of RegisterGroup group

#endif // DCB_REGISTERS_H
