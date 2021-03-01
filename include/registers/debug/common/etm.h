#ifndef ETM_H
#define ETM_H
/**
 * @copyright
 * @file etm.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Embedded trace macrocell (ETM) global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup ETM Embedded trace macrocell (ETM) macros
 *  @brief Embedded trace macrocell (ETM) macros
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

/*!< Embedded trace macrocell (ETM) registers in private peripheral bus (PPB) */
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
#define ETM_LOWPOWERSTATE_INACTIVE  (0x1UL)  /*!< Value 0x00000001 */

// Values of AMBA Trace Bus (ATB) trigger enable bit
#define ETM_ATBTRIGGERS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_ATBTRIGGERS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

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

/*!< Global timestamp control register */
#define ETM_TSCTLR_EVENT_OFFSET  (0U)
#define ETM_TSCTLR_EVENT_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, TSCTLR, EVENT))  /*!< Mask  0x000000FF */

// Values of event selector bits
#define ETM_GBLTIMESTQMPSELECTEDEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, TSCTLR, EVENT) + ETM_EVENTRESOURCETYPE)
#define ETM_GBLTIMESTQMPSELECTEDEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, GBLTIMESTQMPSELECTEDEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_GBLTIMESTQMPSELECTEDEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, TSCTLR, EVENT) + ETM_EVENTRESOURCENUMBER)
#define ETM_GBLTIMESTQMPSELECTEDEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, GBLTIMESTQMPSELECTEDEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

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


/*!< Synchronization period register */
#define ETM_SYNCPR_PERIOD_OFFSET  (0U)
#define ETM_SYNCPR_PERIOD_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, SYNCPR, PERIOD))  /*!< Mask  0x0000001F */

// Values of the register controlling how many bytes of trace a trace unit generates before a trace synchronization request occurs
#define ETM_TRACESYNCHRONIZATIONPERIOD_0BYTES         (0x00UL)  /*!< Value 0x00000000 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_256BYTES       (0x08UL)  /*!< Value 0x00000008 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_512BYTES       (0x09UL)  /*!< Value 0x00000009 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_1024BYTES      (0x0AUL)  /*!< Value 0x0000000A */
#define ETM_TRACESYNCHRONIZATIONPERIOD_2096BYTES      (0x0BUL)  /*!< Value 0x0000000B */
#define ETM_TRACESYNCHRONIZATIONPERIOD_4096BYTES      (0x0CUL)  /*!< Value 0x0000000C */
#define ETM_TRACESYNCHRONIZATIONPERIOD_8192BYTES      (0x0DUL)  /*!< Value 0x0000000D */
#define ETM_TRACESYNCHRONIZATIONPERIOD_16384BYTES     (0x0EUL)  /*!< Value 0x0000000E */
#define ETM_TRACESYNCHRONIZATIONPERIOD_32768BYTES     (0x0FUL)  /*!< Value 0x0000000F */
#define ETM_TRACESYNCHRONIZATIONPERIOD_65536BYTES     (0x10UL)  /*!< Value 0x00000010 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_131072BYTES    (0x11UL)  /*!< Value 0x00000011 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_262144BYTES    (0x12UL)  /*!< Value 0x00000012 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_524288BYTES    (0x13UL)  /*!< Value 0x00000013 */
#define ETM_TRACESYNCHRONIZATIONPERIOD_1048576BYTES   (0x14UL)  /*!< Value 0x00000014 */

/*!< Cycle count control register */
#define ETM_CCCTLR_THRESHOLD_OFFSET  (0U)
#define ETM_CCCTLR_THRESHOLD_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Mask  0x00000FFF */
#define ETM_CCCTLR_THRESHOLD_0       (0x001UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000001 */
#define ETM_CCCTLR_THRESHOLD_1       (0x002UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000002 */
#define ETM_CCCTLR_THRESHOLD_2       (0x004UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000004 */
#define ETM_CCCTLR_THRESHOLD_3       (0x008UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000008 */
#define ETM_CCCTLR_THRESHOLD_4       (0x010UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000010 */
#define ETM_CCCTLR_THRESHOLD_5       (0x020UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000020 */
#define ETM_CCCTLR_THRESHOLD_6       (0x040UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000040 */
#define ETM_CCCTLR_THRESHOLD_7       (0x080UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000080 */
#define ETM_CCCTLR_THRESHOLD_8       (0x100UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000100 */
#define ETM_CCCTLR_THRESHOLD_9       (0x200UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000200 */
#define ETM_CCCTLR_THRESHOLD_10      (0x400UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000400 */
#define ETM_CCCTLR_THRESHOLD_11      (0x800UL << REGISTER_FIELD_OFFSET(ETM, CCCTLR, THRESHOLD))  /*!< Value 0x00000800 */

/*!< Branch broadcast control register */
#define ETM_BBCTLR_MODE_OFFSET   (8U)
#define ETM_BBCTLR_MODE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, BBCTLR, MODE))    /*!< Mask  0x00000100 */

#define ETM_BBCTLR_RANGE_OFFSET  (0U)
#define ETM_BBCTLR_RANGE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, BBCTLR, RANGE))  /*!< Mask  0x000000FF */

// Values of branch broadcasting mode register
#define ETM_BROADCASTINGMODE_EXCLUDEMODE  (0x0UL)  /*!< Value 0x00000000 - Branch broadcasting disabled */
#define ETM_BROADCASTINGMODE_INCLUDEMODE  (0x1UL)  /*!< Value 0x00000001 - Branch broadcasting enabled  */

// Values of bits of the address range register bits
#define ETM_ADDRESSRANGECOMPARATOR7  (7U)
#define ETM_ADDRESSRANGECOMPARATOR6  (6U)
#define ETM_ADDRESSRANGECOMPARATOR5  (5U)
#define ETM_ADDRESSRANGECOMPARATOR4  (4U)
#define ETM_ADDRESSRANGECOMPARATOR3  (3U)
#define ETM_ADDRESSRANGECOMPARATOR2  (2U)
#define ETM_ADDRESSRANGECOMPARATOR1  (1U)
#define ETM_ADDRESSRANGECOMPARATOR0  (0U)

// Values of address range field register
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00000080 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00000040 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00000020 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00000010 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00000008 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00000004 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00000002 */

#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, BBCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_BRANCHBROADCASTINGADDRESSRANGE_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, BRANCHBROADCASTINGADDRESSRANGE, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00000001 */

// Values of address range comparator pair selection bit
#define ETM_BRANCHBROADCASTINGADDRESSRANGEADDRESSRANGECOMPARATOR_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_BRANCHBROADCASTINGADDRESSRANGEADDRESSRANGECOMPARATOR_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

/*!< Trace ID register */
#define ETM_TRACEIDR_TRACEDATAID_OFFSET  (8U)
#define ETM_TRACEIDR_TRACEDATAID_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Mask  0x00007F00 */
#define ETM_TRACEIDR_TRACEDATAID_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000001 */
#define ETM_TRACEIDR_TRACEDATAID_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000002 */
#define ETM_TRACEIDR_TRACEDATAID_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000004 */
#define ETM_TRACEIDR_TRACEDATAID_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000008 */
#define ETM_TRACEIDR_TRACEDATAID_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000010 */
#define ETM_TRACEIDR_TRACEDATAID_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000020 */
#define ETM_TRACEIDR_TRACEDATAID_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEDATAID))  /*!< Value 0x00000040 */

#define ETM_TRACEIDR_TRACEID_OFFSET      (0U)
#define ETM_TRACEIDR_TRACEID_MASK        (0x7FUL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Mask  0x0000007F */
#define ETM_TRACEIDR_TRACEID_0           (0x01UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000001 */
#define ETM_TRACEIDR_TRACEID_1           (0x02UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000002 */
#define ETM_TRACEIDR_TRACEID_2           (0x04UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000004 */
#define ETM_TRACEIDR_TRACEID_3           (0x08UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000008 */
#define ETM_TRACEIDR_TRACEID_4           (0x10UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000010 */
#define ETM_TRACEIDR_TRACEID_5           (0x20UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000020 */
#define ETM_TRACEIDR_TRACEID_6           (0x40UL << REGISTER_FIELD_OFFSET(ETM, TRACEIDR, TRACEID))      /*!< Value 0x00000040 */

/*!< Q element control register */
#define ETM_QCTLR_MODE_OFFSET   (8U)
#define ETM_QCTLR_MODE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, QCTLR, MODE))    /*!< Mask  0x00000100 */

#define ETM_QCTLR_RANGE_OFFSET  (0U)
#define ETM_QCTLR_RANGE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, QCTLR, RANGE))  /*!< Mask  0x000000FF */

// Values of branch broadcasting mode register
#define ETM_QELEMENTGENERATIONMODE_EXCLUDEMODE  (0x0UL)  /*!< Value 0x00000000 - Address range where the trace cannot generate Q elements */
#define ETM_QELEMENTGENERATIONMODE_INCLUDEMODE  (0x1UL)  /*!< Value 0x00000001 - Address range where the trace can generate Q elements    */

// Values of address range field register
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00000080 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00000040 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00000020 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00000010 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00000008 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00000004 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00000002 */

#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, QCTLR, INSTEN) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_QELEMENTADDRESSRANGE_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, QELEMENTADDRESSRANGE, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00000001 */

// Values of address range comparator pair selection bit
#define ETM_QELEMENTADDRESSRANGEADDRESSRANGECOMPARATOR_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_QELEMENTADDRESSRANGEADDRESSRANGECOMPARATOR_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

/*!< ViewInst main control register */
#define ETM_VICTLR_EXLEVEL_NS_OFFSET  (20U)
#define ETM_VICTLR_EXLEVEL_NS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_NS))  /*!< Mask  0x00F00000 */

#define ETM_VICTLR_EXLEVEL_S_OFFSET   (16U)
#define ETM_VICTLR_EXLEVEL_S_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_S))   /*!< Mask  0x000F0000 */

#define ETM_VICTLR_TRCERR_OFFSET      (11U)
#define ETM_VICTLR_TRCERR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, VICTLR, TRCERR))      /*!< Mask  0x00000800 */

#define ETM_VICTLR_TRCRESET_OFFSET    (10U)
#define ETM_VICTLR_TRCRESET_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, VICTLR, TRCRESET))    /*!< Mask  0x00000400 */

#define ETM_VICTLR_SSTATUS_OFFSET     (9U)
#define ETM_VICTLR_SSTATUS_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, VICTLR, SSTATUS))     /*!< Mask  0x00000200 */

#define ETM_VICTLR_EVENT_OFFSET       (0U)
#define ETM_VICTLR_EVENT_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VICTLR, EVENT))      /*!< Mask  0x000000FF */

// Values of bits of the instruction tracing exception level enable register
#define ETM_EXCEPTIONLEVEL3  (3U)
#define ETM_EXCEPTIONLEVEL2  (2U)
#define ETM_EXCEPTIONLEVEL1  (1U)
#define ETM_EXCEPTIONLEVEL0  (0U)

// Values of bits of register controlling whether instruction tracing is enabled for a given exception level in non secure state
#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL3)
#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, NONSECUREEXCEPTIONLEVEL3))  /*!< Mask  0x00800000 */

#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL2)
#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, NONSECUREEXCEPTIONLEVEL2))  /*!< Mask  0x00400000 */

#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL1)
#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, NONSECUREEXCEPTIONLEVEL1))  /*!< Mask  0x00200000 */

#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL0)
#define ETM_INSTRTRACING_NONSECUREEXCEPTIONLEVEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, NONSECUREEXCEPTIONLEVEL0))  /*!< Mask  0x00100000 */

// Values of bits of register controlling whether instruction tracing is enabled for a given exception level in secure state
#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL3)
#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, SECUREEXCEPTIONLEVEL3))  /*!< Mask  0x00080000 */

#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL2)
#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, SECUREEXCEPTIONLEVEL2))  /*!< Mask  0x00040000 */

#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL1)
#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, SECUREEXCEPTIONLEVEL1))  /*!< Mask  0x00020000 */

#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL0)
#define ETM_INSTRTRACING_SECUREEXCEPTIONLEVEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACING, SECUREEXCEPTIONLEVEL0))  /*!< Mask  0x00010000 */

// Values of ViewInst event selector bits
#define ETM_VIEWINSTSELECTEDEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, VICTLR, EVENT) + ETM_EVENTRESOURCETYPE)
#define ETM_VIEWINSTSELECTEDEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSELECTEDEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_VIEWINSTSELECTEDEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VICTLR, EVENT) + ETM_EVENTRESOURCENUMBER)
#define ETM_VIEWINSTSELECTEDEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSELECTEDEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

// Values of exception level enable bit
#define ETM_EXCEPTIONLEVEL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_EXCEPTIONLEVEL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of system error exception tracing enable bit
#define ETM_SYSERROREXCEPTIONTRACING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SYSERROREXCEPTIONTRACING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of reset exception tracing enable bit
#define ETM_RESETEXCEPTIONTRACING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RESETEXCEPTIONTRACING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of start/stop logic status bit
#define ETM_STARTSTOPLOGIC_STOPPEDSTATE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_STARTSTOPLOGIC_STARTEDSTATE  (0x1UL)  /*!< Value 0x00000001 */

/*!< ViewInst Include-Exclude control register */
#define ETM_VIIECTLR_EXCLUDE_OFFSET       (16U)
#define ETM_VIIECTLR_EXCLUDE_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE))      /*!< Mask  0x00FF0000 */

#define ETM_VIIECTLR_INCLUDE_OFFSET       (0U)
#define ETM_VIIECTLR_INCLUDE_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE))      /*!< Mask  0x000000FF */

// Values of bits of register controlling address range comparator pairs in use with ViewInst exclude control
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00800000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00400000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00200000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00100000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00080000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00040000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00020000 */

#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_VIEWINSTEXCLUDECONTROL_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTEXCLUDECONTROL, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling address range comparator pairs in use with ViewInst include control
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00000080 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00000040 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00000020 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00000010 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00000008 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00000004 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00000002 */

#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIIECTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_VIEWINSTINCLUDECONTROL_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTINCLUDECONTROL, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00000001 */

// Values of ViewInst exclude control enable bit for a address range comparator
#define ETM_VIEWINSTEXCLUDECONTROL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWINSTEXCLUDECONTROL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of ViewInst include control enable bit for a address range comparator
#define ETM_VIEWINSTINCLUDECONTROL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWINSTINCLUDECONTROL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< ViewInst start/stop processing element (PE) comparator control register */
#define ETM_VIPCSSCTLR_STOP_OFFSET   (16U)
#define ETM_VIPCSSCTLR_STOP_MASK     (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP))   /*!< Mask  0x00FF0000 */

#define ETM_VIPCSSCTLR_START_OFFSET  (0U)
#define ETM_VIPCSSCTLR_START_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START))  /*!< Mask  0x000000FF */

// Values of processing element (PE) comparator
#define ETM_PE7  (7U)
#define ETM_PE6  (6U)
#define ETM_PE5  (5U)
#define ETM_PE4  (4U)
#define ETM_PE3  (3U)
#define ETM_PE2  (2U)
#define ETM_PE1  (1U)
#define ETM_PE0  (0U)

// Values of bits of register controlling processing elements (PE) in use with ViewInst start/stop control comparator inputs used for the purpose of stopping trace
#define ETM_VIEWINSTSTOPRESOURCE_PE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE7)
#define ETM_VIEWINSTSTOPRESOURCE_PE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE7))  /*!< Mask  0x000800000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE6)
#define ETM_VIEWINSTSTOPRESOURCE_PE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE6))  /*!< Mask  0x000400000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE5)
#define ETM_VIEWINSTSTOPRESOURCE_PE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE5))  /*!< Mask  0x000200000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE4)
#define ETM_VIEWINSTSTOPRESOURCE_PE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE4))  /*!< Mask  0x000100000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE3)
#define ETM_VIEWINSTSTOPRESOURCE_PE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE3))  /*!< Mask  0x00080000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE2)
#define ETM_VIEWINSTSTOPRESOURCE_PE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE2))  /*!< Mask  0x00040000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE1)
#define ETM_VIEWINSTSTOPRESOURCE_PE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE1))  /*!< Mask  0x00020000 */

#define ETM_VIEWINSTSTOPRESOURCE_PE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, STOP) + ETM_PE0)
#define ETM_VIEWINSTSTOPRESOURCE_PE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTOPRESOURCE, PE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling processing elements (PE) in use with ViewInst start/stop control comparator inputs used for the purpose of starting trace
#define ETM_VIEWINSTSTARTRESOURCE_PE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE7)
#define ETM_VIEWINSTSTARTRESOURCE_PE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE7))  /*!< Mask  0x00000080 */

#define ETM_VIEWINSTSTARTRESOURCE_PE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE6)
#define ETM_VIEWINSTSTARTRESOURCE_PE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE6))  /*!< Mask  0x00000040 */

#define ETM_VIEWINSTSTARTRESOURCE_PE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE5)
#define ETM_VIEWINSTSTARTRESOURCE_PE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE5))  /*!< Mask  0x00000020 */

#define ETM_VIEWINSTSTARTRESOURCE_PE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE4)
#define ETM_VIEWINSTSTARTRESOURCE_PE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE4))  /*!< Mask  0x00000010 */

#define ETM_VIEWINSTSTARTRESOURCE_PE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE3)
#define ETM_VIEWINSTSTARTRESOURCE_PE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE3))  /*!< Mask  0x00000008 */

#define ETM_VIEWINSTSTARTRESOURCE_PE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE2)
#define ETM_VIEWINSTSTARTRESOURCE_PE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE2))  /*!< Mask  0x00000004 */

#define ETM_VIEWINSTSTARTRESOURCE_PE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE1)
#define ETM_VIEWINSTSTARTRESOURCE_PE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE1))  /*!< Mask  0x00000002 */

#define ETM_VIEWINSTSTARTRESOURCE_PE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VIPCSSCTLR, START) + ETM_PE0)
#define ETM_VIEWINSTSTARTRESOURCE_PE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWINSTSTARTRESOURCE, PE0))  /*!< Mask  0x00000001 */

// Values of bit of register controlling processing elements (PE) in use with ViewInst start/stop control comparator inputs used for the purpose of stopping trace
#define ETM_VIEWINSTSTOPRESOURCE_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWINSTSTOPRESOURCE_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

// Values of bit of register controlling processing elements (PE) in use with ViewInst start/stop control comparator inputs used for the purpose of starting trace
#define ETM_VIEWINSTSTARTRESOURCE_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWINSTSTARTRESOURCE_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

/*!< ViewData main control register */
#define ETM_VDCTLR_TRCEXDATA_OFFSET  (12U)
#define ETM_VDCTLR_TRCEXDATA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VDCTLR, TRCEXDATA))  /*!< Mask  0x00001000 */

#define ETM_VDCTLR_TBI_OFFSET        (11U)
#define ETM_VDCTLR_TBI_MASK          (0x1UL << REGISTER_FIELD_OFFSET(ETM, VDCTLR, TBI))        /*!< Mask  0x00000800 */

#define ETM_VDCTLR_PCREL_OFFSET      (10U)
#define ETM_VDCTLR_PCREL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, VDCTLR, PCREL))      /*!< Mask  0x00000400 */

#define ETM_VDCTLR_SPREL_OFFSET      (9U)
#define ETM_VDCTLR_SPREL_MASK        (0x3UL << REGISTER_FIELD_OFFSET(ETM, VDCTLR, SPREL))      /*!< Mask  0x00000300 */

#define ETM_VDCTLR_EVENT_OFFSET      (0U)
#define ETM_VDCTLR_EVENT_MASK        (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VDCTLR, EVENT))     /*!< Mask  0x000000FF */

// Values of exception and exception return data transfers tracing enable bit
#define ETM_EXCEPTIONTRACINGDATA_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_EXCEPTIONTRACINGDATA_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling the information the trace unit populates in bits[63:56] if the data address
#define ETM_TRACEUNITBIT6356_DATAADDRESSBIT55    (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNITBIT6356_DATAADDRESSBIT6356  (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling whether a trace unit traces data for transfers that are relative to the the program counter (PC)
#define ETM_PCTRACEDATA_TRACED     (0x0UL)  /*!< Value 0x00000000 */
#define ETM_PCTRACEDATA_NOTTRACED  (0x1UL)  /*!< Value 0x00000001 */

// Values of register controlling whether a trace unit traces data for transfers that are relative to the the stack pointer (SP)
#define ETM_SPTRACEDATA_TRACED            (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SPTRACEDATA_ADDRESSNOTTRACED  (0x2UL)  /*!< Value 0x00000002 */
#define ETM_SPTRACEDATA_NOTTRACED         (0x3UL)  /*!< Value 0x00000003 */

// Values of bits of the single address comparator register bits
#define ETM_SINGLEADDRESSCOMPARATOR15  (15U)
#define ETM_SINGLEADDRESSCOMPARATOR14  (14U)
#define ETM_SINGLEADDRESSCOMPARATOR13  (13U)
#define ETM_SINGLEADDRESSCOMPARATOR12  (12U)
#define ETM_SINGLEADDRESSCOMPARATOR11  (11U)
#define ETM_SINGLEADDRESSCOMPARATOR10  (10U)
#define ETM_SINGLEADDRESSCOMPARATOR9   (9U)
#define ETM_SINGLEADDRESSCOMPARATOR8   (8U)
#define ETM_SINGLEADDRESSCOMPARATOR7   (7U)
#define ETM_SINGLEADDRESSCOMPARATOR6   (6U)
#define ETM_SINGLEADDRESSCOMPARATOR5   (5U)
#define ETM_SINGLEADDRESSCOMPARATOR4   (4U)
#define ETM_SINGLEADDRESSCOMPARATOR3   (3U)
#define ETM_SINGLEADDRESSCOMPARATOR2   (2U)
#define ETM_SINGLEADDRESSCOMPARATOR1   (1U)
#define ETM_SINGLEADDRESSCOMPARATOR0   (0U)

// Values of ViewData event selector bits
#define ETM_VIEWDATASELECTEDEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, VDCTLR, EVENT) + ETM_EVENTRESOURCETYPE)
#define ETM_VIEWDATASELECTEDEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATASELECTEDEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_VIEWDATASELECTEDEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDCTLR, EVENT) + ETM_EVENTRESOURCENUMBER)
#define ETM_VIEWDATASELECTEDEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, VIEWDATASELECTEDEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< ViewData Include-Exclude single address comparator control register */
#define ETM_VDSACCTLR_EXCLUDE_OFFSET       (16U)
#define ETM_VDSACCTLR_EXCLUDE_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE))      /*!< Mask  0x00FF0000 */

#define ETM_VDSACCTLR_INCLUDE_OFFSET       (0U)
#define ETM_VDSACCTLR_INCLUDE_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE))      /*!< Mask  0x000000FF */

// Values of bits of register controlling single address comparator pairs in use with ViewData exclude control
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR15_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR15)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR15_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR15))  /*!< Mask  0x80000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR14_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR14)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR14_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR14))  /*!< Mask  0x40000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR13_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR13)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR13_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR13))  /*!< Mask  0x20000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR12_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR12)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR12_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR12))  /*!< Mask  0x10000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR11_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR11)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR11_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR11))  /*!< Mask  0x08000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR10_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR10)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR10_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR10))  /*!< Mask  0x04000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR9_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR9)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR9_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR9))   /*!< Mask  0x02000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR8_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR8)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR8_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR8))   /*!< Mask  0x01000000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR7_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR7)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR7_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR7))   /*!< Mask  0x00800000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR6_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR6)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR6_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR6))   /*!< Mask  0x00400000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR5_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR5)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR5_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR5))   /*!< Mask  0x00200000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR4_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR4)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR4_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR4))   /*!< Mask  0x00100000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR3_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR3)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR3))   /*!< Mask  0x00080000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR2_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR2)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR2))   /*!< Mask  0x00040000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR1_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR1)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR1))   /*!< Mask  0x00020000 */

#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR0_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, EXCLUDE) + ETM_SINGLEADDRESSCOMPARATOR0)
#define ETM_VIEWDATAEXCLUDECONTROL_SINGLEADDRESSCOMPARATOR0_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, SINGLEADDRESSCOMPARATOR0))   /*!< Mask  0x00010000 */

// Values of bits of register controlling single address comparator pairs in use with ViewData include control
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR15_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR15)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR15_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR15))  /*!< Mask  0x00008000 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR14_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR14)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR14_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR14))  /*!< Mask  0x00004000 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR13_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR13)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR13_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR13))  /*!< Mask  0x00002000 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR12_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR12)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR12_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR12))  /*!< Mask  0x00001000 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR11_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR11)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR11_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR11))  /*!< Mask  0x00000800 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR10_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR10)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR10_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR10))  /*!< Mask  0x00000400 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR9_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR9)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR9_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR9))   /*!< Mask  0x00000200 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR8_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR8)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR8_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR8))   /*!< Mask  0x00000100 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR7_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR7)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR7_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR7))   /*!< Mask  0x00000080 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR6_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR6)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR6_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR6))   /*!< Mask  0x00000040 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR5_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR5)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR5_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR5))   /*!< Mask  0x00000020 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR4_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR4)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR4_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR4))   /*!< Mask  0x00000010 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR3_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR3)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR3))   /*!< Mask  0x00000008 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR2_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR2)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR2))   /*!< Mask  0x00000004 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR1_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR1)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR1))   /*!< Mask  0x00000002 */

#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR0_OFFSET   (REGISTER_FIELD_OFFSET(ETM, VDSACCTLR, INCLUDE) + ETM_SINGLEADDRESSCOMPARATOR0)
#define ETM_VIEWDATAINCLUDECONTROL_SINGLEADDRESSCOMPARATOR0_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, SINGLEADDRESSCOMPARATOR0))   /*!< Mask  0x00000001 */

// Values of ViewData exclude control enable bit for a single address comparator
#define ETM_VIEWDATAEXCLUDESINGLEADDRESSCOMPARATORCONTROL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWDATAEXCLUDESINGLEADDRESSCOMPARATORCONTROL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of ViewData include control enable bit for a single address comparator
#define ETM_VIEWDATAINCLUDESINGLEADDRESSCOMPARATORCONTROL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWDATAINCLUDESINGLEADDRESSCOMPARATORCONTROL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< ViewData Include-Exclude address range comparator control register */
#define ETM_VDARCCTLR_EXCLUDE_OFFSET       (16U)
#define ETM_VDARCCTLR_EXCLUDE_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE))      /*!< Mask  0x00FF0000 */

#define ETM_VDARCCTLR_INCLUDE_OFFSET       (0U)
#define ETM_VDARCCTLR_INCLUDE_MASK         (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE))      /*!< Mask  0x000000FF */

// Values of bits of register controlling address range comparator pairs in use with ViewData exclude control
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00800000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00400000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00200000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00100000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00080000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00040000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00020000 */

#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, EXCLUDE) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_VIEWDATAEXCLUDECONTROL_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAEXCLUDECONTROL, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling address range comparator pairs in use with ViewData include control
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00000080 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00000040 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00000020 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00000010 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00000008 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00000004 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00000002 */

#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VDARCCTLR, INCLUDE) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_VIEWDATAINCLUDECONTROL_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIEWDATAINCLUDECONTROL, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00000001 */

// Values of ViewData exclude control enable bit for an address range comparator
#define ETM_VIEWDATAEXCLUDEADDRESSRANGECOMPARATORCONTROL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWDATAEXCLUDEADDRESSRANGECOMPARATORCONTROL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of ViewData include control enable bit for an address range comparator
#define ETM_VIEWDATAINCLUDEADDRESSRANGECOMPARATORCONTROL_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VIEWDATAINCLUDEADDRESSRANGECOMPARATORCONTROL_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Sequencer state transition control 0 register */
#define ETM_SEQEVR0_B0_OFFSET  (8U)
#define ETM_SEQEVR0_B0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQEVR0, B0))  /*!< Mask  0x0000FF00 */

#define ETM_SEQEVR0_F0_OFFSET  (0U)
#define ETM_SEQEVR0_F0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQEVR0, F0))  /*!< Mask  0x000000FF */

// Values of backward event 0 selector bits
#define ETM_BACKWARDEVENT0_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQEVR0, B0) + ETM_EVENTRESOURCETYPE)
#define ETM_BACKWARDEVENT0_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, BACKWARDEVENT0, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_BACKWARDEVENT0_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQEVR0, B0) + ETM_EVENTRESOURCENUMBER)
#define ETM_BACKWARDEVENT0_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, BACKWARDEVENT0, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of forward event 0 selector bits
#define ETM_FORWARDEVENT0_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQEVR0, F0) + ETM_EVENTRESOURCETYPE)
#define ETM_FORWARDEVENT0_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, FORWARDEVENT0, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_FORWARDEVENT0_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQEVR0, F0) + ETM_EVENTRESOURCENUMBER)
#define ETM_FORWARDEVENT0_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, FORWARDEVENT0, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Sequencer state transition control 1 register */
#define ETM_SEQEVR1_B1_OFFSET  (8U)
#define ETM_SEQEVR1_B1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQEVR1, B1))  /*!< Mask  0x0000FF00 */

#define ETM_SEQEVR1_F1_OFFSET  (0U)
#define ETM_SEQEVR1_F1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQEVR1, F1))  /*!< Mask  0x000000FF */

// Values of backward event 1 selector bits
#define ETM_BACKWARDEVENT1_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQEVR1, B1) + ETM_EVENTRESOURCETYPE)
#define ETM_BACKWARDEVENT1_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, BACKWARDEVENT1, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_BACKWARDEVENT1_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQEVR1, B1) + ETM_EVENTRESOURCENUMBER)
#define ETM_BACKWARDEVENT1_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, BACKWARDEVENT1, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of forward event 1 selector bits
#define ETM_FORWARDEVENT1_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQEVR1, F1) + ETM_EVENTRESOURCETYPE)
#define ETM_FORWARDEVENT1_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, FORWARDEVENT1, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_FORWARDEVENT1_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQEVR1, F1) + ETM_EVENTRESOURCENUMBER)
#define ETM_FORWARDEVENT1_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, FORWARDEVENT1, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Sequencer state transition control 2 register */
#define ETM_SEQEVR2_B2_OFFSET  (8U)
#define ETM_SEQEVR2_B2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQEVR2, B2))  /*!< Mask  0x0000FF00 */

#define ETM_SEQEVR2_F2_OFFSET  (0U)
#define ETM_SEQEVR2_F2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQEVR2, F2))  /*!< Mask  0x000000FF */

// Values of backward event 2 selector bits
#define ETM_BACKWARDEVENT2_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQEVR2, B2) + ETM_EVENTRESOURCETYPE)
#define ETM_BACKWARDEVENT2_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, BACKWARDEVENT2, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_BACKWARDEVENT2_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQEVR2, B2) + ETM_EVENTRESOURCENUMBER)
#define ETM_BACKWARDEVENT2_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, BACKWARDEVENT2, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of forward event 2 selector bits
#define ETM_FORWARDEVENT2_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQEVR2, F2) + ETM_EVENTRESOURCETYPE)
#define ETM_FORWARDEVENT2_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, FORWARDEVENT2, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_FORWARDEVENT2_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQEVR2, F2) + ETM_EVENTRESOURCENUMBER)
#define ETM_FORWARDEVENT2_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, FORWARDEVENT2, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Sequencer reset control register */
#define ETM_SEQRSTEVR_RST_OFFSET  (0U)
#define ETM_SEQRSTEVR_RST_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SEQRSTEVR, RST))  /*!< Mask  0x000000FF */

// Values of reset event selector bits
#define ETM_RESETEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, SEQRSTEVR, RST) + ETM_EVENTRESOURCETYPE)
#define ETM_RESETEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, RESETEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_RESETEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SEQRSTEVR, RST) + ETM_EVENTRESOURCENUMBER)
#define ETM_RESETEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, RESETEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Sequencer state register */
#define ETM_SEQSTR_STATE_OFFSET  (0U)
#define ETM_SEQSTR_STATE_MASK    (0x3UL << REGISTER_FIELD_OFFSET(ETM, SEQSTR, STATE))  /*!< Mask  0x00000003 */

// Values of sequence state register
#define ETM_EVENTSEQUENCER_SATET0  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_EVENTSEQUENCER_STATE1  (0x1UL)  /*!< Value 0x00000002 */
#define ETM_EVENTSEQUENCER_STATE2  (0x2UL)  /*!< Value 0x00000002 */
#define ETM_EVENTSEQUENCER_STATE3  (0x3UL)  /*!< Value 0x00000003 */

/*!< External input select register */
#define ETM_EXTINSELR_SEL3_OFFSET  (24U)
#define ETM_EXTINSELR_SEL3_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Mask  0xFF000000 */
#define ETM_EXTINSELR_SEL3_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x01000000 */
#define ETM_EXTINSELR_SEL3_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x02000000 */
#define ETM_EXTINSELR_SEL3_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x04000000 */
#define ETM_EXTINSELR_SEL3_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x08000000 */
#define ETM_EXTINSELR_SEL3_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x10000000 */
#define ETM_EXTINSELR_SEL3_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x20000000 */
#define ETM_EXTINSELR_SEL3_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x40000000 */
#define ETM_EXTINSELR_SEL3_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL3))  /*!< Value 0x80000000 */

#define ETM_EXTINSELR_SEL2_OFFSET  (16U)
#define ETM_EXTINSELR_SEL2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Mask  0x00FF0000 */
#define ETM_EXTINSELR_SEL2_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00010000 */
#define ETM_EXTINSELR_SEL2_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00020000 */
#define ETM_EXTINSELR_SEL2_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00040000 */
#define ETM_EXTINSELR_SEL2_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00080000 */
#define ETM_EXTINSELR_SEL2_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00100000 */
#define ETM_EXTINSELR_SEL2_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00200000 */
#define ETM_EXTINSELR_SEL2_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00400000 */
#define ETM_EXTINSELR_SEL2_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL2))  /*!< Value 0x00800000 */

#define ETM_EXTINSELR_SEL1_OFFSET  (8U)
#define ETM_EXTINSELR_SEL1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Mask  0x0000FF00 */
#define ETM_EXTINSELR_SEL1_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00000100 */
#define ETM_EXTINSELR_SEL1_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00000200 */
#define ETM_EXTINSELR_SEL1_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00000400 */
#define ETM_EXTINSELR_SEL1_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00000800 */
#define ETM_EXTINSELR_SEL1_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00001000 */
#define ETM_EXTINSELR_SEL1_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00002000 */
#define ETM_EXTINSELR_SEL1_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00004000 */
#define ETM_EXTINSELR_SEL1_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL1))  /*!< Value 0x00008000 */

#define ETM_EXTINSELR_SEL0_OFFSET  (0U)
#define ETM_EXTINSELR_SEL0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Mask  0x000000FF */
#define ETM_EXTINSELR_SEL0_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000001 */
#define ETM_EXTINSELR_SEL0_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000002 */
#define ETM_EXTINSELR_SEL0_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000004 */
#define ETM_EXTINSELR_SEL0_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000008 */
#define ETM_EXTINSELR_SEL0_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000010 */
#define ETM_EXTINSELR_SEL0_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000020 */
#define ETM_EXTINSELR_SEL0_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000040 */
#define ETM_EXTINSELR_SEL0_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, EXTINSELR, SEL0))  /*!< Value 0x00000080 */

/*!< Counter 0 reload value register */
#define ETM_CNTRLDVR0_VALUE0_OFFSET  (0U)
#define ETM_CNTRLDVR0_VALUE0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Mask  0x0000FFFF */
#define ETM_CNTRLDVR0_VALUE0_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000001 */
#define ETM_CNTRLDVR0_VALUE0_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000002 */
#define ETM_CNTRLDVR0_VALUE0_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000004 */
#define ETM_CNTRLDVR0_VALUE0_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000008 */
#define ETM_CNTRLDVR0_VALUE0_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000010 */
#define ETM_CNTRLDVR0_VALUE0_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000020 */
#define ETM_CNTRLDVR0_VALUE0_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000040 */
#define ETM_CNTRLDVR0_VALUE0_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000080 */
#define ETM_CNTRLDVR0_VALUE0_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000100 */
#define ETM_CNTRLDVR0_VALUE0_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000200 */
#define ETM_CNTRLDVR0_VALUE0_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000400 */
#define ETM_CNTRLDVR0_VALUE0_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00000800 */
#define ETM_CNTRLDVR0_VALUE0_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00001000 */
#define ETM_CNTRLDVR0_VALUE0_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00002000 */
#define ETM_CNTRLDVR0_VALUE0_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00004000 */
#define ETM_CNTRLDVR0_VALUE0_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR0, VALUE0))  /*!< Value 0x00008000 */

/*!< Counter 1 reload value register */
#define ETM_CNTRLDVR1_VALUE1_OFFSET  (0U)
#define ETM_CNTRLDVR1_VALUE1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Mask  0x0000FFFF */
#define ETM_CNTRLDVR1_VALUE1_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000001 */
#define ETM_CNTRLDVR1_VALUE1_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000002 */
#define ETM_CNTRLDVR1_VALUE1_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000004 */
#define ETM_CNTRLDVR1_VALUE1_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000008 */
#define ETM_CNTRLDVR1_VALUE1_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000010 */
#define ETM_CNTRLDVR1_VALUE1_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000020 */
#define ETM_CNTRLDVR1_VALUE1_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000040 */
#define ETM_CNTRLDVR1_VALUE1_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000080 */
#define ETM_CNTRLDVR1_VALUE1_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000100 */
#define ETM_CNTRLDVR1_VALUE1_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000200 */
#define ETM_CNTRLDVR1_VALUE1_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000400 */
#define ETM_CNTRLDVR1_VALUE1_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00000800 */
#define ETM_CNTRLDVR1_VALUE1_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00001000 */
#define ETM_CNTRLDVR1_VALUE1_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00002000 */
#define ETM_CNTRLDVR1_VALUE1_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00004000 */
#define ETM_CNTRLDVR1_VALUE1_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR1, VALUE1))  /*!< Value 0x00008000 */

/*!< Counter 2 reload value register */
#define ETM_CNTRLDVR2_VALUE2_OFFSET  (0U)
#define ETM_CNTRLDVR2_VALUE2_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Mask  0x0000FFFF */
#define ETM_CNTRLDVR2_VALUE2_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000001 */
#define ETM_CNTRLDVR2_VALUE2_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000002 */
#define ETM_CNTRLDVR2_VALUE2_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000004 */
#define ETM_CNTRLDVR2_VALUE2_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000008 */
#define ETM_CNTRLDVR2_VALUE2_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000010 */
#define ETM_CNTRLDVR2_VALUE2_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000020 */
#define ETM_CNTRLDVR2_VALUE2_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000040 */
#define ETM_CNTRLDVR2_VALUE2_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000080 */
#define ETM_CNTRLDVR2_VALUE2_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000100 */
#define ETM_CNTRLDVR2_VALUE2_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000200 */
#define ETM_CNTRLDVR2_VALUE2_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000400 */
#define ETM_CNTRLDVR2_VALUE2_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00000800 */
#define ETM_CNTRLDVR2_VALUE2_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00001000 */
#define ETM_CNTRLDVR2_VALUE2_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00002000 */
#define ETM_CNTRLDVR2_VALUE2_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00004000 */
#define ETM_CNTRLDVR2_VALUE2_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR2, VALUE2))  /*!< Value 0x00008000 */

/*!< Counter 3 reload value register */
#define ETM_CNTRLDVR3_VALUE3_OFFSET  (0U)
#define ETM_CNTRLDVR3_VALUE3_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Mask  0x0000FFFF */
#define ETM_CNTRLDVR3_VALUE3_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000001 */
#define ETM_CNTRLDVR3_VALUE3_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000002 */
#define ETM_CNTRLDVR3_VALUE3_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000004 */
#define ETM_CNTRLDVR3_VALUE3_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000008 */
#define ETM_CNTRLDVR3_VALUE3_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000010 */
#define ETM_CNTRLDVR3_VALUE3_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000020 */
#define ETM_CNTRLDVR3_VALUE3_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000040 */
#define ETM_CNTRLDVR3_VALUE3_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000080 */
#define ETM_CNTRLDVR3_VALUE3_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000100 */
#define ETM_CNTRLDVR3_VALUE3_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000200 */
#define ETM_CNTRLDVR3_VALUE3_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000400 */
#define ETM_CNTRLDVR3_VALUE3_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00000800 */
#define ETM_CNTRLDVR3_VALUE3_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00001000 */
#define ETM_CNTRLDVR3_VALUE3_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00002000 */
#define ETM_CNTRLDVR3_VALUE3_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00004000 */
#define ETM_CNTRLDVR3_VALUE3_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTRLDVR3, VALUE3))  /*!< Value 0x00008000 */

/*!< Counter control 0 register */
#define ETM_CNTCTLR0_CNTCHAIN0_OFFSET  (17U)
#define ETM_CNTCTLR0_CNTCHAIN0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTCHAIN0))   /*!< Mask  0x00020000 */

#define ETM_CNTCTLR0_RLDSELF0_OFFSET   (16U)
#define ETM_CNTCTLR0_RLDSELF0_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDSELF0))    /*!< Mask  0x00010000 */

#define ETM_CNTCTLR0_RLDEVENT0_OFFSET  (8U)
#define ETM_CNTCTLR0_RLDEVENT0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Mask  0x0000FF00 */
#define ETM_CNTCTLR0_RLDEVENT0_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00000100 */
#define ETM_CNTCTLR0_RLDEVENT0_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00000200 */
#define ETM_CNTCTLR0_RLDEVENT0_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00000400 */
#define ETM_CNTCTLR0_RLDEVENT0_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00000800 */
#define ETM_CNTCTLR0_RLDEVENT0_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00001000 */
#define ETM_CNTCTLR0_RLDEVENT0_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00002000 */
#define ETM_CNTCTLR0_RLDEVENT0_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00004000 */
#define ETM_CNTCTLR0_RLDEVENT0_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0))  /*!< Value 0x00008000 */

#define ETM_CNTCTLR0_CNTEVENT0_OFFSET  (0U)
#define ETM_CNTCTLR0_CNTEVENT0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Mask  0x000000FF */
#define ETM_CNTCTLR0_CNTEVENT0_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000001 */
#define ETM_CNTCTLR0_CNTEVENT0_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000002 */
#define ETM_CNTCTLR0_CNTEVENT0_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000004 */
#define ETM_CNTCTLR0_CNTEVENT0_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000008 */
#define ETM_CNTCTLR0_CNTEVENT0_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000010 */
#define ETM_CNTCTLR0_CNTEVENT0_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000020 */
#define ETM_CNTCTLR0_CNTEVENT0_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000040 */
#define ETM_CNTCTLR0_CNTEVENT0_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0))  /*!< Value 0x00000080 */

// Values of reload event for counter 0 selector bits
#define ETM_CNT0RELOADEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT0RELOADEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT0RELOADEVENT, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_CNT0RELOADEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, RLDEVENT0) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT0RELOADEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT0RELOADEVENT, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of counter value decrement event for counter 0 selector bits
#define ETM_CNT0DECREMENTEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT0DECREMENTEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT0DECREMENTEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_CNT0DECREMENTEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR0, CNTEVENT0) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT0DECREMENTEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT0DECREMENTEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Counter control 1 register */
#define ETM_CNTCTLR1_CNTCHAIN1_OFFSET  (17U)
#define ETM_CNTCTLR1_CNTCHAIN1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTCHAIN1))   /*!< Mask  0x00020000 */

#define ETM_CNTCTLR1_RLDSELF1_OFFSET   (16U)
#define ETM_CNTCTLR1_RLDSELF1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDSELF1))    /*!< Mask  0x00010000 */

#define ETM_CNTCTLR1_RLDEVENT1_OFFSET  (8U)
#define ETM_CNTCTLR1_RLDEVENT1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Mask  0x0000FF00 */
#define ETM_CNTCTLR1_RLDEVENT1_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00000100 */
#define ETM_CNTCTLR1_RLDEVENT1_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00000200 */
#define ETM_CNTCTLR1_RLDEVENT1_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00000400 */
#define ETM_CNTCTLR1_RLDEVENT1_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00000800 */
#define ETM_CNTCTLR1_RLDEVENT1_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00001000 */
#define ETM_CNTCTLR1_RLDEVENT1_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00002000 */
#define ETM_CNTCTLR1_RLDEVENT1_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00004000 */
#define ETM_CNTCTLR1_RLDEVENT1_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1))  /*!< Value 0x00008000 */

#define ETM_CNTCTLR1_CNTEVENT1_OFFSET  (0U)
#define ETM_CNTCTLR1_CNTEVENT1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Mask  0x000000FF */
#define ETM_CNTCTLR1_CNTEVENT1_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000001 */
#define ETM_CNTCTLR1_CNTEVENT1_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000002 */
#define ETM_CNTCTLR1_CNTEVENT1_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000004 */
#define ETM_CNTCTLR1_CNTEVENT1_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000008 */
#define ETM_CNTCTLR1_CNTEVENT1_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000010 */
#define ETM_CNTCTLR1_CNTEVENT1_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000020 */
#define ETM_CNTCTLR1_CNTEVENT1_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000040 */
#define ETM_CNTCTLR1_CNTEVENT1_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1))  /*!< Value 0x00000080 */

// Values of reload event for counter 1 selector bits
#define ETM_CNT1RELOADEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT1RELOADEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT1RELOADEVENT, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_CNT1RELOADEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, RLDEVENT1) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT1RELOADEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT1RELOADEVENT, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of counter value decrement event for counter 1 selector bits
#define ETM_CNT1DECREMENTEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT1DECREMENTEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT1DECREMENTEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_CNT1DECREMENTEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR1, CNTEVENT1) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT1DECREMENTEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT1DECREMENTEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Counter control 2 register */
#define ETM_CNTCTLR2_CNTCHAIN2_OFFSET  (17U)
#define ETM_CNTCTLR2_CNTCHAIN2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTCHAIN2))   /*!< Mask  0x00020000 */

#define ETM_CNTCTLR2_RLDSELF2_OFFSET   (16U)
#define ETM_CNTCTLR2_RLDSELF2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDSELF2))    /*!< Mask  0x00010000 */

#define ETM_CNTCTLR2_RLDEVENT2_OFFSET  (8U)
#define ETM_CNTCTLR2_RLDEVENT2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Mask  0x0000FF00 */
#define ETM_CNTCTLR2_RLDEVENT2_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00000100 */
#define ETM_CNTCTLR2_RLDEVENT2_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00000200 */
#define ETM_CNTCTLR2_RLDEVENT2_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00000400 */
#define ETM_CNTCTLR2_RLDEVENT2_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00000800 */
#define ETM_CNTCTLR2_RLDEVENT2_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00001000 */
#define ETM_CNTCTLR2_RLDEVENT2_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00002000 */
#define ETM_CNTCTLR2_RLDEVENT2_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00004000 */
#define ETM_CNTCTLR2_RLDEVENT2_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2))  /*!< Value 0x00008000 */

#define ETM_CNTCTLR2_CNTEVENT2_OFFSET  (0U)
#define ETM_CNTCTLR2_CNTEVENT2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Mask  0x000000FF */
#define ETM_CNTCTLR2_CNTEVENT2_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000001 */
#define ETM_CNTCTLR2_CNTEVENT2_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000002 */
#define ETM_CNTCTLR2_CNTEVENT2_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000004 */
#define ETM_CNTCTLR2_CNTEVENT2_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000008 */
#define ETM_CNTCTLR2_CNTEVENT2_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000010 */
#define ETM_CNTCTLR2_CNTEVENT2_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000020 */
#define ETM_CNTCTLR2_CNTEVENT2_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000040 */
#define ETM_CNTCTLR2_CNTEVENT2_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2))  /*!< Value 0x00000080 */

// Values of reload event for counter 2 selector bits
#define ETM_CNT2RELOADEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT2RELOADEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT2RELOADEVENT, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_CNT2RELOADEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, RLDEVENT2) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT2RELOADEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT2RELOADEVENT, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of counter value decrement event for counter 2 selector bits
#define ETM_CNT2DECREMENTEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT2DECREMENTEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT2DECREMENTEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_CNT2DECREMENTEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR2, CNTEVENT2) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT2DECREMENTEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT2DECREMENTEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Counter control 3 register */
#define ETM_CNTCTLR3_CNTCHAIN3_OFFSET  (17U)
#define ETM_CNTCTLR3_CNTCHAIN3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTCHAIN3))   /*!< Mask  0x00020000 */

#define ETM_CNTCTLR3_RLDSELF3_OFFSET   (16U)
#define ETM_CNTCTLR3_RLDSELF3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDSELF3))    /*!< Mask  0x00010000 */

#define ETM_CNTCTLR3_RLDEVENT3_OFFSET  (8U)
#define ETM_CNTCTLR3_RLDEVENT3_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Mask  0x0000FF00 */
#define ETM_CNTCTLR3_RLDEVENT3_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00000100 */
#define ETM_CNTCTLR3_RLDEVENT3_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00000200 */
#define ETM_CNTCTLR3_RLDEVENT3_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00000400 */
#define ETM_CNTCTLR3_RLDEVENT3_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00000800 */
#define ETM_CNTCTLR3_RLDEVENT3_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00001000 */
#define ETM_CNTCTLR3_RLDEVENT3_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00002000 */
#define ETM_CNTCTLR3_RLDEVENT3_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00004000 */
#define ETM_CNTCTLR3_RLDEVENT3_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3))  /*!< Value 0x00008000 */

#define ETM_CNTCTLR3_CNTEVENT3_OFFSET  (0U)
#define ETM_CNTCTLR3_CNTEVENT3_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Mask  0x000000FF */
#define ETM_CNTCTLR3_CNTEVENT3_0       (0x01UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000001 */
#define ETM_CNTCTLR3_CNTEVENT3_1       (0x02UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000002 */
#define ETM_CNTCTLR3_CNTEVENT3_2       (0x04UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000004 */
#define ETM_CNTCTLR3_CNTEVENT3_3       (0x08UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000008 */
#define ETM_CNTCTLR3_CNTEVENT3_4       (0x10UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000010 */
#define ETM_CNTCTLR3_CNTEVENT3_5       (0x20UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000020 */
#define ETM_CNTCTLR3_CNTEVENT3_6       (0x40UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000040 */
#define ETM_CNTCTLR3_CNTEVENT3_7       (0x80UL << REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3))  /*!< Value 0x00000080 */

// Values of decrement previous counter enable bit
#define ETM_DECREMENTPREVIOUSCNT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DECREMENTPREVIOUSCNT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of counter mode select bit
#define ETM_CNTMODE_NORMAL      (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CNTMODE_SELFRELOAD  (0x1UL)  /*!< Value 0x00000001 */

// Values of reload event for counter 3 selector bits
#define ETM_CNT3RELOADEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT3RELOADEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT3RELOADEVENT, RESOURCETYPE))     /*!< Mask  0x00008000 */

#define ETM_CNT3RELOADEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, RLDEVENT3) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT3RELOADEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT3RELOADEVENT, RESOURCENUMBER))  /*!< Mask  0x00001F00 */

// Values of counter value decrement event for counter 3 selector bits
#define ETM_CNT3DECREMENTEVENT_RESOURCETYPE_OFFSET    (REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3) + ETM_EVENTRESOURCETYPE)
#define ETM_CNT3DECREMENTEVENT_RESOURCETYPE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, CNT3DECREMENTEVENT, RESOURCETYPE))     /*!< Mask  0x00000080 */

#define ETM_CNT3DECREMENTEVENT_RESOURCENUMBER_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CNTCTLR3, CNTEVENT3) + ETM_EVENTRESOURCENUMBER)
#define ETM_CNT3DECREMENTEVENT_RESOURCENUMBER_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, CNT3DECREMENTEVENT, RESOURCENUMBER))  /*!< Mask  0x0000001F */

/*!< Counter 0 value register */
#define ETM_CNTVR0_VALUE0_OFFSET  (0U)
#define ETM_CNTVR0_VALUE0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Mask  0x0000FFFF */
#define ETM_CNTVR0_VALUE0_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000001 */
#define ETM_CNTVR0_VALUE0_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000002 */
#define ETM_CNTVR0_VALUE0_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000004 */
#define ETM_CNTVR0_VALUE0_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000008 */
#define ETM_CNTVR0_VALUE0_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000010 */
#define ETM_CNTVR0_VALUE0_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000020 */
#define ETM_CNTVR0_VALUE0_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000040 */
#define ETM_CNTVR0_VALUE0_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000080 */
#define ETM_CNTVR0_VALUE0_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000100 */
#define ETM_CNTVR0_VALUE0_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000200 */
#define ETM_CNTVR0_VALUE0_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000400 */
#define ETM_CNTVR0_VALUE0_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00000800 */
#define ETM_CNTVR0_VALUE0_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00001000 */
#define ETM_CNTVR0_VALUE0_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00002000 */
#define ETM_CNTVR0_VALUE0_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00004000 */
#define ETM_CNTVR0_VALUE0_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR0, VALUE0))  /*!< Value 0x00008000 */

/*!< Counter 1 value register */
#define ETM_CNTVR1_VALUE1_OFFSET  (0U)
#define ETM_CNTVR1_VALUE1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Mask  0x0000FFFF */
#define ETM_CNTVR1_VALUE1_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000001 */
#define ETM_CNTVR1_VALUE1_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000002 */
#define ETM_CNTVR1_VALUE1_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000004 */
#define ETM_CNTVR1_VALUE1_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000008 */
#define ETM_CNTVR1_VALUE1_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000010 */
#define ETM_CNTVR1_VALUE1_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000020 */
#define ETM_CNTVR1_VALUE1_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000040 */
#define ETM_CNTVR1_VALUE1_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000080 */
#define ETM_CNTVR1_VALUE1_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000100 */
#define ETM_CNTVR1_VALUE1_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000200 */
#define ETM_CNTVR1_VALUE1_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000400 */
#define ETM_CNTVR1_VALUE1_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00000800 */
#define ETM_CNTVR1_VALUE1_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00001000 */
#define ETM_CNTVR1_VALUE1_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00002000 */
#define ETM_CNTVR1_VALUE1_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00004000 */
#define ETM_CNTVR1_VALUE1_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR1, VALUE1))  /*!< Value 0x00008000 */

/*!< Counter 2 value register */
#define ETM_CNTVR2_VALUE2_OFFSET  (0U)
#define ETM_CNTVR2_VALUE2_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Mask  0x0000FFFF */
#define ETM_CNTVR2_VALUE2_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000001 */
#define ETM_CNTVR2_VALUE2_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000002 */
#define ETM_CNTVR2_VALUE2_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000004 */
#define ETM_CNTVR2_VALUE2_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000008 */
#define ETM_CNTVR2_VALUE2_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000010 */
#define ETM_CNTVR2_VALUE2_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000020 */
#define ETM_CNTVR2_VALUE2_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000040 */
#define ETM_CNTVR2_VALUE2_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000080 */
#define ETM_CNTVR2_VALUE2_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000100 */
#define ETM_CNTVR2_VALUE2_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000200 */
#define ETM_CNTVR2_VALUE2_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000400 */
#define ETM_CNTVR2_VALUE2_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00000800 */
#define ETM_CNTVR2_VALUE2_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00001000 */
#define ETM_CNTVR2_VALUE2_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00002000 */
#define ETM_CNTVR2_VALUE2_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00004000 */
#define ETM_CNTVR2_VALUE2_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR2, VALUE2))  /*!< Value 0x00008000 */

/*!< Counter 3 value register */
#define ETM_CNTVR3_VALUE3_OFFSET  (0U)
#define ETM_CNTVR3_VALUE3_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Mask  0x0000FFFF */
#define ETM_CNTVR3_VALUE3_0       (0x0001UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000001 */
#define ETM_CNTVR3_VALUE3_1       (0x0002UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000002 */
#define ETM_CNTVR3_VALUE3_2       (0x0004UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000004 */
#define ETM_CNTVR3_VALUE3_3       (0x0008UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000008 */
#define ETM_CNTVR3_VALUE3_4       (0x0010UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000010 */
#define ETM_CNTVR3_VALUE3_5       (0x0020UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000020 */
#define ETM_CNTVR3_VALUE3_6       (0x0040UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000040 */
#define ETM_CNTVR3_VALUE3_7       (0x0080UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000080 */
#define ETM_CNTVR3_VALUE3_8       (0x0100UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000100 */
#define ETM_CNTVR3_VALUE3_9       (0x0200UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000200 */
#define ETM_CNTVR3_VALUE3_10      (0x0400UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000400 */
#define ETM_CNTVR3_VALUE3_11      (0x0800UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00000800 */
#define ETM_CNTVR3_VALUE3_12      (0x1000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00001000 */
#define ETM_CNTVR3_VALUE3_13      (0x2000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00002000 */
#define ETM_CNTVR3_VALUE3_14      (0x4000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00004000 */
#define ETM_CNTVR3_VALUE3_15      (0x8000UL << REGISTER_FIELD_OFFSET(ETM, CNTVR3, VALUE3))  /*!< Value 0x00008000 */

/*!< ID 8 register */
#define ETM_IDR8_MAXSPEC_OFFSET  (0U)
#define ETM_IDR8_MAXSPEC_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR8_MAXSPEC_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000001 */
#define ETM_IDR8_MAXSPEC_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000002 */
#define ETM_IDR8_MAXSPEC_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000004 */
#define ETM_IDR8_MAXSPEC_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000008 */
#define ETM_IDR8_MAXSPEC_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000010 */
#define ETM_IDR8_MAXSPEC_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000020 */
#define ETM_IDR8_MAXSPEC_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000040 */
#define ETM_IDR8_MAXSPEC_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000080 */
#define ETM_IDR8_MAXSPEC_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000100 */
#define ETM_IDR8_MAXSPEC_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000200 */
#define ETM_IDR8_MAXSPEC_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000400 */
#define ETM_IDR8_MAXSPEC_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00000800 */
#define ETM_IDR8_MAXSPEC_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00001000 */
#define ETM_IDR8_MAXSPEC_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00002000 */
#define ETM_IDR8_MAXSPEC_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00004000 */
#define ETM_IDR8_MAXSPEC_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00008000 */
#define ETM_IDR8_MAXSPEC_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00010000 */
#define ETM_IDR8_MAXSPEC_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00020000 */
#define ETM_IDR8_MAXSPEC_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00040000 */
#define ETM_IDR8_MAXSPEC_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00080000 */
#define ETM_IDR8_MAXSPEC_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00100000 */
#define ETM_IDR8_MAXSPEC_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00200000 */
#define ETM_IDR8_MAXSPEC_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00400000 */
#define ETM_IDR8_MAXSPEC_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x00800000 */
#define ETM_IDR8_MAXSPEC_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x01000000 */
#define ETM_IDR8_MAXSPEC_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x02000000 */
#define ETM_IDR8_MAXSPEC_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x04000000 */
#define ETM_IDR8_MAXSPEC_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x08000000 */
#define ETM_IDR8_MAXSPEC_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x10000000 */
#define ETM_IDR8_MAXSPEC_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x20000000 */
#define ETM_IDR8_MAXSPEC_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x40000000 */
#define ETM_IDR8_MAXSPEC_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR8, MAXSPEC))  /*!< Value 0x80000000 */

/*!< ID 9 register */
#define ETM_IDR9_NUMP0KEY_OFFSET  (0U)
#define ETM_IDR9_NUMP0KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR9_NUMP0KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000001 */
#define ETM_IDR9_NUMP0KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000002 */
#define ETM_IDR9_NUMP0KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000004 */
#define ETM_IDR9_NUMP0KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000008 */
#define ETM_IDR9_NUMP0KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000010 */
#define ETM_IDR9_NUMP0KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000020 */
#define ETM_IDR9_NUMP0KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000040 */
#define ETM_IDR9_NUMP0KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000080 */
#define ETM_IDR9_NUMP0KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000100 */
#define ETM_IDR9_NUMP0KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000200 */
#define ETM_IDR9_NUMP0KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000400 */
#define ETM_IDR9_NUMP0KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00000800 */
#define ETM_IDR9_NUMP0KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00001000 */
#define ETM_IDR9_NUMP0KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00002000 */
#define ETM_IDR9_NUMP0KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00004000 */
#define ETM_IDR9_NUMP0KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00008000 */
#define ETM_IDR9_NUMP0KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00010000 */
#define ETM_IDR9_NUMP0KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00020000 */
#define ETM_IDR9_NUMP0KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00040000 */
#define ETM_IDR9_NUMP0KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00080000 */
#define ETM_IDR9_NUMP0KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00100000 */
#define ETM_IDR9_NUMP0KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00200000 */
#define ETM_IDR9_NUMP0KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00400000 */
#define ETM_IDR9_NUMP0KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x00800000 */
#define ETM_IDR9_NUMP0KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x01000000 */
#define ETM_IDR9_NUMP0KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x02000000 */
#define ETM_IDR9_NUMP0KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x04000000 */
#define ETM_IDR9_NUMP0KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x08000000 */
#define ETM_IDR9_NUMP0KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x10000000 */
#define ETM_IDR9_NUMP0KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x20000000 */
#define ETM_IDR9_NUMP0KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x40000000 */
#define ETM_IDR9_NUMP0KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR9, NUMP0KEY))  /*!< Value 0x80000000 */

/*!< ID 10 register */
#define ETM_IDR10_NUMP1KEY_OFFSET  (0U)
#define ETM_IDR10_NUMP1KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR10_NUMP1KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000001 */
#define ETM_IDR10_NUMP1KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000002 */
#define ETM_IDR10_NUMP1KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000004 */
#define ETM_IDR10_NUMP1KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000008 */
#define ETM_IDR10_NUMP1KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000010 */
#define ETM_IDR10_NUMP1KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000020 */
#define ETM_IDR10_NUMP1KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000040 */
#define ETM_IDR10_NUMP1KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000080 */
#define ETM_IDR10_NUMP1KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000100 */
#define ETM_IDR10_NUMP1KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000200 */
#define ETM_IDR10_NUMP1KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000400 */
#define ETM_IDR10_NUMP1KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00000800 */
#define ETM_IDR10_NUMP1KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00001000 */
#define ETM_IDR10_NUMP1KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00002000 */
#define ETM_IDR10_NUMP1KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00004000 */
#define ETM_IDR10_NUMP1KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00008000 */
#define ETM_IDR10_NUMP1KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00010000 */
#define ETM_IDR10_NUMP1KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00020000 */
#define ETM_IDR10_NUMP1KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00040000 */
#define ETM_IDR10_NUMP1KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00080000 */
#define ETM_IDR10_NUMP1KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00100000 */
#define ETM_IDR10_NUMP1KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00200000 */
#define ETM_IDR10_NUMP1KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00400000 */
#define ETM_IDR10_NUMP1KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x00800000 */
#define ETM_IDR10_NUMP1KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x01000000 */
#define ETM_IDR10_NUMP1KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x02000000 */
#define ETM_IDR10_NUMP1KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x04000000 */
#define ETM_IDR10_NUMP1KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x08000000 */
#define ETM_IDR10_NUMP1KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x10000000 */
#define ETM_IDR10_NUMP1KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x20000000 */
#define ETM_IDR10_NUMP1KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x40000000 */
#define ETM_IDR10_NUMP1KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR10, NUMP1KEY))  /*!< Value 0x80000000 */

/*!< ID 11 register */
#define ETM_IDR11_NUMP1SPC_OFFSET  (0U)
#define ETM_IDR11_NUMP1SPC_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR11_NUMP1SPC_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000001 */
#define ETM_IDR11_NUMP1SPC_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000002 */
#define ETM_IDR11_NUMP1SPC_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000004 */
#define ETM_IDR11_NUMP1SPC_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000008 */
#define ETM_IDR11_NUMP1SPC_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000010 */
#define ETM_IDR11_NUMP1SPC_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000020 */
#define ETM_IDR11_NUMP1SPC_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000040 */
#define ETM_IDR11_NUMP1SPC_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000080 */
#define ETM_IDR11_NUMP1SPC_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000100 */
#define ETM_IDR11_NUMP1SPC_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000200 */
#define ETM_IDR11_NUMP1SPC_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000400 */
#define ETM_IDR11_NUMP1SPC_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00000800 */
#define ETM_IDR11_NUMP1SPC_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00001000 */
#define ETM_IDR11_NUMP1SPC_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00002000 */
#define ETM_IDR11_NUMP1SPC_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00004000 */
#define ETM_IDR11_NUMP1SPC_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00008000 */
#define ETM_IDR11_NUMP1SPC_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00010000 */
#define ETM_IDR11_NUMP1SPC_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00020000 */
#define ETM_IDR11_NUMP1SPC_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00040000 */
#define ETM_IDR11_NUMP1SPC_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00080000 */
#define ETM_IDR11_NUMP1SPC_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00100000 */
#define ETM_IDR11_NUMP1SPC_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00200000 */
#define ETM_IDR11_NUMP1SPC_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00400000 */
#define ETM_IDR11_NUMP1SPC_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x00800000 */
#define ETM_IDR11_NUMP1SPC_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x01000000 */
#define ETM_IDR11_NUMP1SPC_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x02000000 */
#define ETM_IDR11_NUMP1SPC_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x04000000 */
#define ETM_IDR11_NUMP1SPC_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x08000000 */
#define ETM_IDR11_NUMP1SPC_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x10000000 */
#define ETM_IDR11_NUMP1SPC_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x20000000 */
#define ETM_IDR11_NUMP1SPC_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x40000000 */
#define ETM_IDR11_NUMP1SPC_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR11, NUMP1SPC))  /*!< Value 0x80000000 */

/*!< ID 12 register */
#define ETM_IDR12_NUMCONDKEY_OFFSET  (0U)
#define ETM_IDR12_NUMCONDKEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR12_NUMCONDKEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000001 */
#define ETM_IDR12_NUMCONDKEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000002 */
#define ETM_IDR12_NUMCONDKEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000004 */
#define ETM_IDR12_NUMCONDKEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000008 */
#define ETM_IDR12_NUMCONDKEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000010 */
#define ETM_IDR12_NUMCONDKEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000020 */
#define ETM_IDR12_NUMCONDKEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000040 */
#define ETM_IDR12_NUMCONDKEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000080 */
#define ETM_IDR12_NUMCONDKEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000100 */
#define ETM_IDR12_NUMCONDKEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000200 */
#define ETM_IDR12_NUMCONDKEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000400 */
#define ETM_IDR12_NUMCONDKEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00000800 */
#define ETM_IDR12_NUMCONDKEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00001000 */
#define ETM_IDR12_NUMCONDKEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00002000 */
#define ETM_IDR12_NUMCONDKEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00004000 */
#define ETM_IDR12_NUMCONDKEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00008000 */
#define ETM_IDR12_NUMCONDKEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00010000 */
#define ETM_IDR12_NUMCONDKEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00020000 */
#define ETM_IDR12_NUMCONDKEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00040000 */
#define ETM_IDR12_NUMCONDKEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00080000 */
#define ETM_IDR12_NUMCONDKEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00100000 */
#define ETM_IDR12_NUMCONDKEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00200000 */
#define ETM_IDR12_NUMCONDKEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00400000 */
#define ETM_IDR12_NUMCONDKEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x00800000 */
#define ETM_IDR12_NUMCONDKEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x01000000 */
#define ETM_IDR12_NUMCONDKEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x02000000 */
#define ETM_IDR12_NUMCONDKEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x04000000 */
#define ETM_IDR12_NUMCONDKEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x08000000 */
#define ETM_IDR12_NUMCONDKEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x10000000 */
#define ETM_IDR12_NUMCONDKEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x20000000 */
#define ETM_IDR12_NUMCONDKEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x40000000 */
#define ETM_IDR12_NUMCONDKEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR12, NUMCONDKEY))  /*!< Value 0x80000000 */

/*!< ID 13 register */
#define ETM_IDR13_NUMCONDSPC_OFFSET  (0U)
#define ETM_IDR13_NUMCONDSPC_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR13_NUMCONDSPC_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000001 */
#define ETM_IDR13_NUMCONDSPC_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000002 */
#define ETM_IDR13_NUMCONDSPC_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000004 */
#define ETM_IDR13_NUMCONDSPC_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000008 */
#define ETM_IDR13_NUMCONDSPC_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000010 */
#define ETM_IDR13_NUMCONDSPC_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000020 */
#define ETM_IDR13_NUMCONDSPC_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000040 */
#define ETM_IDR13_NUMCONDSPC_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000080 */
#define ETM_IDR13_NUMCONDSPC_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000100 */
#define ETM_IDR13_NUMCONDSPC_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000200 */
#define ETM_IDR13_NUMCONDSPC_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000400 */
#define ETM_IDR13_NUMCONDSPC_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00000800 */
#define ETM_IDR13_NUMCONDSPC_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00001000 */
#define ETM_IDR13_NUMCONDSPC_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00002000 */
#define ETM_IDR13_NUMCONDSPC_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00004000 */
#define ETM_IDR13_NUMCONDSPC_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00008000 */
#define ETM_IDR13_NUMCONDSPC_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00010000 */
#define ETM_IDR13_NUMCONDSPC_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00020000 */
#define ETM_IDR13_NUMCONDSPC_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00040000 */
#define ETM_IDR13_NUMCONDSPC_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00080000 */
#define ETM_IDR13_NUMCONDSPC_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00100000 */
#define ETM_IDR13_NUMCONDSPC_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00200000 */
#define ETM_IDR13_NUMCONDSPC_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00400000 */
#define ETM_IDR13_NUMCONDSPC_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x00800000 */
#define ETM_IDR13_NUMCONDSPC_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x01000000 */
#define ETM_IDR13_NUMCONDSPC_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x02000000 */
#define ETM_IDR13_NUMCONDSPC_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x04000000 */
#define ETM_IDR13_NUMCONDSPC_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x08000000 */
#define ETM_IDR13_NUMCONDSPC_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x10000000 */
#define ETM_IDR13_NUMCONDSPC_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x20000000 */
#define ETM_IDR13_NUMCONDSPC_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x40000000 */
#define ETM_IDR13_NUMCONDSPC_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR13, NUMCONDSPC))  /*!< Value 0x80000000 */

/*!< Implementation defined 0 register */
#define ETM_IMSPEC0_EN_OFFSET       (4U)
#define ETM_IMSPEC0_EN_MASK         (0xFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, EN))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC0_EN_0            (0x1UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, EN))  /*!< Value 0x00000010 */
#define ETM_IMSPEC0_EN_1            (0x2UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, EN))  /*!< Value 0x00000020 */
#define ETM_IMSPEC0_EN_2            (0x4UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, EN))  /*!< Value 0x00000040 */
#define ETM_IMSPEC0_EN_3            (0x8UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, EN))  /*!< Value 0x00000080 */

#define ETM_IMSPEC0_SUPPORT_OFFSET  (0U)
#define ETM_IMSPEC0_SUPPORT_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, SUPPORT))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC0_SUPPORT_0       (0x1UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, SUPPORT))  /*!< Value 0x00000001 */
#define ETM_IMSPEC0_SUPPORT_1       (0x2UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, SUPPORT))  /*!< Value 0x00000002 */
#define ETM_IMSPEC0_SUPPORT_2       (0x4UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, SUPPORT))  /*!< Value 0x00000004 */
#define ETM_IMSPEC0_SUPPORT_3       (0x8UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC0, SUPPORT))  /*!< Value 0x00000008 */

// Values of feature enable register
#define ETM_FEATURE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_FEATURE_VALUE1   (0x1UL)  /*!< Value 0x00000001 */
#define ETM_FEATURE_VALUE2   (0x2UL)  /*!< Value 0x00000002 */
#define ETM_FEATURE_VALUE3   (0x3UL)  /*!< Value 0x00000003 */
#define ETM_FEATURE_VALUE4   (0x4UL)  /*!< Value 0x00000004 */
#define ETM_FEATURE_VALUE5   (0x5UL)  /*!< Value 0x00000005 */
#define ETM_FEATURE_VALUE6   (0x6UL)  /*!< Value 0x00000006 */
#define ETM_FEATURE_VALUE7   (0x7UL)  /*!< Value 0x00000007 */

// Values of feature support register
#define ETM_FEATURESUPPORT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_FEATURESUPPORT_VALUE1   (0x1UL)  /*!< Value 0x00000001 */
#define ETM_FEATURESUPPORT_VALUE2   (0x2UL)  /*!< Value 0x00000002 */
#define ETM_FEATURESUPPORT_VALUE3   (0x3UL)  /*!< Value 0x00000003 */
#define ETM_FEATURESUPPORT_VALUE4   (0x4UL)  /*!< Value 0x00000004 */
#define ETM_FEATURESUPPORT_VALUE5   (0x5UL)  /*!< Value 0x00000005 */
#define ETM_FEATURESUPPORT_VALUE6   (0x6UL)  /*!< Value 0x00000006 */
#define ETM_FEATURESUPPORT_VALUE7   (0x7UL)  /*!< Value 0x00000007 */

/*!< Implementation defined 1 register */
#define ETM_IMSPEC1_RSVD_OFFSET  (0U)
#define ETM_IMSPEC1_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC1_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC1_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC1_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC1_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC1_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC1_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC1_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC1_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC1_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC1_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC1_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC1_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC1_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC1_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC1_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC1_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC1_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC1_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC1_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC1_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC1_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC1_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC1_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC1_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC1_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC1_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC1_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC1_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC1_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC1_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC1_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC1_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC1, RSVD))  /*!< Value 0x80000000 */

/*!< Implementation defined 2 register */
#define ETM_IMSPEC2_RSVD_OFFSET  (0U)
#define ETM_IMSPEC2_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC2_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC2_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC2_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC2_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC2_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC2_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC2_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC2_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC2_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC2_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC2_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC2_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC2_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC2_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC2_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC2_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC2_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC2_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC2_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC2_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC2_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC2_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC2_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC2_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC2_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC2_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC2_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC2_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC2_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC2_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC2_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC2_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC2, RSVD))  /*!< Value 0x80000000 */

/*!< Implementation defined 3 register */
#define ETM_IMSPEC3_RSVD_OFFSET  (0U)
#define ETM_IMSPEC3_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC3_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC3_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC3_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC3_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC3_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC3_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC3_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC3_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC3_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC3_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC3_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC3_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC3_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC3_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC3_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC3_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC3_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC3_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC3_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC3_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC3_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC3_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC3_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC3_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC3_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC3_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC3_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC3_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC3_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC3_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC3_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC3_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC3, RSVD))  /*!< Value 0x80000000 */

/*!< Implementation defined 4 register */
#define ETM_IMSPEC4_RSVD_OFFSET  (0U)
#define ETM_IMSPEC4_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC4_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC4_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC4_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC4_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC4_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC4_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC4_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC4_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC4_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC4_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC4_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC4_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC4_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC4_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC4_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC4_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC4_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC4_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC4_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC4_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC4_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC4_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC4_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC4_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC4_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC4_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC4_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC4_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC4_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC4_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC4_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC4_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC4, RSVD))  /*!< Value 0x80000000 */

/*!< Implementation defined 5 register */
#define ETM_IMSPEC5_RSVD_OFFSET  (0U)
#define ETM_IMSPEC5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC5, RSVD))  /*!< Value 0x80000000 */

/*!< Implementation defined 6 register */
#define ETM_IMSPEC6_RSVD_OFFSET  (0U)
#define ETM_IMSPEC6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC6, RSVD))  /*!< Value 0x80000000 */

/*!< Implementation defined 7 register */
#define ETM_IMSPEC7_RSVD_OFFSET  (0U)
#define ETM_IMSPEC7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IMSPEC7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000001 */
#define ETM_IMSPEC7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000002 */
#define ETM_IMSPEC7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000004 */
#define ETM_IMSPEC7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000008 */
#define ETM_IMSPEC7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000010 */
#define ETM_IMSPEC7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000020 */
#define ETM_IMSPEC7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000040 */
#define ETM_IMSPEC7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000080 */
#define ETM_IMSPEC7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000100 */
#define ETM_IMSPEC7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000200 */
#define ETM_IMSPEC7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000400 */
#define ETM_IMSPEC7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00000800 */
#define ETM_IMSPEC7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00001000 */
#define ETM_IMSPEC7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00002000 */
#define ETM_IMSPEC7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00004000 */
#define ETM_IMSPEC7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00008000 */
#define ETM_IMSPEC7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00010000 */
#define ETM_IMSPEC7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00020000 */
#define ETM_IMSPEC7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00040000 */
#define ETM_IMSPEC7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00080000 */
#define ETM_IMSPEC7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00100000 */
#define ETM_IMSPEC7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00200000 */
#define ETM_IMSPEC7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00400000 */
#define ETM_IMSPEC7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x00800000 */
#define ETM_IMSPEC7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x01000000 */
#define ETM_IMSPEC7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x02000000 */
#define ETM_IMSPEC7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x04000000 */
#define ETM_IMSPEC7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x08000000 */
#define ETM_IMSPEC7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x10000000 */
#define ETM_IMSPEC7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x20000000 */
#define ETM_IMSPEC7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x40000000 */
#define ETM_IMSPEC7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IMSPEC7, RSVD))  /*!< Value 0x80000000 */

/*!< ID 0 register */
#define ETM_IDR0_COMMOPT_OFFSET    (29U)
#define ETM_IDR0_COMMOPT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, COMMOPT))    /*!< Mask  0x20000000 */

#define ETM_IDR0_TSSIZE_OFFSET     (24U)
#define ETM_IDR0_TSSIZE_MASK       (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR0, TSSIZE))    /*!< Mask  0x1F000000 */

#define ETM_IDR0_TSMARK_OFFSET     (23U)
#define ETM_IDR0_TSMARK_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, TSMARK))     /*!< Mask  0x00800000 */

#define ETM_IDR0_BF_OFFSET         (18U)
#define ETM_IDR0_BF_MASK           (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR0, BF))         /*!< Mask  0x000C0000 */

#define ETM_IDR0_TRCEXDATA_OFFSET  (17U)
#define ETM_IDR0_TRCEXDATA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, TRCEXDATA))  /*!< Mask  0x00020000 */

#define ETM_IDR0_QSUPP_OFFSET      (15U)
#define ETM_IDR0_QSUPP_MASK        (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR0, QSUPP))      /*!< Mask  0x00018000 */

#define ETM_IDR0_QFILT_OFFSET      (14U)
#define ETM_IDR0_QFILT_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, QFILT))      /*!< Mask  0x00004000 */

#define ETM_IDR0_CONDTYPE_OFFSET   (12U)
#define ETM_IDR0_CONDTYPE_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR0, CONDTYPE))   /*!< Mask  0x00003000 */

#define ETM_IDR0_NUMEVENT_OFFSET   (10U)
#define ETM_IDR0_NUMEVENT_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR0, NUMEVENT))   /*!< Mask  0x00000C00 */

#define ETM_IDR0_RETSTACK_OFFSET   (9U)
#define ETM_IDR0_RETSTACK_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, RETSTACK))   /*!< Mask  0x00000400 */

#define ETM_IDR0_TRCCCI_OFFSET     (7U)
#define ETM_IDR0_TRCCCI_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, TRCCCI))     /*!< Mask  0x00000080 */

#define ETM_IDR0_TRCCOND_OFFSET    (6U)
#define ETM_IDR0_TRCCOND_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, TRCCOND))    /*!< Mask  0x00000040 */

#define ETM_IDR0_TRCBB_OFFSET      (5U)
#define ETM_IDR0_TRCBB_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR0, TRCBB))      /*!< Mask  0x00000020 */

#define ETM_IDR0_TRCDATA_OFFSET    (3U)
#define ETM_IDR0_TRCDATA_MASK      (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR0, TRCDATA))    /*!< Mask  0x00000018 */

#define ETM_IDR0_INSTPO_OFFSET     (1U)
#define ETM_IDR0_INSTPO_MASK       (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR0, INSTPO))     /*!< Mask  0x00000006 */

// Values of commit mode select bit
#define ETM_COMMITMODE_MODE0  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_COMMITMODE_MODE1  (0x1UL)  /*!< Value 0x00000001 */

// Values of global timestamp size register
#define ETM_GBLTIMESTAMPSIZE_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_GBLTIMESTAMPSIZE_48BITS          (0x6UL)  /*!< Value 0x00000006 */
#define ETM_GBLTIMESTAMPSIZE_64BITS          (0x8UL)  /*!< Value 0x00000008 */

// Values of timestamp marker element generation register bit
#define ETM_TIMESTAMPMARKERELEMENT_NOTGENERATED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TIMESTAMPMARKERELEMENT_GENERATED     (0x1UL)  /*!< Value 0x00000001 */

// Values of branch future support bit
#define ETM_BRANCHFUTURE_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_BRANCHFUTURE_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of data transfer tracing for exception and exception returns support bit
#define ETM_DATAEXCTRANSFERTRACING_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAEXCTRANSFERTRACING_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of Q element support register
#define ETM_QELEMENTSUPPORT_NOTIMPLEMENTED     (0x0UL)  /*!< Value 0x00000000 */
#define ETM_QELEMENTSUPPORT_WITHINSTRCOUNT     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_QELEMENTSUPPORT_WITHOUTINSTRCOUNT  (0x2UL)  /*!< Value 0x00000002 */
#define ETM_QELEMENTSUPPORT_FULLYIMPLEMENTED   (0x3UL)  /*!< Value 0x00000003 */

// Values of Q element filtering support register
#define ETM_QELEMENTFILTERING_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_QELEMENTFILTERING_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of conditional tracing support bit
#define ETM_CONDITIONALINSTR_PASSFAIL  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONDITIONALINSTR_APSRFLAG  (0x1UL)  /*!< Value 0x00000001 */

// Values of number of events register
#define ETM_NUMEVENT_ETMVERSIONDEFINED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMEVENT_2EVENTS            (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMEVENT_3EVENTS            (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMEVENT_4EVENTS            (0x3UL)  /*!< Value 0x00000003 */

// Values of return stack support register
#define ETM_RETURNSTACK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RETURNSTACK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of cycle counting instruction support register
#define ETM_CYCLECOUNTINSTR_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CYCLECOUNTINSTR_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of conditional instruction tracing support register
#define ETM_CONDITIONALINSTRTRACING_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONDITIONALINSTRTRACING_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of branch broadcast tracing support register
#define ETM_BRANCHBROADCASTINGTRACING_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_BRANCHBROADCASTINGTRACING_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of conditional data tracing support register
#define ETM_CONDITIONALDATATRACING_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONDITIONALDATATRACING_IMPLEMENTED     (0x3UL)  /*!< Value 0x00000003 */

// Values of register storing whther tracing of load and store instructions as P0 elements is supported
#define ETM_P0LOADSTORETRACING_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_P0LOADSTORETRACING_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< ID 1 register */
#define ETM_IDR1_DESIGNER_OFFSET    (24U)
#define ETM_IDR1_DESIGNER_MASK      (0xFFUL << REGISTER_FIELD_OFFSET(ETM, IDR1, DESIGNER))   /*!< Mask  0xFF000000 */

#define ETM_IDR1_TRCARCHMAJ_OFFSET  (8U)
#define ETM_IDR1_TRCARCHMAJ_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR1, TRCARCHMAJ))  /*!< Mask  0x00000F00 */

#define ETM_IDR1_TRCARCHMIN_OFFSET  (4U)
#define ETM_IDR1_TRCARCHMIN_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR1, TRCARCHMIN))  /*!< Mask  0x000000F0 */

#define ETM_IDR1_REVISION_OFFSET    (0U)
#define ETM_IDR1_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR1, REVISION))    /*!< Mask  0x0000000F */

// Values of register storing which company designed the trace unit
#define ETM_DESIGNER_ARM                   (0x41UL)  /*!< Value 0x00000041 - Arm Limited */
#define ETM_DESIGNER_BROADCOM              (0x42UL)  /*!< Value 0x00000042 - Broadcom corporation */
#define ETM_DESIGNER_CAVIUM                (0x43UL)  /*!< Value 0x00000043 - Cavium Inc. */
#define ETM_DESIGNER_DIGITALEQUIPMENT      (0x44UL)  /*!< Value 0x00000044 - Digital equipment corporation */
#define ETM_DESIGNER_INFINEON              (0x49UL)  /*!< Value 0x00000049 - Infineon technologies AG */
#define ETM_DESIGNER_MOTOROLAFREESCALE     (0x4DUL)  /*!< Value 0x0000004D - Motorola or Freescale semiconductor Inc. */
#define ETM_DESIGNER_NVIDIA                (0x4EUL)  /*!< Value 0x0000004E - NVIDIA corporation */
#define ETM_DESIGNER_APPLIEDMICROCIRCUITS  (0x50UL)  /*!< Value 0x00000050 - Applied micro circuits corporation */
#define ETM_DESIGNER_QUALCOMM              (0x51UL)  /*!< Value 0x00000051 - Qualcomm Inc. */
#define ETM_DESIGNER_MARVELL               (0x56UL)  /*!< Value 0x00000056 - Marvell internation Inc. */
#define ETM_DESIGNER_INTEL                 (0x69UL)  /*!< Value 0x00000069 - Intel corporation */

// Values of major architecture version register
#define ETM_MAJORARCHVERSION_V4  (0x4UL)  /*!< Value 0x00000004 - ETMv4 */

// Values of minor architecture version register
#define ETM_MINORARCHVERSION_ETMV40  (0x0UL)  /*!< Value 0x00000000 - ETMv4.0 */
#define ETM_MINORARCHVERSION_ETMV41  (0x1UL)  /*!< Value 0x00000000 - ETMv4.1 */
#define ETM_MINORARCHVERSION_ETMV42  (0x2UL)  /*!< Value 0x00000000 - ETMv4.2 */
#define ETM_MINORARCHVERSION_ETMV43  (0x3UL)  /*!< Value 0x00000000 - ETMv4.3 */
#define ETM_MINORARCHVERSION_ETMV44  (0x4UL)  /*!< Value 0x00000000 - ETMv4.4 */
#define ETM_MINORARCHVERSION_ETMV45  (0x5UL)  /*!< Value 0x00000000 - ETMv4.5 */
#define ETM_MINORARCHVERSION_ETMV46  (0x6UL)  /*!< Value 0x00000000 - ETMv4.6 */

// Values of ETM revision register
#define ETM_TRACEUNITREVISION_0   (0x00UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNITREVISION_1   (0x01UL)  /*!< Value 0x00000001 */
#define ETM_TRACEUNITREVISION_2   (0x02UL)  /*!< Value 0x00000002 */
#define ETM_TRACEUNITREVISION_3   (0x03UL)  /*!< Value 0x00000003 */
#define ETM_TRACEUNITREVISION_4   (0x04UL)  /*!< Value 0x00000004 */
#define ETM_TRACEUNITREVISION_5   (0x05UL)  /*!< Value 0x00000005 */
#define ETM_TRACEUNITREVISION_6   (0x06UL)  /*!< Value 0x00000006 */
#define ETM_TRACEUNITREVISION_7   (0x07UL)  /*!< Value 0x00000007 */
#define ETM_TRACEUNITREVISION_8   (0x08UL)  /*!< Value 0x00000008 */
#define ETM_TRACEUNITREVISION_9   (0x09UL)  /*!< Value 0x00000009 */
#define ETM_TRACEUNITREVISION_10  (0x0AUL)  /*!< Value 0x0000000A */
#define ETM_TRACEUNITREVISION_11  (0x0BUL)  /*!< Value 0x0000000B */
#define ETM_TRACEUNITREVISION_12  (0x0CUL)  /*!< Value 0x0000000C */
#define ETM_TRACEUNITREVISION_13  (0x0DUL)  /*!< Value 0x0000000D */
#define ETM_TRACEUNITREVISION_14  (0x0EUL)  /*!< Value 0x0000000E */
#define ETM_TRACEUNITREVISION_15  (0x0FUL)  /*!< Value 0x0000000F */

/*!< ID 2 register */
#define ETM_IDR2_WFXMODE_OFFSET   (31U)
#define ETM_IDR2_WFXMODE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR2, WFXMODE))    /*!< Mask  0x80000000 */

#define ETM_IDR2_VMIDOPT_OFFSET   (29U)
#define ETM_IDR2_VMIDOPT_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR2, VMIDOPT))    /*!< Mask  0x60000000 */

#define ETM_IDR2_CCSIZE_OFFSET    (25U)
#define ETM_IDR2_CCSIZE_MASK      (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR2, CCSIZE))    /*!< Mask  0x1E000000 */

#define ETM_IDR2_DVSIZE_OFFSET    (20U)
#define ETM_IDR2_DVSIZE_MASK      (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR2, DVSIZE))    /*!< Mask  0x01F00000 */

#define ETM_IDR2_DASIZE_OFFSET    (15U)
#define ETM_IDR2_DASIZE_MASK      (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR2, DASIZE))    /*!< Mask  0x000F8000 */

#define ETM_IDR2_VMIDSIZE_OFFSET  (10U)
#define ETM_IDR2_VMIDSIZE_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR2, VMIDSIZE))  /*!< Mask  0x00007C00 */

#define ETM_IDR2_CIDSIZE_OFFSET   (5U)
#define ETM_IDR2_CIDSIZE_MASK     (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR2, CIDSIZE))   /*!< Mask  0x000003E0 */

#define ETM_IDR2_IASIZE_OFFSET    (0U)
#define ETM_IDR2_IASIZE_MASK      (0x1FUL << REGISTER_FIELD_OFFSET(ETM, IDR2, IASIZE))    /*!< Mask  0x0000001F */

// Values of register storing whether WFI and WFE instructions are classified as branch instruction
#define ETM_WFIWFEINSTR_NOTBRANCHINSTR  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_WFIWFEINSTR_BRANCHINSTR     (0x1UL)  /*!< Value 0x00000001 */

// Values of virtual context identifier selection (VMID) option select register
#define ETM_VMID_TRCCONFIGR_VMIDOPT_0  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VMID_SUPPORTED             (0x1UL)  /*!< Value 0x00000001 */
#define ETM_VMID_TRCCONFIGR_VMIDOPT_1  (0x2UL)  /*!< Value 0x00000002 */

// Values of cycle counter size register
#define ETM_CYCLECOUNTER_12  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CYCLECOUNTER_13  (0x1UL)  /*!< Value 0x00000001 */
#define ETM_CYCLECOUNTER_14  (0x2UL)  /*!< Value 0x00000002 */
#define ETM_CYCLECOUNTER_15  (0x3UL)  /*!< Value 0x00000003 */
#define ETM_CYCLECOUNTER_16  (0x4UL)  /*!< Value 0x00000004 */
#define ETM_CYCLECOUNTER_17  (0x5UL)  /*!< Value 0x00000005 */
#define ETM_CYCLECOUNTER_18  (0x6UL)  /*!< Value 0x00000006 */
#define ETM_CYCLECOUNTER_19  (0x7UL)  /*!< Value 0x00000007 */
#define ETM_CYCLECOUNTER_20  (0x8UL)  /*!< Value 0x00000008 */

// Values of data value size register
#define ETM_DATAVALUESIZE_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAVALUESIZE_MAX4BYTES     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_DATAVALUESIZE_MAX8BYTES     (0x8UL)  /*!< Value 0x00000008 */

// Values of address value size register
#define ETM_ADDRESSVALUESIZE_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_ADDRESSVALUESIZE_MAX4BYTES     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_ADDRESSVALUESIZE_MAX8BYTES     (0x8UL)  /*!< Value 0x00000008 */

// Values of virtual context identifier (VMID) size
#define ETM_VMIDSIZE_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VMIDSIZE_1BYTE         (0x1UL)  /*!< Value 0x00000001 */
#define ETM_VMIDSIZE_2BYTES        (0x2UL)  /*!< Value 0x00000002 */
#define ETM_VMIDSIZE_4BYTES        (0x4UL)  /*!< Value 0x00000004 */

// Values of context ID size register
#define ETM_CONTEXTIDSIZE_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONTEXTIDSIZE_MAX4BYTES     (0x4UL)  /*!< Value 0x00000004 */

// Values of instruction address size register
#define ETM_INSTRADDRESSSIZE_MAX4BYTES     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_INSTRADDRESSSIZE_MAX8BYTES     (0x8UL)  /*!< Value 0x00000008 */

/*!< ID 3 register */
#define ETM_IDR3_NOOVERFLOW_OFFSET  (31U)
#define ETM_IDR3_NOOVERFLOW_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR3, NOOVERFLOW))  /*!< Mask  0x80000000 */

#define ETM_IDR3_NUMPROC0_OFFSET    (28U)
#define ETM_IDR3_NUMPROC0_MASK      (0x7UL << REGISTER_FIELD_OFFSET(ETM, IDR3, NUMPROC0))    /*!< Mask  0x70000000 */

#define ETM_IDR3_SYSSTALL_OFFSET    (27U)
#define ETM_IDR3_SYSSTALL_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR3, SYSSTALL))    /*!< Mask  0x08000000 */

#define ETM_IDR3_STALLCTL_OFFSET    (26U)
#define ETM_IDR3_STALLCTL_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR3, STALLCTL))    /*!< Mask  0x04000000 */

#define ETM_IDR3_SYNCPR_OFFSET      (25U)
#define ETM_IDR3_SYNCPR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR3, SYNCPR))      /*!< Mask  0x02000000 */

#define ETM_IDR3_TRCERR_OFFSET      (24U)
#define ETM_IDR3_TRCERR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR3, TRCERR))      /*!< Mask  0x01000000 */

#define ETM_IDR3_EXLEVEL_NS_OFFSET  (20U)
#define ETM_IDR3_EXLEVEL_NS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_NS))  /*!< Mask  0x00F00000 */

#define ETM_IDR3_EXLEVEL_S_OFFSET   (16U)
#define ETM_IDR3_EXLEVEL_S_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_S))   /*!< Mask  0x000F0000 */

#define ETM_IDR3_NUMPROC1_OFFSET    (12U)
#define ETM_IDR3_NUMPROC1_MASK      (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR3, NUMPROC1))    /*!< Mask  0x00003000 */

#define ETM_IDR3_CCITMIN_OFFSET     (0U)
#define ETM_IDR3_CCITMIN_MASK       (0xFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Mask  0x00000FFF */
#define ETM_IDR3_CCITMIN_0          (0x001UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000001 */
#define ETM_IDR3_CCITMIN_1          (0x002UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000002 */
#define ETM_IDR3_CCITMIN_2          (0x004UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000004 */
#define ETM_IDR3_CCITMIN_3          (0x008UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000008 */
#define ETM_IDR3_CCITMIN_4          (0x010UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000010 */
#define ETM_IDR3_CCITMIN_5          (0x020UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000020 */
#define ETM_IDR3_CCITMIN_6          (0x040UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000040 */
#define ETM_IDR3_CCITMIN_7          (0x080UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000080 */
#define ETM_IDR3_CCITMIN_8          (0x100UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000100 */
#define ETM_IDR3_CCITMIN_9          (0x200UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000200 */
#define ETM_IDR3_CCITMIN_10         (0x400UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000400 */
#define ETM_IDR3_CCITMIN_11         (0x800UL << REGISTER_FIELD_OFFSET(ETM, IDR3, CCITMIN))   /*!< Value 0x00000800 */

// Values of bits of register controlling whether instruction tracing is supported for a given exception level in non secure state
#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL3)
#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, NONSECUREEXCEPTIONLEVEL3))  /*!< Mask  0x00800000 */

#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL2)
#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, NONSECUREEXCEPTIONLEVEL2))  /*!< Mask  0x00400000 */

#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL1)
#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, NONSECUREEXCEPTIONLEVEL1))  /*!< Mask  0x00200000 */

#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL0)
#define ETM_INSTRTRACINGSUPPORTED_NONSECUREEXCEPTIONLEVEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, NONSECUREEXCEPTIONLEVEL0))  /*!< Mask  0x00100000 */

// Values of bits of register controlling whether instruction tracing is supported for a given exception level in secure state
#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_S) + ETM_EXCEPTIONLEVEL3)
#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, SECUREEXCEPTIONLEVEL3))  /*!< Mask  0x00080000 */

#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_S) + ETM_EXCEPTIONLEVEL2)
#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, SECUREEXCEPTIONLEVEL2))  /*!< Mask  0x00040000 */

#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_S) + ETM_EXCEPTIONLEVEL1)
#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, SECUREEXCEPTIONLEVEL1))  /*!< Mask  0x00020000 */

#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, IDR3, EXLEVEL_S) + ETM_EXCEPTIONLEVEL0)
#define ETM_INSTRTRACINGSUPPORTED_SECUREEXCEPTIONLEVEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, INSTRTRACINGSUPPORTED, SECUREEXCEPTIONLEVEL0))  /*!< Mask  0x00010000 */

// Values of TRCSTALLCTLR.NOOVERFLOW support bit
#define ETM_STALLCTLNOOVERFLOW_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_STALLCTLNOOVERFLOW_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of PE system stall control support bit
#define ETM_PESYSTEMSTALLCTL_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_PESYSTEMSTALLCTL_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of TRCSTALLCTLR support bit
#define ETM_STALLCTLREGISTER_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_STALLCTLREGISTER_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing whether the implementation has a fixed synchronization period
#define ETM_SYNCHRONIZATIONPERIOD_CHANGEABLE  (0x0UL)  /*!< Value 0x00000000 - TRCSYNCPR is read-write */
#define ETM_SYNCHRONIZATIONPERIOD_FIXED       (0x1UL)  /*!< Value 0x00000001 - TRCSYNCPR is read-only  */

// Values of TRCVICTLR.TRCERR support bit
#define ETM_VICTLRTRCERR_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_VICTLRTRCERR_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit storing whether instruction tracing is supported for exception level
#define ETM_EXCEPTIONLEVEL_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 - TRCACATR.EXLEVEL_X and TRCVICTLR.EXLEVEL_X is not supported */
#define ETM_EXCEPTIONLEVEL_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 - TRCACATR.EXLEVEL_X and TRCVICTLR.EXLEVEL_X is supported     */

// Values of the number of processing elements (PE) is available for tracing
#define ETM_NUMPROCEL_1   (0x00UL)  /*!< Value 0x00000000 */
#define ETM_NUMPROCEL_2   (0x01UL)  /*!< Value 0x00000001 */
#define ETM_NUMPROCEL_3   (0x02UL)  /*!< Value 0x00000002 */
#define ETM_NUMPROCEL_4   (0x03UL)  /*!< Value 0x00000003 */
#define ETM_NUMPROCEL_5   (0x04UL)  /*!< Value 0x00000004 */
#define ETM_NUMPROCEL_6   (0x05UL)  /*!< Value 0x00000005 */
#define ETM_NUMPROCEL_7   (0x06UL)  /*!< Value 0x00000006 */
#define ETM_NUMPROCEL_8   (0x07UL)  /*!< Value 0x00000007 */
#define ETM_NUMPROCEL_9   (0x08UL)  /*!< Value 0x00000008 */
#define ETM_NUMPROCEL_10  (0x09UL)  /*!< Value 0x00000009 */
#define ETM_NUMPROCEL_11  (0x0AUL)  /*!< Value 0x0000000A */
#define ETM_NUMPROCEL_12  (0x0BUL)  /*!< Value 0x0000000B */
#define ETM_NUMPROCEL_13  (0x0CUL)  /*!< Value 0x0000000C */
#define ETM_NUMPROCEL_14  (0x0DUL)  /*!< Value 0x0000000D */
#define ETM_NUMPROCEL_15  (0x0EUL)  /*!< Value 0x0000000E */
#define ETM_NUMPROCEL_16  (0x0FUL)  /*!< Value 0x0000000F */
#define ETM_NUMPROCEL_17  (0x10UL)  /*!< Value 0x00000010 */
#define ETM_NUMPROCEL_18  (0x11UL)  /*!< Value 0x00000011 */
#define ETM_NUMPROCEL_19  (0x12UL)  /*!< Value 0x00000012 */
#define ETM_NUMPROCEL_20  (0x13UL)  /*!< Value 0x00000013 */
#define ETM_NUMPROCEL_21  (0x14UL)  /*!< Value 0x00000014 */
#define ETM_NUMPROCEL_22  (0x15UL)  /*!< Value 0x00000015 */
#define ETM_NUMPROCEL_23  (0x16UL)  /*!< Value 0x00000016 */
#define ETM_NUMPROCEL_24  (0x17UL)  /*!< Value 0x00000017 */
#define ETM_NUMPROCEL_25  (0x18UL)  /*!< Value 0x00000018 */
#define ETM_NUMPROCEL_26  (0x19UL)  /*!< Value 0x00000019 */
#define ETM_NUMPROCEL_27  (0x1AUL)  /*!< Value 0x0000001A */
#define ETM_NUMPROCEL_28  (0x1BUL)  /*!< Value 0x0000001B */
#define ETM_NUMPROCEL_29  (0x1CUL)  /*!< Value 0x0000001C */
#define ETM_NUMPROCEL_30  (0x1DUL)  /*!< Value 0x0000001D */
#define ETM_NUMPROCEL_31  (0x1EUL)  /*!< Value 0x0000001E */
#define ETM_NUMPROCEL_32  (0x1FUL)  /*!< Value 0x0000001F */

/*!< ID 4 register */
#define ETM_IDR4_NUMVMIDC_OFFSET    (28U)
#define ETM_IDR4_NUMVMIDC_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMVMIDC))    /*!< Mask  0xF0000000 */

#define ETM_IDR4_NUMCIDC_OFFSET     (24U)
#define ETM_IDR4_NUMCIDC_MASK       (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMCIDC))     /*!< Mask  0x0F000000 */

#define ETM_IDR4_NUMSSCC_OFFSET     (20U)
#define ETM_IDR4_NUMSSCC_MASK       (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMSSCC))     /*!< Mask  0x00F00000 */

#define ETM_IDR4_NUMRDPAIR_OFFSET   (16U)
#define ETM_IDR4_NUMRDPAIR_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMRDPAIR))   /*!< Mask  0x000F0000 */

#define ETM_IDR4_NUMPC_OFFSET       (12U)
#define ETM_IDR4_NUMPC_MASK         (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMPC))       /*!< Mask  0x0000F000 */

#define ETM_IDR4_SUPPDAC_OFFSET     (8U)
#define ETM_IDR4_SUPPDAC_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR4, SUPPDAC))     /*!< Mask  0x0000100 */

#define ETM_IDR4_NUMDVC_OFFSET      (4U)
#define ETM_IDR4_NUMDVC_MASK        (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMDVC))      /*!< Mask  0x00000F0 */

#define ETM_IDR4_NUMACPAIRS_OFFSET  (0U)
#define ETM_IDR4_NUMACPAIRS_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ETM, IDR4, NUMACPAIRS))  /*!< Mask  0x000000F */

// Values of the register storing the number of virtual context identifier comparators available for tracing
#define ETM_NUMVMID_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMVMID_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMVMID_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMVMID_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMVMID_4     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMVMID_5     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMVMID_6     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMVMID_7     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMVMID_8     (0x8UL)  /*!< Value 0x00000008 */

// Values of the register storing the number of context ID comparators available for tracing
#define ETM_NUMCIDC_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMCIDC_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMCIDC_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMCIDC_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMCIDC_4     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMCIDC_5     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMCIDC_6     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMCIDC_7     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMCIDC_8     (0x8UL)  /*!< Value 0x00000008 */

// Values of the register storing the number of single shot comparator controls available for tracing
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_4     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_5     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_6     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_7     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMSINGLESHOTCOMPATORSCTRL_8     (0x8UL)  /*!< Value 0x00000008 */

// Values of the register storing the number of resource selection pairs available for tracing
#define ETM_NUMRESOURCESELECTIONPAIRS_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMRESOURCESELECTIONPAIRS_1     (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMRESOURCESELECTIONPAIRS_2     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMRESOURCESELECTIONPAIRS_3     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMRESOURCESELECTIONPAIRS_4     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMRESOURCESELECTIONPAIRS_5     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMRESOURCESELECTIONPAIRS_6     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMRESOURCESELECTIONPAIRS_7     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMRESOURCESELECTIONPAIRS_8     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMRESOURCESELECTIONPAIRS_9     (0x8UL)  /*!< Value 0x00000008 */
#define ETM_NUMRESOURCESELECTIONPAIRS_10    (0x9UL)  /*!< Value 0x00000009 */
#define ETM_NUMRESOURCESELECTIONPAIRS_11    (0xAUL)  /*!< Value 0x0000000A */
#define ETM_NUMRESOURCESELECTIONPAIRS_12    (0xBUL)  /*!< Value 0x0000000B */
#define ETM_NUMRESOURCESELECTIONPAIRS_13    (0xCUL)  /*!< Value 0x0000000C */
#define ETM_NUMRESOURCESELECTIONPAIRS_14    (0xDUL)  /*!< Value 0x0000000D */
#define ETM_NUMRESOURCESELECTIONPAIRS_15    (0xEUL)  /*!< Value 0x0000000E */
#define ETM_NUMRESOURCESELECTIONPAIRS_16    (0xFUL)  /*!< Value 0x0000000F */

// Values of the register storing the number of processing element (PE) comparator inputs available for tracing
#define ETM_NUMPECOMPARATOR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMPECOMPARATOR_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMPECOMPARATOR_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMPECOMPARATOR_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMPECOMPARATOR_4     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMPECOMPARATOR_5     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMPECOMPARATOR_6     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMPECOMPARATOR_7     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMPECOMPARATOR_8     (0x8UL)  /*!< Value 0x00000008 */

// Values of data address comparator support bit
#define ETM_DATAADDRESSCOMPARATOR_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAADDRESSCOMPARATOR_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing the number of data value comparators available for tracing
#define ETM_NUMDATAVALUECOMPARATOR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMDATAVALUECOMPARATOR_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMDATAVALUECOMPARATOR_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMDATAVALUECOMPARATOR_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMDATAVALUECOMPARATOR_4     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMDATAVALUECOMPARATOR_5     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMDATAVALUECOMPARATOR_6     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMDATAVALUECOMPARATOR_7     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMDATAVALUECOMPARATOR_8     (0x8UL)  /*!< Value 0x00000008 */

// Values of the register storing the number of address comparator pairs available for tracing
#define ETM_NUMADDRESSCOMPARATOR_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMADDRESSCOMPARATOR_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMADDRESSCOMPARATOR_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMADDRESSCOMPARATOR_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMADDRESSCOMPARATOR_4     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_NUMADDRESSCOMPARATOR_5     (0x5UL)  /*!< Value 0x00000005 */
#define ETM_NUMADDRESSCOMPARATOR_6     (0x6UL)  /*!< Value 0x00000006 */
#define ETM_NUMADDRESSCOMPARATOR_7     (0x7UL)  /*!< Value 0x00000007 */
#define ETM_NUMADDRESSCOMPARATOR_8     (0x8UL)  /*!< Value 0x00000008 */

/*!< ID 5 register */
#define ETM_IDR5_REDFUNCNTR_OFFSET    (31U)
#define ETM_IDR5_REDFUNCNTR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR5, REDFUNCNTR))    /*!< Mask  0x80000000 */

#define ETM_IDR5_NUMCNTR_OFFSET    (28U)
#define ETM_IDR5_NUMCNTR_MASK      (0x7UL << REGISTER_FIELD_OFFSET(ETM, IDR5, NUMCNTR))    /*!< Mask  0x70000000 */

#define ETM_IDR5_NUMSEQSTATE_OFFSET     (25U)
#define ETM_IDR5_NUMSEQSTATE_MASK       (0x7UL << REGISTER_FIELD_OFFSET(ETM, IDR5, NUMSEQSTATE))     /*!< Mask  0x0E000000 */

#define ETM_IDR5_LPOVERRIDE_OFFSET     (23U)
#define ETM_IDR5_LPOVERRIDE_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR5, LPOVERRIDE))     /*!< Mask  0x00800000 */

#define ETM_IDR5_ATBTRIG_OFFSET     (22U)
#define ETM_IDR5_ATBTRIG_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, IDR5, ATBTRIG))     /*!< Mask  0x00400000 */

#define ETM_IDR5_TRACEIDSIZE_OFFSET   (16U)
#define ETM_IDR5_TRACEIDSIZE_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, IDR5, TRACEIDSIZE))   /*!< Mask  0x003F0000 */

#define ETM_IDR5_NUMEXTINSEL_OFFSET      (9U)
#define ETM_IDR5_NUMEXTINSEL_MASK        (0x7UL << REGISTER_FIELD_OFFSET(ETM, IDR5, NUMEXTINSEL))      /*!< Mask  0x0000E00 */

#define ETM_IDR5_NUMEXTIN_OFFSET  (0U)
#define ETM_IDR5_NUMEXTIN_MASK    (0x1FFUL << REGISTER_FIELD_OFFSET(ETM, IDR5, NUMEXTIN))  /*!< Mask  0x00001FF */

// Values of reduced function counter support bit
#define ETM_REDUCEDFUNCTIONCOUNTER_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_REDUCEDFUNCTIONCOUNTER_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing the number of counters available for tracing
#define ETM_NUMCOUNTER_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMCOUNTER_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMCOUNTER_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMCOUNTER_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMCOUNTER_4     (0x4UL)  /*!< Value 0x00000004 */

// Values of the register storing the number of sequencer states
#define ETM_NUMSEQUENCERSTATE_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMSEQUENCERSTATE_4     (0x4UL)  /*!< Value 0x00000004 */

// Values of low power state behaviour override support bit
#define ETM_LOWPOWERSTATE_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_LOWPOWERSTATE_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of AMBA Trace Bus (ATB) trigger support bit
#define ETM_ATBTRIGGERS_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_ATBTRIGGERS_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of trace ID width register
#define ETM_TRACEIDSIZE_7  (0x7UL)  /*!< Value 0x00000007 */

// Values of the register storing the number of external input select resources
#define ETM_NUMEXTERNALINPUTSELECTRESOURCES_NONE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_NUMEXTERNALINPUTSELECTRESOURCES_1     (0x1UL)  /*!< Value 0x00000001 */
#define ETM_NUMEXTERNALINPUTSELECTRESOURCES_2     (0x2UL)  /*!< Value 0x00000002 */
#define ETM_NUMEXTERNALINPUTSELECTRESOURCES_3     (0x3UL)  /*!< Value 0x00000003 */
#define ETM_NUMEXTERNALINPUTSELECTRESOURCES_4     (0x4UL)  /*!< Value 0x00000004 */

// Values of the register storing the number of external inputs
#define ETM_NUMEXTERNALINPUTS_NONE  (0x000UL)  /*!< Value 0x00000000 */
#define ETM_NUMEXTERNALINPUTS_1     (0x001UL)  /*!< Value 0x00000001 */
#define ETM_NUMEXTERNALINPUTS_2     (0x002UL)  /*!< Value 0x00000002 */
#define ETM_NUMEXTERNALINPUTS_3     (0x003UL)  /*!< Value 0x00000003 */
#define ETM_NUMEXTERNALINPUTS_4     (0x004UL)  /*!< Value 0x00000004 */
#define ETM_NUMEXTERNALINPUTS_5     (0x005UL)  /*!< Value 0x00000005 */
#define ETM_NUMEXTERNALINPUTS_6     (0x006UL)  /*!< Value 0x00000006 */
#define ETM_NUMEXTERNALINPUTS_7     (0x007UL)  /*!< Value 0x00000007 */
#define ETM_NUMEXTERNALINPUTS_8     (0x008UL)  /*!< Value 0x00000008 */
#define ETM_NUMEXTERNALINPUTS_9     (0x009UL)  /*!< Value 0x00000009 */
#define ETM_NUMEXTERNALINPUTS_10    (0x00AUL)  /*!< Value 0x0000000A */
#define ETM_NUMEXTERNALINPUTS_11    (0x00BUL)  /*!< Value 0x0000000B */
#define ETM_NUMEXTERNALINPUTS_12    (0x00CUL)  /*!< Value 0x0000000C */
#define ETM_NUMEXTERNALINPUTS_13    (0x00DUL)  /*!< Value 0x0000000D */
#define ETM_NUMEXTERNALINPUTS_14    (0x00EUL)  /*!< Value 0x0000000E */
#define ETM_NUMEXTERNALINPUTS_15    (0x00FUL)  /*!< Value 0x0000000F */
#define ETM_NUMEXTERNALINPUTS_16    (0x010UL)  /*!< Value 0x00000010 */
#define ETM_NUMEXTERNALINPUTS_17    (0x011UL)  /*!< Value 0x00000011 */
#define ETM_NUMEXTERNALINPUTS_18    (0x012UL)  /*!< Value 0x00000012 */
#define ETM_NUMEXTERNALINPUTS_19    (0x013UL)  /*!< Value 0x00000013 */
#define ETM_NUMEXTERNALINPUTS_20    (0x014UL)  /*!< Value 0x00000014 */
#define ETM_NUMEXTERNALINPUTS_21    (0x015UL)  /*!< Value 0x00000015 */
#define ETM_NUMEXTERNALINPUTS_22    (0x016UL)  /*!< Value 0x00000016 */
#define ETM_NUMEXTERNALINPUTS_23    (0x017UL)  /*!< Value 0x00000017 */
#define ETM_NUMEXTERNALINPUTS_24    (0x018UL)  /*!< Value 0x00000018 */
#define ETM_NUMEXTERNALINPUTS_25    (0x019UL)  /*!< Value 0x00000019 */
#define ETM_NUMEXTERNALINPUTS_26    (0x01AUL)  /*!< Value 0x0000001A */
#define ETM_NUMEXTERNALINPUTS_27    (0x01BUL)  /*!< Value 0x0000001B */
#define ETM_NUMEXTERNALINPUTS_28    (0x01CUL)  /*!< Value 0x0000001C */
#define ETM_NUMEXTERNALINPUTS_29    (0x01DUL)  /*!< Value 0x0000001D */
#define ETM_NUMEXTERNALINPUTS_30    (0x01EUL)  /*!< Value 0x0000001E */
#define ETM_NUMEXTERNALINPUTS_31    (0x01FUL)  /*!< Value 0x0000001F */
#define ETM_NUMEXTERNALINPUTS_32    (0x020UL)  /*!< Value 0x00000020 */
#define ETM_NUMEXTERNALINPUTS_33    (0x021UL)  /*!< Value 0x00000021 */
#define ETM_NUMEXTERNALINPUTS_34    (0x022UL)  /*!< Value 0x00000022 */
#define ETM_NUMEXTERNALINPUTS_35    (0x023UL)  /*!< Value 0x00000023 */
#define ETM_NUMEXTERNALINPUTS_36    (0x024UL)  /*!< Value 0x00000024 */
#define ETM_NUMEXTERNALINPUTS_37    (0x025UL)  /*!< Value 0x00000025 */
#define ETM_NUMEXTERNALINPUTS_38    (0x026UL)  /*!< Value 0x00000026 */
#define ETM_NUMEXTERNALINPUTS_39    (0x027UL)  /*!< Value 0x00000027 */
#define ETM_NUMEXTERNALINPUTS_40    (0x028UL)  /*!< Value 0x00000028 */
#define ETM_NUMEXTERNALINPUTS_41    (0x029UL)  /*!< Value 0x00000029 */
#define ETM_NUMEXTERNALINPUTS_42    (0x02AUL)  /*!< Value 0x0000002A */
#define ETM_NUMEXTERNALINPUTS_43    (0x02BUL)  /*!< Value 0x0000002B */
#define ETM_NUMEXTERNALINPUTS_44    (0x02CUL)  /*!< Value 0x0000002C */
#define ETM_NUMEXTERNALINPUTS_45    (0x02DUL)  /*!< Value 0x0000002D */
#define ETM_NUMEXTERNALINPUTS_46    (0x02EUL)  /*!< Value 0x0000002E */
#define ETM_NUMEXTERNALINPUTS_47    (0x02FUL)  /*!< Value 0x0000002F */
#define ETM_NUMEXTERNALINPUTS_48    (0x030UL)  /*!< Value 0x00000030 */
#define ETM_NUMEXTERNALINPUTS_49    (0x031UL)  /*!< Value 0x00000031 */
#define ETM_NUMEXTERNALINPUTS_50    (0x032UL)  /*!< Value 0x00000032 */
#define ETM_NUMEXTERNALINPUTS_51    (0x033UL)  /*!< Value 0x00000033 */
#define ETM_NUMEXTERNALINPUTS_52    (0x034UL)  /*!< Value 0x00000034 */
#define ETM_NUMEXTERNALINPUTS_53    (0x035UL)  /*!< Value 0x00000035 */
#define ETM_NUMEXTERNALINPUTS_54    (0x036UL)  /*!< Value 0x00000036 */
#define ETM_NUMEXTERNALINPUTS_55    (0x037UL)  /*!< Value 0x00000037 */
#define ETM_NUMEXTERNALINPUTS_56    (0x038UL)  /*!< Value 0x00000038 */
#define ETM_NUMEXTERNALINPUTS_57    (0x039UL)  /*!< Value 0x00000039 */
#define ETM_NUMEXTERNALINPUTS_58    (0x03AUL)  /*!< Value 0x0000003A */
#define ETM_NUMEXTERNALINPUTS_59    (0x03BUL)  /*!< Value 0x0000003B */
#define ETM_NUMEXTERNALINPUTS_60    (0x03CUL)  /*!< Value 0x0000003C */
#define ETM_NUMEXTERNALINPUTS_61    (0x03DUL)  /*!< Value 0x0000003D */
#define ETM_NUMEXTERNALINPUTS_62    (0x03EUL)  /*!< Value 0x0000003E */
#define ETM_NUMEXTERNALINPUTS_63    (0x03FUL)  /*!< Value 0x0000003F */
#define ETM_NUMEXTERNALINPUTS_64    (0x040UL)  /*!< Value 0x00000040 */
#define ETM_NUMEXTERNALINPUTS_65    (0x041UL)  /*!< Value 0x00000041 */
#define ETM_NUMEXTERNALINPUTS_66    (0x042UL)  /*!< Value 0x00000042 */
#define ETM_NUMEXTERNALINPUTS_67    (0x043UL)  /*!< Value 0x00000043 */
#define ETM_NUMEXTERNALINPUTS_68    (0x044UL)  /*!< Value 0x00000044 */
#define ETM_NUMEXTERNALINPUTS_69    (0x045UL)  /*!< Value 0x00000045 */
#define ETM_NUMEXTERNALINPUTS_70    (0x046UL)  /*!< Value 0x00000046 */
#define ETM_NUMEXTERNALINPUTS_71    (0x047UL)  /*!< Value 0x00000047 */
#define ETM_NUMEXTERNALINPUTS_72    (0x048UL)  /*!< Value 0x00000048 */
#define ETM_NUMEXTERNALINPUTS_73    (0x049UL)  /*!< Value 0x00000049 */
#define ETM_NUMEXTERNALINPUTS_74    (0x04AUL)  /*!< Value 0x0000004A */
#define ETM_NUMEXTERNALINPUTS_75    (0x04BUL)  /*!< Value 0x0000004B */
#define ETM_NUMEXTERNALINPUTS_76    (0x04CUL)  /*!< Value 0x0000004C */
#define ETM_NUMEXTERNALINPUTS_77    (0x04DUL)  /*!< Value 0x0000004D */
#define ETM_NUMEXTERNALINPUTS_78    (0x04EUL)  /*!< Value 0x0000004E */
#define ETM_NUMEXTERNALINPUTS_79    (0x04FUL)  /*!< Value 0x0000004F */
#define ETM_NUMEXTERNALINPUTS_80    (0x050UL)  /*!< Value 0x00000050 */
#define ETM_NUMEXTERNALINPUTS_81    (0x051UL)  /*!< Value 0x00000051 */
#define ETM_NUMEXTERNALINPUTS_82    (0x052UL)  /*!< Value 0x00000052 */
#define ETM_NUMEXTERNALINPUTS_83    (0x053UL)  /*!< Value 0x00000053 */
#define ETM_NUMEXTERNALINPUTS_84    (0x054UL)  /*!< Value 0x00000054 */
#define ETM_NUMEXTERNALINPUTS_85    (0x055UL)  /*!< Value 0x00000055 */
#define ETM_NUMEXTERNALINPUTS_86    (0x056UL)  /*!< Value 0x00000056 */
#define ETM_NUMEXTERNALINPUTS_87    (0x057UL)  /*!< Value 0x00000057 */
#define ETM_NUMEXTERNALINPUTS_88    (0x058UL)  /*!< Value 0x00000058 */
#define ETM_NUMEXTERNALINPUTS_89    (0x059UL)  /*!< Value 0x00000059 */
#define ETM_NUMEXTERNALINPUTS_90    (0x05AUL)  /*!< Value 0x0000005A */
#define ETM_NUMEXTERNALINPUTS_91    (0x05BUL)  /*!< Value 0x0000005B */
#define ETM_NUMEXTERNALINPUTS_92    (0x05CUL)  /*!< Value 0x0000005C */
#define ETM_NUMEXTERNALINPUTS_93    (0x05DUL)  /*!< Value 0x0000005D */
#define ETM_NUMEXTERNALINPUTS_94    (0x05EUL)  /*!< Value 0x0000005E */
#define ETM_NUMEXTERNALINPUTS_95    (0x05FUL)  /*!< Value 0x0000005F */
#define ETM_NUMEXTERNALINPUTS_96    (0x060UL)  /*!< Value 0x00000060 */
#define ETM_NUMEXTERNALINPUTS_97    (0x061UL)  /*!< Value 0x00000061 */
#define ETM_NUMEXTERNALINPUTS_98    (0x062UL)  /*!< Value 0x00000062 */
#define ETM_NUMEXTERNALINPUTS_99    (0x063UL)  /*!< Value 0x00000063 */
#define ETM_NUMEXTERNALINPUTS_100   (0x064UL)  /*!< Value 0x00000064 */
#define ETM_NUMEXTERNALINPUTS_101   (0x065UL)  /*!< Value 0x00000065 */
#define ETM_NUMEXTERNALINPUTS_102   (0x066UL)  /*!< Value 0x00000066 */
#define ETM_NUMEXTERNALINPUTS_103   (0x067UL)  /*!< Value 0x00000067 */
#define ETM_NUMEXTERNALINPUTS_104   (0x068UL)  /*!< Value 0x00000068 */
#define ETM_NUMEXTERNALINPUTS_105   (0x069UL)  /*!< Value 0x00000069 */
#define ETM_NUMEXTERNALINPUTS_106   (0x06AUL)  /*!< Value 0x0000006A */
#define ETM_NUMEXTERNALINPUTS_107   (0x06BUL)  /*!< Value 0x0000006B */
#define ETM_NUMEXTERNALINPUTS_108   (0x06CUL)  /*!< Value 0x0000006C */
#define ETM_NUMEXTERNALINPUTS_109   (0x06DUL)  /*!< Value 0x0000006D */
#define ETM_NUMEXTERNALINPUTS_110   (0x06EUL)  /*!< Value 0x0000006E */
#define ETM_NUMEXTERNALINPUTS_111   (0x06FUL)  /*!< Value 0x0000006F */
#define ETM_NUMEXTERNALINPUTS_112   (0x070UL)  /*!< Value 0x00000070 */
#define ETM_NUMEXTERNALINPUTS_113   (0x071UL)  /*!< Value 0x00000071 */
#define ETM_NUMEXTERNALINPUTS_114   (0x072UL)  /*!< Value 0x00000072 */
#define ETM_NUMEXTERNALINPUTS_115   (0x073UL)  /*!< Value 0x00000073 */
#define ETM_NUMEXTERNALINPUTS_116   (0x074UL)  /*!< Value 0x00000074 */
#define ETM_NUMEXTERNALINPUTS_117   (0x075UL)  /*!< Value 0x00000075 */
#define ETM_NUMEXTERNALINPUTS_118   (0x076UL)  /*!< Value 0x00000076 */
#define ETM_NUMEXTERNALINPUTS_119   (0x077UL)  /*!< Value 0x00000077 */
#define ETM_NUMEXTERNALINPUTS_120   (0x078UL)  /*!< Value 0x00000078 */
#define ETM_NUMEXTERNALINPUTS_121   (0x079UL)  /*!< Value 0x00000079 */
#define ETM_NUMEXTERNALINPUTS_122   (0x07AUL)  /*!< Value 0x0000007A */
#define ETM_NUMEXTERNALINPUTS_123   (0x07BUL)  /*!< Value 0x0000007B */
#define ETM_NUMEXTERNALINPUTS_124   (0x07CUL)  /*!< Value 0x0000007C */
#define ETM_NUMEXTERNALINPUTS_125   (0x07DUL)  /*!< Value 0x0000007D */
#define ETM_NUMEXTERNALINPUTS_126   (0x07EUL)  /*!< Value 0x0000007E */
#define ETM_NUMEXTERNALINPUTS_127   (0x07FUL)  /*!< Value 0x0000007F */
#define ETM_NUMEXTERNALINPUTS_128   (0x080UL)  /*!< Value 0x00000080 */
#define ETM_NUMEXTERNALINPUTS_129   (0x081UL)  /*!< Value 0x00000081 */
#define ETM_NUMEXTERNALINPUTS_130   (0x082UL)  /*!< Value 0x00000082 */
#define ETM_NUMEXTERNALINPUTS_131   (0x083UL)  /*!< Value 0x00000083 */
#define ETM_NUMEXTERNALINPUTS_132   (0x084UL)  /*!< Value 0x00000084 */
#define ETM_NUMEXTERNALINPUTS_133   (0x085UL)  /*!< Value 0x00000085 */
#define ETM_NUMEXTERNALINPUTS_134   (0x086UL)  /*!< Value 0x00000086 */
#define ETM_NUMEXTERNALINPUTS_135   (0x087UL)  /*!< Value 0x00000087 */
#define ETM_NUMEXTERNALINPUTS_136   (0x088UL)  /*!< Value 0x00000088 */
#define ETM_NUMEXTERNALINPUTS_137   (0x089UL)  /*!< Value 0x00000089 */
#define ETM_NUMEXTERNALINPUTS_138   (0x08AUL)  /*!< Value 0x0000008A */
#define ETM_NUMEXTERNALINPUTS_139   (0x08BUL)  /*!< Value 0x0000008B */
#define ETM_NUMEXTERNALINPUTS_140   (0x08CUL)  /*!< Value 0x0000008C */
#define ETM_NUMEXTERNALINPUTS_141   (0x08DUL)  /*!< Value 0x0000008D */
#define ETM_NUMEXTERNALINPUTS_142   (0x08EUL)  /*!< Value 0x0000008E */
#define ETM_NUMEXTERNALINPUTS_143   (0x08FUL)  /*!< Value 0x0000008F */
#define ETM_NUMEXTERNALINPUTS_144   (0x090UL)  /*!< Value 0x00000090 */
#define ETM_NUMEXTERNALINPUTS_145   (0x091UL)  /*!< Value 0x00000091 */
#define ETM_NUMEXTERNALINPUTS_146   (0x092UL)  /*!< Value 0x00000092 */
#define ETM_NUMEXTERNALINPUTS_147   (0x093UL)  /*!< Value 0x00000093 */
#define ETM_NUMEXTERNALINPUTS_148   (0x094UL)  /*!< Value 0x00000094 */
#define ETM_NUMEXTERNALINPUTS_149   (0x095UL)  /*!< Value 0x00000095 */
#define ETM_NUMEXTERNALINPUTS_150   (0x096UL)  /*!< Value 0x00000096 */
#define ETM_NUMEXTERNALINPUTS_151   (0x097UL)  /*!< Value 0x00000097 */
#define ETM_NUMEXTERNALINPUTS_152   (0x098UL)  /*!< Value 0x00000098 */
#define ETM_NUMEXTERNALINPUTS_153   (0x099UL)  /*!< Value 0x00000099 */
#define ETM_NUMEXTERNALINPUTS_154   (0x09AUL)  /*!< Value 0x0000009A */
#define ETM_NUMEXTERNALINPUTS_155   (0x09BUL)  /*!< Value 0x0000009B */
#define ETM_NUMEXTERNALINPUTS_156   (0x09CUL)  /*!< Value 0x0000009C */
#define ETM_NUMEXTERNALINPUTS_157   (0x09DUL)  /*!< Value 0x0000009D */
#define ETM_NUMEXTERNALINPUTS_158   (0x09EUL)  /*!< Value 0x0000009E */
#define ETM_NUMEXTERNALINPUTS_159   (0x09FUL)  /*!< Value 0x0000009F */
#define ETM_NUMEXTERNALINPUTS_160   (0x0A0UL)  /*!< Value 0x000000A0 */
#define ETM_NUMEXTERNALINPUTS_161   (0x0A1UL)  /*!< Value 0x000000A1 */
#define ETM_NUMEXTERNALINPUTS_162   (0x0A2UL)  /*!< Value 0x000000A2 */
#define ETM_NUMEXTERNALINPUTS_163   (0x0A3UL)  /*!< Value 0x000000A3 */
#define ETM_NUMEXTERNALINPUTS_164   (0x0A4UL)  /*!< Value 0x000000A4 */
#define ETM_NUMEXTERNALINPUTS_165   (0x0A5UL)  /*!< Value 0x000000A5 */
#define ETM_NUMEXTERNALINPUTS_166   (0x0A6UL)  /*!< Value 0x000000A6 */
#define ETM_NUMEXTERNALINPUTS_167   (0x0A7UL)  /*!< Value 0x000000A7 */
#define ETM_NUMEXTERNALINPUTS_168   (0x0A8UL)  /*!< Value 0x000000A8 */
#define ETM_NUMEXTERNALINPUTS_169   (0x0A9UL)  /*!< Value 0x000000A9 */
#define ETM_NUMEXTERNALINPUTS_170   (0x0AAUL)  /*!< Value 0x000000AA */
#define ETM_NUMEXTERNALINPUTS_171   (0x0ABUL)  /*!< Value 0x000000AB */
#define ETM_NUMEXTERNALINPUTS_172   (0x0ACUL)  /*!< Value 0x000000AC */
#define ETM_NUMEXTERNALINPUTS_173   (0x0ADUL)  /*!< Value 0x000000AD */
#define ETM_NUMEXTERNALINPUTS_174   (0x0AEUL)  /*!< Value 0x000000AE */
#define ETM_NUMEXTERNALINPUTS_175   (0x0AFUL)  /*!< Value 0x000000AF */
#define ETM_NUMEXTERNALINPUTS_176   (0x0B0UL)  /*!< Value 0x000000B0 */
#define ETM_NUMEXTERNALINPUTS_177   (0x0B1UL)  /*!< Value 0x000000B1 */
#define ETM_NUMEXTERNALINPUTS_178   (0x0B2UL)  /*!< Value 0x000000B2 */
#define ETM_NUMEXTERNALINPUTS_179   (0x0B3UL)  /*!< Value 0x000000B3 */
#define ETM_NUMEXTERNALINPUTS_180   (0x0B4UL)  /*!< Value 0x000000B4 */
#define ETM_NUMEXTERNALINPUTS_181   (0x0B5UL)  /*!< Value 0x000000B5 */
#define ETM_NUMEXTERNALINPUTS_182   (0x0B6UL)  /*!< Value 0x000000B6 */
#define ETM_NUMEXTERNALINPUTS_183   (0x0B7UL)  /*!< Value 0x000000B7 */
#define ETM_NUMEXTERNALINPUTS_184   (0x0B8UL)  /*!< Value 0x000000B8 */
#define ETM_NUMEXTERNALINPUTS_185   (0x0B9UL)  /*!< Value 0x000000B9 */
#define ETM_NUMEXTERNALINPUTS_186   (0x0BAUL)  /*!< Value 0x000000BA */
#define ETM_NUMEXTERNALINPUTS_187   (0x0BBUL)  /*!< Value 0x000000BB */
#define ETM_NUMEXTERNALINPUTS_188   (0x0BCUL)  /*!< Value 0x000000BC */
#define ETM_NUMEXTERNALINPUTS_189   (0x0BDUL)  /*!< Value 0x000000BD */
#define ETM_NUMEXTERNALINPUTS_190   (0x0BEUL)  /*!< Value 0x000000BE */
#define ETM_NUMEXTERNALINPUTS_191   (0x0BFUL)  /*!< Value 0x000000BF */
#define ETM_NUMEXTERNALINPUTS_192   (0x0C0UL)  /*!< Value 0x000000C0 */
#define ETM_NUMEXTERNALINPUTS_193   (0x0C1UL)  /*!< Value 0x000000C1 */
#define ETM_NUMEXTERNALINPUTS_194   (0x0C2UL)  /*!< Value 0x000000C2 */
#define ETM_NUMEXTERNALINPUTS_195   (0x0C3UL)  /*!< Value 0x000000C3 */
#define ETM_NUMEXTERNALINPUTS_196   (0x0C4UL)  /*!< Value 0x000000C4 */
#define ETM_NUMEXTERNALINPUTS_197   (0x0C5UL)  /*!< Value 0x000000C5 */
#define ETM_NUMEXTERNALINPUTS_198   (0x0C6UL)  /*!< Value 0x000000C6 */
#define ETM_NUMEXTERNALINPUTS_199   (0x0C7UL)  /*!< Value 0x000000C7 */
#define ETM_NUMEXTERNALINPUTS_200   (0x0C8UL)  /*!< Value 0x000000C8 */
#define ETM_NUMEXTERNALINPUTS_201   (0x0C9UL)  /*!< Value 0x000000C9 */
#define ETM_NUMEXTERNALINPUTS_202   (0x0CAUL)  /*!< Value 0x000000CA */
#define ETM_NUMEXTERNALINPUTS_203   (0x0CBUL)  /*!< Value 0x000000CB */
#define ETM_NUMEXTERNALINPUTS_204   (0x0CCUL)  /*!< Value 0x000000CC */
#define ETM_NUMEXTERNALINPUTS_205   (0x0CDUL)  /*!< Value 0x000000CD */
#define ETM_NUMEXTERNALINPUTS_206   (0x0CEUL)  /*!< Value 0x000000CE */
#define ETM_NUMEXTERNALINPUTS_207   (0x0CFUL)  /*!< Value 0x000000CF */
#define ETM_NUMEXTERNALINPUTS_208   (0x0D0UL)  /*!< Value 0x000000D0 */
#define ETM_NUMEXTERNALINPUTS_209   (0x0D1UL)  /*!< Value 0x000000D1 */
#define ETM_NUMEXTERNALINPUTS_210   (0x0D2UL)  /*!< Value 0x000000D2 */
#define ETM_NUMEXTERNALINPUTS_211   (0x0D3UL)  /*!< Value 0x000000D3 */
#define ETM_NUMEXTERNALINPUTS_212   (0x0D4UL)  /*!< Value 0x000000D4 */
#define ETM_NUMEXTERNALINPUTS_213   (0x0D5UL)  /*!< Value 0x000000D5 */
#define ETM_NUMEXTERNALINPUTS_214   (0x0D6UL)  /*!< Value 0x000000D6 */
#define ETM_NUMEXTERNALINPUTS_215   (0x0D7UL)  /*!< Value 0x000000D7 */
#define ETM_NUMEXTERNALINPUTS_216   (0x0D8UL)  /*!< Value 0x000000D8 */
#define ETM_NUMEXTERNALINPUTS_217   (0x0D9UL)  /*!< Value 0x000000D9 */
#define ETM_NUMEXTERNALINPUTS_218   (0x0DAUL)  /*!< Value 0x000000DA */
#define ETM_NUMEXTERNALINPUTS_219   (0x0DBUL)  /*!< Value 0x000000DB */
#define ETM_NUMEXTERNALINPUTS_220   (0x0DCUL)  /*!< Value 0x000000DC */
#define ETM_NUMEXTERNALINPUTS_221   (0x0DDUL)  /*!< Value 0x000000DD */
#define ETM_NUMEXTERNALINPUTS_222   (0x0DEUL)  /*!< Value 0x000000DE */
#define ETM_NUMEXTERNALINPUTS_223   (0x0DFUL)  /*!< Value 0x000000DF */
#define ETM_NUMEXTERNALINPUTS_224   (0x0E0UL)  /*!< Value 0x000000E0 */
#define ETM_NUMEXTERNALINPUTS_225   (0x0E1UL)  /*!< Value 0x000000E1 */
#define ETM_NUMEXTERNALINPUTS_226   (0x0E2UL)  /*!< Value 0x000000E2 */
#define ETM_NUMEXTERNALINPUTS_227   (0x0E3UL)  /*!< Value 0x000000E3 */
#define ETM_NUMEXTERNALINPUTS_228   (0x0E4UL)  /*!< Value 0x000000E4 */
#define ETM_NUMEXTERNALINPUTS_229   (0x0E5UL)  /*!< Value 0x000000E5 */
#define ETM_NUMEXTERNALINPUTS_230   (0x0E6UL)  /*!< Value 0x000000E6 */
#define ETM_NUMEXTERNALINPUTS_231   (0x0E7UL)  /*!< Value 0x000000E7 */
#define ETM_NUMEXTERNALINPUTS_232   (0x0E8UL)  /*!< Value 0x000000E8 */
#define ETM_NUMEXTERNALINPUTS_233   (0x0E9UL)  /*!< Value 0x000000E9 */
#define ETM_NUMEXTERNALINPUTS_234   (0x0EAUL)  /*!< Value 0x000000EA */
#define ETM_NUMEXTERNALINPUTS_235   (0x0EBUL)  /*!< Value 0x000000EB */
#define ETM_NUMEXTERNALINPUTS_236   (0x0ECUL)  /*!< Value 0x000000EC */
#define ETM_NUMEXTERNALINPUTS_237   (0x0EDUL)  /*!< Value 0x000000ED */
#define ETM_NUMEXTERNALINPUTS_238   (0x0EEUL)  /*!< Value 0x000000EE */
#define ETM_NUMEXTERNALINPUTS_239   (0x0EFUL)  /*!< Value 0x000000EF */
#define ETM_NUMEXTERNALINPUTS_240   (0x0F0UL)  /*!< Value 0x000000F0 */
#define ETM_NUMEXTERNALINPUTS_241   (0x0F1UL)  /*!< Value 0x000000F1 */
#define ETM_NUMEXTERNALINPUTS_242   (0x0F2UL)  /*!< Value 0x000000F2 */
#define ETM_NUMEXTERNALINPUTS_243   (0x0F3UL)  /*!< Value 0x000000F3 */
#define ETM_NUMEXTERNALINPUTS_244   (0x0F4UL)  /*!< Value 0x000000F4 */
#define ETM_NUMEXTERNALINPUTS_245   (0x0F5UL)  /*!< Value 0x000000F5 */
#define ETM_NUMEXTERNALINPUTS_246   (0x0F6UL)  /*!< Value 0x000000F6 */
#define ETM_NUMEXTERNALINPUTS_247   (0x0F7UL)  /*!< Value 0x000000F7 */
#define ETM_NUMEXTERNALINPUTS_248   (0x0F8UL)  /*!< Value 0x000000F8 */
#define ETM_NUMEXTERNALINPUTS_249   (0x0F9UL)  /*!< Value 0x000000F9 */
#define ETM_NUMEXTERNALINPUTS_250   (0x0FAUL)  /*!< Value 0x000000FA */
#define ETM_NUMEXTERNALINPUTS_251   (0x0FBUL)  /*!< Value 0x000000FB */
#define ETM_NUMEXTERNALINPUTS_252   (0x0FCUL)  /*!< Value 0x000000FC */
#define ETM_NUMEXTERNALINPUTS_253   (0x0FDUL)  /*!< Value 0x000000FD */
#define ETM_NUMEXTERNALINPUTS_254   (0x0FEUL)  /*!< Value 0x000000FE */
#define ETM_NUMEXTERNALINPUTS_255   (0x0FFUL)  /*!< Value 0x000000FF */
#define ETM_NUMEXTERNALINPUTS_256   (0x100UL)  /*!< Value 0x00000100 */

/*!< ID 6 register */
#define ETM_IDR6_RSVD_OFFSET  (0U)
#define ETM_IDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000001 */
#define ETM_IDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000002 */
#define ETM_IDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000004 */
#define ETM_IDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000008 */
#define ETM_IDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000010 */
#define ETM_IDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000020 */
#define ETM_IDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000040 */
#define ETM_IDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000080 */
#define ETM_IDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000100 */
#define ETM_IDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000200 */
#define ETM_IDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000400 */
#define ETM_IDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00000800 */
#define ETM_IDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00001000 */
#define ETM_IDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00002000 */
#define ETM_IDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00004000 */
#define ETM_IDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00008000 */
#define ETM_IDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00010000 */
#define ETM_IDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00020000 */
#define ETM_IDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00040000 */
#define ETM_IDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00080000 */
#define ETM_IDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00100000 */
#define ETM_IDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00200000 */
#define ETM_IDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00400000 */
#define ETM_IDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x00800000 */
#define ETM_IDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x01000000 */
#define ETM_IDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x02000000 */
#define ETM_IDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x04000000 */
#define ETM_IDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x08000000 */
#define ETM_IDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x10000000 */
#define ETM_IDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x20000000 */
#define ETM_IDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x40000000 */
#define ETM_IDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR6, RSVD))  /*!< Value 0x80000000 */

/*!< ID 7 register */
#define ETM_IDR7_RSVD_OFFSET  (0U)
#define ETM_IDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ETM_IDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000001 */
#define ETM_IDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000002 */
#define ETM_IDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000004 */
#define ETM_IDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000008 */
#define ETM_IDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000010 */
#define ETM_IDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000020 */
#define ETM_IDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000040 */
#define ETM_IDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000080 */
#define ETM_IDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000100 */
#define ETM_IDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000200 */
#define ETM_IDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000400 */
#define ETM_IDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00000800 */
#define ETM_IDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00001000 */
#define ETM_IDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00002000 */
#define ETM_IDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00004000 */
#define ETM_IDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00008000 */
#define ETM_IDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00010000 */
#define ETM_IDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00020000 */
#define ETM_IDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00040000 */
#define ETM_IDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00080000 */
#define ETM_IDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00100000 */
#define ETM_IDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00200000 */
#define ETM_IDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00400000 */
#define ETM_IDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x00800000 */
#define ETM_IDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x01000000 */
#define ETM_IDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x02000000 */
#define ETM_IDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x04000000 */
#define ETM_IDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x08000000 */
#define ETM_IDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x10000000 */
#define ETM_IDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x20000000 */
#define ETM_IDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x40000000 */
#define ETM_IDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, IDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Resource selection control register (macros valid for registers RSCTLR2, RSCTLR3, RSCTLR4, RSCTLR5, RSCTLR6, RSCTLR7, RSCTLR8, RSCTLR9, RSCTLR10, RSCTLR11, RSCTLR12, RSCTLR13, RSCTLR14, RSCTLR15, RSCTLR16, RSCTLR17, RSCTLR18, RSCTLR19, RSCTLR20, RSCTLR21, RSCTLR22, RSCTLR23, RSCTLR24, RSCTLR25, RSCTLR26, RSCTLR27, RSCTLR28, RSCTLR29, RSCTLR30, RSCTLR31) */
#define ETM_RSCTLR_PAIRINV_OFFSET  (21U)
#define ETM_RSCTLR_PAIRINV_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, RSCTLR, PAIRINV))    /*!< Mask  0x00200000 - implemented only in registers RSCTLR2, RSCTLR4, RSCTLR6, RSCTLR8, RSCTLR10, RSCTLR12, RSCTLR14, RSCTLR16, RSCTLR18, RSCTLR20, RSCTLR22, RSCTLR24, RSCTLR26, RSCTLR28, RSCTLR30) */

#define ETM_RSCTLR_INV_OFFSET      (20U)
#define ETM_RSCTLR_INV_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, RSCTLR, INV))        /*!< Mask  0x00100000 */

#define ETM_RSCTLR_GROUP_OFFSET    (16U)
#define ETM_RSCTLR_GROUP_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, RSCTLR, GROUP))      /*!< Mask  0x000F0000 */

#define ETM_RSCTLR_SELECT_OFFSET   (0U)
#define ETM_RSCTLR_SELECT_MASK     (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, RSCTLR, SELECT))  /*!< Mask  0x0000FFFF */

// Values of the register bit storing whether the combined result from a resource pair is inverted
#define ETM_RESOURCEPAIRRESULT_NOTINVERTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RESOURCEPAIRRESULT_INVERTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit storing whether the resource selected by RSCTLR.GROUP and RSCTLR.SELECT is inverted
#define ETM_RESOURCE_NOTINVERTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RESOURCE_INVERTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the resource group register
#define ETM_RESOURCEGROUP_EXTERNALINPUTSELECTOR       (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RESOURCEGROUP_PECOMPARATOR                (0x1UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCEGROUP_COUNTERATZEROSEQUENCER      (0x2UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCEGROUP_SINGLESHOTCOMPARATOR        (0x3UL)  /*!< Value 0x00000003 */
#define ETM_RESOURCEGROUP_SINGLEADDRESSCOMPARATOR     (0x4UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCEGROUP_ADDRESSRANGECOMPARATOR      (0x5UL)  /*!< Value 0x00000005 */
#define ETM_RESOURCEGROUP_CONTEXTIDCOMPARATOR         (0x6UL)  /*!< Value 0x00000006 */
#define ETM_RESOURCEGROUP_VIRTUALCONTEXTIDCOMPARATOR  (0x7UL)  /*!< Value 0x00000007 */

// Values of the resource select register
// Group 0 - external input selector
#define ETM_RESOURCE_EXTERNALINPUTSELECTOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_EXTERNALINPUTSELECTOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_EXTERNALINPUTSELECTOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_EXTERNALINPUTSELECTOR3   (0x0008UL)  /*!< Value 0x00000008 */

// Group 1 - processing element (PE) comparator
#define ETM_RESOURCE_PECOMPARATOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_PECOMPARATOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_PECOMPARATOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_PECOMPARATOR3   (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_PECOMPARATOR4   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_PECOMPARATOR5   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_PECOMPARATOR6   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_PECOMPARATOR7   (0x0080UL)  /*!< Value 0x00000080 */

// Group 2 - counter at zero and sequencer state
#define ETM_RESOURCE_COUNTERATZERO0    (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_COUNTERATZERO1    (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_COUNTERATZERO2    (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_COUNTERATZERO3    (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_SEQUENCERSTATE0   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_SEQUENCERSTATE1   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_SEQUENCERSTATE2   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_SEQUENCERSTATE3   (0x0080UL)  /*!< Value 0x00000080 */

// Group 3 - single shot comparator
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR3   (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR4   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR5   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR6   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_SINGLESHOTCOMPARATOR7   (0x0080UL)  /*!< Value 0x00000080 */

// Group 4 - single address comparator
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR3   (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR4   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR5   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR6   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR7   (0x0080UL)  /*!< Value 0x00000080 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR8   (0x0100UL)  /*!< Value 0x00000100 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR9   (0x0200UL)  /*!< Value 0x00000200 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR10  (0x0400UL)  /*!< Value 0x00000400 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR11  (0x0800UL)  /*!< Value 0x00000800 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR12  (0x1000UL)  /*!< Value 0x00001000 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR13  (0x2000UL)  /*!< Value 0x00002000 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR14  (0x4000UL)  /*!< Value 0x00004000 */
#define ETM_RESOURCE_SINGLEADDRESSCOMPARATOR15  (0x8000UL)  /*!< Value 0x00008000 */

// Group 5 - address range comparator
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR3   (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR4   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR5   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR6   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_ADDRESSRANGECOMPARATOR7   (0x0080UL)  /*!< Value 0x00000080 */

// Group 6 - context ID comparator
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR3   (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR4   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR5   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR6   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_CONTEXTIDCOMPARATOR7   (0x0080UL)  /*!< Value 0x00000080 */

// Group 7 - virtual context identifier comparator
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR0   (0x0001UL)  /*!< Value 0x00000001 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR1   (0x0002UL)  /*!< Value 0x00000002 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR2   (0x0004UL)  /*!< Value 0x00000004 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR3   (0x0008UL)  /*!< Value 0x00000008 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR4   (0x0010UL)  /*!< Value 0x00000010 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR5   (0x0020UL)  /*!< Value 0x00000020 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR6   (0x0040UL)  /*!< Value 0x00000040 */
#define ETM_RESOURCE_VIRTUALCONTEXTIDCOMPARATOR7   (0x0080UL)  /*!< Value 0x00000080 */

/*!< Single-shot comparator control register (macros valid for registers SSCCR0, SSCCR1, SSCCR2, SSCCR3, SSCCR4, SSCCR5, SSCCR6, SSCCR7) */
#define ETM_SSCCR_RST_OFFSET  (24U)
#define ETM_SSCCR_RST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SSCCR, RST))     /*!< Mask  0x01000000 */

#define ETM_SSCCR_ARC_OFFSET  (16U)
#define ETM_SSCCR_ARC_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC))    /*!< Mask  0x00FF0000 */

#define ETM_SSCCR_SAC_OFFSET  (0U)
#define ETM_SSCCR_SAC_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC))  /*!< Mask  0x0000FFFF */

// Values of the register bit storing whether the single shot comparator is reset when it fires
#define ETM_RESETONFIRE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_RESETONFIRE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of single shot address range comparator control register
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR7)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR7))  /*!< Mask  0x00800000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR6)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR6))  /*!< Mask  0x00400000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR5)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR5))  /*!< Mask  0x00200000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR4)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR4))  /*!< Mask  0x00100000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR3)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR3))  /*!< Mask  0x00080000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR2)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR2))  /*!< Mask  0x00040000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR1)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR1))  /*!< Mask  0x00020000 */

#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, ARC) + ETM_ADDRESSRANGECOMPARATOR0)
#define ETM_ADDRESSRANGESINGLESHOTCONTROL_ADDRESSRANGECOMPARATOR0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ADDRESSRANGESINGLESHOTCONTROL, ADDRESSRANGECOMPARATOR0))  /*!< Mask  0x00010000 */

// Values of single shot control select bit for a address range comparator
#define ETM_ADDRESSRANGESINGLESHOTCONTROLADDRESSRANGECOMPARATOR_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_ADDRESSRANGESINGLESHOTCONTROLADDRESSRANGECOMPARATOR_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

// Values of single shot single address comparator control field register
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR15_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR15)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR15_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR15))  /*!< Mask  0x00008000 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR14_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR14)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR14_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR14))  /*!< Mask  0x00004000 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR13_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR13)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR13_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR13))  /*!< Mask  0x00002000 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR12_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR12)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR12_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR12))  /*!< Mask  0x00001000 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR11_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR11)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR11_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR11))  /*!< Mask  0x00000800 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR10_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR10)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR10_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR10))  /*!< Mask  0x00000400 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR9_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR9)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR9_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR9))   /*!< Mask  0x00000200 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR8_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR8)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR8_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR8))   /*!< Mask  0x00000100 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR7_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR7)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR7_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR7))   /*!< Mask  0x00000080 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR6_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR6)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR6_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR6))   /*!< Mask  0x00000040 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR5_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR5)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR5_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR5))   /*!< Mask  0x00000020 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR4_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR4)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR4_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR4))   /*!< Mask  0x00000010 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR3_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR3)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR3_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR3))   /*!< Mask  0x00000008 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR2_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR2)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR2))   /*!< Mask  0x00000004 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR1_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR1)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR1))   /*!< Mask  0x00000002 */

#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR0_OFFSET   (REGISTER_FIELD_OFFSET(ETM, SSCCR, SAC) + ETM_SINGLEADDRESSCOMPARATOR0)
#define ETM_SINGLEADDRESSSINGLESHOTCONTROL_SINGLEADDRESSCOMPARATOR0_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLEADDRESSSINGLESHOTCONTROL, SINGLEADDRESSCOMPARATOR0))   /*!< Mask  0x00000001 */

// Values of single shot control select bit for a single address comparator
#define ETM_SINGLEADDRESSSINGLESHOTCONTROLADDRESSRANGECOMPARATOR_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SINGLEADDRESSSINGLESHOTCONTROLADDRESSRANGECOMPARATOR_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

/*!< Single-shot comparator status register (macros valid for registers SSCSR0, SSCSR1, SSCSR2, SSCSR3, SSCSR4, SSCSR5, SSCSR6, SSCSR7) */
#define ETM_SSCSR_STATUS_OFFSET  (31U)
#define ETM_SSCSR_STATUS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SSCSR, STATUS))  /*!< Mask  0x80000000 */

#define ETM_SSCSR_PC_OFFSET      (3U)
#define ETM_SSCSR_PC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, SSCSR, PC))      /*!< Mask  0x00000008 */

#define ETM_SSCSR_DV_OFFSET      (2U)
#define ETM_SSCSR_DV_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, SSCSR, DV))      /*!< Mask  0x00000004 */

#define ETM_SSCSR_DA_OFFSET      (1U)
#define ETM_SSCSR_DA_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, SSCSR, DA))      /*!< Mask  0x00000002 */

#define ETM_SSCSR_INST_OFFSET    (0U)
#define ETM_SSCSR_INST_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, SSCSR, INST))    /*!< Mask  0x00000001 */

// Values of single shot status bit
#define ETM_SINGLESHOTSTATUS_NOMATCH            (0x0UL)  /*!< Value 0x00000000 - value for read  */
#define ETM_SINGLESHOTSTATUS_RESET              (0x0UL)  /*!< Value 0x00000000 - value for write */
#define ETM_SINGLESHOTSTATUS_COMPARATORMATCHED  (0x1UL)  /*!< Value 0x00000001                   */

// Values of single shot processing element (PE) support bit
#define ETM_SINGLESHOTPE_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SINGLESHOTPE_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of data value comparator support bit
#define ETM_DATAVALUECOMPARATOR_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAVALUECOMPARATOR_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of data address comparator support bit
#define ETM_DATAADDRESSCOMPARATOR_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAADDRESSCOMPARATOR_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of instruction address comparator support bit
#define ETM_INSTRUCTIONADDRESSCOMPARATOR_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_INSTRUCTIONADDRESSCOMPARATOR_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Single-shot processing element (PE) comparator input control register (macros valid for registers SSPCICR0, SSPCICR1, SSPCICR2, SSPCICR3, SSPCICR4, SSPCICR5, SSPCICR6, SSPCICR7) */
#define ETM_SSPCICR_PC_OFFSET  (0U)
#define ETM_SSPCICR_PC_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC))  /*!< Mask  0x000000FF */

// Values of processing element (PE) comparator for single-shot control register bits
#define ETM_SINGLESHOTPE_PE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE7)
#define ETM_SINGLESHOTPE_PE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE7))  /*!< Mask  0x00000080 */

#define ETM_SINGLESHOTPE_PE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE6)
#define ETM_SINGLESHOTPE_PE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE6))  /*!< Mask  0x00000040 */

#define ETM_SINGLESHOTPE_PE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE5)
#define ETM_SINGLESHOTPE_PE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE5))  /*!< Mask  0x00000020 */

#define ETM_SINGLESHOTPE_PE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE4)
#define ETM_SINGLESHOTPE_PE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE4))  /*!< Mask  0x00000010 */

#define ETM_SINGLESHOTPE_PE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE3)
#define ETM_SINGLESHOTPE_PE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE3))  /*!< Mask  0x00000008 */

#define ETM_SINGLESHOTPE_PE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE2)
#define ETM_SINGLESHOTPE_PE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE2))  /*!< Mask  0x00000004 */

#define ETM_SINGLESHOTPE_PE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE1)
#define ETM_SINGLESHOTPE_PE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE1))  /*!< Mask  0x00000002 */

#define ETM_SINGLESHOTPE_PE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, SSPCICR, PC) + ETM_PE0)
#define ETM_SINGLESHOTPE_PE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, SINGLESHOTPE, PE0))  /*!< Mask  0x00000001 */

// Values of single shot control select bit for a processing element (PE)
#define ETM_SINGLESHOTPE_UNSELECTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_SINGLESHOTPE_SELECTED    (0x1UL)  /*!< Value 0x00000001 */

// Values of OS lock control bit
#define ETM_OSLOCK_UNLOCK  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_OSLOCK_LOCK    (0x1UL)  /*!< Value 0x00000001 */

/*!< OS lock access register */
#define ETM_OSLAR_OSLK_OFFSET  (0U)
#define ETM_OSLAR_OSLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, OSLAR, OSLK))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define ETM_OSLOCKREGISTERSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

/*!< OS lock status register */
#define ETM_OSLSR_OSLM1_OFFSET  (3U)
#define ETM_OSLSR_OSLM1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, OSLSR, OSLM1))  /*!< Mask  0x00000008 */

#define ETM_OSLSR_NTT_OFFSET    (2U)
#define ETM_OSLSR_NTT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, OSLSR, NTT))    /*!< Mask  0x00000004 */

#define ETM_OSLSR_OSLK_OFFSET   (1U)
#define ETM_OSLSR_OSLK_MASK     (0x1UL << REGISTER_FIELD_OFFSET(ETM, OSLSR, OSLK))   /*!< Mask  0x00000002 */

#define ETM_OSLSR_OSLM0_OFFSET  (0U)
#define ETM_OSLSR_OSLM0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, OSLSR, OSLM0))  /*!< Mask  0x00000001 */

// Values of OS lock status bit
#define ETM_OSLOCK_UNLOCKED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_OSLOCK_LOCKED    (0x1UL)  /*!< Value 0x00000001 */

// Values of OS lock model bit
#define ETM_OSLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_OSLOCK_IMPLEMENTED     (0x2UL)  /*!< Value 0x00000002 */

/*!< PowerDown control register */
#define ETM_PDCR_PU_OFFSET  (3U)
#define ETM_PDCR_PU_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, PDCR, PU))  /*!< Mask  0x00000008 */

// Values of powerup request bit
#define ETM_TRACEUNITPOWER_REMOVE  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNITPOWER_APPLY   (0x1UL)  /*!< Value 0x00000001 */

/*!< PowerDown status register */
#define ETM_PDSR_OSLK_OFFSET      (5U)
#define ETM_PDSR_OSLK_MASK        (0x1UL << REGISTER_FIELD_OFFSET(ETM, PDSR, OSLK))      /*!< Mask  0x00000020 */

#define ETM_PDSR_STICKYPD_OFFSET  (1U)
#define ETM_PDSR_STICKYPD_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, PDSR, STICKYPD))  /*!< Mask  0x00000002 */

#define ETM_PDSR_POWER_OFFSET     (0U)
#define ETM_PDSR_POWER_MASK       (0x1UL << REGISTER_FIELD_OFFSET(ETM, PDSR, POWER))     /*!< Mask  0x00000001 */

// Values of sticky powerdown status bit to indicate whether the trace register state is valid
#define ETM_TRACEREGISTERSTATE_VALID     (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEREGISTERSTATE_NOTVALID  (0x1UL)  /*!< Value 0x00000001 */

// Values of power status bit
#define ETM_TRACEUNITCORE_NOTPOWERED  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_TRACEUNITCORE_POWERED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Address comparator value register (macros valid for registers ACVR0L, ACVR0H, ACVR1L, ACVR1H, ACVR2L, ACVR2H, ACVR3L, ACVR3H, ACVR4L, ACVR4H, ACVR5L, ACVR5H, ACVR6L, ACVR6H, ACVR7L, ACVR7H, ACVR8L, ACVR8H, ACVR9L, ACVR9H, ACVR10L, ACVR10H, ACVR11L, ACVR11H, ACVR12L, ACVR12H, ACVR13L, ACVR13H, ACVR14L, ACVR14H, ACVR15L, ACVR15H) */
#define ETM_ACVR_ADDRESS_OFFSET  (0U)
#define ETM_ACVR_ADDRESS_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Mask  0xFFFFFFFF */
#define ETM_ACVR_ADDRESS_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000001 */
#define ETM_ACVR_ADDRESS_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000002 */
#define ETM_ACVR_ADDRESS_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000004 */
#define ETM_ACVR_ADDRESS_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000008 */
#define ETM_ACVR_ADDRESS_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000010 */
#define ETM_ACVR_ADDRESS_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000020 */
#define ETM_ACVR_ADDRESS_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000040 */
#define ETM_ACVR_ADDRESS_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000080 */
#define ETM_ACVR_ADDRESS_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000100 */
#define ETM_ACVR_ADDRESS_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000200 */
#define ETM_ACVR_ADDRESS_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000400 */
#define ETM_ACVR_ADDRESS_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00000800 */
#define ETM_ACVR_ADDRESS_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00001000 */
#define ETM_ACVR_ADDRESS_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00002000 */
#define ETM_ACVR_ADDRESS_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00004000 */
#define ETM_ACVR_ADDRESS_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00008000 */
#define ETM_ACVR_ADDRESS_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00010000 */
#define ETM_ACVR_ADDRESS_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00020000 */
#define ETM_ACVR_ADDRESS_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00040000 */
#define ETM_ACVR_ADDRESS_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00080000 */
#define ETM_ACVR_ADDRESS_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00100000 */
#define ETM_ACVR_ADDRESS_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00200000 */
#define ETM_ACVR_ADDRESS_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00400000 */
#define ETM_ACVR_ADDRESS_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x00800000 */
#define ETM_ACVR_ADDRESS_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x01000000 */
#define ETM_ACVR_ADDRESS_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x02000000 */
#define ETM_ACVR_ADDRESS_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x04000000 */
#define ETM_ACVR_ADDRESS_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x08000000 */
#define ETM_ACVR_ADDRESS_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x10000000 */
#define ETM_ACVR_ADDRESS_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x20000000 */
#define ETM_ACVR_ADDRESS_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x40000000 */
#define ETM_ACVR_ADDRESS_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, ACVR, ADDRESS))  /*!< Value 0x80000000 */

/*!< Address comparator access type register (macros valid for registers ACATR0L, ACATR0H, ACATR1L, ACATR1H, ACATR2L, ACATR2H, ACATR3L, ACATR3H, ACATR4L, ACATR4H, ACATR5L, ACATR5H, ACATR6L, ACATR6H, ACATR7L, ACATR7H, ACATR8L, ACATR8H, ACATR9L, ACATR9H, ACATR10L, ACATR10H, ACATR11L, ACATR11H, ACATR12L, ACATR12H, ACATR13L, ACATR13H, ACATR14L, ACATR14H, ACATR15L, ACATR15H) */
#define ETM_ACATR_DTBM_OFFSET         (21U)
#define ETM_ACATR_DTBM_MASK           (0x1UL << REGISTER_FIELD_OFFSET(ETM, ACATR, DTBM))         /*!< Mask  0x00200000 */

#define ETM_ACATR_DATARANGE_OFFSET    (20U)
#define ETM_ACATR_DATARANGE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(ETM, ACATR, DATARANGE))    /*!< Mask  0x00100000 */

#define ETM_ACATR_DATASIZE_OFFSET     (18U)
#define ETM_ACATR_DATASIZE_MASK       (0x3UL << REGISTER_FIELD_OFFSET(ETM, ACATR, DATASIZE))     /*!< Mask  0x000C0000 */

#define ETM_ACATR_DATAMATCH_OFFSET    (16U)
#define ETM_ACATR_DATAMATCH_MASK      (0x3UL << REGISTER_FIELD_OFFSET(ETM, ACATR, DATAMATCH))    /*!< Mask  0x00030000 */

#define ETM_ACATR_EXLEVEL_NS_OFFSET   (12U)
#define ETM_ACATR_EXLEVEL_NS_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_NS))   /*!< Mask  0x0000F000 */

#define ETM_ACATR_EXLEVEL_S_OFFSET    (8U)
#define ETM_ACATR_EXLEVEL_S_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_S))    /*!< Mask  0x00000F00 */

#define ETM_ACATR_CONTEXT_OFFSET      (4U)
#define ETM_ACATR_CONTEXT_MASK        (0x7UL << REGISTER_FIELD_OFFSET(ETM, ACATR, CONTEXT))      /*!< Mask  0x00000070 */

#define ETM_ACATR_CONTEXTTYPE_OFFSET  (2U)
#define ETM_ACATR_CONTEXTTYPE_MASK    (0x3UL << REGISTER_FIELD_OFFSET(ETM, ACATR, CONTEXTTYPE))  /*!< Mask  0x0000000C */

#define ETM_ACATR_TYPE_OFFSET         (0U)
#define ETM_ACATR_TYPE_MASK           (0x3UL << REGISTER_FIELD_OFFSET(ETM, ACATR, TYPE))         /*!< Mask  0x00000003 */

// Values of the register bit controlling whether data address comparisons use the data address bits 63 down to 56
#define ETM_DATAADDRESS6356_IGNORE   (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAADDRESS6356_COMPARE  (0x1UL)  /*!< Value 0x00000001 */

// Values of register bit selecting the comparator to use for data value comparison
#define ETM_DATAVALUECOMPARATOR_SINGLEADDRESSCOMPARATOR  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAVALUECOMPARATOR_ADDRESSRANGECOMPARATOR   (0x1UL)  /*!< Value 0x00000001 */

// Values of data width to compare register
#define ETM_DATAWIDTHCOMPARISON_BYTE        (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAWIDTHCOMPARISON_HALFWORD    (0x1UL)  /*!< Value 0x00000001 */
#define ETM_DATAWIDTHCOMPARISON_WORD        (0x2UL)  /*!< Value 0x00000002 */
#define ETM_DATAWIDTHCOMPARISON_DOUBLEWORD  (0x3UL)  /*!< Value 0x00000003 */

// Values of the register controlling how the trace unit performs a data value comparison
#define ETM_DATAVALUECOMPARISON_NONE         (0x0UL)  /*!< Value 0x00000000 */
#define ETM_DATAVALUECOMPARISON_DATAADDRESS  (0x1UL)  /*!< Value 0x00000001 */
#define ETM_DATAVALUECOMPARISON_ADDRESS      (0x3UL)  /*!< Value 0x00000003 */

// Values of bits of register controlling whether a comparison can occur for the corresponding exception level in non secure state
#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL3)
#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, NONSECUREEXCEPTIONLEVEL3))  /*!< Mask  0x00800000 */

#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL2)
#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, NONSECUREEXCEPTIONLEVEL2))  /*!< Mask  0x00400000 */

#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL1)
#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, NONSECUREEXCEPTIONLEVEL1))  /*!< Mask  0x00200000 */

#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_NS) + ETM_EXCEPTIONLEVEL0)
#define ETM_COMPARISON_NONSECUREEXCEPTIONLEVEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, NONSECUREEXCEPTIONLEVEL0))  /*!< Mask  0x00100000 */

// Values of bits of register controlling whether a comparison can occur for the corresponding exception level in secure state
#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL3)
#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, SECUREEXCEPTIONLEVEL3))  /*!< Mask  0x00080000 */

#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL2)
#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, SECUREEXCEPTIONLEVEL2))  /*!< Mask  0x00040000 */

#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL1)
#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, SECUREEXCEPTIONLEVEL1))  /*!< Mask  0x00020000 */

#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, ACATR, EXLEVEL_S) + ETM_EXCEPTIONLEVEL0)
#define ETM_COMPARISON_SECUREEXCEPTIONLEVEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, COMPARISON, SECUREEXCEPTIONLEVEL0))  /*!< Mask  0x00010000 */

// Values of the register bit storing a comparison can occur for the corresponding exception level
#define ETM_EXCEPTIONLEVEL_COMPARISON    (0x0UL)  /*!< Value 0x00000000 - ACATR.EXLEVEL_SX and ACATR.EXLEVEL_NSX is not supported */
#define ETM_EXCEPTIONLEVEL_NOCOMPARISON  (0x1UL)  /*!< Value 0x00000001 - ACATR.EXLEVEL_SX and ACATR.EXLEVEL_NSX is supported     */

// Values of the context ID comparator or virtual context identifier comparator select register
#define ETM_CONTEXTCOMPARATOR_0  (0x0UL)  /*!< Value 0x00000000 */
#define ETM_CONTEXTCOMPARATOR_1  (0x1UL)  /*!< Value 0x00000001 */
#define ETM_CONTEXTCOMPARATOR_2  (0x2UL)  /*!< Value 0x00000002 */
#define ETM_CONTEXTCOMPARATOR_3  (0x3UL)  /*!< Value 0x00000003 */
#define ETM_CONTEXTCOMPARATOR_4  (0x4UL)  /*!< Value 0x00000004 */
#define ETM_CONTEXTCOMPARATOR_5  (0x5UL)  /*!< Value 0x00000005 */
#define ETM_CONTEXTCOMPARATOR_6  (0x6UL)  /*!< Value 0x00000006 */
#define ETM_CONTEXTCOMPARATOR_7  (0x7UL)  /*!< Value 0x00000007 */

// Values of comparator select register
#define ETM_COMPARATOR_NONE              (0x0UL)  /*!< Value 0x00000000 */
#define ETM_COMPARATOR_CONTEXTID         (0x1UL)  /*!< Value 0x00000001 */
#define ETM_COMPARATOR_VIRTUALCONTEXTID  (0x2UL)  /*!< Value 0x00000002 */
#define ETM_COMPARATOR_BOTH              (0x3UL)  /*!< Value 0x00000003 */

// Values of comparison type select register
#define ETM_COMPARISONTYPE_INSTRUCTION             (0x0UL)  /*!< Value 0x00000000 */
#define ETM_COMPARISONTYPE_DATALOADADDRESS         (0x1UL)  /*!< Value 0x00000001 */
#define ETM_COMPARISONTYPE_DATASTOREADDRESS        (0x2UL)  /*!< Value 0x00000002 */
#define ETM_COMPARISONTYPE_DATALOADORSTOREADDRESS  (0x3UL)  /*!< Value 0x00000003 */

/*!< Data value comparator value register (macros valid for registers DVCVR0L, DVCVR0H, DVCVR1L, DVCVR1H, DVCVR2L, DVCVR2H, DVCVR3L, DVCVR3H, DVCVR4L, DVCVR4H, DVCVR5L, DVCVR5H, DVCVR6L, DVCVR6H, DVCVR7L, DVCVR7H) */
#define ETM_DVCVR_VALUE_OFFSET  (0U)
#define ETM_DVCVR_VALUE_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Mask  0xFFFFFFFF */
#define ETM_DVCVR_VALUE_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000001 */
#define ETM_DVCVR_VALUE_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000002 */
#define ETM_DVCVR_VALUE_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000004 */
#define ETM_DVCVR_VALUE_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000008 */
#define ETM_DVCVR_VALUE_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000010 */
#define ETM_DVCVR_VALUE_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000020 */
#define ETM_DVCVR_VALUE_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000040 */
#define ETM_DVCVR_VALUE_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000080 */
#define ETM_DVCVR_VALUE_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000100 */
#define ETM_DVCVR_VALUE_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000200 */
#define ETM_DVCVR_VALUE_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000400 */
#define ETM_DVCVR_VALUE_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00000800 */
#define ETM_DVCVR_VALUE_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00001000 */
#define ETM_DVCVR_VALUE_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00002000 */
#define ETM_DVCVR_VALUE_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00004000 */
#define ETM_DVCVR_VALUE_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00008000 */
#define ETM_DVCVR_VALUE_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00010000 */
#define ETM_DVCVR_VALUE_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00020000 */
#define ETM_DVCVR_VALUE_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00040000 */
#define ETM_DVCVR_VALUE_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00080000 */
#define ETM_DVCVR_VALUE_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00100000 */
#define ETM_DVCVR_VALUE_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00200000 */
#define ETM_DVCVR_VALUE_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00400000 */
#define ETM_DVCVR_VALUE_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x00800000 */
#define ETM_DVCVR_VALUE_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x01000000 */
#define ETM_DVCVR_VALUE_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x02000000 */
#define ETM_DVCVR_VALUE_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x04000000 */
#define ETM_DVCVR_VALUE_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x08000000 */
#define ETM_DVCVR_VALUE_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x10000000 */
#define ETM_DVCVR_VALUE_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x20000000 */
#define ETM_DVCVR_VALUE_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x40000000 */
#define ETM_DVCVR_VALUE_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, DVCVR, VALUE))  /*!< Value 0x80000000 */

/*!< Data value comparator mask register (macros valid for registers DVCMR0L, DVCMR0H, DVCMR1L, DVCMR1H, DVCMR2L, DVCMR2H, DVCMR3L, DVCMR3H, DVCMR4L, DVCMR4H, DVCMR5L, DVCMR5H, DVCMR6L, DVCMR6H, DVCMR7L, DVCMR7H) */
#define ETM_DVCMR_MASK_OFFSET  (0U)
#define ETM_DVCMR_MASK_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Mask  0xFFFFFFFF */
#define ETM_DVCMR_MASK_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000001 */
#define ETM_DVCMR_MASK_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000002 */
#define ETM_DVCMR_MASK_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000004 */
#define ETM_DVCMR_MASK_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000008 */
#define ETM_DVCMR_MASK_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000010 */
#define ETM_DVCMR_MASK_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000020 */
#define ETM_DVCMR_MASK_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000040 */
#define ETM_DVCMR_MASK_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000080 */
#define ETM_DVCMR_MASK_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000100 */
#define ETM_DVCMR_MASK_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000200 */
#define ETM_DVCMR_MASK_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000400 */
#define ETM_DVCMR_MASK_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00000800 */
#define ETM_DVCMR_MASK_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00001000 */
#define ETM_DVCMR_MASK_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00002000 */
#define ETM_DVCMR_MASK_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00004000 */
#define ETM_DVCMR_MASK_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00008000 */
#define ETM_DVCMR_MASK_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00010000 */
#define ETM_DVCMR_MASK_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00020000 */
#define ETM_DVCMR_MASK_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00040000 */
#define ETM_DVCMR_MASK_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00080000 */
#define ETM_DVCMR_MASK_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00100000 */
#define ETM_DVCMR_MASK_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00200000 */
#define ETM_DVCMR_MASK_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00400000 */
#define ETM_DVCMR_MASK_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x00800000 */
#define ETM_DVCMR_MASK_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x01000000 */
#define ETM_DVCMR_MASK_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x02000000 */
#define ETM_DVCMR_MASK_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x04000000 */
#define ETM_DVCMR_MASK_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x08000000 */
#define ETM_DVCMR_MASK_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x10000000 */
#define ETM_DVCMR_MASK_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x20000000 */
#define ETM_DVCMR_MASK_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x40000000 */
#define ETM_DVCMR_MASK_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, DVCMR, MASK))  /*!< Value 0x80000000 */

/*!< Context ID comparator value register (macros valid for registers CIDCVR0L, CIDCVR0H, CIDCVR1L, CIDCVR1H, CIDCVR2L, CIDCVR2H, CIDCVR3L, CIDCVR3H, CIDCVR4L, CIDCVR4H, CIDCVR5L, CIDCVR5H, CIDCVR6L, CIDCVR6H, CIDCVR7L, CIDCVR7H) */
#define ETM_CIDCVR_VALUE_OFFSET  (0U)
#define ETM_CIDCVR_VALUE_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Mask  0xFFFFFFFF */
#define ETM_CIDCVR_VALUE_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000001 */
#define ETM_CIDCVR_VALUE_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000002 */
#define ETM_CIDCVR_VALUE_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000004 */
#define ETM_CIDCVR_VALUE_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000008 */
#define ETM_CIDCVR_VALUE_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000010 */
#define ETM_CIDCVR_VALUE_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000020 */
#define ETM_CIDCVR_VALUE_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000040 */
#define ETM_CIDCVR_VALUE_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000080 */
#define ETM_CIDCVR_VALUE_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000100 */
#define ETM_CIDCVR_VALUE_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000200 */
#define ETM_CIDCVR_VALUE_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000400 */
#define ETM_CIDCVR_VALUE_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00000800 */
#define ETM_CIDCVR_VALUE_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00001000 */
#define ETM_CIDCVR_VALUE_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00002000 */
#define ETM_CIDCVR_VALUE_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00004000 */
#define ETM_CIDCVR_VALUE_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00008000 */
#define ETM_CIDCVR_VALUE_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00010000 */
#define ETM_CIDCVR_VALUE_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00020000 */
#define ETM_CIDCVR_VALUE_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00040000 */
#define ETM_CIDCVR_VALUE_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00080000 */
#define ETM_CIDCVR_VALUE_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00100000 */
#define ETM_CIDCVR_VALUE_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00200000 */
#define ETM_CIDCVR_VALUE_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00400000 */
#define ETM_CIDCVR_VALUE_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x00800000 */
#define ETM_CIDCVR_VALUE_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x01000000 */
#define ETM_CIDCVR_VALUE_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x02000000 */
#define ETM_CIDCVR_VALUE_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x04000000 */
#define ETM_CIDCVR_VALUE_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x08000000 */
#define ETM_CIDCVR_VALUE_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x10000000 */
#define ETM_CIDCVR_VALUE_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x20000000 */
#define ETM_CIDCVR_VALUE_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x40000000 */
#define ETM_CIDCVR_VALUE_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, CIDCVR, VALUE))  /*!< Value 0x80000000 */

/*!< Virtual context identifier comparator value register */
#define ETM_VMIDCVR_VALUE_OFFSET  (0U)
#define ETM_VMIDCVR_VALUE_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Mask  0xFFFFFFFF */
#define ETM_VMIDCVR_VALUE_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000001 */
#define ETM_VMIDCVR_VALUE_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000002 */
#define ETM_VMIDCVR_VALUE_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000004 */
#define ETM_VMIDCVR_VALUE_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000008 */
#define ETM_VMIDCVR_VALUE_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000010 */
#define ETM_VMIDCVR_VALUE_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000020 */
#define ETM_VMIDCVR_VALUE_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000040 */
#define ETM_VMIDCVR_VALUE_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000080 */
#define ETM_VMIDCVR_VALUE_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000100 */
#define ETM_VMIDCVR_VALUE_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000200 */
#define ETM_VMIDCVR_VALUE_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000400 */
#define ETM_VMIDCVR_VALUE_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00000800 */
#define ETM_VMIDCVR_VALUE_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00001000 */
#define ETM_VMIDCVR_VALUE_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00002000 */
#define ETM_VMIDCVR_VALUE_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00004000 */
#define ETM_VMIDCVR_VALUE_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00008000 */
#define ETM_VMIDCVR_VALUE_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00010000 */
#define ETM_VMIDCVR_VALUE_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00020000 */
#define ETM_VMIDCVR_VALUE_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00040000 */
#define ETM_VMIDCVR_VALUE_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00080000 */
#define ETM_VMIDCVR_VALUE_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00100000 */
#define ETM_VMIDCVR_VALUE_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00200000 */
#define ETM_VMIDCVR_VALUE_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00400000 */
#define ETM_VMIDCVR_VALUE_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x00800000 */
#define ETM_VMIDCVR_VALUE_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x01000000 */
#define ETM_VMIDCVR_VALUE_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x02000000 */
#define ETM_VMIDCVR_VALUE_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x04000000 */
#define ETM_VMIDCVR_VALUE_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x08000000 */
#define ETM_VMIDCVR_VALUE_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x10000000 */
#define ETM_VMIDCVR_VALUE_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x20000000 */
#define ETM_VMIDCVR_VALUE_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x40000000 */
#define ETM_VMIDCVR_VALUE_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ETM, VMIDCVR, VALUE))  /*!< Value 0x80000000 */

/*!< Context ID comparator control 0 register */
#define ETM_CIDCCTLR0_COMP3_OFFSET  (24U)
#define ETM_CIDCCTLR0_COMP3_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3))  /*!< Mask  0xFF000000 */

#define ETM_CIDCCTLR0_COMP2_OFFSET  (16U)
#define ETM_CIDCCTLR0_COMP2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2))  /*!< Mask  0x00FF0000 */

#define ETM_CIDCCTLR0_COMP1_OFFSET  (8U)
#define ETM_CIDCCTLR0_COMP1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1))  /*!< Mask  0x0000FF00 */

#define ETM_CIDCCTLR0_COMP0_OFFSET  (0U)
#define ETM_CIDCCTLR0_COMP0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0))  /*!< Mask  0x000000FF */

// Values of bits of the instruction tracing exception level enable register
#define ETM_TRACEUNITBYTE7  (7U)
#define ETM_TRACEUNITBYTE6  (6U)
#define ETM_TRACEUNITBYTE5  (5U)
#define ETM_TRACEUNITBYTE4  (4U)
#define ETM_TRACEUNITBYTE3  (3U)
#define ETM_TRACEUNITBYTE2  (2U)
#define ETM_TRACEUNITBYTE1  (1U)
#define ETM_TRACEUNITBYTE0  (0U)

// Values of bits of register controlling whether a comparison for context ID comparator 3 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR3_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR3_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR3_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR3, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for context ID comparator 2 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR2_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR2_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR2_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR2, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for context ID comparator 1 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR1_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR1_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR1_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR1, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for context ID comparator 0 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR0_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR0_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR0_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR0, BYTE0))  /*!< Mask  0x00010000 */

/*!< Context ID comparator control 1 register */
#define ETM_CIDCCTLR1_COMP7_OFFSET  (24U)
#define ETM_CIDCCTLR1_COMP7_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7))  /*!< Mask  0xFF000000 */

#define ETM_CIDCCTLR1_COMP6_OFFSET  (16U)
#define ETM_CIDCCTLR1_COMP6_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6))  /*!< Mask  0x00FF0000 */

#define ETM_CIDCCTLR1_COMP5_OFFSET  (8U)
#define ETM_CIDCCTLR1_COMP5_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5))  /*!< Mask  0x0000FF00 */

#define ETM_CIDCCTLR1_COMP4_OFFSET  (0U)
#define ETM_CIDCCTLR1_COMP4_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4))  /*!< Mask  0x000000FF */

// Values of bits of register controlling whether a comparison for context ID comparator 7 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR7_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR7_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR7_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR7, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for context ID comparator 6 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR6_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR6_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR6_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR6, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for context ID comparator 5 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR5_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR5_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR5_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR5, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for context ID comparator 4 can occur for the corresponding exception level in secure state
#define ETM_CONTEXTIDCOMPARATOR4_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE7)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE6)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE5)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE4)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE3)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE2)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE1)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_CONTEXTIDCOMPARATOR4_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, CIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE0)
#define ETM_CONTEXTIDCOMPARATOR4_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, CONTEXTIDCOMPARATOR4, BYTE0))  /*!< Mask  0x00010000 */

/*!< Virtual context identifier comparator control 0 register */
#define ETM_VMIDCCTLR0_COMP3_OFFSET  (24U)
#define ETM_VMIDCCTLR0_COMP3_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3))  /*!< Mask  0xFF000000 */

#define ETM_VMIDCCTLR0_COMP2_OFFSET  (16U)
#define ETM_VMIDCCTLR0_COMP2_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2))  /*!< Mask  0x00FF0000 */

#define ETM_VMIDCCTLR0_COMP1_OFFSET  (8U)
#define ETM_VMIDCCTLR0_COMP1_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1))  /*!< Mask  0x0000FF00 */

#define ETM_VMIDCCTLR0_COMP0_OFFSET  (0U)
#define ETM_VMIDCCTLR0_COMP0_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0))  /*!< Mask  0x000000FF */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 3 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP3) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR3_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR3, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 2 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP2) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR2_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR2, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 1 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP1) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR1_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR1, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 0 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR0, COMP0) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR0_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR0, BYTE0))  /*!< Mask  0x00010000 */

/*!< Virtual context identifier comparator control 1 register */
#define ETM_VMIDCCTLR1_COMP7_OFFSET  (24U)
#define ETM_VMIDCCTLR1_COMP7_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7))  /*!< Mask  0xFF000000 */

#define ETM_VMIDCCTLR1_COMP6_OFFSET  (16U)
#define ETM_VMIDCCTLR1_COMP6_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6))  /*!< Mask  0x00FF0000 */

#define ETM_VMIDCCTLR1_COMP5_OFFSET  (8U)
#define ETM_VMIDCCTLR1_COMP5_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5))  /*!< Mask  0x0000FF00 */

#define ETM_VMIDCCTLR1_COMP4_OFFSET  (0U)
#define ETM_VMIDCCTLR1_COMP4_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4))  /*!< Mask  0x000000FF */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 7 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP7) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR7_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR7, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 6 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP6) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR6_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR6, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 5 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP5) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR5_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR5, BYTE0))  /*!< Mask  0x00010000 */

// Values of bits of register controlling whether a comparison for virtual context identifier comparator 4 can occur for the corresponding exception level in secure state
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE7_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE7)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE7))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE6_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE6)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE6))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE5_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE5)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE5))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE4_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE4)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE4))  /*!< Mask  0x00010000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE3_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE3)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE3))  /*!< Mask  0x00080000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE2_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE2)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE2))  /*!< Mask  0x00040000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE1_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE1)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE1))  /*!< Mask  0x00020000 */

#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE0_OFFSET  (REGISTER_FIELD_OFFSET(ETM, VMIDCCTLR1, COMP4) + ETM_TRACEUNITBYTE0)
#define ETM_VIRTUALCONTEXTIDCOMPARATOR4_BYTE0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, VIRTUALCONTEXTIDCOMPARATOR4, BYTE0))  /*!< Mask  0x00010000 */

/*!< Integration mode control register */
#define ETM_ITCTRL_IME_OFFSET  (0U)
#define ETM_ITCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, ITCTRL, IME))  /*!< Mask  0x00000001 */

/*!< Claim tag set register */
#define ETM_CLAIMSET_CLAIMSET_OFFSET  (0U)
#define ETM_CLAIMSET_CLAIMSET_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ETM, CLAIMSET, CLAIMSET))  /*!< Mask  0x000000FF */

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

/*!< CoreSight lock status register */
#define ETM_LSR_NTT_OFFSET  (2U)
#define ETM_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, LSR, NTT))  /*!< Mask  0x00000004 */

#define ETM_LSR_SLK_OFFSET  (1U)
#define ETM_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, LSR, SLK))  /*!< Mask  0x00000002 */

#define ETM_LSR_SLI_OFFSET  (0U)
#define ETM_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ETM, LSR, SLI))  /*!< Mask  0x00000001 */

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
#define ETM_AUTHSTAT_NSID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(ETM, AUTHSTAT, NSID))   /*!< Mask  0x00000003 - security level for non secure invasive debug */

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
#define ETM_REVISION_ETMV41  (0x1UL)  /*!< Value 0x00000001 - ETMv4.1 */
#define ETM_REVISION_ETMV42  (0x2UL)  /*!< Value 0x00000002 - ETMv4.2 */
#define ETM_REVISION_ETMV43  (0x3UL)  /*!< Value 0x00000003 - ETMv4.3 */
#define ETM_REVISION_ETMV44  (0x4UL)  /*!< Value 0x00000004 - ETMv4.4 */
#define ETM_REVISION_ETMV45  (0x5UL)  /*!< Value 0x00000005 - ETMv4.5 */
#define ETM_REVISION_ETMV46  (0x6UL)  /*!< Value 0x00000006 - ETMv4.6 */

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

/** @} */ // End of ETM group

/** @} */ // End of RegisterGroup group

#endif // ETM_H
