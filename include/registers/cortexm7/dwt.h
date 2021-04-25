#ifndef DWT_REGISTERS_H
#define DWT_REGISTERS_H
/**
 * @copyright
 * @file dwt.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Data watchpoint and trace unit (DWT) registers in private peripheral bus (PPB) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup DWT Data watchpoint and trace unit (DWT) registers in private peripheral bus (PPB)
 *  @brief Data watchpoint and trace unit (DWT) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t CTRL;             /*!< Control register                      (Offset 0x0)            */
	RW uint32_t CYCCNT;           /*!< Cycle count register                  (Offset 0x4)            */
	RW uint32_t CPICNT;           /*!< CPI count register                    (Offset 0x8)            */
	RW uint32_t EXCCNT;           /*!< Exception overhead count register     (Offset 0xC)            */
	RO uint32_t SLEEPCNT;         /*!< Sleep count register                  (Offset 0x10)           */
	WO uint32_t LSUCNT;           /*!< Load store unit (LSU) count register  (Offset 0x14)           */
	RW uint32_t FOLDCNT;          /*!< Fold-instruction count register       (Offset 0x18)           */
	RO uint32_t PCSR;             /*!< Program counter sample register       (Offset 0x1C)           */
	RW uint32_t COMP0;            /*!< Comparator 0 register                 (Offset 0x20)           */
	RW uint32_t MASK0;            /*!< Mask 0 register                       (Offset 0x24)           */
	RW uint32_t FUNCTION0;        /*!< Function 0 register                   (Offset 0x28)           */
	   uint32_t reserved0;        /*!< Reserved                              (Offset 0x2C)           */
	RW uint32_t COMP1;            /*!< Comparator 1 register                 (Offset 0x30)           */
	RW uint32_t MASK1;            /*!< Mask 1 register                       (Offset 0x34)           */
	RW uint32_t FUNCTION1;        /*!< Function 1 register                   (Offset 0x38)           */
	   uint32_t reserved1;        /*!< Reserved                              (Offset 0x3C)           */
	RW uint32_t COMP2;            /*!< Comparator 2 register                 (Offset 0x40)           */
	RW uint32_t MASK2;            /*!< Mask 2 register                       (Offset 0x44)           */
	RW uint32_t FUNCTION2;        /*!< Function 2 register                   (Offset 0x48)           */
	   uint32_t reserved2;        /*!< Reserved                              (Offset 0x4C)           */
	RW uint32_t COMP3;            /*!< Comparator 3 register                 (Offset 0x50)           */
	RW uint32_t MASK3;            /*!< Mask 3 register                       (Offset 0x54)           */
	RW uint32_t FUNCTION3;        /*!< Function 3 register                   (Offset 0x58)           */
	   uint32_t reserved3;        /*!< Reserved                              (Offset 0x5C)           */
	   uint32_t reserved4[980U];  /*!< Reserved                              (Offset 0x60 to 0xFAC)  */
	RW uint32_t LAR;              /*!< CoreSight lock access register        (Offset 0xFB0)          */
	RW uint32_t LSR;              /*!< CoreSight lock status register        (Offset 0xFB4)          */
	   uint32_t reserved5[6U];    /*!< Reserved                              (Offset 0xFB8 to 0xFCF) */
	RO uint32_t PID4;             /*!< Peripheral identification 4 register  (Offset 0xFD0)          */
	RO uint32_t PID5;             /*!< Peripheral identification 5 register  (Offset 0xFD4)          */
	RO uint32_t PID6;             /*!< Peripheral identification 6 register  (Offset 0xFD8)          */
	RO uint32_t PID7;             /*!< Peripheral identification 7 register  (Offset 0xFDC)          */
	RO uint32_t PID0;             /*!< Peripheral identification 0 register  (Offset 0xFE0)          */
	RO uint32_t PID1;             /*!< Peripheral identification 1 register  (Offset 0xFE4)          */
	RO uint32_t PID2;             /*!< Peripheral identification 2 register  (Offset 0xFE8)          */
	RO uint32_t PID3;             /*!< Peripheral identification 3 register  (Offset 0xFEC)          */
	RO uint32_t CID0;             /*!< Component identification 0 register   (Offset 0xFF0)          */
	RO uint32_t CID1;             /*!< Component identification 1 register   (Offset 0xFF4)          */
	RO uint32_t CID2;             /*!< Component identification 2 register   (Offset 0xFF8)          */
	RO uint32_t CID3;             /*!< Component identification 3 register   (Offset 0xFFC)          */
} ppb_dwt_regs;

/*!< Data watchpoint and trace unit (DWT) registers in private peripheral bus (PPB) registers */
/*!< Control register */
#define DWT_CTRL_NUMCOMP_OFFSET     (28U)
#define DWT_CTRL_NUMCOMP_MASK       (0xFUL << REGISTER_FIELD_OFFSET(DWT, CTRL, NUMCOMP))      /*!< Mask  0xF0000000 */
#define DWT_CTRL_NUMCOMP_0          (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NUMCOMP))      /*!< Value 0x10000000 */
#define DWT_CTRL_NUMCOMP_1          (0x2UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NUMCOMP))      /*!< Value 0x20000000 */
#define DWT_CTRL_NUMCOMP_2          (0x4UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NUMCOMP))      /*!< Value 0x40000000 */
#define DWT_CTRL_NUMCOMP_3          (0x8UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NUMCOMP))      /*!< Value 0x80000000 */

#define DWT_CTRL_NOTRCPKT_OFFSET    (27U)
#define DWT_CTRL_NOTRCPKT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NOTRCPKT))     /*!< Mask  0x08000000 */

#define DWT_CTRL_NOEXTTRIG_OFFSET   (26U)
#define DWT_CTRL_NOEXTTRIG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NOEXTTRIG))    /*!< Mask  0x04000000 */

#define DWT_CTRL_NOCYCCNT_OFFSET    (25U)
#define DWT_CTRL_NOCYCCNT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NOCYCCNT))     /*!< Mask  0x02000000 */

#define DWT_CTRL_NOPRFCNT_OFFSET    (24U)
#define DWT_CTRL_NOPRFCNT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, NOPRFCNT))     /*!< Mask  0x01000000 */

#define DWT_CTRL_CYCEVTENA_OFFSET   (22U)
#define DWT_CTRL_CYCEVTENA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, CYCEVTENA))    /*!< Mask  0x00400000 */

#define DWT_CTRL_FOLDEVTENA_OFFSET  (21U)
#define DWT_CTRL_FOLDEVTENA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, FOLDEVTENA))   /*!< Mask  0x00200000 */

#define DWT_CTRL_LSUEVTENA_OFFSET   (20U)
#define DWT_CTRL_LSUEVTENA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, LSUEVTENA))    /*!< Mask  0x00100000 */

#define DWT_CTRL_SLEEPEVTENA_OFFSET (19U)
#define DWT_CTRL_SLEEPEVTENA_MASK   (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, SLEEPEVTENA))  /*!< Mask  0x00080000 */

#define DWT_CTRL_EXCEVTENA_OFFSET   (18U)
#define DWT_CTRL_EXCEVTENA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, EXCEVTENA))    /*!< Mask  0x00040000 */

#define DWT_CTRL_CPIEVTENA_OFFSET   (17U)
#define DWT_CTRL_CPIEVTENA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, CPIEVTENA))    /*!< Mask  0x00020000 */

#define DWT_CTRL_EXCTRCENA_OFFSET   (16U)
#define DWT_CTRL_EXCTRCENA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, EXCTRCENA))    /*!< Mask  0x00010000 */

#define DWT_CTRL_PCSAMPLENA_OFFSET  (12U)
#define DWT_CTRL_PCSAMPLENA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, PCSAMPLENA))   /*!< Mask  0x00001000 */

#define DWT_CTRL_SYNCTAP_OFFSET     (10U)
#define DWT_CTRL_SYNCTAP_MASK       (0x3UL << REGISTER_FIELD_OFFSET(DWT, CTRL, SYNCTAP))      /*!< Mask  0x00000C00 */
#define DWT_CTRL_POSTINIT_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Value 0x00000400 */
#define DWT_CTRL_POSTINIT_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Value 0x00000800 */

#define DWT_CTRL_CYCTAP_OFFSET      (9U)
#define DWT_CTRL_CYCTAP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, CYCTAP))       /*!< Mask  0x00000200 */

#define DWT_CTRL_POSTINIT_OFFSET    (5U)
#define DWT_CTRL_POSTINIT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Mask  0x000001E0 */
#define DWT_CTRL_POSTINIT_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Value 0x00000020 */
#define DWT_CTRL_POSTINIT_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Value 0x00000040 */
#define DWT_CTRL_POSTINIT_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Value 0x00000080 */
#define DWT_CTRL_POSTINIT_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTINIT))     /*!< Value 0x00000100 */

#define DWT_CTRL_POSTPRESET_OFFSET  (1U)
#define DWT_CTRL_POSTPRESET_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTPRESET))   /*!< Mask  0x0000001E */
#define DWT_CTRL_POSTPRESET_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTPRESET))   /*!< Value 0x00000002 */
#define DWT_CTRL_POSTPRESET_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTPRESET))   /*!< Value 0x00000004 */
#define DWT_CTRL_POSTPRESET_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTPRESET))   /*!< Value 0x00000008 */
#define DWT_CTRL_POSTPRESET_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, CTRL, POSTPRESET))   /*!< Value 0x00000010 */

#define DWT_CTRL_CYCCNTENA_OFFSET   (0U)
#define DWT_CTRL_CYCCNTENA_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, CYCCNTENA))    /*!< Mask  0x00000001 */

// Values of the number of implemented comparator register
#define DWT_NUMCOMP_NOSUPPORT  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_NUMCOMP_1          (0x1UL)  /*!< Value 0x00000001 */
#define DWT_NUMCOMP_2          (0x2UL)  /*!< Value 0x00000002 */
#define DWT_NUMCOMP_3          (0x3UL)  /*!< Value 0x00000003 */
#define DWT_NUMCOMP_4          (0x4UL)  /*!< Value 0x00000004 */
#define DWT_NUMCOMP_5          (0x5UL)  /*!< Value 0x00000005 */
#define DWT_NUMCOMP_6          (0x6UL)  /*!< Value 0x00000006 */
#define DWT_NUMCOMP_7          (0x7UL)  /*!< Value 0x00000007 */
#define DWT_NUMCOMP_8          (0x8UL)  /*!< Value 0x00000008 */
#define DWT_NUMCOMP_9          (0x9UL)  /*!< Value 0x00000009 */
#define DWT_NUMCOMP_10         (0xAUL)  /*!< Value 0x0000000A */
#define DWT_NUMCOMP_11         (0xBUL)  /*!< Value 0x0000000B */
#define DWT_NUMCOMP_12         (0xCUL)  /*!< Value 0x0000000C */
#define DWT_NUMCOMP_13         (0xDUL)  /*!< Value 0x0000000D */
#define DWT_NUMCOMP_14         (0xEUL)  /*!< Value 0x0000000E */
#define DWT_NUMCOMP_15         (0xFUL)  /*!< Value 0x0000000F */

// Values of trace sampling and exception tracing support bit
#define DWT_TRACESAMPLINGEXCTRACING_SUPPORTED     (0x0UL)  /*!< Value 0x00000000 */
#define DWT_TRACESAMPLINGEXCTRACING_NOTSUPPORTED  (0x1UL)  /*!< Value 0x00000001 */

/*!< CoreSight lock access register */
#define DWT_LAR_KEY_OFFSET  (0U)
#define DWT_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define DWT_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000001 */
#define DWT_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000002 */
#define DWT_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000004 */
#define DWT_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000008 */
#define DWT_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000010 */
#define DWT_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000020 */
#define DWT_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000040 */
#define DWT_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000080 */
#define DWT_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000100 */
#define DWT_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000200 */
#define DWT_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000400 */
#define DWT_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00000800 */
#define DWT_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00001000 */
#define DWT_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00002000 */
#define DWT_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00004000 */
#define DWT_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00008000 */
#define DWT_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00010000 */
#define DWT_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00020000 */
#define DWT_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00040000 */
#define DWT_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00080000 */
#define DWT_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00100000 */
#define DWT_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00200000 */
#define DWT_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00400000 */
#define DWT_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x00800000 */
#define DWT_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x01000000 */
#define DWT_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x02000000 */
#define DWT_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x04000000 */
#define DWT_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x08000000 */
#define DWT_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x10000000 */
#define DWT_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x20000000 */
#define DWT_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x40000000 */
#define DWT_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, LAR, KEY))  /*!< Value 0x80000000 */

// Values of integration mode enable bit
#define DWT_KEY_LOCKCLEAR  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

/*!< CoreSight lock status register */
#define DWT_LSR_NTT_OFFSET  (2U)
#define DWT_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, LSR, NTT))  /*!< Mask  0x00000004 */

#define DWT_LSR_SLK_OFFSET  (1U)
#define DWT_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, LSR, SLK))  /*!< Mask  0x00000002 */

#define DWT_LSR_SLI_OFFSET  (0U)
#define DWT_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, LSR, SLI))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define DWT_LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of software lock status bit
#define DWT_SWLOCK_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_SWLOCK_SET    (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define DWT_SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Peripheral identitication 4 register */
#define DWT_PID4_4KCOUNT_OFFSET    (4U)
#define DWT_PID4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define DWT_PID4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID4, 4KCOUNT))    /*!< Value 0x00000010 */
#define DWT_PID4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID4, 4KCOUNT))    /*!< Value 0x00000020 */
#define DWT_PID4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID4, 4KCOUNT))    /*!< Value 0x00000040 */
#define DWT_PID4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID4, 4KCOUNT))    /*!< Value 0x00000080 */

#define DWT_PID4_JEP106CON_OFFSET  (0U)
#define DWT_PID4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID4, JEP106CON))  /*!< Mask  0x0000000F */
#define DWT_PID4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID4, JEP106CON))  /*!< Value 0x00000001 */
#define DWT_PID4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID4, JEP106CON))  /*!< Value 0x00000002 */
#define DWT_PID4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID4, JEP106CON))  /*!< Value 0x00000004 */
#define DWT_PID4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID4, JEP106CON))  /*!< Value 0x00000008 */

// Values of square root of the number of 4K blocks register
#define DWT_4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define DWT_4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define DWT_4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define DWT_4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define DWT_4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define DWT_4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define DWT_4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define DWT_4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define DWT_4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define DWT_4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define DWT_4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define DWT_4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define DWT_4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define DWT_4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define DWT_4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define DWT_4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define DWT_PID4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define DWT_PID5_RSVD_OFFSET  (0U)
#define DWT_PID5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define DWT_PID5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000001 */
#define DWT_PID5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000002 */
#define DWT_PID5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000004 */
#define DWT_PID5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000008 */
#define DWT_PID5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000010 */
#define DWT_PID5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000020 */
#define DWT_PID5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000040 */
#define DWT_PID5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000080 */
#define DWT_PID5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000100 */
#define DWT_PID5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000200 */
#define DWT_PID5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000400 */
#define DWT_PID5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00000800 */
#define DWT_PID5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00001000 */
#define DWT_PID5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00002000 */
#define DWT_PID5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00004000 */
#define DWT_PID5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00008000 */
#define DWT_PID5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00010000 */
#define DWT_PID5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00020000 */
#define DWT_PID5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00040000 */
#define DWT_PID5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00080000 */
#define DWT_PID5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00100000 */
#define DWT_PID5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00200000 */
#define DWT_PID5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00400000 */
#define DWT_PID5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x00800000 */
#define DWT_PID5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x01000000 */
#define DWT_PID5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x02000000 */
#define DWT_PID5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x04000000 */
#define DWT_PID5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x08000000 */
#define DWT_PID5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x10000000 */
#define DWT_PID5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x20000000 */
#define DWT_PID5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x40000000 */
#define DWT_PID5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PID5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define DWT_PID6_RSVD_OFFSET  (0U)
#define DWT_PID6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define DWT_PID6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000001 */
#define DWT_PID6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000002 */
#define DWT_PID6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000004 */
#define DWT_PID6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000008 */
#define DWT_PID6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000010 */
#define DWT_PID6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000020 */
#define DWT_PID6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000040 */
#define DWT_PID6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000080 */
#define DWT_PID6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000100 */
#define DWT_PID6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000200 */
#define DWT_PID6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000400 */
#define DWT_PID6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00000800 */
#define DWT_PID6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00001000 */
#define DWT_PID6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00002000 */
#define DWT_PID6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00004000 */
#define DWT_PID6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00008000 */
#define DWT_PID6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00010000 */
#define DWT_PID6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00020000 */
#define DWT_PID6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00040000 */
#define DWT_PID6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00080000 */
#define DWT_PID6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00100000 */
#define DWT_PID6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00200000 */
#define DWT_PID6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00400000 */
#define DWT_PID6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x00800000 */
#define DWT_PID6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x01000000 */
#define DWT_PID6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x02000000 */
#define DWT_PID6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x04000000 */
#define DWT_PID6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x08000000 */
#define DWT_PID6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x10000000 */
#define DWT_PID6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x20000000 */
#define DWT_PID6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x40000000 */
#define DWT_PID6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PID6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define DWT_PID7_RSVD_OFFSET  (0U)
#define DWT_PID7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define DWT_PID7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000001 */
#define DWT_PID7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000002 */
#define DWT_PID7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000004 */
#define DWT_PID7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000008 */
#define DWT_PID7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000010 */
#define DWT_PID7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000020 */
#define DWT_PID7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000040 */
#define DWT_PID7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000080 */
#define DWT_PID7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000100 */
#define DWT_PID7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000200 */
#define DWT_PID7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000400 */
#define DWT_PID7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00000800 */
#define DWT_PID7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00001000 */
#define DWT_PID7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00002000 */
#define DWT_PID7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00004000 */
#define DWT_PID7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00008000 */
#define DWT_PID7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00010000 */
#define DWT_PID7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00020000 */
#define DWT_PID7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00040000 */
#define DWT_PID7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00080000 */
#define DWT_PID7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00100000 */
#define DWT_PID7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00200000 */
#define DWT_PID7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00400000 */
#define DWT_PID7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x00800000 */
#define DWT_PID7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x01000000 */
#define DWT_PID7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x02000000 */
#define DWT_PID7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x04000000 */
#define DWT_PID7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x08000000 */
#define DWT_PID7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x10000000 */
#define DWT_PID7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x20000000 */
#define DWT_PID7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x40000000 */
#define DWT_PID7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PID7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define DWT_PID0_PARTNUM_OFFSET  (0U)
#define DWT_PID0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Mask  0x000000FF */
#define DWT_PID0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000001 */
#define DWT_PID0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000002 */
#define DWT_PID0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000004 */
#define DWT_PID0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000008 */
#define DWT_PID0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000010 */
#define DWT_PID0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000020 */
#define DWT_PID0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000040 */
#define DWT_PID0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, PID0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define DWT_PID0PARTNUM_ST   (0x01UL)  /*!< Value 0x00000001 */
#define DWT_PID0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define DWT_PID1_JEP106ID_OFFSET  (4U)
#define DWT_PID1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID1, JEP106ID))  /*!< Mask  0x000000F0 */
#define DWT_PID1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID1, JEP106ID))  /*!< Value 0x00000010 */
#define DWT_PID1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID1, JEP106ID))  /*!< Value 0x00000020 */
#define DWT_PID1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID1, JEP106ID))  /*!< Value 0x00000040 */
#define DWT_PID1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID1, JEP106ID))  /*!< Value 0x00000080 */

#define DWT_PID1_PARTNUM_OFFSET   (0U)
#define DWT_PID1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID1, PARTNUM))   /*!< Mask  0x0000000F */
#define DWT_PID1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID1, PARTNUM))   /*!< Value 0x00000001 */
#define DWT_PID1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID1, PARTNUM))   /*!< Value 0x00000002 */
#define DWT_PID1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID1, PARTNUM))   /*!< Value 0x00000004 */
#define DWT_PID1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define DWT_PID1PARTNUM_ST   (0x0UL)  /*!< Value 0x00000000 */
#define DWT_PID1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define DWT_PID1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define DWT_PID2_REVISION_OFFSET    (4U)
#define DWT_PID2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID2, REVISION))    /*!< Mask  0x000000F0 */
#define DWT_PID2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID2, REVISION))    /*!< Value 0x00000010 */
#define DWT_PID2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID2, REVISION))    /*!< Value 0x00000020 */
#define DWT_PID2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID2, REVISION))    /*!< Value 0x00000040 */
#define DWT_PID2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID2, REVISION))    /*!< Value 0x00000080 */

#define DWT_PID2_JEDEC_OFFSET       (3U)
#define DWT_PID2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID2, JEDEC))       /*!< Mask  0x00000008 */

#define DWT_PID2_JEDEC106ID_OFFSET  (0U)
#define DWT_PID2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(DWT, PID2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define DWT_PID2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID2, JEDEC106ID))  /*!< Value 0x00000001 */
#define DWT_PID2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID2, JEDEC106ID))  /*!< Value 0x00000002 */
#define DWT_PID2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define DWT_REVISION_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC assigned value select bit
#define DWT_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define DWT_PID2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define DWT_PID3_REVAND_OFFSET  (4U)
#define DWT_PID3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID3, REVAND))  /*!< Mask  0x000000F0 */
#define DWT_PID3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID3, REVAND))  /*!< Value 0x00000010 */
#define DWT_PID3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID3, REVAND))  /*!< Value 0x00000020 */
#define DWT_PID3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID3, REVAND))  /*!< Value 0x00000040 */
#define DWT_PID3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID3, REVAND))  /*!< Value 0x00000080 */

#define DWT_PID3_CMOD_OFFSET    (0U)
#define DWT_PID3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, PID3, CMOD))    /*!< Mask  0x0000000F */
#define DWT_PID3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PID3, CMOD))    /*!< Value 0x00000001 */
#define DWT_PID3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, PID3, CMOD))    /*!< Value 0x00000002 */
#define DWT_PID3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, PID3, CMOD))    /*!< Value 0x00000004 */
#define DWT_PID3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, PID3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define DWT_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define DWT_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define DWT_CID0_PREAMBLE_OFFSET  (0U)
#define DWT_CID0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Mask  0x000000FF */
#define DWT_CID0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000001 */
#define DWT_CID0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000002 */
#define DWT_CID0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000004 */
#define DWT_CID0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000008 */
#define DWT_CID0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000010 */
#define DWT_CID0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000020 */
#define DWT_CID0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000040 */
#define DWT_CID0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CID0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define DWT_CID0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define DWT_CID1_CLASS_OFFSET  (4U)
#define DWT_CID1_CLASS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, CID1, CLASS))  /*!< Mask  0x000000F0 */
#define DWT_CID1_CLASS_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, CID1, CLASS))  /*!< Value 0x00000010 */
#define DWT_CID1_CLASS_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, CID1, CLASS))  /*!< Value 0x00000020 */
#define DWT_CID1_CLASS_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, CID1, CLASS))  /*!< Value 0x00000040 */
#define DWT_CID1_CLASS_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, CID1, CLASS))  /*!< Value 0x00000080 */

#define DWT_CID1_PREAMBLE_OFFSET   (0U)
#define DWT_CID1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(DWT, CID1, PREAMBLE))   /*!< Mask  0x0000000F */
#define DWT_CID1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(DWT, CID1, PREAMBLE))   /*!< Value 0x00000001 */
#define DWT_CID1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(DWT, CID1, PREAMBLE))   /*!< Value 0x00000002 */
#define DWT_CID1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(DWT, CID1, PREAMBLE))   /*!< Value 0x00000004 */
#define DWT_CID1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(DWT, CID1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define DWT_CID1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define DWT_CLASS_ARM  (0x9UL)  /*!< Value 0x00000009 */
#define DWT_CLASS_ST   (0xEUL)  /*!< Value 0x0000000E */

/*!< Component identitication 2 register */
#define DWT_CID2_PREAMBLE_OFFSET  (0U)
#define DWT_CID2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Mask  0x000000FF */
#define DWT_CID2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000001 */
#define DWT_CID2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000002 */
#define DWT_CID2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000004 */
#define DWT_CID2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000008 */
#define DWT_CID2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000010 */
#define DWT_CID2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000020 */
#define DWT_CID2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000040 */
#define DWT_CID2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CID2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define DWT_CID2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define DWT_CID3_PREAMBLE_OFFSET  (0U)
#define DWT_CID3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Mask  0x000000FF */
#define DWT_CID3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000001 */
#define DWT_CID3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000002 */
#define DWT_CID3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000004 */
#define DWT_CID3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000008 */
#define DWT_CID3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000010 */
#define DWT_CID3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000020 */
#define DWT_CID3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000040 */
#define DWT_CID3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CID3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define DWT_CID3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

#define DWT_OFFSET 0x1000UL
#define DWT_BASE OFFSET_ADDRESS(PPB_BASE, DWT_OFFSET)
#define DWT REGISTER_PTR(ppb_dwt_regs, DWT_BASE)

/** @} */ // End of DWT group

/** @} */ // End of RegisterGroup group

#endif // DWT_REGISTERS_H
