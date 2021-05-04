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
	RW uint32_t STIM[32U];        /*!< Stimulus port register                      (Offset 0x0 to 0x7C)    */
	   uint32_t reserved0[864U];  /*!< Reserved                                    (Offset 0x80 to 0xDFC)  */
	WO uint32_t TER;              /*!< Trace enable register                       (Offset 0xE00)          */
	   uint32_t reserved1[15U];   /*!< Reserved                                    (Offset 0xE04 to 0xE3C) */
	RW uint32_t TPR;              /*!< Trace privilege register                    (Offset 0xE40)          */
	   uint32_t reserved2[15U];   /*!< Reserved                                    (Offset 0xE44 to 0xE7C) */
	RW uint32_t TCR;              /*!< Trace control register                      (Offset 0xE80)          */
	   uint32_t reserved3[27U];   /*!< Reserved                                    (Offset 0xE84 to 0xEEC) */
	RO uint32_t ITATRDY;          /*!< Integration mode: Read ATB ready register   (Offset 0xEF0)          */
	   uint32_t reserved4;        /*!< Reserved                                    (Offset 0xEF4)          */
	WO uint32_t ITATVAL;          /*!< Integration mode: Write ATB valid register  (Offset 0xEF8)          */
	   uint32_t reserved5;        /*!< Reserved                                    (Offset 0xEFC)          */
	RW uint32_t TCTRL;            /*!< Integration mode control register           (Offset 0xF00)          */
	   uint32_t reserved6[43U];   /*!< Reserved                                    (Offset 0xF04 to 0xFAC) */
	RW uint32_t LAR;              /*!< CoreSight lock access register              (Offset 0xFB0)          */
	RW uint32_t LSR;              /*!< CoreSight lock status register              (Offset 0xFB4)          */
	   uint32_t reserved7[6U];    /*!< Reserved                                    (Offset 0xFB8 to 0xFCC) */
	R0 uint32_t PID4;             /*!< Peripheral identification 4 register        (Offset 0xFD0)          */
	R0 uint32_t PID5;             /*!< Peripheral identification 5 register        (Offset 0xFD4)          */
	R0 uint32_t PID6;             /*!< Peripheral identification 6 register        (Offset 0xFD8)          */
	R0 uint32_t PID7;             /*!< Peripheral identification 7 register        (Offset 0xFDC)          */
	R0 uint32_t PID0;             /*!< Peripheral identification 0 register        (Offset 0xFE0)          */
	R0 uint32_t PID1;             /*!< Peripheral identification 1 register        (Offset 0xFE4)          */
	R0 uint32_t PID2;             /*!< Peripheral identification 2 register        (Offset 0xFE8)          */
	R0 uint32_t PID3;             /*!< Peripheral identification 3 register        (Offset 0xFEC)          */
	R0 uint32_t CID0;             /*!< Component identification 0 register         (Offset 0xFF0)          */
	R0 uint32_t CID1;             /*!< Component identification 1 register         (Offset 0xFF4)          */
	R0 uint32_t CID2;             /*!< Component identification 2 register         (Offset 0xFF8)          */
	R0 uint32_t CID3;             /*!< Component identification 3 register         (Offset 0xFFC)          */
} ppb_itm_regs;

/*!< Instrumentation trace macrocell (ITM) registers in private peripheral bus (PPB) registers */
/*!< Stimulus port register */
#define ITM_STIM_STIMULUS_OFFSET  (0U)
#define ITM_STIM_STIMULUS_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Mask  0xFFFFFFFF - write bit assignments */
#define ITM_STIM_STIMULUS_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000001                         */
#define ITM_STIM_STIMULUS_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000002                         */
#define ITM_STIM_STIMULUS_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000004                         */
#define ITM_STIM_STIMULUS_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000008                         */
#define ITM_STIM_STIMULUS_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000010                         */
#define ITM_STIM_STIMULUS_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000020                         */
#define ITM_STIM_STIMULUS_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000040                         */
#define ITM_STIM_STIMULUS_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000080                         */
#define ITM_STIM_STIMULUS_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000100                         */
#define ITM_STIM_STIMULUS_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000200                         */
#define ITM_STIM_STIMULUS_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000400                         */
#define ITM_STIM_STIMULUS_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00000800                         */
#define ITM_STIM_STIMULUS_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00001000                         */
#define ITM_STIM_STIMULUS_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00002000                         */
#define ITM_STIM_STIMULUS_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00004000                         */
#define ITM_STIM_STIMULUS_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00008000                         */
#define ITM_STIM_STIMULUS_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00010000                         */
#define ITM_STIM_STIMULUS_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00020000                         */
#define ITM_STIM_STIMULUS_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00040000                         */
#define ITM_STIM_STIMULUS_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00080000                         */
#define ITM_STIM_STIMULUS_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00100000                         */
#define ITM_STIM_STIMULUS_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00200000                         */
#define ITM_STIM_STIMULUS_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00400000                         */
#define ITM_STIM_STIMULUS_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x00800000                         */
#define ITM_STIM_STIMULUS_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x01000000                         */
#define ITM_STIM_STIMULUS_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x02000000                         */
#define ITM_STIM_STIMULUS_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x04000000                         */
#define ITM_STIM_STIMULUS_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x08000000                         */
#define ITM_STIM_STIMULUS_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x10000000                         */
#define ITM_STIM_STIMULUS_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x20000000                         */
#define ITM_STIM_STIMULUS_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x40000000                         */
#define ITM_STIM_STIMULUS_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, STIM, STIMULUS))  /*!< Value 0x80000000                         */

#define ITM_STIM_FIFOREADY_OFFSET (0U)
#define ITM_STIM_FIFOREADY_MASK   (0x1UL << REGISTER_FIELD_OFFSET(ITM, STIM, FIFOREADY))        /*!< Mask  0x00000001 - read bit assignments  */

// Values of fifo ready status bit
#define ITM_FIFO_FULL        (0x0UL)  /*!< Value 0x00000000 */
#define ITM_FIFO_ACCEPTDATA  (0x1UL)  /*!< Value 0x00000001 */

/*!< Trace enable register */
#define ITM_TER_STIMENA_OFFSET  (0U)
#define ITM_TER_STIMENA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Mask  0xFFFFFFFF */
#define ITM_TER_STIMENA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000001 */
#define ITM_TER_STIMENA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000002 */
#define ITM_TER_STIMENA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000004 */
#define ITM_TER_STIMENA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000008 */
#define ITM_TER_STIMENA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000010 */
#define ITM_TER_STIMENA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000020 */
#define ITM_TER_STIMENA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000040 */
#define ITM_TER_STIMENA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000080 */
#define ITM_TER_STIMENA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000100 */
#define ITM_TER_STIMENA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000200 */
#define ITM_TER_STIMENA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000400 */
#define ITM_TER_STIMENA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00000800 */
#define ITM_TER_STIMENA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00001000 */
#define ITM_TER_STIMENA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00002000 */
#define ITM_TER_STIMENA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00004000 */
#define ITM_TER_STIMENA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00008000 */
#define ITM_TER_STIMENA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00010000 */
#define ITM_TER_STIMENA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00020000 */
#define ITM_TER_STIMENA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00040000 */
#define ITM_TER_STIMENA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00080000 */
#define ITM_TER_STIMENA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00100000 */
#define ITM_TER_STIMENA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00200000 */
#define ITM_TER_STIMENA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00400000 */
#define ITM_TER_STIMENA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x00800000 */
#define ITM_TER_STIMENA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x01000000 */
#define ITM_TER_STIMENA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x02000000 */
#define ITM_TER_STIMENA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x04000000 */
#define ITM_TER_STIMENA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x08000000 */
#define ITM_TER_STIMENA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x10000000 */
#define ITM_TER_STIMENA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x20000000 */
#define ITM_TER_STIMENA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x40000000 */
#define ITM_TER_STIMENA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, TER, STIMENA))  /*!< Value 0x80000000 */

// Values of trace enable bit
#define ITM_STIM_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_STIM_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

/*!< Trace privilege register */
#define ITM_TPR_PRIVMASK_OFFSET  (0U)
#define ITM_TPR_PRIVMASK_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Mask  0xFFFFFFFF */
#define ITM_TPR_PRIVMASK_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000001 */
#define ITM_TPR_PRIVMASK_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000002 */
#define ITM_TPR_PRIVMASK_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000004 */
#define ITM_TPR_PRIVMASK_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000008 */
#define ITM_TPR_PRIVMASK_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000010 */
#define ITM_TPR_PRIVMASK_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000020 */
#define ITM_TPR_PRIVMASK_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000040 */
#define ITM_TPR_PRIVMASK_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000080 */
#define ITM_TPR_PRIVMASK_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000100 */
#define ITM_TPR_PRIVMASK_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000200 */
#define ITM_TPR_PRIVMASK_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000400 */
#define ITM_TPR_PRIVMASK_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00000800 */
#define ITM_TPR_PRIVMASK_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00001000 */
#define ITM_TPR_PRIVMASK_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00002000 */
#define ITM_TPR_PRIVMASK_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00004000 */
#define ITM_TPR_PRIVMASK_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00008000 */
#define ITM_TPR_PRIVMASK_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00010000 */
#define ITM_TPR_PRIVMASK_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00020000 */
#define ITM_TPR_PRIVMASK_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00040000 */
#define ITM_TPR_PRIVMASK_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00080000 */
#define ITM_TPR_PRIVMASK_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00100000 */
#define ITM_TPR_PRIVMASK_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00200000 */
#define ITM_TPR_PRIVMASK_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00400000 */
#define ITM_TPR_PRIVMASK_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x00800000 */
#define ITM_TPR_PRIVMASK_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x01000000 */
#define ITM_TPR_PRIVMASK_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x02000000 */
#define ITM_TPR_PRIVMASK_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x04000000 */
#define ITM_TPR_PRIVMASK_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x08000000 */
#define ITM_TPR_PRIVMASK_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x10000000 */
#define ITM_TPR_PRIVMASK_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x20000000 */
#define ITM_TPR_PRIVMASK_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x40000000 */
#define ITM_TPR_PRIVMASK_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, TPR, PRIVMASK))  /*!< Value 0x80000000 */

// Values of stimulus access type select bit
#define ITM_STIMACCESS_UNPRIVILEGED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_STIMACCESS_PRIVILEGED    (0x1UL)  /*!< Value 0x00000001 */

/*!< Trace control register */
#define ITM_TCR_BUSY_OFFSET        (23U)
#define ITM_TCR_BUSY_MASK          (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCR, BUSY))         /*!< Mask  0x00800000 */

#define ITM_TCR_TRACEBUSID_OFFSET  (16U)
#define ITM_TCR_TRACEBUSID_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Mask  0x007F0000 */
#define ITM_TCR_TRACEBUSID_0       (0x01UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00010000 */
#define ITM_TCR_TRACEBUSID_1       (0x02UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00020000 */
#define ITM_TCR_TRACEBUSID_2       (0x04UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00040000 */
#define ITM_TCR_TRACEBUSID_3       (0x08UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00080000 */
#define ITM_TCR_TRACEBUSID_4       (0x10UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00100000 */
#define ITM_TCR_TRACEBUSID_5       (0x20UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00200000 */
#define ITM_TCR_TRACEBUSID_6       (0x40UL << REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID))  /*!< Value 0x00400000 */

#define ITM_TCR_GTSFREQ_OFFSET     (10U)
#define ITM_TCR_GTSFREQ_MASK       (0x3UL << REGISTER_FIELD_OFFSET(ITM, TCR, GTSFREQ))      /*!< Mask  0x00000C00 */

#define ITM_TCR_TSPRESCALE_OFFSET  (8U)
#define ITM_TCR_TSPRESCALE_MASK    (0x3UL << REGISTER_FIELD_OFFSET(ITM, TCR, TSPRESCALE))   /*!< Mask  0x00000300 */

#define ITM_TCR_SWOENA_OFFSET      (4U)
#define ITM_TCR_SWOENA_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCR, SWOENA))       /*!< Mask  0x00000010 */

#define ITM_TCR_TXENA_OFFSET       (3U)
#define ITM_TCR_TXENA_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCR, TXENA))        /*!< Mask  0x00000008 */

#define ITM_TCR_SYNCENA_OFFSET     (2U)
#define ITM_TCR_SYNCENA_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCR, SYNCENA))      /*!< Mask  0x00000004 */

#define ITM_TCR_TSENA_OFFSET       (1U)
#define ITM_TCR_TSENA_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCR, TSENA))        /*!< Mask  0x00000002 */

#define ITM_TCR_ITMENA_OFFSET      (0U)
#define ITM_TCR_ITMENA_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCR, ITMENA))       /*!< Mask  0x00000001 */

// Values of instrumentation trace macrocell (ITM) busy bit
#define ITM_BUSY_NOTPROCESSINGEVENTS  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_BUSY_PROCESSINGEVENTS     (0x1UL)  /*!< Value 0x00000001 */

// Values of trace bus ID bit
#define ITM_TRACEBUSID_STREAMTYPE  (0U)

#define ITM_TRACEBUSID_STREAMTYPE_OFFSET  (REGISTER_FIELD_OFFSET(ITM, TCR, TRACEBUSID) + ITM_TRACEBUSID_STREAMTYPE)
#define ITM_TRACEBUSID_STREAMTYPE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, TRACEBUSID, STREAMTYPE))  /*!< Mask  0x00010000 */

#define ITM_TRACEBUSSTREAM_INSTRUCTION  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_TRACEBUSSTREAM_DATA         (0x1UL)  /*!< Value 0x00000001 */

// Values of global timestamp generation frequency select bit
#define ITM_GLOBALTIMESTAMPGENERATION_DISABLED    (0x0UL)  /*!< Value 0x00000000 */
#define ITM_GLOBALTIMESTAMPGENERATION_128CYCLES   (0x1UL)  /*!< Value 0x00000001 */
#define ITM_GLOBALTIMESTAMPGENERATION_8192CYCLES  (0x2UL)  /*!< Value 0x00000002 */
#define ITM_GLOBALTIMESTAMPGENERATION_EMPTYFIFO   (0x3UL)  /*!< Value 0x00000003 */

// Values of local timestamp prescaler select bit
#define ITM_LOCALTIMESTAMPPRESCALER_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define ITM_LOCALTIMESTAMPPRESCALER_DIVIDEBY4   (0x1UL)  /*!< Value 0x00000001 */
#define ITM_LOCALTIMESTAMPPRESCALER_DIVIDEBY16  (0x2UL)  /*!< Value 0x00000002 */
#define ITM_LOCALTIMESTAMPPRESCALER_DIVIDEBY64  (0x3UL)  /*!< Value 0x00000003 */

// Values of timestamp counter clock select bit
#define ITM_TIMESTAMPCNTSRC_PROCESSOR  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_TIMESTAMPCNTSRC_TPIUINTF   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register enabling data watchpoint and trace (DWT) packet forwarding to instrumentation trace macrocell (ITM) for output to the trace port interface unit (TPIU)
#define ITM_DWTFORWARDING_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_DWTFORWARDING_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register enabling synchronization packet transmission for a synchronous trace port interface unit (TPIU)
#define ITM_SYNCPKT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_SYNCPKT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of local timestamp enable bit
#define ITM_LOCALTIMESTAMP_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_LOCALTIMESTAMP_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of instrumentation trace macrocell (ITM) enable bit
#define ITM_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

/*!< Integration mode: Read ATB ready register */
#define ITM_ITATRDY_AFVALIDM_OFFSET  (1U)
#define ITM_ITATRDY_AFVALIDM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, ITATRDY, AFVALIDM))  /*!< Mask  0x00000002 */

#define ITM_ITATRDY_ATREADYM_OFFSET  (0U)
#define ITM_ITATRDY_ATREADYM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, ITATRDY, ATREADYM))  /*!< Mask  0x00000001 */

/*!< Integration mode: Write ATB valid register */
#define ITM_ITATVAL_ATBYTES_OFFSET  (8U)
#define ITM_ITATVAL_ATBYTES_MASK    (0x7UL << REGISTER_FIELD_OFFSET(ITM, ITATVAL, ATBYTES))  /*!< Mask  0x00000700 */

#define ITM_ITATVAL_AFREADY_OFFSET  (1U)
#define ITM_ITATVAL_AFREADY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, ITATVAL, AFREADY))  /*!< Mask  0x00000002 */

#define ITM_ITATVAL_ATVALID_OFFSET  (0U)
#define ITM_ITATVAL_ATVALID_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, ITATVAL, ATVALID))  /*!< Mask  0x00000001 */

/*!< Integration mode control register */
#define ITM_TCTRL_IME_OFFSET  (0U)
#define ITM_TCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, TCTRL, IME))  /*!< Mask  0x00000001 */

// Values of integration mode enable bit
#define ITM_ETMM7_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_ETMM7_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

/*!< CoreSight lock access register */
#define ITM_LAR_KEY_OFFSET  (0U)
#define ITM_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define ITM_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000001 */
#define ITM_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000002 */
#define ITM_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000004 */
#define ITM_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000008 */
#define ITM_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000010 */
#define ITM_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000020 */
#define ITM_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000040 */
#define ITM_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000080 */
#define ITM_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000100 */
#define ITM_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000200 */
#define ITM_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000400 */
#define ITM_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00000800 */
#define ITM_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00001000 */
#define ITM_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00002000 */
#define ITM_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00004000 */
#define ITM_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00008000 */
#define ITM_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00010000 */
#define ITM_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00020000 */
#define ITM_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00040000 */
#define ITM_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00080000 */
#define ITM_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00100000 */
#define ITM_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00200000 */
#define ITM_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00400000 */
#define ITM_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x00800000 */
#define ITM_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x01000000 */
#define ITM_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x02000000 */
#define ITM_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x04000000 */
#define ITM_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x08000000 */
#define ITM_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x10000000 */
#define ITM_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x20000000 */
#define ITM_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x40000000 */
#define ITM_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, LAR, KEY))  /*!< Value 0x80000000 */

// Values of integration mode enable bit
#define ITM_KEY_LOCKCLEAR  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

/*!< CoreSight lock status register */
#define ITM_LSR_NTT_OFFSET  (2U)
#define ITM_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, LSR, NTT))  /*!< Mask  0x00000004 */

#define ITM_LSR_SLK_OFFSET  (1U)
#define ITM_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, LSR, SLK))  /*!< Mask  0x00000002 */

#define ITM_LSR_SLI_OFFSET  (0U)
#define ITM_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ITM, LSR, SLI))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define ITM_LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of software lock status bit
#define ITM_SWLOCK_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_SWLOCK_SET    (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define ITM_SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ITM_SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Peripheral identitication 4 register */
#define ITM_PID4_4KCOUNT_OFFSET    (4U)
#define ITM_PID4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define ITM_PID4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID4, 4KCOUNT))    /*!< Value 0x00000010 */
#define ITM_PID4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID4, 4KCOUNT))    /*!< Value 0x00000020 */
#define ITM_PID4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID4, 4KCOUNT))    /*!< Value 0x00000040 */
#define ITM_PID4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID4, 4KCOUNT))    /*!< Value 0x00000080 */

#define ITM_PID4_JEP106CON_OFFSET  (0U)
#define ITM_PID4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID4, JEP106CON))  /*!< Mask  0x0000000F */
#define ITM_PID4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID4, JEP106CON))  /*!< Value 0x00000001 */
#define ITM_PID4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID4, JEP106CON))  /*!< Value 0x00000002 */
#define ITM_PID4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID4, JEP106CON))  /*!< Value 0x00000004 */
#define ITM_PID4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID4, JEP106CON))  /*!< Value 0x00000008 */

// Values of square root of the number of 4K blocks register
#define ITM_4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define ITM_4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define ITM_4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define ITM_4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define ITM_4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define ITM_4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define ITM_4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define ITM_4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define ITM_4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define ITM_4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define ITM_4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define ITM_4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define ITM_4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define ITM_4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define ITM_4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define ITM_4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define ITM_PID4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define ITM_PID5_RSVD_OFFSET  (0U)
#define ITM_PID5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ITM_PID5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000001 */
#define ITM_PID5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000002 */
#define ITM_PID5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000004 */
#define ITM_PID5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000008 */
#define ITM_PID5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000010 */
#define ITM_PID5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000020 */
#define ITM_PID5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000040 */
#define ITM_PID5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000080 */
#define ITM_PID5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000100 */
#define ITM_PID5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000200 */
#define ITM_PID5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000400 */
#define ITM_PID5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00000800 */
#define ITM_PID5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00001000 */
#define ITM_PID5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00002000 */
#define ITM_PID5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00004000 */
#define ITM_PID5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00008000 */
#define ITM_PID5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00010000 */
#define ITM_PID5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00020000 */
#define ITM_PID5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00040000 */
#define ITM_PID5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00080000 */
#define ITM_PID5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00100000 */
#define ITM_PID5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00200000 */
#define ITM_PID5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00400000 */
#define ITM_PID5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x00800000 */
#define ITM_PID5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x01000000 */
#define ITM_PID5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x02000000 */
#define ITM_PID5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x04000000 */
#define ITM_PID5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x08000000 */
#define ITM_PID5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x10000000 */
#define ITM_PID5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x20000000 */
#define ITM_PID5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x40000000 */
#define ITM_PID5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, PID5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define ITM_PID6_RSVD_OFFSET  (0U)
#define ITM_PID6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ITM_PID6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000001 */
#define ITM_PID6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000002 */
#define ITM_PID6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000004 */
#define ITM_PID6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000008 */
#define ITM_PID6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000010 */
#define ITM_PID6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000020 */
#define ITM_PID6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000040 */
#define ITM_PID6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000080 */
#define ITM_PID6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000100 */
#define ITM_PID6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000200 */
#define ITM_PID6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000400 */
#define ITM_PID6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00000800 */
#define ITM_PID6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00001000 */
#define ITM_PID6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00002000 */
#define ITM_PID6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00004000 */
#define ITM_PID6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00008000 */
#define ITM_PID6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00010000 */
#define ITM_PID6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00020000 */
#define ITM_PID6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00040000 */
#define ITM_PID6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00080000 */
#define ITM_PID6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00100000 */
#define ITM_PID6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00200000 */
#define ITM_PID6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00400000 */
#define ITM_PID6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x00800000 */
#define ITM_PID6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x01000000 */
#define ITM_PID6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x02000000 */
#define ITM_PID6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x04000000 */
#define ITM_PID6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x08000000 */
#define ITM_PID6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x10000000 */
#define ITM_PID6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x20000000 */
#define ITM_PID6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x40000000 */
#define ITM_PID6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, PID6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define ITM_PID7_RSVD_OFFSET  (0U)
#define ITM_PID7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ITM_PID7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000001 */
#define ITM_PID7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000002 */
#define ITM_PID7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000004 */
#define ITM_PID7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000008 */
#define ITM_PID7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000010 */
#define ITM_PID7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000020 */
#define ITM_PID7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000040 */
#define ITM_PID7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000080 */
#define ITM_PID7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000100 */
#define ITM_PID7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000200 */
#define ITM_PID7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000400 */
#define ITM_PID7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00000800 */
#define ITM_PID7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00001000 */
#define ITM_PID7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00002000 */
#define ITM_PID7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00004000 */
#define ITM_PID7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00008000 */
#define ITM_PID7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00010000 */
#define ITM_PID7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00020000 */
#define ITM_PID7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00040000 */
#define ITM_PID7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00080000 */
#define ITM_PID7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00100000 */
#define ITM_PID7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00200000 */
#define ITM_PID7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00400000 */
#define ITM_PID7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x00800000 */
#define ITM_PID7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x01000000 */
#define ITM_PID7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x02000000 */
#define ITM_PID7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x04000000 */
#define ITM_PID7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x08000000 */
#define ITM_PID7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x10000000 */
#define ITM_PID7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x20000000 */
#define ITM_PID7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x40000000 */
#define ITM_PID7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ITM, PID7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define ITM_PID0_PARTNUM_OFFSET  (0U)
#define ITM_PID0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Mask  0x000000FF */
#define ITM_PID0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000001 */
#define ITM_PID0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000002 */
#define ITM_PID0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000004 */
#define ITM_PID0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000008 */
#define ITM_PID0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000010 */
#define ITM_PID0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000020 */
#define ITM_PID0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000040 */
#define ITM_PID0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(ITM, PID0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define ITM_PID0PARTNUM_ST   (0x01UL)  /*!< Value 0x00000001 */
#define ITM_PID0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define ITM_PID1_JEP106ID_OFFSET  (4U)
#define ITM_PID1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID1, JEP106ID))  /*!< Mask  0x000000F0 */
#define ITM_PID1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID1, JEP106ID))  /*!< Value 0x00000010 */
#define ITM_PID1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID1, JEP106ID))  /*!< Value 0x00000020 */
#define ITM_PID1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID1, JEP106ID))  /*!< Value 0x00000040 */
#define ITM_PID1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID1, JEP106ID))  /*!< Value 0x00000080 */

#define ITM_PID1_PARTNUM_OFFSET   (0U)
#define ITM_PID1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID1, PARTNUM))   /*!< Mask  0x0000000F */
#define ITM_PID1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID1, PARTNUM))   /*!< Value 0x00000001 */
#define ITM_PID1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID1, PARTNUM))   /*!< Value 0x00000002 */
#define ITM_PID1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID1, PARTNUM))   /*!< Value 0x00000004 */
#define ITM_PID1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define ITM_PID1PARTNUM_ST   (0x0UL)  /*!< Value 0x00000000 */
#define ITM_PID1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define ITM_PID1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define ITM_PID2_REVISION_OFFSET    (4U)
#define ITM_PID2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID2, REVISION))    /*!< Mask  0x000000F0 */
#define ITM_PID2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID2, REVISION))    /*!< Value 0x00000010 */
#define ITM_PID2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID2, REVISION))    /*!< Value 0x00000020 */
#define ITM_PID2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID2, REVISION))    /*!< Value 0x00000040 */
#define ITM_PID2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID2, REVISION))    /*!< Value 0x00000080 */

#define ITM_PID2_JEDEC_OFFSET       (3U)
#define ITM_PID2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID2, JEDEC))       /*!< Mask  0x00000008 */

#define ITM_PID2_JEDEC106ID_OFFSET  (0U)
#define ITM_PID2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(ITM, PID2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define ITM_PID2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID2, JEDEC106ID))  /*!< Value 0x00000001 */
#define ITM_PID2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID2, JEDEC106ID))  /*!< Value 0x00000002 */
#define ITM_PID2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define ITM_REVISION_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC assigned value select bit
#define ITM_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define ITM_PID2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define ITM_PID3_REVAND_OFFSET  (4U)
#define ITM_PID3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID3, REVAND))  /*!< Mask  0x000000F0 */
#define ITM_PID3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID3, REVAND))  /*!< Value 0x00000010 */
#define ITM_PID3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID3, REVAND))  /*!< Value 0x00000020 */
#define ITM_PID3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID3, REVAND))  /*!< Value 0x00000040 */
#define ITM_PID3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID3, REVAND))  /*!< Value 0x00000080 */

#define ITM_PID3_CMOD_OFFSET    (0U)
#define ITM_PID3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ITM, PID3, CMOD))    /*!< Mask  0x0000000F */
#define ITM_PID3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(ITM, PID3, CMOD))    /*!< Value 0x00000001 */
#define ITM_PID3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(ITM, PID3, CMOD))    /*!< Value 0x00000002 */
#define ITM_PID3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(ITM, PID3, CMOD))    /*!< Value 0x00000004 */
#define ITM_PID3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(ITM, PID3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define ITM_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define ITM_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define ITM_CID0_PREAMBLE_OFFSET  (0U)
#define ITM_CID0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Mask  0x000000FF */
#define ITM_CID0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000001 */
#define ITM_CID0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000002 */
#define ITM_CID0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000004 */
#define ITM_CID0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000008 */
#define ITM_CID0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000010 */
#define ITM_CID0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000020 */
#define ITM_CID0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000040 */
#define ITM_CID0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ITM, CID0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define ITM_CID0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define ITM_CID1_CLASS_OFFSET  (4U)
#define ITM_CID1_CLASS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ITM, CID1, CLASS))  /*!< Mask  0x000000F0 */
#define ITM_CID1_CLASS_0       (0x1UL << REGISTER_FIELD_OFFSET(ITM, CID1, CLASS))  /*!< Value 0x00000010 */
#define ITM_CID1_CLASS_1       (0x2UL << REGISTER_FIELD_OFFSET(ITM, CID1, CLASS))  /*!< Value 0x00000020 */
#define ITM_CID1_CLASS_2       (0x4UL << REGISTER_FIELD_OFFSET(ITM, CID1, CLASS))  /*!< Value 0x00000040 */
#define ITM_CID1_CLASS_3       (0x8UL << REGISTER_FIELD_OFFSET(ITM, CID1, CLASS))  /*!< Value 0x00000080 */

#define ITM_CID1_PREAMBLE_OFFSET   (0U)
#define ITM_CID1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ITM, CID1, PREAMBLE))   /*!< Mask  0x0000000F */
#define ITM_CID1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(ITM, CID1, PREAMBLE))   /*!< Value 0x00000001 */
#define ITM_CID1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(ITM, CID1, PREAMBLE))   /*!< Value 0x00000002 */
#define ITM_CID1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(ITM, CID1, PREAMBLE))   /*!< Value 0x00000004 */
#define ITM_CID1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(ITM, CID1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define ITM_CID1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define ITM_CLASS_ARM  (0x9UL)  /*!< Value 0x00000009 */
#define ITM_CLASS_ST   (0xEUL)  /*!< Value 0x0000000E */

/*!< Component identitication 2 register */
#define ITM_CID2_PREAMBLE_OFFSET  (0U)
#define ITM_CID2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Mask  0x000000FF */
#define ITM_CID2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000001 */
#define ITM_CID2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000002 */
#define ITM_CID2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000004 */
#define ITM_CID2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000008 */
#define ITM_CID2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000010 */
#define ITM_CID2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000020 */
#define ITM_CID2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000040 */
#define ITM_CID2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ITM, CID2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define ITM_CID2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define ITM_CID3_PREAMBLE_OFFSET  (0U)
#define ITM_CID3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Mask  0x000000FF */
#define ITM_CID3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000001 */
#define ITM_CID3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000002 */
#define ITM_CID3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000004 */
#define ITM_CID3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000008 */
#define ITM_CID3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000010 */
#define ITM_CID3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000020 */
#define ITM_CID3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000040 */
#define ITM_CID3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ITM, CID3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define ITM_CID3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

#define ITM_OFFSET 0x0UL
#define ITM_BASE OFFSET_ADDRESS(PPB_BASE, ITM_OFFSET)
#define ITM REGISTER_PTR(ppb_itm_regs, ITM_BASE)

/** @} */ // End of ITM group

/** @} */ // End of RegisterGroup group

#endif // ITM_REGISTERS_H
