#ifndef TPIU_REGISTERS_H
#define TPIU_REGISTERS_H
/**
 * @copyright
 * @file tpiu.h
 * @author Andrea Gianarda
 * @date 10th of May 2021
 * @brief Trace port interface unit (TPIU) registers in private peripheral bus (PPB) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup TPIU Trace port interface unit (TPIU) registers in private peripheral bus (PPB)
 *  @brief Trace port interface unit (TPIU) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;        /*!< Reserved                                                             (Offset 0x0)            */
	RO uint32_t PRGCTLR;          /*!< Programming control register                                         (Offset 0x4)            */
	RW uint32_t PROCSELR;         /*!< PE select control register                                           (Offset 0x8)            */
	RW uint32_t STATR;            /*!< Trace status register                                                (Offset 0xC)            */
	RW uint32_t CONFIGR;          /*!< Trace configuration register                                         (Offset 0x10)           */
	   uint32_t reserved1;        /*!< Reserved                                                             (Offset 0x14)           */
	RW uint32_t AUXCTLR;          /*!< Auxiliary control register                                           (Offset 0x18)           */
	   uint32_t reserved2;        /*!< Reserved                                                             (Offset 0x1C)           */
	RW uint32_t EVENTCTL0R;       /*!< Event control 0 register                                             (Offset 0x20)           */
	RW uint32_t EVENTCTL1R;       /*!< Event control 1 register                                             (Offset 0x24)           */
	   uint32_t reserved3;        /*!< Reserved                                                             (Offset 0x28)           */
	RW uint32_t STALLCTLR;        /*!< Stall control register                                               (Offset 0x2C)           */
	RW uint32_t TSCTLR;           /*!< Global timestamp control register                                    (Offset 0x30)           */
	RW uint32_t SYNCPR;           /*!< Synchronization period register                                      (Offset 0x34)           */
	RW uint32_t CCCTLR;           /*!< Cycle count control register                                         (Offset 0x38)           */
	RW uint32_t BBCTLR;           /*!< Branch broadcast control register                                    (Offset 0x3C)           */
	RW uint32_t TRACEIDR;         /*!< Trace ID register                                                    (Offset 0x40)           */
	RW uint32_t QCTLR;            /*!< Q element control register                                           (Offset 0x44)           */
	   uint32_t reserved4[55U];   /*!< Reserved                                                             (Offset 0x48 to 0x7C)   */
	RW uint32_t VICTLR;           /*!< ViewInst main control register                                       (Offset 0x80)           */
	RW uint32_t VIIECTLR;         /*!< ViewInst include/exclude control register                            (Offset 0x84)           */
	RW uint32_t VISSCTLR;         /*!< ViewInst start/stop control register                                 (Offset 0x88)           */
	RW uint32_t VIPCSSCTLR;       /*!< ViewInst start/stop PE control register                              (Offset 0x8C)           */
	   uint32_t reserved5[55U];   /*!< Reserved                                                             (Offset 0x90 to 0x9C)   */
	RW uint32_t VDCTLR;           /*!< ViewData main control register                                       (Offset 0xA0)           */
	RW uint32_t VDSACCTLR;        /*!< ViewData include/exclude single address comparator control register  (Offset 0xA4)           */
	RW uint32_t VDSARCCTLR;       /*!< ViewData start/stop address range comparator control register        (Offset 0xA8)           */
	   uint32_t reserved6[3U];    /*!< Reserved                                                             (Offset 0xAC to 0xFC)   */
	RW uint32_t CSEQEVR0;         /*!< Sequencer state transition control 0 register                        (Offset 0x100)          */
	RW uint32_t CSEQEVR1;         /*!< Sequencer state transition control 1 register                        (Offset 0x104)          */
	RW uint32_t CSEQEVR2;         /*!< Sequencer state transition control 2 register                        (Offset 0x108)          */
	   uint32_t reserved7[3U];    /*!< Reserved                                                             (Offset 0x10C to 0x114) */
	RW uint32_t CSEQRSTEVR;       /*!< Sequencer reset control register                                     (Offset 0x118)          */
	RW uint32_t CSEQSTR;          /*!< Sequencer state register                                             (Offset 0x11C)          */
	RW uint32_t EXTINSELR;        /*!< External input select register                                       (Offset 0x120)          */
	   uint32_t reserved8[3U];    /*!< Reserved                                                             (Offset 0x124 to 0x13C) */
	RW uint32_t CCNTRLDVR0;       /*!< Counter reload value 0 register                                      (Offset 0x140)          */
	RW uint32_t CCNTRLDVR1;       /*!< Counter reload value 1 register                                      (Offset 0x144)          */
	RW uint32_t CCNTRLDVR2;       /*!< Counter reload value 2 register                                      (Offset 0x148)          */
	RW uint32_t CCNTRLDVR3;       /*!< Counter reload value 3 register                                      (Offset 0x14C)          */
	RW uint32_t CCNTCTLR0;        /*!< Counter control 0 register                                           (Offset 0x150)          */
	RW uint32_t CCNTCTLR1;        /*!< Counter control 1 register                                           (Offset 0x154)          */
	RW uint32_t CCNTCTLR2;        /*!< Counter control 2 register                                           (Offset 0x158)          */
	RW uint32_t CCNTCTLR3;        /*!< Counter control 3 register                                           (Offset 0x15C)          */
	RW uint32_t CCNTVR0;          /*!< Counter value 0 register                                             (Offset 0x160)          */
	RW uint32_t CCNTVR1;          /*!< Counter value 1 register                                             (Offset 0x164)          */
	RW uint32_t CCNTVR2;          /*!< Counter value 2 register                                             (Offset 0x168)          */
	RW uint32_t CCNTVR3;          /*!< Counter value 3 register                                             (Offset 0x16C)          */
	   uint32_t reserved9[55U];   /*!< Reserved                                                             (Offset 0x170 to 0x17C) */
	RO uint32_t CIDR8;            /*!< ID 8 register                                                        (Offset 0x180)          */
	RO uint32_t CIDR9;            /*!< ID 9 register                                                        (Offset 0x184)          */
	RO uint32_t CIDR10;           /*!< ID 10 register                                                       (Offset 0x188)          */
	RO uint32_t CIDR11;           /*!< ID 11 register                                                       (Offset 0x18C)          */
	RO uint32_t CIDR12;           /*!< ID 12 register                                                       (Offset 0x190)          */
	RO uint32_t CIDR13;           /*!< ID 13 register                                                       (Offset 0x194)          */
	   uint32_t reserved10[61U];  /*!< Reserved                                                             (Offset 0x198 to 0x1BC) */
	RW uint32_t CIMSPEC0;         /*!< Implementation defined 0 register                                    (Offset 0x1C0)          */
	RW uint32_t CIMSPEC1;         /*!< Implementation defined 1 register                                    (Offset 0x1C4)          */
	RW uint32_t CIMSPEC2;         /*!< Implementation defined 2 register                                    (Offset 0x1C8)          */
	RW uint32_t CIMSPEC3;         /*!< Implementation defined 3 register                                    (Offset 0x1CC)          */
	RW uint32_t CIMSPEC4;         /*!< Implementation defined 4 register                                    (Offset 0x1D0)          */
	RW uint32_t CIMSPEC5;         /*!< Implementation defined 5 register                                    (Offset 0x1D4)          */
	RW uint32_t CIMSPEC6;         /*!< Implementation defined 6 register                                    (Offset 0x1D8)          */
	RW uint32_t CIMSPEC7;         /*!< Implementation defined 7 register                                    (Offset 0x1DC)          */
	RO uint32_t CIDR0;            /*!< ID 0 register                                                        (Offset 0x1E0)          */
	RO uint32_t CIDR1;            /*!< ID 1 register                                                        (Offset 0x1E4)          */
	RO uint32_t CIDR2;            /*!< ID 2 register                                                        (Offset 0x1E8)          */
	RO uint32_t CIDR3;            /*!< ID 3 register                                                        (Offset 0x1EC)          */
	RO uint32_t CIDR4;            /*!< ID 4 register                                                        (Offset 0x1F0)          */
	RO uint32_t CIDR5;            /*!< ID 5 register                                                        (Offset 0x1F4)          */
	RO uint32_t CIDR6;            /*!< ID 6 register                                                        (Offset 0x1F8)          */
	RO uint32_t CIDR7;            /*!< ID 7 register                                                        (Offset 0x1FC)          */
	   uint32_t reserved11[2U];   /*!< Reserved                                                             (Offset 0x200 to 0x204) */
	RW uint32_t CRSCTLR2;         /*!< Resource selection control 2 register                                (Offset 0x208)          */
	RW uint32_t CRSCTLR3;         /*!< Resource selection control 3 register                                (Offset 0x20C)          */
	RW uint32_t CRSCTLR4;         /*!< Resource selection control 4 register                                (Offset 0x210)          */
	RW uint32_t CRSCTLR5;         /*!< Resource selection control 5 register                                (Offset 0x214)          */
	RW uint32_t CRSCTLR6;         /*!< Resource selection control 6 register                                (Offset 0x218)          */
	RW uint32_t CRSCTLR7;         /*!< Resource selection control 7 register                                (Offset 0x21C)          */
	RW uint32_t CRSCTLR8;         /*!< Resource selection control 8 register                                (Offset 0x220)          */
	RW uint32_t CRSCTLR9;         /*!< Resource selection control 9 register                                (Offset 0x224)          */
	RW uint32_t CRSCTLR10;        /*!< Resource selection control 10 register                               (Offset 0x228)          */
	RW uint32_t CRSCTLR11;        /*!< Resource selection control 11 register                               (Offset 0x22C)          */
	RW uint32_t CRSCTLR12;        /*!< Resource selection control 12 register                               (Offset 0x230)          */
	RW uint32_t CRSCTLR13;        /*!< Resource selection control 13 register                               (Offset 0x234)          */
	RW uint32_t CRSCTLR14;        /*!< Resource selection control 14 register                               (Offset 0x238)          */
	RW uint32_t CRSCTLR15;        /*!< Resource selection control 15 register                               (Offset 0x23C)          */
	RW uint32_t CRSCTLR16;        /*!< Resource selection control 16 register                               (Offset 0x240)          */
	RW uint32_t CRSCTLR17;        /*!< Resource selection control 17 register                               (Offset 0x244)          */
	RW uint32_t CRSCTLR18;        /*!< Resource selection control 18 register                               (Offset 0x248)          */
	RW uint32_t CRSCTLR19;        /*!< Resource selection control 19 register                               (Offset 0x24C)          */
	RW uint32_t CRSCTLR20;        /*!< Resource selection control 20 register                               (Offset 0x250)          */
	RW uint32_t CRSCTLR21;        /*!< Resource selection control 21 register                               (Offset 0x254)          */
	RW uint32_t CRSCTLR22;        /*!< Resource selection control 22 register                               (Offset 0x258)          */
	RW uint32_t CRSCTLR23;        /*!< Resource selection control 23 register                               (Offset 0x25C)          */
	RW uint32_t CRSCTLR24;        /*!< Resource selection control 24 register                               (Offset 0x260)          */
	RW uint32_t CRSCTLR25;        /*!< Resource selection control 25 register                               (Offset 0x264)          */
	RW uint32_t CRSCTLR26;        /*!< Resource selection control 26 register                               (Offset 0x268)          */
	RW uint32_t CRSCTLR27;        /*!< Resource selection control 27 register                               (Offset 0x26C)          */
	RW uint32_t CRSCTLR28;        /*!< Resource selection control 28 register                               (Offset 0x270)          */
	RW uint32_t CRSCTLR29;        /*!< Resource selection control 29 register                               (Offset 0x274)          */
	RW uint32_t CRSCTLR30;        /*!< Resource selection control 30 register                               (Offset 0x278)          */
	RW uint32_t CRSCTLR31;        /*!< Resource selection control 31 register                               (Offset 0x27C)          */
	RW uint32_t CURTMP;           /*!< Current test patterns/modes register                           (Offset 0x204)          */
	RW uint32_t TPRCR;            /*!< Test pattern repeat counter register                           (Offset 0x208)          */
	   uint32_t reserved4[61U];   /*!< Reserved                                                       (Offset 0x20C to 0x2FC) */
	RO uint32_t FFSR;             /*!< Formatter and flush status register                            (Offset 0x300)          */
	RW uint32_t FFCR;             /*!< Formatter and flush control register                           (Offset 0x304)          */
	RW uint32_t FSCR;             /*!< Formatter sychronization counter register                      (Offset 0x308)          */
	   uint32_t reserved5[61U];   /*!< Reserved                                                       (Offset 0x30C to 0x3FC) */
	RO uint32_t INEXCTL;          /*!< External control (EXTCTL) input port register                  (Offset 0x400)          */
	RW uint32_t OUTEXCTL;         /*!< External control (EXTCTL) output port register                 (Offset 0x404)          */
	   uint32_t reserved6[694U];  /*!< Reserved                                                       (Offset 0x40C to 0xEE0) */
	WO uint32_t ITTRFLINACK;      /*!< Integration test trigger in and flush in acknowledge register  (Offset 0xEE4)          */
	RO uint32_t ITTRFLIN;         /*!< Integration test trigger in and flush in register              (Offset 0xEE8)          */
	RO uint32_t ITATBDATA0;       /*!< Integration test ATB data 0 register                           (Offset 0xEEC)          */
	WO uint32_t ITATBCTR2;        /*!< Integration test ATB control 2 register                        (Offset 0xEF0)          */
	RO uint32_t ITATBCTR1;        /*!< Integration test ATB control 1 register                        (Offset 0xEF4)          */
	RO uint32_t ITATBCTR0;        /*!< Integration test ATB control 0 register                        (Offset 0xEF8)          */
	   uint32_t reserved7;        /*!< Reserved                                                       (Offset 0xEFC)          */
	RW uint32_t ITCTRL;           /*!< Integration mode control register                              (Offset 0xF00)          */
	   uint32_t reserved8[39U];   /*!< Reserved                                                       (Offset 0xF04 to 0xF9C) */
	RW uint32_t CLAIMSET;         /*!< Claim tag set register                                         (Offset 0xFA0)          */
	RW uint32_t CLAIMCLR;         /*!< Claim tag clear register                                       (Offset 0xFA4)          */
	RW uint32_t DEVAFF0;          /*!< Device affinity 0 register                                     (Offset 0xFA8)          */
	RW uint32_t DEVAFF1;          /*!< Device affinity 1 register                                     (Offset 0xFAC)          */
	WO uint32_t LAR;              /*!< CoreSight lock access register                                 (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register                                 (Offset 0xFB4)          */
	RO uint32_t AUTHSTAT;         /*!< Authentication status register                                 (Offset 0xFB8)          */
	   uint32_t reserved10[3U];   /*!< Reserved                                                       (Offset 0xFBC to 0xFC4) */
	RO uint32_t DEVID;            /*!< Device configuration register                                  (Offset 0xFC8)          */
	RO uint32_t DEVTYPE;          /*!< Device type register                                           (Offset 0xFCC)          */
	RO uint32_t PID4;             /*!< Peripheral identification 4 register                           (Offset 0xFD0)          */
	RO uint32_t PID5;             /*!< Peripheral identification 5 register                           (Offset 0xFD4)          */
	RO uint32_t PID6;             /*!< Peripheral identification 6 register                           (Offset 0xFD8)          */
	RO uint32_t PID7;             /*!< Peripheral identification 7 register                           (Offset 0xFDC)          */
	RO uint32_t PID0;             /*!< Peripheral identification 0 register                           (Offset 0xFE0)          */
	RO uint32_t PID1;             /*!< Peripheral identification 1 register                           (Offset 0xFE4)          */
	RO uint32_t PID2;             /*!< Peripheral identification 2 register                           (Offset 0xFE8)          */
	RO uint32_t PID3;             /*!< Peripheral identification 3 register                           (Offset 0xFEC)          */
	RO uint32_t CID0;             /*!< Component identification 0 register                            (Offset 0xFF0)          */
	RO uint32_t CID1;             /*!< Component identification 1 register                            (Offset 0xFF4)          */
	RO uint32_t CID2;             /*!< Component identification 2 register                            (Offset 0xFF8)          */
	RO uint32_t CID3;             /*!< Component identification 3 register                            (Offset 0xFFC)          */
} tpiu_regs;


