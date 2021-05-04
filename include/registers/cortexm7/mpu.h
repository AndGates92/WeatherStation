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
/*!< Type register */
#define MPU_TYPE_IREGION_OFFSET   (16U)
#define MPU_TYPE_IREGION_MASK     (0xFFUL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Mask  0x00FF0000 */
#define MPU_TYPE_IREGION_0        (0x01UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00010000 */
#define MPU_TYPE_IREGION_1        (0x02UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00020000 */
#define MPU_TYPE_IREGION_2        (0x04UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00040000 */
#define MPU_TYPE_IREGION_3        (0x08UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00080000 */
#define MPU_TYPE_IREGION_4        (0x10UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00100000 */
#define MPU_TYPE_IREGION_5        (0x20UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00200000 */
#define MPU_TYPE_IREGION_6        (0x40UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00400000 */
#define MPU_TYPE_IREGION_7        (0x80UL << REGISTER_FIELD_OFFSET(MPU, TYPE, IREGION))  /*!< Value 0x00800000 */

#define MPU_TYPE_DREGION_OFFSET   (8U)
#define MPU_TYPE_DREGION_MASK     (0xFFUL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Mask  0x0000FF00 */
#define MPU_TYPE_DREGION_0        (0x01UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00000100 */
#define MPU_TYPE_DREGION_1        (0x02UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00000200 */
#define MPU_TYPE_DREGION_2        (0x04UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00000400 */
#define MPU_TYPE_DREGION_3        (0x08UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00000800 */
#define MPU_TYPE_DREGION_4        (0x10UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00001000 */
#define MPU_TYPE_DREGION_5        (0x20UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00002000 */
#define MPU_TYPE_DREGION_6        (0x40UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00004000 */
#define MPU_TYPE_DREGION_7        (0x80UL << REGISTER_FIELD_OFFSET(MPU, TYPE, DREGION))  /*!< Value 0x00008000 */

#define MPU_TYPE_SEPARATE_OFFSET  (0U)
#define MPU_TYPE_SEPARATE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, TYPE, SEPARATE))  /*!< Mask  0x000000001 */

// Value of instruction region register
#define MPU_INSTRREGION_UNIFIEDMPU  (0x00UL)  /*!< Value 0x00000000 */
#define MPU_INSTRREGION_1           (0x01UL)  /*!< Value 0x00000001 */
#define MPU_INSTRREGION_2           (0x02UL)  /*!< Value 0x00000002 */
#define MPU_INSTRREGION_3           (0x03UL)  /*!< Value 0x00000003 */
#define MPU_INSTRREGION_4           (0x04UL)  /*!< Value 0x00000004 */
#define MPU_INSTRREGION_5           (0x05UL)  /*!< Value 0x00000005 */
#define MPU_INSTRREGION_6           (0x06UL)  /*!< Value 0x00000006 */
#define MPU_INSTRREGION_7           (0x07UL)  /*!< Value 0x00000007 */
#define MPU_INSTRREGION_8           (0x08UL)  /*!< Value 0x00000008 */
#define MPU_INSTRREGION_9           (0x09UL)  /*!< Value 0x00000009 */
#define MPU_INSTRREGION_10          (0x0AUL)  /*!< Value 0x0000000A */
#define MPU_INSTRREGION_11          (0x0BUL)  /*!< Value 0x0000000B */
#define MPU_INSTRREGION_12          (0x0CUL)  /*!< Value 0x0000000C */
#define MPU_INSTRREGION_13          (0x0DUL)  /*!< Value 0x0000000D */
#define MPU_INSTRREGION_14          (0x0EUL)  /*!< Value 0x0000000E */
#define MPU_INSTRREGION_15          (0x0FUL)  /*!< Value 0x0000000F */
#define MPU_INSTRREGION_16          (0x10UL)  /*!< Value 0x00000010 */
#define MPU_INSTRREGION_17          (0x11UL)  /*!< Value 0x00000011 */
#define MPU_INSTRREGION_18          (0x12UL)  /*!< Value 0x00000012 */
#define MPU_INSTRREGION_19          (0x13UL)  /*!< Value 0x00000013 */
#define MPU_INSTRREGION_20          (0x14UL)  /*!< Value 0x00000014 */
#define MPU_INSTRREGION_21          (0x15UL)  /*!< Value 0x00000015 */
#define MPU_INSTRREGION_22          (0x16UL)  /*!< Value 0x00000016 */
#define MPU_INSTRREGION_23          (0x17UL)  /*!< Value 0x00000017 */
#define MPU_INSTRREGION_24          (0x18UL)  /*!< Value 0x00000018 */
#define MPU_INSTRREGION_25          (0x19UL)  /*!< Value 0x00000019 */
#define MPU_INSTRREGION_26          (0x1AUL)  /*!< Value 0x0000001A */
#define MPU_INSTRREGION_27          (0x1BUL)  /*!< Value 0x0000001B */
#define MPU_INSTRREGION_28          (0x1CUL)  /*!< Value 0x0000001C */
#define MPU_INSTRREGION_29          (0x1DUL)  /*!< Value 0x0000001D */
#define MPU_INSTRREGION_30          (0x1EUL)  /*!< Value 0x0000001E */
#define MPU_INSTRREGION_31          (0x1FUL)  /*!< Value 0x0000001F */
#define MPU_INSTRREGION_32          (0x20UL)  /*!< Value 0x00000020 */
#define MPU_INSTRREGION_33          (0x21UL)  /*!< Value 0x00000021 */
#define MPU_INSTRREGION_34          (0x22UL)  /*!< Value 0x00000022 */
#define MPU_INSTRREGION_35          (0x23UL)  /*!< Value 0x00000023 */
#define MPU_INSTRREGION_36          (0x24UL)  /*!< Value 0x00000024 */
#define MPU_INSTRREGION_37          (0x25UL)  /*!< Value 0x00000025 */
#define MPU_INSTRREGION_38          (0x26UL)  /*!< Value 0x00000026 */
#define MPU_INSTRREGION_39          (0x27UL)  /*!< Value 0x00000027 */
#define MPU_INSTRREGION_40          (0x28UL)  /*!< Value 0x00000028 */
#define MPU_INSTRREGION_41          (0x29UL)  /*!< Value 0x00000029 */
#define MPU_INSTRREGION_42          (0x2AUL)  /*!< Value 0x0000002A */
#define MPU_INSTRREGION_43          (0x2BUL)  /*!< Value 0x0000002B */
#define MPU_INSTRREGION_44          (0x2CUL)  /*!< Value 0x0000002C */
#define MPU_INSTRREGION_45          (0x2DUL)  /*!< Value 0x0000002D */
#define MPU_INSTRREGION_46          (0x2EUL)  /*!< Value 0x0000002E */
#define MPU_INSTRREGION_47          (0x2FUL)  /*!< Value 0x0000002F */
#define MPU_INSTRREGION_48          (0x30UL)  /*!< Value 0x00000030 */
#define MPU_INSTRREGION_49          (0x31UL)  /*!< Value 0x00000031 */
#define MPU_INSTRREGION_50          (0x32UL)  /*!< Value 0x00000032 */
#define MPU_INSTRREGION_51          (0x33UL)  /*!< Value 0x00000033 */
#define MPU_INSTRREGION_52          (0x34UL)  /*!< Value 0x00000034 */
#define MPU_INSTRREGION_53          (0x35UL)  /*!< Value 0x00000035 */
#define MPU_INSTRREGION_54          (0x36UL)  /*!< Value 0x00000036 */
#define MPU_INSTRREGION_55          (0x37UL)  /*!< Value 0x00000037 */
#define MPU_INSTRREGION_56          (0x38UL)  /*!< Value 0x00000038 */
#define MPU_INSTRREGION_57          (0x39UL)  /*!< Value 0x00000039 */
#define MPU_INSTRREGION_58          (0x3AUL)  /*!< Value 0x0000003A */
#define MPU_INSTRREGION_59          (0x3BUL)  /*!< Value 0x0000003B */
#define MPU_INSTRREGION_60          (0x3CUL)  /*!< Value 0x0000003C */
#define MPU_INSTRREGION_61          (0x3DUL)  /*!< Value 0x0000003D */
#define MPU_INSTRREGION_62          (0x3EUL)  /*!< Value 0x0000003E */
#define MPU_INSTRREGION_63          (0x3FUL)  /*!< Value 0x0000003F */
#define MPU_INSTRREGION_64          (0x40UL)  /*!< Value 0x00000040 */
#define MPU_INSTRREGION_65          (0x41UL)  /*!< Value 0x00000041 */
#define MPU_INSTRREGION_66          (0x42UL)  /*!< Value 0x00000042 */
#define MPU_INSTRREGION_67          (0x43UL)  /*!< Value 0x00000043 */
#define MPU_INSTRREGION_68          (0x44UL)  /*!< Value 0x00000044 */
#define MPU_INSTRREGION_69          (0x45UL)  /*!< Value 0x00000045 */
#define MPU_INSTRREGION_70          (0x46UL)  /*!< Value 0x00000046 */
#define MPU_INSTRREGION_71          (0x47UL)  /*!< Value 0x00000047 */
#define MPU_INSTRREGION_72          (0x48UL)  /*!< Value 0x00000048 */
#define MPU_INSTRREGION_73          (0x49UL)  /*!< Value 0x00000049 */
#define MPU_INSTRREGION_74          (0x4AUL)  /*!< Value 0x0000004A */
#define MPU_INSTRREGION_75          (0x4BUL)  /*!< Value 0x0000004B */
#define MPU_INSTRREGION_76          (0x4CUL)  /*!< Value 0x0000004C */
#define MPU_INSTRREGION_77          (0x4DUL)  /*!< Value 0x0000004D */
#define MPU_INSTRREGION_78          (0x4EUL)  /*!< Value 0x0000004E */
#define MPU_INSTRREGION_79          (0x4FUL)  /*!< Value 0x0000004F */
#define MPU_INSTRREGION_80          (0x50UL)  /*!< Value 0x00000050 */
#define MPU_INSTRREGION_81          (0x51UL)  /*!< Value 0x00000051 */
#define MPU_INSTRREGION_82          (0x52UL)  /*!< Value 0x00000052 */
#define MPU_INSTRREGION_83          (0x53UL)  /*!< Value 0x00000053 */
#define MPU_INSTRREGION_84          (0x54UL)  /*!< Value 0x00000054 */
#define MPU_INSTRREGION_85          (0x55UL)  /*!< Value 0x00000055 */
#define MPU_INSTRREGION_86          (0x56UL)  /*!< Value 0x00000056 */
#define MPU_INSTRREGION_87          (0x57UL)  /*!< Value 0x00000057 */
#define MPU_INSTRREGION_88          (0x58UL)  /*!< Value 0x00000058 */
#define MPU_INSTRREGION_89          (0x59UL)  /*!< Value 0x00000059 */
#define MPU_INSTRREGION_90          (0x5AUL)  /*!< Value 0x0000005A */
#define MPU_INSTRREGION_91          (0x5BUL)  /*!< Value 0x0000005B */
#define MPU_INSTRREGION_92          (0x5CUL)  /*!< Value 0x0000005C */
#define MPU_INSTRREGION_93          (0x5DUL)  /*!< Value 0x0000005D */
#define MPU_INSTRREGION_94          (0x5EUL)  /*!< Value 0x0000005E */
#define MPU_INSTRREGION_95          (0x5FUL)  /*!< Value 0x0000005F */
#define MPU_INSTRREGION_96          (0x60UL)  /*!< Value 0x00000060 */
#define MPU_INSTRREGION_97          (0x61UL)  /*!< Value 0x00000061 */
#define MPU_INSTRREGION_98          (0x62UL)  /*!< Value 0x00000062 */
#define MPU_INSTRREGION_99          (0x63UL)  /*!< Value 0x00000063 */
#define MPU_INSTRREGION_100         (0x64UL)  /*!< Value 0x00000064 */
#define MPU_INSTRREGION_101         (0x65UL)  /*!< Value 0x00000065 */
#define MPU_INSTRREGION_102         (0x66UL)  /*!< Value 0x00000066 */
#define MPU_INSTRREGION_103         (0x67UL)  /*!< Value 0x00000067 */
#define MPU_INSTRREGION_104         (0x68UL)  /*!< Value 0x00000068 */
#define MPU_INSTRREGION_105         (0x69UL)  /*!< Value 0x00000069 */
#define MPU_INSTRREGION_106         (0x6AUL)  /*!< Value 0x0000006A */
#define MPU_INSTRREGION_107         (0x6BUL)  /*!< Value 0x0000006B */
#define MPU_INSTRREGION_108         (0x6CUL)  /*!< Value 0x0000006C */
#define MPU_INSTRREGION_109         (0x6DUL)  /*!< Value 0x0000006D */
#define MPU_INSTRREGION_110         (0x6EUL)  /*!< Value 0x0000006E */
#define MPU_INSTRREGION_111         (0x6FUL)  /*!< Value 0x0000006F */
#define MPU_INSTRREGION_112         (0x70UL)  /*!< Value 0x00000070 */
#define MPU_INSTRREGION_113         (0x71UL)  /*!< Value 0x00000071 */
#define MPU_INSTRREGION_114         (0x72UL)  /*!< Value 0x00000072 */
#define MPU_INSTRREGION_115         (0x73UL)  /*!< Value 0x00000073 */
#define MPU_INSTRREGION_116         (0x74UL)  /*!< Value 0x00000074 */
#define MPU_INSTRREGION_117         (0x75UL)  /*!< Value 0x00000075 */
#define MPU_INSTRREGION_118         (0x76UL)  /*!< Value 0x00000076 */
#define MPU_INSTRREGION_119         (0x77UL)  /*!< Value 0x00000077 */
#define MPU_INSTRREGION_120         (0x78UL)  /*!< Value 0x00000078 */
#define MPU_INSTRREGION_121         (0x79UL)  /*!< Value 0x00000079 */
#define MPU_INSTRREGION_122         (0x7AUL)  /*!< Value 0x0000007A */
#define MPU_INSTRREGION_123         (0x7BUL)  /*!< Value 0x0000007B */
#define MPU_INSTRREGION_124         (0x7CUL)  /*!< Value 0x0000007C */
#define MPU_INSTRREGION_125         (0x7DUL)  /*!< Value 0x0000007D */
#define MPU_INSTRREGION_126         (0x7EUL)  /*!< Value 0x0000007E */
#define MPU_INSTRREGION_127         (0x7FUL)  /*!< Value 0x0000007F */
#define MPU_INSTRREGION_128         (0x80UL)  /*!< Value 0x00000080 */
#define MPU_INSTRREGION_129         (0x81UL)  /*!< Value 0x00000081 */
#define MPU_INSTRREGION_130         (0x82UL)  /*!< Value 0x00000082 */
#define MPU_INSTRREGION_131         (0x83UL)  /*!< Value 0x00000083 */
#define MPU_INSTRREGION_132         (0x84UL)  /*!< Value 0x00000084 */
#define MPU_INSTRREGION_133         (0x85UL)  /*!< Value 0x00000085 */
#define MPU_INSTRREGION_134         (0x86UL)  /*!< Value 0x00000086 */
#define MPU_INSTRREGION_135         (0x87UL)  /*!< Value 0x00000087 */
#define MPU_INSTRREGION_136         (0x88UL)  /*!< Value 0x00000088 */
#define MPU_INSTRREGION_137         (0x89UL)  /*!< Value 0x00000089 */
#define MPU_INSTRREGION_138         (0x8AUL)  /*!< Value 0x0000008A */
#define MPU_INSTRREGION_139         (0x8BUL)  /*!< Value 0x0000008B */
#define MPU_INSTRREGION_140         (0x8CUL)  /*!< Value 0x0000008C */
#define MPU_INSTRREGION_141         (0x8DUL)  /*!< Value 0x0000008D */
#define MPU_INSTRREGION_142         (0x8EUL)  /*!< Value 0x0000008E */
#define MPU_INSTRREGION_143         (0x8FUL)  /*!< Value 0x0000008F */
#define MPU_INSTRREGION_144         (0x90UL)  /*!< Value 0x00000090 */
#define MPU_INSTRREGION_145         (0x91UL)  /*!< Value 0x00000091 */
#define MPU_INSTRREGION_146         (0x92UL)  /*!< Value 0x00000092 */
#define MPU_INSTRREGION_147         (0x93UL)  /*!< Value 0x00000093 */
#define MPU_INSTRREGION_148         (0x94UL)  /*!< Value 0x00000094 */
#define MPU_INSTRREGION_149         (0x95UL)  /*!< Value 0x00000095 */
#define MPU_INSTRREGION_150         (0x96UL)  /*!< Value 0x00000096 */
#define MPU_INSTRREGION_151         (0x97UL)  /*!< Value 0x00000097 */
#define MPU_INSTRREGION_152         (0x98UL)  /*!< Value 0x00000098 */
#define MPU_INSTRREGION_153         (0x99UL)  /*!< Value 0x00000099 */
#define MPU_INSTRREGION_154         (0x9AUL)  /*!< Value 0x0000009A */
#define MPU_INSTRREGION_155         (0x9BUL)  /*!< Value 0x0000009B */
#define MPU_INSTRREGION_156         (0x9CUL)  /*!< Value 0x0000009C */
#define MPU_INSTRREGION_157         (0x9DUL)  /*!< Value 0x0000009D */
#define MPU_INSTRREGION_158         (0x9EUL)  /*!< Value 0x0000009E */
#define MPU_INSTRREGION_159         (0x9FUL)  /*!< Value 0x0000009F */
#define MPU_INSTRREGION_160         (0xA0UL)  /*!< Value 0x000000A0 */
#define MPU_INSTRREGION_161         (0xA1UL)  /*!< Value 0x000000A1 */
#define MPU_INSTRREGION_162         (0xA2UL)  /*!< Value 0x000000A2 */
#define MPU_INSTRREGION_163         (0xA3UL)  /*!< Value 0x000000A3 */
#define MPU_INSTRREGION_164         (0xA4UL)  /*!< Value 0x000000A4 */
#define MPU_INSTRREGION_165         (0xA5UL)  /*!< Value 0x000000A5 */
#define MPU_INSTRREGION_166         (0xA6UL)  /*!< Value 0x000000A6 */
#define MPU_INSTRREGION_167         (0xA7UL)  /*!< Value 0x000000A7 */
#define MPU_INSTRREGION_168         (0xA8UL)  /*!< Value 0x000000A8 */
#define MPU_INSTRREGION_169         (0xA9UL)  /*!< Value 0x000000A9 */
#define MPU_INSTRREGION_170         (0xAAUL)  /*!< Value 0x000000AA */
#define MPU_INSTRREGION_171         (0xABUL)  /*!< Value 0x000000AB */
#define MPU_INSTRREGION_172         (0xACUL)  /*!< Value 0x000000AC */
#define MPU_INSTRREGION_173         (0xADUL)  /*!< Value 0x000000AD */
#define MPU_INSTRREGION_174         (0xAEUL)  /*!< Value 0x000000AE */
#define MPU_INSTRREGION_175         (0xAFUL)  /*!< Value 0x000000AF */
#define MPU_INSTRREGION_176         (0xB0UL)  /*!< Value 0x000000B0 */
#define MPU_INSTRREGION_177         (0xB1UL)  /*!< Value 0x000000B1 */
#define MPU_INSTRREGION_178         (0xB2UL)  /*!< Value 0x000000B2 */
#define MPU_INSTRREGION_179         (0xB3UL)  /*!< Value 0x000000B3 */
#define MPU_INSTRREGION_180         (0xB4UL)  /*!< Value 0x000000B4 */
#define MPU_INSTRREGION_181         (0xB5UL)  /*!< Value 0x000000B5 */
#define MPU_INSTRREGION_182         (0xB6UL)  /*!< Value 0x000000B6 */
#define MPU_INSTRREGION_183         (0xB7UL)  /*!< Value 0x000000B7 */
#define MPU_INSTRREGION_184         (0xB8UL)  /*!< Value 0x000000B8 */
#define MPU_INSTRREGION_185         (0xB9UL)  /*!< Value 0x000000B9 */
#define MPU_INSTRREGION_186         (0xBAUL)  /*!< Value 0x000000BA */
#define MPU_INSTRREGION_187         (0xBBUL)  /*!< Value 0x000000BB */
#define MPU_INSTRREGION_188         (0xBCUL)  /*!< Value 0x000000BC */
#define MPU_INSTRREGION_189         (0xBDUL)  /*!< Value 0x000000BD */
#define MPU_INSTRREGION_190         (0xBEUL)  /*!< Value 0x000000BE */
#define MPU_INSTRREGION_191         (0xBFUL)  /*!< Value 0x000000BF */
#define MPU_INSTRREGION_192         (0xC0UL)  /*!< Value 0x000000C0 */
#define MPU_INSTRREGION_193         (0xC1UL)  /*!< Value 0x000000C1 */
#define MPU_INSTRREGION_194         (0xC2UL)  /*!< Value 0x000000C2 */
#define MPU_INSTRREGION_195         (0xC3UL)  /*!< Value 0x000000C3 */
#define MPU_INSTRREGION_196         (0xC4UL)  /*!< Value 0x000000C4 */
#define MPU_INSTRREGION_197         (0xC5UL)  /*!< Value 0x000000C5 */
#define MPU_INSTRREGION_198         (0xC6UL)  /*!< Value 0x000000C6 */
#define MPU_INSTRREGION_199         (0xC7UL)  /*!< Value 0x000000C7 */
#define MPU_INSTRREGION_200         (0xC8UL)  /*!< Value 0x000000C8 */
#define MPU_INSTRREGION_201         (0xC9UL)  /*!< Value 0x000000C9 */
#define MPU_INSTRREGION_202         (0xCAUL)  /*!< Value 0x000000CA */
#define MPU_INSTRREGION_203         (0xCBUL)  /*!< Value 0x000000CB */
#define MPU_INSTRREGION_204         (0xCCUL)  /*!< Value 0x000000CC */
#define MPU_INSTRREGION_205         (0xCDUL)  /*!< Value 0x000000CD */
#define MPU_INSTRREGION_206         (0xCEUL)  /*!< Value 0x000000CE */
#define MPU_INSTRREGION_207         (0xCFUL)  /*!< Value 0x000000CF */
#define MPU_INSTRREGION_208         (0xD0UL)  /*!< Value 0x000000D0 */
#define MPU_INSTRREGION_209         (0xD1UL)  /*!< Value 0x000000D1 */
#define MPU_INSTRREGION_210         (0xD2UL)  /*!< Value 0x000000D2 */
#define MPU_INSTRREGION_211         (0xD3UL)  /*!< Value 0x000000D3 */
#define MPU_INSTRREGION_212         (0xD4UL)  /*!< Value 0x000000D4 */
#define MPU_INSTRREGION_213         (0xD5UL)  /*!< Value 0x000000D5 */
#define MPU_INSTRREGION_214         (0xD6UL)  /*!< Value 0x000000D6 */
#define MPU_INSTRREGION_215         (0xD7UL)  /*!< Value 0x000000D7 */
#define MPU_INSTRREGION_216         (0xD8UL)  /*!< Value 0x000000D8 */
#define MPU_INSTRREGION_217         (0xD9UL)  /*!< Value 0x000000D9 */
#define MPU_INSTRREGION_218         (0xDAUL)  /*!< Value 0x000000DA */
#define MPU_INSTRREGION_219         (0xDBUL)  /*!< Value 0x000000DB */
#define MPU_INSTRREGION_220         (0xDCUL)  /*!< Value 0x000000DC */
#define MPU_INSTRREGION_221         (0xDDUL)  /*!< Value 0x000000DD */
#define MPU_INSTRREGION_222         (0xDEUL)  /*!< Value 0x000000DE */
#define MPU_INSTRREGION_223         (0xDFUL)  /*!< Value 0x000000DF */
#define MPU_INSTRREGION_224         (0xE0UL)  /*!< Value 0x000000E0 */
#define MPU_INSTRREGION_225         (0xE1UL)  /*!< Value 0x000000E1 */
#define MPU_INSTRREGION_226         (0xE2UL)  /*!< Value 0x000000E2 */
#define MPU_INSTRREGION_227         (0xE3UL)  /*!< Value 0x000000E3 */
#define MPU_INSTRREGION_228         (0xE4UL)  /*!< Value 0x000000E4 */
#define MPU_INSTRREGION_229         (0xE5UL)  /*!< Value 0x000000E5 */
#define MPU_INSTRREGION_230         (0xE6UL)  /*!< Value 0x000000E6 */
#define MPU_INSTRREGION_231         (0xE7UL)  /*!< Value 0x000000E7 */
#define MPU_INSTRREGION_232         (0xE8UL)  /*!< Value 0x000000E8 */
#define MPU_INSTRREGION_233         (0xE9UL)  /*!< Value 0x000000E9 */
#define MPU_INSTRREGION_234         (0xEAUL)  /*!< Value 0x000000EA */
#define MPU_INSTRREGION_235         (0xEBUL)  /*!< Value 0x000000EB */
#define MPU_INSTRREGION_236         (0xECUL)  /*!< Value 0x000000EC */
#define MPU_INSTRREGION_237         (0xEDUL)  /*!< Value 0x000000ED */
#define MPU_INSTRREGION_238         (0xEEUL)  /*!< Value 0x000000EE */
#define MPU_INSTRREGION_239         (0xEFUL)  /*!< Value 0x000000EF */
#define MPU_INSTRREGION_240         (0xF0UL)  /*!< Value 0x000000F0 */
#define MPU_INSTRREGION_241         (0xF1UL)  /*!< Value 0x000000F1 */
#define MPU_INSTRREGION_242         (0xF2UL)  /*!< Value 0x000000F2 */
#define MPU_INSTRREGION_243         (0xF3UL)  /*!< Value 0x000000F3 */
#define MPU_INSTRREGION_244         (0xF4UL)  /*!< Value 0x000000F4 */
#define MPU_INSTRREGION_245         (0xF5UL)  /*!< Value 0x000000F5 */
#define MPU_INSTRREGION_246         (0xF6UL)  /*!< Value 0x000000F6 */
#define MPU_INSTRREGION_247         (0xF7UL)  /*!< Value 0x000000F7 */
#define MPU_INSTRREGION_248         (0xF8UL)  /*!< Value 0x000000F8 */
#define MPU_INSTRREGION_249         (0xF9UL)  /*!< Value 0x000000F9 */
#define MPU_INSTRREGION_250         (0xFAUL)  /*!< Value 0x000000FA */
#define MPU_INSTRREGION_251         (0xFBUL)  /*!< Value 0x000000FB */
#define MPU_INSTRREGION_252         (0xFCUL)  /*!< Value 0x000000FC */
#define MPU_INSTRREGION_253         (0xFDUL)  /*!< Value 0x000000FD */
#define MPU_INSTRREGION_254         (0xFEUL)  /*!< Value 0x000000FE */
#define MPU_INSTRREGION_255         (0xFFUL)  /*!< Value 0x000000FF */

// Value of the number of regions supported by the memory protection unit (MPU)
#define MPU_NUMSUPPORTEDREGIONS_MPUNOTIMPLEMENTED  (0x00UL)  /*!< Value 0x00000000 */
#define MPU_NUMSUPPORTEDREGIONS_1                  (0x01UL)  /*!< Value 0x00000001 */
#define MPU_NUMSUPPORTEDREGIONS_2                  (0x02UL)  /*!< Value 0x00000002 */
#define MPU_NUMSUPPORTEDREGIONS_3                  (0x03UL)  /*!< Value 0x00000003 */
#define MPU_NUMSUPPORTEDREGIONS_4                  (0x04UL)  /*!< Value 0x00000004 */
#define MPU_NUMSUPPORTEDREGIONS_5                  (0x05UL)  /*!< Value 0x00000005 */
#define MPU_NUMSUPPORTEDREGIONS_6                  (0x06UL)  /*!< Value 0x00000006 */
#define MPU_NUMSUPPORTEDREGIONS_7                  (0x07UL)  /*!< Value 0x00000007 */
#define MPU_NUMSUPPORTEDREGIONS_8                  (0x08UL)  /*!< Value 0x00000008 */
#define MPU_NUMSUPPORTEDREGIONS_9                  (0x09UL)  /*!< Value 0x00000009 */
#define MPU_NUMSUPPORTEDREGIONS_10                 (0x0AUL)  /*!< Value 0x0000000A */
#define MPU_NUMSUPPORTEDREGIONS_11                 (0x0BUL)  /*!< Value 0x0000000B */
#define MPU_NUMSUPPORTEDREGIONS_12                 (0x0CUL)  /*!< Value 0x0000000C */
#define MPU_NUMSUPPORTEDREGIONS_13                 (0x0DUL)  /*!< Value 0x0000000D */
#define MPU_NUMSUPPORTEDREGIONS_14                 (0x0EUL)  /*!< Value 0x0000000E */
#define MPU_NUMSUPPORTEDREGIONS_15                 (0x0FUL)  /*!< Value 0x0000000F */
#define MPU_NUMSUPPORTEDREGIONS_16                 (0x10UL)  /*!< Value 0x00000010 */
#define MPU_NUMSUPPORTEDREGIONS_17                 (0x11UL)  /*!< Value 0x00000011 */
#define MPU_NUMSUPPORTEDREGIONS_18                 (0x12UL)  /*!< Value 0x00000012 */
#define MPU_NUMSUPPORTEDREGIONS_19                 (0x13UL)  /*!< Value 0x00000013 */
#define MPU_NUMSUPPORTEDREGIONS_20                 (0x14UL)  /*!< Value 0x00000014 */
#define MPU_NUMSUPPORTEDREGIONS_21                 (0x15UL)  /*!< Value 0x00000015 */
#define MPU_NUMSUPPORTEDREGIONS_22                 (0x16UL)  /*!< Value 0x00000016 */
#define MPU_NUMSUPPORTEDREGIONS_23                 (0x17UL)  /*!< Value 0x00000017 */
#define MPU_NUMSUPPORTEDREGIONS_24                 (0x18UL)  /*!< Value 0x00000018 */
#define MPU_NUMSUPPORTEDREGIONS_25                 (0x19UL)  /*!< Value 0x00000019 */
#define MPU_NUMSUPPORTEDREGIONS_26                 (0x1AUL)  /*!< Value 0x0000001A */
#define MPU_NUMSUPPORTEDREGIONS_27                 (0x1BUL)  /*!< Value 0x0000001B */
#define MPU_NUMSUPPORTEDREGIONS_28                 (0x1CUL)  /*!< Value 0x0000001C */
#define MPU_NUMSUPPORTEDREGIONS_29                 (0x1DUL)  /*!< Value 0x0000001D */
#define MPU_NUMSUPPORTEDREGIONS_30                 (0x1EUL)  /*!< Value 0x0000001E */
#define MPU_NUMSUPPORTEDREGIONS_31                 (0x1FUL)  /*!< Value 0x0000001F */
#define MPU_NUMSUPPORTEDREGIONS_32                 (0x20UL)  /*!< Value 0x00000020 */
#define MPU_NUMSUPPORTEDREGIONS_33                 (0x21UL)  /*!< Value 0x00000021 */
#define MPU_NUMSUPPORTEDREGIONS_34                 (0x22UL)  /*!< Value 0x00000022 */
#define MPU_NUMSUPPORTEDREGIONS_35                 (0x23UL)  /*!< Value 0x00000023 */
#define MPU_NUMSUPPORTEDREGIONS_36                 (0x24UL)  /*!< Value 0x00000024 */
#define MPU_NUMSUPPORTEDREGIONS_37                 (0x25UL)  /*!< Value 0x00000025 */
#define MPU_NUMSUPPORTEDREGIONS_38                 (0x26UL)  /*!< Value 0x00000026 */
#define MPU_NUMSUPPORTEDREGIONS_39                 (0x27UL)  /*!< Value 0x00000027 */
#define MPU_NUMSUPPORTEDREGIONS_40                 (0x28UL)  /*!< Value 0x00000028 */
#define MPU_NUMSUPPORTEDREGIONS_41                 (0x29UL)  /*!< Value 0x00000029 */
#define MPU_NUMSUPPORTEDREGIONS_42                 (0x2AUL)  /*!< Value 0x0000002A */
#define MPU_NUMSUPPORTEDREGIONS_43                 (0x2BUL)  /*!< Value 0x0000002B */
#define MPU_NUMSUPPORTEDREGIONS_44                 (0x2CUL)  /*!< Value 0x0000002C */
#define MPU_NUMSUPPORTEDREGIONS_45                 (0x2DUL)  /*!< Value 0x0000002D */
#define MPU_NUMSUPPORTEDREGIONS_46                 (0x2EUL)  /*!< Value 0x0000002E */
#define MPU_NUMSUPPORTEDREGIONS_47                 (0x2FUL)  /*!< Value 0x0000002F */
#define MPU_NUMSUPPORTEDREGIONS_48                 (0x30UL)  /*!< Value 0x00000030 */
#define MPU_NUMSUPPORTEDREGIONS_49                 (0x31UL)  /*!< Value 0x00000031 */
#define MPU_NUMSUPPORTEDREGIONS_50                 (0x32UL)  /*!< Value 0x00000032 */
#define MPU_NUMSUPPORTEDREGIONS_51                 (0x33UL)  /*!< Value 0x00000033 */
#define MPU_NUMSUPPORTEDREGIONS_52                 (0x34UL)  /*!< Value 0x00000034 */
#define MPU_NUMSUPPORTEDREGIONS_53                 (0x35UL)  /*!< Value 0x00000035 */
#define MPU_NUMSUPPORTEDREGIONS_54                 (0x36UL)  /*!< Value 0x00000036 */
#define MPU_NUMSUPPORTEDREGIONS_55                 (0x37UL)  /*!< Value 0x00000037 */
#define MPU_NUMSUPPORTEDREGIONS_56                 (0x38UL)  /*!< Value 0x00000038 */
#define MPU_NUMSUPPORTEDREGIONS_57                 (0x39UL)  /*!< Value 0x00000039 */
#define MPU_NUMSUPPORTEDREGIONS_58                 (0x3AUL)  /*!< Value 0x0000003A */
#define MPU_NUMSUPPORTEDREGIONS_59                 (0x3BUL)  /*!< Value 0x0000003B */
#define MPU_NUMSUPPORTEDREGIONS_60                 (0x3CUL)  /*!< Value 0x0000003C */
#define MPU_NUMSUPPORTEDREGIONS_61                 (0x3DUL)  /*!< Value 0x0000003D */
#define MPU_NUMSUPPORTEDREGIONS_62                 (0x3EUL)  /*!< Value 0x0000003E */
#define MPU_NUMSUPPORTEDREGIONS_63                 (0x3FUL)  /*!< Value 0x0000003F */
#define MPU_NUMSUPPORTEDREGIONS_64                 (0x40UL)  /*!< Value 0x00000040 */
#define MPU_NUMSUPPORTEDREGIONS_65                 (0x41UL)  /*!< Value 0x00000041 */
#define MPU_NUMSUPPORTEDREGIONS_66                 (0x42UL)  /*!< Value 0x00000042 */
#define MPU_NUMSUPPORTEDREGIONS_67                 (0x43UL)  /*!< Value 0x00000043 */
#define MPU_NUMSUPPORTEDREGIONS_68                 (0x44UL)  /*!< Value 0x00000044 */
#define MPU_NUMSUPPORTEDREGIONS_69                 (0x45UL)  /*!< Value 0x00000045 */
#define MPU_NUMSUPPORTEDREGIONS_70                 (0x46UL)  /*!< Value 0x00000046 */
#define MPU_NUMSUPPORTEDREGIONS_71                 (0x47UL)  /*!< Value 0x00000047 */
#define MPU_NUMSUPPORTEDREGIONS_72                 (0x48UL)  /*!< Value 0x00000048 */
#define MPU_NUMSUPPORTEDREGIONS_73                 (0x49UL)  /*!< Value 0x00000049 */
#define MPU_NUMSUPPORTEDREGIONS_74                 (0x4AUL)  /*!< Value 0x0000004A */
#define MPU_NUMSUPPORTEDREGIONS_75                 (0x4BUL)  /*!< Value 0x0000004B */
#define MPU_NUMSUPPORTEDREGIONS_76                 (0x4CUL)  /*!< Value 0x0000004C */
#define MPU_NUMSUPPORTEDREGIONS_77                 (0x4DUL)  /*!< Value 0x0000004D */
#define MPU_NUMSUPPORTEDREGIONS_78                 (0x4EUL)  /*!< Value 0x0000004E */
#define MPU_NUMSUPPORTEDREGIONS_79                 (0x4FUL)  /*!< Value 0x0000004F */
#define MPU_NUMSUPPORTEDREGIONS_80                 (0x50UL)  /*!< Value 0x00000050 */
#define MPU_NUMSUPPORTEDREGIONS_81                 (0x51UL)  /*!< Value 0x00000051 */
#define MPU_NUMSUPPORTEDREGIONS_82                 (0x52UL)  /*!< Value 0x00000052 */
#define MPU_NUMSUPPORTEDREGIONS_83                 (0x53UL)  /*!< Value 0x00000053 */
#define MPU_NUMSUPPORTEDREGIONS_84                 (0x54UL)  /*!< Value 0x00000054 */
#define MPU_NUMSUPPORTEDREGIONS_85                 (0x55UL)  /*!< Value 0x00000055 */
#define MPU_NUMSUPPORTEDREGIONS_86                 (0x56UL)  /*!< Value 0x00000056 */
#define MPU_NUMSUPPORTEDREGIONS_87                 (0x57UL)  /*!< Value 0x00000057 */
#define MPU_NUMSUPPORTEDREGIONS_88                 (0x58UL)  /*!< Value 0x00000058 */
#define MPU_NUMSUPPORTEDREGIONS_89                 (0x59UL)  /*!< Value 0x00000059 */
#define MPU_NUMSUPPORTEDREGIONS_90                 (0x5AUL)  /*!< Value 0x0000005A */
#define MPU_NUMSUPPORTEDREGIONS_91                 (0x5BUL)  /*!< Value 0x0000005B */
#define MPU_NUMSUPPORTEDREGIONS_92                 (0x5CUL)  /*!< Value 0x0000005C */
#define MPU_NUMSUPPORTEDREGIONS_93                 (0x5DUL)  /*!< Value 0x0000005D */
#define MPU_NUMSUPPORTEDREGIONS_94                 (0x5EUL)  /*!< Value 0x0000005E */
#define MPU_NUMSUPPORTEDREGIONS_95                 (0x5FUL)  /*!< Value 0x0000005F */
#define MPU_NUMSUPPORTEDREGIONS_96                 (0x60UL)  /*!< Value 0x00000060 */
#define MPU_NUMSUPPORTEDREGIONS_97                 (0x61UL)  /*!< Value 0x00000061 */
#define MPU_NUMSUPPORTEDREGIONS_98                 (0x62UL)  /*!< Value 0x00000062 */
#define MPU_NUMSUPPORTEDREGIONS_99                 (0x63UL)  /*!< Value 0x00000063 */
#define MPU_NUMSUPPORTEDREGIONS_100                (0x64UL)  /*!< Value 0x00000064 */
#define MPU_NUMSUPPORTEDREGIONS_101                (0x65UL)  /*!< Value 0x00000065 */
#define MPU_NUMSUPPORTEDREGIONS_102                (0x66UL)  /*!< Value 0x00000066 */
#define MPU_NUMSUPPORTEDREGIONS_103                (0x67UL)  /*!< Value 0x00000067 */
#define MPU_NUMSUPPORTEDREGIONS_104                (0x68UL)  /*!< Value 0x00000068 */
#define MPU_NUMSUPPORTEDREGIONS_105                (0x69UL)  /*!< Value 0x00000069 */
#define MPU_NUMSUPPORTEDREGIONS_106                (0x6AUL)  /*!< Value 0x0000006A */
#define MPU_NUMSUPPORTEDREGIONS_107                (0x6BUL)  /*!< Value 0x0000006B */
#define MPU_NUMSUPPORTEDREGIONS_108                (0x6CUL)  /*!< Value 0x0000006C */
#define MPU_NUMSUPPORTEDREGIONS_109                (0x6DUL)  /*!< Value 0x0000006D */
#define MPU_NUMSUPPORTEDREGIONS_110                (0x6EUL)  /*!< Value 0x0000006E */
#define MPU_NUMSUPPORTEDREGIONS_111                (0x6FUL)  /*!< Value 0x0000006F */
#define MPU_NUMSUPPORTEDREGIONS_112                (0x70UL)  /*!< Value 0x00000070 */
#define MPU_NUMSUPPORTEDREGIONS_113                (0x71UL)  /*!< Value 0x00000071 */
#define MPU_NUMSUPPORTEDREGIONS_114                (0x72UL)  /*!< Value 0x00000072 */
#define MPU_NUMSUPPORTEDREGIONS_115                (0x73UL)  /*!< Value 0x00000073 */
#define MPU_NUMSUPPORTEDREGIONS_116                (0x74UL)  /*!< Value 0x00000074 */
#define MPU_NUMSUPPORTEDREGIONS_117                (0x75UL)  /*!< Value 0x00000075 */
#define MPU_NUMSUPPORTEDREGIONS_118                (0x76UL)  /*!< Value 0x00000076 */
#define MPU_NUMSUPPORTEDREGIONS_119                (0x77UL)  /*!< Value 0x00000077 */
#define MPU_NUMSUPPORTEDREGIONS_120                (0x78UL)  /*!< Value 0x00000078 */
#define MPU_NUMSUPPORTEDREGIONS_121                (0x79UL)  /*!< Value 0x00000079 */
#define MPU_NUMSUPPORTEDREGIONS_122                (0x7AUL)  /*!< Value 0x0000007A */
#define MPU_NUMSUPPORTEDREGIONS_123                (0x7BUL)  /*!< Value 0x0000007B */
#define MPU_NUMSUPPORTEDREGIONS_124                (0x7CUL)  /*!< Value 0x0000007C */
#define MPU_NUMSUPPORTEDREGIONS_125                (0x7DUL)  /*!< Value 0x0000007D */
#define MPU_NUMSUPPORTEDREGIONS_126                (0x7EUL)  /*!< Value 0x0000007E */
#define MPU_NUMSUPPORTEDREGIONS_127                (0x7FUL)  /*!< Value 0x0000007F */
#define MPU_NUMSUPPORTEDREGIONS_128                (0x80UL)  /*!< Value 0x00000080 */
#define MPU_NUMSUPPORTEDREGIONS_129                (0x81UL)  /*!< Value 0x00000081 */
#define MPU_NUMSUPPORTEDREGIONS_130                (0x82UL)  /*!< Value 0x00000082 */
#define MPU_NUMSUPPORTEDREGIONS_131                (0x83UL)  /*!< Value 0x00000083 */
#define MPU_NUMSUPPORTEDREGIONS_132                (0x84UL)  /*!< Value 0x00000084 */
#define MPU_NUMSUPPORTEDREGIONS_133                (0x85UL)  /*!< Value 0x00000085 */
#define MPU_NUMSUPPORTEDREGIONS_134                (0x86UL)  /*!< Value 0x00000086 */
#define MPU_NUMSUPPORTEDREGIONS_135                (0x87UL)  /*!< Value 0x00000087 */
#define MPU_NUMSUPPORTEDREGIONS_136                (0x88UL)  /*!< Value 0x00000088 */
#define MPU_NUMSUPPORTEDREGIONS_137                (0x89UL)  /*!< Value 0x00000089 */
#define MPU_NUMSUPPORTEDREGIONS_138                (0x8AUL)  /*!< Value 0x0000008A */
#define MPU_NUMSUPPORTEDREGIONS_139                (0x8BUL)  /*!< Value 0x0000008B */
#define MPU_NUMSUPPORTEDREGIONS_140                (0x8CUL)  /*!< Value 0x0000008C */
#define MPU_NUMSUPPORTEDREGIONS_141                (0x8DUL)  /*!< Value 0x0000008D */
#define MPU_NUMSUPPORTEDREGIONS_142                (0x8EUL)  /*!< Value 0x0000008E */
#define MPU_NUMSUPPORTEDREGIONS_143                (0x8FUL)  /*!< Value 0x0000008F */
#define MPU_NUMSUPPORTEDREGIONS_144                (0x90UL)  /*!< Value 0x00000090 */
#define MPU_NUMSUPPORTEDREGIONS_145                (0x91UL)  /*!< Value 0x00000091 */
#define MPU_NUMSUPPORTEDREGIONS_146                (0x92UL)  /*!< Value 0x00000092 */
#define MPU_NUMSUPPORTEDREGIONS_147                (0x93UL)  /*!< Value 0x00000093 */
#define MPU_NUMSUPPORTEDREGIONS_148                (0x94UL)  /*!< Value 0x00000094 */
#define MPU_NUMSUPPORTEDREGIONS_149                (0x95UL)  /*!< Value 0x00000095 */
#define MPU_NUMSUPPORTEDREGIONS_150                (0x96UL)  /*!< Value 0x00000096 */
#define MPU_NUMSUPPORTEDREGIONS_151                (0x97UL)  /*!< Value 0x00000097 */
#define MPU_NUMSUPPORTEDREGIONS_152                (0x98UL)  /*!< Value 0x00000098 */
#define MPU_NUMSUPPORTEDREGIONS_153                (0x99UL)  /*!< Value 0x00000099 */
#define MPU_NUMSUPPORTEDREGIONS_154                (0x9AUL)  /*!< Value 0x0000009A */
#define MPU_NUMSUPPORTEDREGIONS_155                (0x9BUL)  /*!< Value 0x0000009B */
#define MPU_NUMSUPPORTEDREGIONS_156                (0x9CUL)  /*!< Value 0x0000009C */
#define MPU_NUMSUPPORTEDREGIONS_157                (0x9DUL)  /*!< Value 0x0000009D */
#define MPU_NUMSUPPORTEDREGIONS_158                (0x9EUL)  /*!< Value 0x0000009E */
#define MPU_NUMSUPPORTEDREGIONS_159                (0x9FUL)  /*!< Value 0x0000009F */
#define MPU_NUMSUPPORTEDREGIONS_160                (0xA0UL)  /*!< Value 0x000000A0 */
#define MPU_NUMSUPPORTEDREGIONS_161                (0xA1UL)  /*!< Value 0x000000A1 */
#define MPU_NUMSUPPORTEDREGIONS_162                (0xA2UL)  /*!< Value 0x000000A2 */
#define MPU_NUMSUPPORTEDREGIONS_163                (0xA3UL)  /*!< Value 0x000000A3 */
#define MPU_NUMSUPPORTEDREGIONS_164                (0xA4UL)  /*!< Value 0x000000A4 */
#define MPU_NUMSUPPORTEDREGIONS_165                (0xA5UL)  /*!< Value 0x000000A5 */
#define MPU_NUMSUPPORTEDREGIONS_166                (0xA6UL)  /*!< Value 0x000000A6 */
#define MPU_NUMSUPPORTEDREGIONS_167                (0xA7UL)  /*!< Value 0x000000A7 */
#define MPU_NUMSUPPORTEDREGIONS_168                (0xA8UL)  /*!< Value 0x000000A8 */
#define MPU_NUMSUPPORTEDREGIONS_169                (0xA9UL)  /*!< Value 0x000000A9 */
#define MPU_NUMSUPPORTEDREGIONS_170                (0xAAUL)  /*!< Value 0x000000AA */
#define MPU_NUMSUPPORTEDREGIONS_171                (0xABUL)  /*!< Value 0x000000AB */
#define MPU_NUMSUPPORTEDREGIONS_172                (0xACUL)  /*!< Value 0x000000AC */
#define MPU_NUMSUPPORTEDREGIONS_173                (0xADUL)  /*!< Value 0x000000AD */
#define MPU_NUMSUPPORTEDREGIONS_174                (0xAEUL)  /*!< Value 0x000000AE */
#define MPU_NUMSUPPORTEDREGIONS_175                (0xAFUL)  /*!< Value 0x000000AF */
#define MPU_NUMSUPPORTEDREGIONS_176                (0xB0UL)  /*!< Value 0x000000B0 */
#define MPU_NUMSUPPORTEDREGIONS_177                (0xB1UL)  /*!< Value 0x000000B1 */
#define MPU_NUMSUPPORTEDREGIONS_178                (0xB2UL)  /*!< Value 0x000000B2 */
#define MPU_NUMSUPPORTEDREGIONS_179                (0xB3UL)  /*!< Value 0x000000B3 */
#define MPU_NUMSUPPORTEDREGIONS_180                (0xB4UL)  /*!< Value 0x000000B4 */
#define MPU_NUMSUPPORTEDREGIONS_181                (0xB5UL)  /*!< Value 0x000000B5 */
#define MPU_NUMSUPPORTEDREGIONS_182                (0xB6UL)  /*!< Value 0x000000B6 */
#define MPU_NUMSUPPORTEDREGIONS_183                (0xB7UL)  /*!< Value 0x000000B7 */
#define MPU_NUMSUPPORTEDREGIONS_184                (0xB8UL)  /*!< Value 0x000000B8 */
#define MPU_NUMSUPPORTEDREGIONS_185                (0xB9UL)  /*!< Value 0x000000B9 */
#define MPU_NUMSUPPORTEDREGIONS_186                (0xBAUL)  /*!< Value 0x000000BA */
#define MPU_NUMSUPPORTEDREGIONS_187                (0xBBUL)  /*!< Value 0x000000BB */
#define MPU_NUMSUPPORTEDREGIONS_188                (0xBCUL)  /*!< Value 0x000000BC */
#define MPU_NUMSUPPORTEDREGIONS_189                (0xBDUL)  /*!< Value 0x000000BD */
#define MPU_NUMSUPPORTEDREGIONS_190                (0xBEUL)  /*!< Value 0x000000BE */
#define MPU_NUMSUPPORTEDREGIONS_191                (0xBFUL)  /*!< Value 0x000000BF */
#define MPU_NUMSUPPORTEDREGIONS_192                (0xC0UL)  /*!< Value 0x000000C0 */
#define MPU_NUMSUPPORTEDREGIONS_193                (0xC1UL)  /*!< Value 0x000000C1 */
#define MPU_NUMSUPPORTEDREGIONS_194                (0xC2UL)  /*!< Value 0x000000C2 */
#define MPU_NUMSUPPORTEDREGIONS_195                (0xC3UL)  /*!< Value 0x000000C3 */
#define MPU_NUMSUPPORTEDREGIONS_196                (0xC4UL)  /*!< Value 0x000000C4 */
#define MPU_NUMSUPPORTEDREGIONS_197                (0xC5UL)  /*!< Value 0x000000C5 */
#define MPU_NUMSUPPORTEDREGIONS_198                (0xC6UL)  /*!< Value 0x000000C6 */
#define MPU_NUMSUPPORTEDREGIONS_199                (0xC7UL)  /*!< Value 0x000000C7 */
#define MPU_NUMSUPPORTEDREGIONS_200                (0xC8UL)  /*!< Value 0x000000C8 */
#define MPU_NUMSUPPORTEDREGIONS_201                (0xC9UL)  /*!< Value 0x000000C9 */
#define MPU_NjUMSUPPORTEDREGIONS_202                (0xCAUL)  /*!< Value 0x000000CA */
#define MPU_NUMSUPPORTEDREGIONS_203                (0xCBUL)  /*!< Value 0x000000CB */
#define MPU_NUMSUPPORTEDREGIONS_204                (0xCCUL)  /*!< Value 0x000000CC */
#define MPU_NUMSUPPORTEDREGIONS_205                (0xCDUL)  /*!< Value 0x000000CD */
#define MPU_NUMSUPPORTEDREGIONS_206                (0xCEUL)  /*!< Value 0x000000CE */
#define MPU_NUMSUPPORTEDREGIONS_207                (0xCFUL)  /*!< Value 0x000000CF */
#define MPU_NUMSUPPORTEDREGIONS_208                (0xD0UL)  /*!< Value 0x000000D0 */
#define MPU_NUMSUPPORTEDREGIONS_209                (0xD1UL)  /*!< Value 0x000000D1 */
#define MPU_NUMSUPPORTEDREGIONS_210                (0xD2UL)  /*!< Value 0x000000D2 */
#define MPU_NUMSUPPORTEDREGIONS_211                (0xD3UL)  /*!< Value 0x000000D3 */
#define MPU_NUMSUPPORTEDREGIONS_212                (0xD4UL)  /*!< Value 0x000000D4 */
#define MPU_NUMSUPPORTEDREGIONS_213                (0xD5UL)  /*!< Value 0x000000D5 */
#define MPU_NUMSUPPORTEDREGIONS_214                (0xD6UL)  /*!< Value 0x000000D6 */
#define MPU_NUMSUPPORTEDREGIONS_215                (0xD7UL)  /*!< Value 0x000000D7 */
#define MPU_NUMSUPPORTEDREGIONS_216                (0xD8UL)  /*!< Value 0x000000D8 */
#define MPU_NUMSUPPORTEDREGIONS_217                (0xD9UL)  /*!< Value 0x000000D9 */
#define MPU_NUMSUPPORTEDREGIONS_218                (0xDAUL)  /*!< Value 0x000000DA */
#define MPU_NUMSUPPORTEDREGIONS_219                (0xDBUL)  /*!< Value 0x000000DB */
#define MPU_NUMSUPPORTEDREGIONS_220                (0xDCUL)  /*!< Value 0x000000DC */
#define MPU_NUMSUPPORTEDREGIONS_221                (0xDDUL)  /*!< Value 0x000000DD */
#define MPU_NUMSUPPORTEDREGIONS_222                (0xDEUL)  /*!< Value 0x000000DE */
#define MPU_NUMSUPPORTEDREGIONS_223                (0xDFUL)  /*!< Value 0x000000DF */
#define MPU_NUMSUPPORTEDREGIONS_224                (0xE0UL)  /*!< Value 0x000000E0 */
#define MPU_NUMSUPPORTEDREGIONS_225                (0xE1UL)  /*!< Value 0x000000E1 */
#define MPU_NUMSUPPORTEDREGIONS_226                (0xE2UL)  /*!< Value 0x000000E2 */
#define MPU_NUMSUPPORTEDREGIONS_227                (0xE3UL)  /*!< Value 0x000000E3 */
#define MPU_NUMSUPPORTEDREGIONS_228                (0xE4UL)  /*!< Value 0x000000E4 */
#define MPU_NUMSUPPORTEDREGIONS_229                (0xE5UL)  /*!< Value 0x000000E5 */
#define MPU_NUMSUPPORTEDREGIONS_230                (0xE6UL)  /*!< Value 0x000000E6 */
#define MPU_NUMSUPPORTEDREGIONS_231                (0xE7UL)  /*!< Value 0x000000E7 */
#define MPU_NUMSUPPORTEDREGIONS_232                (0xE8UL)  /*!< Value 0x000000E8 */
#define MPU_NUMSUPPORTEDREGIONS_233                (0xE9UL)  /*!< Value 0x000000E9 */
#define MPU_NUMSUPPORTEDREGIONS_234                (0xEAUL)  /*!< Value 0x000000EA */
#define MPU_NUMSUPPORTEDREGIONS_235                (0xEBUL)  /*!< Value 0x000000EB */
#define MPU_NUMSUPPORTEDREGIONS_236                (0xECUL)  /*!< Value 0x000000EC */
#define MPU_NUMSUPPORTEDREGIONS_237                (0xEDUL)  /*!< Value 0x000000ED */
#define MPU_NUMSUPPORTEDREGIONS_238                (0xEEUL)  /*!< Value 0x000000EE */
#define MPU_NUMSUPPORTEDREGIONS_239                (0xEFUL)  /*!< Value 0x000000EF */
#define MPU_NUMSUPPORTEDREGIONS_240                (0xF0UL)  /*!< Value 0x000000F0 */
#define MPU_NUMSUPPORTEDREGIONS_241                (0xF1UL)  /*!< Value 0x000000F1 */
#define MPU_NUMSUPPORTEDREGIONS_242                (0xF2UL)  /*!< Value 0x000000F2 */
#define MPU_NUMSUPPORTEDREGIONS_243                (0xF3UL)  /*!< Value 0x000000F3 */
#define MPU_NUMSUPPORTEDREGIONS_244                (0xF4UL)  /*!< Value 0x000000F4 */
#define MPU_NUMSUPPORTEDREGIONS_245                (0xF5UL)  /*!< Value 0x000000F5 */
#define MPU_NUMSUPPORTEDREGIONS_246                (0xF6UL)  /*!< Value 0x000000F6 */
#define MPU_NUMSUPPORTEDREGIONS_247                (0xF7UL)  /*!< Value 0x000000F7 */
#define MPU_NUMSUPPORTEDREGIONS_248                (0xF8UL)  /*!< Value 0x000000F8 */
#define MPU_NUMSUPPORTEDREGIONS_249                (0xF9UL)  /*!< Value 0x000000F9 */
#define MPU_NUMSUPPORTEDREGIONS_250                (0xFAUL)  /*!< Value 0x000000FA */
#define MPU_NUMSUPPORTEDREGIONS_251                (0xFBUL)  /*!< Value 0x000000FB */
#define MPU_NUMSUPPORTEDREGIONS_252                (0xFCUL)  /*!< Value 0x000000FC */
#define MPU_NUMSUPPORTEDREGIONS_253                (0xFDUL)  /*!< Value 0x000000FD */
#define MPU_NUMSUPPORTEDREGIONS_254                (0xFEUL)  /*!< Value 0x000000FE */
#define MPU_NUMSUPPORTEDREGIONS_255                (0xFFUL)  /*!< Value 0x000000FF */

// Values of register bit controlling whether the instruction ad data address maps are unified or separated
#define MPU_INSTRDATAADDRMAP_UNIFIED    (0x0UL)  /*!< Value 0x00000000 */
#define MPU_INSTRDATAADDRMAP_SEPARATED  (0x1UL)  /*!< Value 0x00000001 */

/*!< Control register */
#define MPU_CTRL_PRIVDEFENA_OFFSET  (2U)
#define MPU_CTRL_PRIVDEFENA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, CTRL, PRIVDEFENA))  /*!< Mask  0x00000004 */

#define MPU_CTRL_HFNMIENA_OFFSET    (1U)
#define MPU_CTRL_HFNMIENA_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MPU, CTRL, HFNMIENA))    /*!< Mask  0x00000002 */

#define MPU_CTRL_ENABLE_OFFSET      (0U)
#define MPU_CTRL_ENABLE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(MPU, CTRL, ENABLE))      /*!< Mask  0x00000001 */

// Values of default memory map of memory protection unit (MPU) enable bit
#define MPU_DEFMEMMAP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_DEFMEMMAP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit controlling whether handlers (HardFaults and NMIs as well as other exception handlers when FAULTMASK is set to 1) executing with priority less than 0 access memory with the memory protection unit (MPU) enabled or with the memory protection unit (MPU) disabled
#define MPU_EXCHANDLERSACESS_UNPRIVILEGED  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_EXCHANDLERSACESS_PRIVILEGED    (0x1UL)  /*!< Value 0x00000001 */

// Values of memory protection unit (MPU) enable bit
#define MPU_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Region number register */
#define MPU_RNR_REGION_OFFSET  (0U)
#define MPU_RNR_REGION_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Mask  0x000000FF */
#define MPU_RNR_REGION_0       (0x01UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000001 */
#define MPU_RNR_REGION_1       (0x02UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000002 */
#define MPU_RNR_REGION_2       (0x04UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000004 */
#define MPU_RNR_REGION_3       (0x08UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000008 */
#define MPU_RNR_REGION_4       (0x10UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000010 */
#define MPU_RNR_REGION_5       (0x20UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000020 */
#define MPU_RNR_REGION_6       (0x40UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000040 */
#define MPU_RNR_REGION_7       (0x80UL << REGISTER_FIELD_OFFSET(MPU, RNR, REGION))  /*!< Value 0x00000080 */

// Value of the region accesses by region base address register (RBAR) and region attribute and size register (RASR)
#define MPU_REGION_0    (0x00UL)  /*!< Value 0x00000000 */
#define MPU_REGION_1    (0x01UL)  /*!< Value 0x00000001 */
#define MPU_REGION_2    (0x02UL)  /*!< Value 0x00000002 */
#define MPU_REGION_3    (0x03UL)  /*!< Value 0x00000003 */
#define MPU_REGION_4    (0x04UL)  /*!< Value 0x00000004 */
#define MPU_REGION_5    (0x05UL)  /*!< Value 0x00000005 */
#define MPU_REGION_6    (0x06UL)  /*!< Value 0x00000006 */
#define MPU_REGION_7    (0x07UL)  /*!< Value 0x00000007 */
#define MPU_REGION_8    (0x08UL)  /*!< Value 0x00000008 */
#define MPU_REGION_9    (0x09UL)  /*!< Value 0x00000009 */
#define MPU_REGION_10   (0x0AUL)  /*!< Value 0x0000000A */
#define MPU_REGION_11   (0x0BUL)  /*!< Value 0x0000000B */
#define MPU_REGION_12   (0x0CUL)  /*!< Value 0x0000000C */
#define MPU_REGION_13   (0x0DUL)  /*!< Value 0x0000000D */
#define MPU_REGION_14   (0x0EUL)  /*!< Value 0x0000000E */
#define MPU_REGION_15   (0x0FUL)  /*!< Value 0x0000000F */
#define MPU_REGION_16   (0x10UL)  /*!< Value 0x00000010 */
#define MPU_REGION_17   (0x11UL)  /*!< Value 0x00000011 */
#define MPU_REGION_18   (0x12UL)  /*!< Value 0x00000012 */
#define MPU_REGION_19   (0x13UL)  /*!< Value 0x00000013 */
#define MPU_REGION_20   (0x14UL)  /*!< Value 0x00000014 */
#define MPU_REGION_21   (0x15UL)  /*!< Value 0x00000015 */
#define MPU_REGION_22   (0x16UL)  /*!< Value 0x00000016 */
#define MPU_REGION_23   (0x17UL)  /*!< Value 0x00000017 */
#define MPU_REGION_24   (0x18UL)  /*!< Value 0x00000018 */
#define MPU_REGION_25   (0x19UL)  /*!< Value 0x00000019 */
#define MPU_REGION_26   (0x1AUL)  /*!< Value 0x0000001A */
#define MPU_REGION_27   (0x1BUL)  /*!< Value 0x0000001B */
#define MPU_REGION_28   (0x1CUL)  /*!< Value 0x0000001C */
#define MPU_REGION_29   (0x1DUL)  /*!< Value 0x0000001D */
#define MPU_REGION_30   (0x1EUL)  /*!< Value 0x0000001E */
#define MPU_REGION_31   (0x1FUL)  /*!< Value 0x0000001F */
#define MPU_REGION_32   (0x20UL)  /*!< Value 0x00000020 */
#define MPU_REGION_33   (0x21UL)  /*!< Value 0x00000021 */
#define MPU_REGION_34   (0x22UL)  /*!< Value 0x00000022 */
#define MPU_REGION_35   (0x23UL)  /*!< Value 0x00000023 */
#define MPU_REGION_36   (0x24UL)  /*!< Value 0x00000024 */
#define MPU_REGION_37   (0x25UL)  /*!< Value 0x00000025 */
#define MPU_REGION_38   (0x26UL)  /*!< Value 0x00000026 */
#define MPU_REGION_39   (0x27UL)  /*!< Value 0x00000027 */
#define MPU_REGION_40   (0x28UL)  /*!< Value 0x00000028 */
#define MPU_REGION_41   (0x29UL)  /*!< Value 0x00000029 */
#define MPU_REGION_42   (0x2AUL)  /*!< Value 0x0000002A */
#define MPU_REGION_43   (0x2BUL)  /*!< Value 0x0000002B */
#define MPU_REGION_44   (0x2CUL)  /*!< Value 0x0000002C */
#define MPU_REGION_45   (0x2DUL)  /*!< Value 0x0000002D */
#define MPU_REGION_46   (0x2EUL)  /*!< Value 0x0000002E */
#define MPU_REGION_47   (0x2FUL)  /*!< Value 0x0000002F */
#define MPU_REGION_48   (0x30UL)  /*!< Value 0x00000030 */
#define MPU_REGION_49   (0x31UL)  /*!< Value 0x00000031 */
#define MPU_REGION_50   (0x32UL)  /*!< Value 0x00000032 */
#define MPU_REGION_51   (0x33UL)  /*!< Value 0x00000033 */
#define MPU_REGION_52   (0x34UL)  /*!< Value 0x00000034 */
#define MPU_REGION_53   (0x35UL)  /*!< Value 0x00000035 */
#define MPU_REGION_54   (0x36UL)  /*!< Value 0x00000036 */
#define MPU_REGION_55   (0x37UL)  /*!< Value 0x00000037 */
#define MPU_REGION_56   (0x38UL)  /*!< Value 0x00000038 */
#define MPU_REGION_57   (0x39UL)  /*!< Value 0x00000039 */
#define MPU_REGION_58   (0x3AUL)  /*!< Value 0x0000003A */
#define MPU_REGION_59   (0x3BUL)  /*!< Value 0x0000003B */
#define MPU_REGION_60   (0x3CUL)  /*!< Value 0x0000003C */
#define MPU_REGION_61   (0x3DUL)  /*!< Value 0x0000003D */
#define MPU_REGION_62   (0x3EUL)  /*!< Value 0x0000003E */
#define MPU_REGION_63   (0x3FUL)  /*!< Value 0x0000003F */
#define MPU_REGION_64   (0x40UL)  /*!< Value 0x00000040 */
#define MPU_REGION_65   (0x41UL)  /*!< Value 0x00000041 */
#define MPU_REGION_66   (0x42UL)  /*!< Value 0x00000042 */
#define MPU_REGION_67   (0x43UL)  /*!< Value 0x00000043 */
#define MPU_REGION_68   (0x44UL)  /*!< Value 0x00000044 */
#define MPU_REGION_69   (0x45UL)  /*!< Value 0x00000045 */
#define MPU_REGION_70   (0x46UL)  /*!< Value 0x00000046 */
#define MPU_REGION_71   (0x47UL)  /*!< Value 0x00000047 */
#define MPU_REGION_72   (0x48UL)  /*!< Value 0x00000048 */
#define MPU_REGION_73   (0x49UL)  /*!< Value 0x00000049 */
#define MPU_REGION_74   (0x4AUL)  /*!< Value 0x0000004A */
#define MPU_REGION_75   (0x4BUL)  /*!< Value 0x0000004B */
#define MPU_REGION_76   (0x4CUL)  /*!< Value 0x0000004C */
#define MPU_REGION_77   (0x4DUL)  /*!< Value 0x0000004D */
#define MPU_REGION_78   (0x4EUL)  /*!< Value 0x0000004E */
#define MPU_REGION_79   (0x4FUL)  /*!< Value 0x0000004F */
#define MPU_REGION_80   (0x50UL)  /*!< Value 0x00000050 */
#define MPU_REGION_81   (0x51UL)  /*!< Value 0x00000051 */
#define MPU_REGION_82   (0x52UL)  /*!< Value 0x00000052 */
#define MPU_REGION_83   (0x53UL)  /*!< Value 0x00000053 */
#define MPU_REGION_84   (0x54UL)  /*!< Value 0x00000054 */
#define MPU_REGION_85   (0x55UL)  /*!< Value 0x00000055 */
#define MPU_REGION_86   (0x56UL)  /*!< Value 0x00000056 */
#define MPU_REGION_87   (0x57UL)  /*!< Value 0x00000057 */
#define MPU_REGION_88   (0x58UL)  /*!< Value 0x00000058 */
#define MPU_REGION_89   (0x59UL)  /*!< Value 0x00000059 */
#define MPU_REGION_90   (0x5AUL)  /*!< Value 0x0000005A */
#define MPU_REGION_91   (0x5BUL)  /*!< Value 0x0000005B */
#define MPU_REGION_92   (0x5CUL)  /*!< Value 0x0000005C */
#define MPU_REGION_93   (0x5DUL)  /*!< Value 0x0000005D */
#define MPU_REGION_94   (0x5EUL)  /*!< Value 0x0000005E */
#define MPU_REGION_95   (0x5FUL)  /*!< Value 0x0000005F */
#define MPU_REGION_96   (0x60UL)  /*!< Value 0x00000060 */
#define MPU_REGION_97   (0x61UL)  /*!< Value 0x00000061 */
#define MPU_REGION_98   (0x62UL)  /*!< Value 0x00000062 */
#define MPU_REGION_99   (0x63UL)  /*!< Value 0x00000063 */
#define MPU_REGION_100  (0x64UL)  /*!< Value 0x00000064 */
#define MPU_REGION_101  (0x65UL)  /*!< Value 0x00000065 */
#define MPU_REGION_102  (0x66UL)  /*!< Value 0x00000066 */
#define MPU_REGION_103  (0x67UL)  /*!< Value 0x00000067 */
#define MPU_REGION_104  (0x68UL)  /*!< Value 0x00000068 */
#define MPU_REGION_105  (0x69UL)  /*!< Value 0x00000069 */
#define MPU_REGION_106  (0x6AUL)  /*!< Value 0x0000006A */
#define MPU_REGION_107  (0x6BUL)  /*!< Value 0x0000006B */
#define MPU_REGION_108  (0x6CUL)  /*!< Value 0x0000006C */
#define MPU_REGION_109  (0x6DUL)  /*!< Value 0x0000006D */
#define MPU_REGION_110  (0x6EUL)  /*!< Value 0x0000006E */
#define MPU_REGION_111  (0x6FUL)  /*!< Value 0x0000006F */
#define MPU_REGION_112  (0x70UL)  /*!< Value 0x00000070 */
#define MPU_REGION_113  (0x71UL)  /*!< Value 0x00000071 */
#define MPU_REGION_114  (0x72UL)  /*!< Value 0x00000072 */
#define MPU_REGION_115  (0x73UL)  /*!< Value 0x00000073 */
#define MPU_REGION_116  (0x74UL)  /*!< Value 0x00000074 */
#define MPU_REGION_117  (0x75UL)  /*!< Value 0x00000075 */
#define MPU_REGION_118  (0x76UL)  /*!< Value 0x00000076 */
#define MPU_REGION_119  (0x77UL)  /*!< Value 0x00000077 */
#define MPU_REGION_120  (0x78UL)  /*!< Value 0x00000078 */
#define MPU_REGION_121  (0x79UL)  /*!< Value 0x00000079 */
#define MPU_REGION_122  (0x7AUL)  /*!< Value 0x0000007A */
#define MPU_REGION_123  (0x7BUL)  /*!< Value 0x0000007B */
#define MPU_REGION_124  (0x7CUL)  /*!< Value 0x0000007C */
#define MPU_REGION_125  (0x7DUL)  /*!< Value 0x0000007D */
#define MPU_REGION_126  (0x7EUL)  /*!< Value 0x0000007E */
#define MPU_REGION_127  (0x7FUL)  /*!< Value 0x0000007F */
#define MPU_REGION_128  (0x80UL)  /*!< Value 0x00000080 */
#define MPU_REGION_129  (0x81UL)  /*!< Value 0x00000081 */
#define MPU_REGION_130  (0x82UL)  /*!< Value 0x00000082 */
#define MPU_REGION_131  (0x83UL)  /*!< Value 0x00000083 */
#define MPU_REGION_132  (0x84UL)  /*!< Value 0x00000084 */
#define MPU_REGION_133  (0x85UL)  /*!< Value 0x00000085 */
#define MPU_REGION_134  (0x86UL)  /*!< Value 0x00000086 */
#define MPU_REGION_135  (0x87UL)  /*!< Value 0x00000087 */
#define MPU_REGION_136  (0x88UL)  /*!< Value 0x00000088 */
#define MPU_REGION_137  (0x89UL)  /*!< Value 0x00000089 */
#define MPU_REGION_138  (0x8AUL)  /*!< Value 0x0000008A */
#define MPU_REGION_139  (0x8BUL)  /*!< Value 0x0000008B */
#define MPU_REGION_140  (0x8CUL)  /*!< Value 0x0000008C */
#define MPU_REGION_141  (0x8DUL)  /*!< Value 0x0000008D */
#define MPU_REGION_142  (0x8EUL)  /*!< Value 0x0000008E */
#define MPU_REGION_143  (0x8FUL)  /*!< Value 0x0000008F */
#define MPU_REGION_144  (0x90UL)  /*!< Value 0x00000090 */
#define MPU_REGION_145  (0x91UL)  /*!< Value 0x00000091 */
#define MPU_REGION_146  (0x92UL)  /*!< Value 0x00000092 */
#define MPU_REGION_147  (0x93UL)  /*!< Value 0x00000093 */
#define MPU_REGION_148  (0x94UL)  /*!< Value 0x00000094 */
#define MPU_REGION_149  (0x95UL)  /*!< Value 0x00000095 */
#define MPU_REGION_150  (0x96UL)  /*!< Value 0x00000096 */
#define MPU_REGION_151  (0x97UL)  /*!< Value 0x00000097 */
#define MPU_REGION_152  (0x98UL)  /*!< Value 0x00000098 */
#define MPU_REGION_153  (0x99UL)  /*!< Value 0x00000099 */
#define MPU_REGION_154  (0x9AUL)  /*!< Value 0x0000009A */
#define MPU_REGION_155  (0x9BUL)  /*!< Value 0x0000009B */
#define MPU_REGION_156  (0x9CUL)  /*!< Value 0x0000009C */
#define MPU_REGION_157  (0x9DUL)  /*!< Value 0x0000009D */
#define MPU_REGION_158  (0x9EUL)  /*!< Value 0x0000009E */
#define MPU_REGION_159  (0x9FUL)  /*!< Value 0x0000009F */
#define MPU_REGION_160  (0xA0UL)  /*!< Value 0x000000A0 */
#define MPU_REGION_161  (0xA1UL)  /*!< Value 0x000000A1 */
#define MPU_REGION_162  (0xA2UL)  /*!< Value 0x000000A2 */
#define MPU_REGION_163  (0xA3UL)  /*!< Value 0x000000A3 */
#define MPU_REGION_164  (0xA4UL)  /*!< Value 0x000000A4 */
#define MPU_REGION_165  (0xA5UL)  /*!< Value 0x000000A5 */
#define MPU_REGION_166  (0xA6UL)  /*!< Value 0x000000A6 */
#define MPU_REGION_167  (0xA7UL)  /*!< Value 0x000000A7 */
#define MPU_REGION_168  (0xA8UL)  /*!< Value 0x000000A8 */
#define MPU_REGION_169  (0xA9UL)  /*!< Value 0x000000A9 */
#define MPU_REGION_170  (0xAAUL)  /*!< Value 0x000000AA */
#define MPU_REGION_171  (0xABUL)  /*!< Value 0x000000AB */
#define MPU_REGION_172  (0xACUL)  /*!< Value 0x000000AC */
#define MPU_REGION_173  (0xADUL)  /*!< Value 0x000000AD */
#define MPU_REGION_174  (0xAEUL)  /*!< Value 0x000000AE */
#define MPU_REGION_175  (0xAFUL)  /*!< Value 0x000000AF */
#define MPU_REGION_176  (0xB0UL)  /*!< Value 0x000000B0 */
#define MPU_REGION_177  (0xB1UL)  /*!< Value 0x000000B1 */
#define MPU_REGION_178  (0xB2UL)  /*!< Value 0x000000B2 */
#define MPU_REGION_179  (0xB3UL)  /*!< Value 0x000000B3 */
#define MPU_REGION_180  (0xB4UL)  /*!< Value 0x000000B4 */
#define MPU_REGION_181  (0xB5UL)  /*!< Value 0x000000B5 */
#define MPU_REGION_182  (0xB6UL)  /*!< Value 0x000000B6 */
#define MPU_REGION_183  (0xB7UL)  /*!< Value 0x000000B7 */
#define MPU_REGION_184  (0xB8UL)  /*!< Value 0x000000B8 */
#define MPU_REGION_185  (0xB9UL)  /*!< Value 0x000000B9 */
#define MPU_REGION_186  (0xBAUL)  /*!< Value 0x000000BA */
#define MPU_REGION_187  (0xBBUL)  /*!< Value 0x000000BB */
#define MPU_REGION_188  (0xBCUL)  /*!< Value 0x000000BC */
#define MPU_REGION_189  (0xBDUL)  /*!< Value 0x000000BD */
#define MPU_REGION_190  (0xBEUL)  /*!< Value 0x000000BE */
#define MPU_REGION_191  (0xBFUL)  /*!< Value 0x000000BF */
#define MPU_REGION_192  (0xC0UL)  /*!< Value 0x000000C0 */
#define MPU_REGION_193  (0xC1UL)  /*!< Value 0x000000C1 */
#define MPU_REGION_194  (0xC2UL)  /*!< Value 0x000000C2 */
#define MPU_REGION_195  (0xC3UL)  /*!< Value 0x000000C3 */
#define MPU_REGION_196  (0xC4UL)  /*!< Value 0x000000C4 */
#define MPU_REGION_197  (0xC5UL)  /*!< Value 0x000000C5 */
#define MPU_REGION_198  (0xC6UL)  /*!< Value 0x000000C6 */
#define MPU_REGION_199  (0xC7UL)  /*!< Value 0x000000C7 */
#define MPU_REGION_200  (0xC8UL)  /*!< Value 0x000000C8 */
#define MPU_REGION_201  (0xC9UL)  /*!< Value 0x000000C9 */
#define MPU_REGION_202  (0xCAUL)  /*!< Value 0x000000CA */
#define MPU_REGION_203  (0xCBUL)  /*!< Value 0x000000CB */
#define MPU_REGION_204  (0xCCUL)  /*!< Value 0x000000CC */
#define MPU_REGION_205  (0xCDUL)  /*!< Value 0x000000CD */
#define MPU_REGION_206  (0xCEUL)  /*!< Value 0x000000CE */
#define MPU_REGION_207  (0xCFUL)  /*!< Value 0x000000CF */
#define MPU_REGION_208  (0xD0UL)  /*!< Value 0x000000D0 */
#define MPU_REGION_209  (0xD1UL)  /*!< Value 0x000000D1 */
#define MPU_REGION_210  (0xD2UL)  /*!< Value 0x000000D2 */
#define MPU_REGION_211  (0xD3UL)  /*!< Value 0x000000D3 */
#define MPU_REGION_212  (0xD4UL)  /*!< Value 0x000000D4 */
#define MPU_REGION_213  (0xD5UL)  /*!< Value 0x000000D5 */
#define MPU_REGION_214  (0xD6UL)  /*!< Value 0x000000D6 */
#define MPU_REGION_215  (0xD7UL)  /*!< Value 0x000000D7 */
#define MPU_REGION_216  (0xD8UL)  /*!< Value 0x000000D8 */
#define MPU_REGION_217  (0xD9UL)  /*!< Value 0x000000D9 */
#define MPU_REGION_218  (0xDAUL)  /*!< Value 0x000000DA */
#define MPU_REGION_219  (0xDBUL)  /*!< Value 0x000000DB */
#define MPU_REGION_220  (0xDCUL)  /*!< Value 0x000000DC */
#define MPU_REGION_221  (0xDDUL)  /*!< Value 0x000000DD */
#define MPU_REGION_222  (0xDEUL)  /*!< Value 0x000000DE */
#define MPU_REGION_223  (0xDFUL)  /*!< Value 0x000000DF */
#define MPU_REGION_224  (0xE0UL)  /*!< Value 0x000000E0 */
#define MPU_REGION_225  (0xE1UL)  /*!< Value 0x000000E1 */
#define MPU_REGION_226  (0xE2UL)  /*!< Value 0x000000E2 */
#define MPU_REGION_227  (0xE3UL)  /*!< Value 0x000000E3 */
#define MPU_REGION_228  (0xE4UL)  /*!< Value 0x000000E4 */
#define MPU_REGION_229  (0xE5UL)  /*!< Value 0x000000E5 */
#define MPU_REGION_230  (0xE6UL)  /*!< Value 0x000000E6 */
#define MPU_REGION_231  (0xE7UL)  /*!< Value 0x000000E7 */
#define MPU_REGION_232  (0xE8UL)  /*!< Value 0x000000E8 */
#define MPU_REGION_233  (0xE9UL)  /*!< Value 0x000000E9 */
#define MPU_REGION_234  (0xEAUL)  /*!< Value 0x000000EA */
#define MPU_REGION_235  (0xEBUL)  /*!< Value 0x000000EB */
#define MPU_REGION_236  (0xECUL)  /*!< Value 0x000000EC */
#define MPU_REGION_237  (0xEDUL)  /*!< Value 0x000000ED */
#define MPU_REGION_238  (0xEEUL)  /*!< Value 0x000000EE */
#define MPU_REGION_239  (0xEFUL)  /*!< Value 0x000000EF */
#define MPU_REGION_240  (0xF0UL)  /*!< Value 0x000000F0 */
#define MPU_REGION_241  (0xF1UL)  /*!< Value 0x000000F1 */
#define MPU_REGION_242  (0xF2UL)  /*!< Value 0x000000F2 */
#define MPU_REGION_243  (0xF3UL)  /*!< Value 0x000000F3 */
#define MPU_REGION_244  (0xF4UL)  /*!< Value 0x000000F4 */
#define MPU_REGION_245  (0xF5UL)  /*!< Value 0x000000F5 */
#define MPU_REGION_246  (0xF6UL)  /*!< Value 0x000000F6 */
#define MPU_REGION_247  (0xF7UL)  /*!< Value 0x000000F7 */
#define MPU_REGION_248  (0xF8UL)  /*!< Value 0x000000F8 */
#define MPU_REGION_249  (0xF9UL)  /*!< Value 0x000000F9 */
#define MPU_REGION_250  (0xFAUL)  /*!< Value 0x000000FA */
#define MPU_REGION_251  (0xFBUL)  /*!< Value 0x000000FB */
#define MPU_REGION_252  (0xFCUL)  /*!< Value 0x000000FC */
#define MPU_REGION_253  (0xFDUL)  /*!< Value 0x000000FD */
#define MPU_REGION_254  (0xFEUL)  /*!< Value 0x000000FE */
#define MPU_REGION_255  (0xFFUL)  /*!< Value 0x000000FF */

/*!< Region base address register */
#define MPU_RBAR_ADDR_OFFSET    (5U)
#define MPU_RBAR_ADDR_MASK      (0x7FFFFFFUL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Mask  0xFFFFFFE0 */
#define MPU_RBAR_ADDR_0         (0x0000001UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000020 */
#define MPU_RBAR_ADDR_1         (0x0000002UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000040 */
#define MPU_RBAR_ADDR_2         (0x0000004UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000080 */
#define MPU_RBAR_ADDR_3         (0x0000008UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000100 */
#define MPU_RBAR_ADDR_4         (0x0000010UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000200 */
#define MPU_RBAR_ADDR_5         (0x0000020UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000400 */
#define MPU_RBAR_ADDR_6         (0x0000040UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00000800 */
#define MPU_RBAR_ADDR_7         (0x0000080UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00001000 */
#define MPU_RBAR_ADDR_8         (0x0000100UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00002000 */
#define MPU_RBAR_ADDR_9         (0x0000200UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00004000 */
#define MPU_RBAR_ADDR_10        (0x0000400UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00008000 */
#define MPU_RBAR_ADDR_11        (0x0000800UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00010000 */
#define MPU_RBAR_ADDR_12        (0x0001000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00020000 */
#define MPU_RBAR_ADDR_13        (0x0002000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00040000 */
#define MPU_RBAR_ADDR_14        (0x0004000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00080000 */
#define MPU_RBAR_ADDR_15        (0x0008000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00100000 */
#define MPU_RBAR_ADDR_16        (0x0010000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00200000 */
#define MPU_RBAR_ADDR_17        (0x0020000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00400000 */
#define MPU_RBAR_ADDR_18        (0x0040000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x00800000 */
#define MPU_RBAR_ADDR_19        (0x0080000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x01000000 */
#define MPU_RBAR_ADDR_20        (0x0100000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x02000000 */
#define MPU_RBAR_ADDR_21        (0x0200000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x04000000 */
#define MPU_RBAR_ADDR_22        (0x0400000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x08000000 */
#define MPU_RBAR_ADDR_23        (0x0800000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x10000000 */
#define MPU_RBAR_ADDR_24        (0x1000000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x20000000 */
#define MPU_RBAR_ADDR_25        (0x2000000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x40000000 */
#define MPU_RBAR_ADDR_26        (0x4000000UL << REGISTER_FIELD_OFFSET(MPU, RBAR, ADDR))  /*!< Value 0x80000000 */

#define MPU_RBAR_VALID_OFFSET   (4U)
#define MPU_RBAR_VALID_MASK     (0x1UL << REGISTER_FIELD_OFFSET(MPU, RBAR, VALID))       /*!< Mask  0x00000010 */

#define MPU_RBAR_REGION_OFFSET  (0U)
#define MPU_RBAR_REGION_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MPU, RBAR, REGION))      /*!< Mask  0x0000000F */
#define MPU_RBAR_REGION_0       (0x1UL << REGISTER_FIELD_OFFSET(MPU, RBAR, REGION))      /*!< Value 0x00000001 */
#define MPU_RBAR_REGION_1       (0x2UL << REGISTER_FIELD_OFFSET(MPU, RBAR, REGION))      /*!< Value 0x00000002 */
#define MPU_RBAR_REGION_2       (0x4UL << REGISTER_FIELD_OFFSET(MPU, RBAR, REGION))      /*!< Value 0x00000004 */
#define MPU_RBAR_REGION_3       (0x8UL << REGISTER_FIELD_OFFSET(MPU, RBAR, REGION))      /*!< Value 0x00000008 */

// Values of register bit selecting the region to update
#define MPU_BASEADDRUPDATE_RNR   (0x0UL)  /*!< Value 0x00000000 - Apply the base address update to the region specified by RNR.REGION */
#define MPU_BASEADDRUPDATE_RBAR  (0x1UL)  /*!< Value 0x00000001 - Apply the base address update to the region specified by RBAR.REGION zero extended */

/*!< Region attribute and size register */
#define MPU_RASR_ATTRS_OFFSET   (16U)
#define MPU_RASR_ATTRS_MASK     (0xFFFFUL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Mask  0xFFFF0000 */
#define MPU_RASR_ATTRS_0        (0x0001UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00010000 */
#define MPU_RASR_ATTRS_1        (0x0002UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00020000 */
#define MPU_RASR_ATTRS_2        (0x0004UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00040000 */
#define MPU_RASR_ATTRS_3        (0x0008UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00080000 */
#define MPU_RASR_ATTRS_4        (0x0010UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00100000 */
#define MPU_RASR_ATTRS_5        (0x0020UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00200000 */
#define MPU_RASR_ATTRS_6        (0x0040UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00400000 */
#define MPU_RASR_ATTRS_7        (0x0080UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x00800000 */
#define MPU_RASR_ATTRS_8        (0x0100UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x01000000 */
#define MPU_RASR_ATTRS_9        (0x0200UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x02000000 */
#define MPU_RASR_ATTRS_10       (0x0400UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x04000000 */
#define MPU_RASR_ATTRS_11       (0x0800UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x08000000 */
#define MPU_RASR_ATTRS_12       (0x1000UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x10000000 */
#define MPU_RASR_ATTRS_13       (0x2000UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x20000000 */
#define MPU_RASR_ATTRS_14       (0x4000UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x40000000 */
#define MPU_RASR_ATTRS_15       (0x8000UL << REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS))  /*!< Value 0x80000000 */

#define MPU_RASR_SRD_OFFSET     (8U)
#define MPU_RASR_SRD_MASK       (0xFFUL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Mask  0x0000FF00 */
#define MPU_RASR_SRD_0          (0x01UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00000100 */
#define MPU_RASR_SRD_1          (0x02UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00000200 */
#define MPU_RASR_SRD_2          (0x04UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00000400 */
#define MPU_RASR_SRD_3          (0x08UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00000800 */
#define MPU_RASR_SRD_4          (0x10UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00001000 */
#define MPU_RASR_SRD_5          (0x20UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00002000 */
#define MPU_RASR_SRD_6          (0x40UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00004000 */
#define MPU_RASR_SRD_7          (0x80UL << REGISTER_FIELD_OFFSET(MPU, RASR, SRD))      /*!< Value 0x00008000 */

#define MPU_RASR_SIZE_OFFSET    (1U)
#define MPU_RASR_SIZE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(MPU, RASR, SIZE))      /*!< Mask  0x0000001E */
#define MPU_RASR_SIZE_0         (0x1UL << REGISTER_FIELD_OFFSET(MPU, RASR, SIZE))      /*!< Value 0x00000002 */
#define MPU_RASR_SIZE_1         (0x2UL << REGISTER_FIELD_OFFSET(MPU, RASR, SIZE))      /*!< Value 0x00000004 */
#define MPU_RASR_SIZE_2         (0x4UL << REGISTER_FIELD_OFFSET(MPU, RASR, SIZE))      /*!< Value 0x00000008 */
#define MPU_RASR_SIZE_3         (0x8UL << REGISTER_FIELD_OFFSET(MPU, RASR, SIZE))      /*!< Value 0x00000010 */

#define MPU_RASR_ENABLE_OFFSET  (0U)
#define MPU_RASR_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, RASR, ENABLE))    /*!< Mask  0x00000001 */

// Values of region attribute bits
#define MPU_ATTR_XN   (12U)
#define MPU_ATTR_AP   (8U)
#define MPU_ATTR_TEX  (3U)
#define MPU_ATTR_S    (2U)
#define MPU_ATTR_C    (1U)
#define MPU_ATTR_B    (0U)

// Values of region attribute register bits
#define MPU_REGIONATTRS_XN_OFFSET   (REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS) + MPU_ATTR_XN)
#define MPU_REGIONATTRS_XN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(MPU, REGIONATTRS, XN))   /*!< Mask  0x10000000 */

#define MPU_REGIONATTRS_AP_OFFSET   (REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS) + MPU_ATTR_AP)
#define MPU_REGIONATTRS_AP_MASK     (0x1UL << REGISTER_FIELD_OFFSET(MPU, REGIONATTRS, AP))   /*!< Mask  0x07000000 */

#define MPU_REGIONATTRS_TEX_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS) + MPU_ATTR_TEX)
#define MPU_REGIONATTRS_TEX_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, REGIONATTRS, TEX))  /*!< Mask  0x00380000 */

#define MPU_REGIONATTRS_S_OFFSET    (REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS) + MPU_ATTR_S)
#define MPU_REGIONATTRS_S_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MPU, REGIONATTRS, S))    /*!< Mask  0x00040000 */

#define MPU_REGIONATTRS_C_OFFSET    (REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS) + MPU_ATTR_C)
#define MPU_REGIONATTRS_C_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MPU, REGIONATTRS, C))    /*!< Mask  0x00020000 */

#define MPU_REGIONATTRS_B_OFFSET    (REGISTER_FIELD_OFFSET(MPU, RASR, ATTRS) + MPU_ATTR_B)
#define MPU_REGIONATTRS_B_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MPU, REGIONATTRS, B))    /*!< Mask  0x00010000 */

// Value of execute never register bit
#define MPU_EXECUTE_PERMITTED  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_EXECUTE_FORBIDDEN  (0x1UL)  /*!< Value 0x00000001 */

// Value of region access permission register
#define MPU_ACCESSPERMISSION_NONE                    (0x0UL)  /*!< Value 0x00000000 */
#define MPU_ACCESSPERMISSION_PRIVILEGED              (0x1UL)  /*!< Value 0x00000001 */
#define MPU_ACCESSPERMISSION_NOUNPRIVILEGEDWRACCESS  (0x2UL)  /*!< Value 0x00000002 */
#define MPU_ACCESSPERMISSION_FULL                    (0x3UL)  /*!< Value 0x00000003 */
#define MPU_ACCESSPERMISSION_PRIVILEGEDRO            (0x5UL)  /*!< Value 0x00000005 */
#define MPU_ACCESSPERMISSION_READONLY_6              (0x6UL)  /*!< Value 0x00000006 */
#define MPU_ACCESSPERMISSION_READONLY_7              (0x7UL)  /*!< Value 0x00000007 */

// Value of shareable register bit
#define MPU_REGION_NONSHAREABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_REGION_SHAREABLE     (0x1UL)  /*!< Value 0x00000001 */

// Value of cacheable register bit
#define MPU_REGION_NONCACHEABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_REGION_CACHEABLE     (0x1UL)  /*!< Value 0x00000001 */

// Values of subregion bits
#define MPU_SUBREGION_7  (7U)
#define MPU_SUBREGION_6  (6U)
#define MPU_SUBREGION_5  (5U)
#define MPU_SUBREGION_4  (4U)
#define MPU_SUBREGION_3  (3U)
#define MPU_SUBREGION_2  (2U)
#define MPU_SUBREGION_1  (1U)
#define MPU_SUBREGION_0  (0U)

// Values of subregion disable register bits
#define MPU_SUBREGION7_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_7)
#define MPU_SUBREGION7_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION7, ENABLE))             /*!< Mask  0x00008000 */

#define MPU_SUBREGION6_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_6)
#define MPU_SUBREGION6_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION6, ENABLE))             /*!< Mask  0x00004000 */

#define MPU_SUBREGION5_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_5)
#define MPU_SUBREGION5_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION5, ENABLE))             /*!< Mask  0x00002000 */

#define MPU_SUBREGION4_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_4)
#define MPU_SUBREGION4_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION4, ENABLE))             /*!< Mask  0x00001000 */

#define MPU_SUBREGION3_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_3)
#define MPU_SUBREGION3_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION3, ENABLE))             /*!< Mask  0x00000800 */

#define MPU_SUBREGION2_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_2)
#define MPU_SUBREGION2_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION2, ENABLE))             /*!< Mask  0x00000400 */

#define MPU_SUBREGION1_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_1)
#define MPU_SUBREGION1_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION1, ENABLE))             /*!< Mask  0x00000200 */

#define MPU_SUBREGION0_ENABLE_OFFSET  (REGISTER_FIELD_OFFSET(MPU, RASR, SRD) + MPU_SUBREGION_0)
#define MPU_SUBREGION0_ENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MPU, SUBREGION0, ENABLE))             /*!< Mask  0x00000100 */

// Value of subregion enable bit
#define MPU_SUBREGION_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define MPU_SUBREGION_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

// Value of region size register
#define MPU_REGIONSIZE_2BYTES    (0x0UL)  /*!< Value 0x00000000 */
#define MPU_REGIONSIZE_4BYTES    (0x1UL)  /*!< Value 0x00000001 */
#define MPU_REGIONSIZE_8BYTES    (0x2UL)  /*!< Value 0x00000002 */
#define MPU_REGIONSIZE_16BYTES   (0x3UL)  /*!< Value 0x00000003 */
#define MPU_REGIONSIZE_32BYTES   (0x4UL)  /*!< Value 0x00000004 */
#define MPU_REGIONSIZE_64BYTES   (0x5UL)  /*!< Value 0x00000005 */
#define MPU_REGIONSIZE_128BYTES  (0x6UL)  /*!< Value 0x00000006 */
#define MPU_REGIONSIZE_256BYTES  (0x7UL)  /*!< Value 0x00000007 */

// Values of region enable bit
#define MPU_REGION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MPU_REGION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

#define MPU_OFFSET 0xD90UL
#define MPU_BASE OFFSET_ADDRESS(SCS_BASE, MPU_OFFSET)
#define MPU REGISTER_PTR(mpu_regs, MPU_BASE)

/** @} */ // End of MPU group

/** @} */ // End of RegisterGroup group

#endif // MPU_REGISTERS_H
