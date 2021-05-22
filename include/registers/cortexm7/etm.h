#ifndef ETM_REGISTERS_H
#define ETM_REGISTERS_H
/**
 * @copyright
 * @file etm.h
 * @author Andrea Gianarda
 * @date 10th of May 2021
 * @brief Embedded trace macrocell (ETM) registers in private peripheral bus (PPB) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup ETM Embedded trace macrocell (ETM) registers in private peripheral bus (PPB)
 *  @brief Embedded trace macrocell (ETM) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;        /*!< Reserved                                                                 (Offset 0x0)            */
	RW uint32_t PRGCTLR;          /*!< Programming control register                                             (Offset 0x4)            */
	RW uint32_t PROCSELR;         /*!< Processing element (PE) select control register                          (Offset 0x8)            */
	RW uint32_t STATR;            /*!< Trace status register                                                    (Offset 0xC)            */
	RW uint32_t CONFIGR;          /*!< Trace configuration register                                             (Offset 0x10)           */
	   uint32_t reserved1;        /*!< Reserved                                                                 (Offset 0x14)           */
	RW uint32_t AUXCTLR;          /*!< Auxiliary control register                                               (Offset 0x18)           */
	   uint32_t reserved2;        /*!< Reserved                                                                 (Offset 0x1C)           */
	RW uint32_t EVENTCTL0R;       /*!< Event control 0 register                                                 (Offset 0x20)           */
	RW uint32_t EVENTCTL1R;       /*!< Event control 1 register                                                 (Offset 0x24)           */
	   uint32_t reserved3;        /*!< Reserved                                                                 (Offset 0x28)           */
	RW uint32_t STALLCTLR;        /*!< Stall control register                                                   (Offset 0x2C)           */
	RW uint32_t TSCTLR;           /*!< Global timestamp control register                                        (Offset 0x30)           */
	RW uint32_t SYNCPR;           /*!< Synchronization period register                                          (Offset 0x34)           */
	RW uint32_t CCCTLR;           /*!< Cycle count control register                                             (Offset 0x38)           */
	RW uint32_t BBCTLR;           /*!< Branch broadcast control register                                        (Offset 0x3C)           */
	RW uint32_t TRACEIDR;         /*!< Trace ID register                                                        (Offset 0x40)           */
	RW uint32_t QCTLR;            /*!< Q element control register                                               (Offset 0x44)           */
	   uint32_t reserved4[55U];   /*!< Reserved                                                                 (Offset 0x48 to 0x7C)   */
	RW uint32_t VICTLR;           /*!< ViewInst main control register                                           (Offset 0x80)           */
	RW uint32_t VIIECTLR;         /*!< ViewInst include/exclude control register                                (Offset 0x84)           */
	RW uint32_t VISSCTLR;         /*!< ViewInst start/stop control register                                     (Offset 0x88)           */
	RW uint32_t VIPCSSCTLR;       /*!< ViewInst start/stop processing element (PE) control register             (Offset 0x8C)           */
	   uint32_t reserved5[55U];   /*!< Reserved                                                                 (Offset 0x90 to 0x9C)   */
	RW uint32_t VDCTLR;           /*!< ViewData main control register                                           (Offset 0xA0)           */
	RW uint32_t VDSACCTLR;        /*!< ViewData include/exclude single address comparator control register      (Offset 0xA4)           */
	RW uint32_t VDSARCCTLR;       /*!< ViewData start/stop address range comparator control register            (Offset 0xA8)           */
	   uint32_t reserved6[3U];    /*!< Reserved                                                                 (Offset 0xAC to 0xFC)   */
	RW uint32_t SEQEVR0;          /*!< Sequencer state transition control 0 register                            (Offset 0x100)          */
	RW uint32_t SEQEVR1;          /*!< Sequencer state transition control 1 register                            (Offset 0x104)          */
	RW uint32_t SEQEVR2;          /*!< Sequencer state transition control 2 register                            (Offset 0x108)          */
	   uint32_t reserved7[3U];    /*!< Reserved                                                                 (Offset 0x10C to 0x114) */
	RW uint32_t SEQRSTEVR;        /*!< Sequencer reset control register                                         (Offset 0x118)          */
	RW uint32_t SEQSTR;           /*!< Sequencer state register                                                 (Offset 0x11C)          */
	RW uint32_t EXTINSELR;        /*!< External input select register                                           (Offset 0x120)          */
	   uint32_t reserved8[3U];    /*!< Reserved                                                                 (Offset 0x124 to 0x13C) */
	RW uint32_t CNTRLDVR0;        /*!< Counter reload value 0 register                                          (Offset 0x140)          */
	RW uint32_t CNTRLDVR1;        /*!< Counter reload value 1 register                                          (Offset 0x144)          */
	RW uint32_t CNTRLDVR2;        /*!< Counter reload value 2 register                                          (Offset 0x148)          */
	RW uint32_t CNTRLDVR3;        /*!< Counter reload value 3 register                                          (Offset 0x14C)          */
	RW uint32_t CNTCTLR0;         /*!< Counter control 0 register                                               (Offset 0x150)          */
	RW uint32_t CNTCTLR1;         /*!< Counter control 1 register                                               (Offset 0x154)          */
	RW uint32_t CNTCTLR2;         /*!< Counter control 2 register                                               (Offset 0x158)          */
	RW uint32_t CNTCTLR3;         /*!< Counter control 3 register                                               (Offset 0x15C)          */
	RW uint32_t CNTVR0;           /*!< Counter value 0 register                                                 (Offset 0x160)          */
	RW uint32_t CNTVR1;           /*!< Counter value 1 register                                                 (Offset 0x164)          */
	RW uint32_t CNTVR2;           /*!< Counter value 2 register                                                 (Offset 0x168)          */
	RW uint32_t CNTVR3;           /*!< Counter value 3 register                                                 (Offset 0x16C)          */
	   uint32_t reserved9[55U];   /*!< Reserved                                                                 (Offset 0x170 to 0x17C) */
	RO uint32_t IDR8;             /*!< ID 8 register                                                            (Offset 0x180)          */
	RO uint32_t IDR9;             /*!< ID 9 register                                                            (Offset 0x184)          */
	RO uint32_t IDR10;            /*!< ID 10 register                                                           (Offset 0x188)          */
	RO uint32_t IDR11;            /*!< ID 11 register                                                           (Offset 0x18C)          */
	RO uint32_t IDR12;            /*!< ID 12 register                                                           (Offset 0x190)          */
	RO uint32_t IDR13;            /*!< ID 13 register                                                           (Offset 0x194)          */
	   uint32_t reserved10[61U];  /*!< Reserved                                                                 (Offset 0x198 to 0x1BC) */
	RW uint32_t IMSPEC0;          /*!< Implementation defined 0 register                                        (Offset 0x1C0)          */
	RW uint32_t IMSPEC1;          /*!< Implementation defined 1 register                                        (Offset 0x1C4)          */
	RW uint32_t IMSPEC2;          /*!< Implementation defined 2 register                                        (Offset 0x1C8)          */
	RW uint32_t IMSPEC3;          /*!< Implementation defined 3 register                                        (Offset 0x1CC)          */
	RW uint32_t IMSPEC4;          /*!< Implementation defined 4 register                                        (Offset 0x1D0)          */
	RW uint32_t IMSPEC5;          /*!< Implementation defined 5 register                                        (Offset 0x1D4)          */
	RW uint32_t IMSPEC6;          /*!< Implementation defined 6 register                                        (Offset 0x1D8)          */
	RW uint32_t IMSPEC7;          /*!< Implementation defined 7 register                                        (Offset 0x1DC)          */
	RO uint32_t IDR0;             /*!< ID 0 register                                                            (Offset 0x1E0)          */
	RO uint32_t IDR1;             /*!< ID 1 register                                                            (Offset 0x1E4)          */
	RO uint32_t IDR2;             /*!< ID 2 register                                                            (Offset 0x1E8)          */
	RO uint32_t IDR3;             /*!< ID 3 register                                                            (Offset 0x1EC)          */
	RO uint32_t IDR4;             /*!< ID 4 register                                                            (Offset 0x1F0)          */
	RO uint32_t IDR5;             /*!< ID 5 register                                                            (Offset 0x1F4)          */
	RO uint32_t IDR6;             /*!< ID 6 register                                                            (Offset 0x1F8)          */
	RO uint32_t IDR7;             /*!< ID 7 register                                                            (Offset 0x1FC)          */
	   uint32_t reserved11[2U];   /*!< Reserved                                                                 (Offset 0x200 to 0x204) */
	RW uint32_t RSCTLR2;          /*!< Resource selection control 2 register                                    (Offset 0x208)          */
	RW uint32_t RSCTLR3;          /*!< Resource selection control 3 register                                    (Offset 0x20C)          */
	RW uint32_t RSCTLR4;          /*!< Resource selection control 4 register                                    (Offset 0x210)          */
	RW uint32_t RSCTLR5;          /*!< Resource selection control 5 register                                    (Offset 0x214)          */
	RW uint32_t RSCTLR6;          /*!< Resource selection control 6 register                                    (Offset 0x218)          */
	RW uint32_t RSCTLR7;          /*!< Resource selection control 7 register                                    (Offset 0x21C)          */
	RW uint32_t RSCTLR8;          /*!< Resource selection control 8 register                                    (Offset 0x220)          */
	RW uint32_t RSCTLR9;          /*!< Resource selection control 9 register                                    (Offset 0x224)          */
	RW uint32_t RSCTLR10;         /*!< Resource selection control 10 register                                   (Offset 0x228)          */
	RW uint32_t RSCTLR11;         /*!< Resource selection control 11 register                                   (Offset 0x22C)          */
	RW uint32_t RSCTLR12;         /*!< Resource selection control 12 register                                   (Offset 0x230)          */
	RW uint32_t RSCTLR13;         /*!< Resource selection control 13 register                                   (Offset 0x234)          */
	RW uint32_t RSCTLR14;         /*!< Resource selection control 14 register                                   (Offset 0x238)          */
	RW uint32_t RSCTLR15;         /*!< Resource selection control 15 register                                   (Offset 0x23C)          */
	RW uint32_t RSCTLR16;         /*!< Resource selection control 16 register                                   (Offset 0x240)          */
	RW uint32_t RSCTLR17;         /*!< Resource selection control 17 register                                   (Offset 0x244)          */
	RW uint32_t RSCTLR18;         /*!< Resource selection control 18 register                                   (Offset 0x248)          */
	RW uint32_t RSCTLR19;         /*!< Resource selection control 19 register                                   (Offset 0x24C)          */
	RW uint32_t RSCTLR20;         /*!< Resource selection control 20 register                                   (Offset 0x250)          */
	RW uint32_t RSCTLR21;         /*!< Resource selection control 21 register                                   (Offset 0x254)          */
	RW uint32_t RSCTLR22;         /*!< Resource selection control 22 register                                   (Offset 0x258)          */
	RW uint32_t RSCTLR23;         /*!< Resource selection control 23 register                                   (Offset 0x25C)          */
	RW uint32_t RSCTLR24;         /*!< Resource selection control 24 register                                   (Offset 0x260)          */
	RW uint32_t RSCTLR25;         /*!< Resource selection control 25 register                                   (Offset 0x264)          */
	RW uint32_t RSCTLR26;         /*!< Resource selection control 26 register                                   (Offset 0x268)          */
	RW uint32_t RSCTLR27;         /*!< Resource selection control 27 register                                   (Offset 0x26C)          */
	RW uint32_t RSCTLR28;         /*!< Resource selection control 28 register                                   (Offset 0x270)          */
	RW uint32_t RSCTLR29;         /*!< Resource selection control 29 register                                   (Offset 0x274)          */
	RW uint32_t RSCTLR30;         /*!< Resource selection control 30 register                                   (Offset 0x278)          */
	RW uint32_t RSCTLR31;         /*!< Resource selection control 31 register                                   (Offset 0x27C)          */
	RW uint32_t SSCCR0;           /*!< Single shot comparator control 0 register                                (Offset 0x280)          */
	RW uint32_t SSCCR1;           /*!< Single shot comparator control 1 register                                (Offset 0x284)          */
	RW uint32_t SSCCR2;           /*!< Single shot comparator control 2 register                                (Offset 0x288)          */
	RW uint32_t SSCCR3;           /*!< Single shot comparator control 3 register                                (Offset 0x28C)          */
	RW uint32_t SSCCR4;           /*!< Single shot comparator control 4 register                                (Offset 0x290)          */
	RW uint32_t SSCCR5;           /*!< Single shot comparator control 5 register                                (Offset 0x294)          */
	RW uint32_t SSCCR6;           /*!< Single shot comparator control 6 register                                (Offset 0x298)          */
	RW uint32_t SSCCR7;           /*!< Single shot comparator control 7 register                                (Offset 0x29C)          */
	RW uint32_t SSCSR0;           /*!< Single shot comparator status 0 register                                 (Offset 0x2A0)          */
	RW uint32_t SSCSR1;           /*!< Single shot comparator status 1 register                                 (Offset 0x2A4)          */
	RW uint32_t SSCSR2;           /*!< Single shot comparator status 2 register                                 (Offset 0x2A8)          */
	RW uint32_t SSCSR3;           /*!< Single shot comparator status 3 register                                 (Offset 0x2AC)          */
	RW uint32_t SSCSR4;           /*!< Single shot comparator status 4 register                                 (Offset 0x2B0)          */
	RW uint32_t SSCSR5;           /*!< Single shot comparator status 5 register                                 (Offset 0x2B4)          */
	RW uint32_t SSCSR6;           /*!< Single shot comparator status 6 register                                 (Offset 0x2B8)          */
	RW uint32_t SSCSR7;           /*!< Single shot comparator status 7 register                                 (Offset 0x2BC)          */
	RW uint32_t SSPCICR0;         /*!< Single shot processing element (PE) comparator input control 0 register  (Offset 0x2C0)          */
	RW uint32_t SSPCICR1;         /*!< Single shot processing element (PE) comparator input control 1 register  (Offset 0x2C4)          */
	RW uint32_t SSPCICR2;         /*!< Single shot processing element (PE) comparator input control 2 register  (Offset 0x2C8)          */
	RW uint32_t SSPCICR3;         /*!< Single shot processing element (PE) comparator input control 3 register  (Offset 0x2CC)          */
	RW uint32_t SSPCICR4;         /*!< Single shot processing element (PE) comparator input control 4 register  (Offset 0x2D0)          */
	RW uint32_t SSPCICR5;         /*!< Single shot processing element (PE) comparator input control 5 register  (Offset 0x2D4)          */
	RW uint32_t SSPCICR6;         /*!< Single shot processing element (PE) comparator input control 6 register  (Offset 0x2D8)          */
	RW uint32_t SSPCICR7;         /*!< Single shot processing element (PE) comparator input control 7 register  (Offset 0x2DC)          */
	   uint32_t reserved12[61U];  /*!< Reserved                                                                 (Offset 0x2E0 to 0x2FC) */
	WO uint32_t OSLAR;            /*!< OS lock access register                                                  (Offset 0x300)          */
	RO uint32_t OSLSR;            /*!< OS lock status register                                                  (Offset 0x304)          */
	   uint32_t reserved13[2U];   /*!< Reserved                                                                 (Offset 0x308 to 0x30C) */
	RW uint32_t PDCR;             /*!< PowerDown control register                                               (Offset 0x310)          */
	RO uint32_t PDSR;             /*!< PowerDown status register                                                (Offset 0x314)          */
	   uint32_t reserved14[2U];   /*!< Reserved                                                                 (Offset 0x318 to 0x3FC) */
	RW uint32_t ACVR0L;           /*!< Address comparator value low 0 register                                  (Offset 0x400)          */
	RW uint32_t ACVR0H;           /*!< Address comparator value high 0 register                                 (Offset 0x404)          */
	RW uint32_t ACVR1L;           /*!< Address comparator value low 1 register                                  (Offset 0x408)          */
	RW uint32_t ACVR1H;           /*!< Address comparator value high 1 register                                 (Offset 0x40C)          */
	RW uint32_t ACVR2L;           /*!< Address comparator value low 2 register                                  (Offset 0x410)          */
	RW uint32_t ACVR2H;           /*!< Address comparator value high 2 register                                 (Offset 0x414)          */
	RW uint32_t ACVR3L;           /*!< Address comparator value low 3 register                                  (Offset 0x418)          */
	RW uint32_t ACVR3H;           /*!< Address comparator value high 3 register                                 (Offset 0x41C)          */
	RW uint32_t ACVR4L;           /*!< Address comparator value low 4 register                                  (Offset 0x420)          */
	RW uint32_t ACVR4H;           /*!< Address comparator value high 4 register                                 (Offset 0x424)          */
	RW uint32_t ACVR5L;           /*!< Address comparator value low 5 register                                  (Offset 0x428)          */
	RW uint32_t ACVR5H;           /*!< Address comparator value high 5 register                                 (Offset 0x42C)          */
	RW uint32_t ACVR6L;           /*!< Address comparator value low 6 register                                  (Offset 0x430)          */
	RW uint32_t ACVR6H;           /*!< Address comparator value high 6 register                                 (Offset 0x434)          */
	RW uint32_t ACVR7L;           /*!< Address comparator value low 7 register                                  (Offset 0x438)          */
	RW uint32_t ACVR7H;           /*!< Address comparator value high 7 register                                 (Offset 0x43C)          */
	RW uint32_t ACVR8L;           /*!< Address comparator value low 8 register                                  (Offset 0x440)          */
	RW uint32_t ACVR8H;           /*!< Address comparator value high 8 register                                 (Offset 0x444)          */
	RW uint32_t ACVR9L;           /*!< Address comparator value low 9 register                                  (Offset 0x448)          */
	RW uint32_t ACVR9H;           /*!< Address comparator value high 9 register                                 (Offset 0x44C)          */
	RW uint32_t ACVR10L;          /*!< Address comparator value low 10 register                                 (Offset 0x450)          */
	RW uint32_t ACVR10H;          /*!< Address comparator value high 10 register                                (Offset 0x454)          */
	RW uint32_t ACVR11L;          /*!< Address comparator value low 11 register                                 (Offset 0x458)          */
	RW uint32_t ACVR11H;          /*!< Address comparator value high 11 register                                (Offset 0x45C)          */
	RW uint32_t ACVR12L;          /*!< Address comparator value low 12 register                                 (Offset 0x460)          */
	RW uint32_t ACVR12H;          /*!< Address comparator value high 12 register                                (Offset 0x464)          */
	RW uint32_t ACVR13L;          /*!< Address comparator value low 13 register                                 (Offset 0x468)          */
	RW uint32_t ACVR13H;          /*!< Address comparator value high 13 register                                (Offset 0x46C)          */
	RW uint32_t ACVR14L;          /*!< Address comparator value low 14 register                                 (Offset 0x470)          */
	RW uint32_t ACVR14H;          /*!< Address comparator value high 14 register                                (Offset 0x474)          */
	RW uint32_t ACVR15L;          /*!< Address comparator value low 15 register                                 (Offset 0x478)          */
	RW uint32_t ACVR15H;          /*!< Address comparator value high 15 register                                (Offset 0x47C)          */
	RW uint32_t ACATR0L;          /*!< Address comparator access type low 0 register                            (Offset 0x480)          */
	RW uint32_t ACATR0H;          /*!< Address comparator access type high 0 register                           (Offset 0x484)          */
	RW uint32_t ACATR1L;          /*!< Address comparator access type low 1 register                            (Offset 0x488)          */
	RW uint32_t ACATR1H;          /*!< Address comparator access type high 1 register                           (Offset 0x48C)          */
	RW uint32_t ACATR2L;          /*!< Address comparator access type low 2 register                            (Offset 0x490)          */
	RW uint32_t ACATR2H;          /*!< Address comparator access type high 2 register                           (Offset 0x494)          */
	RW uint32_t ACATR3L;          /*!< Address comparator access type low 3 register                            (Offset 0x498)          */
	RW uint32_t ACATR3H;          /*!< Address comparator access type high 3 register                           (Offset 0x49C)          */
	RW uint32_t ACATR4L;          /*!< Address comparator access type low 4 register                            (Offset 0x4A0)          */
	RW uint32_t ACATR4H;          /*!< Address comparator access type high 4 register                           (Offset 0x4A4)          */
	RW uint32_t ACATR5L;          /*!< Address comparator access type low 5 register                            (Offset 0x4A8)          */
	RW uint32_t ACATR5H;          /*!< Address comparator access type high 5 register                           (Offset 0x4AC)          */
	RW uint32_t ACATR6L;          /*!< Address comparator access type low 6 register                            (Offset 0x4B0)          */
	RW uint32_t ACATR6H;          /*!< Address comparator access type high 6 register                           (Offset 0x4B4)          */
	RW uint32_t ACATR7L;          /*!< Address comparator access type low 7 register                            (Offset 0x4B8)          */
	RW uint32_t ACATR7H;          /*!< Address comparator access type high 7 register                           (Offset 0x4BC)          */
	RW uint32_t ACATR8L;          /*!< Address comparator access type low 8 register                            (Offset 0x4C0)          */
	RW uint32_t ACATR8H;          /*!< Address comparator access type high 8 register                           (Offset 0x4C4)          */
	RW uint32_t ACATR9L;          /*!< Address comparator access type low 9 register                            (Offset 0x4C8)          */
	RW uint32_t ACATR9H;          /*!< Address comparator access type high 9 register                           (Offset 0x4CC)          */
	RW uint32_t ACATR10L;         /*!< Address comparator access type low 10 register                           (Offset 0x4D0)          */
	RW uint32_t ACATR10H;         /*!< Address comparator access type high 10 register                          (Offset 0x4D4)          */
	RW uint32_t ACATR11L;         /*!< Address comparator access type low 11 register                           (Offset 0x4D8)          */
	RW uint32_t ACATR11H;         /*!< Address comparator access type high 11 register                          (Offset 0x4DC)          */
	RW uint32_t ACATR12L;         /*!< Address comparator access type low 12 register                           (Offset 0x4E0)          */
	RW uint32_t ACATR12H;         /*!< Address comparator access type high 12 register                          (Offset 0x4E4)          */
	RW uint32_t ACATR13L;         /*!< Address comparator access type low 13 register                           (Offset 0x4E8)          */
	RW uint32_t ACATR13H;         /*!< Address comparator access type high 13 register                          (Offset 0x4EC)          */
	RW uint32_t ACATR14L;         /*!< Address comparator access type low 14 register                           (Offset 0x4F0)          */
	RW uint32_t ACATR14H;         /*!< Address comparator access type high 14 register                          (Offset 0x4F4)          */
	RW uint32_t ACATR15L;         /*!< Address comparator access type low 15 register                           (Offset 0x4F8)          */
	RW uint32_t ACATR15H;         /*!< Address comparator access type high 15 register                          (Offset 0x4FC)          */
	RW uint32_t DVCVR0L;          /*!< Data value comparator value low 0 register                               (Offset 0x500)          */
	RW uint32_t DVCVR0H;          /*!< Data value comparator value high 0 register                              (Offset 0x504)          */
	   uint32_t reserved15[2U];   /*!< Reserved                                                                 (Offset 0x508 to 0x50C) */
	RW uint32_t DVCVR1L;          /*!< Data value comparator value low 1 register                               (Offset 0x510)          */
	RW uint32_t DVCVR1H;          /*!< Data value comparator value high 1 register                              (Offset 0x514)          */
	   uint32_t reserved16[2U];   /*!< Reserved                                                                 (Offset 0x518 to 0x51C) */
	RW uint32_t DVCVR2L;          /*!< Data value comparator value low 2 register                               (Offset 0x520)          */
	RW uint32_t DVCVR2H;          /*!< Data value comparator value high 2 register                              (Offset 0x524)          */
	   uint32_t reserved17[2U];   /*!< Reserved                                                                 (Offset 0x528 to 0x52C) */
	RW uint32_t DVCVR3L;          /*!< Data value comparator value low 3 register                               (Offset 0x530)          */
	RW uint32_t DVCVR3H;          /*!< Data value comparator value high 3 register                              (Offset 0x534)          */
	   uint32_t reserved18[2U];   /*!< Reserved                                                                 (Offset 0x538 to 0x53C) */
	RW uint32_t DVCVR4L;          /*!< Data value comparator value low 4 register                               (Offset 0x540)          */
	RW uint32_t DVCVR4H;          /*!< Data value comparator value high 4 register                              (Offset 0x544)          */
	   uint32_t reserved19[2U];   /*!< Reserved                                                                 (Offset 0x548 to 0x54C) */
	RW uint32_t DVCVR5L;          /*!< Data value comparator value low 5 register                               (Offset 0x550)          */
	RW uint32_t DVCVR5H;          /*!< Data value comparator value high 5 register                              (Offset 0x554)          */
	   uint32_t reserved20[2U];   /*!< Reserved                                                                 (Offset 0x558 to 0x55C) */
	RW uint32_t DVCVR6L;          /*!< Data value comparator value low 6 register                               (Offset 0x560)          */
	RW uint32_t DVCVR6H;          /*!< Data value comparator value high 6 register                              (Offset 0x564)          */
	   uint32_t reserved21[2U];   /*!< Reserved                                                                 (Offset 0x568 to 0x56C) */
	RW uint32_t DVCVR7L;          /*!< Data value comparator value low 7 register                               (Offset 0x570)          */
	RW uint32_t DVCVR7H;          /*!< Data value comparator value high 7 register                              (Offset 0x574)          */
	   uint32_t reserved22[2U];   /*!< Reserved                                                                 (Offset 0x578 to 0x57C) */
	RW uint32_t DVCMR0L;          /*!< Data value comparator mask low 0 register                                (Offset 0x580)          */
	RW uint32_t DVCMR0H;          /*!< Data value comparator mask high 0 register                               (Offset 0x584)          */
	   uint32_t reserved23[2U];   /*!< Reserved                                                                 (Offset 0x588 to 0x58C) */
	RW uint32_t DVCMR1L;          /*!< Data value comparator mask low 1 register                                (Offset 0x590)          */
	RW uint32_t DVCMR1H;          /*!< Data value comparator mask high 1 register                               (Offset 0x594)          */
	   uint32_t reserved24[2U];   /*!< Reserved                                                                 (Offset 0x598 to 0x59C) */
	RW uint32_t DVCMR2L;          /*!< Data value comparator mask low 2 register                                (Offset 0x5A0)          */
	RW uint32_t DVCMR2H;          /*!< Data value comparator mask high 2 register                               (Offset 0x5A4)          */
	   uint32_t reserved25[2U];   /*!< Reserved                                                                 (Offset 0x5A8 to 0x5AC) */
	RW uint32_t DVCMR3L;          /*!< Data value comparator mask low 3 register                                (Offset 0x5B0)          */
	RW uint32_t DVCMR3H;          /*!< Data value comparator mask high 3 register                               (Offset 0x5B4)          */
	   uint32_t reserved26[2U];   /*!< Reserved                                                                 (Offset 0x5B8 to 0x5BC) */
	RW uint32_t DVCMR4L;          /*!< Data value comparator mask low 4 register                                (Offset 0x5C0)          */
	RW uint32_t DVCMR4H;          /*!< Data value comparator mask high 4 register                               (Offset 0x5C4)          */
	   uint32_t reserved27[2U];   /*!< Reserved                                                                 (Offset 0x5C8 to 0x5CC) */
	RW uint32_t DVCMR5L;          /*!< Data value comparator mask low 5 register                                (Offset 0x5D0)          */
	RW uint32_t DVCMR5H;          /*!< Data value comparator mask high 5 register                               (Offset 0x5D4)          */
	   uint32_t reserved28[2U];   /*!< Reserved                                                                 (Offset 0x5D8 to 0x5DC) */
	RW uint32_t DVCMR6L;          /*!< Data value comparator mask low 6 register                                (Offset 0x5E0)          */
	RW uint32_t DVCMR6H;          /*!< Data value comparator mask high 6 register                               (Offset 0x5E4)          */
	   uint32_t reserved29[2U];   /*!< Reserved                                                                 (Offset 0x5E8 to 0x5EC) */
	RW uint32_t DVCMR7L;          /*!< Data value comparator mask low 7 register                                (Offset 0x5F0)          */
	RW uint32_t DVCMR7H;          /*!< Data value comparator mask high 7 register                               (Offset 0x5F4)          */
	   uint32_t reserved30[2U];   /*!< Reserved                                                                 (Offset 0x5F8 to 0x5FC) */
	RW uint32_t CIDCVR0L;         /*!< Context ID comparator value low 0 register                               (Offset 0x600)          */
	RW uint32_t CIDCVR0H;         /*!< Context ID comparator value high 0 register                              (Offset 0x604)          */
	RW uint32_t CIDCVR1L;         /*!< Context ID comparator value low 1 register                               (Offset 0x608)          */
	RW uint32_t CIDCVR1H;         /*!< Context ID comparator value high 1 register                              (Offset 0x60C)          */
	RW uint32_t CIDCVR2L;         /*!< Context ID comparator value low 2 register                               (Offset 0x610)          */
	RW uint32_t CIDCVR2H;         /*!< Context ID comparator value high 2 register                              (Offset 0x614)          */
	RW uint32_t CIDCVR3L;         /*!< Context ID comparator value low 3 register                               (Offset 0x618)          */
	RW uint32_t CIDCVR3H;         /*!< Context ID comparator value high 3 register                              (Offset 0x61C)          */
	RW uint32_t CIDCVR4L;         /*!< Context ID comparator value low 4 register                               (Offset 0x620)          */
	RW uint32_t CIDCVR4H;         /*!< Context ID comparator value high 4 register                              (Offset 0x624)          */
	RW uint32_t CIDCVR5L;         /*!< Context ID comparator value low 5 register                               (Offset 0x628)          */
	RW uint32_t CIDCVR5H;         /*!< Context ID comparator value high 5 register                              (Offset 0x62C)          */
	RW uint32_t CIDCVR6L;         /*!< Context ID comparator value low 6 register                               (Offset 0x630)          */
	RW uint32_t CIDCVR6H;         /*!< Context ID comparator value high 6 register                              (Offset 0x634)          */
	RW uint32_t CIDCVR7L;         /*!< Context ID comparator value low 7 register                               (Offset 0x638)          */
	RW uint32_t CIDCVR7H;         /*!< Context ID comparator value high 7 register                              (Offset 0x63C)          */
	RW uint32_t VMIDCVR0L;        /*!< Virtual context identifier comparator value low 0 register               (Offset 0x640)          */
	RW uint32_t VMIDCVR0H;        /*!< Virtual context identifier comparator value high 0 register              (Offset 0x644)          */
	RW uint32_t VMIDCVR1L;        /*!< Virtual context identifier comparator value low 1 register               (Offset 0x648)          */
	RW uint32_t VMIDCVR1H;        /*!< Virtual context identifier comparator value high 1 register              (Offset 0x64C)          */
	RW uint32_t VMIDCVR2L;        /*!< Virtual context identifier comparator value low 2 register               (Offset 0x650)          */
	RW uint32_t VMIDCVR2H;        /*!< Virtual context identifier comparator value high 2 register              (Offset 0x654)          */
	RW uint32_t VMIDCVR3L;        /*!< Virtual context identifier comparator value low 3 register               (Offset 0x658)          */
	RW uint32_t VMIDCVR3H;        /*!< Virtual context identifier comparator value high 3 register              (Offset 0x65C)          */
	RW uint32_t VMIDCVR4L;        /*!< Virtual context identifier comparator value low 4 register               (Offset 0x660)          */
	RW uint32_t VMIDCVR4H;        /*!< Virtual context identifier comparator value high 4 register              (Offset 0x664)          */
	RW uint32_t VMIDCVR5L;        /*!< Virtual context identifier comparator value low 5 register               (Offset 0x668)          */
	RW uint32_t VMIDCVR5H;        /*!< Virtual context identifier comparator value high 5 register              (Offset 0x66C)          */
	RW uint32_t VMIDCVR6L;        /*!< Virtual context identifier comparator value low 6 register               (Offset 0x670)          */
	RW uint32_t VMIDCVR6H;        /*!< Virtual context identifier comparator value high 6 register              (Offset 0x674)          */
	RW uint32_t VMIDCVR7L;        /*!< Virtual context identifier comparator value low 7 register               (Offset 0x678)          */
	RW uint32_t VMIDCVR7H;        /*!< Virtual context identifier comparator value high 7 register              (Offset 0x67C)          */
	RW uint32_t CIDCCTLR0;        /*!< Context ID comparator control 0 register                                 (Offset 0x680)          */
	RW uint32_t CIDCCTLR1;        /*!< Context ID comparator control 1 register                                 (Offset 0x684)          */
	RW uint32_t VMIDCCTLR0;       /*!< Virtual context identifier comparator control 0 register                 (Offset 0x688)          */
	RW uint32_t VMIDCCTLR1;       /*!< Virtual context identifier comparator control 1 register                 (Offset 0x68C)          */
	   uint32_t reserved31[39U];  /*!< Reserved                                                                 (Offset 0x690 to 0xEFC) */
	RW uint32_t ITCTRL;           /*!< Integration mode control register                                        (Offset 0xF00)          */
	   uint32_t reserved32[39U];  /*!< Reserved                                                                 (Offset 0xF04 to 0xF9C) */
	RW uint32_t CLAIMSET;         /*!< Claim tag set register                                                   (Offset 0xFA0)          */
	RW uint32_t CLAIMCLR;         /*!< Claim tag clear register                                                 (Offset 0xFA4)          */
	RO uint32_t DEVAFF0;          /*!< Device affinity 0 register                                               (Offset 0xFA8)          */
	RO uint32_t DEVAFF1;          /*!< Device affinity 1 register                                               (Offset 0xFAC)          */
	WO uint32_t LAR;              /*!< CoreSight lock access register                                           (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register                                           (Offset 0xFB4)          */
	RO uint32_t AUTHSTAT;         /*!< Authentication status register                                           (Offset 0xFB8)          */
	RO uint32_t DEVARCH;          /*!< Device architecture register                                             (Offset 0xFBC)          */
	   uint32_t reserved33[2U];   /*!< Reserved                                                                 (Offset 0xFC0 to 0xFC4) */
	RO uint32_t DEVID;            /*!< Device ID register                                                       (Offset 0xFC8)          */
	RO uint32_t DEVTYPE;          /*!< Device type register                                                     (Offset 0xFCC)          */
	RO uint32_t PIDR4;            /*!< Peripheral identification 4 register                                     (Offset 0xFD0)          */
	RO uint32_t PIDR5;            /*!< Peripheral identification 5 register                                     (Offset 0xFD4)          */
	RO uint32_t PIDR6;            /*!< Peripheral identification 6 register                                     (Offset 0xFD8)          */
	RO uint32_t PIDR7;            /*!< Peripheral identification 7 register                                     (Offset 0xFDC)          */
	RO uint32_t PIDR0;            /*!< Peripheral identification 0 register                                     (Offset 0xFE0)          */
	RO uint32_t PIDR1;            /*!< Peripheral identification 1 register                                     (Offset 0xFE4)          */
	RO uint32_t PIDR2;            /*!< Peripheral identification 2 register                                     (Offset 0xFE8)          */
	RO uint32_t PIDR3;            /*!< Peripheral identification 3 register                                     (Offset 0xFEC)          */
	RO uint32_t CIDR0;            /*!< Component identification 0 register                                      (Offset 0xFF0)          */
	RO uint32_t CIDR1;            /*!< Component identification 1 register                                      (Offset 0xFF4)          */
	RO uint32_t CIDR2;            /*!< Component identification 2 register                                      (Offset 0xFF8)          */
	RO uint32_t CIDR3;            /*!< Component identification 3 register                                      (Offset 0xFFC)          */
} etm_regs;

/*!< Programming control register */
#define ETM_PRGCTLR_EN_OFFSET  (0U)
#define ETM_PRGCTLR_EN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, PRGCTLR, EN))  /*!< Mask  0x00000001 */

// Values of trace unit enable bit
#define ETM_TRACEUNIT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNIT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Processing element (PE) select control register */
#define ETM_PROCSELR_PROCSEL_OFFSET  (0U)
#define ETM_PROCSELR_PROCSEL_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, PROCSELR, PROCSEL))  /*!< Mask  0x0000001F */

// Values of the register selecting the processing element to trace
#define ETM_PROCEL_NONE  (0x00UL)  /*!< Value 0x00000000 */
#define ETM_PROCEL_1     (0x01UL)  /*!< Value 0x00000001 */
#define ETM_PROCEL_2     (0x02UL)  /*!< Value 0x00000002 */
#define ETM_PROCEL_3     (0x03UL)  /*!< Value 0x00000003 */
#define ETM_PROCEL_4     (0x04UL)  /*!< Value 0x00000004 */
#define ETM_PROCEL_5     (0x05UL)  /*!< Value 0x00000005 */
#define ETM_PROCEL_6     (0x06UL)  /*!< Value 0x00000006 */
#define ETM_PROCEL_7     (0x07UL)  /*!< Value 0x00000007 */
#define ETM_PROCEL_8     (0x08UL)  /*!< Value 0x00000008 */
#define ETM_PROCEL_9     (0x09UL)  /*!< Value 0x00000009 */
#define ETM_PROCEL_10    (0x0AUL)  /*!< Value 0x0000000A */
#define ETM_PROCEL_11    (0x0BUL)  /*!< Value 0x0000000B */
#define ETM_PROCEL_12    (0x0CUL)  /*!< Value 0x0000000C */
#define ETM_PROCEL_13    (0x0DUL)  /*!< Value 0x0000000D */
#define ETM_PROCEL_14    (0x0EUL)  /*!< Value 0x0000000E */
#define ETM_PROCEL_15    (0x0FUL)  /*!< Value 0x0000000F */
#define ETM_PROCEL_16    (0x10UL)  /*!< Value 0x00000010 */
#define ETM_PROCEL_17    (0x11UL)  /*!< Value 0x00000011 */
#define ETM_PROCEL_18    (0x12UL)  /*!< Value 0x00000012 */
#define ETM_PROCEL_19    (0x13UL)  /*!< Value 0x00000013 */
#define ETM_PROCEL_20    (0x14UL)  /*!< Value 0x00000014 */
#define ETM_PROCEL_21    (0x15UL)  /*!< Value 0x00000015 */
#define ETM_PROCEL_22    (0x16UL)  /*!< Value 0x00000016 */
#define ETM_PROCEL_23    (0x17UL)  /*!< Value 0x00000017 */
#define ETM_PROCEL_24    (0x18UL)  /*!< Value 0x00000018 */
#define ETM_PROCEL_25    (0x19UL)  /*!< Value 0x00000019 */
#define ETM_PROCEL_26    (0x1AUL)  /*!< Value 0x0000001A */
#define ETM_PROCEL_27    (0x1BUL)  /*!< Value 0x0000001B */
#define ETM_PROCEL_28    (0x1CUL)  /*!< Value 0x0000001C */
#define ETM_PROCEL_29    (0x1DUL)  /*!< Value 0x0000001D */
#define ETM_PROCEL_30    (0x1EUL)  /*!< Value 0x0000001E */
#define ETM_PROCEL_31    (0x1FUL)  /*!< Value 0x0000001F */

/*!< Trace status register */
#define ETM_STATR_PMSTABLE_OFFSET  (1U)
#define ETM_STATR_PMSTABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, STATR, PMSTABLE))  /*!< Mask  0x00000002 */

#define ETM_STATR_IDLE_OFFSET      (0U)
#define ETM_STATR_IDLE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, STATR, IDLE))      /*!< Mask  0x00000001 */

// Values of programmers' model stable bit
#define ETM_PROGMODEL_UNSTABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_PROGMODEL_STABLE    (0x1UL)  /*!< Value 0x00000001 */

// Values of trace unit idle bit
#define ETM_TRACEUNIT_NOTIDLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNIT_IDLE     (0x1UL)  /*!< Value 0x00000001 */

/*!< Trace configuration register */
#define ETM_CONFIGR_DV_OFFSET       (17U)
#define ETM_CONFIGR_DV_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, DV))       /*!< Mask  0x00020000 */

#define ETM_CONFIGR_DA_OFFSET       (16U)
#define ETM_CONFIGR_DA_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, DA))       /*!< Mask  0x00010000 */

#define ETM_CONFIGR_VMIDOPT_OFFSET  (15U)
#define ETM_CONFIGR_VMIDOPT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, VMIDOPT))  /*!< Mask  0x00008000 */

#define ETM_CONFIGR_QE_OFFSET       (13U)
#define ETM_CONFIGR_QE_MASK         (0x3UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, QE))       /*!< Mask  0x00006000 */

#define ETM_CONFIGR_RS_OFFSET       (12U)
#define ETM_CONFIGR_RS_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, RS))       /*!< Mask  0x00001000 */

#define ETM_CONFIGR_TS_OFFSET       (11U)
#define ETM_CONFIGR_TS_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, TS))       /*!< Mask  0x00000800 */

#define ETM_CONFIGR_COND_OFFSET     (8U)
#define ETM_CONFIGR_COND_MASK       (0x7UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, COND))     /*!< Mask  0x00000700 */

#define ETM_CONFIGR_VMID_OFFSET     (7U)
#define ETM_CONFIGR_VMID_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, VMID))     /*!< Mask  0x00000080 */

#define ETM_CONFIGR_CID_OFFSET      (6U)
#define ETM_CONFIGR_CID_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, CID))      /*!< Mask  0x00000040 */

#define ETM_CONFIGR_CCI_OFFSET      (4U)
#define ETM_CONFIGR_CCI_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, CCI))      /*!< Mask  0x00000010 */

#define ETM_CONFIGR_BB_OFFSET       (3U)
#define ETM_CONFIGR_BB_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, BB))       /*!< Mask  0x00000008 */

#define ETM_CONFIGR_INSTP0_OFFSET   (1U)
#define ETM_CONFIGR_INSTP0_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, CONFIGR, INSTP0))   /*!< Mask  0x00000006 */

// Values of data value tracing enable bit
#define ETM_DATAVALUETRACING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAVALUETRACING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of data address tracing enable bit
#define ETM_DATAADDRESSTRACING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAADDRESSTRACING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of virtual context identifier selection control bit
#define ETM_VIRTCONTEXTIDCTRL_VTTBR_VMID         (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIRTCONTEXTIDCTRL_CONTEXTIDR_PROCID  (0x1UL)  /*!< Value 0x00000001 */

// Values of Q element enable bit
#define ETM_QELEMENT_DISABLE           (0x0UL)  /*!< Value 0x00000000 */
#define ETM_QELEMENT_INSTRCOUNTENABLE  (0x1UL)  /*!< Value 0x00000001 */
#define ETM_QELEMENT_ENABLEALL         (0x3UL)  /*!< Value 0x00000001 */

// Values of return stack enable bit
#define ETM_RETURNSTACK_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RETURNSTACK_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of global timestamp tracing enable bit
#define ETM_GBLTIMESTAMPTRACING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_GBLTIMESTAMPTRACING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the conditional instruction tracing bit
#define ETM_CONDINSTRTRACING_DISABLE       (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONDINSTRTRACING_LOAD          (0x1UL)  /*!< Value 0x00000001 */
#define ETM_CONDINSTRTRACING_STORE         (0x2UL)  /*!< Value 0x00000002 */
#define ETM_CONDINSTRTRACING_LOADSTORE     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_CONDINSTRTRACING_ALLCONDINSTR  (0x7UL)  /*!< Value 0x00000007 */

// Values of virtual context identifier enable bit
#define ETM_VIRTCONTEXTID_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIRTCONTEXTID_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of context identifier enable bit
#define ETM_CONTEXTID_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONTEXTID_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of cycle counting instruction enable bit
#define ETM_CYCLECOUNTINSTR_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CYCLECOUNTINSTR_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of branch broadcast enable bit
#define ETM_BRANCHBROADCAST_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_BRANCHBROADCAST_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register controlling whether load and store instructions are traced as P0 instruction
#define ETM_P0INSTR_NONE       (0x0UL)  /*!< Value 0x00000000 */
#define ETM_P0INSTR_LOAD       (0x1UL)  /*!< Value 0x00000001 */
#define ETM_P0INSTR_STORE      (0x2UL)  /*!< Value 0x00000002 */
#define ETM_P0INSTR_LOADSTORE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Auxiliary control register */
#define ETM_AUXCTLR_RSVD_OFFSET  (0U)
#define ETM_AUXCTLR_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_AUXCTLR_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000001 */
#define ETM_AUXCTLR_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000002 */
#define ETM_AUXCTLR_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000004 */
#define ETM_AUXCTLR_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000008 */
#define ETM_AUXCTLR_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000010 */
#define ETM_AUXCTLR_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000020 */
#define ETM_AUXCTLR_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000040 */
#define ETM_AUXCTLR_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000080 */
#define ETM_AUXCTLR_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000100 */
#define ETM_AUXCTLR_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000200 */
#define ETM_AUXCTLR_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000400 */
#define ETM_AUXCTLR_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00000800 */
#define ETM_AUXCTLR_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00001000 */
#define ETM_AUXCTLR_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00002000 */
#define ETM_AUXCTLR_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00004000 */
#define ETM_AUXCTLR_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00008000 */
#define ETM_AUXCTLR_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00010000 */
#define ETM_AUXCTLR_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00020000 */
#define ETM_AUXCTLR_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00040000 */
#define ETM_AUXCTLR_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00080000 */
#define ETM_AUXCTLR_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00100000 */
#define ETM_AUXCTLR_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00200000 */
#define ETM_AUXCTLR_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00400000 */
#define ETM_AUXCTLR_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x00800000 */
#define ETM_AUXCTLR_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x01000000 */
#define ETM_AUXCTLR_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x02000000 */
#define ETM_AUXCTLR_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x04000000 */
#define ETM_AUXCTLR_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x08000000 */
#define ETM_AUXCTLR_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x10000000 */
#define ETM_AUXCTLR_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x20000000 */
#define ETM_AUXCTLR_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x40000000 */
#define ETM_AUXCTLR_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, AUXCTLR, RSVD))  /*!< Value 0x80000000 */

/*!< Event control 0 register */
#define ETM_EVENTCTL0R_EVENT3_OFFSET  (24U)
#define ETM_EVENTCTL0R_EVENT3_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT3))  /*!< Mask  0xFF000000 */

#define ETM_EVENTCTL0R_EVENT2_OFFSET  (16U)
#define ETM_EVENTCTL0R_EVENT2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT2))  /*!< Mask  0x00FF0000 */

#define ETM_EVENTCTL0R_EVENT1_OFFSET  (8U)
#define ETM_EVENTCTL0R_EVENT1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT1))  /*!< Mask  0x0000FF00 */

#define ETM_EVENTCTL0R_EVENT0_OFFSET  (0U)
#define ETM_EVENTCTL0R_EVENT0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT0))  /*!< Mask  0x000000FF */

// Values of event bit
#define ETM_EVENTRESOURCETYPE    (7U)
#define ETM_EVENTRESOURCENUMBER  (0U)

// Values of event register bits
#define ETM_EVENT3_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT3) + ETM_EVENTRESOURCETYPE)
#define ETM_EVENT3_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENT3, RESOURCETYPE))     /*!< Mask  0x80000000 */

#define ETM_EVENT3_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT3) + ETM_EVENTRESOURCENUMBER)
#define ETM_EVENT3_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, EVENT3, RESOURCENUMBER))  /*!< Mask  0x1F000000 */

#define ETM_EVENT2_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT2) + ETM_EVENTRESOURCETYPE)
#define ETM_EVENT2_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENT2, RESOURCETYPE))     /*!< Mask  0x00800000 */

#define ETM_EVENT2_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT2) + ETM_EVENTRESOURCENUMBER)
#define ETM_EVENT2_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, EVENT2, RESOURCENUMBER))  /*!< Mask  0x001F0000 */

#define ETM_EVENT1_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT1) + ETM_EVENTRESOURCETYPE)
#define ETM_EVENT1_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENT1, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_EVENT1_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT1) + ETM_EVENTRESOURCENUMBER)
#define ETM_EVENT1_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, EVENT1, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

#define ETM_EVENT0_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT0) + ETM_EVENTRESOURCETYPE)
#define ETM_EVENT0_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENT0, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_EVENT0_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL0R, EVENT0) + ETM_EVENTRESOURCENUMBER)
#define ETM_EVENT0_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, EVENT0, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Event control 1 register */
#define ETM_EVENTCTL1R_LPOVERRIDE_OFFSET  (12U)
#define ETM_EVENTCTL1R_LPOVERRIDE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, LPOVERRIDE))  /*!< Mask  0x00001000 */

#define ETM_EVENTCTL1R_ATB_OFFSET         (11U)
#define ETM_EVENTCTL1R_ATB_MASK           (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, ATB))         /*!< Mask  0x00000800 */

#define ETM_EVENTCTL1R_DATAEN_OFFSET      (4U)
#define ETM_EVENTCTL1R_DATAEN_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, DATAEN))      /*!< Mask  0x00000010 */

#define ETM_EVENTCTL1R_INSTEN_OFFSET      (0U)
#define ETM_EVENTCTL1R_INSTEN_MASK        (0xFUL << REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, INSTEN))      /*!< Mask  0x0000000F */

// Values of low power state behaviour override bit
#define ETM_LOWPOWERSTATE_ACTIVE    (0x0UL)  /*!< Value 0x00000000 */
#define ETM_LOWPOWERSTATE_INACTIVE  (0x0UL)  /*!< Value 0x00000000 */

// Values of AMBA Trace Bus (ATB) trigger enable bit
#define ETM_ATB_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_ATB_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of data event enable bit
#define ETM_DATAEVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAEVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of instruction event bit
#define ETM_EVENT3  (3U)
#define ETM_EVENT2  (2U)
#define ETM_EVENT1  (1U)
#define ETM_EVENT0  (0U)

// Values of instruction event enable register bits
#define ETM_INSTREVENT_EVENT3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, INSTEN) + ETM_EVENT3)
#define ETM_INSTREVENT_EVENT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTREVENT, EVENT3))  /*!< Mask  0x00000008 */

#define ETM_INSTREVENT_EVENT2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, INSTEN) + ETM_EVENT2)
#define ETM_INSTREVENT_EVENT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTREVENT, EVENT2))  /*!< Mask  0x00000004 */

#define ETM_INSTREVENT_EVENT1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, INSTEN) + ETM_EVENT1)
#define ETM_INSTREVENT_EVENT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTREVENT, EVENT1))  /*!< Mask  0x00000002 */

#define ETM_INSTREVENT_EVENT0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, EVENTCTL1R, INSTEN) + ETM_EVENT0)
#define ETM_INSTREVENT_EVENT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTREVENT, EVENT0))  /*!< Mask  0x00000001 */

// Values of instruction event enable bit
#define ETM_INSTREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_INSTREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Stall control register */
#define ETM_STALLCTLR_NOOVERFLOW_OFFSET    (13U)
#define ETM_STALLCTLR_NOOVERFLOW_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, STALLCTLR, NOOVERFLOW))    /*!< Mask  0x00002000 */

#define ETM_STALLCTLR_DATADISCARD_OFFSET   (11U)
#define ETM_STALLCTLR_DATADISCARD_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, STALLCTLR, DATADISCARD))   /*!< Mask  0x00001800 */

#define ETM_STALLCTLR_INSTPRIORITY_OFFSET  (10U)
#define ETM_STALLCTLR_INSTPRIORITY_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, STALLCTLR, INSTPRIORITY))  /*!< Mask  0x00000400 */

#define ETM_STALLCTLR_DSTALL_OFFSET        (9U)
#define ETM_STALLCTLR_DSTALL_MASK          (0x1UL << REGISTER_FIELD_OFFSET(ETM, STALLCTLR, DSTALL))        /*!< Mask  0x00000200 */

#define ETM_STALLCTLR_ISTALL_OFFSET        (8U)
#define ETM_STALLCTLR_ISTALL_MASK          (0x1UL << REGISTER_FIELD_OFFSET(ETM, STALLCTLR, ISTALL))        /*!< Mask  0x00000100 */

#define ETM_STALLCTLR_LEVEL_OFFSET         (0U)
#define ETM_STALLCTLR_LEVEL_MASK           (0xFUL << REGISTER_FIELD_OFFSET(ETM, STALLCTLR, LEVEL))         /*!< Mask  0x0000000F */

// Values of trace overflow prevention bit
#define ETM_TRACEOVERFLOWPREVENTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEOVERFLOWPREVENTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of data discard register bits
#define ETM_DATATRACEDISCARD_NONE       (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATATRACEDISCARD_LOAD       (0x1UL)  /*!< Value 0x00000001 */
#define ETM_DATATRACEDISCARD_STORE      (0x2UL)  /*!< Value 0x00000002 */
#define ETM_DATATRACEDISCARD_LOADSTORE  (0x3UL)  /*!< Value 0x00000003 */

// Values of prioritze instruction trace bit
#define ETM_TRACEUNITPRIORITIZEINSTRTRACE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNITPRIORITIZEINSTRTRACE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of data stall bit
#define ETM_DATASTALL_DISABLE            (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATASTALL_ONDATABUFFERSPACE  (0x1UL)  /*!< Value 0x00000001 */

// Values of instruction stall bit
#define ETM_INSTRSTALL_DISABLE             (0x0UL)  /*!< Value 0x00000000 */
#define ETM_INSTRSTALL_ONINSTRBUFFERSPACE  (0x1UL)  /*!< Value 0x00000001 */

// Values of threshold level register
#define ETM_THRESHOLDLEVEL_LEVEL0   (0x0UL)  /*!< Value 0x00000000 */
#define ETM_THRESHOLDLEVEL_LEVEL1   (0x1UL)  /*!< Value 0x00000001 */
#define ETM_THRESHOLDLEVEL_LEVEL2   (0x2UL)  /*!< Value 0x00000002 */
#define ETM_THRESHOLDLEVEL_LEVEL3   (0x3UL)  /*!< Value 0x00000003 */
#define ETM_THRESHOLDLEVEL_LEVEL4   (0x4UL)  /*!< Value 0x00000004 */
#define ETM_THRESHOLDLEVEL_LEVEL5   (0x5UL)  /*!< Value 0x00000005 */
#define ETM_THRESHOLDLEVEL_LEVEL6   (0x6UL)  /*!< Value 0x00000006 */
#define ETM_THRESHOLDLEVEL_LEVEL7   (0x7UL)  /*!< Value 0x00000007 */
#define ETM_THRESHOLDLEVEL_LEVEL8   (0x8UL)  /*!< Value 0x00000008 */
#define ETM_THRESHOLDLEVEL_LEVEL9   (0x9UL)  /*!< Value 0x00000009 */
#define ETM_THRESHOLDLEVEL_LEVEL10  (0xAUL)  /*!< Value 0x0000000A */
#define ETM_THRESHOLDLEVEL_LEVEL11  (0xBUL)  /*!< Value 0x0000000B */
#define ETM_THRESHOLDLEVEL_LEVEL12  (0xCUL)  /*!< Value 0x0000000C */
#define ETM_THRESHOLDLEVEL_LEVEL13  (0xDUL)  /*!< Value 0x0000000D */
#define ETM_THRESHOLDLEVEL_LEVEL14  (0xEUL)  /*!< Value 0x0000000E */
#define ETM_THRESHOLDLEVEL_LEVEL15  (0xFUL)  /*!< Value 0x0000000F */

/*!< Global timestamp control register */
#define ETM_TSCTLR_EVENT_OFFSET    (0U)
#define ETM_TSCTLR_EVENT_MASK      (0xFFUL << REGISTER_FIELD_OFFSET(ETM, TSCTLR, EVENT))    /*!< Mask  0x000000FF */

// Values of event selector bits
#define ETM_SELECTEDEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, TSCTLR, EVENT) + ETM_EVENTRESOURCETYPE)
#define ETM_SELECTEDEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, SELECTEDEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_SELECTEDEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, TSCTLR, EVENT) + ETM_EVENTRESOURCENUMBER)
#define ETM_SELECTEDEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, SELECTEDEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Single-shot processing element (PE) comparator input control register (macros vaid for registers SSPCICR0, SSPCICR1, SSPCICR2, SSPCICR3, SSPCICR4, SSPCICR5, SSPCICR6, SSPCICR7) */
#define ETM_SSPCICR_PC_OFFSET  (0U)
#define ETM_SSPCICR_PC_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC))  /*!< Mask  0x000000FF */

// Values of bits of single shot processing element (PE) comparator for single-shot control
#define ETM_PE7  (7U)
#define ETM_PE6  (6U)
#define ETM_PE5  (5U)
#define ETM_PE4  (4U)
#define ETM_PE3  (3U)
#define ETM_PE2  (2U)
#define ETM_PE1  (1U)
#define ETM_PE0  (0U)

// Values of processing element (PE) comparator for single-shot control register bits
#define ETM_SINGLESHOTPE_PE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE7)
#define ETM_SINGLESHOTPE_PE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE7))  /*!< Mask  0x00000080 */

#define ETM_SINGLESHOTPE_PE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE6)
#define ETM_SINGLESHOTPE_PE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE6))  /*!< Mask  0x00000040 */

#define ETM_SINGLESHOTPE_PE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE5)
#define ETM_SINGLESHOTPE_PE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE5))  /*!< Mask  0x00000020 */

#define ETM_SINGLESHOTPE_PE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE4)
#define ETM_SINGLESHOTPE_PE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE4))  /*!< Mask  0x00000010 */

#define ETM_SINGLESHOTPE_PE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE3)
#define ETM_SINGLESHOTPE_PE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE3))  /*!< Mask  0x00000008 */

#define ETM_SINGLESHOTPE_PE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE2)
#define ETM_SINGLESHOTPE_PE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE2))  /*!< Mask  0x00000004 */

#define ETM_SINGLESHOTPE_PE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE1)
#define ETM_SINGLESHOTPE_PE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE1))  /*!< Mask  0x00000002 */

#define ETM_SINGLESHOTPE_PE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, INSTEN) + ETM_PE0)
#define ETM_SINGLESHOTPE_PE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE0))  /*!< Mask  0x00000001 */

/*!< Integration mode control register */
#define ETM_ITCTRL_IME_OFFSET  (0U)
#define ETM_ITCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ITCTRL, IME))  /*!< Mask  0x00000001 */

// Values of integration mode enable bit
#define ETM_INTEGRATIONMODE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_INTEGRATIONMODE_ENABLE   (0x1UL)  /*!< Value 0x00000001 - enable debug agent to perform topology detection and system-on-chip (SoC) test software to perform integration testing */

/*!< Claim tag set register */
#define ETM_CLAIMSET_CLAIMSET_OFFSET  (0U)
#define ETM_CLAIMSET_CLAIMSET_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET))  /*!< Mask  0x0000000FF */

// Values of register bit enabling embedding of triggers in formatted trace
#define ETM_CLAIMSET_NONE       (0x0UL)  /*!< Value 0x00000000 */

// Values of claim tag bit
#define ETM_CLAIM_BIT7  (7U)
#define ETM_CLAIM_BIT6  (6U)
#define ETM_CLAIM_BIT5  (5U)
#define ETM_CLAIM_BIT4  (4U)
#define ETM_CLAIM_BIT3  (3U)
#define ETM_CLAIM_BIT2  (2U)
#define ETM_CLAIM_BIT1  (1U)
#define ETM_CLAIM_BIT0  (0U)

// Values of claim tag set register bits
#define ETM_CLAIMSET_BIT7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT7)
#define ETM_CLAIMSET_BIT7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT7))  /*!< Mask  0x00000080 */

#define ETM_CLAIMSET_BIT6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT6)
#define ETM_CLAIMSET_BIT6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT6))  /*!< Mask  0x00000040 */

#define ETM_CLAIMSET_BIT5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT5)
#define ETM_CLAIMSET_BIT5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT5))  /*!< Mask  0x00000020 */

#define ETM_CLAIMSET_BIT4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT4)
#define ETM_CLAIMSET_BIT4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT4))  /*!< Mask  0x00000010 */

#define ETM_CLAIMSET_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT3)
#define ETM_CLAIMSET_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT3))  /*!< Mask  0x00000008 */

#define ETM_CLAIMSET_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT2)
#define ETM_CLAIMSET_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT2))  /*!< Mask  0x00000004 */

#define ETM_CLAIMSET_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT1)
#define ETM_CLAIMSET_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT1))  /*!< Mask  0x00000002 */

#define ETM_CLAIMSET_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET) + ETM_CLAIM_BIT0)
#define ETM_CLAIMSET_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, BIT0))  /*!< Mask  0x00000001 */

/*!< Claim tag clear register */
#define ETM_CLAIMCLR_CLAIMCLR_OFFSET  (0U)
#define ETM_CLAIMCLR_CLAIMCLR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR))  /*!< Mask  0x0000000F */

// Values of register bit enabling embedding of triggers in formatted trace
#define ETM_CLAIMCLR_NONE       (0x0UL)  /*!< Value 0x00000000 */

// Values of claim tag clear register bits
#define ETM_CLAIMCLR_BIT7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT7)
#define ETM_CLAIMCLR_BIT7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT7))  /*!< Mask  0x00000080 */

#define ETM_CLAIMCLR_BIT6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT6)
#define ETM_CLAIMCLR_BIT6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT6))  /*!< Mask  0x00000040 */

#define ETM_CLAIMCLR_BIT5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT5)
#define ETM_CLAIMCLR_BIT5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT5))  /*!< Mask  0x00000020 */

#define ETM_CLAIMCLR_BIT4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT4)
#define ETM_CLAIMCLR_BIT4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT4))  /*!< Mask  0x00000010 */

#define ETM_CLAIMCLR_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT3)
#define ETM_CLAIMCLR_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT3))  /*!< Mask  0x00000008 */

#define ETM_CLAIMCLR_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT2)
#define ETM_CLAIMCLR_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT2))  /*!< Mask  0x00000004 */

#define ETM_CLAIMCLR_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT1)
#define ETM_CLAIMCLR_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT1))  /*!< Mask  0x00000002 */

#define ETM_CLAIMCLR_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, CLAIMCLR) + ETM_CLAIM_BIT0)
#define ETM_CLAIMCLR_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CLAIMCLR, BIT0))  /*!< Mask  0x00000001 */

/*!< Device affinity 0 register */
#define ETM_DEVAFF0_MPIDRL_OFFSET  (0U)
#define ETM_DEVAFF0_MPIDRL_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Mask  0xFFFFFFFF */
#define ETM_DEVAFF0_MPIDRL_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000001 */
#define ETM_DEVAFF0_MPIDRL_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000002 */
#define ETM_DEVAFF0_MPIDRL_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000004 */
#define ETM_DEVAFF0_MPIDRL_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000008 */
#define ETM_DEVAFF0_MPIDRL_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000010 */
#define ETM_DEVAFF0_MPIDRL_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000020 */
#define ETM_DEVAFF0_MPIDRL_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000040 */
#define ETM_DEVAFF0_MPIDRL_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000080 */
#define ETM_DEVAFF0_MPIDRL_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000100 */
#define ETM_DEVAFF0_MPIDRL_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000200 */
#define ETM_DEVAFF0_MPIDRL_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000400 */
#define ETM_DEVAFF0_MPIDRL_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00000800 */
#define ETM_DEVAFF0_MPIDRL_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00001000 */
#define ETM_DEVAFF0_MPIDRL_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00002000 */
#define ETM_DEVAFF0_MPIDRL_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00004000 */
#define ETM_DEVAFF0_MPIDRL_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00008000 */
#define ETM_DEVAFF0_MPIDRL_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00010000 */
#define ETM_DEVAFF0_MPIDRL_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00020000 */
#define ETM_DEVAFF0_MPIDRL_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00040000 */
#define ETM_DEVAFF0_MPIDRL_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00080000 */
#define ETM_DEVAFF0_MPIDRL_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00100000 */
#define ETM_DEVAFF0_MPIDRL_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00200000 */
#define ETM_DEVAFF0_MPIDRL_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00400000 */
#define ETM_DEVAFF0_MPIDRL_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x00800000 */
#define ETM_DEVAFF0_MPIDRL_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x01000000 */
#define ETM_DEVAFF0_MPIDRL_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x02000000 */
#define ETM_DEVAFF0_MPIDRL_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x04000000 */
#define ETM_DEVAFF0_MPIDRL_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x08000000 */
#define ETM_DEVAFF0_MPIDRL_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x10000000 */
#define ETM_DEVAFF0_MPIDRL_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x20000000 */
#define ETM_DEVAFF0_MPIDRL_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x40000000 */
#define ETM_DEVAFF0_MPIDRL_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF0, MPIDRL))  /*!< Value 0x80000000 */

/*!< Device affinity 1 register */
#define ETM_DEVAFF1_MPIDRH_OFFSET  (0U)
#define ETM_DEVAFF1_MPIDRH_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Mask  0xFFFFFFFF */
#define ETM_DEVAFF1_MPIDRH_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000001 */
#define ETM_DEVAFF1_MPIDRH_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000002 */
#define ETM_DEVAFF1_MPIDRH_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000004 */
#define ETM_DEVAFF1_MPIDRH_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000008 */
#define ETM_DEVAFF1_MPIDRH_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000010 */
#define ETM_DEVAFF1_MPIDRH_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000020 */
#define ETM_DEVAFF1_MPIDRH_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000040 */
#define ETM_DEVAFF1_MPIDRH_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000080 */
#define ETM_DEVAFF1_MPIDRH_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000100 */
#define ETM_DEVAFF1_MPIDRH_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000200 */
#define ETM_DEVAFF1_MPIDRH_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000400 */
#define ETM_DEVAFF1_MPIDRH_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00000800 */
#define ETM_DEVAFF1_MPIDRH_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00001000 */
#define ETM_DEVAFF1_MPIDRH_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00002000 */
#define ETM_DEVAFF1_MPIDRH_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00004000 */
#define ETM_DEVAFF1_MPIDRH_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00008000 */
#define ETM_DEVAFF1_MPIDRH_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00010000 */
#define ETM_DEVAFF1_MPIDRH_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00020000 */
#define ETM_DEVAFF1_MPIDRH_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00040000 */
#define ETM_DEVAFF1_MPIDRH_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00080000 */
#define ETM_DEVAFF1_MPIDRH_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00100000 */
#define ETM_DEVAFF1_MPIDRH_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00200000 */
#define ETM_DEVAFF1_MPIDRH_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00400000 */
#define ETM_DEVAFF1_MPIDRH_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x00800000 */
#define ETM_DEVAFF1_MPIDRH_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x01000000 */
#define ETM_DEVAFF1_MPIDRH_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x02000000 */
#define ETM_DEVAFF1_MPIDRH_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x04000000 */
#define ETM_DEVAFF1_MPIDRH_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x08000000 */
#define ETM_DEVAFF1_MPIDRH_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x10000000 */
#define ETM_DEVAFF1_MPIDRH_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x20000000 */
#define ETM_DEVAFF1_MPIDRH_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x40000000 */
#define ETM_DEVAFF1_MPIDRH_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, DEVAFF1, MPIDRH))  /*!< Value 0x80000000 */

/*!< CoreSight lock access register */
#define ETM_LAR_KEY_OFFSET  (0U)
#define ETM_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define ETM_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000001 */
#define ETM_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000002 */
#define ETM_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000004 */
#define ETM_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000008 */
#define ETM_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000010 */
#define ETM_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000020 */
#define ETM_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000040 */
#define ETM_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000080 */
#define ETM_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000100 */
#define ETM_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000200 */
#define ETM_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000400 */
#define ETM_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00000800 */
#define ETM_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00001000 */
#define ETM_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00002000 */
#define ETM_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00004000 */
#define ETM_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00008000 */
#define ETM_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00010000 */
#define ETM_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00020000 */
#define ETM_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00040000 */
#define ETM_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00080000 */
#define ETM_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00100000 */
#define ETM_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00200000 */
#define ETM_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00400000 */
#define ETM_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x00800000 */
#define ETM_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x01000000 */
#define ETM_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x02000000 */
#define ETM_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x04000000 */
#define ETM_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x08000000 */
#define ETM_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x10000000 */
#define ETM_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x20000000 */
#define ETM_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x40000000 */
#define ETM_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, LAR, KEY))  /*!< Value 0x80000000 */

// Values of integration mode enable bit
#define ETM_KEY_LOCKCLEAR  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

/*!< CoreSight lock status register */
#define ETM_LSR_NTT_OFFSET  (2U)
#define ETM_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, LSR, NTT))  /*!< Mask  0x00000004 */

#define ETM_LSR_SLK_OFFSET  (1U)
#define ETM_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, LSR, SLK))  /*!< Mask  0x00000002 */

#define ETM_LSR_SLI_OFFSET  (0U)
#define ETM_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, LSR, SLI))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define ETM_LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of software lock status bit
#define ETM_SWLOCK_RW  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SWLOCK_RO  (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define ETM_SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Authentication status register */
#define ETM_AUTHSTAT_HNID_OFFSET   (10U)
#define ETM_AUTHSTAT_HNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, HNID))   /*!< Mask  0x00000C00 - non-invasive debug for exception level 2 (EL2) */

#define ETM_AUTHSTAT_HID_OFFSET    (8U)
#define ETM_AUTHSTAT_HID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, HID))    /*!< Mask  0x00000300 - invasive debug for exception level 2 (EL2) */

#define ETM_AUTHSTAT_SNID_OFFSET   (6U)
#define ETM_AUTHSTAT_SNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, SNID))   /*!< Mask  0x000000C0 - security level for secure non-invasive debug */

#define ETM_AUTHSTAT_SID_OFFSET    (4U)
#define ETM_AUTHSTAT_SID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, SID))    /*!< Mask  0x00000030 - security level for secure invasive debug */

#define ETM_AUTHSTAT_NSNID_OFFSET  (2U)
#define ETM_AUTHSTAT_NSNID_MASK    (0x3UL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, NSNID))  /*!< Mask  0x0000000C - security level for non secure non-invasive debug */

#define ETM_AUTHSTAT_NSID_OFFSET   (0U)
#define ETM_AUTHSTAT_NSID_MASK     (0x3FUL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, NSID))  /*!< Mask  0x00000003 - security level for non secure invasive debug */

// Values of authentification signal status register
#define ETM_AUTHSIGNAL_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_AUTHSIGNAL_DISABLED        (0x2UL)  /*!< Value 0x00000002 */
#define ETM_AUTHSIGNAL_ENABLED         (0x3UL)  /*!< Value 0x00000003 */

/*!< Device architecture register */
#define ETM_DEVARCH_ARCHITECT_OFFSET  (21U)
#define ETM_DEVARCH_ARCHITECT_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(ETM, DEVARCH, ARCHITECT))  /*!< Mask  0xFFE00000 */

#define ETM_DEVARCH_PRESENT_OFFSET    (20U)
#define ETM_DEVARCH_PRESENT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, DEVARCH, PRESENT))      /*!< Mask  0x001000C0 */

#define ETM_DEVARCH_REVISION_OFFSET   (16U)
#define ETM_DEVARCH_REVISION_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, DEVARCH, REVISION))     /*!< Mask  0x000F0000 */

#define ETM_DEVARCH_ARCHVER_OFFSET    (12U)
#define ETM_DEVARCH_ARCHVER_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, DEVARCH, ARCHVER))      /*!< Mask  0x0000F000 */

#define ETM_DEVARCH_ARCHPART_OFFSET   (0U)
#define ETM_DEVARCH_ARCHPART_MASK     (0xFFFUL << REGISTER_FIELD_OFFSET(ETM, DEVARCH, ARCHPART))   /*!< Mask  0x00000FFF */

// Values of architect component register
#define ETM_ARCHITECT_ARM  (0x23BUL)  /*!< Value 0x0000023B - ARM continuation code (bits 31:28) is 0x4 and JEP106 code for ARM (bits 27:21) is 0x3B */

// Values of device architecture presence bit
#define ETM_DEVARCH_PRESENT  (0x1UL)  /*!< Value 0x00000001 */

// Values of revision register
#define ETM_REVISION_ETMV40  (0x0UL)  /*!< Value 0x00000000 - ETMv4.0 */
#define ETM_REVISION_ETMV41  (0x1UL)  /*!< Value 0x00000000 - ETMv4.1 */
#define ETM_REVISION_ETMV42  (0x2UL)  /*!< Value 0x00000000 - ETMv4.2 */
#define ETM_REVISION_ETMV43  (0x3UL)  /*!< Value 0x00000000 - ETMv4.3 */
#define ETM_REVISION_ETMV44  (0x4UL)  /*!< Value 0x00000000 - ETMv4.4 */
#define ETM_REVISION_ETMV45  (0x5UL)  /*!< Value 0x00000000 - ETMv4.5 */
#define ETM_REVISION_ETMV46  (0x6UL)  /*!< Value 0x00000000 - ETMv4.6 */

// Values of architecture version register
#define ETM_ARCHVERSION_V4  (0x4UL)  /*!< Value 0x00000004 - ETMv4 */

// Values of architecture part number register
#define ETM_ARCHPARTNUM_ETMV4  (0xA13UL)  /*!< Value 0x00000A13 */

/*!< Device ID register */
#define ETM_DEVID_RSVD_OFFSET  (0U)
#define ETM_DEVID_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_DEVID_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000001 */
#define ETM_DEVID_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000002 */
#define ETM_DEVID_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000004 */
#define ETM_DEVID_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000008 */
#define ETM_DEVID_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000010 */
#define ETM_DEVID_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000020 */
#define ETM_DEVID_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000040 */
#define ETM_DEVID_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000080 */
#define ETM_DEVID_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000100 */
#define ETM_DEVID_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000200 */
#define ETM_DEVID_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000400 */
#define ETM_DEVID_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00000800 */
#define ETM_DEVID_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00001000 */
#define ETM_DEVID_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00002000 */
#define ETM_DEVID_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00004000 */
#define ETM_DEVID_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00008000 */
#define ETM_DEVID_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00010000 */
#define ETM_DEVID_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00020000 */
#define ETM_DEVID_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00040000 */
#define ETM_DEVID_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00080000 */
#define ETM_DEVID_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00100000 */
#define ETM_DEVID_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00200000 */
#define ETM_DEVID_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00400000 */
#define ETM_DEVID_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x00800000 */
#define ETM_DEVID_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x01000000 */
#define ETM_DEVID_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x02000000 */
#define ETM_DEVID_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x04000000 */
#define ETM_DEVID_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x08000000 */
#define ETM_DEVID_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x10000000 */
#define ETM_DEVID_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x20000000 */
#define ETM_DEVID_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x40000000 */
#define ETM_DEVID_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, DEVID, RSVD))  /*!< Value 0x80000000 */

/*!< Device type register */
#define ETM_DEVTYPE_SUBTYPE_OFFSET    (4U)
#define ETM_DEVTYPE_SUBTYPE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, DEVTYPE, SUBTYPE))    /*!< Mask  0x000000F0 */

#define ETM_DEVTYPE_MAJORTYPE_OFFSET  (0U)
#define ETM_DEVTYPE_MAJORTYPE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, DEVTYPE, MAJORTYPE))  /*!< Mask  0x0000000F */

// Values of the sub-classification register
#define ETM_SUBTYPE_PETRACE  (0x1UL)  /*!< Value 0x00000001 */

// Values of the major classification register
#define ETM_MAJORTYPE_TRACESOURCE  (0x1UL)  /*!< Value 0x00000001 */

/*!< Peripheral identitication 4 register */
#define ETM_PIDR4_4KCOUNT_OFFSET    (4U)
#define ETM_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define ETM_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define ETM_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define ETM_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define ETM_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define ETM_PIDR4_JEP106CON_OFFSET  (0U)
#define ETM_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define ETM_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define ETM_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define ETM_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define ETM_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of square root of the number of 4K blocks register
#define ETM_4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define ETM_4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define ETM_4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define ETM_4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define ETM_4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define ETM_4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define ETM_4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define ETM_4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define ETM_4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define ETM_4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define ETM_4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define ETM_4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define ETM_4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define ETM_PIDR4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define ETM_PIDR5_RSVD_OFFSET  (0U)
#define ETM_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define ETM_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define ETM_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define ETM_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define ETM_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define ETM_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define ETM_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define ETM_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define ETM_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define ETM_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define ETM_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define ETM_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define ETM_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define ETM_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define ETM_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define ETM_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define ETM_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define ETM_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define ETM_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define ETM_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define ETM_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define ETM_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define ETM_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define ETM_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define ETM_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define ETM_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define ETM_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define ETM_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define ETM_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define ETM_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define ETM_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define ETM_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define ETM_PIDR6_RSVD_OFFSET  (0U)
#define ETM_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define ETM_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define ETM_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define ETM_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define ETM_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define ETM_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define ETM_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define ETM_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define ETM_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define ETM_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define ETM_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define ETM_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define ETM_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define ETM_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define ETM_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define ETM_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define ETM_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define ETM_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define ETM_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define ETM_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define ETM_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define ETM_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define ETM_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define ETM_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define ETM_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define ETM_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define ETM_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define ETM_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define ETM_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define ETM_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define ETM_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define ETM_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define ETM_PIDR7_RSVD_OFFSET  (0U)
#define ETM_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define ETM_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define ETM_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define ETM_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define ETM_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define ETM_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define ETM_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define ETM_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define ETM_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define ETM_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define ETM_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define ETM_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define ETM_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define ETM_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define ETM_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define ETM_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define ETM_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define ETM_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define ETM_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define ETM_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define ETM_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define ETM_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define ETM_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define ETM_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define ETM_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define ETM_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define ETM_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define ETM_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define ETM_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define ETM_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define ETM_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define ETM_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define ETM_PIDR0_PARTNUM_OFFSET  (0U)
#define ETM_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define ETM_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define ETM_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define ETM_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define ETM_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define ETM_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define ETM_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define ETM_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define ETM_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define ETM_PIDR0PARTNUM_ST   (0x12UL)  /*!< Value 0x00000012 */
#define ETM_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define ETM_PIDR1_JEP106ID_OFFSET  (4U)
#define ETM_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define ETM_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define ETM_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define ETM_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define ETM_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define ETM_PIDR1_PARTNUM_OFFSET   (0U)
#define ETM_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define ETM_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define ETM_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define ETM_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define ETM_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define ETM_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define ETM_PIDR1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define ETM_PIDR2_REVISION_OFFSET    (4U)
#define ETM_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define ETM_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define ETM_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define ETM_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define ETM_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define ETM_PIDR2_JEDEC_OFFSET       (3U)
#define ETM_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define ETM_PIDR2_JEDEC106ID_OFFSET  (0U)
#define ETM_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define ETM_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define ETM_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define ETM_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define ETM_REVISION_R0P2  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC assigned value select bit
#define ETM_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define ETM_PIDR2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define ETM_PIDR3_REVAND_OFFSET  (4U)
#define ETM_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define ETM_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define ETM_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define ETM_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define ETM_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define ETM_PIDR3_CMOD_OFFSET    (0U)
#define ETM_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define ETM_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define ETM_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define ETM_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define ETM_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(ETM, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define ETM_REVAND_NOMETALFIX  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define ETM_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define ETM_CIDR0_PREAMBLE_OFFSET  (0U)
#define ETM_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define ETM_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define ETM_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define ETM_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define ETM_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define ETM_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define ETM_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define ETM_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define ETM_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define ETM_CIDR0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define ETM_CIDR1_CLASS_OFFSET      (4U)
#define ETM_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(ETM, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define ETM_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define ETM_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define ETM_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define ETM_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define ETM_CIDR1_PREAMBLE_OFFSET   (0U)
#define ETM_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define ETM_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define ETM_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define ETM_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define ETM_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(ETM, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define ETM_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define ETM_CLASS_ARM  (0x1UL)  /*!< Value 0x00000001 */
#define ETM_CLASS_ST   (0x9UL)  /*!< Value 0x00000009 */

/*!< Component identitication 2 register */
#define ETM_CIDR2_PREAMBLE_OFFSET  (0U)
#define ETM_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define ETM_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define ETM_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define ETM_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define ETM_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define ETM_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define ETM_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define ETM_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define ETM_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define ETM_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define ETM_CIDR3_PREAMBLE_OFFSET  (0U)
#define ETM_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define ETM_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define ETM_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define ETM_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define ETM_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define ETM_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define ETM_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define ETM_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define ETM_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define ETM_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

#define ETM_OFFSET 0x41000UL
#define ETM_BASE OFFSET_ADDRESS(PPB_BASE, ETM_OFFSET)
#define ETM REGISTER_PTR(etm_regs, ETM_BASE)

/** @} */ // End of ETM group

/** @} */ // End of RegisterGroup group

#endif // ETM_REGISTERS_H
