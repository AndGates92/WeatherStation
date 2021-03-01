#ifndef TMC_H
#define TMC_H
/**
 * @copyright
 * @file tmc.h
 * @author Andrea Gianarda
 * @date 4th of August 2021
 * @brief Trace memory controller (TMC) global definitions
*/

#include <stdint.h>
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup TMC Trace memory controller (TMC) registers
 *  @brief Trace memory controller (TMC) registers macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;        /*!< Reserved                                                         (Offset 0x0)            */
	RO uint32_t RDP;              /*!< RAM depth register                                               (Offset 0x4)            */
	   uint32_t reserved1;        /*!< Reserved                                                         (Offset 0x8)            */
	RO uint32_t STS;              /*!< Status register                                                  (Offset 0xC)            */
	RO uint32_t RRD;              /*!< RAM read data register                                           (Offset 0x10)           */
	RW uint32_t RRP;              /*!< RAM read pointer register                                        (Offset 0x14)           */
	RW uint32_t RWP;              /*!< RAM write pointer register                                       (Offset 0x18)           */
	RW uint32_t TRG;              /*!< Trigger counter register                                         (Offset 0x1C)           */
	RW uint32_t CTL;              /*!< Control register                                                 (Offset 0x20)           */
	WO uint32_t RWD;              /*!< RAM write data register                                          (Offset 0x24)           */
	RW uint32_t MODE;             /*!< Mode register                                                    (Offset 0x28)           */
	RO uint32_t LBUFLEVEL;        /*!< Latched buffer fill level register                               (Offset 0x2C)           */
	RO uint32_t CBUFLEVEL;        /*!< Current buffer fill level register                               (Offset 0x30)           */
	RO uint32_t BUFWM;            /*!< Buffer level water mark register                                 (Offset 0x34)           */
	RW uint32_t RRPHI;            /*!< RAM read pointer high register                                   (Offset 0x38)           */
	RW uint32_t RWPHI;            /*!< RAM write pointer high register                                  (Offset 0x3C)           */
	   uint32_t reserved2[52U];   /*!< Reserved                                                         (Offset 0x40 to 0x10C)  */
	RW uint32_t AXICTL;           /*!< AXI control register                                             (Offset 0x110)          */
	   uint32_t reserved3;        /*!< Reserved                                                         (Offset 0x114)          */
	RW uint32_t DBALO;            /*!< Data buffer address low register                                 (Offset 0x118)          */
	RW uint32_t DBAHI;            /*!< Data buffer address high register                                (Offset 0x11C)          */
	   uint32_t reserved4[120U];  /*!< Reserved                                                         (Offset 0x120 to 0x2FC) */
	RO uint32_t FFSR;             /*!< Formatter and flush status register                              (Offset 0x300)          */
	RW uint32_t FFCR;             /*!< Formatter and flush control register                             (Offset 0x304)          */
	RW uint32_t PSCR;             /*!< Periodic synchronization counter register                        (Offset 0x308)          */
	   uint32_t reserved5[753U];  /*!< Reserved                                                         (Offset 0x30C to 0xECC) */
	WO uint32_t ITATBMDATA0;      /*!< Integration test AMBA Trace Bus (ATB) master data 0 register     (Offset 0xED0)          */
	WO uint32_t ITATBMCTR2;       /*!< Integration test AMBA Trace Bus (ATB) master control 2 register  (Offset 0xED4)          */
	RO uint32_t ITATBMCTR1;       /*!< Integration test AMBA Trace Bus (ATB) master control 1 register  (Offset 0xED8)          */
	RO uint32_t ITATBMCTR0;       /*!< Integration test AMBA Trace Bus (ATB) master control 0 register  (Offset 0xEDC)          */
	WO uint32_t ITMISCOP0;        /*!< Integration test miscellaneous output registers                  (Offset 0xEE0)          */
	   uint32_t reserved6;        /*!< Reserved                                                         (Offset 0xEE4)          */
	RO uint32_t ITTRFLIN;         /*!< Integration test trigger in and flush in register                (Offset 0xEE8)          */
	RO uint32_t ITATBDATA0;       /*!< Integration test AMBA Trace Bus (ATB) data 0 register            (Offset 0xEEC)          */
	WO uint32_t ITATBCTR2;        /*!< Integration test AMBA Trace Bus (ATB) control 2 register         (Offset 0xEF0)          */
	RO uint32_t ITATBCTR1;        /*!< Integration test AMBA Trace Bus (ATB) control 1 register         (Offset 0xEF4)          */
	RO uint32_t ITATBCTR0;        /*!< Integration test AMBA Trace Bus (ATB) control 0 register         (Offset 0xEF8)          */
	   uint32_t reserved7;        /*!< Reserved                                                         (Offset 0xEFC)          */
	RW uint32_t ITCTRL;           /*!< Integration mode control register                                (Offset 0xF00)          */
	   uint32_t reserved8[39U];   /*!< Reserved                                                         (Offset 0xF04 to 0xF9C) */
	RW uint32_t CLAIMSET;         /*!< Claim tag set register                                           (Offset 0xFA0)          */
	RW uint32_t CLAIMCLR;         /*!< Claim tag clear register                                         (Offset 0xFA4)          */
	   uint32_t reserved9[2U];    /*!< Reserved                                                         (Offset 0xFA8 to 0xFAC) */
	WO uint32_t LAR;              /*!< CoreSight lock access register                                   (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register                                   (Offset 0xFB4)          */
	RO uint32_t AUTHSTATUS;       /*!< Authentication status register                                   (Offset 0xFB8)          */
	   uint32_t reserved10[3U];   /*!< Reserved                                                         (Offset 0xFBC to 0xFC4) */
	RO uint32_t DEVID;            /*!< Device configuration register                                    (Offset 0xFC8)          */
	RO uint32_t DEVTYPE;          /*!< Device type register                                             (Offset 0xFCC)          */
	RO uint32_t PERIPHID4;        /*!< Peripheral identification 4 register                             (Offset 0xFD0)          */
	RO uint32_t PERIPHID5;        /*!< Peripheral identification 5 register                             (Offset 0xFD4)          */
	RO uint32_t PERIPHID6;        /*!< Peripheral identification 6 register                             (Offset 0xFD8)          */
	RO uint32_t PERIPHID7;        /*!< Peripheral identification 7 register                             (Offset 0xFDC)          */
	RO uint32_t PERIPHID0;        /*!< Peripheral identification 0 register                             (Offset 0xFE0)          */
	RO uint32_t PERIPHID1;        /*!< Peripheral identification 1 register                             (Offset 0xFE4)          */
	RO uint32_t PERIPHID2;        /*!< Peripheral identification 2 register                             (Offset 0xFE8)          */
	RO uint32_t PERIPHID3;        /*!< Peripheral identification 3 register                             (Offset 0xFEC)          */
	RO uint32_t COMPID0;          /*!< Component identification 0 register                              (Offset 0xFF0)          */
	RO uint32_t COMPID1;          /*!< Component identification 1 register                              (Offset 0xFF4)          */
	RO uint32_t COMPID2;          /*!< Component identification 2 register                              (Offset 0xFF8)          */
	RO uint32_t COMPID3;          /*!< Component identification 3 register                              (Offset 0xFFC)          */
} tmc_regs;

/*!< Trace memory controller (TMC) registers */
/*!< RAM depth register */
#define TMC_RDP_RAMDEPTH_OFFSET  (0U)
#define TMC_RDP_RAMDEPTH_MASK    (0x7FFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Mask  0x7FFFFFFF */
#define TMC_RDP_RAMDEPTH_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000001 */
#define TMC_RDP_RAMDEPTH_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000002 */
#define TMC_RDP_RAMDEPTH_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000004 */
#define TMC_RDP_RAMDEPTH_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000008 */
#define TMC_RDP_RAMDEPTH_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000010 */
#define TMC_RDP_RAMDEPTH_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000020 */
#define TMC_RDP_RAMDEPTH_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000040 */
#define TMC_RDP_RAMDEPTH_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000080 */
#define TMC_RDP_RAMDEPTH_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000100 */
#define TMC_RDP_RAMDEPTH_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000200 */
#define TMC_RDP_RAMDEPTH_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000400 */
#define TMC_RDP_RAMDEPTH_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00000800 */
#define TMC_RDP_RAMDEPTH_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00001000 */
#define TMC_RDP_RAMDEPTH_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00002000 */
#define TMC_RDP_RAMDEPTH_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00004000 */
#define TMC_RDP_RAMDEPTH_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00008000 */
#define TMC_RDP_RAMDEPTH_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00010000 */
#define TMC_RDP_RAMDEPTH_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00020000 */
#define TMC_RDP_RAMDEPTH_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00040000 */
#define TMC_RDP_RAMDEPTH_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00080000 */
#define TMC_RDP_RAMDEPTH_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00100000 */
#define TMC_RDP_RAMDEPTH_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00200000 */
#define TMC_RDP_RAMDEPTH_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00400000 */
#define TMC_RDP_RAMDEPTH_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x00800000 */
#define TMC_RDP_RAMDEPTH_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x01000000 */
#define TMC_RDP_RAMDEPTH_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x02000000 */
#define TMC_RDP_RAMDEPTH_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x04000000 */
#define TMC_RDP_RAMDEPTH_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x08000000 */
#define TMC_RDP_RAMDEPTH_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x10000000 */
#define TMC_RDP_RAMDEPTH_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x20000000 */
#define TMC_RDP_RAMDEPTH_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, RDP, RAMDEPTH))  /*!< Value 0x40000000 */

// Values of the depth in word of the trace RAM
#define TMC_RAMDEPTH_0           (0x00000000UL)  /*!< Value 0x00000000 */
#define TMC_RAMDEPTH_1           (0x00000001UL)  /*!< Value 0x00000001 */
#define TMC_RAMDEPTH_2           (0x00000002UL)  /*!< Value 0x00000002 */
#define TMC_RAMDEPTH_4           (0x00000004UL)  /*!< Value 0x00000004 */
#define TMC_RAMDEPTH_8           (0x00000008UL)  /*!< Value 0x00000008 */
#define TMC_RAMDEPTH_16          (0x00000010UL)  /*!< Value 0x00000010 */
#define TMC_RAMDEPTH_32          (0x00000020UL)  /*!< Value 0x00000020 */
#define TMC_RAMDEPTH_64          (0x00000040UL)  /*!< Value 0x00000040 */
#define TMC_RAMDEPTH_128         (0x00000080UL)  /*!< Value 0x00000080 */
#define TMC_RAMDEPTH_256         (0x00000100UL)  /*!< Value 0x00000100 */
#define TMC_RAMDEPTH_512         (0x00000200UL)  /*!< Value 0x00000200 */
#define TMC_RAMDEPTH_1024        (0x00000400UL)  /*!< Value 0x00000400 */
#define TMC_RAMDEPTH_2048        (0x00000800UL)  /*!< Value 0x00000800 */
#define TMC_RAMDEPTH_4096        (0x00001000UL)  /*!< Value 0x00001000 */
#define TMC_RAMDEPTH_8192        (0x00002000UL)  /*!< Value 0x00002000 */
#define TMC_RAMDEPTH_16384       (0x00004000UL)  /*!< Value 0x00004000 */
#define TMC_RAMDEPTH_32784       (0x00008000UL)  /*!< Value 0x00008000 */
#define TMC_RAMDEPTH_65536       (0x00010000UL)  /*!< Value 0x00010000 */
#define TMC_RAMDEPTH_131072      (0x00020000UL)  /*!< Value 0x00020000 */
#define TMC_RAMDEPTH_262144      (0x00040000UL)  /*!< Value 0x00040000 */
#define TMC_RAMDEPTH_524288      (0x00080000UL)  /*!< Value 0x00080000 */
#define TMC_RAMDEPTH_1048576     (0x00100000UL)  /*!< Value 0x00100000 */
#define TMC_RAMDEPTH_2097152     (0x00200000UL)  /*!< Value 0x00200000 */
#define TMC_RAMDEPTH_4194304     (0x00400000UL)  /*!< Value 0x00400000 */
#define TMC_RAMDEPTH_8388604     (0x00800000UL)  /*!< Value 0x00800000 */
#define TMC_RAMDEPTH_16777216    (0x01000000UL)  /*!< Value 0x01000000 */
#define TMC_RAMDEPTH_33554432    (0x02000000UL)  /*!< Value 0x02000000 */
#define TMC_RAMDEPTH_67108684    (0x04000000UL)  /*!< Value 0x04000000 */
#define TMC_RAMDEPTH_134217728   (0x08000000UL)  /*!< Value 0x08000000 */
#define TMC_RAMDEPTH_268435456   (0x10000000UL)  /*!< Value 0x10000000 */
#define TMC_RAMDEPTH_536870912   (0x20000000UL)  /*!< Value 0x20000000 */
#define TMC_RAMDEPTH_1073741824  (0x40000000UL)  /*!< Value 0x40000000 */

/*!< Status register */
#define TMC_STS_MEMERR_OFFSET     (5U)
#define TMC_STS_MEMERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(TMC, STS, MEMERR))     /*!< Mask  0x00000010 */

#define TMC_STS_EMPTY_OFFSET      (4U)
#define TMC_STS_EMPTY_MASK        (0x1UL << REGISTER_FIELD_OFFSET(TMC, STS, EMPTY))      /*!< Mask  0x00000010 */

#define TMC_STS_FTEMPTY_OFFSET    (3U)
#define TMC_STS_FTEMPTY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, STS, FTEMPTY))    /*!< Mask  0x00000008 */

#define TMC_STS_ACQCOMP_OFFSET    (2U)
#define TMC_STS_ACQCOMP_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, STS, ACQCOMP))    /*!< Mask  0x00000004 */

#define TMC_STS_TRIGGERED_OFFSET  (1U)
#define TMC_STS_TRIGGERED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, STS, TRIGGERED))  /*!< Mask  0x00000002 */

#define TMC_STS_FULL_OFFSET       (0U)
#define TMC_STS_FULL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, STS, FULL))       /*!< Mask  0x00000001 */

// Values of AXI master interface error bit
#define TMC_AXIERROR_CLEARED   (0x0UL)  /*!< Value 0x00000000 */
#define TMC_AXIERROR_DETECTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of trace FIFO empty bit
#define TMC_TRACEFIFO_NOTEMPTY  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRACEFIFO_EMPTY     (0x1UL)  /*!< Value 0x00000001 */

// Values of formatter FIFO empty bit
#define TMC_FORMATTERFIFO_NOTEMPTY  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_FORMATTERFIFO_EMPTY     (0x1UL)  /*!< Value 0x00000001 */

// Values of acquisition completed bit
#define TMC_CAPTURINGTRACES       (0x0UL)  /*!< Value 0x00000000 */
#define TMC_ACQUISITIONCOMPLETED  (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger event detect bit
#define TMC_TRIGGEREVENT_NOTOBSERVED  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRIGGEREVENT_OBSERVED     (0x1UL)  /*!< Value 0x00000001 */

// Values of trace buffer full bit
#define TMC_TRACEBUFFER_NOTFULL  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRACEBUFFER_FULL     (0x1UL)  /*!< Value 0x00000001 */

// Values of trace capture enable bit
#define TMC_TRACECAPTURE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRACECAPTURE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trace capture enable bit
#define TMC_MODE_CIRCULARBUFFER  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_MODE_SWFIFO          (0x1UL)  /*!< Value 0x00000001 */
#define TMC_MODE_HWFIFO          (0x2UL)  /*!< Value 0x00000002 */

/*!< RAM read data register */
#define TMC_RRD_READDATA_OFFSET  (0U)
#define TMC_RRD_READDATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Mask  0x7FFFFFFF */
#define TMC_RRD_READDATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000001 */
#define TMC_RRD_READDATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000002 */
#define TMC_RRD_READDATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000004 */
#define TMC_RRD_READDATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000008 */
#define TMC_RRD_READDATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000010 */
#define TMC_RRD_READDATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000020 */
#define TMC_RRD_READDATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000040 */
#define TMC_RRD_READDATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000080 */
#define TMC_RRD_READDATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000100 */
#define TMC_RRD_READDATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000200 */
#define TMC_RRD_READDATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000400 */
#define TMC_RRD_READDATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00000800 */
#define TMC_RRD_READDATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00001000 */
#define TMC_RRD_READDATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00002000 */
#define TMC_RRD_READDATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00004000 */
#define TMC_RRD_READDATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00008000 */
#define TMC_RRD_READDATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00010000 */
#define TMC_RRD_READDATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00020000 */
#define TMC_RRD_READDATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00040000 */
#define TMC_RRD_READDATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00080000 */
#define TMC_RRD_READDATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00100000 */
#define TMC_RRD_READDATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00200000 */
#define TMC_RRD_READDATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00400000 */
#define TMC_RRD_READDATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x00800000 */
#define TMC_RRD_READDATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x01000000 */
#define TMC_RRD_READDATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x02000000 */
#define TMC_RRD_READDATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x04000000 */
#define TMC_RRD_READDATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x08000000 */
#define TMC_RRD_READDATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x10000000 */
#define TMC_RRD_READDATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x20000000 */
#define TMC_RRD_READDATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x40000000 */
#define TMC_RRD_READDATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, RRD, READDATA))  /*!< Value 0x80000000 */

/*!< RAM read pointer register */
#define TMC_RRP_READPOINTER_OFFSET  (0U)
#define TMC_RRP_READPOINTER_MASK    (0x1FFFUL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Mask  0x7FFFFFFF */
#define TMC_RRP_READPOINTER_0       (0x0001UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000001 */
#define TMC_RRP_READPOINTER_1       (0x0002UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000002 */
#define TMC_RRP_READPOINTER_2       (0x0004UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000004 */
#define TMC_RRP_READPOINTER_3       (0x0008UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000008 */
#define TMC_RRP_READPOINTER_4       (0x0010UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000010 */
#define TMC_RRP_READPOINTER_5       (0x0020UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000020 */
#define TMC_RRP_READPOINTER_6       (0x0040UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000040 */
#define TMC_RRP_READPOINTER_7       (0x0080UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000080 */
#define TMC_RRP_READPOINTER_8       (0x0100UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000100 */
#define TMC_RRP_READPOINTER_9       (0x0200UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000200 */
#define TMC_RRP_READPOINTER_10      (0x0400UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000400 */
#define TMC_RRP_READPOINTER_11      (0x0800UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00000800 */
#define TMC_RRP_READPOINTER_12      (0x1000UL << REGISTER_FIELD_OFFSET(TMC, RRP, READPOINTER))  /*!< Value 0x00001000 */

/*!< RAM write pointer register */
#define TMC_RWP_WRITEPOINTER_OFFSET  (0U)
#define TMC_RWP_WRITEPOINTER_MASK    (0x1FFFUL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Mask  0x7FFFFFFF */
#define TMC_RWP_WRITEPOINTER_0       (0x0001UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000001 */
#define TMC_RWP_WRITEPOINTER_1       (0x0002UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000002 */
#define TMC_RWP_WRITEPOINTER_2       (0x0004UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000004 */
#define TMC_RWP_WRITEPOINTER_3       (0x0008UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000008 */
#define TMC_RWP_WRITEPOINTER_4       (0x0010UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000010 */
#define TMC_RWP_WRITEPOINTER_5       (0x0020UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000020 */
#define TMC_RWP_WRITEPOINTER_6       (0x0040UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000040 */
#define TMC_RWP_WRITEPOINTER_7       (0x0080UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000080 */
#define TMC_RWP_WRITEPOINTER_8       (0x0100UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000100 */
#define TMC_RWP_WRITEPOINTER_9       (0x0200UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000200 */
#define TMC_RWP_WRITEPOINTER_10      (0x0400UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000400 */
#define TMC_RWP_WRITEPOINTER_11      (0x0800UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00000800 */
#define TMC_RWP_WRITEPOINTER_12      (0x1000UL << REGISTER_FIELD_OFFSET(TMC, RWP, WRITEPOINTER))  /*!< Value 0x00001000 */

/*!< Trigger counter register */
#define TMC_TRG_TRIGGER_OFFSET  (0U)
#define TMC_TRG_TRIGGER_MASK    (0x1FFFUL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Mask  0x7FFFFFFF */
#define TMC_TRG_TRIGGER_0       (0x0001UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000001 */
#define TMC_TRG_TRIGGER_1       (0x0002UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000002 */
#define TMC_TRG_TRIGGER_2       (0x0004UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000004 */
#define TMC_TRG_TRIGGER_3       (0x0008UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000008 */
#define TMC_TRG_TRIGGER_4       (0x0010UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000010 */
#define TMC_TRG_TRIGGER_5       (0x0020UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000020 */
#define TMC_TRG_TRIGGER_6       (0x0040UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000040 */
#define TMC_TRG_TRIGGER_7       (0x0080UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000080 */
#define TMC_TRG_TRIGGER_8       (0x0100UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000100 */
#define TMC_TRG_TRIGGER_9       (0x0200UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000200 */
#define TMC_TRG_TRIGGER_10      (0x0400UL << REGISTER_FIELD_OFFSET(TMC, TRG, TRIGGER))  /*!< Value 0x00000400 */

/*!< Control register */
#define TMC_CTL_TRACECAPTEN_OFFSET  (0U)
#define TMC_CTL_TRACECAPTEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CTL, TRACECAPTEN))  /*!< Mask  0x00000001 */

/*!< RAM write data register */
#define TMC_RWD_WRITEDATA_OFFSET  (0U)
#define TMC_RWD_WRITEDATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Mask  0x7FFFFFFF */
#define TMC_RWD_WRITEDATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000001 */
#define TMC_RWD_WRITEDATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000002 */
#define TMC_RWD_WRITEDATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000004 */
#define TMC_RWD_WRITEDATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000008 */
#define TMC_RWD_WRITEDATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000010 */
#define TMC_RWD_WRITEDATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000020 */
#define TMC_RWD_WRITEDATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000040 */
#define TMC_RWD_WRITEDATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000080 */
#define TMC_RWD_WRITEDATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000100 */
#define TMC_RWD_WRITEDATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000200 */
#define TMC_RWD_WRITEDATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000400 */
#define TMC_RWD_WRITEDATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00000800 */
#define TMC_RWD_WRITEDATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00001000 */
#define TMC_RWD_WRITEDATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00002000 */
#define TMC_RWD_WRITEDATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00004000 */
#define TMC_RWD_WRITEDATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00008000 */
#define TMC_RWD_WRITEDATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00010000 */
#define TMC_RWD_WRITEDATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00020000 */
#define TMC_RWD_WRITEDATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00040000 */
#define TMC_RWD_WRITEDATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00080000 */
#define TMC_RWD_WRITEDATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00100000 */
#define TMC_RWD_WRITEDATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00200000 */
#define TMC_RWD_WRITEDATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00400000 */
#define TMC_RWD_WRITEDATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x00800000 */
#define TMC_RWD_WRITEDATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x01000000 */
#define TMC_RWD_WRITEDATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x02000000 */
#define TMC_RWD_WRITEDATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x04000000 */
#define TMC_RWD_WRITEDATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x08000000 */
#define TMC_RWD_WRITEDATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x10000000 */
#define TMC_RWD_WRITEDATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x20000000 */
#define TMC_RWD_WRITEDATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x40000000 */
#define TMC_RWD_WRITEDATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, RWD, WRITEDATA))  /*!< Value 0x80000000 */

/*!< Mode register */
#define TMC_MODE_MODE_OFFSET  (0U)
#define TMC_MODE_MODE_MASK    (0x3UL << REGISTER_FIELD_OFFSET(TMC, MODE, MODE))  /*!< Mask  0x00000003 */

/*!< Latched buffer fill level register */
#define TMC_LBUFLEVEL_LBUFLEVEL_OFFSET  (0U)
#define TMC_LBUFLEVEL_LBUFLEVEL_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Mask  0x7FFFFFFF */
#define TMC_LBUFLEVEL_LBUFLEVEL_0       (0x001UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000001 */
#define TMC_LBUFLEVEL_LBUFLEVEL_1       (0x002UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000002 */
#define TMC_LBUFLEVEL_LBUFLEVEL_2       (0x004UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000004 */
#define TMC_LBUFLEVEL_LBUFLEVEL_3       (0x008UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000008 */
#define TMC_LBUFLEVEL_LBUFLEVEL_4       (0x010UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000010 */
#define TMC_LBUFLEVEL_LBUFLEVEL_5       (0x020UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000020 */
#define TMC_LBUFLEVEL_LBUFLEVEL_6       (0x040UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000040 */
#define TMC_LBUFLEVEL_LBUFLEVEL_7       (0x080UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000080 */
#define TMC_LBUFLEVEL_LBUFLEVEL_8       (0x100UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000100 */
#define TMC_LBUFLEVEL_LBUFLEVEL_9       (0x200UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000200 */
#define TMC_LBUFLEVEL_LBUFLEVEL_10      (0x400UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000400 */
#define TMC_LBUFLEVEL_LBUFLEVEL_11      (0x800UL << REGISTER_FIELD_OFFSET(TMC, LBUFLEVEL, LBUFLEVEL))  /*!< Value 0x00000800 */

/*!< Current buffer fill level register */
#define TMC_CBUFLEVEL_CBUFLEVEL_OFFSET  (0U)
#define TMC_CBUFLEVEL_CBUFLEVEL_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Mask  0x7FFFFFFF */
#define TMC_CBUFLEVEL_CBUFLEVEL_0       (0x001UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000001 */
#define TMC_CBUFLEVEL_CBUFLEVEL_1       (0x002UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000002 */
#define TMC_CBUFLEVEL_CBUFLEVEL_2       (0x004UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000004 */
#define TMC_CBUFLEVEL_CBUFLEVEL_3       (0x008UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000008 */
#define TMC_CBUFLEVEL_CBUFLEVEL_4       (0x010UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000010 */
#define TMC_CBUFLEVEL_CBUFLEVEL_5       (0x020UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000020 */
#define TMC_CBUFLEVEL_CBUFLEVEL_6       (0x040UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000040 */
#define TMC_CBUFLEVEL_CBUFLEVEL_7       (0x080UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000080 */
#define TMC_CBUFLEVEL_CBUFLEVEL_8       (0x100UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000100 */
#define TMC_CBUFLEVEL_CBUFLEVEL_9       (0x200UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000200 */
#define TMC_CBUFLEVEL_CBUFLEVEL_10      (0x400UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000400 */
#define TMC_CBUFLEVEL_CBUFLEVEL_11      (0x800UL << REGISTER_FIELD_OFFSET(TMC, CBUFLEVEL, CBUFLEVEL))  /*!< Value 0x00000800 */

/*!< Buffer level watermark register */
#define TMC_BUFWM_BUFWM_OFFSET  (0U)
#define TMC_BUFWM_BUFWM_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Mask  0x7FFFFFFF */
#define TMC_BUFWM_BUFWM_0       (0x001UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000001 */
#define TMC_BUFWM_BUFWM_1       (0x002UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000002 */
#define TMC_BUFWM_BUFWM_2       (0x004UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000004 */
#define TMC_BUFWM_BUFWM_3       (0x008UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000008 */
#define TMC_BUFWM_BUFWM_4       (0x010UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000010 */
#define TMC_BUFWM_BUFWM_5       (0x020UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000020 */
#define TMC_BUFWM_BUFWM_6       (0x040UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000040 */
#define TMC_BUFWM_BUFWM_7       (0x080UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000080 */
#define TMC_BUFWM_BUFWM_8       (0x100UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000100 */
#define TMC_BUFWM_BUFWM_9       (0x200UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000200 */
#define TMC_BUFWM_BUFWM_10      (0x400UL << REGISTER_FIELD_OFFSET(TMC, BUFWM, BUFWM))  /*!< Value 0x00000400 */

/*!< RAM read high pointer register */
#define TMC_RRPHI_RRPHI_OFFSET  (0U)
#define TMC_RRPHI_RRPHI_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Mask  0x7FFFFFFF */
#define TMC_RRPHI_RRPHI_0       (0x001UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000001 */
#define TMC_RRPHI_RRPHI_1       (0x002UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000002 */
#define TMC_RRPHI_RRPHI_2       (0x004UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000004 */
#define TMC_RRPHI_RRPHI_3       (0x008UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000008 */
#define TMC_RRPHI_RRPHI_4       (0x010UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000010 */
#define TMC_RRPHI_RRPHI_5       (0x020UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000020 */
#define TMC_RRPHI_RRPHI_6       (0x040UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000040 */
#define TMC_RRPHI_RRPHI_7       (0x080UL << REGISTER_FIELD_OFFSET(TMC, RRPHI, RRPHI))  /*!< Value 0x00000080 */

/*!< RAM write high pointer register */
#define TMC_RWPHI_RWPHI_OFFSET  (0U)
#define TMC_RWPHI_RWPHI_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Mask  0x7FFFFFFF */
#define TMC_RWPHI_RWPHI_0       (0x001UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000001 */
#define TMC_RWPHI_RWPHI_1       (0x002UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000002 */
#define TMC_RWPHI_RWPHI_2       (0x004UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000004 */
#define TMC_RWPHI_RWPHI_3       (0x008UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000008 */
#define TMC_RWPHI_RWPHI_4       (0x010UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000010 */
#define TMC_RWPHI_RWPHI_5       (0x020UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000020 */
#define TMC_RWPHI_RWPHI_6       (0x040UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000040 */
#define TMC_RWPHI_RWPHI_7       (0x080UL << REGISTER_FIELD_OFFSET(TMC, RWPHI, RWPHI))  /*!< Value 0x00000080 */

/*!< AXI control register */
#define TMC_AXICTL_WRBURSTLEN_OFFSET         (8U)
#define TMC_AXICTL_WRBURSTLEN_MASK           (0xFUL << REGISTER_FIELD_OFFSET(TMC, AXICTL, WRBURSTLEN))         /*!< Mask  0x000000F0 */

#define TMC_AXICTL_SCATTERGATHERMODE_OFFSET  (7U)
#define TMC_AXICTL_SCATTERGATHERMODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, SCATTERGATHERMODE))  /*!< Mask  0x00000080 */

#define TMC_AXICTL_CACHECTRLBIT3_OFFSET      (5U)
#define TMC_AXICTL_CACHECTRLBIT3_MASK        (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, CACHECTRLBIT3))      /*!< Mask  0x00000020 */

#define TMC_AXICTL_CACHECTRLBIT2_OFFSET      (4U)
#define TMC_AXICTL_CACHECTRLBIT2_MASK        (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, CACHECTRLBIT2))      /*!< Mask  0x00000010 */

#define TMC_AXICTL_CACHECTRLBIT1_OFFSET      (3U)
#define TMC_AXICTL_CACHECTRLBIT1_MASK        (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, CACHECTRLBIT1))      /*!< Mask  0x00000008 */

#define TMC_AXICTL_CACHECTRLBIT0_OFFSET      (2U)
#define TMC_AXICTL_CACHECTRLBIT0_MASK        (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, CACHECTRLBIT0))      /*!< Mask  0x00000004 */

#define TMC_AXICTL_PROTCTRLBIT1_OFFSET       (1U)
#define TMC_AXICTL_PROTCTRLBIT1_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, PROTCTRLBIT1))       /*!< Mask  0x00000002 */

#define TMC_AXICTL_PROTCTRLBIT0_OFFSET       (0U)
#define TMC_AXICTL_PROTCTRLBIT0_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, AXICTL, PROTCTRLBIT0))       /*!< Mask  0x00000001 */

// Values of the maximum number of data transfers of every burt on the AXI master interface
#define TMC_MAXAXIBURST_1   (0x0UL)  /*!< Value 0x00000000 */
#define TMC_MAXAXIBURST_2   (0x1UL)  /*!< Value 0x00000001 */
#define TMC_MAXAXIBURST_3   (0x2UL)  /*!< Value 0x00000002 */
#define TMC_MAXAXIBURST_4   (0x3UL)  /*!< Value 0x00000003 */
#define TMC_MAXAXIBURST_5   (0x4UL)  /*!< Value 0x00000004 */
#define TMC_MAXAXIBURST_6   (0x5UL)  /*!< Value 0x00000005 */
#define TMC_MAXAXIBURST_7   (0x6UL)  /*!< Value 0x00000006 */
#define TMC_MAXAXIBURST_8   (0x7UL)  /*!< Value 0x00000007 */
#define TMC_MAXAXIBURST_9   (0x8UL)  /*!< Value 0x00000008 */
#define TMC_MAXAXIBURST_10  (0x9UL)  /*!< Value 0x00000009 */
#define TMC_MAXAXIBURST_11  (0xAUL)  /*!< Value 0x0000000A */
#define TMC_MAXAXIBURST_12  (0xBUL)  /*!< Value 0x0000000B */
#define TMC_MAXAXIBURST_13  (0xCUL)  /*!< Value 0x0000000C */
#define TMC_MAXAXIBURST_14  (0xDUL)  /*!< Value 0x0000000D */
#define TMC_MAXAXIBURST_15  (0xEUL)  /*!< Value 0x0000000E */
#define TMC_MAXAXIBURST_16  (0xFUL)  /*!< Value 0x0000000F */

// Values of trsce memory organization bit
#define TMC_TRACEMEMORYORGANIZATION_SINGLEBLOCK    (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRACEMEMORYORGANIZATION_MULTIPLEBLOCK  (0x1UL)  /*!< Value 0x00000001 */

// Values of write cache allocate bit (AXI cache bit 3)
#define TMC_WRITECACHE_NOTALLOCATED  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_WRITECACHE_ALLOCATED     (0x1UL)  /*!< Value 0x00000001 */

// Values of read cache allocate bit (AXI cache bit 2)
#define TMC_READCACHE_NOTALLOCATED  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_READCACHE_ALLOCATED     (0x1UL)  /*!< Value 0x00000001 */

// Values of cache enable bit (AXI cache bit 1)
#define TMC_CACHEABLE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_CACHEABLE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of buffer enable bit (AXI cache bit 0)
#define TMC_BUFFERABLE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_BUFFERABLE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of secure access enable bit (AXI protection bit 1)
#define TMC_SECUREACCESS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_SECUREACCESS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of access type bit (AXI protection bit 0)
#define TMC_ACCESSTYPE_NORMALACCESS      (0x0UL)  /*!< Value 0x00000000 */
#define TMC_ACCESSTYPE_PRIVILEGEDACCESS  (0x1UL)  /*!< Value 0x00000001 */

/*!< Data buffer address low register */
#define TMC_DBALO_BUFADDRLO_OFFSET  (0U)
#define TMC_DBALO_BUFADDRLO_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Mask  0x7FFFFFFF */
#define TMC_DBALO_BUFADDRLO_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000001 */
#define TMC_DBALO_BUFADDRLO_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000002 */
#define TMC_DBALO_BUFADDRLO_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000004 */
#define TMC_DBALO_BUFADDRLO_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000008 */
#define TMC_DBALO_BUFADDRLO_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000010 */
#define TMC_DBALO_BUFADDRLO_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000020 */
#define TMC_DBALO_BUFADDRLO_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000040 */
#define TMC_DBALO_BUFADDRLO_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000080 */
#define TMC_DBALO_BUFADDRLO_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000100 */
#define TMC_DBALO_BUFADDRLO_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000200 */
#define TMC_DBALO_BUFADDRLO_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000400 */
#define TMC_DBALO_BUFADDRLO_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00000800 */
#define TMC_DBALO_BUFADDRLO_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00001000 */
#define TMC_DBALO_BUFADDRLO_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00002000 */
#define TMC_DBALO_BUFADDRLO_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00004000 */
#define TMC_DBALO_BUFADDRLO_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00008000 */
#define TMC_DBALO_BUFADDRLO_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00010000 */
#define TMC_DBALO_BUFADDRLO_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00020000 */
#define TMC_DBALO_BUFADDRLO_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00040000 */
#define TMC_DBALO_BUFADDRLO_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00080000 */
#define TMC_DBALO_BUFADDRLO_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00100000 */
#define TMC_DBALO_BUFADDRLO_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00200000 */
#define TMC_DBALO_BUFADDRLO_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00400000 */
#define TMC_DBALO_BUFADDRLO_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x00800000 */
#define TMC_DBALO_BUFADDRLO_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x01000000 */
#define TMC_DBALO_BUFADDRLO_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x02000000 */
#define TMC_DBALO_BUFADDRLO_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x04000000 */
#define TMC_DBALO_BUFADDRLO_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x08000000 */
#define TMC_DBALO_BUFADDRLO_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x10000000 */
#define TMC_DBALO_BUFADDRLO_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x20000000 */
#define TMC_DBALO_BUFADDRLO_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x40000000 */
#define TMC_DBALO_BUFADDRLO_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, DBALO, BUFADDRLO))  /*!< Value 0x80000000 */

/*!< Data buffer address high register */
#define TMC_DBAHI_BUFADDRHI_OFFSET  (0U)
#define TMC_DBAHI_BUFADDRHI_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Mask  0x7FFFFFFF */
#define TMC_DBAHI_BUFADDRHI_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000001 */
#define TMC_DBAHI_BUFADDRHI_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000002 */
#define TMC_DBAHI_BUFADDRHI_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000004 */
#define TMC_DBAHI_BUFADDRHI_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000008 */
#define TMC_DBAHI_BUFADDRHI_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000010 */
#define TMC_DBAHI_BUFADDRHI_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000020 */
#define TMC_DBAHI_BUFADDRHI_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000040 */
#define TMC_DBAHI_BUFADDRHI_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, DBAHI, BUFADDRHI))  /*!< Value 0x00000080 */

/*!< Formatter and flush status register */
#define TMC_FFSR_FTSTOPPED_OFFSET  (1U)
#define TMC_FFSR_FTSTOPPED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFSR, FTSTOPPED))  /*!< Mask  0x00000002 */

#define TMC_FFSR_FLINPROG_OFFSET   (0U)
#define TMC_FFSR_FLINPROG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFSR, FLINPROG))   /*!< Mask  0x00000001 */

// Values of formatter stopped status bit
#define TMC_FORMATTER_RUNNING  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_FORMATTER_STOPPED  (0x1UL)  /*!< Value 0x00000001 */

// Values of flushing in progress status bit
#define TMC_FLUSHING_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define TMC_FLUSHING_INPROGRESS  (0x1UL)  /*!< Value 0x00000001 */

/*!< Formatter and flush control register */
#define TMC_FFCR_DRAINBUFFER_OFFSET    (14U)
#define TMC_FFCR_DRAINBUFFER_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, DRAINBUFFER))    /*!< Mask  0x00004000 */

#define TMC_FFCR_STOPONTRIGEVT_OFFSET  (13U)
#define TMC_FFCR_STOPONTRIGEVT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, STOPONTRIGEVT))  /*!< Mask  0x00002000 */

#define TMC_FFCR_STOPONFLIN_OFFSET     (12U)
#define TMC_FFCR_STOPONFLIN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, STOPONFLIN))     /*!< Mask  0x00001000 */

#define TMC_FFCR_TRIGONFL_OFFSET       (10U)
#define TMC_FFCR_TRIGONFL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, TRIGONFL))       /*!< Mask  0x00000400 */

#define TMC_FFCR_TRIGONTRIGEVT_OFFSET  (9U)
#define TMC_FFCR_TRIGONTRIGEVT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, TRIGONTRIGEVT))  /*!< Mask  0x00000200 */

#define TMC_FFCR_TRIGONFLIN_OFFSET     (8U)
#define TMC_FFCR_TRIGONFLIN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, TRIGONFLIN))     /*!< Mask  0x00000100 */

#define TMC_FFCR_FLUSHMAN_OFFSET       (6U)
#define TMC_FFCR_FLUSHMAN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, FLUSHMAN))       /*!< Mask  0x00000040 */

#define TMC_FFCR_FONTRIGEVT_OFFSET     (5U)
#define TMC_FFCR_FONTRIGEVT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, FONTRIGEVT))     /*!< Mask  0x00000020 */

#define TMC_FFCR_FONFLIN_OFFSET        (4U)
#define TMC_FFCR_FONFLIN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, FONFLIN))        /*!< Mask  0x00000010 */

#define TMC_FFCR_ENTI_OFFSET           (1U)
#define TMC_FFCR_ENTI_MASK             (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, ENTI))           /*!< Mask  0x00000002 */

#define TMC_FFCR_ENFT_OFFSET           (0U)
#define TMC_FFCR_ENFT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(TMC, FFCR, ENFT))           /*!< Mask  0x00000001 */

// Values of trace data drained through ATB interface enable bit
#define TMC_ATBTRACEDATADRAIN_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_ATBTRACEDATADRAIN_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trace capture stop on trigger event enable bit
#define TMC_TRACECAPTUREONTRIGGEREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRACECAPTUREONTRIGGEREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trace capture stop on flush completition enable bit
#define TMC_TRACECAPTUREONFLUSHCOMPLETE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRACECAPTUREONFLUSHCOMPLETE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger on flush completition enable bit
#define TMC_TRIGGERONFLUSHCOMPLETE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRIGGERONFLUSHCOMPLETE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger on trigger event enable bit
#define TMC_TRIGGERONTRIGGEREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRIGGERONTRIGGEREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of TRIGIN transition detection enable bit
#define TMC_TRIGINTRANSITIONDETECTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRIGINTRANSITIONDETECTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of manual flush enable bit
#define TMC_MANUALFLUSH_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_MANUALFLUSH_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of flush on trigger event enable bit
#define TMC_FLUSHONTRIGGEREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_FLUSHONTRIGGEREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of FLUSHIN transition detection enable bit
#define TMC_FLUSHINTRANSITIONDETECTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_FLUSHINTRANSITIONDETECTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger insertion enable bit
#define TMC_TRIGGERINSERTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_TRIGGERINSERTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of formatting enable bit
#define TMC_FORMATTING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_FORMATTING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Periodic sychronization counter register */
#define TMC_PSCR_PSCOUNT_OFFSET  (0U)
#define TMC_PSCR_PSCOUNT_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(TMC, PSCR, PSCOUNT))  /*!< Mask  0x0000001F */

// Values of the reload value of the synchronization counter
#define TMC_SYNCHRONIZATIONCOUNTER_DISABLE    (0x00UL)  /*!< Value 0x00000000 */
#define TMC_SYNCHRONIZATIONCOUNTER_128        (0x07UL)  /*!< Value 0x00000007 */
#define TMC_SYNCHRONIZATIONCOUNTER_256        (0x08UL)  /*!< Value 0x00000008 */
#define TMC_SYNCHRONIZATIONCOUNTER_512        (0x09UL)  /*!< Value 0x00000009 */
#define TMC_SYNCHRONIZATIONCOUNTER_1024       (0x0AUL)  /*!< Value 0x0000000A */
#define TMC_SYNCHRONIZATIONCOUNTER_2048       (0x0BUL)  /*!< Value 0x0000000B */
#define TMC_SYNCHRONIZATIONCOUNTER_4096       (0x0CUL)  /*!< Value 0x0000000C */
#define TMC_SYNCHRONIZATIONCOUNTER_8192       (0x0DUL)  /*!< Value 0x0000000D */
#define TMC_SYNCHRONIZATIONCOUNTER_16384      (0x0EUL)  /*!< Value 0x0000000E */
#define TMC_SYNCHRONIZATIONCOUNTER_32784      (0x0FUL)  /*!< Value 0x0000800F */
#define TMC_SYNCHRONIZATIONCOUNTER_65536      (0x10UL)  /*!< Value 0x00000010 */
#define TMC_SYNCHRONIZATIONCOUNTER_131072     (0x11UL)  /*!< Value 0x00000011 */
#define TMC_SYNCHRONIZATIONCOUNTER_262144     (0x12UL)  /*!< Value 0x00000012 */
#define TMC_SYNCHRONIZATIONCOUNTER_524288     (0x13UL)  /*!< Value 0x00000013 */
#define TMC_SYNCHRONIZATIONCOUNTER_1048576    (0x14UL)  /*!< Value 0x00000014 */
#define TMC_SYNCHRONIZATIONCOUNTER_2097152    (0x15UL)  /*!< Value 0x00000015 */
#define TMC_SYNCHRONIZATIONCOUNTER_4194304    (0x16UL)  /*!< Value 0x00000016 */
#define TMC_SYNCHRONIZATIONCOUNTER_8388604    (0x17UL)  /*!< Value 0x00000017 */
#define TMC_SYNCHRONIZATIONCOUNTER_16777216   (0x18UL)  /*!< Value 0x00000018 */
#define TMC_SYNCHRONIZATIONCOUNTER_33554432   (0x19UL)  /*!< Value 0x00000019 */
#define TMC_SYNCHRONIZATIONCOUNTER_67108684   (0x1AUL)  /*!< Value 0x0000001A */
#define TMC_SYNCHRONIZATIONCOUNTER_134217728  (0x1BUL)  /*!< Value 0x0000001B */

/*!< Integration test AMBA Trace Bus (ATB) master data 0 register */
#define TMC_ITATBMDATA0_ATDATAMBIT127_OFFSET  (16U)
#define TMC_ITATBMDATA0_ATDATAMBIT127_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT127))  /*!< Mask  0x00010000 */

#define TMC_ITATBMDATA0_ATDATAMBIT119_OFFSET  (15U)
#define TMC_ITATBMDATA0_ATDATAMBIT119_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT119))  /*!< Mask  0x00008000 */

#define TMC_ITATBMDATA0_ATDATAMBIT111_OFFSET  (14U)
#define TMC_ITATBMDATA0_ATDATAMBIT111_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT111))  /*!< Mask  0x00004000 */

#define TMC_ITATBMDATA0_ATDATAMBIT103_OFFSET  (13U)
#define TMC_ITATBMDATA0_ATDATAMBIT103_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT103))  /*!< Mask  0x00002000 */

#define TMC_ITATBMDATA0_ATDATAMBIT95_OFFSET   (12U)
#define TMC_ITATBMDATA0_ATDATAMBIT95_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT95))   /*!< Mask  0x00001000 */

#define TMC_ITATBMDATA0_ATDATAMBIT87_OFFSET   (11U)
#define TMC_ITATBMDATA0_ATDATAMBIT87_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT87))   /*!< Mask  0x00000800 */

#define TMC_ITATBMDATA0_ATDATAMBIT79_OFFSET   (10U)
#define TMC_ITATBMDATA0_ATDATAMBIT79_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT79))   /*!< Mask  0x00000400 */

#define TMC_ITATBMDATA0_ATDATAMBIT71_OFFSET   (9U)
#define TMC_ITATBMDATA0_ATDATAMBIT71_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT71))   /*!< Mask  0x00000200 */

#define TMC_ITATBMDATA0_ATDATAMBIT63_OFFSET   (8U)
#define TMC_ITATBMDATA0_ATDATAMBIT63_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT63))   /*!< Mask  0x00000100 */

#define TMC_ITATBMDATA0_ATDATAMBIT55_OFFSET   (7U)
#define TMC_ITATBMDATA0_ATDATAMBIT55_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT55))   /*!< Mask  0x00000080 */

#define TMC_ITATBMDATA0_ATDATAMBIT47_OFFSET   (6U)
#define TMC_ITATBMDATA0_ATDATAMBIT47_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT47))   /*!< Mask  0x00000040 */

#define TMC_ITATBMDATA0_ATDATAMBIT39_OFFSET   (5U)
#define TMC_ITATBMDATA0_ATDATAMBIT39_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT39))   /*!< Mask  0x00000020 */

#define TMC_ITATBMDATA0_ATDATAMBIT31_OFFSET   (4U)
#define TMC_ITATBMDATA0_ATDATAMBIT31_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT31))   /*!< Mask  0x00000010 */

#define TMC_ITATBMDATA0_ATDATAMBIT23_OFFSET   (3U)
#define TMC_ITATBMDATA0_ATDATAMBIT23_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT23))   /*!< Mask  0x00000008 */

#define TMC_ITATBMDATA0_ATDATAMBIT15_OFFSET   (2U)
#define TMC_ITATBMDATA0_ATDATAMBIT15_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT15))   /*!< Mask  0x00000004 */

#define TMC_ITATBMDATA0_ATDATAMBIT7_OFFSET    (1U)
#define TMC_ITATBMDATA0_ATDATAMBIT7_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT7))    /*!< Mask  0x00000002 */

#define TMC_ITATBMDATA0_ATDATAMBIT0_OFFSET    (0U)
#define TMC_ITATBMDATA0_ATDATAMBIT0_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMDATA0, ATDATAMBIT0))    /*!< Mask  0x00000001 */

// Values of trace data drained through ATB interface enable bit
#define TMC_ATB_LOGIC0  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_ATB_LOGIC1  (0x1UL)  /*!< Value 0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) master interface control 2 register */
#define TMC_ITATBMCTR2_SYNCREQM_OFFSET  (2U)
#define TMC_ITATBMCTR2_SYNCREQM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR2, SYNCREQM))  /*!< Mask  0x00000004 */

#define TMC_ITATBMCTR2_AFVALIDM_OFFSET  (1U)
#define TMC_ITATBMCTR2_AFVALIDM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR2, AFVALIDM))  /*!< Mask  0x00000002 */

#define TMC_ITATBMCTR2_ATREADYM_OFFSET  (0U)
#define TMC_ITATBMCTR2_ATREADYM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR2, ATREADYM))  /*!< Mask  0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) master interface control 1 register */
#define TMC_ITATBMCTR1_ATIDM_OFFSET  (0U)
#define TMC_ITATBMCTR1_ATIDM_MASK    (0x3FUL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Mask  0x0000003F */
#define TMC_ITATBMCTR1_ATIDM_0       (0x01UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000001 */
#define TMC_ITATBMCTR1_ATIDM_1       (0x02UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000002 */
#define TMC_ITATBMCTR1_ATIDM_2       (0x04UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000004 */
#define TMC_ITATBMCTR1_ATIDM_3       (0x08UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000008 */
#define TMC_ITATBMCTR1_ATIDM_4       (0x10UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000010 */
#define TMC_ITATBMCTR1_ATIDM_5       (0x20UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000020 */
#define TMC_ITATBMCTR1_ATIDM_6       (0x40UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR1, ATIDM))  /*!< Value 0x00000040 */

/*!< Integration test AMBA Trace Bus (ATB) master interface control 0 register */
#define TMC_ITATBMCTR0_ATBYTEM_OFFSET   (8U)
#define TMC_ITATBMCTR0_ATBYTEM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR0, ATBYTESM))  /*!< Mask  0x00000F00 */

#define TMC_ITATBMCTR0_AFREADYM_OFFSET  (1U)
#define TMC_ITATBMCTR0_AFREADYM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR0, ATREADYM))  /*!< Mask  0x00000002 */

#define TMC_ITATBMCTR0_ATVALIDM_OFFSET  (0U)
#define TMC_ITATBMCTR0_ATVALIDM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBMCTR0, AFVALIDM))  /*!< Mask  0x00000001 */

/*!< Integration test miscellaneous output register */
#define TMC_ITMISCOP0_FULL_OFFSET     (1U)
#define TMC_ITMISCOP0_FULL_MASK       (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITMISCOP0, FULL))     /*!< Mask  0x00000002 */

#define TMC_ITMISCOP0_ACQCOMP_OFFSET  (0U)
#define TMC_ITMISCOP0_ACQCOMP_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITMISCOP0, ACQCOMP))  /*!< Mask  0x00000001 */

/*!< Integration test trigger in and flush in register */
#define TMC_ITTRFLIN_FLUSHIN_OFFSET  (1U)
#define TMC_ITTRFLIN_FLUSHIN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITTRFLIN, FLUSHIN))  /*!< Mask  0x00000002 */

#define TMC_ITTRFLIN_TRIGIN_OFFSET   (0U)
#define TMC_ITTRFLIN_TRIGIN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITTRFLIN, TRIGIN))   /*!< Mask  0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) data 0 register */
#define TMC_ITATBDATA0_ATDATASBIT127_OFFSET  (16U)
#define TMC_ITATBDATA0_ATDATASBIT127_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT127))  /*!< Mask  0x00010000 */

#define TMC_ITATBDATA0_ATDATASBIT119_OFFSET  (15U)
#define TMC_ITATBDATA0_ATDATASBIT119_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT119))  /*!< Mask  0x00008000 */

#define TMC_ITATBDATA0_ATDATASBIT111_OFFSET  (14U)
#define TMC_ITATBDATA0_ATDATASBIT111_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT111))  /*!< Mask  0x00004000 */

#define TMC_ITATBDATA0_ATDATASBIT103_OFFSET  (13U)
#define TMC_ITATBDATA0_ATDATASBIT103_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT103))  /*!< Mask  0x00002000 */

#define TMC_ITATBDATA0_ATDATASBIT95_OFFSET   (12U)
#define TMC_ITATBDATA0_ATDATASBIT95_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT95))   /*!< Mask  0x00001000 */

#define TMC_ITATBDATA0_ATDATASBIT87_OFFSET   (11U)
#define TMC_ITATBDATA0_ATDATASBIT87_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT87))   /*!< Mask  0x00000800 */

#define TMC_ITATBDATA0_ATDATASBIT79_OFFSET   (10U)
#define TMC_ITATBDATA0_ATDATASBIT79_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT79))   /*!< Mask  0x00000400 */

#define TMC_ITATBDATA0_ATDATASBIT71_OFFSET   (9U)
#define TMC_ITATBDATA0_ATDATASBIT71_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT71))   /*!< Mask  0x00000200 */

#define TMC_ITATBDATA0_ATDATASBIT63_OFFSET   (8U)
#define TMC_ITATBDATA0_ATDATASBIT63_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT63))   /*!< Mask  0x00000100 */

#define TMC_ITATBDATA0_ATDATASBIT55_OFFSET   (7U)
#define TMC_ITATBDATA0_ATDATASBIT55_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT55))   /*!< Mask  0x00000080 */

#define TMC_ITATBDATA0_ATDATASBIT47_OFFSET   (6U)
#define TMC_ITATBDATA0_ATDATASBIT47_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT47))   /*!< Mask  0x00000040 */

#define TMC_ITATBDATA0_ATDATASBIT39_OFFSET   (5U)
#define TMC_ITATBDATA0_ATDATASBIT39_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT39))   /*!< Mask  0x00000020 */

#define TMC_ITATBDATA0_ATDATASBIT31_OFFSET   (4U)
#define TMC_ITATBDATA0_ATDATASBIT31_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT31))   /*!< Mask  0x00000010 */

#define TMC_ITATBDATA0_ATDATASBIT23_OFFSET   (3U)
#define TMC_ITATBDATA0_ATDATASBIT23_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT23))   /*!< Mask  0x00000008 */

#define TMC_ITATBDATA0_ATDATASBIT15_OFFSET   (2U)
#define TMC_ITATBDATA0_ATDATASBIT15_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT15))   /*!< Mask  0x00000004 */

#define TMC_ITATBDATA0_ATDATASBIT7_OFFSET    (1U)
#define TMC_ITATBDATA0_ATDATASBIT7_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT7))    /*!< Mask  0x00000002 */

#define TMC_ITATBDATA0_ATDATASBIT0_OFFSET    (0U)
#define TMC_ITATBDATA0_ATDATASBIT0_MASK      (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBDATA0, ATDATASBIT0))    /*!< Mask  0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) control 2 register */
#define TMC_ITATBCTR2_SYNCREQS_OFFSET  (1U)
#define TMC_ITATBCTR2_SYNCREQS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR2, SYNCREQS))  /*!< Mask  0x00000004 */

#define TMC_ITATBCTR2_AFVALIDS_OFFSET  (1U)
#define TMC_ITATBCTR2_AFVALIDS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR2, AFVALIDS))  /*!< Mask  0x00000002 */

#define TMC_ITATBCTR2_ATREADYS_OFFSET  (0U)
#define TMC_ITATBCTR2_ATREADYS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR2, ATREADYS))  /*!< Mask  0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) control 1 register */
#define TMC_ITATBCTR1_ATID_OFFSET  (0U)
#define TMC_ITATBCTR1_ATID_MASK    (0x3FUL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Mask  0x0000003F */
#define TMC_ITATBCTR1_ATID_0       (0x01UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000001 */
#define TMC_ITATBCTR1_ATID_1       (0x02UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000002 */
#define TMC_ITATBCTR1_ATID_2       (0x04UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000004 */
#define TMC_ITATBCTR1_ATID_3       (0x08UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000008 */
#define TMC_ITATBCTR1_ATID_4       (0x10UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000010 */
#define TMC_ITATBCTR1_ATID_5       (0x20UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000020 */
#define TMC_ITATBCTR1_ATID_6       (0x40UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR1, ATID))  /*!< Value 0x00000040 */

/*!< Integration test AMBA Trace Bus (ATB) control 0 register */
#define TMC_ITATBCTR0_ATBYTES_OFFSET  (8U)
#define TMC_ITATBCTR0_ATBYTES_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR0, ATBYTES))  /*!< Mask  0x00000F00 */

#define TMC_ITATBCTR0_AFREADY_OFFSET  (1U)
#define TMC_ITATBCTR0_AFREADY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR0, ATREADY))  /*!< Mask  0x00000002 */

#define TMC_ITATBCTR0_ATVALID_OFFSET  (0U)
#define TMC_ITATBCTR0_ATVALID_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITATBCTR0, AFVALID))  /*!< Mask  0x00000001 */

/*!< Integration mode control register */
#define TMC_ITCTRL_IME_OFFSET  (0U)
#define TMC_ITCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, ITCTRL, IME))  /*!< Mask  0x00000001 */

/*!< Claim tag set register */
#define TMC_CLAIMSET_CLAIMSET_OFFSET  (0U)
#define TMC_CLAIMSET_CLAIMSET_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, CLAIMSET, CLAIMSET))  /*!< Mask  0x0000000F */

// Values of claim tag set register bits
#define TMC_CLAIMSET_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMSET, CLAIMSET) + TMC_CLAIM_BIT3)
#define TMC_CLAIMSET_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMSET, BIT3))  /*!< Mask  0x00000008 */

#define TMC_CLAIMSET_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMSET, CLAIMSET) + TMC_CLAIM_BIT2)
#define TMC_CLAIMSET_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMSET, BIT2))  /*!< Mask  0x00000004 */

#define TMC_CLAIMSET_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMSET, CLAIMSET) + TMC_CLAIM_BIT1)
#define TMC_CLAIMSET_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMSET, BIT1))  /*!< Mask  0x00000002 */

#define TMC_CLAIMSET_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMSET, CLAIMSET) + TMC_CLAIM_BIT0)
#define TMC_CLAIMSET_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMSET, BIT0))  /*!< Mask  0x00000001 */

/*!< Claim tag clear register */
#define TMC_CLAIMCLR_CLAIMCLR_OFFSET  (0U)
#define TMC_CLAIMCLR_CLAIMCLR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, CLAIMCLR))  /*!< Mask  0x0000000F */

// Values of claim tag clear register bits
#define TMC_CLAIMCLR_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, CLAIMCLR) + TMC_CLAIM_BIT3)
#define TMC_CLAIMCLR_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, BIT3))  /*!< Mask  0x00000008 */

#define TMC_CLAIMCLR_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, CLAIMCLR) + TMC_CLAIM_BIT2)
#define TMC_CLAIMCLR_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, BIT2))  /*!< Mask  0x00000004 */

#define TMC_CLAIMCLR_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, CLAIMCLR) + TMC_CLAIM_BIT1)
#define TMC_CLAIMCLR_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, BIT1))  /*!< Mask  0x00000002 */

#define TMC_CLAIMCLR_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, CLAIMCLR) + TMC_CLAIM_BIT0)
#define TMC_CLAIMCLR_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, CLAIMCLR, BIT0))  /*!< Mask  0x00000001 */

/*!< CoreSight lock access register */
#define TMC_LAR_KEY_OFFSET  (0U)
#define TMC_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define TMC_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000001 */
#define TMC_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000002 */
#define TMC_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000004 */
#define TMC_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000008 */
#define TMC_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000010 */
#define TMC_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000020 */
#define TMC_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000040 */
#define TMC_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000080 */
#define TMC_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000100 */
#define TMC_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000200 */
#define TMC_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000400 */
#define TMC_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00000800 */
#define TMC_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00001000 */
#define TMC_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00002000 */
#define TMC_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00004000 */
#define TMC_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00008000 */
#define TMC_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00010000 */
#define TMC_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00020000 */
#define TMC_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00040000 */
#define TMC_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00080000 */
#define TMC_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00100000 */
#define TMC_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00200000 */
#define TMC_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00400000 */
#define TMC_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x00800000 */
#define TMC_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x01000000 */
#define TMC_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x02000000 */
#define TMC_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x04000000 */
#define TMC_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x08000000 */
#define TMC_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x10000000 */
#define TMC_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x20000000 */
#define TMC_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x40000000 */
#define TMC_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, LAR, KEY))  /*!< Value 0x80000000 */

/*!< CoreSight lock status register */
#define TMC_LSR_LOCKTYPE_OFFSET   (2U)
#define TMC_LSR_LOCKTYPE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TMC, LSR, LOCKTYPE))   /*!< Mask  0x00000004 */

#define TMC_LSR_LOCKGRANT_OFFSET  (1U)
#define TMC_LSR_LOCKGRANT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, LSR, LOCKGRANT))  /*!< Mask  0x00000002 */

#define TMC_LSR_LOCKEXIST_OFFSET  (0U)
#define TMC_LSR_LOCKEXIST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TMC, LSR, LOCKEXIST))  /*!< Mask  0x00000001 */

/*!< Authentication status register */
#define TMC_AUTHSTATUS_SNID_OFFSET   (6U)
#define TMC_AUTHSTATUS_SNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(TMC, AUTHSTATUS, SNID))   /*!< Mask  0x000000C0 - security level for secure non-invasive debug */

#define TMC_AUTHSTATUS_SID_OFFSET    (4U)
#define TMC_AUTHSTATUS_SID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(TMC, AUTHSTATUS, SID))    /*!< Mask  0x00000030 - security level for secure invasive debug */

#define TMC_AUTHSTATUS_NSNID_OFFSET  (2U)
#define TMC_AUTHSTATUS_NSNID_MASK    (0x3UL << REGISTER_FIELD_OFFSET(TMC, AUTHSTATUS, NSNID))  /*!< Mask  0x0000000C - security level for non secure non-invasive debug */

#define TMC_AUTHSTATUS_NSID_OFFSET   (0U)
#define TMC_AUTHSTATUS_NSID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(TMC, AUTHSTATUS, NSID))   /*!< Mask  0x00000003 - security level for non secure invasive debug */

/*!< Device configuration register */
#define TMC_DEVID_WBUF_DEPTH_OFFSET      (11U)
#define TMC_DEVID_WBUF_DEPTH_MASK        (0x7UL << REGISTER_FIELD_OFFSET(TMC, DEVID, WBUF_DEPTH))       /*!< Mask  0x00003800 */

#define TMC_DEVID_MEMWIDTH_OFFSET        (8U)
#define TMC_DEVID_MEMWIDTH_MASK          (0x7UL << REGISTER_FIELD_OFFSET(TMC, DEVID, MEMWIDTH))         /*!< Mask  0x00000700 */

#define TMC_DEVID_CONFIGTYPE_OFFSET      (6U)
#define TMC_DEVID_CONFIGTYPE_MASK        (0x3UL << REGISTER_FIELD_OFFSET(TMC, DEVID, CONFIGTYPE))       /*!< Mask  0x000000C0 */

#define TMC_DEVID_CLKSCHEME_OFFSET       (5U)
#define TMC_DEVID_CLKSCHEME_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, DEVID, CLKSCHEME))        /*!< Mask  0x00000020 */

#define TMC_DEVID_ATBINPORTCOUNT_OFFSET  (0U)
#define TMC_DEVID_ATBINPORTCOUNT_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(TMC, DEVID, ATBINPORTCOUNT))  /*!< Mask  0x0000001F */

// Values of the number of entries in the write buffer in ETR configuration
#define TMC_FIFOSIZE_4BIT    (0x2UL)  /*!< Value 0x00000002 */
#define TMC_FIFOSIZE_8BIT    (0x3UL)  /*!< Value 0x00000003 */
#define TMC_FIFOSIZE_16BIT   (0x4UL)  /*!< Value 0x00000004 */
#define TMC_FIFOSIZE_32BIT   (0x5UL)  /*!< Value 0x00000005 */

// Values of the width of the memory interface databus
#define TMC_MEMORYINTERACE_32BIT   (0x2UL)  /*!< Value 0x00000002 */
#define TMC_MEMORYINTERACE_64BIT   (0x3UL)  /*!< Value 0x00000003 */
#define TMC_MEMORYINTERACE_128BIT  (0x4UL)  /*!< Value 0x00000004 */
#define TMC_MEMORYINTERACE_256BIT  (0x5UL)  /*!< Value 0x00000005 */

// Values of TMC configuration types
#define TMC_CONFIGTYPE_ETB  (0x0UL)  /*!< Value 0x00000000 */
#define TMC_CONFIGTYPE_ETR  (0x1UL)  /*!< Value 0x00000001 */
#define TMC_CONFIGTYPE_TMC  (0x2UL)  /*!< Value 0x00000002 */

// Values of software lock status bit
#define TMC_ATBTRACECLKRELATIONSHIP_SYNCHRONOUS   (0x0UL)  /*!< Value 0x00000000 */
#define TMC_ATBTRACECLKRELATIONSHIP_ASYNCHRONOUS  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing the number/type of AMBA Trace Bus (ATB) input port multiplexing
#define TMC_NUMATBINPUTPORT_NONE  (0x00UL)  /*!< Value 0x00000000 */
#define TMC_NUMATBINPUTPORT_1     (0x01UL)  /*!< Value 0x00000001 */
#define TMC_NUMATBINPUTPORT_2     (0x02UL)  /*!< Value 0x00000002 */
#define TMC_NUMATBINPUTPORT_3     (0x03UL)  /*!< Value 0x00000003 */
#define TMC_NUMATBINPUTPORT_4     (0x04UL)  /*!< Value 0x00000004 */
#define TMC_NUMATBINPUTPORT_5     (0x05UL)  /*!< Value 0x00000005 */
#define TMC_NUMATBINPUTPORT_6     (0x06UL)  /*!< Value 0x00000006 */
#define TMC_NUMATBINPUTPORT_7     (0x07UL)  /*!< Value 0x00000007 */
#define TMC_NUMATBINPUTPORT_8     (0x08UL)  /*!< Value 0x00000008 */
#define TMC_NUMATBINPUTPORT_9     (0x09UL)  /*!< Value 0x00000009 */
#define TMC_NUMATBINPUTPORT_10    (0x0AUL)  /*!< Value 0x0000000A */
#define TMC_NUMATBINPUTPORT_11    (0x0BUL)  /*!< Value 0x0000000B */
#define TMC_NUMATBINPUTPORT_12    (0x0CUL)  /*!< Value 0x0000000C */
#define TMC_NUMATBINPUTPORT_13    (0x0DUL)  /*!< Value 0x0000000D */
#define TMC_NUMATBINPUTPORT_14    (0x0EUL)  /*!< Value 0x0000000E */
#define TMC_NUMATBINPUTPORT_15    (0x0FUL)  /*!< Value 0x0000000F */
#define TMC_NUMATBINPUTPORT_16    (0x10UL)  /*!< Value 0x00000010 */
#define TMC_NUMATBINPUTPORT_17    (0x11UL)  /*!< Value 0x00000011 */
#define TMC_NUMATBINPUTPORT_18    (0x12UL)  /*!< Value 0x00000012 */
#define TMC_NUMATBINPUTPORT_19    (0x13UL)  /*!< Value 0x00000013 */
#define TMC_NUMATBINPUTPORT_20    (0x14UL)  /*!< Value 0x00000014 */
#define TMC_NUMATBINPUTPORT_21    (0x15UL)  /*!< Value 0x00000015 */
#define TMC_NUMATBINPUTPORT_22    (0x16UL)  /*!< Value 0x00000016 */
#define TMC_NUMATBINPUTPORT_23    (0x17UL)  /*!< Value 0x00000017 */
#define TMC_NUMATBINPUTPORT_24    (0x18UL)  /*!< Value 0x00000018 */
#define TMC_NUMATBINPUTPORT_25    (0x19UL)  /*!< Value 0x00000019 */
#define TMC_NUMATBINPUTPORT_26    (0x1AUL)  /*!< Value 0x0000001A */
#define TMC_NUMATBINPUTPORT_27    (0x1BUL)  /*!< Value 0x0000001B */
#define TMC_NUMATBINPUTPORT_28    (0x1CUL)  /*!< Value 0x0000001C */
#define TMC_NUMATBINPUTPORT_29    (0x1DUL)  /*!< Value 0x0000001D */
#define TMC_NUMATBINPUTPORT_30    (0x1EUL)  /*!< Value 0x0000001E */
#define TMC_NUMATBINPUTPORT_31    (0x1FUL)  /*!< Value 0x0000001F */

/*!< Device type register */
#define TMC_DEVTYPE_SUBTYPE_OFFSET    (4U)
#define TMC_DEVTYPE_SUBTYPE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(TMC, DEVTYPE, SUBTYPE))    /*!< Mask  0x000000F0 */

#define TMC_DEVTYPE_MAJORTYPE_OFFSET  (0U)
#define TMC_DEVTYPE_MAJORTYPE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, DEVTYPE, MAJORTYPE))  /*!< Mask  0x0000000F */

// Values of the sub-classification register
#define TMC_SUBTYPE_ETBETR  (0x2UL)  /*!< Value 0x00000002 */
#define TMC_SUBTYPE_ETF     (0x3UL)  /*!< Value 0x00000003 */

// Values of the major classification register
#define TMC_MAJORTYPE_ETBETR  (0x1UL)  /*!< Value 0x00000001 */
#define TMC_MAJORTYPE_ETF     (0x2UL)  /*!< Value 0x00000002 */

/*!< Peripheral identitication 4 register */
#define TMC_PERIPHID4_4KCOUNT_OFFSET    (4U)
#define TMC_PERIPHID4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define TMC_PERIPHID4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000010 */
#define TMC_PERIPHID4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000020 */
#define TMC_PERIPHID4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000040 */
#define TMC_PERIPHID4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000080 */

#define TMC_PERIPHID4_JEP106CON_OFFSET  (0U)
#define TMC_PERIPHID4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, JEP106CON))  /*!< Mask  0x0000000F */
#define TMC_PERIPHID4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, JEP106CON))  /*!< Value 0x00000001 */
#define TMC_PERIPHID4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, JEP106CON))  /*!< Value 0x00000002 */
#define TMC_PERIPHID4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, JEP106CON))  /*!< Value 0x00000004 */
#define TMC_PERIPHID4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID4, JEP106CON))  /*!< Value 0x00000008 */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define TMC_PERIPHID4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define TMC_PERIPHID5_RSVD_OFFSET  (0U)
#define TMC_PERIPHID5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define TMC_PERIPHID5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000001 */
#define TMC_PERIPHID5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000002 */
#define TMC_PERIPHID5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000004 */
#define TMC_PERIPHID5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000008 */
#define TMC_PERIPHID5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000010 */
#define TMC_PERIPHID5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000020 */
#define TMC_PERIPHID5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000040 */
#define TMC_PERIPHID5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000080 */
#define TMC_PERIPHID5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000100 */
#define TMC_PERIPHID5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000200 */
#define TMC_PERIPHID5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000400 */
#define TMC_PERIPHID5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00000800 */
#define TMC_PERIPHID5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00001000 */
#define TMC_PERIPHID5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00002000 */
#define TMC_PERIPHID5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00004000 */
#define TMC_PERIPHID5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00008000 */
#define TMC_PERIPHID5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00010000 */
#define TMC_PERIPHID5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00020000 */
#define TMC_PERIPHID5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00040000 */
#define TMC_PERIPHID5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00080000 */
#define TMC_PERIPHID5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00100000 */
#define TMC_PERIPHID5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00200000 */
#define TMC_PERIPHID5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00400000 */
#define TMC_PERIPHID5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x00800000 */
#define TMC_PERIPHID5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x01000000 */
#define TMC_PERIPHID5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x02000000 */
#define TMC_PERIPHID5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x04000000 */
#define TMC_PERIPHID5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x08000000 */
#define TMC_PERIPHID5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x10000000 */
#define TMC_PERIPHID5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x20000000 */
#define TMC_PERIPHID5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x40000000 */
#define TMC_PERIPHID5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define TMC_PERIPHID6_RSVD_OFFSET  (0U)
#define TMC_PERIPHID6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define TMC_PERIPHID6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000001 */
#define TMC_PERIPHID6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000002 */
#define TMC_PERIPHID6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000004 */
#define TMC_PERIPHID6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000008 */
#define TMC_PERIPHID6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000010 */
#define TMC_PERIPHID6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000020 */
#define TMC_PERIPHID6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000040 */
#define TMC_PERIPHID6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000080 */
#define TMC_PERIPHID6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000100 */
#define TMC_PERIPHID6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000200 */
#define TMC_PERIPHID6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000400 */
#define TMC_PERIPHID6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00000800 */
#define TMC_PERIPHID6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00001000 */
#define TMC_PERIPHID6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00002000 */
#define TMC_PERIPHID6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00004000 */
#define TMC_PERIPHID6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00008000 */
#define TMC_PERIPHID6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00010000 */
#define TMC_PERIPHID6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00020000 */
#define TMC_PERIPHID6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00040000 */
#define TMC_PERIPHID6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00080000 */
#define TMC_PERIPHID6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00100000 */
#define TMC_PERIPHID6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00200000 */
#define TMC_PERIPHID6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00400000 */
#define TMC_PERIPHID6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x00800000 */
#define TMC_PERIPHID6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x01000000 */
#define TMC_PERIPHID6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x02000000 */
#define TMC_PERIPHID6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x04000000 */
#define TMC_PERIPHID6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x08000000 */
#define TMC_PERIPHID6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x10000000 */
#define TMC_PERIPHID6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x20000000 */
#define TMC_PERIPHID6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x40000000 */
#define TMC_PERIPHID6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define TMC_PERIPHID7_RSVD_OFFSET  (0U)
#define TMC_PERIPHID7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define TMC_PERIPHID7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000001 */
#define TMC_PERIPHID7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000002 */
#define TMC_PERIPHID7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000004 */
#define TMC_PERIPHID7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000008 */
#define TMC_PERIPHID7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000010 */
#define TMC_PERIPHID7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000020 */
#define TMC_PERIPHID7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000040 */
#define TMC_PERIPHID7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000080 */
#define TMC_PERIPHID7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000100 */
#define TMC_PERIPHID7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000200 */
#define TMC_PERIPHID7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000400 */
#define TMC_PERIPHID7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00000800 */
#define TMC_PERIPHID7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00001000 */
#define TMC_PERIPHID7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00002000 */
#define TMC_PERIPHID7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00004000 */
#define TMC_PERIPHID7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00008000 */
#define TMC_PERIPHID7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00010000 */
#define TMC_PERIPHID7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00020000 */
#define TMC_PERIPHID7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00040000 */
#define TMC_PERIPHID7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00080000 */
#define TMC_PERIPHID7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00100000 */
#define TMC_PERIPHID7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00200000 */
#define TMC_PERIPHID7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00400000 */
#define TMC_PERIPHID7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x00800000 */
#define TMC_PERIPHID7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x01000000 */
#define TMC_PERIPHID7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x02000000 */
#define TMC_PERIPHID7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x04000000 */
#define TMC_PERIPHID7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x08000000 */
#define TMC_PERIPHID7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x10000000 */
#define TMC_PERIPHID7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x20000000 */
#define TMC_PERIPHID7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x40000000 */
#define TMC_PERIPHID7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define TMC_PERIPHID0_PARTNUM_OFFSET  (0U)
#define TMC_PERIPHID0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Mask  0x000000FF */
#define TMC_PERIPHID0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000001 */
#define TMC_PERIPHID0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000002 */
#define TMC_PERIPHID0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000004 */
#define TMC_PERIPHID0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000008 */
#define TMC_PERIPHID0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000010 */
#define TMC_PERIPHID0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000020 */
#define TMC_PERIPHID0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000040 */
#define TMC_PERIPHID0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define TMC_PERIPHID0PARTNUM_ARM   (0x61UL)  /*!< Value 0x00000061 */

/*!< Peripheral identitication 1 register */
#define TMC_PERIPHID1_JEP106ID_OFFSET  (4U)
#define TMC_PERIPHID1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, JEP106ID))  /*!< Mask  0x000000F0 */
#define TMC_PERIPHID1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, JEP106ID))  /*!< Value 0x00000010 */
#define TMC_PERIPHID1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, JEP106ID))  /*!< Value 0x00000020 */
#define TMC_PERIPHID1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, JEP106ID))  /*!< Value 0x00000040 */
#define TMC_PERIPHID1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, JEP106ID))  /*!< Value 0x00000080 */

#define TMC_PERIPHID1_PARTNUM_OFFSET   (0U)
#define TMC_PERIPHID1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, PARTNUM))   /*!< Mask  0x0000000F */
#define TMC_PERIPHID1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, PARTNUM))   /*!< Value 0x00000001 */
#define TMC_PERIPHID1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, PARTNUM))   /*!< Value 0x00000002 */
#define TMC_PERIPHID1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, PARTNUM))   /*!< Value 0x00000004 */
#define TMC_PERIPHID1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define TMC_PERIPHID1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define TMC_PERIPHID1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define TMC_PERIPHID2_REVISION_OFFSET    (4U)
#define TMC_PERIPHID2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, REVISION))    /*!< Mask  0x000000F0 */
#define TMC_PERIPHID2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, REVISION))    /*!< Value 0x00000010 */
#define TMC_PERIPHID2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, REVISION))    /*!< Value 0x00000020 */
#define TMC_PERIPHID2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, REVISION))    /*!< Value 0x00000040 */
#define TMC_PERIPHID2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, REVISION))    /*!< Value 0x00000080 */

#define TMC_PERIPHID2_JEDEC_OFFSET       (3U)
#define TMC_PERIPHID2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, JEDEC))       /*!< Mask  0x00000008 */

#define TMC_PERIPHID2_JEDEC106ID_OFFSET  (0U)
#define TMC_PERIPHID2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define TMC_PERIPHID2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, JEDEC106ID))  /*!< Value 0x00000001 */
#define TMC_PERIPHID2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, JEDEC106ID))  /*!< Value 0x00000002 */
#define TMC_PERIPHID2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define TMC_REVISION_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC assigned value select bit
#define TMC_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define TMC_PERIPHID2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define TMC_PERIPHID3_REVAND_OFFSET  (4U)
#define TMC_PERIPHID3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, REVAND))  /*!< Mask  0x000000F0 */
#define TMC_PERIPHID3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, REVAND))  /*!< Value 0x00000010 */
#define TMC_PERIPHID3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, REVAND))  /*!< Value 0x00000020 */
#define TMC_PERIPHID3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, REVAND))  /*!< Value 0x00000040 */
#define TMC_PERIPHID3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, REVAND))  /*!< Value 0x00000080 */

#define TMC_PERIPHID3_CMOD_OFFSET    (0U)
#define TMC_PERIPHID3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, CMOD))    /*!< Mask  0x0000000F */
#define TMC_PERIPHID3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, CMOD))    /*!< Value 0x00000001 */
#define TMC_PERIPHID3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, CMOD))    /*!< Value 0x00000002 */
#define TMC_PERIPHID3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, CMOD))    /*!< Value 0x00000004 */
#define TMC_PERIPHID3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(TMC, PERIPHID3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define TMC_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define TMC_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define TMC_COMPID0_PREAMBLE_OFFSET  (0U)
#define TMC_COMPID0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Mask  0x000000FF */
#define TMC_COMPID0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000001 */
#define TMC_COMPID0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000002 */
#define TMC_COMPID0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000004 */
#define TMC_COMPID0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000008 */
#define TMC_COMPID0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000010 */
#define TMC_COMPID0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000020 */
#define TMC_COMPID0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000040 */
#define TMC_COMPID0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(TMC, COMPID0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define TMC_COMPID0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define TMC_COMPID1_CLASS_OFFSET      (4U)
#define TMC_COMPID1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(TMC, COMPID1, CLASS))      /*!< Mask  0x000000F0 */
#define TMC_COMPID1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, CLASS))      /*!< Value 0x00000010 */
#define TMC_COMPID1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, CLASS))      /*!< Value 0x00000020 */
#define TMC_COMPID1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, CLASS))      /*!< Value 0x00000040 */
#define TMC_COMPID1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, CLASS))      /*!< Value 0x00000080 */

#define TMC_COMPID1_PREAMBLE_OFFSET   (0U)
#define TMC_COMPID1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(TMC, COMPID1, PREAMBLE))   /*!< Mask  0x0000000F */
#define TMC_COMPID1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, PREAMBLE))   /*!< Value 0x00000001 */
#define TMC_COMPID1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, PREAMBLE))   /*!< Value 0x00000002 */
#define TMC_COMPID1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, PREAMBLE))   /*!< Value 0x00000004 */
#define TMC_COMPID1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(TMC, COMPID1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define TMC_COMPID1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define TMC_CLASS_ARM   (0x9UL)  /*!< Value 0x00000009 */

/*!< Component identitication 2 register */
#define TMC_COMPID2_PREAMBLE_OFFSET  (0U)
#define TMC_COMPID2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Mask  0x000000FF */
#define TMC_COMPID2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000001 */
#define TMC_COMPID2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000002 */
#define TMC_COMPID2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000004 */
#define TMC_COMPID2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000008 */
#define TMC_COMPID2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000010 */
#define TMC_COMPID2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000020 */
#define TMC_COMPID2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000040 */
#define TMC_COMPID2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(TMC, COMPID2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define TMC_COMPID2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define TMC_COMPID3_PREAMBLE_OFFSET  (0U)
#define TMC_COMPID3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Mask  0x000000FF */
#define TMC_COMPID3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000001 */
#define TMC_COMPID3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000002 */
#define TMC_COMPID3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000004 */
#define TMC_COMPID3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000008 */
#define TMC_COMPID3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000010 */
#define TMC_COMPID3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000020 */
#define TMC_COMPID3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000040 */
#define TMC_COMPID3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(TMC, COMPID3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define TMC_COMPID3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

/** @} */ // End of TMC group

/** @} */ // End of RegisterGroup group

#endif // TMC_H
