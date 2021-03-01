#ifndef DBG_REGISTERS_H
#define DBG_REGISTERS_H
/**
 * @copyright
 * @file debug.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Core debug registers in system control space (SCS) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CoreDebug Core debug registers in system control space (SCS)
 *  @brief Core debug registers in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t DHCSR;          /*!< Debug halting control and status register     (Offset 0x0)          */
	WO uint32_t DCRSR;          /*!< Debug core regiser selector register          (Offset 0x4)          */
	RW uint32_t DCRDR;          /*!< Debug core register data register             (Offset 0x8)          */
	RW uint32_t DEMCR;          /*!< Debug exception and monitor control register  (Offset 0xC)          */
	   uint32_t reserved[64U];  /*!< Reserved                                      (Offset 0x10 to 0x8C) */
} scs_dbg_regs;

/*!< Core debug registers in system control space (SCS) registers */
/*!< Debug halting control and status register */
#define DBG_DHCSR_S_RESET_ST_OFFSET   (25U)
#define DBG_DHCSR_S_RESET_ST_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, S_RESET_ST))   /*!< Mask  0x02000000 - read only field */

#define DBG_DHCSR_S_RETIRE_ST_OFFSET  (24U)
#define DBG_DHCSR_S_RETIRE_ST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, S_RETIRE_ST))  /*!< Mask  0x01000000 - read only field */

#define DBG_DHCSR_S_LOCKUP_OFFSET     (19U)
#define DBG_DHCSR_S_LOCKUP_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, S_LOCKUP))     /*!< Mask  0x00080000 - read only field */

#define DBG_DHCSR_S_SLEEP_OFFSET      (18U)
#define DBG_DHCSR_S_SLEEP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, S_SLEEP))      /*!< Mask  0x00040000 - read only field */

#define DBG_DHCSR_S_HARD_OFFSET       (17U)
#define DBG_DHCSR_S_HARD_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, S_HARD))       /*!< Mask  0x00020000 - read only field */

#define DBG_DHCSR_S_REGRDY_OFFSET     (16U)
#define DBG_DHCSR_S_REGRDY_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, S_REGRDY))     /*!< Mask  0x00010000 - read only field */

#define DBG_DHCSR_DBGKEY_OFFSET       (16U)
#define DBG_DHCSR_DBGKEY_MASK         (0xFFFFUL << REGISTER_FIELD_OFFSET(DBG, DHCSR, DBGKEY))    /*!< Mask  0xFFFF0000  - write only field */

#define DBG_DHCSR_C_SNAPSTALL_OFFSET  (5U)
#define DBG_DHCSR_C_SNAPSTALL_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, C_SNAPSTALL))  /*!< Mask  0x00000020 */

#define DBG_DHCSR_C_MASKINTS_OFFSET   (3U)
#define DBG_DHCSR_C_MASKINTS_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, C_MASKINTS))   /*!< Mask  0x00000008 */

#define DBG_DHCSR_C_STEP_OFFSET       (2U)
#define DBG_DHCSR_C_STEP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, C_STEP))       /*!< Mask  0x00000004 */

#define DBG_DHCSR_C_HALT_OFFSET       (1U)
#define DBG_DHCSR_C_HALT_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, C_HALT))       /*!< Mask  0x00000002 */

#define DBG_DHCSR_C_DEBUGEN_OFFSET    (0U)
#define DBG_DHCSR_C_DEBUGEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DBG, DHCSR, C_DEBUGEN))    /*!< Mask  0x00000001 */

// Values of the register field indicating whether the processor was reset since the last read of DHCSR
#define DBG_RESETSINCELASTRST_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define DBG_RESETSINCELASTRST_ATLEASTONE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether an instruction was retired since the last read of DHCSR
#define DBG_INSTRRETIRED_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define DBG_INSTRRETIRED_ATLEASTONE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether the processor is locked up because of an unrecoverable exception
#define DBG_PROCSTATUS_NOTLOCKED            (0x0UL)  /*!< Value 0x00000000 */
#define DBG_PROCSTATUS_LOCKEDDUETOUNRECEXC  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether the processor is sleeping
#define DBG_PROCSTATUS_NOTSLEEPING  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_PROCSTATUS_SLEEPING     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether the processor is in debug state
#define DBG_PROCSTATUS_NOTDEBUGSTATE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_PROCSTATUS_DEBUGSTATE     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register field indicating whether a transfer through Debug core register data register (DCRDR) is completed
#define DBG_DEBUGDATATRANSFERSTATUS_ONGOING   (0x0UL)  /*!< Value 0x00000000 */
#define DBG_DEBUGDATATRANSFERSTATUS_COMPLETE  (0x1UL)  /*!< Value 0x00000001 */

// Value to write to enable write access to the 16 LSBs of DHCSR
#define DBG_DEBUGKEY  (0xA05FUL)  /*!< Value 0x0000A05F */

// Values of debug state imprecise entry enable state
#define DBG_IMPRECISEENTRY_NOACTION  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_IMPRECISEENTRY_ALLOWED   (0x1UL)  /*!< Value 0x00000001 */

// Values of PendSV, SysTick and external configurable enable bit
#define DBG_INTERRUPTS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_INTERRUPTS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of single step enable bit
#define DBG_SINGLESTEP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_SINGLESTEP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of halt bit
#define DBG_HALT_LEAVEDEBUG  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_HALT_HALTPROC    (0x1UL)  /*!< Value 0x00000001 */

// Values of the halting debug enable bit
#define DBG_HALTINGDEBUG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_HALTINGDEBUG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Debug core register selector register */
#define DBG_DCRSR_REGWnR_OFFSET  (16U)
#define DBG_DCRSR_REGWnR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DBG, DCRSR, REGWnR))       /*!< Mask  0x00010000 */

#define DBG_DCRSR_REGSEL_OFFSET  (0U)
#define DBG_DCRSR_REGSEL_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(DBG, DCRSR, REGSEL))      /*!< Mask  0x0000007F */

// Values of transfer access type bit
#define DBG_ACCESSTYPE_READ   (0x0UL)  /*!< Value 0x00000000 */
#define DBG_ACCESSTYPE_WRITE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register to transfer select bit
#define DBG_REGISTER_R0                 (0x00UL)  /*!< Value 0x00000000 */
#define DBG_REGISTER_R1                 (0x01UL)  /*!< Value 0x00000001 */
#define DBG_REGISTER_R2                 (0x02UL)  /*!< Value 0x00000002 */
#define DBG_REGISTER_R3                 (0x03UL)  /*!< Value 0x00000003 */
#define DBG_REGISTER_R4                 (0x04UL)  /*!< Value 0x00000004 */
#define DBG_REGISTER_R5                 (0x05UL)  /*!< Value 0x00000005 */
#define DBG_REGISTER_R6                 (0x06UL)  /*!< Value 0x00000006 */
#define DBG_REGISTER_R7                 (0x07UL)  /*!< Value 0x00000007 */
#define DBG_REGISTER_R8                 (0x08UL)  /*!< Value 0x00000008 */
#define DBG_REGISTER_R9                 (0x09UL)  /*!< Value 0x00000009 */
#define DBG_REGISTER_R10                (0x0AUL)  /*!< Value 0x0000000A */
#define DBG_REGISTER_R11                (0x0BUL)  /*!< Value 0x0000000B */
#define DBG_REGISTER_R12                (0x0CUL)  /*!< Value 0x0000000C */
#define DBG_REGISTER_SP                 (0x0DUL)  /*!< Value 0x0000000D */
#define DBG_REGISTER_LR                 (0x0EUL)  /*!< Value 0x0000000E */
#define DBG_REGISTER_DEBUGRETURNACCESS  (0x0FUL)  /*!< Value 0x0000000F - address of the first instruction to be executed on exit from debug state */
#define DBG_REGISTER_xPSR               (0x10UL)  /*!< Value 0x00000010 */
#define DBG_REGISTER_MSP                (0x11UL)  /*!< Value 0x00000011 - main stack pointer */
#define DBG_REGISTER_PSP                (0x12UL)  /*!< Value 0x00000012 - process stack pointer  */
#define DBG_REGISTER_CONTROL            (0x14UL)  /*!< Value 0x00000014 - DCRDR[24] is 1 and DCRDR[31:25] is 0b0000000 */
#define DBG_REGISTER_FAULTMASK          (0x14UL)  /*!< Value 0x00000014 - DCRDR[16] is 1 and DCRDR[31:17] is 0b000000000000000 */
#define DBG_REGISTER_BASEPRI            (0x14UL)  /*!< Value 0x00000014 - DCRDR[8] is 1 and DCRDR[31:9] is 0b00000000000000000000000 */
#define DBG_REGISTER_PRIMASK            (0x14UL)  /*!< Value 0x00000014 - DCRDR[0] is 1 and DCRDR[31:1] is 0b0000000000000000000000000000000 */
#define DBG_REGISTER_FPSCR              (0x21UL)  /*!< Value 0x00000021 - floating point status and control register */
#define DBG_REGISTER_S0                 (0x40UL)  /*!< Value 0x00000040 */
#define DBG_REGISTER_S1                 (0x41UL)  /*!< Value 0x00000041 */
#define DBG_REGISTER_S2                 (0x42UL)  /*!< Value 0x00000042 */
#define DBG_REGISTER_S3                 (0x43UL)  /*!< Value 0x00000043 */
#define DBG_REGISTER_S4                 (0x44UL)  /*!< Value 0x00000044 */
#define DBG_REGISTER_S5                 (0x45UL)  /*!< Value 0x00000045 */
#define DBG_REGISTER_S6                 (0x46UL)  /*!< Value 0x00000046 */
#define DBG_REGISTER_S7                 (0x47UL)  /*!< Value 0x00000047 */
#define DBG_REGISTER_S8                 (0x48UL)  /*!< Value 0x00000048 */
#define DBG_REGISTER_S9                 (0x49UL)  /*!< Value 0x00000049 */
#define DBG_REGISTER_S10                (0x4AUL)  /*!< Value 0x0000004A */
#define DBG_REGISTER_S11                (0x4BUL)  /*!< Value 0x0000004B */
#define DBG_REGISTER_S12                (0x4CUL)  /*!< Value 0x0000004C */
#define DBG_REGISTER_S13                (0x4DUL)  /*!< Value 0x0000004D */
#define DBG_REGISTER_S14                (0x4EUL)  /*!< Value 0x0000004E */
#define DBG_REGISTER_S15                (0x4FUL)  /*!< Value 0x0000004F */
#define DBG_REGISTER_S16                (0x50UL)  /*!< Value 0x00000050 */
#define DBG_REGISTER_S17                (0x51UL)  /*!< Value 0x00000051 */
#define DBG_REGISTER_S18                (0x52UL)  /*!< Value 0x00000052 */
#define DBG_REGISTER_S19                (0x53UL)  /*!< Value 0x00000053 */
#define DBG_REGISTER_S20                (0x54UL)  /*!< Value 0x00000054 */
#define DBG_REGISTER_S21                (0x55UL)  /*!< Value 0x00000055 */
#define DBG_REGISTER_S22                (0x56UL)  /*!< Value 0x00000056 */
#define DBG_REGISTER_S23                (0x57UL)  /*!< Value 0x00000057 */
#define DBG_REGISTER_S24                (0x58UL)  /*!< Value 0x00000058 */
#define DBG_REGISTER_S25                (0x59UL)  /*!< Value 0x00000059 */
#define DBG_REGISTER_S26                (0x5AUL)  /*!< Value 0x0000005A */
#define DBG_REGISTER_S27                (0x5BUL)  /*!< Value 0x0000005B */
#define DBG_REGISTER_S28                (0x5CUL)  /*!< Value 0x0000005C */
#define DBG_REGISTER_S29                (0x5FUL)  /*!< Value 0x0000005D */
#define DBG_REGISTER_S30                (0x5EUL)  /*!< Value 0x0000005E */
#define DBG_REGISTER_S31                (0x5FUL)  /*!< Value 0x0000005F */

/*!< Debug core register data register */
#define DBG_DCRDR_DBGTMP_OFFSET  (0U)
#define DBG_DCRDR_DBGTMP_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Mask  0xFFFFFFFF */
#define DBG_DCRDR_DBGTMP_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000001 */
#define DBG_DCRDR_DBGTMP_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000002 */
#define DBG_DCRDR_DBGTMP_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000004 */
#define DBG_DCRDR_DBGTMP_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000008 */
#define DBG_DCRDR_DBGTMP_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000010 */
#define DBG_DCRDR_DBGTMP_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000020 */
#define DBG_DCRDR_DBGTMP_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000040 */
#define DBG_DCRDR_DBGTMP_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000080 */
#define DBG_DCRDR_DBGTMP_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000100 */
#define DBG_DCRDR_DBGTMP_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000200 */
#define DBG_DCRDR_DBGTMP_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000400 */
#define DBG_DCRDR_DBGTMP_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00000800 */
#define DBG_DCRDR_DBGTMP_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00001000 */
#define DBG_DCRDR_DBGTMP_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00002000 */
#define DBG_DCRDR_DBGTMP_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00004000 */
#define DBG_DCRDR_DBGTMP_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00008000 */
#define DBG_DCRDR_DBGTMP_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00010000 */
#define DBG_DCRDR_DBGTMP_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00020000 */
#define DBG_DCRDR_DBGTMP_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00040000 */
#define DBG_DCRDR_DBGTMP_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00080000 */
#define DBG_DCRDR_DBGTMP_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00100000 */
#define DBG_DCRDR_DBGTMP_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00200000 */
#define DBG_DCRDR_DBGTMP_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00400000 */
#define DBG_DCRDR_DBGTMP_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x00800000 */
#define DBG_DCRDR_DBGTMP_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x01000000 */
#define DBG_DCRDR_DBGTMP_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x02000000 */
#define DBG_DCRDR_DBGTMP_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x04000000 */
#define DBG_DCRDR_DBGTMP_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x08000000 */
#define DBG_DCRDR_DBGTMP_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x10000000 */
#define DBG_DCRDR_DBGTMP_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x20000000 */
#define DBG_DCRDR_DBGTMP_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x40000000 */
#define DBG_DCRDR_DBGTMP_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DBG, DCRDR, DBGTMP))      /*!< Value 0x80000000 */

/*!< Debug exception and monitor control register */
#define DBG_DEMCR_TRCENA_OFFSET        (24U)
#define DBG_DEMCR_TRCENA_MASK          (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, TRCENA))        /*!< Mask  0x01000000 */

#define DBG_DEMCR_MON_REQ_OFFSET       (19U)
#define DBG_DEMCR_MON_REQ_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, MON_REQ))       /*!< Mask  0x00080000 */

#define DBG_DEMCR_MON_STEP_OFFSET      (18U)
#define DBG_DEMCR_MON_STEP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, MON_STEP))      /*!< Mask  0x00040000 */

#define DBG_DEMCR_MON_PEND_OFFSET      (17U)
#define DBG_DEMCR_MON_PEND_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, MON_PEND))      /*!< Mask  0x00020000 */

#define DBG_DEMCR_MON_EN_OFFSET        (16U)
#define DBG_DEMCR_MON_EN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, MON_EN))        /*!< Mask  0x00010000 */

#define DBG_DEMCR_VC_HARDERR_OFFSET    (10U)
#define DBG_DEMCR_VC_HARDERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_HARDERR))    /*!< Mask  0x00000400 */

#define DBG_DEMCR_VC_INTERR_OFFSET     (9U)
#define DBG_DEMCR_VC_INTERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_INTERR))     /*!< Mask  0x00000200 */

#define DBG_DEMCR_VC_BUSERR_OFFSET     (8U)
#define DBG_DEMCR_VC_BUSERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_BUSERR))     /*!< Mask  0x00000100 */

#define DBG_DEMCR_VC_STATERR_OFFSET    (7U)
#define DBG_DEMCR_VC_STATERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_STATERR))    /*!< Mask  0x00000080 */

#define DBG_DEMCR_VC_CHKERR_OFFSET     (6U)
#define DBG_DEMCR_VC_CHKERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_CHKERR))     /*!< Mask  0x00000040 */

#define DBG_DEMCR_VC_NOCPERR_OFFSET    (5U)
#define DBG_DEMCR_VC_NOCPERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_NOCPERR))    /*!< Mask  0x00000020 */

#define DBG_DEMCR_VC_MMERR_OFFSET      (4U)
#define DBG_DEMCR_VC_MMERR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_MMERR))      /*!< Mask  0x00000010 */

#define DBG_DEMCR_VC_CORERESET_OFFSET  (0U)
#define DBG_DEMCR_VC_CORERESET_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DBG, DEMCR, VC_CORERESET))  /*!< Mask  0x00000001 */

// Values of data watchpoint and trace (DWT) and instrumentatio trace macrocell (ITM) enable bit
#define DBG_TRACE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_TRACE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of enable bit to step the processor
#define DBG_MONITORSTEP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_MONITORSTEP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of set or clear pending exception control bit
#define DBG_MONITOREXCEPTION_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_MONITOREXCEPTION_SET    (0x1UL)  /*!< Value 0x00000001 */

// Values of debug monitor enable bit
#define DBG_MONITOR_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_MONITOR_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a HardFault exception enable bit
#define DBG_HARDFAULT_NOTRAP  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_HARDFAULT_TRAP    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a HardFault exception enable bit
#define DBG_HARDFAULT_NOTRAP  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_HARDFAULT_TRAP    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a fault occurring during exception entry or return enable bit
#define DBG_INTERRUPT_NOTRAP  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_INTERRUPT_TRAP    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a BusFault exception enable bit
#define DBG_BUSFAULT_NOTRAP  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_BUSFAULT_TRAP    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a UsageFault exception caused by a state information error enable bit
#define DBG_USAGEFAULT_NOTRAPONSTATEINFOERR  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_USAGEFAULT_TRAPONSTATEINFOERR    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a UsageFault exception caused by a checking error enable bit
#define DBG_USAGEFAULT_NOTRAPONCHECKERR  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_USAGEFAULT_TRAPONCHECKERR    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a UsageFault exception caused by an access to a coprocessor enable bit
#define DBG_USAGEFAULT_NOTRAPONCOPROCESSORACCESS  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_USAGEFAULT_TRAPONCOPROCESSORACCESS    (0x1UL)  /*!< Value 0x00000001 */

// Values of halting debug trap on a MemManage exception enable bit
#define DBG_MEMMANAGE_NOTRAP  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_MEMMANAGE_TRAP    (0x1UL)  /*!< Value 0x00000001 */

// Values of reset vector catch (VC) enable bit
#define DBG_RSTVECTORCATCH_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define DBG_RSTVECTORCATCH_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

#define DBG_OFFSET 0xDF0UL
#define DBG_BASE OFFSET_ADDRESS(SCS_BASE, DBG_OFFSET)
#define DBG REGISTER_PTR(scs_dbg_regs, DBG_BASE)

/** @} */ // End of CoreDebug group

/** @} */ // End of RegisterGroup group

#endif // DBG_REGISTERS_H
