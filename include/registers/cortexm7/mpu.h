#ifndef MPU_REGISTERS_H
#define MPU_REGISTERS_H
/**
 * @copyright
 * @file mpu.h
 * @author Andrea Gianarda
 * @date 29th of April 2021
 * @brief Memory protection unit (MPU) registers
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup MPU Memory protection unit (MPU) register
 *  @brief Memory protection unit (MPU) macros and structures
 *  @{
 */

typedef struct {
	WO uint32_t TYPE;           /*!< Type register                                  (Offset 0x0)   */
	RW uint32_t CTRL;           /*!< Control register                               (Offset 0x4)   */
	RW uint32_t RNR;            /*!< Region number register                         (Offset 0x8)   */
	RW uint32_t RBAR;           /*!< Region base address register                   (Offset 0xC)   */
	RW uint32_t RASR;           /*!< Region attribute and size register             (Offset 0x10)  */
	RW uint32_t RBAR_A1;        /*!< Alias 1 to region base address register        (Offset 0x14)  */
	RW uint32_t RASR_A1;        /*!< Alias 1 to region attribute and size register  (Offset 0x18)  */
	RW uint32_t RBAR_A2;        /*!< Alias 2 to region base address register        (Offset 0x1C)  */
	RW uint32_t RASR_A2;        /*!< Alias 2 to region attribute and size register  (Offset 0x20)  */
	RW uint32_t RBAR_A3;        /*!< Alias 3 to region base address register        (Offset 0x24)  */
	RW uint32_t RASR_A3;        /*!< Alias 3 to region attribute and size register  (Offset 0x28)  */
	   uint32_t reserved[13U];  /*!< Reserved                                       (Offset 0x2C to 0x5C) */
} mpu_regs;

/*!< Memory protection unit (MPU) registers */
/*!< Memory protecton unit (MPU) type register */
#define MPU_IREGION_VALUE_OFFSET  (16U)
#define MPU_IREGION_VALUE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Mask  0x00FF0000 */
#define MPU_IREGION_VALUE_0       (0x01UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00010000 */
#define MPU_IREGION_VALUE_1       (0x02UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00020000 */
#define MPU_IREGION_VALUE_2       (0x04UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00040000 */
#define MPU_IREGION_VALUE_3       (0x08UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00080000 */
#define MPU_IREGION_VALUE_4       (0x10UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00100000 */
#define MPU_IREGION_VALUE_5       (0x20UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00200000 */
#define MPU_IREGION_VALUE_6       (0x40UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00400000 */
#define MPU_IREGION_VALUE_7       (0x80UL << REGISTER_FIELD_OFFSET(MPU, IREGION, VALUE))  /*!< Value 0x00800000 */

#define MPU_DREGION_VALUE_OFFSET  (8U)
#define MPU_DREGION_VALUE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Mask  0x0000FF00 */
#define MPU_DREGION_VALUE_0       (0x01UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00000100 */
#define MPU_DREGION_VALUE_1       (0x02UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00000200 */
#define MPU_DREGION_VALUE_2       (0x04UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00000400 */
#define MPU_DREGION_VALUE_3       (0x08UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00000800 */
#define MPU_DREGION_VALUE_4       (0x10UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00001000 */
#define MPU_DREGION_VALUE_5       (0x20UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00002000 */
#define MPU_DREGION_VALUE_6       (0x40UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00004000 */
#define MPU_DREGION_VALUE_7       (0x80UL << REGISTER_FIELD_OFFSET(MPU, DREGION, VALUE))  /*!< Value 0x00008000 */

#define MPU_SEPARATE_VALUE_OFFSET  (0U)
#define MPU_SEPARATE_VALUE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SEPARATE, VALUE))   /*!< Mask  0x000000001 */

// Value of instruction region register
#define MPU_INSTRREGION_NOTIMPLEMENTED  (0x00UL)  /*!< Value 0x00000000 */
#define MPU_INSTRREGION_1               (0x01UL)  /*!< Value 0x00000001 */
#define MPU_INSTRREGION_2               (0x02UL)  /*!< Value 0x00000002 */
#define MPU_INSTRREGION_3               (0x03UL)  /*!< Value 0x00000003 */
#define MPU_INSTRREGION_4               (0x04UL)  /*!< Value 0x00000004 */
#define MPU_INSTRREGION_5               (0x05UL)  /*!< Value 0x00000005 */
#define MPU_INSTRREGION_6               (0x06UL)  /*!< Value 0x00000006 */
#define MPU_INSTRREGION_7               (0x07UL)  /*!< Value 0x00000007 */
#define MPU_INSTRREGION_8               (0x08UL)  /*!< Value 0x00000008 */
#define MPU_INSTRREGION_9               (0x09UL)  /*!< Value 0x00000009 */
#define MPU_INSTRREGION_10              (0x0AUL)  /*!< Value 0x0000000A */
#define MPU_INSTRREGION_11              (0x0BUL)  /*!< Value 0x0000000B */
#define MPU_INSTRREGION_12              (0x0CUL)  /*!< Value 0x0000000C */
#define MPU_INSTRREGION_13              (0x0DUL)  /*!< Value 0x0000000D */
#define MPU_INSTRREGION_14              (0x0EUL)  /*!< Value 0x0000000E */
#define MPU_INSTRREGION_15              (0x0FUL)  /*!< Value 0x0000000F */
#define MPU_INSTRREGION_16              (0x10UL)  /*!< Value 0x00000010 */
#define MPU_INSTRREGION_17              (0x11UL)  /*!< Value 0x00000011 */
#define MPU_INSTRREGION_18              (0x12UL)  /*!< Value 0x00000012 */
#define MPU_INSTRREGION_19              (0x13UL)  /*!< Value 0x00000013 */
#define MPU_INSTRREGION_20              (0x14UL)  /*!< Value 0x00000014 */
#define MPU_INSTRREGION_21              (0x15UL)  /*!< Value 0x00000015 */
#define MPU_INSTRREGION_22              (0x16UL)  /*!< Value 0x00000016 */
#define MPU_INSTRREGION_23              (0x17UL)  /*!< Value 0x00000017 */
#define MPU_INSTRREGION_24              (0x18UL)  /*!< Value 0x00000018 */
#define MPU_INSTRREGION_25              (0x19UL)  /*!< Value 0x00000019 */
#define MPU_INSTRREGION_26              (0x1AUL)  /*!< Value 0x0000001A */
#define MPU_INSTRREGION_27              (0x1BUL)  /*!< Value 0x0000001B */
#define MPU_INSTRREGION_28              (0x1CUL)  /*!< Value 0x0000001C */
#define MPU_INSTRREGION_29              (0x1DUL)  /*!< Value 0x0000001D */
#define MPU_INSTRREGION_30              (0x1EUL)  /*!< Value 0x0000001E */
#define MPU_INSTRREGION_31              (0x1FUL)  /*!< Value 0x0000001F */
#define MPU_INSTRREGION_32              (0x20UL)  /*!< Value 0x00000020 */
#define MPU_INSTRREGION_33              (0x21UL)  /*!< Value 0x00000021 */
#define MPU_INSTRREGION_34              (0x22UL)  /*!< Value 0x00000022 */
#define MPU_INSTRREGION_35              (0x23UL)  /*!< Value 0x00000023 */
#define MPU_INSTRREGION_36              (0x24UL)  /*!< Value 0x00000024 */
#define MPU_INSTRREGION_37              (0x25UL)  /*!< Value 0x00000025 */
#define MPU_INSTRREGION_38              (0x26UL)  /*!< Value 0x00000026 */
#define MPU_INSTRREGION_39              (0x27UL)  /*!< Value 0x00000027 */
#define MPU_INSTRREGION_40              (0x28UL)  /*!< Value 0x00000028 */
#define MPU_INSTRREGION_41              (0x29UL)  /*!< Value 0x00000029 */
#define MPU_INSTRREGION_42              (0x2AUL)  /*!< Value 0x0000002A */
#define MPU_INSTRREGION_43              (0x2BUL)  /*!< Value 0x0000002B */
#define MPU_INSTRREGION_44              (0x2CUL)  /*!< Value 0x0000002C */
#define MPU_INSTRREGION_45              (0x2DUL)  /*!< Value 0x0000002D */
#define MPU_INSTRREGION_46              (0x2EUL)  /*!< Value 0x0000002E */
#define MPU_INSTRREGION_47              (0x2FUL)  /*!< Value 0x0000002F */
#define MPU_INSTRREGION_48              (0x30UL)  /*!< Value 0x00000030 */
#define MPU_INSTRREGION_49              (0x31UL)  /*!< Value 0x00000031 */
#define MPU_INSTRREGION_50              (0x32UL)  /*!< Value 0x00000032 */
#define MPU_INSTRREGION_51              (0x33UL)  /*!< Value 0x00000033 */
#define MPU_INSTRREGION_52              (0x34UL)  /*!< Value 0x00000034 */
#define MPU_INSTRREGION_53              (0x35UL)  /*!< Value 0x00000035 */
#define MPU_INSTRREGION_54              (0x36UL)  /*!< Value 0x00000036 */
#define MPU_INSTRREGION_55              (0x37UL)  /*!< Value 0x00000037 */
#define MPU_INSTRREGION_56              (0x38UL)  /*!< Value 0x00000038 */
#define MPU_INSTRREGION_57              (0x39UL)  /*!< Value 0x00000039 */
#define MPU_INSTRREGION_58              (0x3AUL)  /*!< Value 0x0000003A */
#define MPU_INSTRREGION_59              (0x3BUL)  /*!< Value 0x0000003B */
#define MPU_INSTRREGION_60              (0x3CUL)  /*!< Value 0x0000003C */
#define MPU_INSTRREGION_61              (0x3DUL)  /*!< Value 0x0000003D */
#define MPU_INSTRREGION_62              (0x3EUL)  /*!< Value 0x0000003E */
#define MPU_INSTRREGION_63              (0x3FUL)  /*!< Value 0x0000003F */
#define MPU_INSTRREGION_64              (0x40UL)  /*!< Value 0x00000040 */
#define MPU_INSTRREGION_65              (0x41UL)  /*!< Value 0x00000041 */
#define MPU_INSTRREGION_66              (0x42UL)  /*!< Value 0x00000042 */
#define MPU_INSTRREGION_67              (0x43UL)  /*!< Value 0x00000043 */
#define MPU_INSTRREGION_68              (0x44UL)  /*!< Value 0x00000044 */
#define MPU_INSTRREGION_69              (0x45UL)  /*!< Value 0x00000045 */
#define MPU_INSTRREGION_70              (0x46UL)  /*!< Value 0x00000046 */
#define MPU_INSTRREGION_71              (0x47UL)  /*!< Value 0x00000047 */
#define MPU_INSTRREGION_72              (0x48UL)  /*!< Value 0x00000048 */
#define MPU_INSTRREGION_73              (0x49UL)  /*!< Value 0x00000049 */
#define MPU_INSTRREGION_74              (0x4AUL)  /*!< Value 0x0000004A */
#define MPU_INSTRREGION_75              (0x4BUL)  /*!< Value 0x0000004B */
#define MPU_INSTRREGION_76              (0x4CUL)  /*!< Value 0x0000004C */
#define MPU_INSTRREGION_77              (0x4DUL)  /*!< Value 0x0000004D */
#define MPU_INSTRREGION_78              (0x4EUL)  /*!< Value 0x0000004E */
#define MPU_INSTRREGION_79              (0x4FUL)  /*!< Value 0x0000004F */
#define MPU_INSTRREGION_80              (0x50UL)  /*!< Value 0x00000050 */
#define MPU_INSTRREGION_81              (0x51UL)  /*!< Value 0x00000051 */
#define MPU_INSTRREGION_82              (0x52UL)  /*!< Value 0x00000052 */
#define MPU_INSTRREGION_83              (0x53UL)  /*!< Value 0x00000053 */
#define MPU_INSTRREGION_84              (0x54UL)  /*!< Value 0x00000054 */
#define MPU_INSTRREGION_85              (0x55UL)  /*!< Value 0x00000055 */
#define MPU_INSTRREGION_86              (0x56UL)  /*!< Value 0x00000056 */
#define MPU_INSTRREGION_87              (0x57UL)  /*!< Value 0x00000057 */
#define MPU_INSTRREGION_88              (0x58UL)  /*!< Value 0x00000058 */
#define MPU_INSTRREGION_89              (0x59UL)  /*!< Value 0x00000059 */
#define MPU_INSTRREGION_90              (0x5AUL)  /*!< Value 0x0000005A */
#define MPU_INSTRREGION_91              (0x5BUL)  /*!< Value 0x0000005B */
#define MPU_INSTRREGION_92              (0x5CUL)  /*!< Value 0x0000005C */
#define MPU_INSTRREGION_93              (0x5DUL)  /*!< Value 0x0000005D */
#define MPU_INSTRREGION_94              (0x5EUL)  /*!< Value 0x0000005E */
#define MPU_INSTRREGION_95              (0x5FUL)  /*!< Value 0x0000005F */
#define MPU_INSTRREGION_96              (0x60UL)  /*!< Value 0x00000060 */
#define MPU_INSTRREGION_97              (0x61UL)  /*!< Value 0x00000061 */
#define MPU_INSTRREGION_98              (0x62UL)  /*!< Value 0x00000062 */
#define MPU_INSTRREGION_99              (0x63UL)  /*!< Value 0x00000063 */
#define MPU_INSTRREGION_100             (0x64UL)  /*!< Value 0x00000064 */
#define MPU_INSTRREGION_101             (0x65UL)  /*!< Value 0x00000065 */
#define MPU_INSTRREGION_102             (0x66UL)  /*!< Value 0x00000066 */
#define MPU_INSTRREGION_103             (0x67UL)  /*!< Value 0x00000067 */
#define MPU_INSTRREGION_104             (0x68UL)  /*!< Value 0x00000068 */
#define MPU_INSTRREGION_105             (0x69UL)  /*!< Value 0x00000069 */
#define MPU_INSTRREGION_106             (0x6AUL)  /*!< Value 0x0000006A */
#define MPU_INSTRREGION_107             (0x6BUL)  /*!< Value 0x0000006B */
#define MPU_INSTRREGION_108             (0x6CUL)  /*!< Value 0x0000006C */
#define MPU_INSTRREGION_109             (0x6DUL)  /*!< Value 0x0000006D */
#define MPU_INSTRREGION_110             (0x6EUL)  /*!< Value 0x0000006E */
#define MPU_INSTRREGION_111             (0x6FUL)  /*!< Value 0x0000006F */
#define MPU_INSTRREGION_112             (0x70UL)  /*!< Value 0x00000070 */
#define MPU_INSTRREGION_113             (0x71UL)  /*!< Value 0x00000071 */
#define MPU_INSTRREGION_114             (0x72UL)  /*!< Value 0x00000072 */
#define MPU_INSTRREGION_115             (0x73UL)  /*!< Value 0x00000073 */
#define MPU_INSTRREGION_116             (0x74UL)  /*!< Value 0x00000074 */
#define MPU_INSTRREGION_117             (0x75UL)  /*!< Value 0x00000075 */
#define MPU_INSTRREGION_118             (0x76UL)  /*!< Value 0x00000076 */
#define MPU_INSTRREGION_119             (0x77UL)  /*!< Value 0x00000077 */
#define MPU_INSTRREGION_120             (0x78UL)  /*!< Value 0x00000078 */
#define MPU_INSTRREGION_121             (0x79UL)  /*!< Value 0x00000079 */
#define MPU_INSTRREGION_122             (0x7AUL)  /*!< Value 0x0000007A */
#define MPU_INSTRREGION_123             (0x7BUL)  /*!< Value 0x0000007B */
#define MPU_INSTRREGION_124             (0x7CUL)  /*!< Value 0x0000007C */
#define MPU_INSTRREGION_125             (0x7DUL)  /*!< Value 0x0000007D */
#define MPU_INSTRREGION_126             (0x7EUL)  /*!< Value 0x0000007E */
#define MPU_INSTRREGION_127             (0x7FUL)  /*!< Value 0x0000007F */
#define MPU_INSTRREGION_128             (0x80UL)  /*!< Value 0x00000080 */
#define MPU_INSTRREGION_129             (0x81UL)  /*!< Value 0x00000081 */
#define MPU_INSTRREGION_130             (0x82UL)  /*!< Value 0x00000082 */
#define MPU_INSTRREGION_131             (0x83UL)  /*!< Value 0x00000083 */
#define MPU_INSTRREGION_132             (0x84UL)  /*!< Value 0x00000084 */
#define MPU_INSTRREGION_133             (0x85UL)  /*!< Value 0x00000085 */
#define MPU_INSTRREGION_134             (0x86UL)  /*!< Value 0x00000086 */
#define MPU_INSTRREGION_135             (0x87UL)  /*!< Value 0x00000087 */
#define MPU_INSTRREGION_136             (0x88UL)  /*!< Value 0x00000088 */
#define MPU_INSTRREGION_137             (0x89UL)  /*!< Value 0x00000089 */
#define MPU_INSTRREGION_138             (0x8AUL)  /*!< Value 0x0000008A */
#define MPU_INSTRREGION_139             (0x8BUL)  /*!< Value 0x0000008B */
#define MPU_INSTRREGION_140             (0x8CUL)  /*!< Value 0x0000008C */
#define MPU_INSTRREGION_141             (0x8DUL)  /*!< Value 0x0000008D */
#define MPU_INSTRREGION_142             (0x8EUL)  /*!< Value 0x0000008E */
#define MPU_INSTRREGION_143             (0x8FUL)  /*!< Value 0x0000008F */
#define MPU_INSTRREGION_144             (0x90UL)  /*!< Value 0x00000090 */
#define MPU_INSTRREGION_145             (0x91UL)  /*!< Value 0x00000091 */
#define MPU_INSTRREGION_146             (0x92UL)  /*!< Value 0x00000092 */
#define MPU_INSTRREGION_147             (0x93UL)  /*!< Value 0x00000093 */
#define MPU_INSTRREGION_148             (0x94UL)  /*!< Value 0x00000094 */
#define MPU_INSTRREGION_149             (0x95UL)  /*!< Value 0x00000095 */
#define MPU_INSTRREGION_150             (0x96UL)  /*!< Value 0x00000096 */
#define MPU_INSTRREGION_151             (0x97UL)  /*!< Value 0x00000097 */
#define MPU_INSTRREGION_152             (0x98UL)  /*!< Value 0x00000098 */
#define MPU_INSTRREGION_153             (0x99UL)  /*!< Value 0x00000099 */
#define MPU_INSTRREGION_154             (0x9AUL)  /*!< Value 0x0000009A */
#define MPU_INSTRREGION_155             (0x9BUL)  /*!< Value 0x0000009B */
#define MPU_INSTRREGION_156             (0x9CUL)  /*!< Value 0x0000009C */
#define MPU_INSTRREGION_157             (0x9DUL)  /*!< Value 0x0000009D */
#define MPU_INSTRREGION_158             (0x9EUL)  /*!< Value 0x0000009E */
#define MPU_INSTRREGION_159             (0x9FUL)  /*!< Value 0x0000009F */
#define MPU_INSTRREGION_160             (0xA0UL)  /*!< Value 0x000000A0 */
#define MPU_INSTRREGION_161             (0xA1UL)  /*!< Value 0x000000A1 */
#define MPU_INSTRREGION_162             (0xA2UL)  /*!< Value 0x000000A2 */
#define MPU_INSTRREGION_163             (0xA3UL)  /*!< Value 0x000000A3 */
#define MPU_INSTRREGION_164             (0xA4UL)  /*!< Value 0x000000A4 */
#define MPU_INSTRREGION_165             (0xA5UL)  /*!< Value 0x000000A5 */
#define MPU_INSTRREGION_166             (0xA6UL)  /*!< Value 0x000000A6 */
#define MPU_INSTRREGION_167             (0xA7UL)  /*!< Value 0x000000A7 */
#define MPU_INSTRREGION_168             (0xA8UL)  /*!< Value 0x000000A8 */
#define MPU_INSTRREGION_169             (0xA9UL)  /*!< Value 0x000000A9 */
#define MPU_INSTRREGION_170             (0xAAUL)  /*!< Value 0x000000AA */
#define MPU_INSTRREGION_171             (0xABUL)  /*!< Value 0x000000AB */
#define MPU_INSTRREGION_172             (0xACUL)  /*!< Value 0x000000AC */
#define MPU_INSTRREGION_173             (0xADUL)  /*!< Value 0x000000AD */
#define MPU_INSTRREGION_174             (0xAEUL)  /*!< Value 0x000000AE */
#define MPU_INSTRREGION_175             (0xAFUL)  /*!< Value 0x000000AF */
#define MPU_INSTRREGION_176             (0xB0UL)  /*!< Value 0x000000B0 */
#define MPU_INSTRREGION_177             (0xB1UL)  /*!< Value 0x000000B1 */
#define MPU_INSTRREGION_178             (0xB2UL)  /*!< Value 0x000000B2 */
#define MPU_INSTRREGION_179             (0xB3UL)  /*!< Value 0x000000B3 */
#define MPU_INSTRREGION_180             (0xB4UL)  /*!< Value 0x000000B4 */
#define MPU_INSTRREGION_181             (0xB5UL)  /*!< Value 0x000000B5 */
#define MPU_INSTRREGION_182             (0xB6UL)  /*!< Value 0x000000B6 */
#define MPU_INSTRREGION_183             (0xB7UL)  /*!< Value 0x000000B7 */
#define MPU_INSTRREGION_184             (0xB8UL)  /*!< Value 0x000000B8 */
#define MPU_INSTRREGION_185             (0xB9UL)  /*!< Value 0x000000B9 */
#define MPU_INSTRREGION_186             (0xBAUL)  /*!< Value 0x000000BA */
#define MPU_INSTRREGION_187             (0xBBUL)  /*!< Value 0x000000BB */
#define MPU_INSTRREGION_188             (0xBCUL)  /*!< Value 0x000000BC */
#define MPU_INSTRREGION_189             (0xBDUL)  /*!< Value 0x000000BD */
#define MPU_INSTRREGION_190             (0xBEUL)  /*!< Value 0x000000BE */
#define MPU_INSTRREGION_191             (0xBFUL)  /*!< Value 0x000000BF */
#define MPU_INSTRREGION_192             (0xC0UL)  /*!< Value 0x000000C0 */
#define MPU_INSTRREGION_193             (0xC1UL)  /*!< Value 0x000000C1 */
#define MPU_INSTRREGION_194             (0xC2UL)  /*!< Value 0x000000C2 */
#define MPU_INSTRREGION_195             (0xC3UL)  /*!< Value 0x000000C3 */
#define MPU_INSTRREGION_196             (0xC4UL)  /*!< Value 0x000000C4 */
#define MPU_INSTRREGION_197             (0xC5UL)  /*!< Value 0x000000C5 */
#define MPU_INSTRREGION_198             (0xC6UL)  /*!< Value 0x000000C6 */
#define MPU_INSTRREGION_199             (0xC7UL)  /*!< Value 0x000000C7 */
#define MPU_INSTRREGION_200             (0xC8UL)  /*!< Value 0x000000C8 */
#define MPU_INSTRREGION_201             (0xC9UL)  /*!< Value 0x000000C9 */
#define MPU_INSTRREGION_202             (0xCAUL)  /*!< Value 0x000000CA */
#define MPU_INSTRREGION_203             (0xCBUL)  /*!< Value 0x000000CB */
#define MPU_INSTRREGION_204             (0xCCUL)  /*!< Value 0x000000CC */
#define MPU_INSTRREGION_205             (0xCDUL)  /*!< Value 0x000000CD */
#define MPU_INSTRREGION_206             (0xCEUL)  /*!< Value 0x000000CE */
#define MPU_INSTRREGION_207             (0xCFUL)  /*!< Value 0x000000CF */
#define MPU_INSTRREGION_208             (0xD0UL)  /*!< Value 0x000000D0 */
#define MPU_INSTRREGION_209             (0xD1UL)  /*!< Value 0x000000D1 */
#define MPU_INSTRREGION_210             (0xD2UL)  /*!< Value 0x000000D2 */
#define MPU_INSTRREGION_211             (0xD3UL)  /*!< Value 0x000000D3 */
#define MPU_INSTRREGION_212             (0xD4UL)  /*!< Value 0x000000D4 */
#define MPU_INSTRREGION_213             (0xD5UL)  /*!< Value 0x000000D5 */
#define MPU_INSTRREGION_214             (0xD6UL)  /*!< Value 0x000000D6 */
#define MPU_INSTRREGION_215             (0xD7UL)  /*!< Value 0x000000D7 */
#define MPU_INSTRREGION_216             (0xD8UL)  /*!< Value 0x000000D8 */
#define MPU_INSTRREGION_217             (0xD9UL)  /*!< Value 0x000000D9 */
#define MPU_INSTRREGION_218             (0xDAUL)  /*!< Value 0x000000DA */
#define MPU_INSTRREGION_219             (0xDBUL)  /*!< Value 0x000000DB */
#define MPU_INSTRREGION_220             (0xDCUL)  /*!< Value 0x000000DC */
#define MPU_INSTRREGION_221             (0xDDUL)  /*!< Value 0x000000DD */
#define MPU_INSTRREGION_222             (0xDEUL)  /*!< Value 0x000000DE */
#define MPU_INSTRREGION_223             (0xDFUL)  /*!< Value 0x000000DF */
#define MPU_INSTRREGION_224             (0xE0UL)  /*!< Value 0x000000E0 */
#define MPU_INSTRREGION_225             (0xE1UL)  /*!< Value 0x000000E1 */
#define MPU_INSTRREGION_226             (0xE2UL)  /*!< Value 0x000000E2 */
#define MPU_INSTRREGION_227             (0xE3UL)  /*!< Value 0x000000E3 */
#define MPU_INSTRREGION_228             (0xE4UL)  /*!< Value 0x000000E4 */
#define MPU_INSTRREGION_229             (0xE5UL)  /*!< Value 0x000000E5 */
#define MPU_INSTRREGION_230             (0xE6UL)  /*!< Value 0x000000E6 */
#define MPU_INSTRREGION_231             (0xE7UL)  /*!< Value 0x000000E7 */
#define MPU_INSTRREGION_232             (0xE8UL)  /*!< Value 0x000000E8 */
#define MPU_INSTRREGION_233             (0xE9UL)  /*!< Value 0x000000E9 */
#define MPU_INSTRREGION_234             (0xEAUL)  /*!< Value 0x000000EA */
#define MPU_INSTRREGION_235             (0xEBUL)  /*!< Value 0x000000EB */
#define MPU_INSTRREGION_236             (0xECUL)  /*!< Value 0x000000EC */
#define MPU_INSTRREGION_237             (0xEDUL)  /*!< Value 0x000000ED */
#define MPU_INSTRREGION_238             (0xEEUL)  /*!< Value 0x000000EE */
#define MPU_INSTRREGION_239             (0xEFUL)  /*!< Value 0x000000EF */
#define MPU_INSTRREGION_240             (0xF0UL)  /*!< Value 0x000000F0 */
#define MPU_INSTRREGION_241             (0xF1UL)  /*!< Value 0x000000F1 */
#define MPU_INSTRREGION_242             (0xF2UL)  /*!< Value 0x000000F2 */
#define MPU_INSTRREGION_243             (0xF3UL)  /*!< Value 0x000000F3 */
#define MPU_INSTRREGION_244             (0xF4UL)  /*!< Value 0x000000F4 */
#define MPU_INSTRREGION_245             (0xF5UL)  /*!< Value 0x000000F5 */
#define MPU_INSTRREGION_246             (0xF6UL)  /*!< Value 0x000000F6 */
#define MPU_INSTRREGION_247             (0xF7UL)  /*!< Value 0x000000F7 */
#define MPU_INSTRREGION_248             (0xF8UL)  /*!< Value 0x000000F8 */
#define MPU_INSTRREGION_249             (0xF9UL)  /*!< Value 0x000000F9 */
#define MPU_INSTRREGION_250             (0xFAUL)  /*!< Value 0x000000FA */
#define MPU_INSTRREGION_251             (0xFBUL)  /*!< Value 0x000000FB */
#define MPU_INSTRREGION_252             (0xFCUL)  /*!< Value 0x000000FC */
#define MPU_INSTRREGION_253             (0xFDUL)  /*!< Value 0x000000FD */
#define MPU_INSTRREGION_254             (0xFEUL)  /*!< Value 0x000000FE */
#define MPU_INSTRREGION_255             (0xFFUL)  /*!< Value 0x000000FF */

// Value of the number of regions supported by the memory protection unit (MPU)
#define MPU_SUPPORTEDREGION_NOTIMPLEMENTED  (0x00UL)  /*!< Value 0x00000000 */
#define MPU_SUPPORTEDREGION_1               (0x01UL)  /*!< Value 0x00000001 */
#define MPU_SUPPORTEDREGION_2               (0x02UL)  /*!< Value 0x00000002 */
#define MPU_SUPPORTEDREGION_3               (0x03UL)  /*!< Value 0x00000003 */
#define MPU_SUPPORTEDREGION_4               (0x04UL)  /*!< Value 0x00000004 */
#define MPU_SUPPORTEDREGION_5               (0x05UL)  /*!< Value 0x00000005 */
#define MPU_SUPPORTEDREGION_6               (0x06UL)  /*!< Value 0x00000006 */
#define MPU_SUPPORTEDREGION_7               (0x07UL)  /*!< Value 0x00000007 */
#define MPU_SUPPORTEDREGION_8               (0x08UL)  /*!< Value 0x00000008 */
#define MPU_SUPPORTEDREGION_9               (0x09UL)  /*!< Value 0x00000009 */
#define MPU_SUPPORTEDREGION_10              (0x0AUL)  /*!< Value 0x0000000A */
#define MPU_SUPPORTEDREGION_11              (0x0BUL)  /*!< Value 0x0000000B */
#define MPU_SUPPORTEDREGION_12              (0x0CUL)  /*!< Value 0x0000000C */
#define MPU_SUPPORTEDREGION_13              (0x0DUL)  /*!< Value 0x0000000D */
#define MPU_SUPPORTEDREGION_14              (0x0EUL)  /*!< Value 0x0000000E */
#define MPU_SUPPORTEDREGION_15              (0x0FUL)  /*!< Value 0x0000000F */
#define MPU_SUPPORTEDREGION_16              (0x10UL)  /*!< Value 0x00000010 */
#define MPU_SUPPORTEDREGION_17              (0x11UL)  /*!< Value 0x00000011 */
#define MPU_SUPPORTEDREGION_18              (0x12UL)  /*!< Value 0x00000012 */
#define MPU_SUPPORTEDREGION_19              (0x13UL)  /*!< Value 0x00000013 */
#define MPU_SUPPORTEDREGION_20              (0x14UL)  /*!< Value 0x00000014 */
#define MPU_SUPPORTEDREGION_21              (0x15UL)  /*!< Value 0x00000015 */
#define MPU_SUPPORTEDREGION_22              (0x16UL)  /*!< Value 0x00000016 */
#define MPU_SUPPORTEDREGION_23              (0x17UL)  /*!< Value 0x00000017 */
#define MPU_SUPPORTEDREGION_24              (0x18UL)  /*!< Value 0x00000018 */
#define MPU_SUPPORTEDREGION_25              (0x19UL)  /*!< Value 0x00000019 */
#define MPU_SUPPORTEDREGION_26              (0x1AUL)  /*!< Value 0x0000001A */
#define MPU_SUPPORTEDREGION_27              (0x1BUL)  /*!< Value 0x0000001B */
#define MPU_SUPPORTEDREGION_28              (0x1CUL)  /*!< Value 0x0000001C */
#define MPU_SUPPORTEDREGION_29              (0x1DUL)  /*!< Value 0x0000001D */
#define MPU_SUPPORTEDREGION_30              (0x1EUL)  /*!< Value 0x0000001E */
#define MPU_SUPPORTEDREGION_31              (0x1FUL)  /*!< Value 0x0000001F */
#define MPU_SUPPORTEDREGION_32              (0x20UL)  /*!< Value 0x00000020 */
#define MPU_SUPPORTEDREGION_33              (0x21UL)  /*!< Value 0x00000021 */
#define MPU_SUPPORTEDREGION_34              (0x22UL)  /*!< Value 0x00000022 */
#define MPU_SUPPORTEDREGION_35              (0x23UL)  /*!< Value 0x00000023 */
#define MPU_SUPPORTEDREGION_36              (0x24UL)  /*!< Value 0x00000024 */
#define MPU_SUPPORTEDREGION_37              (0x25UL)  /*!< Value 0x00000025 */
#define MPU_SUPPORTEDREGION_38              (0x26UL)  /*!< Value 0x00000026 */
#define MPU_SUPPORTEDREGION_39              (0x27UL)  /*!< Value 0x00000027 */
#define MPU_SUPPORTEDREGION_40              (0x28UL)  /*!< Value 0x00000028 */
#define MPU_SUPPORTEDREGION_41              (0x29UL)  /*!< Value 0x00000029 */
#define MPU_SUPPORTEDREGION_42              (0x2AUL)  /*!< Value 0x0000002A */
#define MPU_SUPPORTEDREGION_43              (0x2BUL)  /*!< Value 0x0000002B */
#define MPU_SUPPORTEDREGION_44              (0x2CUL)  /*!< Value 0x0000002C */
#define MPU_SUPPORTEDREGION_45              (0x2DUL)  /*!< Value 0x0000002D */
#define MPU_SUPPORTEDREGION_46              (0x2EUL)  /*!< Value 0x0000002E */
#define MPU_SUPPORTEDREGION_47              (0x2FUL)  /*!< Value 0x0000002F */
#define MPU_SUPPORTEDREGION_48              (0x30UL)  /*!< Value 0x00000030 */
#define MPU_SUPPORTEDREGION_49              (0x31UL)  /*!< Value 0x00000031 */
#define MPU_SUPPORTEDREGION_50              (0x32UL)  /*!< Value 0x00000032 */
#define MPU_SUPPORTEDREGION_51              (0x33UL)  /*!< Value 0x00000033 */
#define MPU_SUPPORTEDREGION_52              (0x34UL)  /*!< Value 0x00000034 */
#define MPU_SUPPORTEDREGION_53              (0x35UL)  /*!< Value 0x00000035 */
#define MPU_SUPPORTEDREGION_54              (0x36UL)  /*!< Value 0x00000036 */
#define MPU_SUPPORTEDREGION_55              (0x37UL)  /*!< Value 0x00000037 */
#define MPU_SUPPORTEDREGION_56              (0x38UL)  /*!< Value 0x00000038 */
#define MPU_SUPPORTEDREGION_57              (0x39UL)  /*!< Value 0x00000039 */
#define MPU_SUPPORTEDREGION_58              (0x3AUL)  /*!< Value 0x0000003A */
#define MPU_SUPPORTEDREGION_59              (0x3BUL)  /*!< Value 0x0000003B */
#define MPU_SUPPORTEDREGION_60              (0x3CUL)  /*!< Value 0x0000003C */
#define MPU_SUPPORTEDREGION_61              (0x3DUL)  /*!< Value 0x0000003D */
#define MPU_SUPPORTEDREGION_62              (0x3EUL)  /*!< Value 0x0000003E */
#define MPU_SUPPORTEDREGION_63              (0x3FUL)  /*!< Value 0x0000003F */
#define MPU_SUPPORTEDREGION_64              (0x40UL)  /*!< Value 0x00000040 */
#define MPU_SUPPORTEDREGION_65              (0x41UL)  /*!< Value 0x00000041 */
#define MPU_SUPPORTEDREGION_66              (0x42UL)  /*!< Value 0x00000042 */
#define MPU_SUPPORTEDREGION_67              (0x43UL)  /*!< Value 0x00000043 */
#define MPU_SUPPORTEDREGION_68              (0x44UL)  /*!< Value 0x00000044 */
#define MPU_SUPPORTEDREGION_69              (0x45UL)  /*!< Value 0x00000045 */
#define MPU_SUPPORTEDREGION_70              (0x46UL)  /*!< Value 0x00000046 */
#define MPU_SUPPORTEDREGION_71              (0x47UL)  /*!< Value 0x00000047 */
#define MPU_SUPPORTEDREGION_72              (0x48UL)  /*!< Value 0x00000048 */
#define MPU_SUPPORTEDREGION_73              (0x49UL)  /*!< Value 0x00000049 */
#define MPU_SUPPORTEDREGION_74              (0x4AUL)  /*!< Value 0x0000004A */
#define MPU_SUPPORTEDREGION_75              (0x4BUL)  /*!< Value 0x0000004B */
#define MPU_SUPPORTEDREGION_76              (0x4CUL)  /*!< Value 0x0000004C */
#define MPU_SUPPORTEDREGION_77              (0x4DUL)  /*!< Value 0x0000004D */
#define MPU_SUPPORTEDREGION_78              (0x4EUL)  /*!< Value 0x0000004E */
#define MPU_SUPPORTEDREGION_79              (0x4FUL)  /*!< Value 0x0000004F */
#define MPU_SUPPORTEDREGION_80              (0x50UL)  /*!< Value 0x00000050 */
#define MPU_SUPPORTEDREGION_81              (0x51UL)  /*!< Value 0x00000051 */
#define MPU_SUPPORTEDREGION_82              (0x52UL)  /*!< Value 0x00000052 */
#define MPU_SUPPORTEDREGION_83              (0x53UL)  /*!< Value 0x00000053 */
#define MPU_SUPPORTEDREGION_84              (0x54UL)  /*!< Value 0x00000054 */
#define MPU_SUPPORTEDREGION_85              (0x55UL)  /*!< Value 0x00000055 */
#define MPU_SUPPORTEDREGION_86              (0x56UL)  /*!< Value 0x00000056 */
#define MPU_SUPPORTEDREGION_87              (0x57UL)  /*!< Value 0x00000057 */
#define MPU_SUPPORTEDREGION_88              (0x58UL)  /*!< Value 0x00000058 */
#define MPU_SUPPORTEDREGION_89              (0x59UL)  /*!< Value 0x00000059 */
#define MPU_SUPPORTEDREGION_90              (0x5AUL)  /*!< Value 0x0000005A */
#define MPU_SUPPORTEDREGION_91              (0x5BUL)  /*!< Value 0x0000005B */
#define MPU_SUPPORTEDREGION_92              (0x5CUL)  /*!< Value 0x0000005C */
#define MPU_SUPPORTEDREGION_93              (0x5DUL)  /*!< Value 0x0000005D */
#define MPU_SUPPORTEDREGION_94              (0x5EUL)  /*!< Value 0x0000005E */
#define MPU_SUPPORTEDREGION_95              (0x5FUL)  /*!< Value 0x0000005F */
#define MPU_SUPPORTEDREGION_96              (0x60UL)  /*!< Value 0x00000060 */
#define MPU_SUPPORTEDREGION_97              (0x61UL)  /*!< Value 0x00000061 */
#define MPU_SUPPORTEDREGION_98              (0x62UL)  /*!< Value 0x00000062 */
#define MPU_SUPPORTEDREGION_99              (0x63UL)  /*!< Value 0x00000063 */
#define MPU_SUPPORTEDREGION_100             (0x64UL)  /*!< Value 0x00000064 */
#define MPU_SUPPORTEDREGION_101             (0x65UL)  /*!< Value 0x00000065 */
#define MPU_SUPPORTEDREGION_102             (0x66UL)  /*!< Value 0x00000066 */
#define MPU_SUPPORTEDREGION_103             (0x67UL)  /*!< Value 0x00000067 */
#define MPU_SUPPORTEDREGION_104             (0x68UL)  /*!< Value 0x00000068 */
#define MPU_SUPPORTEDREGION_105             (0x69UL)  /*!< Value 0x00000069 */
#define MPU_SUPPORTEDREGION_106             (0x6AUL)  /*!< Value 0x0000006A */
#define MPU_SUPPORTEDREGION_107             (0x6BUL)  /*!< Value 0x0000006B */
#define MPU_SUPPORTEDREGION_108             (0x6CUL)  /*!< Value 0x0000006C */
#define MPU_SUPPORTEDREGION_109             (0x6DUL)  /*!< Value 0x0000006D */
#define MPU_SUPPORTEDREGION_110             (0x6EUL)  /*!< Value 0x0000006E */
#define MPU_SUPPORTEDREGION_111             (0x6FUL)  /*!< Value 0x0000006F */
#define MPU_SUPPORTEDREGION_112             (0x70UL)  /*!< Value 0x00000070 */
#define MPU_SUPPORTEDREGION_113             (0x71UL)  /*!< Value 0x00000071 */
#define MPU_SUPPORTEDREGION_114             (0x72UL)  /*!< Value 0x00000072 */
#define MPU_SUPPORTEDREGION_115             (0x73UL)  /*!< Value 0x00000073 */
#define MPU_SUPPORTEDREGION_116             (0x74UL)  /*!< Value 0x00000074 */
#define MPU_SUPPORTEDREGION_117             (0x75UL)  /*!< Value 0x00000075 */
#define MPU_SUPPORTEDREGION_118             (0x76UL)  /*!< Value 0x00000076 */
#define MPU_SUPPORTEDREGION_119             (0x77UL)  /*!< Value 0x00000077 */
#define MPU_SUPPORTEDREGION_120             (0x78UL)  /*!< Value 0x00000078 */
#define MPU_SUPPORTEDREGION_121             (0x79UL)  /*!< Value 0x00000079 */
#define MPU_SUPPORTEDREGION_122             (0x7AUL)  /*!< Value 0x0000007A */
#define MPU_SUPPORTEDREGION_123             (0x7BUL)  /*!< Value 0x0000007B */
#define MPU_SUPPORTEDREGION_124             (0x7CUL)  /*!< Value 0x0000007C */
#define MPU_SUPPORTEDREGION_125             (0x7DUL)  /*!< Value 0x0000007D */
#define MPU_SUPPORTEDREGION_126             (0x7EUL)  /*!< Value 0x0000007E */
#define MPU_SUPPORTEDREGION_127             (0x7FUL)  /*!< Value 0x0000007F */
#define MPU_SUPPORTEDREGION_128             (0x80UL)  /*!< Value 0x00000080 */
#define MPU_SUPPORTEDREGION_129             (0x81UL)  /*!< Value 0x00000081 */
#define MPU_SUPPORTEDREGION_130             (0x82UL)  /*!< Value 0x00000082 */
#define MPU_SUPPORTEDREGION_131             (0x83UL)  /*!< Value 0x00000083 */
#define MPU_SUPPORTEDREGION_132             (0x84UL)  /*!< Value 0x00000084 */
#define MPU_SUPPORTEDREGION_133             (0x85UL)  /*!< Value 0x00000085 */
#define MPU_SUPPORTEDREGION_134             (0x86UL)  /*!< Value 0x00000086 */
#define MPU_SUPPORTEDREGION_135             (0x87UL)  /*!< Value 0x00000087 */
#define MPU_SUPPORTEDREGION_136             (0x88UL)  /*!< Value 0x00000088 */
#define MPU_SUPPORTEDREGION_137             (0x89UL)  /*!< Value 0x00000089 */
#define MPU_SUPPORTEDREGION_138             (0x8AUL)  /*!< Value 0x0000008A */
#define MPU_SUPPORTEDREGION_139             (0x8BUL)  /*!< Value 0x0000008B */
#define MPU_SUPPORTEDREGION_140             (0x8CUL)  /*!< Value 0x0000008C */
#define MPU_SUPPORTEDREGION_141             (0x8DUL)  /*!< Value 0x0000008D */
#define MPU_SUPPORTEDREGION_142             (0x8EUL)  /*!< Value 0x0000008E */
#define MPU_SUPPORTEDREGION_143             (0x8FUL)  /*!< Value 0x0000008F */
#define MPU_SUPPORTEDREGION_144             (0x90UL)  /*!< Value 0x00000090 */
#define MPU_SUPPORTEDREGION_145             (0x91UL)  /*!< Value 0x00000091 */
#define MPU_SUPPORTEDREGION_146             (0x92UL)  /*!< Value 0x00000092 */
#define MPU_SUPPORTEDREGION_147             (0x93UL)  /*!< Value 0x00000093 */
#define MPU_SUPPORTEDREGION_148             (0x94UL)  /*!< Value 0x00000094 */
#define MPU_SUPPORTEDREGION_149             (0x95UL)  /*!< Value 0x00000095 */
#define MPU_SUPPORTEDREGION_150             (0x96UL)  /*!< Value 0x00000096 */
#define MPU_SUPPORTEDREGION_151             (0x97UL)  /*!< Value 0x00000097 */
#define MPU_SUPPORTEDREGION_152             (0x98UL)  /*!< Value 0x00000098 */
#define MPU_SUPPORTEDREGION_153             (0x99UL)  /*!< Value 0x00000099 */
#define MPU_SUPPORTEDREGION_154             (0x9AUL)  /*!< Value 0x0000009A */
#define MPU_SUPPORTEDREGION_155             (0x9BUL)  /*!< Value 0x0000009B */
#define MPU_SUPPORTEDREGION_156             (0x9CUL)  /*!< Value 0x0000009C */
#define MPU_SUPPORTEDREGION_157             (0x9DUL)  /*!< Value 0x0000009D */
#define MPU_SUPPORTEDREGION_158             (0x9EUL)  /*!< Value 0x0000009E */
#define MPU_SUPPORTEDREGION_159             (0x9FUL)  /*!< Value 0x0000009F */
#define MPU_SUPPORTEDREGION_160             (0xA0UL)  /*!< Value 0x000000A0 */
#define MPU_SUPPORTEDREGION_161             (0xA1UL)  /*!< Value 0x000000A1 */
#define MPU_SUPPORTEDREGION_162             (0xA2UL)  /*!< Value 0x000000A2 */
#define MPU_SUPPORTEDREGION_163             (0xA3UL)  /*!< Value 0x000000A3 */
#define MPU_SUPPORTEDREGION_164             (0xA4UL)  /*!< Value 0x000000A4 */
#define MPU_SUPPORTEDREGION_165             (0xA5UL)  /*!< Value 0x000000A5 */
#define MPU_SUPPORTEDREGION_166             (0xA6UL)  /*!< Value 0x000000A6 */
#define MPU_SUPPORTEDREGION_167             (0xA7UL)  /*!< Value 0x000000A7 */
#define MPU_SUPPORTEDREGION_168             (0xA8UL)  /*!< Value 0x000000A8 */
#define MPU_SUPPORTEDREGION_169             (0xA9UL)  /*!< Value 0x000000A9 */
#define MPU_SUPPORTEDREGION_170             (0xAAUL)  /*!< Value 0x000000AA */
#define MPU_SUPPORTEDREGION_171             (0xABUL)  /*!< Value 0x000000AB */
#define MPU_SUPPORTEDREGION_172             (0xACUL)  /*!< Value 0x000000AC */
#define MPU_SUPPORTEDREGION_173             (0xADUL)  /*!< Value 0x000000AD */
#define MPU_SUPPORTEDREGION_174             (0xAEUL)  /*!< Value 0x000000AE */
#define MPU_SUPPORTEDREGION_175             (0xAFUL)  /*!< Value 0x000000AF */
#define MPU_SUPPORTEDREGION_176             (0xB0UL)  /*!< Value 0x000000B0 */
#define MPU_SUPPORTEDREGION_177             (0xB1UL)  /*!< Value 0x000000B1 */
#define MPU_SUPPORTEDREGION_178             (0xB2UL)  /*!< Value 0x000000B2 */
#define MPU_SUPPORTEDREGION_179             (0xB3UL)  /*!< Value 0x000000B3 */
#define MPU_SUPPORTEDREGION_180             (0xB4UL)  /*!< Value 0x000000B4 */
#define MPU_SUPPORTEDREGION_181             (0xB5UL)  /*!< Value 0x000000B5 */
#define MPU_SUPPORTEDREGION_182             (0xB6UL)  /*!< Value 0x000000B6 */
#define MPU_SUPPORTEDREGION_183             (0xB7UL)  /*!< Value 0x000000B7 */
#define MPU_SUPPORTEDREGION_184             (0xB8UL)  /*!< Value 0x000000B8 */
#define MPU_SUPPORTEDREGION_185             (0xB9UL)  /*!< Value 0x000000B9 */
#define MPU_SUPPORTEDREGION_186             (0xBAUL)  /*!< Value 0x000000BA */
#define MPU_SUPPORTEDREGION_187             (0xBBUL)  /*!< Value 0x000000BB */
#define MPU_SUPPORTEDREGION_188             (0xBCUL)  /*!< Value 0x000000BC */
#define MPU_SUPPORTEDREGION_189             (0xBDUL)  /*!< Value 0x000000BD */
#define MPU_SUPPORTEDREGION_190             (0xBEUL)  /*!< Value 0x000000BE */
#define MPU_SUPPORTEDREGION_191             (0xBFUL)  /*!< Value 0x000000BF */
#define MPU_SUPPORTEDREGION_192             (0xC0UL)  /*!< Value 0x000000C0 */
#define MPU_SUPPORTEDREGION_193             (0xC1UL)  /*!< Value 0x000000C1 */
#define MPU_SUPPORTEDREGION_194             (0xC2UL)  /*!< Value 0x000000C2 */
#define MPU_SUPPORTEDREGION_195             (0xC3UL)  /*!< Value 0x000000C3 */
#define MPU_SUPPORTEDREGION_196             (0xC4UL)  /*!< Value 0x000000C4 */
#define MPU_SUPPORTEDREGION_197             (0xC5UL)  /*!< Value 0x000000C5 */
#define MPU_SUPPORTEDREGION_198             (0xC6UL)  /*!< Value 0x000000C6 */
#define MPU_SUPPORTEDREGION_199             (0xC7UL)  /*!< Value 0x000000C7 */
#define MPU_SUPPORTEDREGION_200             (0xC8UL)  /*!< Value 0x000000C8 */
#define MPU_SUPPORTEDREGION_201             (0xC9UL)  /*!< Value 0x000000C9 */
#define MPU_SUPPORTEDREGION_202             (0xCAUL)  /*!< Value 0x000000CA */
#define MPU_SUPPORTEDREGION_203             (0xCBUL)  /*!< Value 0x000000CB */
#define MPU_SUPPORTEDREGION_204             (0xCCUL)  /*!< Value 0x000000CC */
#define MPU_SUPPORTEDREGION_205             (0xCDUL)  /*!< Value 0x000000CD */
#define MPU_SUPPORTEDREGION_206             (0xCEUL)  /*!< Value 0x000000CE */
#define MPU_SUPPORTEDREGION_207             (0xCFUL)  /*!< Value 0x000000CF */
#define MPU_SUPPORTEDREGION_208             (0xD0UL)  /*!< Value 0x000000D0 */
#define MPU_SUPPORTEDREGION_209             (0xD1UL)  /*!< Value 0x000000D1 */
#define MPU_SUPPORTEDREGION_210             (0xD2UL)  /*!< Value 0x000000D2 */
#define MPU_SUPPORTEDREGION_211             (0xD3UL)  /*!< Value 0x000000D3 */
#define MPU_SUPPORTEDREGION_212             (0xD4UL)  /*!< Value 0x000000D4 */
#define MPU_SUPPORTEDREGION_213             (0xD5UL)  /*!< Value 0x000000D5 */
#define MPU_SUPPORTEDREGION_214             (0xD6UL)  /*!< Value 0x000000D6 */
#define MPU_SUPPORTEDREGION_215             (0xD7UL)  /*!< Value 0x000000D7 */
#define MPU_SUPPORTEDREGION_216             (0xD8UL)  /*!< Value 0x000000D8 */
#define MPU_SUPPORTEDREGION_217             (0xD9UL)  /*!< Value 0x000000D9 */
#define MPU_SUPPORTEDREGION_218             (0xDAUL)  /*!< Value 0x000000DA */
#define MPU_SUPPORTEDREGION_219             (0xDBUL)  /*!< Value 0x000000DB */
#define MPU_SUPPORTEDREGION_220             (0xDCUL)  /*!< Value 0x000000DC */
#define MPU_SUPPORTEDREGION_221             (0xDDUL)  /*!< Value 0x000000DD */
#define MPU_SUPPORTEDREGION_222             (0xDEUL)  /*!< Value 0x000000DE */
#define MPU_SUPPORTEDREGION_223             (0xDFUL)  /*!< Value 0x000000DF */
#define MPU_SUPPORTEDREGION_224             (0xE0UL)  /*!< Value 0x000000E0 */
#define MPU_SUPPORTEDREGION_225             (0xE1UL)  /*!< Value 0x000000E1 */
#define MPU_SUPPORTEDREGION_226             (0xE2UL)  /*!< Value 0x000000E2 */
#define MPU_SUPPORTEDREGION_227             (0xE3UL)  /*!< Value 0x000000E3 */
#define MPU_SUPPORTEDREGION_228             (0xE4UL)  /*!< Value 0x000000E4 */
#define MPU_SUPPORTEDREGION_229             (0xE5UL)  /*!< Value 0x000000E5 */
#define MPU_SUPPORTEDREGION_230             (0xE6UL)  /*!< Value 0x000000E6 */
#define MPU_SUPPORTEDREGION_231             (0xE7UL)  /*!< Value 0x000000E7 */
#define MPU_SUPPORTEDREGION_232             (0xE8UL)  /*!< Value 0x000000E8 */
#define MPU_SUPPORTEDREGION_233             (0xE9UL)  /*!< Value 0x000000E9 */
#define MPU_SUPPORTEDREGION_234             (0xEAUL)  /*!< Value 0x000000EA */
#define MPU_SUPPORTEDREGION_235             (0xEBUL)  /*!< Value 0x000000EB */
#define MPU_SUPPORTEDREGION_236             (0xECUL)  /*!< Value 0x000000EC */
#define MPU_SUPPORTEDREGION_237             (0xEDUL)  /*!< Value 0x000000ED */
#define MPU_SUPPORTEDREGION_238             (0xEEUL)  /*!< Value 0x000000EE */
#define MPU_SUPPORTEDREGION_239             (0xEFUL)  /*!< Value 0x000000EF */
#define MPU_SUPPORTEDREGION_240             (0xF0UL)  /*!< Value 0x000000F0 */
#define MPU_SUPPORTEDREGION_241             (0xF1UL)  /*!< Value 0x000000F1 */
#define MPU_SUPPORTEDREGION_242             (0xF2UL)  /*!< Value 0x000000F2 */
#define MPU_SUPPORTEDREGION_243             (0xF3UL)  /*!< Value 0x000000F3 */
#define MPU_SUPPORTEDREGION_244             (0xF4UL)  /*!< Value 0x000000F4 */
#define MPU_SUPPORTEDREGION_245             (0xF5UL)  /*!< Value 0x000000F5 */
#define MPU_SUPPORTEDREGION_246             (0xF6UL)  /*!< Value 0x000000F6 */
#define MPU_SUPPORTEDREGION_247             (0xF7UL)  /*!< Value 0x000000F7 */
#define MPU_SUPPORTEDREGION_248             (0xF8UL)  /*!< Value 0x000000F8 */
#define MPU_SUPPORTEDREGION_249             (0xF9UL)  /*!< Value 0x000000F9 */
#define MPU_SUPPORTEDREGION_250             (0xFAUL)  /*!< Value 0x000000FA */
#define MPU_SUPPORTEDREGION_251             (0xFBUL)  /*!< Value 0x000000FB */
#define MPU_SUPPORTEDREGION_252             (0xFCUL)  /*!< Value 0x000000FC */
#define MPU_SUPPORTEDREGION_253             (0xFDUL)  /*!< Value 0x000000FD */
#define MPU_SUPPORTEDREGION_254             (0xFEUL)  /*!< Value 0x000000FE */
#define MPU_SUPPORTEDREGION_255             (0xFFUL)  /*!< Value 0x000000FF */

// Values of enable bits
#define MPU_INSTRATAADDRMAP_UNIFIED  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_INSTRATAADDRMAP_SEPARATED  (0x1UL)  /*!< Value 0x00000001 */

#define MPU_OFFSET 0xD90UL
#define MPU_BASE OFFSET_ADDRESS(SCS_BASE, MPU_OFFSET)
#define MPU REGISTER_PTR(mpu_regs, MPU_BASE)

/** @} */ // End of MPU group

/** @} */ // End of RegisterGroup group

#endif // MPU_REGISTERS_H
