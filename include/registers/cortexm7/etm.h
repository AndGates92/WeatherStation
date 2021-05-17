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
	RW uint32_t SEQEVR0;          /*!< Sequencer state transition control 0 register                        (Offset 0x100)          */
	RW uint32_t SEQEVR1;          /*!< Sequencer state transition control 1 register                        (Offset 0x104)          */
	RW uint32_t SEQEVR2;          /*!< Sequencer state transition control 2 register                        (Offset 0x108)          */
	   uint32_t reserved7[3U];    /*!< Reserved                                                             (Offset 0x10C to 0x114) */
	RW uint32_t SEQRSTEVR;        /*!< Sequencer reset control register                                     (Offset 0x118)          */
	RW uint32_t SEQSTR;           /*!< Sequencer state register                                             (Offset 0x11C)          */
	RW uint32_t EXTINSELR;        /*!< External input select register                                       (Offset 0x120)          */
	   uint32_t reserved8[3U];    /*!< Reserved                                                             (Offset 0x124 to 0x13C) */
	RW uint32_t CNTRLDVR0;        /*!< Counter reload value 0 register                                      (Offset 0x140)          */
	RW uint32_t CNTRLDVR1;        /*!< Counter reload value 1 register                                      (Offset 0x144)          */
	RW uint32_t CNTRLDVR2;        /*!< Counter reload value 2 register                                      (Offset 0x148)          */
	RW uint32_t CNTRLDVR3;        /*!< Counter reload value 3 register                                      (Offset 0x14C)          */
	RW uint32_t CNTCTLR0;         /*!< Counter control 0 register                                           (Offset 0x150)          */
	RW uint32_t CNTCTLR1;         /*!< Counter control 1 register                                           (Offset 0x154)          */
	RW uint32_t CNTCTLR2;         /*!< Counter control 2 register                                           (Offset 0x158)          */
	RW uint32_t CNTCTLR3;         /*!< Counter control 3 register                                           (Offset 0x15C)          */
	RW uint32_t CNTVR0;           /*!< Counter value 0 register                                             (Offset 0x160)          */
	RW uint32_t CNTVR1;           /*!< Counter value 1 register                                             (Offset 0x164)          */
	RW uint32_t CNTVR2;           /*!< Counter value 2 register                                             (Offset 0x168)          */
	RW uint32_t CNTVR3;           /*!< Counter value 3 register                                             (Offset 0x16C)          */
	   uint32_t reserved9[55U];   /*!< Reserved                                                             (Offset 0x170 to 0x17C) */
	RO uint32_t IDR8;             /*!< ID 8 register                                                        (Offset 0x180)          */
	RO uint32_t IDR9;             /*!< ID 9 register                                                        (Offset 0x184)          */
	RO uint32_t IDR10;            /*!< ID 10 register                                                       (Offset 0x188)          */
	RO uint32_t IDR11;            /*!< ID 11 register                                                       (Offset 0x18C)          */
	RO uint32_t IDR12;            /*!< ID 12 register                                                       (Offset 0x190)          */
	RO uint32_t IDR13;            /*!< ID 13 register                                                       (Offset 0x194)          */
	   uint32_t reserved10[61U];  /*!< Reserved                                                             (Offset 0x198 to 0x1BC) */
	RW uint32_t IMSPEC0;          /*!< Implementation defined 0 register                                    (Offset 0x1C0)          */
	RW uint32_t IMSPEC1;          /*!< Implementation defined 1 register                                    (Offset 0x1C4)          */
	RW uint32_t IMSPEC2;          /*!< Implementation defined 2 register                                    (Offset 0x1C8)          */
	RW uint32_t IMSPEC3;          /*!< Implementation defined 3 register                                    (Offset 0x1CC)          */
	RW uint32_t IMSPEC4;          /*!< Implementation defined 4 register                                    (Offset 0x1D0)          */
	RW uint32_t IMSPEC5;          /*!< Implementation defined 5 register                                    (Offset 0x1D4)          */
	RW uint32_t IMSPEC6;          /*!< Implementation defined 6 register                                    (Offset 0x1D8)          */
	RW uint32_t IMSPEC7;          /*!< Implementation defined 7 register                                    (Offset 0x1DC)          */
	RO uint32_t IDR0;             /*!< ID 0 register                                                        (Offset 0x1E0)          */
	RO uint32_t IDR1;             /*!< ID 1 register                                                        (Offset 0x1E4)          */
	RO uint32_t IDR2;             /*!< ID 2 register                                                        (Offset 0x1E8)          */
	RO uint32_t IDR3;             /*!< ID 3 register                                                        (Offset 0x1EC)          */
	RO uint32_t IDR4;             /*!< ID 4 register                                                        (Offset 0x1F0)          */
	RO uint32_t IDR5;             /*!< ID 5 register                                                        (Offset 0x1F4)          */
	RO uint32_t IDR6;             /*!< ID 6 register                                                        (Offset 0x1F8)          */
	RO uint32_t IDR7;             /*!< ID 7 register                                                        (Offset 0x1FC)          */
	   uint32_t reserved11[2U];   /*!< Reserved                                                             (Offset 0x200 to 0x204) */
	RW uint32_t RSCTLR2;          /*!< Resource selection control 2 register                                (Offset 0x208)          */
	RW uint32_t RSCTLR3;          /*!< Resource selection control 3 register                                (Offset 0x20C)          */
	RW uint32_t RSCTLR4;          /*!< Resource selection control 4 register                                (Offset 0x210)          */
	RW uint32_t RSCTLR5;          /*!< Resource selection control 5 register                                (Offset 0x214)          */
	RW uint32_t RSCTLR6;          /*!< Resource selection control 6 register                                (Offset 0x218)          */
	RW uint32_t RSCTLR7;          /*!< Resource selection control 7 register                                (Offset 0x21C)          */
	RW uint32_t RSCTLR8;          /*!< Resource selection control 8 register                                (Offset 0x220)          */
	RW uint32_t RSCTLR9;          /*!< Resource selection control 9 register                                (Offset 0x224)          */
	RW uint32_t RSCTLR10;         /*!< Resource selection control 10 register                               (Offset 0x228)          */
	RW uint32_t RSCTLR11;         /*!< Resource selection control 11 register                               (Offset 0x22C)          */
	RW uint32_t RSCTLR12;         /*!< Resource selection control 12 register                               (Offset 0x230)          */
	RW uint32_t RSCTLR13;         /*!< Resource selection control 13 register                               (Offset 0x234)          */
	RW uint32_t RSCTLR14;         /*!< Resource selection control 14 register                               (Offset 0x238)          */
	RW uint32_t RSCTLR15;         /*!< Resource selection control 15 register                               (Offset 0x23C)          */
	RW uint32_t RSCTLR16;         /*!< Resource selection control 16 register                               (Offset 0x240)          */
	RW uint32_t RSCTLR17;         /*!< Resource selection control 17 register                               (Offset 0x244)          */
	RW uint32_t RSCTLR18;         /*!< Resource selection control 18 register                               (Offset 0x248)          */
	RW uint32_t RSCTLR19;         /*!< Resource selection control 19 register                               (Offset 0x24C)          */
	RW uint32_t RSCTLR20;         /*!< Resource selection control 20 register                               (Offset 0x250)          */
	RW uint32_t RSCTLR21;         /*!< Resource selection control 21 register                               (Offset 0x254)          */
	RW uint32_t RSCTLR22;         /*!< Resource selection control 22 register                               (Offset 0x258)          */
	RW uint32_t RSCTLR23;         /*!< Resource selection control 23 register                               (Offset 0x25C)          */
	RW uint32_t RSCTLR24;         /*!< Resource selection control 24 register                               (Offset 0x260)          */
	RW uint32_t RSCTLR25;         /*!< Resource selection control 25 register                               (Offset 0x264)          */
	RW uint32_t RSCTLR26;         /*!< Resource selection control 26 register                               (Offset 0x268)          */
	RW uint32_t RSCTLR27;         /*!< Resource selection control 27 register                               (Offset 0x26C)          */
	RW uint32_t RSCTLR28;         /*!< Resource selection control 28 register                               (Offset 0x270)          */
	RW uint32_t RSCTLR29;         /*!< Resource selection control 29 register                               (Offset 0x274)          */
	RW uint32_t RSCTLR30;         /*!< Resource selection control 30 register                               (Offset 0x278)          */
	RW uint32_t RSCTLR31;         /*!< Resource selection control 31 register                               (Offset 0x27C)          */
	RW uint32_t SSCCR0;           /*!< Single shot comparator control 0 register                            (Offset 0x280)          */
	RW uint32_t SSCCR1;           /*!< Single shot comparator control 1 register                            (Offset 0x284)          */
	RW uint32_t SSCCR2;           /*!< Single shot comparator control 2 register                            (Offset 0x288)          */
	RW uint32_t SSCCR3;           /*!< Single shot comparator control 3 register                            (Offset 0x28C)          */
	RW uint32_t SSCCR4;           /*!< Single shot comparator control 4 register                            (Offset 0x290)          */
	RW uint32_t SSCCR5;           /*!< Single shot comparator control 5 register                            (Offset 0x294)          */
	RW uint32_t SSCCR6;           /*!< Single shot comparator control 6 register                            (Offset 0x298)          */
	RW uint32_t SSCCR7;           /*!< Single shot comparator control 7 register                            (Offset 0x29C)          */
	RW uint32_t SSCSR0;           /*!< Single shot comparator status 0 register                             (Offset 0x2A0)          */
	RW uint32_t SSCSR1;           /*!< Single shot comparator status 1 register                             (Offset 0x2A4)          */
	RW uint32_t SSCSR2;           /*!< Single shot comparator status 2 register                             (Offset 0x2A8)          */
	RW uint32_t SSCSR3;           /*!< Single shot comparator status 3 register                             (Offset 0x2AC)          */
	RW uint32_t SSCSR4;           /*!< Single shot comparator status 4 register                             (Offset 0x2B0)          */
	RW uint32_t SSCSR5;           /*!< Single shot comparator status 5 register                             (Offset 0x2B4)          */
	RW uint32_t SSCSR6;           /*!< Single shot comparator status 6 register                             (Offset 0x2B8)          */
	RW uint32_t SSCSR7;           /*!< Single shot comparator status 7 register                             (Offset 0x2BC)          */
	RW uint32_t SSPCICR0;         /*!< Single shot PE comparator input control 0 register                   (Offset 0x2C0)          */
	RW uint32_t SSPCICR1;         /*!< Single shot PE comparator input control 1 register                   (Offset 0x2C4)          */
	RW uint32_t SSPCICR2;         /*!< Single shot PE comparator input control 2 register                   (Offset 0x2C8)          */
	RW uint32_t SSPCICR3;         /*!< Single shot PE comparator input control 3 register                   (Offset 0x2CC)          */
	RW uint32_t SSPCICR4;         /*!< Single shot PE comparator input control 4 register                   (Offset 0x2D0)          */
	RW uint32_t SSPCICR5;         /*!< Single shot PE comparator input control 5 register                   (Offset 0x2D4)          */
	RW uint32_t SSPCICR6;         /*!< Single shot PE comparator input control 6 register                   (Offset 0x2D8)          */
	RW uint32_t SSPCICR7;         /*!< Single shot PE comparator input control 7 register                   (Offset 0x2DC)          */
	   uint32_t reserved12[61U];  /*!< Reserved                                                             (Offset 0x2E0 to 0x2FC) */
	WO uint32_t OSLAR;            /*!< OS lock access register                                              (Offset 0x300)          */
	RO uint32_t OSLSR;            /*!< OS lock status register                                              (Offset 0x304)          */
	   uint32_t reserved13[2U];   /*!< Reserved                                                             (Offset 0x308 to 0x30C) */
	RW uint32_t PDCR;             /*!< PowerDown control register                                           (Offset 0x310)          */
	RO uint32_t PDSR;             /*!< PowerDown status register                                            (Offset 0x314)          */
	   uint32_t reserved14[2U];   /*!< Reserved                                                             (Offset 0x318 to 0x3FC) */
	RW uint32_t ACVR0L;           /*!< Address comparator value low 0 register                              (Offset 0x400)          */
	RW uint32_t ACVR0H;           /*!< Address comparator value high 0 register                             (Offset 0x404)          */
	RW uint32_t ACVR1L;           /*!< Address comparator value low 1 register                              (Offset 0x408)          */
	RW uint32_t ACVR1H;           /*!< Address comparator value high 1 register                             (Offset 0x40C)          */
	RW uint32_t ACVR2L;           /*!< Address comparator value low 2 register                              (Offset 0x410)          */
	RW uint32_t ACVR2H;           /*!< Address comparator value high 2 register                             (Offset 0x414)          */
	RW uint32_t ACVR3L;           /*!< Address comparator value low 3 register                              (Offset 0x418)          */
	RW uint32_t ACVR3H;           /*!< Address comparator value high 3 register                             (Offset 0x41C)          */
	RW uint32_t ACVR4L;           /*!< Address comparator value low 4 register                              (Offset 0x420)          */
	RW uint32_t ACVR4H;           /*!< Address comparator value high 4 register                             (Offset 0x424)          */
	RW uint32_t ACVR5L;           /*!< Address comparator value low 5 register                              (Offset 0x428)          */
	RW uint32_t ACVR5H;           /*!< Address comparator value high 5 register                             (Offset 0x42C)          */
	RW uint32_t ACVR6L;           /*!< Address comparator value low 6 register                              (Offset 0x430)          */
	RW uint32_t ACVR6H;           /*!< Address comparator value high 6 register                             (Offset 0x434)          */
	RW uint32_t ACVR7L;           /*!< Address comparator value low 7 register                              (Offset 0x438)          */
	RW uint32_t ACVR7H;           /*!< Address comparator value high 7 register                             (Offset 0x43C)          */
	RW uint32_t ACVR8L;           /*!< Address comparator value low 8 register                              (Offset 0x440)          */
	RW uint32_t ACVR8H;           /*!< Address comparator value high 8 register                             (Offset 0x444)          */
	RW uint32_t ACVR9L;           /*!< Address comparator value low 9 register                              (Offset 0x448)          */
	RW uint32_t ACVR9H;           /*!< Address comparator value high 9 register                             (Offset 0x44C)          */
	RW uint32_t ACVR10L;          /*!< Address comparator value low 10 register                             (Offset 0x450)          */
	RW uint32_t ACVR10H;          /*!< Address comparator value high 10 register                            (Offset 0x454)          */
	RW uint32_t ACVR11L;          /*!< Address comparator value low 11 register                             (Offset 0x458)          */
	RW uint32_t ACVR11H;          /*!< Address comparator value high 11 register                            (Offset 0x45C)          */
	RW uint32_t ACVR12L;          /*!< Address comparator value low 12 register                             (Offset 0x460)          */
	RW uint32_t ACVR12H;          /*!< Address comparator value high 12 register                            (Offset 0x464)          */
	RW uint32_t ACVR13L;          /*!< Address comparator value low 13 register                             (Offset 0x468)          */
	RW uint32_t ACVR13H;          /*!< Address comparator value high 13 register                            (Offset 0x46C)          */
	RW uint32_t ACVR14L;          /*!< Address comparator value low 14 register                             (Offset 0x470)          */
	RW uint32_t ACVR14H;          /*!< Address comparator value high 14 register                            (Offset 0x474)          */
	RW uint32_t ACVR15L;          /*!< Address comparator value low 15 register                             (Offset 0x478)          */
	RW uint32_t ACVR15H;          /*!< Address comparator value high 15 register                            (Offset 0x47C)          */
	RW uint32_t ACATR0L;          /*!< Address comparator access type low 0 register                        (Offset 0x480)          */
	RW uint32_t ACATR0H;          /*!< Address comparator access type high 0 register                       (Offset 0x484)          */
	RW uint32_t ACATR1L;          /*!< Address comparator access type low 1 register                        (Offset 0x488)          */
	RW uint32_t ACATR1H;          /*!< Address comparator access type high 1 register                       (Offset 0x48C)          */
	RW uint32_t ACATR2L;          /*!< Address comparator access type low 2 register                        (Offset 0x490)          */
	RW uint32_t ACATR2H;          /*!< Address comparator access type high 2 register                       (Offset 0x494)          */
	RW uint32_t ACATR3L;          /*!< Address comparator access type low 3 register                        (Offset 0x498)          */
	RW uint32_t ACATR3H;          /*!< Address comparator access type high 3 register                       (Offset 0x49C)          */
	RW uint32_t ACATR4L;          /*!< Address comparator access type low 4 register                        (Offset 0x4A0)          */
	RW uint32_t ACATR4H;          /*!< Address comparator access type high 4 register                       (Offset 0x4A4)          */
	RW uint32_t ACATR5L;          /*!< Address comparator access type low 5 register                        (Offset 0x4A8)          */
	RW uint32_t ACATR5H;          /*!< Address comparator access type high 5 register                       (Offset 0x4AC)          */
	RW uint32_t ACATR6L;          /*!< Address comparator access type low 6 register                        (Offset 0x4B0)          */
	RW uint32_t ACATR6H;          /*!< Address comparator access type high 6 register                       (Offset 0x4B4)          */
	RW uint32_t ACATR7L;          /*!< Address comparator access type low 7 register                        (Offset 0x4B8)          */
	RW uint32_t ACATR7H;          /*!< Address comparator access type high 7 register                       (Offset 0x4BC)          */
	RW uint32_t ACATR8L;          /*!< Address comparator access type low 8 register                        (Offset 0x4C0)          */
	RW uint32_t ACATR8H;          /*!< Address comparator access type high 8 register                       (Offset 0x4C4)          */
	RW uint32_t ACATR9L;          /*!< Address comparator access type low 9 register                        (Offset 0x4C8)          */
	RW uint32_t ACATR9H;          /*!< Address comparator access type high 9 register                       (Offset 0x4CC)          */
	RW uint32_t ACATR10L;         /*!< Address comparator access type low 10 register                       (Offset 0x4D0)          */
	RW uint32_t ACATR10H;         /*!< Address comparator access type high 10 register                      (Offset 0x4D4)          */
	RW uint32_t ACATR11L;         /*!< Address comparator access type low 11 register                       (Offset 0x4D8)          */
	RW uint32_t ACATR11H;         /*!< Address comparator access type high 11 register                      (Offset 0x4DC)          */
	RW uint32_t ACATR12L;         /*!< Address comparator access type low 12 register                       (Offset 0x4E0)          */
	RW uint32_t ACATR12H;         /*!< Address comparator access type high 12 register                      (Offset 0x4E4)          */
	RW uint32_t ACATR13L;         /*!< Address comparator access type low 13 register                       (Offset 0x4E8)          */
	RW uint32_t ACATR13H;         /*!< Address comparator access type high 13 register                      (Offset 0x4EC)          */
	RW uint32_t ACATR14L;         /*!< Address comparator access type low 14 register                       (Offset 0x4F0)          */
	RW uint32_t ACATR14H;         /*!< Address comparator access type high 14 register                      (Offset 0x4F4)          */
	RW uint32_t ACATR15L;         /*!< Address comparator access type low 15 register                       (Offset 0x4F8)          */
	RW uint32_t ACATR15H;         /*!< Address comparator access type high 15 register                      (Offset 0x4FC)          */
	RW uint32_t DVCVR0L;          /*!< Data value comparator value low 0 register                           (Offset 0x500)          */
	RW uint32_t DVCVR0H;          /*!< Data value comparator value high 0 register                          (Offset 0x504)          */
	   uint32_t reserved15[2U];   /*!< Reserved                                                             (Offset 0x508 to 0x50C) */
	RW uint32_t DVCVR1L;          /*!< Data value comparator value low 1 register                           (Offset 0x510)          */
	RW uint32_t DVCVR1H;          /*!< Data value comparator value high 1 register                          (Offset 0x514)          */
	   uint32_t reserved16[2U];   /*!< Reserved                                                             (Offset 0x518 to 0x51C) */
	RW uint32_t DVCVR2L;          /*!< Data value comparator value low 2 register                           (Offset 0x520)          */
	RW uint32_t DVCVR2H;          /*!< Data value comparator value high 2 register                          (Offset 0x524)          */
	   uint32_t reserved17[2U];   /*!< Reserved                                                             (Offset 0x528 to 0x52C) */
	RW uint32_t DVCVR3L;          /*!< Data value comparator value low 3 register                           (Offset 0x530)          */
	RW uint32_t DVCVR3H;          /*!< Data value comparator value high 3 register                          (Offset 0x534)          */
	   uint32_t reserved18[2U];   /*!< Reserved                                                             (Offset 0x538 to 0x53C) */
	RW uint32_t DVCVR4L;          /*!< Data value comparator value low 4 register                           (Offset 0x540)          */
	RW uint32_t DVCVR4H;          /*!< Data value comparator value high 4 register                          (Offset 0x544)          */
	   uint32_t reserved19[2U];   /*!< Reserved                                                             (Offset 0x548 to 0x54C) */
	RW uint32_t DVCVR5L;          /*!< Data value comparator value low 5 register                           (Offset 0x550)          */
	RW uint32_t DVCVR5H;          /*!< Data value comparator value high 5 register                          (Offset 0x554)          */
	   uint32_t reserved20[2U];   /*!< Reserved                                                             (Offset 0x558 to 0x55C) */
	RW uint32_t DVCVR6L;          /*!< Data value comparator value low 6 register                           (Offset 0x560)          */
	RW uint32_t DVCVR6H;          /*!< Data value comparator value high 6 register                          (Offset 0x564)          */
	   uint32_t reserved21[2U];   /*!< Reserved                                                             (Offset 0x568 to 0x56C) */
	RW uint32_t DVCVR7L;          /*!< Data value comparator value low 7 register                           (Offset 0x570)          */
	RW uint32_t DVCVR7H;          /*!< Data value comparator value high 7 register                          (Offset 0x574)          */
	   uint32_t reserved22[2U];   /*!< Reserved                                                             (Offset 0x578 to 0x57C) */
	RW uint32_t DVCMR0L;          /*!< Data value comparator mask low 0 register                            (Offset 0x580)          */
	RW uint32_t DVCMR0H;          /*!< Data value comparator mask high 0 register                           (Offset 0x584)          */
	   uint32_t reserved23[2U];   /*!< Reserved                                                             (Offset 0x588 to 0x58C) */
	RW uint32_t DVCMR1L;          /*!< Data value comparator mask low 1 register                            (Offset 0x590)          */
	RW uint32_t DVCMR1H;          /*!< Data value comparator mask high 1 register                           (Offset 0x594)          */
	   uint32_t reserved24[2U];   /*!< Reserved                                                             (Offset 0x598 to 0x59C) */
	RW uint32_t DVCMR2L;          /*!< Data value comparator mask low 2 register                            (Offset 0x5A0)          */
	RW uint32_t DVCMR2H;          /*!< Data value comparator mask high 2 register                           (Offset 0x5A4)          */
	   uint32_t reserved25[2U];   /*!< Reserved                                                             (Offset 0x5A8 to 0x5AC) */
	RW uint32_t DVCMR3L;          /*!< Data value comparator mask low 3 register                            (Offset 0x5B0)          */
	RW uint32_t DVCMR3H;          /*!< Data value comparator mask high 3 register                           (Offset 0x5B4)          */
	   uint32_t reserved26[2U];   /*!< Reserved                                                             (Offset 0x5B8 to 0x5BC) */
	RW uint32_t DVCMR4L;          /*!< Data value comparator mask low 4 register                            (Offset 0x5C0)          */
	RW uint32_t DVCMR4H;          /*!< Data value comparator mask high 4 register                           (Offset 0x5C4)          */
	   uint32_t reserved27[2U];   /*!< Reserved                                                             (Offset 0x5C8 to 0x5CC) */
	RW uint32_t DVCMR5L;          /*!< Data value comparator mask low 5 register                            (Offset 0x5D0)          */
	RW uint32_t DVCMR5H;          /*!< Data value comparator mask high 5 register                           (Offset 0x5D4)          */
	   uint32_t reserved28[2U];   /*!< Reserved                                                             (Offset 0x5D8 to 0x5DC) */
	RW uint32_t DVCMR6L;          /*!< Data value comparator mask low 6 register                            (Offset 0x5E0)          */
	RW uint32_t DVCMR6H;          /*!< Data value comparator mask high 6 register                           (Offset 0x5E4)          */
	   uint32_t reserved29[2U];   /*!< Reserved                                                             (Offset 0x5E8 to 0x5EC) */
	RW uint32_t DVCMR7L;          /*!< Data value comparator mask low 7 register                            (Offset 0x5F0)          */
	RW uint32_t DVCMR7H;          /*!< Data value comparator mask high 7 register                           (Offset 0x5F4)          */
	   uint32_t reserved30[2U];   /*!< Reserved                                                             (Offset 0x5F8 to 0x5FC) */

	RW uint32_t OUTEXCTL;         /*!< External control (EXTCTL) output port register                 (Offset 0x404)          */
	   uint32_t reserved6[694U];  /*!< Reserved                                                       (Offset 0x40C to 0xEE0) */
	WO uint32_t ITTRFLINACK;      /*!< Integration test trigger in and flush in acknowledge register  (Offset 0xEE4)          */
	RO uint32_t ITTRFLIN;         /*!< Integration test trigger in and flush in register              (Offset 0xEE8)          */
	RO uint32_t ITATBDATA0;       /*!< Integration test ATB data 0 register                           (Offset 0xEEC)          */
	WO uint32_t ITATBCTR2;        /*!< Integration test ATB control 2 register                        (Offset 0xEF0)          */
	RO uint32_t ITATBCTR1;        /*!< Integration test ATB control 1 register                        (Offset 0xEF4)          */
		RW uint32_t ACVR0L;           /*!< Address comparator value low 0 register                              (Offset 0x400)          */
	RW uint32_t ACVR0H;           /*!< Address comparator value high 0 register                             (Offset 0x404)          */
	RW uint32_t ACVR1L;           /*!< Address comparator value low 1 register                              (Offset 0x408)          */
	RW uint32_t ACVR1H;           /*!< Address comparator value high 1 register                             (Offset 0x40C)          */
	RW uint32_t ACVR2L;           /*!< Address comparator value low 2 register                              (Offset 0x410)          */
	RW uint32_t ACVR2H;           /*!< Address comparator value high 2 register                             (Offset 0x414)          */
	RW uint32_t ACVR3L;           /*!< Address comparator value low 3 register                              (Offset 0x418)          */
	RW uint32_t ACVR3H;           /*!< Address comparator value high 3 register                             (Offset 0x41C)          */
	RW uint32_t ACVR4L;           /*!< Address comparator value low 4 register                              (Offset 0x420)          */
	RW uint32_t ACVR4H;           /*!< Address comparator value high 4 register                             (Offset 0x424)          */
	RW uint32_t ACVR5L;           /*!< Address comparator value low 5 register                              (Offset 0x428)          */
	RW uint32_t ACVR5H;           /*!< Address comparator value high 5 register                             (Offset 0x42C)          */
	RW uint32_t ACVR6L;           /*!< Address comparator value low 6 register                              (Offset 0x430)          */
	RW uint32_t ACVR6H;           /*!< Address comparator value high 6 register                             (Offset 0x434)          */
	RW uint32_t ACVR7L;           /*!< Address comparator value low 7 register                              (Offset 0x438)          */
	RW uint32_t ACVR7H;           /*!< Address comparator value high 7 register                             (Offset 0x43C)          */
	RW uint32_t ACVR8L;           /*!< Address comparator value low 8 register                              (Offset 0x440)          */
	RW uint32_t ACVR8H;           /*!< Address comparator value high 8 register                             (Offset 0x444)          */
	RW uint32_t ACVR9L;           /*!< Address comparator value low 9 register                              (Offset 0x448)          */
	RW uint32_t ACVR9H;           /*!< Address comparator value high 9 register                             (Offset 0x44C)          */
	RW uint32_t ACVR10L;          /*!< Address comparator value low 10 register                             (Offset 0x450)          */
	RW uint32_t ACVR10H;          /*!< Address comparator value high 10 register                            (Offset 0x454)          */
	RW uint32_t ACVR11L;          /*!< Address comparator value low 11 register                             (Offset 0x458)          */
	RW uint32_t ACVR11H;          /*!< Address comparator value high 11 register                            (Offset 0x45C)          */
	RW uint32_t ACVR12L;          /*!< Address comparator value low 12 register                             (Offset 0x460)          */
	RW uint32_t ACVR12H;          /*!< Address comparator value high 12 register                            (Offset 0x464)          */
	RW uint32_t ACVR13L;          /*!< Address comparator value low 13 register                             (Offset 0x468)          */
	RW uint32_t ACVR13H;          /*!< Address comparator value high 13 register                            (Offset 0x46C)          */
	RW uint32_t ACVR14L;          /*!< Address comparator value low 14 register                             (Offset 0x470)          */
	RW uint32_t ACVR14H;          /*!< Address comparator value high 14 register                            (Offset 0x474)          */
	RW uint32_t ACVR15L;          /*!< Address comparator value low 15 register                             (Offset 0x478)          */
	RW uint32_t ACVR15H;          /*!< Address comparator value high 15 register                            (Offset 0x47C)          */
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


