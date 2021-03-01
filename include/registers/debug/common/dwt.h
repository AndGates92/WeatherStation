#ifndef DWT_H
#define DWT_H
/**
 * @copyright
 * @file dwt.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Data watchpoint and trace (DWT) global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup DWT Data watchpoint and trace (DWT) macros
 *  @brief Data watchpoint and trace (DWT) macros
 *  @{
 */

typedef struct {
	RW uint32_t CTRL;             /*!< Control register                             (Offset 0x0)            */
	RW uint32_t CYCCNT;           /*!< Cycle count register                         (Offset 0x4)            */
	RW uint32_t CPICNT;           /*!< Cycles per instruction (CPI) count register  (Offset 0x8)            */
	RW uint32_t EXCCNT;           /*!< Exception overhead count register            (Offset 0xC)            */
	RO uint32_t SLEEPCNT;         /*!< Sleep count register                         (Offset 0x10)           */
	WO uint32_t LSUCNT;           /*!< Load store unit (LSU) count register         (Offset 0x14)           */
	RW uint32_t FOLDCNT;          /*!< Fold-instruction count register              (Offset 0x18)           */
	RO uint32_t PCSR;             /*!< Program counter sample register              (Offset 0x1C)           */
	RW uint32_t COMP0;            /*!< Comparator 0 register                        (Offset 0x20)           */
	RW uint32_t MASK0;            /*!< Mask 0 register                              (Offset 0x24)           */
	RW uint32_t FUNCTION0;        /*!< Function 0 register                          (Offset 0x28)           */
	   uint32_t reserved0;        /*!< Reserved                                     (Offset 0x2C)           */
	RW uint32_t COMP1;            /*!< Comparator 1 register                        (Offset 0x30)           */
	RW uint32_t MASK1;            /*!< Mask 1 register                              (Offset 0x34)           */
	RW uint32_t FUNCTION1;        /*!< Function 1 register                          (Offset 0x38)           */
	   uint32_t reserved1;        /*!< Reserved                                     (Offset 0x3C)           */
	RW uint32_t COMP2;            /*!< Comparator 2 register                        (Offset 0x40)           */
	RW uint32_t MASK2;            /*!< Mask 2 register                              (Offset 0x44)           */
	RW uint32_t FUNCTION2;        /*!< Function 2 register                          (Offset 0x48)           */
	   uint32_t reserved2;        /*!< Reserved                                     (Offset 0x4C)           */
	RW uint32_t COMP3;            /*!< Comparator 3 register                        (Offset 0x50)           */
	RW uint32_t MASK3;            /*!< Mask 3 register                              (Offset 0x54)           */
	RW uint32_t FUNCTION3;        /*!< Function 3 register                          (Offset 0x58)           */
	   uint32_t reserved3;        /*!< Reserved                                     (Offset 0x5C)           */
	   uint32_t reserved4[980U];  /*!< Reserved                                     (Offset 0x60 to 0xFAC)  */
	W0 uint32_t LAR;              /*!< CoreSight lock access register               (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register               (Offset 0xFB4)          */
	   uint32_t reserved5[6U];    /*!< Reserved                                     (Offset 0xFB8 to 0xFCC) */
	RO uint32_t PIDR4;            /*!< Peripheral identification 4 register         (Offset 0xFD0)          */
	RO uint32_t PIDR5;            /*!< Peripheral identification 5 register         (Offset 0xFD4)          */
	RO uint32_t PIDR6;            /*!< Peripheral identification 6 register         (Offset 0xFD8)          */
	RO uint32_t PIDR7;            /*!< Peripheral identification 7 register         (Offset 0xFDC)          */
	RO uint32_t PIDR0;            /*!< Peripheral identification 0 register         (Offset 0xFE0)          */
	RO uint32_t PIDR1;            /*!< Peripheral identification 1 register         (Offset 0xFE4)          */
	RO uint32_t PIDR2;            /*!< Peripheral identification 2 register         (Offset 0xFE8)          */
	RO uint32_t PIDR3;            /*!< Peripheral identification 3 register         (Offset 0xFEC)          */
	RO uint32_t CIDR0;            /*!< Component identification 0 register          (Offset 0xFF0)          */
	RO uint32_t CIDR1;            /*!< Component identification 1 register          (Offset 0xFF4)          */
	RO uint32_t CIDR2;            /*!< Component identification 2 register          (Offset 0xFF8)          */
	RO uint32_t CIDR3;            /*!< Component identification 3 register          (Offset 0xFFC)          */
} dwt_regs;

/*!< Data watchpoint and trace (DWT) unit registers in private peripheral bus (PPB) */
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
#define DWT_CTRL_SYNCTAP_0          (0x1UL << REGISTER_FIELD_OFFSET(DWT, CTRL, SYNCTAP))      /*!< Value 0x00000400 */
#define DWT_CTRL_SYNCTAP_1          (0x2UL << REGISTER_FIELD_OFFSET(DWT, CTRL, SYNCTAP))      /*!< Value 0x00000800 */

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

// Values of external match signals (CMPMATCH) support bit
#define DWT_EXTMATCHSIGNAL_SUPPORTED    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_EXTMATCHSIGNAL_UNSUPPORTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of external match signals (CMPMATCH) support bit
#define DWT_EXTMATCHSIGNAL_SUPPORTED    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_EXTMATCHSIGNAL_UNSUPPORTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of cycle counter support bit
#define DWT_CYCLECOUNTER_SUPPORTED    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_CYCLECOUNTER_UNSUPPORTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of profiling counter support bit
#define DWT_PROFILINGCOUNTER_SUPPORTED    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_PROFILINGCOUNTER_UNSUPPORTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of POSTCNT underflow event counter packet generation enable bit
#define DWT_POSTCNTUNERFLOWPACKETS_NOTGENERATED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_POSTCNTUNERFLOWPACKETS_GENERATED     (0x1UL)  /*!< Value 0x00000001 */

// Values of folded instruction counter overflow event enable bit
#define DWT_FOLDEDINSTRCNTOVERFLOWEVENT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_FOLDEDINSTRCNTOVERFLOWEVENT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of load store unit (LSU) counter overflow event enable bit
#define DWT_LSUCNTOVERFLOWEVENT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_LSUCNTOVERFLOWEVENT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of sleep counter overflow event enable bit
#define DWT_SLEEPCNTOVERFLOWEVENT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_SLEEPCNTOVERFLOWEVENT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of exception overhead counter overflow event enable bit
#define DWT_EXCEPTIONOVERHEADCNTOVERFLOWEVENT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_EXCEPTIONOVERHEADCNTOVERFLOWEVENT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of cycles per instruction (CPI) counter overflow event enable bit
#define DWT_CPICNTOVERFLOWEVENT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_CPICNTOVERFLOWEVENT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of exception trace enable bit
#define DWT_EXCEPTIONTRACE_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_EXCEPTIONTRACE_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of POSTCNT counter as a timer for Periodic PC sample packet generation enable bit
#define DWT_PERIODICPCSAMPLEPACKETS_NOTGENERATED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_PERIODICPCSAMPLEPACKETS_GENERATEDD   (0x1UL)  /*!< Value 0x00000001 */

// Values of synchronization packet counter tap on the cycle counter position select register
#define DWT_SYNCCNTTAP_NONE    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_SYNCCNTTAP_BIT24   (0x1UL)  /*!< Value 0x00000001 */
#define DWT_SYNCCNTTAP_BIT26   (0x2UL)  /*!< Value 0x00000002 */
#define DWT_SYNCCNTTAP_BIT28   (0x3UL)  /*!< Value 0x00000003 */

// Values of POSTCNT tap on the cycle counter position select bit
#define DWT_POSTCNTTAP_BIT6    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_POSTCNTTAP_BIT10   (0x1UL)  /*!< Value 0x00000001 */

// Values of initial value of the POSTCNT counter register
#define DWT_POSTCNTINIT_0   (0x0UL)  /*!< Value 0x00000000 */
#define DWT_POSTCNTINIT_1   (0x1UL)  /*!< Value 0x00000001 */
#define DWT_POSTCNTINIT_2   (0x2UL)  /*!< Value 0x00000002 */
#define DWT_POSTCNTINIT_3   (0x3UL)  /*!< Value 0x00000003 */
#define DWT_POSTCNTINIT_4   (0x4UL)  /*!< Value 0x00000004 */
#define DWT_POSTCNTINIT_5   (0x5UL)  /*!< Value 0x00000005 */
#define DWT_POSTCNTINIT_6   (0x6UL)  /*!< Value 0x00000006 */
#define DWT_POSTCNTINIT_7   (0x7UL)  /*!< Value 0x00000007 */
#define DWT_POSTCNTINIT_8   (0x8UL)  /*!< Value 0x00000008 */
#define DWT_POSTCNTINIT_9   (0x9UL)  /*!< Value 0x00000009 */
#define DWT_POSTCNTINIT_10  (0xAUL)  /*!< Value 0x0000000A */
#define DWT_POSTCNTINIT_11  (0xBUL)  /*!< Value 0x0000000B */
#define DWT_POSTCNTINIT_12  (0xCUL)  /*!< Value 0x0000000C */
#define DWT_POSTCNTINIT_13  (0xDUL)  /*!< Value 0x0000000D */
#define DWT_POSTCNTINIT_14  (0xEUL)  /*!< Value 0x0000000E */
#define DWT_POSTCNTINIT_15  (0xFUL)  /*!< Value 0x0000000F */

// Values of reload value of the POSTCNT counter register
#define DWT_POSTCNTRELEAOD_0   (0x0UL)  /*!< Value 0x00000000 */
#define DWT_POSTCNTRELEAOD_1   (0x1UL)  /*!< Value 0x00000001 */
#define DWT_POSTCNTRELEAOD_2   (0x2UL)  /*!< Value 0x00000002 */
#define DWT_POSTCNTRELEAOD_3   (0x3UL)  /*!< Value 0x00000003 */
#define DWT_POSTCNTRELEAOD_4   (0x4UL)  /*!< Value 0x00000004 */
#define DWT_POSTCNTRELEAOD_5   (0x5UL)  /*!< Value 0x00000005 */
#define DWT_POSTCNTRELEAOD_6   (0x6UL)  /*!< Value 0x00000006 */
#define DWT_POSTCNTRELEAOD_7   (0x7UL)  /*!< Value 0x00000007 */
#define DWT_POSTCNTRELEAOD_8   (0x8UL)  /*!< Value 0x00000008 */
#define DWT_POSTCNTRELEAOD_9   (0x9UL)  /*!< Value 0x00000009 */
#define DWT_POSTCNTRELEAOD_10  (0xAUL)  /*!< Value 0x0000000A */
#define DWT_POSTCNTRELEAOD_11  (0xBUL)  /*!< Value 0x0000000B */
#define DWT_POSTCNTRELEAOD_12  (0xCUL)  /*!< Value 0x0000000C */
#define DWT_POSTCNTRELEAOD_13  (0xDUL)  /*!< Value 0x0000000D */
#define DWT_POSTCNTRELEAOD_14  (0xEUL)  /*!< Value 0x0000000E */
#define DWT_POSTCNTRELEAOD_15  (0xFUL)  /*!< Value 0x0000000F */

// Values of cycle counter enable bit
#define DWT_CYCCNT_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_CYCCNT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

/*!< Cycle count register */
#define DWT_CYCCNT_CYCCNT_OFFSET  (0U)
#define DWT_CYCCNT_CYCCNT_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Mask  0xFFFFFFFF */
#define DWT_CYCCNT_CYCCNT_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000001 */
#define DWT_CYCCNT_CYCCNT_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000002 */
#define DWT_CYCCNT_CYCCNT_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000004 */
#define DWT_CYCCNT_CYCCNT_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000008 */
#define DWT_CYCCNT_CYCCNT_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000010 */
#define DWT_CYCCNT_CYCCNT_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000020 */
#define DWT_CYCCNT_CYCCNT_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000040 */
#define DWT_CYCCNT_CYCCNT_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000080 */
#define DWT_CYCCNT_CYCCNT_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000100 */
#define DWT_CYCCNT_CYCCNT_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000200 */
#define DWT_CYCCNT_CYCCNT_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000400 */
#define DWT_CYCCNT_CYCCNT_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00000800 */
#define DWT_CYCCNT_CYCCNT_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00001000 */
#define DWT_CYCCNT_CYCCNT_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00002000 */
#define DWT_CYCCNT_CYCCNT_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00004000 */
#define DWT_CYCCNT_CYCCNT_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00008000 */
#define DWT_CYCCNT_CYCCNT_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00010000 */
#define DWT_CYCCNT_CYCCNT_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00020000 */
#define DWT_CYCCNT_CYCCNT_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00040000 */
#define DWT_CYCCNT_CYCCNT_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00080000 */
#define DWT_CYCCNT_CYCCNT_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00100000 */
#define DWT_CYCCNT_CYCCNT_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00200000 */
#define DWT_CYCCNT_CYCCNT_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00400000 */
#define DWT_CYCCNT_CYCCNT_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x00800000 */
#define DWT_CYCCNT_CYCCNT_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x01000000 */
#define DWT_CYCCNT_CYCCNT_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x02000000 */
#define DWT_CYCCNT_CYCCNT_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x04000000 */
#define DWT_CYCCNT_CYCCNT_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x08000000 */
#define DWT_CYCCNT_CYCCNT_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x10000000 */
#define DWT_CYCCNT_CYCCNT_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x20000000 */
#define DWT_CYCCNT_CYCCNT_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x40000000 */
#define DWT_CYCCNT_CYCCNT_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, CYCCNT, CYCCNT))  /*!< Value 0x80000000 */

/*!< Cycles per instruction (CPI) count register */
#define DWT_CPICNT_CPICNT_OFFSET  (0U)
#define DWT_CPICNT_CPICNT_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Mask  0x000000FF */
#define DWT_CPICNT_CPICNT_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000001 */
#define DWT_CPICNT_CPICNT_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000002 */
#define DWT_CPICNT_CPICNT_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000004 */
#define DWT_CPICNT_CPICNT_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000008 */
#define DWT_CPICNT_CPICNT_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000010 */
#define DWT_CPICNT_CPICNT_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000020 */
#define DWT_CPICNT_CPICNT_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000040 */
#define DWT_CPICNT_CPICNT_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CPICNT, CPICNT))  /*!< Value 0x00000080 */

/*!< Valuies of base instruction overhead counter register */
#define DWT_CPICNT_0    (0x00UL)  /*!< Value 0x00000000 */
#define DWT_CPICNT_1    (0x01UL)  /*!< Value 0x00000001 */
#define DWT_CPICNT_2    (0x02UL)  /*!< Value 0x00000002 */
#define DWT_CPICNT_3    (0x03UL)  /*!< Value 0x00000003 */
#define DWT_CPICNT_4    (0x04UL)  /*!< Value 0x00000004 */
#define DWT_CPICNT_5    (0x05UL)  /*!< Value 0x00000005 */
#define DWT_CPICNT_6    (0x06UL)  /*!< Value 0x00000006 */
#define DWT_CPICNT_7    (0x07UL)  /*!< Value 0x00000007 */
#define DWT_CPICNT_8    (0x08UL)  /*!< Value 0x00000008 */
#define DWT_CPICNT_9    (0x09UL)  /*!< Value 0x00000009 */
#define DWT_CPICNT_10   (0x0AUL)  /*!< Value 0x0000000A */
#define DWT_CPICNT_11   (0x0BUL)  /*!< Value 0x0000000B */
#define DWT_CPICNT_12   (0x0CUL)  /*!< Value 0x0000000C */
#define DWT_CPICNT_13   (0x0DUL)  /*!< Value 0x0000000D */
#define DWT_CPICNT_14   (0x0EUL)  /*!< Value 0x0000000E */
#define DWT_CPICNT_15   (0x0FUL)  /*!< Value 0x0000000F */
#define DWT_CPICNT_16   (0x10UL)  /*!< Value 0x00000010 */
#define DWT_CPICNT_17   (0x11UL)  /*!< Value 0x00000011 */
#define DWT_CPICNT_18   (0x12UL)  /*!< Value 0x00000012 */
#define DWT_CPICNT_19   (0x13UL)  /*!< Value 0x00000013 */
#define DWT_CPICNT_20   (0x14UL)  /*!< Value 0x00000014 */
#define DWT_CPICNT_21   (0x15UL)  /*!< Value 0x00000015 */
#define DWT_CPICNT_22   (0x16UL)  /*!< Value 0x00000016 */
#define DWT_CPICNT_23   (0x17UL)  /*!< Value 0x00000017 */
#define DWT_CPICNT_24   (0x18UL)  /*!< Value 0x00000018 */
#define DWT_CPICNT_25   (0x19UL)  /*!< Value 0x00000019 */
#define DWT_CPICNT_26   (0x1AUL)  /*!< Value 0x0000001A */
#define DWT_CPICNT_27   (0x1BUL)  /*!< Value 0x0000001B */
#define DWT_CPICNT_28   (0x1CUL)  /*!< Value 0x0000001C */
#define DWT_CPICNT_29   (0x1DUL)  /*!< Value 0x0000001D */
#define DWT_CPICNT_30   (0x1EUL)  /*!< Value 0x0000001E */
#define DWT_CPICNT_31   (0x1FUL)  /*!< Value 0x0000001F */
#define DWT_CPICNT_32   (0x20UL)  /*!< Value 0x00000020 */
#define DWT_CPICNT_33   (0x21UL)  /*!< Value 0x00000021 */
#define DWT_CPICNT_34   (0x22UL)  /*!< Value 0x00000022 */
#define DWT_CPICNT_35   (0x23UL)  /*!< Value 0x00000023 */
#define DWT_CPICNT_36   (0x24UL)  /*!< Value 0x00000024 */
#define DWT_CPICNT_37   (0x25UL)  /*!< Value 0x00000025 */
#define DWT_CPICNT_38   (0x26UL)  /*!< Value 0x00000026 */
#define DWT_CPICNT_39   (0x27UL)  /*!< Value 0x00000027 */
#define DWT_CPICNT_40   (0x28UL)  /*!< Value 0x00000028 */
#define DWT_CPICNT_41   (0x29UL)  /*!< Value 0x00000029 */
#define DWT_CPICNT_42   (0x2AUL)  /*!< Value 0x0000002A */
#define DWT_CPICNT_43   (0x2BUL)  /*!< Value 0x0000002B */
#define DWT_CPICNT_44   (0x2CUL)  /*!< Value 0x0000002C */
#define DWT_CPICNT_45   (0x2DUL)  /*!< Value 0x0000002D */
#define DWT_CPICNT_46   (0x2EUL)  /*!< Value 0x0000002E */
#define DWT_CPICNT_47   (0x2FUL)  /*!< Value 0x0000002F */
#define DWT_CPICNT_48   (0x30UL)  /*!< Value 0x00000030 */
#define DWT_CPICNT_49   (0x31UL)  /*!< Value 0x00000031 */
#define DWT_CPICNT_50   (0x32UL)  /*!< Value 0x00000032 */
#define DWT_CPICNT_51   (0x33UL)  /*!< Value 0x00000033 */
#define DWT_CPICNT_52   (0x34UL)  /*!< Value 0x00000034 */
#define DWT_CPICNT_53   (0x35UL)  /*!< Value 0x00000035 */
#define DWT_CPICNT_54   (0x36UL)  /*!< Value 0x00000036 */
#define DWT_CPICNT_55   (0x37UL)  /*!< Value 0x00000037 */
#define DWT_CPICNT_56   (0x38UL)  /*!< Value 0x00000038 */
#define DWT_CPICNT_57   (0x39UL)  /*!< Value 0x00000039 */
#define DWT_CPICNT_58   (0x3AUL)  /*!< Value 0x0000003A */
#define DWT_CPICNT_59   (0x3BUL)  /*!< Value 0x0000003B */
#define DWT_CPICNT_60   (0x3CUL)  /*!< Value 0x0000003C */
#define DWT_CPICNT_61   (0x3DUL)  /*!< Value 0x0000003D */
#define DWT_CPICNT_62   (0x3EUL)  /*!< Value 0x0000003E */
#define DWT_CPICNT_63   (0x3FUL)  /*!< Value 0x0000003F */
#define DWT_CPICNT_64   (0x40UL)  /*!< Value 0x00000040 */
#define DWT_CPICNT_65   (0x41UL)  /*!< Value 0x00000041 */
#define DWT_CPICNT_66   (0x42UL)  /*!< Value 0x00000042 */
#define DWT_CPICNT_67   (0x43UL)  /*!< Value 0x00000043 */
#define DWT_CPICNT_68   (0x44UL)  /*!< Value 0x00000044 */
#define DWT_CPICNT_69   (0x45UL)  /*!< Value 0x00000045 */
#define DWT_CPICNT_70   (0x46UL)  /*!< Value 0x00000046 */
#define DWT_CPICNT_71   (0x47UL)  /*!< Value 0x00000047 */
#define DWT_CPICNT_72   (0x48UL)  /*!< Value 0x00000048 */
#define DWT_CPICNT_73   (0x49UL)  /*!< Value 0x00000049 */
#define DWT_CPICNT_74   (0x4AUL)  /*!< Value 0x0000004A */
#define DWT_CPICNT_75   (0x4BUL)  /*!< Value 0x0000004B */
#define DWT_CPICNT_76   (0x4CUL)  /*!< Value 0x0000004C */
#define DWT_CPICNT_77   (0x4DUL)  /*!< Value 0x0000004D */
#define DWT_CPICNT_78   (0x4EUL)  /*!< Value 0x0000004E */
#define DWT_CPICNT_79   (0x4FUL)  /*!< Value 0x0000004F */
#define DWT_CPICNT_80   (0x50UL)  /*!< Value 0x00000050 */
#define DWT_CPICNT_81   (0x51UL)  /*!< Value 0x00000051 */
#define DWT_CPICNT_82   (0x52UL)  /*!< Value 0x00000052 */
#define DWT_CPICNT_83   (0x53UL)  /*!< Value 0x00000053 */
#define DWT_CPICNT_84   (0x54UL)  /*!< Value 0x00000054 */
#define DWT_CPICNT_85   (0x55UL)  /*!< Value 0x00000055 */
#define DWT_CPICNT_86   (0x56UL)  /*!< Value 0x00000056 */
#define DWT_CPICNT_87   (0x57UL)  /*!< Value 0x00000057 */
#define DWT_CPICNT_88   (0x58UL)  /*!< Value 0x00000058 */
#define DWT_CPICNT_89   (0x59UL)  /*!< Value 0x00000059 */
#define DWT_CPICNT_90   (0x5AUL)  /*!< Value 0x0000005A */
#define DWT_CPICNT_91   (0x5BUL)  /*!< Value 0x0000005B */
#define DWT_CPICNT_92   (0x5CUL)  /*!< Value 0x0000005C */
#define DWT_CPICNT_93   (0x5DUL)  /*!< Value 0x0000005D */
#define DWT_CPICNT_94   (0x5EUL)  /*!< Value 0x0000005E */
#define DWT_CPICNT_95   (0x5FUL)  /*!< Value 0x0000005F */
#define DWT_CPICNT_96   (0x60UL)  /*!< Value 0x00000060 */
#define DWT_CPICNT_97   (0x61UL)  /*!< Value 0x00000061 */
#define DWT_CPICNT_98   (0x62UL)  /*!< Value 0x00000062 */
#define DWT_CPICNT_99   (0x63UL)  /*!< Value 0x00000063 */
#define DWT_CPICNT_100  (0x64UL)  /*!< Value 0x00000064 */
#define DWT_CPICNT_101  (0x65UL)  /*!< Value 0x00000065 */
#define DWT_CPICNT_102  (0x66UL)  /*!< Value 0x00000066 */
#define DWT_CPICNT_103  (0x67UL)  /*!< Value 0x00000067 */
#define DWT_CPICNT_104  (0x68UL)  /*!< Value 0x00000068 */
#define DWT_CPICNT_105  (0x69UL)  /*!< Value 0x00000069 */
#define DWT_CPICNT_106  (0x6AUL)  /*!< Value 0x0000006A */
#define DWT_CPICNT_107  (0x6BUL)  /*!< Value 0x0000006B */
#define DWT_CPICNT_108  (0x6CUL)  /*!< Value 0x0000006C */
#define DWT_CPICNT_109  (0x6DUL)  /*!< Value 0x0000006D */
#define DWT_CPICNT_110  (0x6EUL)  /*!< Value 0x0000006E */
#define DWT_CPICNT_111  (0x6FUL)  /*!< Value 0x0000006F */
#define DWT_CPICNT_112  (0x70UL)  /*!< Value 0x00000070 */
#define DWT_CPICNT_113  (0x71UL)  /*!< Value 0x00000071 */
#define DWT_CPICNT_114  (0x72UL)  /*!< Value 0x00000072 */
#define DWT_CPICNT_115  (0x73UL)  /*!< Value 0x00000073 */
#define DWT_CPICNT_116  (0x74UL)  /*!< Value 0x00000074 */
#define DWT_CPICNT_117  (0x75UL)  /*!< Value 0x00000075 */
#define DWT_CPICNT_118  (0x76UL)  /*!< Value 0x00000076 */
#define DWT_CPICNT_119  (0x77UL)  /*!< Value 0x00000077 */
#define DWT_CPICNT_120  (0x78UL)  /*!< Value 0x00000078 */
#define DWT_CPICNT_121  (0x79UL)  /*!< Value 0x00000079 */
#define DWT_CPICNT_122  (0x7AUL)  /*!< Value 0x0000007A */
#define DWT_CPICNT_123  (0x7BUL)  /*!< Value 0x0000007B */
#define DWT_CPICNT_124  (0x7CUL)  /*!< Value 0x0000007C */
#define DWT_CPICNT_125  (0x7DUL)  /*!< Value 0x0000007D */
#define DWT_CPICNT_126  (0x7EUL)  /*!< Value 0x0000007E */
#define DWT_CPICNT_127  (0x7FUL)  /*!< Value 0x0000007F */
#define DWT_CPICNT_128  (0x80UL)  /*!< Value 0x00000080 */
#define DWT_CPICNT_129  (0x81UL)  /*!< Value 0x00000081 */
#define DWT_CPICNT_130  (0x82UL)  /*!< Value 0x00000082 */
#define DWT_CPICNT_131  (0x83UL)  /*!< Value 0x00000083 */
#define DWT_CPICNT_132  (0x84UL)  /*!< Value 0x00000084 */
#define DWT_CPICNT_133  (0x85UL)  /*!< Value 0x00000085 */
#define DWT_CPICNT_134  (0x86UL)  /*!< Value 0x00000086 */
#define DWT_CPICNT_135  (0x87UL)  /*!< Value 0x00000087 */
#define DWT_CPICNT_136  (0x88UL)  /*!< Value 0x00000088 */
#define DWT_CPICNT_137  (0x89UL)  /*!< Value 0x00000089 */
#define DWT_CPICNT_138  (0x8AUL)  /*!< Value 0x0000008A */
#define DWT_CPICNT_139  (0x8BUL)  /*!< Value 0x0000008B */
#define DWT_CPICNT_140  (0x8CUL)  /*!< Value 0x0000008C */
#define DWT_CPICNT_141  (0x8DUL)  /*!< Value 0x0000008D */
#define DWT_CPICNT_142  (0x8EUL)  /*!< Value 0x0000008E */
#define DWT_CPICNT_143  (0x8FUL)  /*!< Value 0x0000008F */
#define DWT_CPICNT_144  (0x90UL)  /*!< Value 0x00000090 */
#define DWT_CPICNT_145  (0x91UL)  /*!< Value 0x00000091 */
#define DWT_CPICNT_146  (0x92UL)  /*!< Value 0x00000092 */
#define DWT_CPICNT_147  (0x93UL)  /*!< Value 0x00000093 */
#define DWT_CPICNT_148  (0x94UL)  /*!< Value 0x00000094 */
#define DWT_CPICNT_149  (0x95UL)  /*!< Value 0x00000095 */
#define DWT_CPICNT_150  (0x96UL)  /*!< Value 0x00000096 */
#define DWT_CPICNT_151  (0x97UL)  /*!< Value 0x00000097 */
#define DWT_CPICNT_152  (0x98UL)  /*!< Value 0x00000098 */
#define DWT_CPICNT_153  (0x99UL)  /*!< Value 0x00000099 */
#define DWT_CPICNT_154  (0x9AUL)  /*!< Value 0x0000009A */
#define DWT_CPICNT_155  (0x9BUL)  /*!< Value 0x0000009B */
#define DWT_CPICNT_156  (0x9CUL)  /*!< Value 0x0000009C */
#define DWT_CPICNT_157  (0x9DUL)  /*!< Value 0x0000009D */
#define DWT_CPICNT_158  (0x9EUL)  /*!< Value 0x0000009E */
#define DWT_CPICNT_159  (0x9FUL)  /*!< Value 0x0000009F */
#define DWT_CPICNT_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define DWT_CPICNT_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define DWT_CPICNT_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define DWT_CPICNT_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define DWT_CPICNT_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define DWT_CPICNT_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define DWT_CPICNT_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define DWT_CPICNT_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define DWT_CPICNT_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define DWT_CPICNT_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define DWT_CPICNT_170  (0xAAUL)  /*!< Value 0x000000AA */
#define DWT_CPICNT_171  (0xABUL)  /*!< Value 0x000000AB */
#define DWT_CPICNT_172  (0xACUL)  /*!< Value 0x000000AC */
#define DWT_CPICNT_173  (0xADUL)  /*!< Value 0x000000AD */
#define DWT_CPICNT_174  (0xAEUL)  /*!< Value 0x000000AE */
#define DWT_CPICNT_175  (0xAFUL)  /*!< Value 0x000000AF */
#define DWT_CPICNT_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define DWT_CPICNT_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define DWT_CPICNT_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define DWT_CPICNT_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define DWT_CPICNT_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define DWT_CPICNT_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define DWT_CPICNT_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define DWT_CPICNT_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define DWT_CPICNT_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define DWT_CPICNT_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define DWT_CPICNT_186  (0xBAUL)  /*!< Value 0x000000BA */
#define DWT_CPICNT_187  (0xBBUL)  /*!< Value 0x000000BB */
#define DWT_CPICNT_188  (0xBCUL)  /*!< Value 0x000000BC */
#define DWT_CPICNT_189  (0xBDUL)  /*!< Value 0x000000BD */
#define DWT_CPICNT_190  (0xBEUL)  /*!< Value 0x000000BE */
#define DWT_CPICNT_191  (0xBFUL)  /*!< Value 0x000000BF */
#define DWT_CPICNT_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define DWT_CPICNT_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define DWT_CPICNT_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define DWT_CPICNT_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define DWT_CPICNT_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define DWT_CPICNT_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define DWT_CPICNT_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define DWT_CPICNT_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define DWT_CPICNT_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define DWT_CPICNT_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define DWT_CPICNT_202  (0xCAUL)  /*!< Value 0x000000CA */
#define DWT_CPICNT_203  (0xCBUL)  /*!< Value 0x000000CB */
#define DWT_CPICNT_204  (0xCCUL)  /*!< Value 0x000000CC */
#define DWT_CPICNT_205  (0xCDUL)  /*!< Value 0x000000CD */
#define DWT_CPICNT_206  (0xCEUL)  /*!< Value 0x000000CE */
#define DWT_CPICNT_207  (0xCFUL)  /*!< Value 0x000000CF */
#define DWT_CPICNT_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define DWT_CPICNT_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define DWT_CPICNT_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define DWT_CPICNT_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define DWT_CPICNT_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define DWT_CPICNT_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define DWT_CPICNT_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define DWT_CPICNT_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define DWT_CPICNT_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define DWT_CPICNT_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define DWT_CPICNT_218  (0xDAUL)  /*!< Value 0x000000DA */
#define DWT_CPICNT_219  (0xDBUL)  /*!< Value 0x000000DB */
#define DWT_CPICNT_220  (0xDCUL)  /*!< Value 0x000000DC */
#define DWT_CPICNT_221  (0xDDUL)  /*!< Value 0x000000DD */
#define DWT_CPICNT_222  (0xDEUL)  /*!< Value 0x000000DE */
#define DWT_CPICNT_223  (0xDFUL)  /*!< Value 0x000000DF */
#define DWT_CPICNT_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define DWT_CPICNT_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define DWT_CPICNT_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define DWT_CPICNT_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define DWT_CPICNT_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define DWT_CPICNT_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define DWT_CPICNT_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define DWT_CPICNT_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define DWT_CPICNT_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define DWT_CPICNT_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define DWT_CPICNT_234  (0xEAUL)  /*!< Value 0x000000EA */
#define DWT_CPICNT_235  (0xEBUL)  /*!< Value 0x000000EB */
#define DWT_CPICNT_236  (0xECUL)  /*!< Value 0x000000EC */
#define DWT_CPICNT_237  (0xEDUL)  /*!< Value 0x000000ED */
#define DWT_CPICNT_238  (0xEEUL)  /*!< Value 0x000000EE */
#define DWT_CPICNT_239  (0xEFUL)  /*!< Value 0x000000EF */
#define DWT_CPICNT_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define DWT_CPICNT_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define DWT_CPICNT_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define DWT_CPICNT_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define DWT_CPICNT_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define DWT_CPICNT_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define DWT_CPICNT_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define DWT_CPICNT_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define DWT_CPICNT_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define DWT_CPICNT_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define DWT_CPICNT_250  (0xFAUL)  /*!< Value 0x000000FA */
#define DWT_CPICNT_251  (0xFBUL)  /*!< Value 0x000000FB */
#define DWT_CPICNT_252  (0xFCUL)  /*!< Value 0x000000FC */
#define DWT_CPICNT_253  (0xFDUL)  /*!< Value 0x000000FD */
#define DWT_CPICNT_254  (0xFEUL)  /*!< Value 0x000000FE */
#define DWT_CPICNT_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< Exception overhead count register */
#define DWT_EXCCNT_EXCCNT_OFFSET  (0U)
#define DWT_EXCCNT_EXCCNT_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Mask  0x000000FF */
#define DWT_EXCCNT_EXCCNT_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000001 */
#define DWT_EXCCNT_EXCCNT_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000002 */
#define DWT_EXCCNT_EXCCNT_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000004 */
#define DWT_EXCCNT_EXCCNT_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000008 */
#define DWT_EXCCNT_EXCCNT_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000010 */
#define DWT_EXCCNT_EXCCNT_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000020 */
#define DWT_EXCCNT_EXCCNT_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000040 */
#define DWT_EXCCNT_EXCCNT_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, EXCCNT, EXCCNT))  /*!< Value 0x00000080 */

/*!< Valuies of exception overhead counter register */
#define DWT_EXCCNT_0    (0x00UL)  /*!< Value 0x00000000 */
#define DWT_EXCCNT_1    (0x01UL)  /*!< Value 0x00000001 */
#define DWT_EXCCNT_2    (0x02UL)  /*!< Value 0x00000002 */
#define DWT_EXCCNT_3    (0x03UL)  /*!< Value 0x00000003 */
#define DWT_EXCCNT_4    (0x04UL)  /*!< Value 0x00000004 */
#define DWT_EXCCNT_5    (0x05UL)  /*!< Value 0x00000005 */
#define DWT_EXCCNT_6    (0x06UL)  /*!< Value 0x00000006 */
#define DWT_EXCCNT_7    (0x07UL)  /*!< Value 0x00000007 */
#define DWT_EXCCNT_8    (0x08UL)  /*!< Value 0x00000008 */
#define DWT_EXCCNT_9    (0x09UL)  /*!< Value 0x00000009 */
#define DWT_EXCCNT_10   (0x0AUL)  /*!< Value 0x0000000A */
#define DWT_EXCCNT_11   (0x0BUL)  /*!< Value 0x0000000B */
#define DWT_EXCCNT_12   (0x0CUL)  /*!< Value 0x0000000C */
#define DWT_EXCCNT_13   (0x0DUL)  /*!< Value 0x0000000D */
#define DWT_EXCCNT_14   (0x0EUL)  /*!< Value 0x0000000E */
#define DWT_EXCCNT_15   (0x0FUL)  /*!< Value 0x0000000F */
#define DWT_EXCCNT_16   (0x10UL)  /*!< Value 0x00000010 */
#define DWT_EXCCNT_17   (0x11UL)  /*!< Value 0x00000011 */
#define DWT_EXCCNT_18   (0x12UL)  /*!< Value 0x00000012 */
#define DWT_EXCCNT_19   (0x13UL)  /*!< Value 0x00000013 */
#define DWT_EXCCNT_20   (0x14UL)  /*!< Value 0x00000014 */
#define DWT_EXCCNT_21   (0x15UL)  /*!< Value 0x00000015 */
#define DWT_EXCCNT_22   (0x16UL)  /*!< Value 0x00000016 */
#define DWT_EXCCNT_23   (0x17UL)  /*!< Value 0x00000017 */
#define DWT_EXCCNT_24   (0x18UL)  /*!< Value 0x00000018 */
#define DWT_EXCCNT_25   (0x19UL)  /*!< Value 0x00000019 */
#define DWT_EXCCNT_26   (0x1AUL)  /*!< Value 0x0000001A */
#define DWT_EXCCNT_27   (0x1BUL)  /*!< Value 0x0000001B */
#define DWT_EXCCNT_28   (0x1CUL)  /*!< Value 0x0000001C */
#define DWT_EXCCNT_29   (0x1DUL)  /*!< Value 0x0000001D */
#define DWT_EXCCNT_30   (0x1EUL)  /*!< Value 0x0000001E */
#define DWT_EXCCNT_31   (0x1FUL)  /*!< Value 0x0000001F */
#define DWT_EXCCNT_32   (0x20UL)  /*!< Value 0x00000020 */
#define DWT_EXCCNT_33   (0x21UL)  /*!< Value 0x00000021 */
#define DWT_EXCCNT_34   (0x22UL)  /*!< Value 0x00000022 */
#define DWT_EXCCNT_35   (0x23UL)  /*!< Value 0x00000023 */
#define DWT_EXCCNT_36   (0x24UL)  /*!< Value 0x00000024 */
#define DWT_EXCCNT_37   (0x25UL)  /*!< Value 0x00000025 */
#define DWT_EXCCNT_38   (0x26UL)  /*!< Value 0x00000026 */
#define DWT_EXCCNT_39   (0x27UL)  /*!< Value 0x00000027 */
#define DWT_EXCCNT_40   (0x28UL)  /*!< Value 0x00000028 */
#define DWT_EXCCNT_41   (0x29UL)  /*!< Value 0x00000029 */
#define DWT_EXCCNT_42   (0x2AUL)  /*!< Value 0x0000002A */
#define DWT_EXCCNT_43   (0x2BUL)  /*!< Value 0x0000002B */
#define DWT_EXCCNT_44   (0x2CUL)  /*!< Value 0x0000002C */
#define DWT_EXCCNT_45   (0x2DUL)  /*!< Value 0x0000002D */
#define DWT_EXCCNT_46   (0x2EUL)  /*!< Value 0x0000002E */
#define DWT_EXCCNT_47   (0x2FUL)  /*!< Value 0x0000002F */
#define DWT_EXCCNT_48   (0x30UL)  /*!< Value 0x00000030 */
#define DWT_EXCCNT_49   (0x31UL)  /*!< Value 0x00000031 */
#define DWT_EXCCNT_50   (0x32UL)  /*!< Value 0x00000032 */
#define DWT_EXCCNT_51   (0x33UL)  /*!< Value 0x00000033 */
#define DWT_EXCCNT_52   (0x34UL)  /*!< Value 0x00000034 */
#define DWT_EXCCNT_53   (0x35UL)  /*!< Value 0x00000035 */
#define DWT_EXCCNT_54   (0x36UL)  /*!< Value 0x00000036 */
#define DWT_EXCCNT_55   (0x37UL)  /*!< Value 0x00000037 */
#define DWT_EXCCNT_56   (0x38UL)  /*!< Value 0x00000038 */
#define DWT_EXCCNT_57   (0x39UL)  /*!< Value 0x00000039 */
#define DWT_EXCCNT_58   (0x3AUL)  /*!< Value 0x0000003A */
#define DWT_EXCCNT_59   (0x3BUL)  /*!< Value 0x0000003B */
#define DWT_EXCCNT_60   (0x3CUL)  /*!< Value 0x0000003C */
#define DWT_EXCCNT_61   (0x3DUL)  /*!< Value 0x0000003D */
#define DWT_EXCCNT_62   (0x3EUL)  /*!< Value 0x0000003E */
#define DWT_EXCCNT_63   (0x3FUL)  /*!< Value 0x0000003F */
#define DWT_EXCCNT_64   (0x40UL)  /*!< Value 0x00000040 */
#define DWT_EXCCNT_65   (0x41UL)  /*!< Value 0x00000041 */
#define DWT_EXCCNT_66   (0x42UL)  /*!< Value 0x00000042 */
#define DWT_EXCCNT_67   (0x43UL)  /*!< Value 0x00000043 */
#define DWT_EXCCNT_68   (0x44UL)  /*!< Value 0x00000044 */
#define DWT_EXCCNT_69   (0x45UL)  /*!< Value 0x00000045 */
#define DWT_EXCCNT_70   (0x46UL)  /*!< Value 0x00000046 */
#define DWT_EXCCNT_71   (0x47UL)  /*!< Value 0x00000047 */
#define DWT_EXCCNT_72   (0x48UL)  /*!< Value 0x00000048 */
#define DWT_EXCCNT_73   (0x49UL)  /*!< Value 0x00000049 */
#define DWT_EXCCNT_74   (0x4AUL)  /*!< Value 0x0000004A */
#define DWT_EXCCNT_75   (0x4BUL)  /*!< Value 0x0000004B */
#define DWT_EXCCNT_76   (0x4CUL)  /*!< Value 0x0000004C */
#define DWT_EXCCNT_77   (0x4DUL)  /*!< Value 0x0000004D */
#define DWT_EXCCNT_78   (0x4EUL)  /*!< Value 0x0000004E */
#define DWT_EXCCNT_79   (0x4FUL)  /*!< Value 0x0000004F */
#define DWT_EXCCNT_80   (0x50UL)  /*!< Value 0x00000050 */
#define DWT_EXCCNT_81   (0x51UL)  /*!< Value 0x00000051 */
#define DWT_EXCCNT_82   (0x52UL)  /*!< Value 0x00000052 */
#define DWT_EXCCNT_83   (0x53UL)  /*!< Value 0x00000053 */
#define DWT_EXCCNT_84   (0x54UL)  /*!< Value 0x00000054 */
#define DWT_EXCCNT_85   (0x55UL)  /*!< Value 0x00000055 */
#define DWT_EXCCNT_86   (0x56UL)  /*!< Value 0x00000056 */
#define DWT_EXCCNT_87   (0x57UL)  /*!< Value 0x00000057 */
#define DWT_EXCCNT_88   (0x58UL)  /*!< Value 0x00000058 */
#define DWT_EXCCNT_89   (0x59UL)  /*!< Value 0x00000059 */
#define DWT_EXCCNT_90   (0x5AUL)  /*!< Value 0x0000005A */
#define DWT_EXCCNT_91   (0x5BUL)  /*!< Value 0x0000005B */
#define DWT_EXCCNT_92   (0x5CUL)  /*!< Value 0x0000005C */
#define DWT_EXCCNT_93   (0x5DUL)  /*!< Value 0x0000005D */
#define DWT_EXCCNT_94   (0x5EUL)  /*!< Value 0x0000005E */
#define DWT_EXCCNT_95   (0x5FUL)  /*!< Value 0x0000005F */
#define DWT_EXCCNT_96   (0x60UL)  /*!< Value 0x00000060 */
#define DWT_EXCCNT_97   (0x61UL)  /*!< Value 0x00000061 */
#define DWT_EXCCNT_98   (0x62UL)  /*!< Value 0x00000062 */
#define DWT_EXCCNT_99   (0x63UL)  /*!< Value 0x00000063 */
#define DWT_EXCCNT_100  (0x64UL)  /*!< Value 0x00000064 */
#define DWT_EXCCNT_101  (0x65UL)  /*!< Value 0x00000065 */
#define DWT_EXCCNT_102  (0x66UL)  /*!< Value 0x00000066 */
#define DWT_EXCCNT_103  (0x67UL)  /*!< Value 0x00000067 */
#define DWT_EXCCNT_104  (0x68UL)  /*!< Value 0x00000068 */
#define DWT_EXCCNT_105  (0x69UL)  /*!< Value 0x00000069 */
#define DWT_EXCCNT_106  (0x6AUL)  /*!< Value 0x0000006A */
#define DWT_EXCCNT_107  (0x6BUL)  /*!< Value 0x0000006B */
#define DWT_EXCCNT_108  (0x6CUL)  /*!< Value 0x0000006C */
#define DWT_EXCCNT_109  (0x6DUL)  /*!< Value 0x0000006D */
#define DWT_EXCCNT_110  (0x6EUL)  /*!< Value 0x0000006E */
#define DWT_EXCCNT_111  (0x6FUL)  /*!< Value 0x0000006F */
#define DWT_EXCCNT_112  (0x70UL)  /*!< Value 0x00000070 */
#define DWT_EXCCNT_113  (0x71UL)  /*!< Value 0x00000071 */
#define DWT_EXCCNT_114  (0x72UL)  /*!< Value 0x00000072 */
#define DWT_EXCCNT_115  (0x73UL)  /*!< Value 0x00000073 */
#define DWT_EXCCNT_116  (0x74UL)  /*!< Value 0x00000074 */
#define DWT_EXCCNT_117  (0x75UL)  /*!< Value 0x00000075 */
#define DWT_EXCCNT_118  (0x76UL)  /*!< Value 0x00000076 */
#define DWT_EXCCNT_119  (0x77UL)  /*!< Value 0x00000077 */
#define DWT_EXCCNT_120  (0x78UL)  /*!< Value 0x00000078 */
#define DWT_EXCCNT_121  (0x79UL)  /*!< Value 0x00000079 */
#define DWT_EXCCNT_122  (0x7AUL)  /*!< Value 0x0000007A */
#define DWT_EXCCNT_123  (0x7BUL)  /*!< Value 0x0000007B */
#define DWT_EXCCNT_124  (0x7CUL)  /*!< Value 0x0000007C */
#define DWT_EXCCNT_125  (0x7DUL)  /*!< Value 0x0000007D */
#define DWT_EXCCNT_126  (0x7EUL)  /*!< Value 0x0000007E */
#define DWT_EXCCNT_127  (0x7FUL)  /*!< Value 0x0000007F */
#define DWT_EXCCNT_128  (0x80UL)  /*!< Value 0x00000080 */
#define DWT_EXCCNT_129  (0x81UL)  /*!< Value 0x00000081 */
#define DWT_EXCCNT_130  (0x82UL)  /*!< Value 0x00000082 */
#define DWT_EXCCNT_131  (0x83UL)  /*!< Value 0x00000083 */
#define DWT_EXCCNT_132  (0x84UL)  /*!< Value 0x00000084 */
#define DWT_EXCCNT_133  (0x85UL)  /*!< Value 0x00000085 */
#define DWT_EXCCNT_134  (0x86UL)  /*!< Value 0x00000086 */
#define DWT_EXCCNT_135  (0x87UL)  /*!< Value 0x00000087 */
#define DWT_EXCCNT_136  (0x88UL)  /*!< Value 0x00000088 */
#define DWT_EXCCNT_137  (0x89UL)  /*!< Value 0x00000089 */
#define DWT_EXCCNT_138  (0x8AUL)  /*!< Value 0x0000008A */
#define DWT_EXCCNT_139  (0x8BUL)  /*!< Value 0x0000008B */
#define DWT_EXCCNT_140  (0x8CUL)  /*!< Value 0x0000008C */
#define DWT_EXCCNT_141  (0x8DUL)  /*!< Value 0x0000008D */
#define DWT_EXCCNT_142  (0x8EUL)  /*!< Value 0x0000008E */
#define DWT_EXCCNT_143  (0x8FUL)  /*!< Value 0x0000008F */
#define DWT_EXCCNT_144  (0x90UL)  /*!< Value 0x00000090 */
#define DWT_EXCCNT_145  (0x91UL)  /*!< Value 0x00000091 */
#define DWT_EXCCNT_146  (0x92UL)  /*!< Value 0x00000092 */
#define DWT_EXCCNT_147  (0x93UL)  /*!< Value 0x00000093 */
#define DWT_EXCCNT_148  (0x94UL)  /*!< Value 0x00000094 */
#define DWT_EXCCNT_149  (0x95UL)  /*!< Value 0x00000095 */
#define DWT_EXCCNT_150  (0x96UL)  /*!< Value 0x00000096 */
#define DWT_EXCCNT_151  (0x97UL)  /*!< Value 0x00000097 */
#define DWT_EXCCNT_152  (0x98UL)  /*!< Value 0x00000098 */
#define DWT_EXCCNT_153  (0x99UL)  /*!< Value 0x00000099 */
#define DWT_EXCCNT_154  (0x9AUL)  /*!< Value 0x0000009A */
#define DWT_EXCCNT_155  (0x9BUL)  /*!< Value 0x0000009B */
#define DWT_EXCCNT_156  (0x9CUL)  /*!< Value 0x0000009C */
#define DWT_EXCCNT_157  (0x9DUL)  /*!< Value 0x0000009D */
#define DWT_EXCCNT_158  (0x9EUL)  /*!< Value 0x0000009E */
#define DWT_EXCCNT_159  (0x9FUL)  /*!< Value 0x0000009F */
#define DWT_EXCCNT_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define DWT_EXCCNT_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define DWT_EXCCNT_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define DWT_EXCCNT_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define DWT_EXCCNT_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define DWT_EXCCNT_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define DWT_EXCCNT_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define DWT_EXCCNT_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define DWT_EXCCNT_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define DWT_EXCCNT_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define DWT_EXCCNT_170  (0xAAUL)  /*!< Value 0x000000AA */
#define DWT_EXCCNT_171  (0xABUL)  /*!< Value 0x000000AB */
#define DWT_EXCCNT_172  (0xACUL)  /*!< Value 0x000000AC */
#define DWT_EXCCNT_173  (0xADUL)  /*!< Value 0x000000AD */
#define DWT_EXCCNT_174  (0xAEUL)  /*!< Value 0x000000AE */
#define DWT_EXCCNT_175  (0xAFUL)  /*!< Value 0x000000AF */
#define DWT_EXCCNT_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define DWT_EXCCNT_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define DWT_EXCCNT_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define DWT_EXCCNT_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define DWT_EXCCNT_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define DWT_EXCCNT_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define DWT_EXCCNT_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define DWT_EXCCNT_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define DWT_EXCCNT_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define DWT_EXCCNT_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define DWT_EXCCNT_186  (0xBAUL)  /*!< Value 0x000000BA */
#define DWT_EXCCNT_187  (0xBBUL)  /*!< Value 0x000000BB */
#define DWT_EXCCNT_188  (0xBCUL)  /*!< Value 0x000000BC */
#define DWT_EXCCNT_189  (0xBDUL)  /*!< Value 0x000000BD */
#define DWT_EXCCNT_190  (0xBEUL)  /*!< Value 0x000000BE */
#define DWT_EXCCNT_191  (0xBFUL)  /*!< Value 0x000000BF */
#define DWT_EXCCNT_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define DWT_EXCCNT_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define DWT_EXCCNT_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define DWT_EXCCNT_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define DWT_EXCCNT_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define DWT_EXCCNT_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define DWT_EXCCNT_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define DWT_EXCCNT_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define DWT_EXCCNT_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define DWT_EXCCNT_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define DWT_EXCCNT_202  (0xCAUL)  /*!< Value 0x000000CA */
#define DWT_EXCCNT_203  (0xCBUL)  /*!< Value 0x000000CB */
#define DWT_EXCCNT_204  (0xCCUL)  /*!< Value 0x000000CC */
#define DWT_EXCCNT_205  (0xCDUL)  /*!< Value 0x000000CD */
#define DWT_EXCCNT_206  (0xCEUL)  /*!< Value 0x000000CE */
#define DWT_EXCCNT_207  (0xCFUL)  /*!< Value 0x000000CF */
#define DWT_EXCCNT_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define DWT_EXCCNT_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define DWT_EXCCNT_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define DWT_EXCCNT_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define DWT_EXCCNT_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define DWT_EXCCNT_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define DWT_EXCCNT_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define DWT_EXCCNT_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define DWT_EXCCNT_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define DWT_EXCCNT_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define DWT_EXCCNT_218  (0xDAUL)  /*!< Value 0x000000DA */
#define DWT_EXCCNT_219  (0xDBUL)  /*!< Value 0x000000DB */
#define DWT_EXCCNT_220  (0xDCUL)  /*!< Value 0x000000DC */
#define DWT_EXCCNT_221  (0xDDUL)  /*!< Value 0x000000DD */
#define DWT_EXCCNT_222  (0xDEUL)  /*!< Value 0x000000DE */
#define DWT_EXCCNT_223  (0xDFUL)  /*!< Value 0x000000DF */
#define DWT_EXCCNT_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define DWT_EXCCNT_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define DWT_EXCCNT_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define DWT_EXCCNT_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define DWT_EXCCNT_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define DWT_EXCCNT_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define DWT_EXCCNT_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define DWT_EXCCNT_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define DWT_EXCCNT_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define DWT_EXCCNT_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define DWT_EXCCNT_234  (0xEAUL)  /*!< Value 0x000000EA */
#define DWT_EXCCNT_235  (0xEBUL)  /*!< Value 0x000000EB */
#define DWT_EXCCNT_236  (0xECUL)  /*!< Value 0x000000EC */
#define DWT_EXCCNT_237  (0xEDUL)  /*!< Value 0x000000ED */
#define DWT_EXCCNT_238  (0xEEUL)  /*!< Value 0x000000EE */
#define DWT_EXCCNT_239  (0xEFUL)  /*!< Value 0x000000EF */
#define DWT_EXCCNT_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define DWT_EXCCNT_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define DWT_EXCCNT_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define DWT_EXCCNT_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define DWT_EXCCNT_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define DWT_EXCCNT_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define DWT_EXCCNT_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define DWT_EXCCNT_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define DWT_EXCCNT_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define DWT_EXCCNT_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define DWT_EXCCNT_250  (0xFAUL)  /*!< Value 0x000000FA */
#define DWT_EXCCNT_251  (0xFBUL)  /*!< Value 0x000000FB */
#define DWT_EXCCNT_252  (0xFCUL)  /*!< Value 0x000000FC */
#define DWT_EXCCNT_253  (0xFDUL)  /*!< Value 0x000000FD */
#define DWT_EXCCNT_254  (0xFEUL)  /*!< Value 0x000000FE */
#define DWT_EXCCNT_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< Sleep overhead count register */
#define DWT_SLEEPCNT_SLEEPCNT_OFFSET  (0U)
#define DWT_SLEEPCNT_SLEEPCNT_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Mask  0x000000FF */
#define DWT_SLEEPCNT_SLEEPCNT_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000001 */
#define DWT_SLEEPCNT_SLEEPCNT_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000002 */
#define DWT_SLEEPCNT_SLEEPCNT_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000004 */
#define DWT_SLEEPCNT_SLEEPCNT_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000008 */
#define DWT_SLEEPCNT_SLEEPCNT_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000010 */
#define DWT_SLEEPCNT_SLEEPCNT_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000020 */
#define DWT_SLEEPCNT_SLEEPCNT_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000040 */
#define DWT_SLEEPCNT_SLEEPCNT_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, SLEEPCNT, SLEEPCNT))  /*!< Value 0x00000080 */

/*!< Valuies of sleep overhead counter register */
#define DWT_SLEEPCNT_0    (0x00UL)  /*!< Value 0x00000000 */
#define DWT_SLEEPCNT_1    (0x01UL)  /*!< Value 0x00000001 */
#define DWT_SLEEPCNT_2    (0x02UL)  /*!< Value 0x00000002 */
#define DWT_SLEEPCNT_3    (0x03UL)  /*!< Value 0x00000003 */
#define DWT_SLEEPCNT_4    (0x04UL)  /*!< Value 0x00000004 */
#define DWT_SLEEPCNT_5    (0x05UL)  /*!< Value 0x00000005 */
#define DWT_SLEEPCNT_6    (0x06UL)  /*!< Value 0x00000006 */
#define DWT_SLEEPCNT_7    (0x07UL)  /*!< Value 0x00000007 */
#define DWT_SLEEPCNT_8    (0x08UL)  /*!< Value 0x00000008 */
#define DWT_SLEEPCNT_9    (0x09UL)  /*!< Value 0x00000009 */
#define DWT_SLEEPCNT_10   (0x0AUL)  /*!< Value 0x0000000A */
#define DWT_SLEEPCNT_11   (0x0BUL)  /*!< Value 0x0000000B */
#define DWT_SLEEPCNT_12   (0x0CUL)  /*!< Value 0x0000000C */
#define DWT_SLEEPCNT_13   (0x0DUL)  /*!< Value 0x0000000D */
#define DWT_SLEEPCNT_14   (0x0EUL)  /*!< Value 0x0000000E */
#define DWT_SLEEPCNT_15   (0x0FUL)  /*!< Value 0x0000000F */
#define DWT_SLEEPCNT_16   (0x10UL)  /*!< Value 0x00000010 */
#define DWT_SLEEPCNT_17   (0x11UL)  /*!< Value 0x00000011 */
#define DWT_SLEEPCNT_18   (0x12UL)  /*!< Value 0x00000012 */
#define DWT_SLEEPCNT_19   (0x13UL)  /*!< Value 0x00000013 */
#define DWT_SLEEPCNT_20   (0x14UL)  /*!< Value 0x00000014 */
#define DWT_SLEEPCNT_21   (0x15UL)  /*!< Value 0x00000015 */
#define DWT_SLEEPCNT_22   (0x16UL)  /*!< Value 0x00000016 */
#define DWT_SLEEPCNT_23   (0x17UL)  /*!< Value 0x00000017 */
#define DWT_SLEEPCNT_24   (0x18UL)  /*!< Value 0x00000018 */
#define DWT_SLEEPCNT_25   (0x19UL)  /*!< Value 0x00000019 */
#define DWT_SLEEPCNT_26   (0x1AUL)  /*!< Value 0x0000001A */
#define DWT_SLEEPCNT_27   (0x1BUL)  /*!< Value 0x0000001B */
#define DWT_SLEEPCNT_28   (0x1CUL)  /*!< Value 0x0000001C */
#define DWT_SLEEPCNT_29   (0x1DUL)  /*!< Value 0x0000001D */
#define DWT_SLEEPCNT_30   (0x1EUL)  /*!< Value 0x0000001E */
#define DWT_SLEEPCNT_31   (0x1FUL)  /*!< Value 0x0000001F */
#define DWT_SLEEPCNT_32   (0x20UL)  /*!< Value 0x00000020 */
#define DWT_SLEEPCNT_33   (0x21UL)  /*!< Value 0x00000021 */
#define DWT_SLEEPCNT_34   (0x22UL)  /*!< Value 0x00000022 */
#define DWT_SLEEPCNT_35   (0x23UL)  /*!< Value 0x00000023 */
#define DWT_SLEEPCNT_36   (0x24UL)  /*!< Value 0x00000024 */
#define DWT_SLEEPCNT_37   (0x25UL)  /*!< Value 0x00000025 */
#define DWT_SLEEPCNT_38   (0x26UL)  /*!< Value 0x00000026 */
#define DWT_SLEEPCNT_39   (0x27UL)  /*!< Value 0x00000027 */
#define DWT_SLEEPCNT_40   (0x28UL)  /*!< Value 0x00000028 */
#define DWT_SLEEPCNT_41   (0x29UL)  /*!< Value 0x00000029 */
#define DWT_SLEEPCNT_42   (0x2AUL)  /*!< Value 0x0000002A */
#define DWT_SLEEPCNT_43   (0x2BUL)  /*!< Value 0x0000002B */
#define DWT_SLEEPCNT_44   (0x2CUL)  /*!< Value 0x0000002C */
#define DWT_SLEEPCNT_45   (0x2DUL)  /*!< Value 0x0000002D */
#define DWT_SLEEPCNT_46   (0x2EUL)  /*!< Value 0x0000002E */
#define DWT_SLEEPCNT_47   (0x2FUL)  /*!< Value 0x0000002F */
#define DWT_SLEEPCNT_48   (0x30UL)  /*!< Value 0x00000030 */
#define DWT_SLEEPCNT_49   (0x31UL)  /*!< Value 0x00000031 */
#define DWT_SLEEPCNT_50   (0x32UL)  /*!< Value 0x00000032 */
#define DWT_SLEEPCNT_51   (0x33UL)  /*!< Value 0x00000033 */
#define DWT_SLEEPCNT_52   (0x34UL)  /*!< Value 0x00000034 */
#define DWT_SLEEPCNT_53   (0x35UL)  /*!< Value 0x00000035 */
#define DWT_SLEEPCNT_54   (0x36UL)  /*!< Value 0x00000036 */
#define DWT_SLEEPCNT_55   (0x37UL)  /*!< Value 0x00000037 */
#define DWT_SLEEPCNT_56   (0x38UL)  /*!< Value 0x00000038 */
#define DWT_SLEEPCNT_57   (0x39UL)  /*!< Value 0x00000039 */
#define DWT_SLEEPCNT_58   (0x3AUL)  /*!< Value 0x0000003A */
#define DWT_SLEEPCNT_59   (0x3BUL)  /*!< Value 0x0000003B */
#define DWT_SLEEPCNT_60   (0x3CUL)  /*!< Value 0x0000003C */
#define DWT_SLEEPCNT_61   (0x3DUL)  /*!< Value 0x0000003D */
#define DWT_SLEEPCNT_62   (0x3EUL)  /*!< Value 0x0000003E */
#define DWT_SLEEPCNT_63   (0x3FUL)  /*!< Value 0x0000003F */
#define DWT_SLEEPCNT_64   (0x40UL)  /*!< Value 0x00000040 */
#define DWT_SLEEPCNT_65   (0x41UL)  /*!< Value 0x00000041 */
#define DWT_SLEEPCNT_66   (0x42UL)  /*!< Value 0x00000042 */
#define DWT_SLEEPCNT_67   (0x43UL)  /*!< Value 0x00000043 */
#define DWT_SLEEPCNT_68   (0x44UL)  /*!< Value 0x00000044 */
#define DWT_SLEEPCNT_69   (0x45UL)  /*!< Value 0x00000045 */
#define DWT_SLEEPCNT_70   (0x46UL)  /*!< Value 0x00000046 */
#define DWT_SLEEPCNT_71   (0x47UL)  /*!< Value 0x00000047 */
#define DWT_SLEEPCNT_72   (0x48UL)  /*!< Value 0x00000048 */
#define DWT_SLEEPCNT_73   (0x49UL)  /*!< Value 0x00000049 */
#define DWT_SLEEPCNT_74   (0x4AUL)  /*!< Value 0x0000004A */
#define DWT_SLEEPCNT_75   (0x4BUL)  /*!< Value 0x0000004B */
#define DWT_SLEEPCNT_76   (0x4CUL)  /*!< Value 0x0000004C */
#define DWT_SLEEPCNT_77   (0x4DUL)  /*!< Value 0x0000004D */
#define DWT_SLEEPCNT_78   (0x4EUL)  /*!< Value 0x0000004E */
#define DWT_SLEEPCNT_79   (0x4FUL)  /*!< Value 0x0000004F */
#define DWT_SLEEPCNT_80   (0x50UL)  /*!< Value 0x00000050 */
#define DWT_SLEEPCNT_81   (0x51UL)  /*!< Value 0x00000051 */
#define DWT_SLEEPCNT_82   (0x52UL)  /*!< Value 0x00000052 */
#define DWT_SLEEPCNT_83   (0x53UL)  /*!< Value 0x00000053 */
#define DWT_SLEEPCNT_84   (0x54UL)  /*!< Value 0x00000054 */
#define DWT_SLEEPCNT_85   (0x55UL)  /*!< Value 0x00000055 */
#define DWT_SLEEPCNT_86   (0x56UL)  /*!< Value 0x00000056 */
#define DWT_SLEEPCNT_87   (0x57UL)  /*!< Value 0x00000057 */
#define DWT_SLEEPCNT_88   (0x58UL)  /*!< Value 0x00000058 */
#define DWT_SLEEPCNT_89   (0x59UL)  /*!< Value 0x00000059 */
#define DWT_SLEEPCNT_90   (0x5AUL)  /*!< Value 0x0000005A */
#define DWT_SLEEPCNT_91   (0x5BUL)  /*!< Value 0x0000005B */
#define DWT_SLEEPCNT_92   (0x5CUL)  /*!< Value 0x0000005C */
#define DWT_SLEEPCNT_93   (0x5DUL)  /*!< Value 0x0000005D */
#define DWT_SLEEPCNT_94   (0x5EUL)  /*!< Value 0x0000005E */
#define DWT_SLEEPCNT_95   (0x5FUL)  /*!< Value 0x0000005F */
#define DWT_SLEEPCNT_96   (0x60UL)  /*!< Value 0x00000060 */
#define DWT_SLEEPCNT_97   (0x61UL)  /*!< Value 0x00000061 */
#define DWT_SLEEPCNT_98   (0x62UL)  /*!< Value 0x00000062 */
#define DWT_SLEEPCNT_99   (0x63UL)  /*!< Value 0x00000063 */
#define DWT_SLEEPCNT_100  (0x64UL)  /*!< Value 0x00000064 */
#define DWT_SLEEPCNT_101  (0x65UL)  /*!< Value 0x00000065 */
#define DWT_SLEEPCNT_102  (0x66UL)  /*!< Value 0x00000066 */
#define DWT_SLEEPCNT_103  (0x67UL)  /*!< Value 0x00000067 */
#define DWT_SLEEPCNT_104  (0x68UL)  /*!< Value 0x00000068 */
#define DWT_SLEEPCNT_105  (0x69UL)  /*!< Value 0x00000069 */
#define DWT_SLEEPCNT_106  (0x6AUL)  /*!< Value 0x0000006A */
#define DWT_SLEEPCNT_107  (0x6BUL)  /*!< Value 0x0000006B */
#define DWT_SLEEPCNT_108  (0x6CUL)  /*!< Value 0x0000006C */
#define DWT_SLEEPCNT_109  (0x6DUL)  /*!< Value 0x0000006D */
#define DWT_SLEEPCNT_110  (0x6EUL)  /*!< Value 0x0000006E */
#define DWT_SLEEPCNT_111  (0x6FUL)  /*!< Value 0x0000006F */
#define DWT_SLEEPCNT_112  (0x70UL)  /*!< Value 0x00000070 */
#define DWT_SLEEPCNT_113  (0x71UL)  /*!< Value 0x00000071 */
#define DWT_SLEEPCNT_114  (0x72UL)  /*!< Value 0x00000072 */
#define DWT_SLEEPCNT_115  (0x73UL)  /*!< Value 0x00000073 */
#define DWT_SLEEPCNT_116  (0x74UL)  /*!< Value 0x00000074 */
#define DWT_SLEEPCNT_117  (0x75UL)  /*!< Value 0x00000075 */
#define DWT_SLEEPCNT_118  (0x76UL)  /*!< Value 0x00000076 */
#define DWT_SLEEPCNT_119  (0x77UL)  /*!< Value 0x00000077 */
#define DWT_SLEEPCNT_120  (0x78UL)  /*!< Value 0x00000078 */
#define DWT_SLEEPCNT_121  (0x79UL)  /*!< Value 0x00000079 */
#define DWT_SLEEPCNT_122  (0x7AUL)  /*!< Value 0x0000007A */
#define DWT_SLEEPCNT_123  (0x7BUL)  /*!< Value 0x0000007B */
#define DWT_SLEEPCNT_124  (0x7CUL)  /*!< Value 0x0000007C */
#define DWT_SLEEPCNT_125  (0x7DUL)  /*!< Value 0x0000007D */
#define DWT_SLEEPCNT_126  (0x7EUL)  /*!< Value 0x0000007E */
#define DWT_SLEEPCNT_127  (0x7FUL)  /*!< Value 0x0000007F */
#define DWT_SLEEPCNT_128  (0x80UL)  /*!< Value 0x00000080 */
#define DWT_SLEEPCNT_129  (0x81UL)  /*!< Value 0x00000081 */
#define DWT_SLEEPCNT_130  (0x82UL)  /*!< Value 0x00000082 */
#define DWT_SLEEPCNT_131  (0x83UL)  /*!< Value 0x00000083 */
#define DWT_SLEEPCNT_132  (0x84UL)  /*!< Value 0x00000084 */
#define DWT_SLEEPCNT_133  (0x85UL)  /*!< Value 0x00000085 */
#define DWT_SLEEPCNT_134  (0x86UL)  /*!< Value 0x00000086 */
#define DWT_SLEEPCNT_135  (0x87UL)  /*!< Value 0x00000087 */
#define DWT_SLEEPCNT_136  (0x88UL)  /*!< Value 0x00000088 */
#define DWT_SLEEPCNT_137  (0x89UL)  /*!< Value 0x00000089 */
#define DWT_SLEEPCNT_138  (0x8AUL)  /*!< Value 0x0000008A */
#define DWT_SLEEPCNT_139  (0x8BUL)  /*!< Value 0x0000008B */
#define DWT_SLEEPCNT_140  (0x8CUL)  /*!< Value 0x0000008C */
#define DWT_SLEEPCNT_141  (0x8DUL)  /*!< Value 0x0000008D */
#define DWT_SLEEPCNT_142  (0x8EUL)  /*!< Value 0x0000008E */
#define DWT_SLEEPCNT_143  (0x8FUL)  /*!< Value 0x0000008F */
#define DWT_SLEEPCNT_144  (0x90UL)  /*!< Value 0x00000090 */
#define DWT_SLEEPCNT_145  (0x91UL)  /*!< Value 0x00000091 */
#define DWT_SLEEPCNT_146  (0x92UL)  /*!< Value 0x00000092 */
#define DWT_SLEEPCNT_147  (0x93UL)  /*!< Value 0x00000093 */
#define DWT_SLEEPCNT_148  (0x94UL)  /*!< Value 0x00000094 */
#define DWT_SLEEPCNT_149  (0x95UL)  /*!< Value 0x00000095 */
#define DWT_SLEEPCNT_150  (0x96UL)  /*!< Value 0x00000096 */
#define DWT_SLEEPCNT_151  (0x97UL)  /*!< Value 0x00000097 */
#define DWT_SLEEPCNT_152  (0x98UL)  /*!< Value 0x00000098 */
#define DWT_SLEEPCNT_153  (0x99UL)  /*!< Value 0x00000099 */
#define DWT_SLEEPCNT_154  (0x9AUL)  /*!< Value 0x0000009A */
#define DWT_SLEEPCNT_155  (0x9BUL)  /*!< Value 0x0000009B */
#define DWT_SLEEPCNT_156  (0x9CUL)  /*!< Value 0x0000009C */
#define DWT_SLEEPCNT_157  (0x9DUL)  /*!< Value 0x0000009D */
#define DWT_SLEEPCNT_158  (0x9EUL)  /*!< Value 0x0000009E */
#define DWT_SLEEPCNT_159  (0x9FUL)  /*!< Value 0x0000009F */
#define DWT_SLEEPCNT_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define DWT_SLEEPCNT_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define DWT_SLEEPCNT_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define DWT_SLEEPCNT_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define DWT_SLEEPCNT_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define DWT_SLEEPCNT_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define DWT_SLEEPCNT_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define DWT_SLEEPCNT_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define DWT_SLEEPCNT_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define DWT_SLEEPCNT_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define DWT_SLEEPCNT_170  (0xAAUL)  /*!< Value 0x000000AA */
#define DWT_SLEEPCNT_171  (0xABUL)  /*!< Value 0x000000AB */
#define DWT_SLEEPCNT_172  (0xACUL)  /*!< Value 0x000000AC */
#define DWT_SLEEPCNT_173  (0xADUL)  /*!< Value 0x000000AD */
#define DWT_SLEEPCNT_174  (0xAEUL)  /*!< Value 0x000000AE */
#define DWT_SLEEPCNT_175  (0xAFUL)  /*!< Value 0x000000AF */
#define DWT_SLEEPCNT_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define DWT_SLEEPCNT_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define DWT_SLEEPCNT_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define DWT_SLEEPCNT_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define DWT_SLEEPCNT_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define DWT_SLEEPCNT_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define DWT_SLEEPCNT_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define DWT_SLEEPCNT_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define DWT_SLEEPCNT_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define DWT_SLEEPCNT_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define DWT_SLEEPCNT_186  (0xBAUL)  /*!< Value 0x000000BA */
#define DWT_SLEEPCNT_187  (0xBBUL)  /*!< Value 0x000000BB */
#define DWT_SLEEPCNT_188  (0xBCUL)  /*!< Value 0x000000BC */
#define DWT_SLEEPCNT_189  (0xBDUL)  /*!< Value 0x000000BD */
#define DWT_SLEEPCNT_190  (0xBEUL)  /*!< Value 0x000000BE */
#define DWT_SLEEPCNT_191  (0xBFUL)  /*!< Value 0x000000BF */
#define DWT_SLEEPCNT_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define DWT_SLEEPCNT_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define DWT_SLEEPCNT_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define DWT_SLEEPCNT_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define DWT_SLEEPCNT_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define DWT_SLEEPCNT_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define DWT_SLEEPCNT_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define DWT_SLEEPCNT_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define DWT_SLEEPCNT_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define DWT_SLEEPCNT_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define DWT_SLEEPCNT_202  (0xCAUL)  /*!< Value 0x000000CA */
#define DWT_SLEEPCNT_203  (0xCBUL)  /*!< Value 0x000000CB */
#define DWT_SLEEPCNT_204  (0xCCUL)  /*!< Value 0x000000CC */
#define DWT_SLEEPCNT_205  (0xCDUL)  /*!< Value 0x000000CD */
#define DWT_SLEEPCNT_206  (0xCEUL)  /*!< Value 0x000000CE */
#define DWT_SLEEPCNT_207  (0xCFUL)  /*!< Value 0x000000CF */
#define DWT_SLEEPCNT_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define DWT_SLEEPCNT_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define DWT_SLEEPCNT_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define DWT_SLEEPCNT_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define DWT_SLEEPCNT_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define DWT_SLEEPCNT_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define DWT_SLEEPCNT_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define DWT_SLEEPCNT_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define DWT_SLEEPCNT_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define DWT_SLEEPCNT_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define DWT_SLEEPCNT_218  (0xDAUL)  /*!< Value 0x000000DA */
#define DWT_SLEEPCNT_219  (0xDBUL)  /*!< Value 0x000000DB */
#define DWT_SLEEPCNT_220  (0xDCUL)  /*!< Value 0x000000DC */
#define DWT_SLEEPCNT_221  (0xDDUL)  /*!< Value 0x000000DD */
#define DWT_SLEEPCNT_222  (0xDEUL)  /*!< Value 0x000000DE */
#define DWT_SLEEPCNT_223  (0xDFUL)  /*!< Value 0x000000DF */
#define DWT_SLEEPCNT_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define DWT_SLEEPCNT_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define DWT_SLEEPCNT_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define DWT_SLEEPCNT_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define DWT_SLEEPCNT_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define DWT_SLEEPCNT_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define DWT_SLEEPCNT_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define DWT_SLEEPCNT_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define DWT_SLEEPCNT_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define DWT_SLEEPCNT_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define DWT_SLEEPCNT_234  (0xEAUL)  /*!< Value 0x000000EA */
#define DWT_SLEEPCNT_235  (0xEBUL)  /*!< Value 0x000000EB */
#define DWT_SLEEPCNT_236  (0xECUL)  /*!< Value 0x000000EC */
#define DWT_SLEEPCNT_237  (0xEDUL)  /*!< Value 0x000000ED */
#define DWT_SLEEPCNT_238  (0xEEUL)  /*!< Value 0x000000EE */
#define DWT_SLEEPCNT_239  (0xEFUL)  /*!< Value 0x000000EF */
#define DWT_SLEEPCNT_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define DWT_SLEEPCNT_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define DWT_SLEEPCNT_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define DWT_SLEEPCNT_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define DWT_SLEEPCNT_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define DWT_SLEEPCNT_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define DWT_SLEEPCNT_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define DWT_SLEEPCNT_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define DWT_SLEEPCNT_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define DWT_SLEEPCNT_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define DWT_SLEEPCNT_250  (0xFAUL)  /*!< Value 0x000000FA */
#define DWT_SLEEPCNT_251  (0xFBUL)  /*!< Value 0x000000FB */
#define DWT_SLEEPCNT_252  (0xFCUL)  /*!< Value 0x000000FC */
#define DWT_SLEEPCNT_253  (0xFDUL)  /*!< Value 0x000000FD */
#define DWT_SLEEPCNT_254  (0xFEUL)  /*!< Value 0x000000FE */
#define DWT_SLEEPCNT_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< Load store unit (LSU) overhead count register */
#define DWT_LSUCNT_LSUCNT_OFFSET  (0U)
#define DWT_LSUCNT_LSUCNT_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Mask  0x000000FF */
#define DWT_LSUCNT_LSUCNT_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000001 */
#define DWT_LSUCNT_LSUCNT_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000002 */
#define DWT_LSUCNT_LSUCNT_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000004 */
#define DWT_LSUCNT_LSUCNT_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000008 */
#define DWT_LSUCNT_LSUCNT_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000010 */
#define DWT_LSUCNT_LSUCNT_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000020 */
#define DWT_LSUCNT_LSUCNT_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000040 */
#define DWT_LSUCNT_LSUCNT_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, LSUCNT, LSUCNT))  /*!< Value 0x00000080 */

/*!< Values of load store unit (LSU) overhead counter register */
#define DWT_LSUCNT_0    (0x00UL)  /*!< Value 0x00000000 */
#define DWT_LSUCNT_1    (0x01UL)  /*!< Value 0x00000001 */
#define DWT_LSUCNT_2    (0x02UL)  /*!< Value 0x00000002 */
#define DWT_LSUCNT_3    (0x03UL)  /*!< Value 0x00000003 */
#define DWT_LSUCNT_4    (0x04UL)  /*!< Value 0x00000004 */
#define DWT_LSUCNT_5    (0x05UL)  /*!< Value 0x00000005 */
#define DWT_LSUCNT_6    (0x06UL)  /*!< Value 0x00000006 */
#define DWT_LSUCNT_7    (0x07UL)  /*!< Value 0x00000007 */
#define DWT_LSUCNT_8    (0x08UL)  /*!< Value 0x00000008 */
#define DWT_LSUCNT_9    (0x09UL)  /*!< Value 0x00000009 */
#define DWT_LSUCNT_10   (0x0AUL)  /*!< Value 0x0000000A */
#define DWT_LSUCNT_11   (0x0BUL)  /*!< Value 0x0000000B */
#define DWT_LSUCNT_12   (0x0CUL)  /*!< Value 0x0000000C */
#define DWT_LSUCNT_13   (0x0DUL)  /*!< Value 0x0000000D */
#define DWT_LSUCNT_14   (0x0EUL)  /*!< Value 0x0000000E */
#define DWT_LSUCNT_15   (0x0FUL)  /*!< Value 0x0000000F */
#define DWT_LSUCNT_16   (0x10UL)  /*!< Value 0x00000010 */
#define DWT_LSUCNT_17   (0x11UL)  /*!< Value 0x00000011 */
#define DWT_LSUCNT_18   (0x12UL)  /*!< Value 0x00000012 */
#define DWT_LSUCNT_19   (0x13UL)  /*!< Value 0x00000013 */
#define DWT_LSUCNT_20   (0x14UL)  /*!< Value 0x00000014 */
#define DWT_LSUCNT_21   (0x15UL)  /*!< Value 0x00000015 */
#define DWT_LSUCNT_22   (0x16UL)  /*!< Value 0x00000016 */
#define DWT_LSUCNT_23   (0x17UL)  /*!< Value 0x00000017 */
#define DWT_LSUCNT_24   (0x18UL)  /*!< Value 0x00000018 */
#define DWT_LSUCNT_25   (0x19UL)  /*!< Value 0x00000019 */
#define DWT_LSUCNT_26   (0x1AUL)  /*!< Value 0x0000001A */
#define DWT_LSUCNT_27   (0x1BUL)  /*!< Value 0x0000001B */
#define DWT_LSUCNT_28   (0x1CUL)  /*!< Value 0x0000001C */
#define DWT_LSUCNT_29   (0x1DUL)  /*!< Value 0x0000001D */
#define DWT_LSUCNT_30   (0x1EUL)  /*!< Value 0x0000001E */
#define DWT_LSUCNT_31   (0x1FUL)  /*!< Value 0x0000001F */
#define DWT_LSUCNT_32   (0x20UL)  /*!< Value 0x00000020 */
#define DWT_LSUCNT_33   (0x21UL)  /*!< Value 0x00000021 */
#define DWT_LSUCNT_34   (0x22UL)  /*!< Value 0x00000022 */
#define DWT_LSUCNT_35   (0x23UL)  /*!< Value 0x00000023 */
#define DWT_LSUCNT_36   (0x24UL)  /*!< Value 0x00000024 */
#define DWT_LSUCNT_37   (0x25UL)  /*!< Value 0x00000025 */
#define DWT_LSUCNT_38   (0x26UL)  /*!< Value 0x00000026 */
#define DWT_LSUCNT_39   (0x27UL)  /*!< Value 0x00000027 */
#define DWT_LSUCNT_40   (0x28UL)  /*!< Value 0x00000028 */
#define DWT_LSUCNT_41   (0x29UL)  /*!< Value 0x00000029 */
#define DWT_LSUCNT_42   (0x2AUL)  /*!< Value 0x0000002A */
#define DWT_LSUCNT_43   (0x2BUL)  /*!< Value 0x0000002B */
#define DWT_LSUCNT_44   (0x2CUL)  /*!< Value 0x0000002C */
#define DWT_LSUCNT_45   (0x2DUL)  /*!< Value 0x0000002D */
#define DWT_LSUCNT_46   (0x2EUL)  /*!< Value 0x0000002E */
#define DWT_LSUCNT_47   (0x2FUL)  /*!< Value 0x0000002F */
#define DWT_LSUCNT_48   (0x30UL)  /*!< Value 0x00000030 */
#define DWT_LSUCNT_49   (0x31UL)  /*!< Value 0x00000031 */
#define DWT_LSUCNT_50   (0x32UL)  /*!< Value 0x00000032 */
#define DWT_LSUCNT_51   (0x33UL)  /*!< Value 0x00000033 */
#define DWT_LSUCNT_52   (0x34UL)  /*!< Value 0x00000034 */
#define DWT_LSUCNT_53   (0x35UL)  /*!< Value 0x00000035 */
#define DWT_LSUCNT_54   (0x36UL)  /*!< Value 0x00000036 */
#define DWT_LSUCNT_55   (0x37UL)  /*!< Value 0x00000037 */
#define DWT_LSUCNT_56   (0x38UL)  /*!< Value 0x00000038 */
#define DWT_LSUCNT_57   (0x39UL)  /*!< Value 0x00000039 */
#define DWT_LSUCNT_58   (0x3AUL)  /*!< Value 0x0000003A */
#define DWT_LSUCNT_59   (0x3BUL)  /*!< Value 0x0000003B */
#define DWT_LSUCNT_60   (0x3CUL)  /*!< Value 0x0000003C */
#define DWT_LSUCNT_61   (0x3DUL)  /*!< Value 0x0000003D */
#define DWT_LSUCNT_62   (0x3EUL)  /*!< Value 0x0000003E */
#define DWT_LSUCNT_63   (0x3FUL)  /*!< Value 0x0000003F */
#define DWT_LSUCNT_64   (0x40UL)  /*!< Value 0x00000040 */
#define DWT_LSUCNT_65   (0x41UL)  /*!< Value 0x00000041 */
#define DWT_LSUCNT_66   (0x42UL)  /*!< Value 0x00000042 */
#define DWT_LSUCNT_67   (0x43UL)  /*!< Value 0x00000043 */
#define DWT_LSUCNT_68   (0x44UL)  /*!< Value 0x00000044 */
#define DWT_LSUCNT_69   (0x45UL)  /*!< Value 0x00000045 */
#define DWT_LSUCNT_70   (0x46UL)  /*!< Value 0x00000046 */
#define DWT_LSUCNT_71   (0x47UL)  /*!< Value 0x00000047 */
#define DWT_LSUCNT_72   (0x48UL)  /*!< Value 0x00000048 */
#define DWT_LSUCNT_73   (0x49UL)  /*!< Value 0x00000049 */
#define DWT_LSUCNT_74   (0x4AUL)  /*!< Value 0x0000004A */
#define DWT_LSUCNT_75   (0x4BUL)  /*!< Value 0x0000004B */
#define DWT_LSUCNT_76   (0x4CUL)  /*!< Value 0x0000004C */
#define DWT_LSUCNT_77   (0x4DUL)  /*!< Value 0x0000004D */
#define DWT_LSUCNT_78   (0x4EUL)  /*!< Value 0x0000004E */
#define DWT_LSUCNT_79   (0x4FUL)  /*!< Value 0x0000004F */
#define DWT_LSUCNT_80   (0x50UL)  /*!< Value 0x00000050 */
#define DWT_LSUCNT_81   (0x51UL)  /*!< Value 0x00000051 */
#define DWT_LSUCNT_82   (0x52UL)  /*!< Value 0x00000052 */
#define DWT_LSUCNT_83   (0x53UL)  /*!< Value 0x00000053 */
#define DWT_LSUCNT_84   (0x54UL)  /*!< Value 0x00000054 */
#define DWT_LSUCNT_85   (0x55UL)  /*!< Value 0x00000055 */
#define DWT_LSUCNT_86   (0x56UL)  /*!< Value 0x00000056 */
#define DWT_LSUCNT_87   (0x57UL)  /*!< Value 0x00000057 */
#define DWT_LSUCNT_88   (0x58UL)  /*!< Value 0x00000058 */
#define DWT_LSUCNT_89   (0x59UL)  /*!< Value 0x00000059 */
#define DWT_LSUCNT_90   (0x5AUL)  /*!< Value 0x0000005A */
#define DWT_LSUCNT_91   (0x5BUL)  /*!< Value 0x0000005B */
#define DWT_LSUCNT_92   (0x5CUL)  /*!< Value 0x0000005C */
#define DWT_LSUCNT_93   (0x5DUL)  /*!< Value 0x0000005D */
#define DWT_LSUCNT_94   (0x5EUL)  /*!< Value 0x0000005E */
#define DWT_LSUCNT_95   (0x5FUL)  /*!< Value 0x0000005F */
#define DWT_LSUCNT_96   (0x60UL)  /*!< Value 0x00000060 */
#define DWT_LSUCNT_97   (0x61UL)  /*!< Value 0x00000061 */
#define DWT_LSUCNT_98   (0x62UL)  /*!< Value 0x00000062 */
#define DWT_LSUCNT_99   (0x63UL)  /*!< Value 0x00000063 */
#define DWT_LSUCNT_100  (0x64UL)  /*!< Value 0x00000064 */
#define DWT_LSUCNT_101  (0x65UL)  /*!< Value 0x00000065 */
#define DWT_LSUCNT_102  (0x66UL)  /*!< Value 0x00000066 */
#define DWT_LSUCNT_103  (0x67UL)  /*!< Value 0x00000067 */
#define DWT_LSUCNT_104  (0x68UL)  /*!< Value 0x00000068 */
#define DWT_LSUCNT_105  (0x69UL)  /*!< Value 0x00000069 */
#define DWT_LSUCNT_106  (0x6AUL)  /*!< Value 0x0000006A */
#define DWT_LSUCNT_107  (0x6BUL)  /*!< Value 0x0000006B */
#define DWT_LSUCNT_108  (0x6CUL)  /*!< Value 0x0000006C */
#define DWT_LSUCNT_109  (0x6DUL)  /*!< Value 0x0000006D */
#define DWT_LSUCNT_110  (0x6EUL)  /*!< Value 0x0000006E */
#define DWT_LSUCNT_111  (0x6FUL)  /*!< Value 0x0000006F */
#define DWT_LSUCNT_112  (0x70UL)  /*!< Value 0x00000070 */
#define DWT_LSUCNT_113  (0x71UL)  /*!< Value 0x00000071 */
#define DWT_LSUCNT_114  (0x72UL)  /*!< Value 0x00000072 */
#define DWT_LSUCNT_115  (0x73UL)  /*!< Value 0x00000073 */
#define DWT_LSUCNT_116  (0x74UL)  /*!< Value 0x00000074 */
#define DWT_LSUCNT_117  (0x75UL)  /*!< Value 0x00000075 */
#define DWT_LSUCNT_118  (0x76UL)  /*!< Value 0x00000076 */
#define DWT_LSUCNT_119  (0x77UL)  /*!< Value 0x00000077 */
#define DWT_LSUCNT_120  (0x78UL)  /*!< Value 0x00000078 */
#define DWT_LSUCNT_121  (0x79UL)  /*!< Value 0x00000079 */
#define DWT_LSUCNT_122  (0x7AUL)  /*!< Value 0x0000007A */
#define DWT_LSUCNT_123  (0x7BUL)  /*!< Value 0x0000007B */
#define DWT_LSUCNT_124  (0x7CUL)  /*!< Value 0x0000007C */
#define DWT_LSUCNT_125  (0x7DUL)  /*!< Value 0x0000007D */
#define DWT_LSUCNT_126  (0x7EUL)  /*!< Value 0x0000007E */
#define DWT_LSUCNT_127  (0x7FUL)  /*!< Value 0x0000007F */
#define DWT_LSUCNT_128  (0x80UL)  /*!< Value 0x00000080 */
#define DWT_LSUCNT_129  (0x81UL)  /*!< Value 0x00000081 */
#define DWT_LSUCNT_130  (0x82UL)  /*!< Value 0x00000082 */
#define DWT_LSUCNT_131  (0x83UL)  /*!< Value 0x00000083 */
#define DWT_LSUCNT_132  (0x84UL)  /*!< Value 0x00000084 */
#define DWT_LSUCNT_133  (0x85UL)  /*!< Value 0x00000085 */
#define DWT_LSUCNT_134  (0x86UL)  /*!< Value 0x00000086 */
#define DWT_LSUCNT_135  (0x87UL)  /*!< Value 0x00000087 */
#define DWT_LSUCNT_136  (0x88UL)  /*!< Value 0x00000088 */
#define DWT_LSUCNT_137  (0x89UL)  /*!< Value 0x00000089 */
#define DWT_LSUCNT_138  (0x8AUL)  /*!< Value 0x0000008A */
#define DWT_LSUCNT_139  (0x8BUL)  /*!< Value 0x0000008B */
#define DWT_LSUCNT_140  (0x8CUL)  /*!< Value 0x0000008C */
#define DWT_LSUCNT_141  (0x8DUL)  /*!< Value 0x0000008D */
#define DWT_LSUCNT_142  (0x8EUL)  /*!< Value 0x0000008E */
#define DWT_LSUCNT_143  (0x8FUL)  /*!< Value 0x0000008F */
#define DWT_LSUCNT_144  (0x90UL)  /*!< Value 0x00000090 */
#define DWT_LSUCNT_145  (0x91UL)  /*!< Value 0x00000091 */
#define DWT_LSUCNT_146  (0x92UL)  /*!< Value 0x00000092 */
#define DWT_LSUCNT_147  (0x93UL)  /*!< Value 0x00000093 */
#define DWT_LSUCNT_148  (0x94UL)  /*!< Value 0x00000094 */
#define DWT_LSUCNT_149  (0x95UL)  /*!< Value 0x00000095 */
#define DWT_LSUCNT_150  (0x96UL)  /*!< Value 0x00000096 */
#define DWT_LSUCNT_151  (0x97UL)  /*!< Value 0x00000097 */
#define DWT_LSUCNT_152  (0x98UL)  /*!< Value 0x00000098 */
#define DWT_LSUCNT_153  (0x99UL)  /*!< Value 0x00000099 */
#define DWT_LSUCNT_154  (0x9AUL)  /*!< Value 0x0000009A */
#define DWT_LSUCNT_155  (0x9BUL)  /*!< Value 0x0000009B */
#define DWT_LSUCNT_156  (0x9CUL)  /*!< Value 0x0000009C */
#define DWT_LSUCNT_157  (0x9DUL)  /*!< Value 0x0000009D */
#define DWT_LSUCNT_158  (0x9EUL)  /*!< Value 0x0000009E */
#define DWT_LSUCNT_159  (0x9FUL)  /*!< Value 0x0000009F */
#define DWT_LSUCNT_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define DWT_LSUCNT_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define DWT_LSUCNT_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define DWT_LSUCNT_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define DWT_LSUCNT_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define DWT_LSUCNT_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define DWT_LSUCNT_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define DWT_LSUCNT_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define DWT_LSUCNT_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define DWT_LSUCNT_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define DWT_LSUCNT_170  (0xAAUL)  /*!< Value 0x000000AA */
#define DWT_LSUCNT_171  (0xABUL)  /*!< Value 0x000000AB */
#define DWT_LSUCNT_172  (0xACUL)  /*!< Value 0x000000AC */
#define DWT_LSUCNT_173  (0xADUL)  /*!< Value 0x000000AD */
#define DWT_LSUCNT_174  (0xAEUL)  /*!< Value 0x000000AE */
#define DWT_LSUCNT_175  (0xAFUL)  /*!< Value 0x000000AF */
#define DWT_LSUCNT_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define DWT_LSUCNT_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define DWT_LSUCNT_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define DWT_LSUCNT_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define DWT_LSUCNT_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define DWT_LSUCNT_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define DWT_LSUCNT_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define DWT_LSUCNT_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define DWT_LSUCNT_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define DWT_LSUCNT_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define DWT_LSUCNT_186  (0xBAUL)  /*!< Value 0x000000BA */
#define DWT_LSUCNT_187  (0xBBUL)  /*!< Value 0x000000BB */
#define DWT_LSUCNT_188  (0xBCUL)  /*!< Value 0x000000BC */
#define DWT_LSUCNT_189  (0xBDUL)  /*!< Value 0x000000BD */
#define DWT_LSUCNT_190  (0xBEUL)  /*!< Value 0x000000BE */
#define DWT_LSUCNT_191  (0xBFUL)  /*!< Value 0x000000BF */
#define DWT_LSUCNT_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define DWT_LSUCNT_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define DWT_LSUCNT_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define DWT_LSUCNT_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define DWT_LSUCNT_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define DWT_LSUCNT_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define DWT_LSUCNT_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define DWT_LSUCNT_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define DWT_LSUCNT_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define DWT_LSUCNT_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define DWT_LSUCNT_202  (0xCAUL)  /*!< Value 0x000000CA */
#define DWT_LSUCNT_203  (0xCBUL)  /*!< Value 0x000000CB */
#define DWT_LSUCNT_204  (0xCCUL)  /*!< Value 0x000000CC */
#define DWT_LSUCNT_205  (0xCDUL)  /*!< Value 0x000000CD */
#define DWT_LSUCNT_206  (0xCEUL)  /*!< Value 0x000000CE */
#define DWT_LSUCNT_207  (0xCFUL)  /*!< Value 0x000000CF */
#define DWT_LSUCNT_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define DWT_LSUCNT_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define DWT_LSUCNT_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define DWT_LSUCNT_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define DWT_LSUCNT_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define DWT_LSUCNT_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define DWT_LSUCNT_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define DWT_LSUCNT_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define DWT_LSUCNT_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define DWT_LSUCNT_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define DWT_LSUCNT_218  (0xDAUL)  /*!< Value 0x000000DA */
#define DWT_LSUCNT_219  (0xDBUL)  /*!< Value 0x000000DB */
#define DWT_LSUCNT_220  (0xDCUL)  /*!< Value 0x000000DC */
#define DWT_LSUCNT_221  (0xDDUL)  /*!< Value 0x000000DD */
#define DWT_LSUCNT_222  (0xDEUL)  /*!< Value 0x000000DE */
#define DWT_LSUCNT_223  (0xDFUL)  /*!< Value 0x000000DF */
#define DWT_LSUCNT_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define DWT_LSUCNT_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define DWT_LSUCNT_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define DWT_LSUCNT_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define DWT_LSUCNT_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define DWT_LSUCNT_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define DWT_LSUCNT_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define DWT_LSUCNT_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define DWT_LSUCNT_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define DWT_LSUCNT_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define DWT_LSUCNT_234  (0xEAUL)  /*!< Value 0x000000EA */
#define DWT_LSUCNT_235  (0xEBUL)  /*!< Value 0x000000EB */
#define DWT_LSUCNT_236  (0xECUL)  /*!< Value 0x000000EC */
#define DWT_LSUCNT_237  (0xEDUL)  /*!< Value 0x000000ED */
#define DWT_LSUCNT_238  (0xEEUL)  /*!< Value 0x000000EE */
#define DWT_LSUCNT_239  (0xEFUL)  /*!< Value 0x000000EF */
#define DWT_LSUCNT_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define DWT_LSUCNT_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define DWT_LSUCNT_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define DWT_LSUCNT_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define DWT_LSUCNT_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define DWT_LSUCNT_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define DWT_LSUCNT_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define DWT_LSUCNT_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define DWT_LSUCNT_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define DWT_LSUCNT_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define DWT_LSUCNT_250  (0xFAUL)  /*!< Value 0x000000FA */
#define DWT_LSUCNT_251  (0xFBUL)  /*!< Value 0x000000FB */
#define DWT_LSUCNT_252  (0xFCUL)  /*!< Value 0x000000FC */
#define DWT_LSUCNT_253  (0xFDUL)  /*!< Value 0x000000FD */
#define DWT_LSUCNT_254  (0xFEUL)  /*!< Value 0x000000FE */
#define DWT_LSUCNT_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< Folded instruction overhead count register */
#define DWT_FOLDCNT_FOLDCNT_OFFSET  (0U)
#define DWT_FOLDCNT_FOLDCNT_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Mask  0x000000FF */
#define DWT_FOLDCNT_FOLDCNT_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000001 */
#define DWT_FOLDCNT_FOLDCNT_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000002 */
#define DWT_FOLDCNT_FOLDCNT_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000004 */
#define DWT_FOLDCNT_FOLDCNT_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000008 */
#define DWT_FOLDCNT_FOLDCNT_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000010 */
#define DWT_FOLDCNT_FOLDCNT_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000020 */
#define DWT_FOLDCNT_FOLDCNT_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000040 */
#define DWT_FOLDCNT_FOLDCNT_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, FOLDCNT, FOLDCNT))  /*!< Value 0x00000080 */

// Values of folded instruction overhead counter register
#define DWT_FOLDINSTRCNT_0    (0x00UL)  /*!< Value 0x00000000 */
#define DWT_FOLDINSTRCNT_1    (0x01UL)  /*!< Value 0x00000001 */
#define DWT_FOLDINSTRCNT_2    (0x02UL)  /*!< Value 0x00000002 */
#define DWT_FOLDINSTRCNT_3    (0x03UL)  /*!< Value 0x00000003 */
#define DWT_FOLDINSTRCNT_4    (0x04UL)  /*!< Value 0x00000004 */
#define DWT_FOLDINSTRCNT_5    (0x05UL)  /*!< Value 0x00000005 */
#define DWT_FOLDINSTRCNT_6    (0x06UL)  /*!< Value 0x00000006 */
#define DWT_FOLDINSTRCNT_7    (0x07UL)  /*!< Value 0x00000007 */
#define DWT_FOLDINSTRCNT_8    (0x08UL)  /*!< Value 0x00000008 */
#define DWT_FOLDINSTRCNT_9    (0x09UL)  /*!< Value 0x00000009 */
#define DWT_FOLDINSTRCNT_10   (0x0AUL)  /*!< Value 0x0000000A */
#define DWT_FOLDINSTRCNT_11   (0x0BUL)  /*!< Value 0x0000000B */
#define DWT_FOLDINSTRCNT_12   (0x0CUL)  /*!< Value 0x0000000C */
#define DWT_FOLDINSTRCNT_13   (0x0DUL)  /*!< Value 0x0000000D */
#define DWT_FOLDINSTRCNT_14   (0x0EUL)  /*!< Value 0x0000000E */
#define DWT_FOLDINSTRCNT_15   (0x0FUL)  /*!< Value 0x0000000F */
#define DWT_FOLDINSTRCNT_16   (0x10UL)  /*!< Value 0x00000010 */
#define DWT_FOLDINSTRCNT_17   (0x11UL)  /*!< Value 0x00000011 */
#define DWT_FOLDINSTRCNT_18   (0x12UL)  /*!< Value 0x00000012 */
#define DWT_FOLDINSTRCNT_19   (0x13UL)  /*!< Value 0x00000013 */
#define DWT_FOLDINSTRCNT_20   (0x14UL)  /*!< Value 0x00000014 */
#define DWT_FOLDINSTRCNT_21   (0x15UL)  /*!< Value 0x00000015 */
#define DWT_FOLDINSTRCNT_22   (0x16UL)  /*!< Value 0x00000016 */
#define DWT_FOLDINSTRCNT_23   (0x17UL)  /*!< Value 0x00000017 */
#define DWT_FOLDINSTRCNT_24   (0x18UL)  /*!< Value 0x00000018 */
#define DWT_FOLDINSTRCNT_25   (0x19UL)  /*!< Value 0x00000019 */
#define DWT_FOLDINSTRCNT_26   (0x1AUL)  /*!< Value 0x0000001A */
#define DWT_FOLDINSTRCNT_27   (0x1BUL)  /*!< Value 0x0000001B */
#define DWT_FOLDINSTRCNT_28   (0x1CUL)  /*!< Value 0x0000001C */
#define DWT_FOLDINSTRCNT_29   (0x1DUL)  /*!< Value 0x0000001D */
#define DWT_FOLDINSTRCNT_30   (0x1EUL)  /*!< Value 0x0000001E */
#define DWT_FOLDINSTRCNT_31   (0x1FUL)  /*!< Value 0x0000001F */
#define DWT_FOLDINSTRCNT_32   (0x20UL)  /*!< Value 0x00000020 */
#define DWT_FOLDINSTRCNT_33   (0x21UL)  /*!< Value 0x00000021 */
#define DWT_FOLDINSTRCNT_34   (0x22UL)  /*!< Value 0x00000022 */
#define DWT_FOLDINSTRCNT_35   (0x23UL)  /*!< Value 0x00000023 */
#define DWT_FOLDINSTRCNT_36   (0x24UL)  /*!< Value 0x00000024 */
#define DWT_FOLDINSTRCNT_37   (0x25UL)  /*!< Value 0x00000025 */
#define DWT_FOLDINSTRCNT_38   (0x26UL)  /*!< Value 0x00000026 */
#define DWT_FOLDINSTRCNT_39   (0x27UL)  /*!< Value 0x00000027 */
#define DWT_FOLDINSTRCNT_40   (0x28UL)  /*!< Value 0x00000028 */
#define DWT_FOLDINSTRCNT_41   (0x29UL)  /*!< Value 0x00000029 */
#define DWT_FOLDINSTRCNT_42   (0x2AUL)  /*!< Value 0x0000002A */
#define DWT_FOLDINSTRCNT_43   (0x2BUL)  /*!< Value 0x0000002B */
#define DWT_FOLDINSTRCNT_44   (0x2CUL)  /*!< Value 0x0000002C */
#define DWT_FOLDINSTRCNT_45   (0x2DUL)  /*!< Value 0x0000002D */
#define DWT_FOLDINSTRCNT_46   (0x2EUL)  /*!< Value 0x0000002E */
#define DWT_FOLDINSTRCNT_47   (0x2FUL)  /*!< Value 0x0000002F */
#define DWT_FOLDINSTRCNT_48   (0x30UL)  /*!< Value 0x00000030 */
#define DWT_FOLDINSTRCNT_49   (0x31UL)  /*!< Value 0x00000031 */
#define DWT_FOLDINSTRCNT_50   (0x32UL)  /*!< Value 0x00000032 */
#define DWT_FOLDINSTRCNT_51   (0x33UL)  /*!< Value 0x00000033 */
#define DWT_FOLDINSTRCNT_52   (0x34UL)  /*!< Value 0x00000034 */
#define DWT_FOLDINSTRCNT_53   (0x35UL)  /*!< Value 0x00000035 */
#define DWT_FOLDINSTRCNT_54   (0x36UL)  /*!< Value 0x00000036 */
#define DWT_FOLDINSTRCNT_55   (0x37UL)  /*!< Value 0x00000037 */
#define DWT_FOLDINSTRCNT_56   (0x38UL)  /*!< Value 0x00000038 */
#define DWT_FOLDINSTRCNT_57   (0x39UL)  /*!< Value 0x00000039 */
#define DWT_FOLDINSTRCNT_58   (0x3AUL)  /*!< Value 0x0000003A */
#define DWT_FOLDINSTRCNT_59   (0x3BUL)  /*!< Value 0x0000003B */
#define DWT_FOLDINSTRCNT_60   (0x3CUL)  /*!< Value 0x0000003C */
#define DWT_FOLDINSTRCNT_61   (0x3DUL)  /*!< Value 0x0000003D */
#define DWT_FOLDINSTRCNT_62   (0x3EUL)  /*!< Value 0x0000003E */
#define DWT_FOLDINSTRCNT_63   (0x3FUL)  /*!< Value 0x0000003F */
#define DWT_FOLDINSTRCNT_64   (0x40UL)  /*!< Value 0x00000040 */
#define DWT_FOLDINSTRCNT_65   (0x41UL)  /*!< Value 0x00000041 */
#define DWT_FOLDINSTRCNT_66   (0x42UL)  /*!< Value 0x00000042 */
#define DWT_FOLDINSTRCNT_67   (0x43UL)  /*!< Value 0x00000043 */
#define DWT_FOLDINSTRCNT_68   (0x44UL)  /*!< Value 0x00000044 */
#define DWT_FOLDINSTRCNT_69   (0x45UL)  /*!< Value 0x00000045 */
#define DWT_FOLDINSTRCNT_70   (0x46UL)  /*!< Value 0x00000046 */
#define DWT_FOLDINSTRCNT_71   (0x47UL)  /*!< Value 0x00000047 */
#define DWT_FOLDINSTRCNT_72   (0x48UL)  /*!< Value 0x00000048 */
#define DWT_FOLDINSTRCNT_73   (0x49UL)  /*!< Value 0x00000049 */
#define DWT_FOLDINSTRCNT_74   (0x4AUL)  /*!< Value 0x0000004A */
#define DWT_FOLDINSTRCNT_75   (0x4BUL)  /*!< Value 0x0000004B */
#define DWT_FOLDINSTRCNT_76   (0x4CUL)  /*!< Value 0x0000004C */
#define DWT_FOLDINSTRCNT_77   (0x4DUL)  /*!< Value 0x0000004D */
#define DWT_FOLDINSTRCNT_78   (0x4EUL)  /*!< Value 0x0000004E */
#define DWT_FOLDINSTRCNT_79   (0x4FUL)  /*!< Value 0x0000004F */
#define DWT_FOLDINSTRCNT_80   (0x50UL)  /*!< Value 0x00000050 */
#define DWT_FOLDINSTRCNT_81   (0x51UL)  /*!< Value 0x00000051 */
#define DWT_FOLDINSTRCNT_82   (0x52UL)  /*!< Value 0x00000052 */
#define DWT_FOLDINSTRCNT_83   (0x53UL)  /*!< Value 0x00000053 */
#define DWT_FOLDINSTRCNT_84   (0x54UL)  /*!< Value 0x00000054 */
#define DWT_FOLDINSTRCNT_85   (0x55UL)  /*!< Value 0x00000055 */
#define DWT_FOLDINSTRCNT_86   (0x56UL)  /*!< Value 0x00000056 */
#define DWT_FOLDINSTRCNT_87   (0x57UL)  /*!< Value 0x00000057 */
#define DWT_FOLDINSTRCNT_88   (0x58UL)  /*!< Value 0x00000058 */
#define DWT_FOLDINSTRCNT_89   (0x59UL)  /*!< Value 0x00000059 */
#define DWT_FOLDINSTRCNT_90   (0x5AUL)  /*!< Value 0x0000005A */
#define DWT_FOLDINSTRCNT_91   (0x5BUL)  /*!< Value 0x0000005B */
#define DWT_FOLDINSTRCNT_92   (0x5CUL)  /*!< Value 0x0000005C */
#define DWT_FOLDINSTRCNT_93   (0x5DUL)  /*!< Value 0x0000005D */
#define DWT_FOLDINSTRCNT_94   (0x5EUL)  /*!< Value 0x0000005E */
#define DWT_FOLDINSTRCNT_95   (0x5FUL)  /*!< Value 0x0000005F */
#define DWT_FOLDINSTRCNT_96   (0x60UL)  /*!< Value 0x00000060 */
#define DWT_FOLDINSTRCNT_97   (0x61UL)  /*!< Value 0x00000061 */
#define DWT_FOLDINSTRCNT_98   (0x62UL)  /*!< Value 0x00000062 */
#define DWT_FOLDINSTRCNT_99   (0x63UL)  /*!< Value 0x00000063 */
#define DWT_FOLDINSTRCNT_100  (0x64UL)  /*!< Value 0x00000064 */
#define DWT_FOLDINSTRCNT_101  (0x65UL)  /*!< Value 0x00000065 */
#define DWT_FOLDINSTRCNT_102  (0x66UL)  /*!< Value 0x00000066 */
#define DWT_FOLDINSTRCNT_103  (0x67UL)  /*!< Value 0x00000067 */
#define DWT_FOLDINSTRCNT_104  (0x68UL)  /*!< Value 0x00000068 */
#define DWT_FOLDINSTRCNT_105  (0x69UL)  /*!< Value 0x00000069 */
#define DWT_FOLDINSTRCNT_106  (0x6AUL)  /*!< Value 0x0000006A */
#define DWT_FOLDINSTRCNT_107  (0x6BUL)  /*!< Value 0x0000006B */
#define DWT_FOLDINSTRCNT_108  (0x6CUL)  /*!< Value 0x0000006C */
#define DWT_FOLDINSTRCNT_109  (0x6DUL)  /*!< Value 0x0000006D */
#define DWT_FOLDINSTRCNT_110  (0x6EUL)  /*!< Value 0x0000006E */
#define DWT_FOLDINSTRCNT_111  (0x6FUL)  /*!< Value 0x0000006F */
#define DWT_FOLDINSTRCNT_112  (0x70UL)  /*!< Value 0x00000070 */
#define DWT_FOLDINSTRCNT_113  (0x71UL)  /*!< Value 0x00000071 */
#define DWT_FOLDINSTRCNT_114  (0x72UL)  /*!< Value 0x00000072 */
#define DWT_FOLDINSTRCNT_115  (0x73UL)  /*!< Value 0x00000073 */
#define DWT_FOLDINSTRCNT_116  (0x74UL)  /*!< Value 0x00000074 */
#define DWT_FOLDINSTRCNT_117  (0x75UL)  /*!< Value 0x00000075 */
#define DWT_FOLDINSTRCNT_118  (0x76UL)  /*!< Value 0x00000076 */
#define DWT_FOLDINSTRCNT_119  (0x77UL)  /*!< Value 0x00000077 */
#define DWT_FOLDINSTRCNT_120  (0x78UL)  /*!< Value 0x00000078 */
#define DWT_FOLDINSTRCNT_121  (0x79UL)  /*!< Value 0x00000079 */
#define DWT_FOLDINSTRCNT_122  (0x7AUL)  /*!< Value 0x0000007A */
#define DWT_FOLDINSTRCNT_123  (0x7BUL)  /*!< Value 0x0000007B */
#define DWT_FOLDINSTRCNT_124  (0x7CUL)  /*!< Value 0x0000007C */
#define DWT_FOLDINSTRCNT_125  (0x7DUL)  /*!< Value 0x0000007D */
#define DWT_FOLDINSTRCNT_126  (0x7EUL)  /*!< Value 0x0000007E */
#define DWT_FOLDINSTRCNT_127  (0x7FUL)  /*!< Value 0x0000007F */
#define DWT_FOLDINSTRCNT_128  (0x80UL)  /*!< Value 0x00000080 */
#define DWT_FOLDINSTRCNT_129  (0x81UL)  /*!< Value 0x00000081 */
#define DWT_FOLDINSTRCNT_130  (0x82UL)  /*!< Value 0x00000082 */
#define DWT_FOLDINSTRCNT_131  (0x83UL)  /*!< Value 0x00000083 */
#define DWT_FOLDINSTRCNT_132  (0x84UL)  /*!< Value 0x00000084 */
#define DWT_FOLDINSTRCNT_133  (0x85UL)  /*!< Value 0x00000085 */
#define DWT_FOLDINSTRCNT_134  (0x86UL)  /*!< Value 0x00000086 */
#define DWT_FOLDINSTRCNT_135  (0x87UL)  /*!< Value 0x00000087 */
#define DWT_FOLDINSTRCNT_136  (0x88UL)  /*!< Value 0x00000088 */
#define DWT_FOLDINSTRCNT_137  (0x89UL)  /*!< Value 0x00000089 */
#define DWT_FOLDINSTRCNT_138  (0x8AUL)  /*!< Value 0x0000008A */
#define DWT_FOLDINSTRCNT_139  (0x8BUL)  /*!< Value 0x0000008B */
#define DWT_FOLDINSTRCNT_140  (0x8CUL)  /*!< Value 0x0000008C */
#define DWT_FOLDINSTRCNT_141  (0x8DUL)  /*!< Value 0x0000008D */
#define DWT_FOLDINSTRCNT_142  (0x8EUL)  /*!< Value 0x0000008E */
#define DWT_FOLDINSTRCNT_143  (0x8FUL)  /*!< Value 0x0000008F */
#define DWT_FOLDINSTRCNT_144  (0x90UL)  /*!< Value 0x00000090 */
#define DWT_FOLDINSTRCNT_145  (0x91UL)  /*!< Value 0x00000091 */
#define DWT_FOLDINSTRCNT_146  (0x92UL)  /*!< Value 0x00000092 */
#define DWT_FOLDINSTRCNT_147  (0x93UL)  /*!< Value 0x00000093 */
#define DWT_FOLDINSTRCNT_148  (0x94UL)  /*!< Value 0x00000094 */
#define DWT_FOLDINSTRCNT_149  (0x95UL)  /*!< Value 0x00000095 */
#define DWT_FOLDINSTRCNT_150  (0x96UL)  /*!< Value 0x00000096 */
#define DWT_FOLDINSTRCNT_151  (0x97UL)  /*!< Value 0x00000097 */
#define DWT_FOLDINSTRCNT_152  (0x98UL)  /*!< Value 0x00000098 */
#define DWT_FOLDINSTRCNT_153  (0x99UL)  /*!< Value 0x00000099 */
#define DWT_FOLDINSTRCNT_154  (0x9AUL)  /*!< Value 0x0000009A */
#define DWT_FOLDINSTRCNT_155  (0x9BUL)  /*!< Value 0x0000009B */
#define DWT_FOLDINSTRCNT_156  (0x9CUL)  /*!< Value 0x0000009C */
#define DWT_FOLDINSTRCNT_157  (0x9DUL)  /*!< Value 0x0000009D */
#define DWT_FOLDINSTRCNT_158  (0x9EUL)  /*!< Value 0x0000009E */
#define DWT_FOLDINSTRCNT_159  (0x9FUL)  /*!< Value 0x0000009F */
#define DWT_FOLDINSTRCNT_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define DWT_FOLDINSTRCNT_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define DWT_FOLDINSTRCNT_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define DWT_FOLDINSTRCNT_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define DWT_FOLDINSTRCNT_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define DWT_FOLDINSTRCNT_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define DWT_FOLDINSTRCNT_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define DWT_FOLDINSTRCNT_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define DWT_FOLDINSTRCNT_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define DWT_FOLDINSTRCNT_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define DWT_FOLDINSTRCNT_170  (0xAAUL)  /*!< Value 0x000000AA */
#define DWT_FOLDINSTRCNT_171  (0xABUL)  /*!< Value 0x000000AB */
#define DWT_FOLDINSTRCNT_172  (0xACUL)  /*!< Value 0x000000AC */
#define DWT_FOLDINSTRCNT_173  (0xADUL)  /*!< Value 0x000000AD */
#define DWT_FOLDINSTRCNT_174  (0xAEUL)  /*!< Value 0x000000AE */
#define DWT_FOLDINSTRCNT_175  (0xAFUL)  /*!< Value 0x000000AF */
#define DWT_FOLDINSTRCNT_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define DWT_FOLDINSTRCNT_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define DWT_FOLDINSTRCNT_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define DWT_FOLDINSTRCNT_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define DWT_FOLDINSTRCNT_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define DWT_FOLDINSTRCNT_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define DWT_FOLDINSTRCNT_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define DWT_FOLDINSTRCNT_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define DWT_FOLDINSTRCNT_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define DWT_FOLDINSTRCNT_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define DWT_FOLDINSTRCNT_186  (0xBAUL)  /*!< Value 0x000000BA */
#define DWT_FOLDINSTRCNT_187  (0xBBUL)  /*!< Value 0x000000BB */
#define DWT_FOLDINSTRCNT_188  (0xBCUL)  /*!< Value 0x000000BC */
#define DWT_FOLDINSTRCNT_189  (0xBDUL)  /*!< Value 0x000000BD */
#define DWT_FOLDINSTRCNT_190  (0xBEUL)  /*!< Value 0x000000BE */
#define DWT_FOLDINSTRCNT_191  (0xBFUL)  /*!< Value 0x000000BF */
#define DWT_FOLDINSTRCNT_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define DWT_FOLDINSTRCNT_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define DWT_FOLDINSTRCNT_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define DWT_FOLDINSTRCNT_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define DWT_FOLDINSTRCNT_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define DWT_FOLDINSTRCNT_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define DWT_FOLDINSTRCNT_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define DWT_FOLDINSTRCNT_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define DWT_FOLDINSTRCNT_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define DWT_FOLDINSTRCNT_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define DWT_FOLDINSTRCNT_202  (0xCAUL)  /*!< Value 0x000000CA */
#define DWT_FOLDINSTRCNT_203  (0xCBUL)  /*!< Value 0x000000CB */
#define DWT_FOLDINSTRCNT_204  (0xCCUL)  /*!< Value 0x000000CC */
#define DWT_FOLDINSTRCNT_205  (0xCDUL)  /*!< Value 0x000000CD */
#define DWT_FOLDINSTRCNT_206  (0xCEUL)  /*!< Value 0x000000CE */
#define DWT_FOLDINSTRCNT_207  (0xCFUL)  /*!< Value 0x000000CF */
#define DWT_FOLDINSTRCNT_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define DWT_FOLDINSTRCNT_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define DWT_FOLDINSTRCNT_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define DWT_FOLDINSTRCNT_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define DWT_FOLDINSTRCNT_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define DWT_FOLDINSTRCNT_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define DWT_FOLDINSTRCNT_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define DWT_FOLDINSTRCNT_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define DWT_FOLDINSTRCNT_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define DWT_FOLDINSTRCNT_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define DWT_FOLDINSTRCNT_218  (0xDAUL)  /*!< Value 0x000000DA */
#define DWT_FOLDINSTRCNT_219  (0xDBUL)  /*!< Value 0x000000DB */
#define DWT_FOLDINSTRCNT_220  (0xDCUL)  /*!< Value 0x000000DC */
#define DWT_FOLDINSTRCNT_221  (0xDDUL)  /*!< Value 0x000000DD */
#define DWT_FOLDINSTRCNT_222  (0xDEUL)  /*!< Value 0x000000DE */
#define DWT_FOLDINSTRCNT_223  (0xDFUL)  /*!< Value 0x000000DF */
#define DWT_FOLDINSTRCNT_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define DWT_FOLDINSTRCNT_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define DWT_FOLDINSTRCNT_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define DWT_FOLDINSTRCNT_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define DWT_FOLDINSTRCNT_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define DWT_FOLDINSTRCNT_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define DWT_FOLDINSTRCNT_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define DWT_FOLDINSTRCNT_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define DWT_FOLDINSTRCNT_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define DWT_FOLDINSTRCNT_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define DWT_FOLDINSTRCNT_234  (0xEAUL)  /*!< Value 0x000000EA */
#define DWT_FOLDINSTRCNT_235  (0xEBUL)  /*!< Value 0x000000EB */
#define DWT_FOLDINSTRCNT_236  (0xECUL)  /*!< Value 0x000000EC */
#define DWT_FOLDINSTRCNT_237  (0xEDUL)  /*!< Value 0x000000ED */
#define DWT_FOLDINSTRCNT_238  (0xEEUL)  /*!< Value 0x000000EE */
#define DWT_FOLDINSTRCNT_239  (0xEFUL)  /*!< Value 0x000000EF */
#define DWT_FOLDINSTRCNT_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define DWT_FOLDINSTRCNT_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define DWT_FOLDINSTRCNT_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define DWT_FOLDINSTRCNT_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define DWT_FOLDINSTRCNT_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define DWT_FOLDINSTRCNT_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define DWT_FOLDINSTRCNT_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define DWT_FOLDINSTRCNT_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define DWT_FOLDINSTRCNT_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define DWT_FOLDINSTRCNT_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define DWT_FOLDINSTRCNT_250  (0xFAUL)  /*!< Value 0x000000FA */
#define DWT_FOLDINSTRCNT_251  (0xFBUL)  /*!< Value 0x000000FB */
#define DWT_FOLDINSTRCNT_252  (0xFCUL)  /*!< Value 0x000000FC */
#define DWT_FOLDINSTRCNT_253  (0xFDUL)  /*!< Value 0x000000FD */
#define DWT_FOLDINSTRCNT_254  (0xFEUL)  /*!< Value 0x000000FE */
#define DWT_FOLDINSTRCNT_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< Program counter sample register */
#define DWT_PCSR_EIASAMPLE_OFFSET  (0U)
#define DWT_PCSR_EIASAMPLE_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Mask  0xFFFFFFFF */
#define DWT_PCSR_EIASAMPLE_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000001 */
#define DWT_PCSR_EIASAMPLE_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000002 */
#define DWT_PCSR_EIASAMPLE_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000004 */
#define DWT_PCSR_EIASAMPLE_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000008 */
#define DWT_PCSR_EIASAMPLE_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000010 */
#define DWT_PCSR_EIASAMPLE_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000020 */
#define DWT_PCSR_EIASAMPLE_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000040 */
#define DWT_PCSR_EIASAMPLE_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000080 */
#define DWT_PCSR_EIASAMPLE_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000100 */
#define DWT_PCSR_EIASAMPLE_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000200 */
#define DWT_PCSR_EIASAMPLE_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000400 */
#define DWT_PCSR_EIASAMPLE_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00000800 */
#define DWT_PCSR_EIASAMPLE_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00001000 */
#define DWT_PCSR_EIASAMPLE_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00002000 */
#define DWT_PCSR_EIASAMPLE_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00004000 */
#define DWT_PCSR_EIASAMPLE_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00008000 */
#define DWT_PCSR_EIASAMPLE_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00010000 */
#define DWT_PCSR_EIASAMPLE_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00020000 */
#define DWT_PCSR_EIASAMPLE_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00040000 */
#define DWT_PCSR_EIASAMPLE_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00080000 */
#define DWT_PCSR_EIASAMPLE_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00100000 */
#define DWT_PCSR_EIASAMPLE_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00200000 */
#define DWT_PCSR_EIASAMPLE_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00400000 */
#define DWT_PCSR_EIASAMPLE_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x00800000 */
#define DWT_PCSR_EIASAMPLE_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x01000000 */
#define DWT_PCSR_EIASAMPLE_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x02000000 */
#define DWT_PCSR_EIASAMPLE_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x04000000 */
#define DWT_PCSR_EIASAMPLE_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x08000000 */
#define DWT_PCSR_EIASAMPLE_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x10000000 */
#define DWT_PCSR_EIASAMPLE_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x20000000 */
#define DWT_PCSR_EIASAMPLE_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x40000000 */
#define DWT_PCSR_EIASAMPLE_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PCSR, EIASAMPLE))  /*!< Value 0x80000000 */

/*!< Comparator register (Macros valid for registers COMP0, COMP1, COMP2 and COMP3) */
#define DWT_COMP_COMP_OFFSET  (0U)
#define DWT_COMP_COMP_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Mask  0xFFFFFFFF */
#define DWT_COMP_COMP_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000001 */
#define DWT_COMP_COMP_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000002 */
#define DWT_COMP_COMP_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000004 */
#define DWT_COMP_COMP_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000008 */
#define DWT_COMP_COMP_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000010 */
#define DWT_COMP_COMP_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000020 */
#define DWT_COMP_COMP_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000040 */
#define DWT_COMP_COMP_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000080 */
#define DWT_COMP_COMP_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000100 */
#define DWT_COMP_COMP_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000200 */
#define DWT_COMP_COMP_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000400 */
#define DWT_COMP_COMP_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00000800 */
#define DWT_COMP_COMP_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00001000 */
#define DWT_COMP_COMP_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00002000 */
#define DWT_COMP_COMP_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00004000 */
#define DWT_COMP_COMP_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00008000 */
#define DWT_COMP_COMP_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00010000 */
#define DWT_COMP_COMP_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00020000 */
#define DWT_COMP_COMP_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00040000 */
#define DWT_COMP_COMP_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00080000 */
#define DWT_COMP_COMP_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00100000 */
#define DWT_COMP_COMP_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00200000 */
#define DWT_COMP_COMP_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00400000 */
#define DWT_COMP_COMP_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x00800000 */
#define DWT_COMP_COMP_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x01000000 */
#define DWT_COMP_COMP_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x02000000 */
#define DWT_COMP_COMP_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x04000000 */
#define DWT_COMP_COMP_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x08000000 */
#define DWT_COMP_COMP_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x10000000 */
#define DWT_COMP_COMP_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x20000000 */
#define DWT_COMP_COMP_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x40000000 */
#define DWT_COMP_COMP_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, COMP, COMP))  /*!< Value 0x80000000 */

/*!< Mask register (Macros valid for registers MASK0, MASK1, MASK2 and MASK3) */
#define DWT_MASK_MASK_OFFSET  (0U)
#define DWT_MASK_MASK_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(DWT, MASK, MASK))  /*!< Mask  0x0000001F */
#define DWT_MASK_MASK_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, MASK, MASK))  /*!< Value 0x00000001 */
#define DWT_MASK_MASK_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, MASK, MASK))  /*!< Value 0x00000002 */
#define DWT_MASK_MASK_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, MASK, MASK))  /*!< Value 0x00000004 */
#define DWT_MASK_MASK_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, MASK, MASK))  /*!< Value 0x00000008 */
#define DWT_MASK_MASK_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, MASK, MASK))  /*!< Value 0x00000010 */

// Values of the register storing the size of the ignore mask applied to the address range matching
#define DWT_IGNOREMASK_0    (0x00UL)  /*!< Value 0x00000000 */
#define DWT_IGNOREMASK_1    (0x01UL)  /*!< Value 0x00000001 */
#define DWT_IGNOREMASK_2    (0x02UL)  /*!< Value 0x00000002 */
#define DWT_IGNOREMASK_3    (0x03UL)  /*!< Value 0x00000003 */
#define DWT_IGNOREMASK_4    (0x04UL)  /*!< Value 0x00000004 */
#define DWT_IGNOREMASK_5    (0x05UL)  /*!< Value 0x00000005 */
#define DWT_IGNOREMASK_6    (0x06UL)  /*!< Value 0x00000006 */
#define DWT_IGNOREMASK_7    (0x07UL)  /*!< Value 0x00000007 */
#define DWT_IGNOREMASK_8    (0x08UL)  /*!< Value 0x00000008 */
#define DWT_IGNOREMASK_9    (0x09UL)  /*!< Value 0x00000009 */
#define DWT_IGNOREMASK_10   (0x0AUL)  /*!< Value 0x0000000A */
#define DWT_IGNOREMASK_11   (0x0BUL)  /*!< Value 0x0000000B */
#define DWT_IGNOREMASK_12   (0x0CUL)  /*!< Value 0x0000000C */
#define DWT_IGNOREMASK_13   (0x0DUL)  /*!< Value 0x0000000D */
#define DWT_IGNOREMASK_14   (0x0EUL)  /*!< Value 0x0000000E */
#define DWT_IGNOREMASK_15   (0x0FUL)  /*!< Value 0x0000000F */
#define DWT_IGNOREMASK_16   (0x10UL)  /*!< Value 0x00000010 */
#define DWT_IGNOREMASK_17   (0x11UL)  /*!< Value 0x00000011 */
#define DWT_IGNOREMASK_18   (0x12UL)  /*!< Value 0x00000012 */
#define DWT_IGNOREMASK_19   (0x13UL)  /*!< Value 0x00000013 */
#define DWT_IGNOREMASK_20   (0x14UL)  /*!< Value 0x00000014 */
#define DWT_IGNOREMASK_21   (0x15UL)  /*!< Value 0x00000015 */
#define DWT_IGNOREMASK_22   (0x16UL)  /*!< Value 0x00000016 */
#define DWT_IGNOREMASK_23   (0x17UL)  /*!< Value 0x00000017 */
#define DWT_IGNOREMASK_24   (0x18UL)  /*!< Value 0x00000018 */
#define DWT_IGNOREMASK_25   (0x19UL)  /*!< Value 0x00000019 */
#define DWT_IGNOREMASK_26   (0x1AUL)  /*!< Value 0x0000001A */
#define DWT_IGNOREMASK_27   (0x1BUL)  /*!< Value 0x0000001B */
#define DWT_IGNOREMASK_28   (0x1CUL)  /*!< Value 0x0000001C */
#define DWT_IGNOREMASK_29   (0x1DUL)  /*!< Value 0x0000001D */
#define DWT_IGNOREMASK_30   (0x1EUL)  /*!< Value 0x0000001E */
#define DWT_IGNOREMASK_31   (0x1FUL)  /*!< Value 0x0000001F */


/*!< Comparator function register (Macros valid for registers FUCNTION0, FUNCTION1, FUNCTION2 and FUNCTION3) */
#define DWT_FUNCTION_MATCHED_OFFSET     (24U)
#define DWT_FUNCTION_MATCHED_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, MATCHED))     /*!< Mask  0x01000000 */

#define DWT_FUNCTION_DATAVADDR1_OFFSET  (16U)
#define DWT_FUNCTION_DATAVADDR1_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR1))  /*!< Mask  0x000F0000 */
#define DWT_FUNCTION_DATAVADDR1_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR1))  /*!< Mask  0x00010000 */
#define DWT_FUNCTION_DATAVADDR1_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR1))  /*!< Mask  0x00020000 */
#define DWT_FUNCTION_DATAVADDR1_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR1))  /*!< Mask  0x00040000 */
#define DWT_FUNCTION_DATAVADDR1_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR1))  /*!< Mask  0x00080000 */

#define DWT_FUNCTION_DATAVADDR0_OFFSET  (12U)
#define DWT_FUNCTION_DATAVADDR0_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR0))  /*!< Mask  0x0000F000 */
#define DWT_FUNCTION_DATAVADDR0_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR0))  /*!< Mask  0x00001000 */
#define DWT_FUNCTION_DATAVADDR0_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR0))  /*!< Mask  0x00002000 */
#define DWT_FUNCTION_DATAVADDR0_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR0))  /*!< Mask  0x00004000 */
#define DWT_FUNCTION_DATAVADDR0_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVADDR0))  /*!< Mask  0x00008000 */

#define DWT_FUNCTION_DATAVSIZE_OFFSET   (10U)
#define DWT_FUNCTION_DATAVSIZE_MASK     (0x3UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVSIZE))   /*!< Mask  0x00000C00 */
#define DWT_FUNCTION_DATAVSIZE_0        (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVSIZE))   /*!< Value 0x00000400 */
#define DWT_FUNCTION_DATAVSIZE_1        (0x2UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVSIZE))   /*!< Value 0x00000800 */

#define DWT_FUNCTION_LINK1ENA_OFFSET    (9U)
#define DWT_FUNCTION_LINK1ENA_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, LINK1ENA))    /*!< Mask  0x00000200 */

#define DWT_FUNCTION_DATAVMATCH_OFFSET  (8U)
#define DWT_FUNCTION_DATAVMATCH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, DATAVMATCH))  /*!< Mask  0x00000100 */

#define DWT_FUNCTION_CYCMATCH_OFFSET    (7U)
#define DWT_FUNCTION_CYCMATCH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, CYCMATCH))    /*!< Mask  0x00000080 */

#define DWT_FUNCTION_EMITRANGE_OFFSET   (5U)
#define DWT_FUNCTION_EMITRANGE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, EMITRANGE))   /*!< Mask  0x00000020 - implemented on FUNCTION0 only */

#define DWT_FUNCTION_FUNCTION_OFFSET    (0U)
#define DWT_FUNCTION_FUNCTION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, FUNCTION))    /*!< Mask  0x0000000F */
#define DWT_FUNCTION_FUNCTION_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, FUNCTION))    /*!< Value 0x00000001 */
#define DWT_FUNCTION_FUNCTION_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, FUNCTION))    /*!< Value 0x00000002 */
#define DWT_FUNCTION_FUNCTION_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, FUNCTION))    /*!< Value 0x00000004 */
#define DWT_FUNCTION_FUNCTION_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, FUNCTION, FUNCTION))    /*!< Value 0x00000008 */

// Values of comparator match bit
#define DWT_COMPFUNCTIONOP_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_COMPFUNCTIONOP_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing the comparator number of a comparator for to use linked address comparison (Macros valid for register fields DATAVADDR1 and DATAVADDR0)
#define DWT_DATAVALUELINKEDADDRCOMP_0    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_DATAVALUELINKEDADDRCOMP_1    (0x1UL)  /*!< Value 0x00000001 */
#define DWT_DATAVALUELINKEDADDRCOMP_2    (0x2UL)  /*!< Value 0x00000002 */
#define DWT_DATAVALUELINKEDADDRCOMP_3    (0x3UL)  /*!< Value 0x00000003 */
#define DWT_DATAVALUELINKEDADDRCOMP_4    (0x4UL)  /*!< Value 0x00000004 */
#define DWT_DATAVALUELINKEDADDRCOMP_5    (0x5UL)  /*!< Value 0x00000005 */
#define DWT_DATAVALUELINKEDADDRCOMP_6    (0x6UL)  /*!< Value 0x00000006 */
#define DWT_DATAVALUELINKEDADDRCOMP_7    (0x7UL)  /*!< Value 0x00000007 */
#define DWT_DATAVALUELINKEDADDRCOMP_8    (0x8UL)  /*!< Value 0x00000008 */
#define DWT_DATAVALUELINKEDADDRCOMP_9    (0x9UL)  /*!< Value 0x00000009 */
#define DWT_DATAVALUELINKEDADDRCOMP_10   (0xAUL)  /*!< Value 0x0000000A */
#define DWT_DATAVALUELINKEDADDRCOMP_11   (0xBUL)  /*!< Value 0x0000000B */
#define DWT_DATAVALUELINKEDADDRCOMP_12   (0xCUL)  /*!< Value 0x0000000C */
#define DWT_DATAVALUELINKEDADDRCOMP_13   (0xDUL)  /*!< Value 0x0000000D */
#define DWT_DATAVALUELINKEDADDRCOMP_14   (0xEUL)  /*!< Value 0x0000000E */
#define DWT_DATAVALUELINKEDADDRCOMP_15   (0xFUL)  /*!< Value 0x0000000F */

// Values of the register storing the size of the required data comparison for data value matching
#define DWT_DATAVALUEMATCHSIZE_BYTE      (0x0UL)  /*!< Value 0x00000000 */
#define DWT_DATAVALUEMATCHSIZE_HALFWORD  (0x1UL)  /*!< Value 0x00000001 */
#define DWT_DATAVALUEMATCHSIZE_WORD      (0x2UL)  /*!< Value 0x00000002 */

// Values of second linked comparator support bit
#define DWT_SECONDLINKEDCOMP_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_SECONDLINKEDCOMP_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of comparison type select bit
#define DWT_COMPTYPE_ADDRESS    (0x0UL)  /*!< Value 0x00000000 */
#define DWT_COMPTYPE_DATAVALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of cycle count comparison enable bit (Macros valid for register FUNCTION0)
#define DWT_CYCLECOUNTCOMP_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_CYCLECOUNTCOMP_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of data trace addess packets enable bit
#define DWT_DATATRACEADDRPACKET_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DWT_DATATRACEADDRPACKET_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing the action to be taken on comparator match
#define DWT_FUNCTION_DISABLED                                   (0x0UL)  /*!< Value 0x00000000 */
#define DWT_FUNCTION_LINKADDR                                   (0x0UL)  /*!< Value 0x00000000 */
#define DWT_FUNCTION_RDWRACCESS_DATATRACEPCVALUEPACKET          (0x1UL)  /*!< Value 0x00000001 */
#define DWT_FUNCTION_RDWRACCESS_DATATRACEADDRPACKET             (0x1UL)  /*!< Value 0x00000001 */
#define DWT_FUNCTION_RDWRACCESS_DATATRACEDATAVALUEPACKET        (0x2UL)  /*!< Value 0x00000002 */
#define DWT_FUNCTION_RDWRACCESS_DATATRACEADDRDATAVALUEPACKET_2  (0x2UL)  /*!< Value 0x00000002 */
#define DWT_FUNCTION_RDWRACCESS_DATATRACEPCDATAVALUEPACKET      (0x3UL)  /*!< Value 0x00000003 */
#define DWT_FUNCTION_RDWRACCESS_DATATRACEADDRDATAVALUEPACKET_3  (0x3UL)  /*!< Value 0x00000003 */
#define DWT_FUNCTION_WATCHDOGDEBUGEVT                           (0x4UL)  /*!< Value 0x00000004 */
#define DWT_FUNCTION_RDACCESS_WATCHDOGDEBUGEVT                  (0x5UL)  /*!< Value 0x00000005 */
#define DWT_FUNCTION_WRACCESS_WATCHDOGDEBUGEVT                  (0x6UL)  /*!< Value 0x00000006 */
#define DWT_FUNCTION_RDWRACCESS_WATCHDOGDEBUGEVT                (0x7UL)  /*!< Value 0x00000007 */
#define DWT_FUNCTION_CMPMATCHEVT                                (0x8UL)  /*!< Value 0x00000008 */
#define DWT_FUNCTION_RDACCESS_CMPMATCHEVT                       (0x9UL)  /*!< Value 0x00000009 */
#define DWT_FUNCTION_WRACCESS_CMPMATCHEVT                       (0xAUL)  /*!< Value 0x0000000A */
#define DWT_FUNCTION_RDWRACCESS_CMPMATCHEVT                     (0xBUL)  /*!< Value 0x0000000B */
#define DWT_FUNCTION_RDACCESS_DATATRACEDATAVALUEPACKET          (0xCUL)  /*!< Value 0x0000000C */
#define DWT_FUNCTION_RDACCESS_DATATRACEADDRVALUEPACKET          (0xCUL)  /*!< Value 0x0000000C */
#define DWT_FUNCTION_RDACCESS_DATATRACEPCDATAVALUEPACKET        (0xDUL)  /*!< Value 0x0000000D */
#define DWT_FUNCTION_RDACCESS_DATATRACEADDRDATAVALUEPACKET      (0xDUL)  /*!< Value 0x0000000D */
#define DWT_FUNCTION_WRACCESS_DATATRACEDATAVALUEPACKET          (0xEUL)  /*!< Value 0x0000000E */
#define DWT_FUNCTION_WRACCESS_DATATRACEADDRVALUEPACKET          (0xEUL)  /*!< Value 0x0000000E */
#define DWT_FUNCTION_WRACCESS_DATATRACEPCDATAVALUEPACKET        (0xFUL)  /*!< Value 0x0000000F */
#define DWT_FUNCTION_WRACCESS_DATATRACEADDRDATAVALUEPACKET      (0xFUL)  /*!< Value 0x0000000F */

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

/*!< CoreSight lock status register */
#define DWT_LSR_NTT_OFFSET  (2U)
#define DWT_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, LSR, NTT))  /*!< Mask  0x00000004 */

#define DWT_LSR_SLK_OFFSET  (1U)
#define DWT_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, LSR, SLK))  /*!< Mask  0x00000002 */

#define DWT_LSR_SLI_OFFSET  (0U)
#define DWT_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DWT, LSR, SLI))  /*!< Mask  0x00000001 */

/*!< Peripheral identitication 4 register */
#define DWT_PIDR4_4KCOUNT_OFFSET    (4U)
#define DWT_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define DWT_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define DWT_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define DWT_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define DWT_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define DWT_PIDR4_JEP106CON_OFFSET  (0U)
#define DWT_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define DWT_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define DWT_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define DWT_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define DWT_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define DWT_PIDR4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define DWT_PIDR5_RSVD_OFFSET  (0U)
#define DWT_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define DWT_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define DWT_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define DWT_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define DWT_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define DWT_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define DWT_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define DWT_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define DWT_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define DWT_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define DWT_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define DWT_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define DWT_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define DWT_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define DWT_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define DWT_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define DWT_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define DWT_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define DWT_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define DWT_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define DWT_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define DWT_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define DWT_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define DWT_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define DWT_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define DWT_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define DWT_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define DWT_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define DWT_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define DWT_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define DWT_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define DWT_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define DWT_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define DWT_PIDR6_RSVD_OFFSET  (0U)
#define DWT_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define DWT_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define DWT_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define DWT_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define DWT_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define DWT_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define DWT_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define DWT_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define DWT_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define DWT_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define DWT_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define DWT_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define DWT_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define DWT_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define DWT_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define DWT_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define DWT_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define DWT_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define DWT_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define DWT_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define DWT_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define DWT_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define DWT_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define DWT_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define DWT_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define DWT_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define DWT_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define DWT_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define DWT_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define DWT_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define DWT_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define DWT_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define DWT_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define DWT_PIDR7_RSVD_OFFSET  (0U)
#define DWT_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define DWT_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define DWT_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define DWT_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define DWT_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define DWT_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define DWT_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define DWT_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define DWT_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define DWT_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define DWT_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define DWT_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define DWT_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define DWT_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define DWT_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define DWT_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define DWT_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define DWT_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define DWT_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define DWT_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define DWT_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define DWT_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define DWT_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define DWT_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define DWT_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define DWT_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define DWT_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define DWT_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define DWT_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define DWT_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define DWT_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define DWT_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define DWT_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DWT, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define DWT_PIDR0_PARTNUM_OFFSET  (0U)
#define DWT_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define DWT_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define DWT_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define DWT_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define DWT_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define DWT_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define DWT_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define DWT_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define DWT_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define DWT_PIDR0PARTNUM_ST   (0x02UL)  /*!< Value 0x00000002 */
#define DWT_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define DWT_PIDR1_JEP106ID_OFFSET  (4U)
#define DWT_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define DWT_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define DWT_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define DWT_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define DWT_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define DWT_PIDR1_PARTNUM_OFFSET   (0U)
#define DWT_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define DWT_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define DWT_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define DWT_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define DWT_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define DWT_PIDR1PARTNUM_ST   (0x0UL)  /*!< Value 0x00000000 */
#define DWT_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define DWT_PIDR1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define DWT_PIDR2_REVISION_OFFSET    (4U)
#define DWT_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define DWT_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define DWT_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define DWT_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define DWT_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define DWT_PIDR2_JEDEC_OFFSET       (3U)
#define DWT_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define DWT_PIDR2_JEDEC106ID_OFFSET  (0U)
#define DWT_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define DWT_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define DWT_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define DWT_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define DWT_REVISION_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC assigned value select bit
#define DWT_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define DWT_PIDR2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define DWT_PIDR3_REVAND_OFFSET  (4U)
#define DWT_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define DWT_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define DWT_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define DWT_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define DWT_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define DWT_PIDR3_CMOD_OFFSET    (0U)
#define DWT_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DWT, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define DWT_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define DWT_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define DWT_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define DWT_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(DWT, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define DWT_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define DWT_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define DWT_CIDR0_PREAMBLE_OFFSET  (0U)
#define DWT_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define DWT_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define DWT_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define DWT_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define DWT_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define DWT_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define DWT_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define DWT_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define DWT_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define DWT_CIDR0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define DWT_CIDR1_CLASS_OFFSET      (4U)
#define DWT_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(DWT, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define DWT_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define DWT_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define DWT_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define DWT_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define DWT_CIDR1_PREAMBLE_OFFSET   (0U)
#define DWT_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(DWT, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define DWT_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define DWT_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define DWT_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define DWT_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(DWT, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define DWT_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define DWT_CLASS_ARM  (0x9UL)  /*!< Value 0x00000009 */
#define DWT_CLASS_ST   (0xEUL)  /*!< Value 0x0000000E */

/*!< Component identitication 2 register */
#define DWT_CIDR2_PREAMBLE_OFFSET  (0U)
#define DWT_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define DWT_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define DWT_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define DWT_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define DWT_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define DWT_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define DWT_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define DWT_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define DWT_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define DWT_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define DWT_CIDR3_PREAMBLE_OFFSET  (0U)
#define DWT_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define DWT_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define DWT_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define DWT_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define DWT_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define DWT_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define DWT_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define DWT_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define DWT_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(DWT, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define DWT_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

/** @} */ // End of DWT group

/** @} */ // End of RegisterGroup group

#endif // DWT_H
