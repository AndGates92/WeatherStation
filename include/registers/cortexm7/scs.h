#ifndef SCS_REGISTERS_H
#define SCS_REGISTERS_H
/**
 * @copyright
 * @file scs.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief System control space (SCS) registers
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SCS System control space (SCS) registers
 *  @brief System control space (SCS) register macros and structures
 *  @{
 */

typedef struct {
	   uint32_t reserved0;       /*!< Reserved                              (Offset 0x0)            */
	RO uint32_t ICTR;            /*!< Interrupt controller type register    (Offset 0x4)            */
	RW uint32_t ACTLR;           /*!< Auxiliary control register            (Offset 0x8)            */
	   uint32_t reserved1[957];  /*!< Reserved                              (Offset 0xC to 0xEFC)   */
	WO uint32_t STIR;            /*!< Sofware trigger interrupt (STIR)      (Offset 0xF00)          */
	   uint32_t reserved2[957];  /*!< Reserved                              (Offset 0xF04 to 0xFAC) */
	WO uint32_t LAR;             /*!< CoreSight lock access register        (Offset 0xFB0)          */
	RO uint32_t LSR;             /*!< CoreSight lock status register        (Offset 0xFB4)          */
	   uint32_t reserved3[6U];   /*!< Reserved                              (Offset 0xFB8 to 0xFCC) */
	RO uint32_t PIDR4;           /*!< Peripheral identification 4 register  (Offset 0xFD0)          */
	RO uint32_t PIDR5;           /*!< Peripheral identification 5 register  (Offset 0xFD4)          */
	RO uint32_t PIDR6;           /*!< Peripheral identification 6 register  (Offset 0xFD8)          */
	RO uint32_t PIDR7;           /*!< Peripheral identification 7 register  (Offset 0xFDC)          */
	RO uint32_t PIDR0;           /*!< Peripheral identification 0 register  (Offset 0xFE0)          */
	RO uint32_t PIDR1;           /*!< Peripheral identification 1 register  (Offset 0xFE4)          */
	RO uint32_t PIDR2;           /*!< Peripheral identification 2 register  (Offset 0xFE8)          */
	RO uint32_t PIDR3;           /*!< Peripheral identification 3 register  (Offset 0xFEC)          */
	RO uint32_t CIDR0;           /*!< Component identification 0 register   (Offset 0xFF0)          */
	RO uint32_t CIDR1;           /*!< Component identification 1 register   (Offset 0xFF4)          */
	RO uint32_t CIDR2;           /*!< Component identification 2 register   (Offset 0xFF8)          */
	RO uint32_t CIDR3;           /*!< Component identification 3 register   (Offset 0xFFC)          */

} scs_regs;

/*!< System control registers in system control space (SCS) registers */
/*!< Interrupt controller type register */
#define SCS_ICTR_INTLINESNUM_OFFSET  (0U)
#define SCS_ICTR_INTLINESNUM_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCS, ICTR, INTLINESNUM))  /*!< Mask  0x0000000F */

// Available delays between non volatile memory signals during programming operations
#define SCS_INTLINES_0_31     (0x0UL)  /*!< Value 0x00000000 */
#define SCS_INTLINES_32_63    (0x1UL)  /*!< Value 0x00000001 */
#define SCS_INTLINES_64_95    (0x2UL)  /*!< Value 0x00000002 */
#define SCS_INTLINES_96_127   (0x3UL)  /*!< Value 0x00000003 */
#define SCS_INTLINES_128_159  (0x4UL)  /*!< Value 0x00000004 */
#define SCS_INTLINES_160_191  (0x5UL)  /*!< Value 0x00000005 */
#define SCS_INTLINES_192_223  (0x6UL)  /*!< Value 0x00000006 */
#define SCS_INTLINES_224_256  (0x7UL)  /*!< Value 0x00000007 */
#define SCS_INTLINES_256_287  (0x8UL)  /*!< Value 0x00000008 */
#define SCS_INTLINES_288_319  (0x9UL)  /*!< Value 0x00000009 */
#define SCS_INTLINES_320_351  (0xAUL)  /*!< Value 0x0000000A */
#define SCS_INTLINES_352_383  (0xBUL)  /*!< Value 0x0000000B */
#define SCS_INTLINES_384_415  (0xCUL)  /*!< Value 0x0000000C */
#define SCS_INTLINES_416_447  (0xDUL)  /*!< Value 0x0000000D */
#define SCS_INTLINES_448_479  (0xEUL)  /*!< Value 0x0000000E */
#define SCS_INTLINES_480_495  (0xFUL)  /*!< Value 0x0000000F */

/*!< Auxiliary control register */
#define SCS_ACTLR_DISFPUISSOPT_OFFSET    (28U)
#define SCS_ACTLR_DISFPUISSOPT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISFPUISSOPT))    /*!< Mask  0x10000000 */

#define SCS_ACTLR_DISCRITAXIRUW_OFFSET   (27U)
#define SCS_ACTLR_DISCRITAXIRUW_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISCRITAXIRUW))   /*!< Mask  0x08000000 */

#define SCS_ACTLR_DISDYNALL_OFFSET       (26U)
#define SCS_ACTLR_DISDYNALL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDYNALL))       /*!< Mask  0x04000000 */

#define SCS_ACTLR_DISISSCH1_OFFSET       (21U)
#define SCS_ACTLR_DISISSCH1_MASK         (0xFUL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISISSCH1))       /*!< Mask  0x03E00000 */

#define SCS_ACTLR_DISDI_OFFSET           (16U)
#define SCS_ACTLR_DISDI_MASK             (0xFUL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI))           /*!< Mask  0x001F0000 */

#define SCS_ACTLR_DISCRITAXIRUR_OFFSET   (15U)
#define SCS_ACTLR_DISCRITAXIRUR_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISCRITAXIRUR))   /*!< Mask  0x00008000 */

#define SCS_ACTLR_DISBTACALLOC_OFFSET    (14U)
#define SCS_ACTLR_DISBTACALLOC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISBTACALLOC))    /*!< Mask  0x00004000 */

#define SCS_ACTLR_DISBTACREAD_OFFSET     (13U)
#define SCS_ACTLR_DISBTACREAD_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISBTACREAD))     /*!< Mask  0x00002000 */

#define SCS_ACTLR_DISITMATBFLUSH_OFFSET  (12U)
#define SCS_ACTLR_DISITMATBFLUSH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISITMATBFLUSH))  /*!< Mask  0x00001000 */

#define SCS_ACTLR_DISRAMODE_OFFSET       (11U)
#define SCS_ACTLR_DISRAMODE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISRAMODE))       /*!< Mask  0x00000800 */

#define SCS_ACTLR_FPUEXCODIS_OFFSET      (10U)
#define SCS_ACTLR_FPUEXCODIS_MASK        (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, FPUEXCODIS))      /*!< Mask  0x00000400 */

#define SCS_ACTLR_DISFOLD_OFFSET         (2U)
#define SCS_ACTLR_DISFOLD_MASK           (0x1UL << REGISTER_FIELD_OFFSET(SCS, ACTLR, DISFOLD))         /*!< Mask  0x00000004 */

// Values of dual issue bits
#define SCS_DUALISSUE_VFP             (4U)
#define SCS_DUALISSUE_INTMACMUL       (3U)
#define SCS_DUALISSUE_LOADPC          (2U)
#define SCS_DUALISSUE_INDIRECTBRANCH  (1U)
#define SCS_DUALISSUE_DIRECTBRANCH    (0U)

// Values of dual issue in channel 1 register bits
#define SCS_DUALISSUECH1_VPF_OFFSET             (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_VFP)
#define SCS_DUALISSUECH1_VPF_MASK               (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH1, VPF))             /*!< Mask  0x02000000 */

#define SCS_DUALISSUECH1_INTMACMUL_OFFSET       (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_INTMACMUL)
#define SCS_DUALISSUECH1_INTMACMUL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH1, INTMACMUL))       /*!< Mask  0x01000000 */

#define SCS_DUALISSUECH1_LOADPC_OFFSET          (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_LOADPC)
#define SCS_DUALISSUECH1_LOADPC_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH1, LOADPC))          /*!< Mask  0x00800000 */

#define SCS_DUALISSUECH1_INDIRECTBRANCH_OFFSET  (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_INDIRECTBRANCH)
#define SCS_DUALISSUECH1_INDIRECTBRANCH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH1, INDIRECTBRANCH))  /*!< Mask  0x00400000 */

#define SCS_DUALISSUECH1_DIRECTBRANCH_OFFSET    (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_DIRECTBRANCH)
#define SCS_DUALISSUECH1_DIRECTBRANCH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH1, DIRECTBRANCH))    /*!< Mask  0x00200000 */

// Values of dual issue in channel 0 register bits
#define SCS_DUALISSUECH0_VPF_OFFSET             (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_VFP)
#define SCS_DUALISSUECH0_VPF_MASK               (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH0, VPF))             /*!< Mask  0x00100000 */

#define SCS_DUALISSUECH0_INTMACMUL_OFFSET       (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_INTMACMUL)
#define SCS_DUALISSUECH0_INTMACMUL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH0, INTMACMUL))       /*!< Mask  0x00080000 */

#define SCS_DUALISSUECH0_LOADPC_OFFSET          (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_LOADPC)
#define SCS_DUALISSUECH0_LOADPC_MASK            (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH0, LOADPC))          /*!< Mask  0x00040000 */

#define SCS_DUALISSUECH0_INDIRECTBRANCH_OFFSET  (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_INDIRECTBRANCH)
#define SCS_DUALISSUECH0_INDIRECTBRANCH_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH0, INDIRECTBRANCH))  /*!< Mask  0x00020000 */

#define SCS_DUALISSUECH0_DIRECTBRANCH_OFFSET    (REGISTER_FIELD_OFFSET(SCS, ACTLR, DISDI) + SCS_DUALISSUE_DIRECTBRANCH)
#define SCS_DUALISSUECH0_DIRECTBRANCH_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SCS, DUALISSUECH0, DIRECTBRANCH))    /*!< Mask  0x00010000 */

// Values of enable bits
#define SCS_ACTLR_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define SCS_ACTLR_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

/*!< Software trigger interrupt register */
#define SCS_STIR_INTID_OFFSET  (0U)
#define SCS_STIR_INTID_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SCS, STIR, INTID))  /*!< Mask  0x000000FF */

// Value of interrupts ID register
#define SCS_INTID_0    (0x00UL)  /*!< Value 0x00000000 */
#define SCS_INTID_1    (0x01UL)  /*!< Value 0x00000001 */
#define SCS_INTID_2    (0x02UL)  /*!< Value 0x00000002 */
#define SCS_INTID_3    (0x03UL)  /*!< Value 0x00000003 */
#define SCS_INTID_4    (0x04UL)  /*!< Value 0x00000004 */
#define SCS_INTID_5    (0x05UL)  /*!< Value 0x00000005 */
#define SCS_INTID_6    (0x06UL)  /*!< Value 0x00000006 */
#define SCS_INTID_7    (0x07UL)  /*!< Value 0x00000007 */
#define SCS_INTID_8    (0x08UL)  /*!< Value 0x00000008 */
#define SCS_INTID_9    (0x09UL)  /*!< Value 0x00000009 */
#define SCS_INTID_10   (0x0AUL)  /*!< Value 0x0000000A */
#define SCS_INTID_11   (0x0BUL)  /*!< Value 0x0000000B */
#define SCS_INTID_12   (0x0CUL)  /*!< Value 0x0000000C */
#define SCS_INTID_13   (0x0DUL)  /*!< Value 0x0000000D */
#define SCS_INTID_14   (0x0EUL)  /*!< Value 0x0000000E */
#define SCS_INTID_15   (0x0FUL)  /*!< Value 0x0000000F */
#define SCS_INTID_16   (0x10UL)  /*!< Value 0x00000010 */
#define SCS_INTID_17   (0x11UL)  /*!< Value 0x00000011 */
#define SCS_INTID_18   (0x12UL)  /*!< Value 0x00000012 */
#define SCS_INTID_19   (0x13UL)  /*!< Value 0x00000013 */
#define SCS_INTID_20   (0x14UL)  /*!< Value 0x00000014 */
#define SCS_INTID_21   (0x15UL)  /*!< Value 0x00000015 */
#define SCS_INTID_22   (0x16UL)  /*!< Value 0x00000016 */
#define SCS_INTID_23   (0x17UL)  /*!< Value 0x00000017 */
#define SCS_INTID_24   (0x18UL)  /*!< Value 0x00000018 */
#define SCS_INTID_25   (0x19UL)  /*!< Value 0x00000019 */
#define SCS_INTID_26   (0x1AUL)  /*!< Value 0x0000001A */
#define SCS_INTID_27   (0x1BUL)  /*!< Value 0x0000001B */
#define SCS_INTID_28   (0x1CUL)  /*!< Value 0x0000001C */
#define SCS_INTID_29   (0x1DUL)  /*!< Value 0x0000001D */
#define SCS_INTID_30   (0x1EUL)  /*!< Value 0x0000001E */
#define SCS_INTID_31   (0x1FUL)  /*!< Value 0x0000001F */
#define SCS_INTID_32   (0x20UL)  /*!< Value 0x00000020 */
#define SCS_INTID_33   (0x21UL)  /*!< Value 0x00000021 */
#define SCS_INTID_34   (0x22UL)  /*!< Value 0x00000022 */
#define SCS_INTID_35   (0x23UL)  /*!< Value 0x00000023 */
#define SCS_INTID_36   (0x24UL)  /*!< Value 0x00000024 */
#define SCS_INTID_37   (0x25UL)  /*!< Value 0x00000025 */
#define SCS_INTID_38   (0x26UL)  /*!< Value 0x00000026 */
#define SCS_INTID_39   (0x27UL)  /*!< Value 0x00000027 */
#define SCS_INTID_40   (0x28UL)  /*!< Value 0x00000028 */
#define SCS_INTID_41   (0x29UL)  /*!< Value 0x00000029 */
#define SCS_INTID_42   (0x2AUL)  /*!< Value 0x0000002A */
#define SCS_INTID_43   (0x2BUL)  /*!< Value 0x0000002B */
#define SCS_INTID_44   (0x2CUL)  /*!< Value 0x0000002C */
#define SCS_INTID_45   (0x2DUL)  /*!< Value 0x0000002D */
#define SCS_INTID_46   (0x2EUL)  /*!< Value 0x0000002E */
#define SCS_INTID_47   (0x2FUL)  /*!< Value 0x0000002F */
#define SCS_INTID_48   (0x30UL)  /*!< Value 0x00000030 */
#define SCS_INTID_49   (0x31UL)  /*!< Value 0x00000031 */
#define SCS_INTID_50   (0x32UL)  /*!< Value 0x00000032 */
#define SCS_INTID_51   (0x33UL)  /*!< Value 0x00000033 */
#define SCS_INTID_52   (0x34UL)  /*!< Value 0x00000034 */
#define SCS_INTID_53   (0x35UL)  /*!< Value 0x00000035 */
#define SCS_INTID_54   (0x36UL)  /*!< Value 0x00000036 */
#define SCS_INTID_55   (0x37UL)  /*!< Value 0x00000037 */
#define SCS_INTID_56   (0x38UL)  /*!< Value 0x00000038 */
#define SCS_INTID_57   (0x39UL)  /*!< Value 0x00000039 */
#define SCS_INTID_58   (0x3AUL)  /*!< Value 0x0000003A */
#define SCS_INTID_59   (0x3BUL)  /*!< Value 0x0000003B */
#define SCS_INTID_60   (0x3CUL)  /*!< Value 0x0000003C */
#define SCS_INTID_61   (0x3DUL)  /*!< Value 0x0000003D */
#define SCS_INTID_62   (0x3EUL)  /*!< Value 0x0000003E */
#define SCS_INTID_63   (0x3FUL)  /*!< Value 0x0000003F */
#define SCS_INTID_64   (0x40UL)  /*!< Value 0x00000040 */
#define SCS_INTID_65   (0x41UL)  /*!< Value 0x00000041 */
#define SCS_INTID_66   (0x42UL)  /*!< Value 0x00000042 */
#define SCS_INTID_67   (0x43UL)  /*!< Value 0x00000043 */
#define SCS_INTID_68   (0x44UL)  /*!< Value 0x00000044 */
#define SCS_INTID_69   (0x45UL)  /*!< Value 0x00000045 */
#define SCS_INTID_70   (0x46UL)  /*!< Value 0x00000046 */
#define SCS_INTID_71   (0x47UL)  /*!< Value 0x00000047 */
#define SCS_INTID_72   (0x48UL)  /*!< Value 0x00000048 */
#define SCS_INTID_73   (0x49UL)  /*!< Value 0x00000049 */
#define SCS_INTID_74   (0x4AUL)  /*!< Value 0x0000004A */
#define SCS_INTID_75   (0x4BUL)  /*!< Value 0x0000004B */
#define SCS_INTID_76   (0x4CUL)  /*!< Value 0x0000004C */
#define SCS_INTID_77   (0x4DUL)  /*!< Value 0x0000004D */
#define SCS_INTID_78   (0x4EUL)  /*!< Value 0x0000004E */
#define SCS_INTID_79   (0x4FUL)  /*!< Value 0x0000004F */
#define SCS_INTID_80   (0x50UL)  /*!< Value 0x00000050 */
#define SCS_INTID_81   (0x51UL)  /*!< Value 0x00000051 */
#define SCS_INTID_82   (0x52UL)  /*!< Value 0x00000052 */
#define SCS_INTID_83   (0x53UL)  /*!< Value 0x00000053 */
#define SCS_INTID_84   (0x54UL)  /*!< Value 0x00000054 */
#define SCS_INTID_85   (0x55UL)  /*!< Value 0x00000055 */
#define SCS_INTID_86   (0x56UL)  /*!< Value 0x00000056 */
#define SCS_INTID_87   (0x57UL)  /*!< Value 0x00000057 */
#define SCS_INTID_88   (0x58UL)  /*!< Value 0x00000058 */
#define SCS_INTID_89   (0x59UL)  /*!< Value 0x00000059 */
#define SCS_INTID_90   (0x5AUL)  /*!< Value 0x0000005A */
#define SCS_INTID_91   (0x5BUL)  /*!< Value 0x0000005B */
#define SCS_INTID_92   (0x5CUL)  /*!< Value 0x0000005C */
#define SCS_INTID_93   (0x5DUL)  /*!< Value 0x0000005D */
#define SCS_INTID_94   (0x5EUL)  /*!< Value 0x0000005E */
#define SCS_INTID_95   (0x5FUL)  /*!< Value 0x0000005F */
#define SCS_INTID_96   (0x60UL)  /*!< Value 0x00000060 */
#define SCS_INTID_97   (0x61UL)  /*!< Value 0x00000061 */
#define SCS_INTID_98   (0x62UL)  /*!< Value 0x00000062 */
#define SCS_INTID_99   (0x63UL)  /*!< Value 0x00000063 */
#define SCS_INTID_100  (0x64UL)  /*!< Value 0x00000064 */
#define SCS_INTID_101  (0x65UL)  /*!< Value 0x00000065 */
#define SCS_INTID_102  (0x66UL)  /*!< Value 0x00000066 */
#define SCS_INTID_103  (0x67UL)  /*!< Value 0x00000067 */
#define SCS_INTID_104  (0x68UL)  /*!< Value 0x00000068 */
#define SCS_INTID_105  (0x69UL)  /*!< Value 0x00000069 */
#define SCS_INTID_106  (0x6AUL)  /*!< Value 0x0000006A */
#define SCS_INTID_107  (0x6BUL)  /*!< Value 0x0000006B */
#define SCS_INTID_108  (0x6CUL)  /*!< Value 0x0000006C */
#define SCS_INTID_109  (0x6DUL)  /*!< Value 0x0000006D */
#define SCS_INTID_110  (0x6EUL)  /*!< Value 0x0000006E */
#define SCS_INTID_111  (0x6FUL)  /*!< Value 0x0000006F */
#define SCS_INTID_112  (0x70UL)  /*!< Value 0x00000070 */
#define SCS_INTID_113  (0x71UL)  /*!< Value 0x00000071 */
#define SCS_INTID_114  (0x72UL)  /*!< Value 0x00000072 */
#define SCS_INTID_115  (0x73UL)  /*!< Value 0x00000073 */
#define SCS_INTID_116  (0x74UL)  /*!< Value 0x00000074 */
#define SCS_INTID_117  (0x75UL)  /*!< Value 0x00000075 */
#define SCS_INTID_118  (0x76UL)  /*!< Value 0x00000076 */
#define SCS_INTID_119  (0x77UL)  /*!< Value 0x00000077 */
#define SCS_INTID_120  (0x78UL)  /*!< Value 0x00000078 */
#define SCS_INTID_121  (0x79UL)  /*!< Value 0x00000079 */
#define SCS_INTID_122  (0x7AUL)  /*!< Value 0x0000007A */
#define SCS_INTID_123  (0x7BUL)  /*!< Value 0x0000007B */
#define SCS_INTID_124  (0x7CUL)  /*!< Value 0x0000007C */
#define SCS_INTID_125  (0x7DUL)  /*!< Value 0x0000007D */
#define SCS_INTID_126  (0x7EUL)  /*!< Value 0x0000007E */
#define SCS_INTID_127  (0x7FUL)  /*!< Value 0x0000007F */
#define SCS_INTID_128  (0x80UL)  /*!< Value 0x00000080 */
#define SCS_INTID_129  (0x81UL)  /*!< Value 0x00000081 */
#define SCS_INTID_130  (0x82UL)  /*!< Value 0x00000082 */
#define SCS_INTID_131  (0x83UL)  /*!< Value 0x00000083 */
#define SCS_INTID_132  (0x84UL)  /*!< Value 0x00000084 */
#define SCS_INTID_133  (0x85UL)  /*!< Value 0x00000085 */
#define SCS_INTID_134  (0x86UL)  /*!< Value 0x00000086 */
#define SCS_INTID_135  (0x87UL)  /*!< Value 0x00000087 */
#define SCS_INTID_136  (0x88UL)  /*!< Value 0x00000088 */
#define SCS_INTID_137  (0x89UL)  /*!< Value 0x00000089 */
#define SCS_INTID_138  (0x8AUL)  /*!< Value 0x0000008A */
#define SCS_INTID_139  (0x8BUL)  /*!< Value 0x0000008B */
#define SCS_INTID_140  (0x8CUL)  /*!< Value 0x0000008C */
#define SCS_INTID_141  (0x8DUL)  /*!< Value 0x0000008D */
#define SCS_INTID_142  (0x8EUL)  /*!< Value 0x0000008E */
#define SCS_INTID_143  (0x8FUL)  /*!< Value 0x0000008F */
#define SCS_INTID_144  (0x90UL)  /*!< Value 0x00000090 */
#define SCS_INTID_145  (0x91UL)  /*!< Value 0x00000091 */
#define SCS_INTID_146  (0x92UL)  /*!< Value 0x00000092 */
#define SCS_INTID_147  (0x93UL)  /*!< Value 0x00000093 */
#define SCS_INTID_148  (0x94UL)  /*!< Value 0x00000094 */
#define SCS_INTID_149  (0x95UL)  /*!< Value 0x00000095 */
#define SCS_INTID_150  (0x96UL)  /*!< Value 0x00000096 */
#define SCS_INTID_151  (0x97UL)  /*!< Value 0x00000097 */
#define SCS_INTID_152  (0x98UL)  /*!< Value 0x00000098 */
#define SCS_INTID_153  (0x99UL)  /*!< Value 0x00000099 */
#define SCS_INTID_154  (0x9AUL)  /*!< Value 0x0000009A */
#define SCS_INTID_155  (0x9BUL)  /*!< Value 0x0000009B */
#define SCS_INTID_156  (0x9CUL)  /*!< Value 0x0000009C */
#define SCS_INTID_157  (0x9DUL)  /*!< Value 0x0000009D */
#define SCS_INTID_158  (0x9EUL)  /*!< Value 0x0000009E */
#define SCS_INTID_159  (0x9FUL)  /*!< Value 0x0000009F */
#define SCS_INTID_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define SCS_INTID_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define SCS_INTID_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define SCS_INTID_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define SCS_INTID_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define SCS_INTID_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define SCS_INTID_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define SCS_INTID_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define SCS_INTID_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define SCS_INTID_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define SCS_INTID_170  (0xAAUL)  /*!< Value 0x000000AA */
#define SCS_INTID_171  (0xABUL)  /*!< Value 0x000000AB */
#define SCS_INTID_172  (0xACUL)  /*!< Value 0x000000AC */
#define SCS_INTID_173  (0xADUL)  /*!< Value 0x000000AD */
#define SCS_INTID_174  (0xAEUL)  /*!< Value 0x000000AE */
#define SCS_INTID_175  (0xAFUL)  /*!< Value 0x000000AF */
#define SCS_INTID_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define SCS_INTID_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define SCS_INTID_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define SCS_INTID_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define SCS_INTID_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define SCS_INTID_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define SCS_INTID_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define SCS_INTID_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define SCS_INTID_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define SCS_INTID_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define SCS_INTID_186  (0xBAUL)  /*!< Value 0x000000BA */
#define SCS_INTID_187  (0xBBUL)  /*!< Value 0x000000BB */
#define SCS_INTID_188  (0xBCUL)  /*!< Value 0x000000BC */
#define SCS_INTID_189  (0xBDUL)  /*!< Value 0x000000BD */
#define SCS_INTID_190  (0xBEUL)  /*!< Value 0x000000BE */
#define SCS_INTID_191  (0xBFUL)  /*!< Value 0x000000BF */
#define SCS_INTID_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define SCS_INTID_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define SCS_INTID_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define SCS_INTID_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define SCS_INTID_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define SCS_INTID_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define SCS_INTID_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define SCS_INTID_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define SCS_INTID_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define SCS_INTID_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define SCS_INTID_202  (0xCAUL)  /*!< Value 0x000000CA */
#define SCS_INTID_203  (0xCBUL)  /*!< Value 0x000000CB */
#define SCS_INTID_204  (0xCCUL)  /*!< Value 0x000000CC */
#define SCS_INTID_205  (0xCDUL)  /*!< Value 0x000000CD */
#define SCS_INTID_206  (0xCEUL)  /*!< Value 0x000000CE */
#define SCS_INTID_207  (0xCFUL)  /*!< Value 0x000000CF */
#define SCS_INTID_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define SCS_INTID_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define SCS_INTID_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define SCS_INTID_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define SCS_INTID_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define SCS_INTID_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define SCS_INTID_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define SCS_INTID_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define SCS_INTID_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define SCS_INTID_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define SCS_INTID_218  (0xDAUL)  /*!< Value 0x000000DA */
#define SCS_INTID_219  (0xDBUL)  /*!< Value 0x000000DB */
#define SCS_INTID_220  (0xDCUL)  /*!< Value 0x000000DC */
#define SCS_INTID_221  (0xDDUL)  /*!< Value 0x000000DD */
#define SCS_INTID_222  (0xDEUL)  /*!< Value 0x000000DE */
#define SCS_INTID_223  (0xDFUL)  /*!< Value 0x000000DF */
#define SCS_INTID_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define SCS_INTID_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define SCS_INTID_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define SCS_INTID_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define SCS_INTID_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define SCS_INTID_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define SCS_INTID_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define SCS_INTID_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define SCS_INTID_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define SCS_INTID_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define SCS_INTID_234  (0xEAUL)  /*!< Value 0x000000EA */
#define SCS_INTID_235  (0xEBUL)  /*!< Value 0x000000EB */
#define SCS_INTID_236  (0xECUL)  /*!< Value 0x000000EC */
#define SCS_INTID_237  (0xEDUL)  /*!< Value 0x000000ED */
#define SCS_INTID_238  (0xEEUL)  /*!< Value 0x000000EE */
#define SCS_INTID_239  (0xEFUL)  /*!< Value 0x000000EF */
#define SCS_INTID_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define SCS_INTID_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define SCS_INTID_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define SCS_INTID_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define SCS_INTID_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define SCS_INTID_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define SCS_INTID_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define SCS_INTID_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define SCS_INTID_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define SCS_INTID_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define SCS_INTID_250  (0xFAUL)  /*!< Value 0x000000FA */
#define SCS_INTID_251  (0xFBUL)  /*!< Value 0x000000FB */
#define SCS_INTID_252  (0xFCUL)  /*!< Value 0x000000FC */
#define SCS_INTID_253  (0xFDUL)  /*!< Value 0x000000FD */
#define SCS_INTID_254  (0xFEUL)  /*!< Value 0x000000FE */
#define SCS_INTID_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< CoreSight lock access register */
#define SCS_LAR_KEY_OFFSET  (0U)
#define SCS_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define SCS_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000001 */
#define SCS_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000002 */
#define SCS_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000004 */
#define SCS_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000008 */
#define SCS_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000010 */
#define SCS_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000020 */
#define SCS_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000040 */
#define SCS_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000080 */
#define SCS_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000100 */
#define SCS_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000200 */
#define SCS_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000400 */
#define SCS_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00000800 */
#define SCS_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00001000 */
#define SCS_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00002000 */
#define SCS_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00004000 */
#define SCS_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00008000 */
#define SCS_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00010000 */
#define SCS_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00020000 */
#define SCS_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00040000 */
#define SCS_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00080000 */
#define SCS_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00100000 */
#define SCS_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00200000 */
#define SCS_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00400000 */
#define SCS_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x00800000 */
#define SCS_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x01000000 */
#define SCS_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x02000000 */
#define SCS_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x04000000 */
#define SCS_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x08000000 */
#define SCS_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x10000000 */
#define SCS_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x20000000 */
#define SCS_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x40000000 */
#define SCS_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCS, LAR, KEY))  /*!< Value 0x80000000 */

// Values of integration mode enable bit
#define SCS_KEY_LOCKCLEAR  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

/*!< CoreSight lock status register */
#define SCS_LSR_NTT_OFFSET  (2U)
#define SCS_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCS, LSR, NTT))  /*!< Mask  0x00000004 */

#define SCS_LSR_SLK_OFFSET  (1U)
#define SCS_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCS, LSR, SLK))  /*!< Mask  0x00000002 */

#define SCS_LSR_SLI_OFFSET  (0U)
#define SCS_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SCS, LSR, SLI))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define SCS_LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of software lock status bit
#define SCS_SWLOCK_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define SCS_SWLOCK_SET    (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define SCS_SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define SCS_SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Peripheral identitication 4 register */
#define SCS_PIDR4_4KCOUNT_OFFSET    (4U)
#define SCS_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define SCS_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define SCS_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define SCS_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define SCS_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define SCS_PIDR4_JEP106CON_OFFSET  (0U)
#define SCS_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define SCS_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define SCS_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define SCS_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define SCS_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of square root of the number of 4K blocks register
#define SCS_4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define SCS_4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define SCS_4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define SCS_4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define SCS_4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define SCS_4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define SCS_4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define SCS_4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define SCS_4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define SCS_4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define SCS_4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define SCS_4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define SCS_4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define SCS_4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define SCS_4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define SCS_4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define SCS_PIDR4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define SCS_PIDR5_RSVD_OFFSET  (0U)
#define SCS_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SCS_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define SCS_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define SCS_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define SCS_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define SCS_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define SCS_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define SCS_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define SCS_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define SCS_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define SCS_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define SCS_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define SCS_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define SCS_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define SCS_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define SCS_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define SCS_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define SCS_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define SCS_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define SCS_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define SCS_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define SCS_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define SCS_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define SCS_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define SCS_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define SCS_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define SCS_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define SCS_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define SCS_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define SCS_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define SCS_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define SCS_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define SCS_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define SCS_PIDR6_RSVD_OFFSET  (0U)
#define SCS_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SCS_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define SCS_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define SCS_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define SCS_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define SCS_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define SCS_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define SCS_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define SCS_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define SCS_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define SCS_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define SCS_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define SCS_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define SCS_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define SCS_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define SCS_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define SCS_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define SCS_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define SCS_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define SCS_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define SCS_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define SCS_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define SCS_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define SCS_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define SCS_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define SCS_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define SCS_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define SCS_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define SCS_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define SCS_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define SCS_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define SCS_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define SCS_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define SCS_PIDR7_RSVD_OFFSET  (0U)
#define SCS_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SCS_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define SCS_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define SCS_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define SCS_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define SCS_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define SCS_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define SCS_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define SCS_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define SCS_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define SCS_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define SCS_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define SCS_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define SCS_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define SCS_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define SCS_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define SCS_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define SCS_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define SCS_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define SCS_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define SCS_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define SCS_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define SCS_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define SCS_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define SCS_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define SCS_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define SCS_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define SCS_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define SCS_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define SCS_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define SCS_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define SCS_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define SCS_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SCS, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define SCS_PIDR0_PARTNUM_OFFSET  (0U)
#define SCS_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define SCS_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define SCS_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define SCS_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define SCS_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define SCS_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define SCS_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define SCS_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define SCS_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(SCS, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define SCS_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define SCS_PIDR1_JEP106ID_OFFSET  (4U)
#define SCS_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define SCS_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define SCS_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define SCS_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define SCS_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define SCS_PIDR1_PARTNUM_OFFSET   (0U)
#define SCS_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define SCS_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define SCS_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define SCS_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define SCS_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define SCS_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define SCS_PIDR1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define SCS_PIDR2_REVISION_OFFSET    (4U)
#define SCS_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define SCS_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define SCS_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define SCS_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define SCS_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define SCS_PIDR2_JEDEC_OFFSET       (3U)
#define SCS_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define SCS_PIDR2_JEDEC106ID_OFFSET  (0U)
#define SCS_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define SCS_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define SCS_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define SCS_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define SCS_REVISION_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC assigned value select bit
#define SCS_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define SCS_PIDR2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define SCS_PIDR3_REVAND_OFFSET  (4U)
#define SCS_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define SCS_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define SCS_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define SCS_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define SCS_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define SCS_PIDR3_CMOD_OFFSET    (0U)
#define SCS_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SCS, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define SCS_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define SCS_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define SCS_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define SCS_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(SCS, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define SCS_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define SCS_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define SCS_CIDR0_PREAMBLE_OFFSET  (0U)
#define SCS_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define SCS_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define SCS_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define SCS_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define SCS_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define SCS_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define SCS_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define SCS_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define SCS_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(SCS, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define SCS_CIDR0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define SCS_CIDR1_CLASS_OFFSET      (4U)
#define SCS_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SCS, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define SCS_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define SCS_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define SCS_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define SCS_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define SCS_CIDR1_PREAMBLE_OFFSET   (0U)
#define SCS_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(SCS, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define SCS_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define SCS_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define SCS_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define SCS_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(SCS, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define SCS_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define SCS_CLASS_ARM  (0x9UL)  /*!< Value 0x00000009 */

/*!< Component identitication 2 register */
#define SCS_CIDR2_PREAMBLE_OFFSET  (0U)
#define SCS_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define SCS_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define SCS_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define SCS_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define SCS_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define SCS_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define SCS_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define SCS_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define SCS_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(SCS, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define SCS_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define SCS_CIDR3_PREAMBLE_OFFSET  (0U)
#define SCS_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define SCS_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define SCS_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define SCS_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define SCS_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define SCS_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define SCS_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define SCS_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define SCS_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(SCS, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define SCS_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

#define SCS REGISTER_PTR(scs_regs, SCS_BASE)

/** @} */ // End of SCS group

/** @} */ // End of RegisterGroup group

#endif // SCS_REGISTERS_H
