#ifndef INTCTRL_REGISTERS_H
#define INTCTRL_REGISTERS_H
/**
 * @copyright
 * @file intctrlscs.h
 * @author Andrea Gianarda
 * @date 30th of March 2021
 * @brief Interrupt control registers in system control space (SCS) register
*/

#include <stdint.h>

#include "global/peripherals.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup IntCtrl Interrupt control registers in system control space (SCS)
 *  @brief Interrupt control registers in system control space (SCS) macros and structures
 *  @{
 */

typedef struct {
	WO uint32_t STIR;            /*!< Sofware trigger interrupt (STIR) (Offset 0x0)  */
	   uint32_t reserved0[11U];  /*!< Reserved                         (Offset 0x4 to 0x30)  */
} scs_int_regs;

/*!< Interrupt control registers in system control space (SCS) registers */
/*!< Software trigger interrupt register */
#define INTCTRL_STIR_INTID_OFFSET  (0U)
#define INTCTRL_STIR_INTID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(INTCTRL, STIR, INTID))  /*!< Mask  0x0000000F */

/*!< Available interrupts IDs */
#define SCS_INTID_0    (0x000UL)  /*!< Value 0x00000000 */
#define SCS_INTID_1    (0x001UL)  /*!< Value 0x00000001 */
#define SCS_INTID_2    (0x002UL)  /*!< Value 0x00000002 */
#define SCS_INTID_3    (0x003UL)  /*!< Value 0x00000003 */
#define SCS_INTID_4    (0x004UL)  /*!< Value 0x00000004 */
#define SCS_INTID_5    (0x005UL)  /*!< Value 0x00000005 */
#define SCS_INTID_6    (0x006UL)  /*!< Value 0x00000006 */
#define SCS_INTID_7    (0x007UL)  /*!< Value 0x00000007 */
#define SCS_INTID_8    (0x008UL)  /*!< Value 0x00000008 */
#define SCS_INTID_9    (0x009UL)  /*!< Value 0x00000009 */
#define SCS_INTID_10   (0x00AUL)  /*!< Value 0x0000000A */
#define SCS_INTID_11   (0x00BUL)  /*!< Value 0x0000000B */
#define SCS_INTID_12   (0x00CUL)  /*!< Value 0x0000000C */
#define SCS_INTID_13   (0x00DUL)  /*!< Value 0x0000000D */
#define SCS_INTID_14   (0x00EUL)  /*!< Value 0x0000000E */
#define SCS_INTID_15   (0x00FUL)  /*!< Value 0x0000000F */
#define SCS_INTID_16   (0x010UL)  /*!< Value 0x00000010 */
#define SCS_INTID_17   (0x011UL)  /*!< Value 0x00000011 */
#define SCS_INTID_18   (0x012UL)  /*!< Value 0x00000012 */
#define SCS_INTID_19   (0x013UL)  /*!< Value 0x00000013 */
#define SCS_INTID_20   (0x014UL)  /*!< Value 0x00000014 */
#define SCS_INTID_21   (0x015UL)  /*!< Value 0x00000015 */
#define SCS_INTID_22   (0x016UL)  /*!< Value 0x00000016 */
#define SCS_INTID_23   (0x017UL)  /*!< Value 0x00000017 */
#define SCS_INTID_24   (0x018UL)  /*!< Value 0x00000018 */
#define SCS_INTID_25   (0x019UL)  /*!< Value 0x00000019 */
#define SCS_INTID_26   (0x01AUL)  /*!< Value 0x0000001A */
#define SCS_INTID_27   (0x01BUL)  /*!< Value 0x0000001B */
#define SCS_INTID_28   (0x01CUL)  /*!< Value 0x0000001C */
#define SCS_INTID_29   (0x01DUL)  /*!< Value 0x0000001D */
#define SCS_INTID_30   (0x01EUL)  /*!< Value 0x0000001E */
#define SCS_INTID_31   (0x01FUL)  /*!< Value 0x0000001F */
#define SCS_INTID_32   (0x020UL)  /*!< Value 0x00000020 */
#define SCS_INTID_33   (0x021UL)  /*!< Value 0x00000021 */
#define SCS_INTID_34   (0x022UL)  /*!< Value 0x00000022 */
#define SCS_INTID_35   (0x023UL)  /*!< Value 0x00000023 */
#define SCS_INTID_36   (0x024UL)  /*!< Value 0x00000024 */
#define SCS_INTID_37   (0x025UL)  /*!< Value 0x00000025 */
#define SCS_INTID_38   (0x026UL)  /*!< Value 0x00000026 */
#define SCS_INTID_39   (0x027UL)  /*!< Value 0x00000027 */
#define SCS_INTID_40   (0x028UL)  /*!< Value 0x00000028 */
#define SCS_INTID_41   (0x029UL)  /*!< Value 0x00000029 */
#define SCS_INTID_42   (0x02AUL)  /*!< Value 0x0000002A */
#define SCS_INTID_43   (0x02BUL)  /*!< Value 0x0000002B */
#define SCS_INTID_44   (0x02CUL)  /*!< Value 0x0000002C */
#define SCS_INTID_45   (0x02DUL)  /*!< Value 0x0000002D */
#define SCS_INTID_46   (0x02EUL)  /*!< Value 0x0000002E */
#define SCS_INTID_47   (0x02FUL)  /*!< Value 0x0000002F */
#define SCS_INTID_48   (0x030UL)  /*!< Value 0x00000030 */
#define SCS_INTID_49   (0x031UL)  /*!< Value 0x00000031 */
#define SCS_INTID_50   (0x032UL)  /*!< Value 0x00000032 */
#define SCS_INTID_51   (0x033UL)  /*!< Value 0x00000033 */
#define SCS_INTID_52   (0x034UL)  /*!< Value 0x00000034 */
#define SCS_INTID_53   (0x035UL)  /*!< Value 0x00000035 */
#define SCS_INTID_54   (0x036UL)  /*!< Value 0x00000036 */
#define SCS_INTID_55   (0x037UL)  /*!< Value 0x00000037 */
#define SCS_INTID_56   (0x038UL)  /*!< Value 0x00000038 */
#define SCS_INTID_57   (0x039UL)  /*!< Value 0x00000039 */
#define SCS_INTID_58   (0x03AUL)  /*!< Value 0x0000003A */
#define SCS_INTID_59   (0x03BUL)  /*!< Value 0x0000003B */
#define SCS_INTID_60   (0x03CUL)  /*!< Value 0x0000003C */
#define SCS_INTID_61   (0x03DUL)  /*!< Value 0x0000003D */
#define SCS_INTID_62   (0x03EUL)  /*!< Value 0x0000003E */
#define SCS_INTID_63   (0x03FUL)  /*!< Value 0x0000003F */
#define SCS_INTID_64   (0x040UL)  /*!< Value 0x00000040 */
#define SCS_INTID_65   (0x041UL)  /*!< Value 0x00000041 */
#define SCS_INTID_66   (0x042UL)  /*!< Value 0x00000042 */
#define SCS_INTID_67   (0x043UL)  /*!< Value 0x00000043 */
#define SCS_INTID_68   (0x044UL)  /*!< Value 0x00000044 */
#define SCS_INTID_69   (0x045UL)  /*!< Value 0x00000045 */
#define SCS_INTID_70   (0x046UL)  /*!< Value 0x00000046 */
#define SCS_INTID_71   (0x047UL)  /*!< Value 0x00000047 */
#define SCS_INTID_72   (0x048UL)  /*!< Value 0x00000048 */
#define SCS_INTID_73   (0x049UL)  /*!< Value 0x00000049 */
#define SCS_INTID_74   (0x04AUL)  /*!< Value 0x0000004A */
#define SCS_INTID_75   (0x04BUL)  /*!< Value 0x0000004B */
#define SCS_INTID_76   (0x04CUL)  /*!< Value 0x0000004C */
#define SCS_INTID_77   (0x04DUL)  /*!< Value 0x0000004D */
#define SCS_INTID_78   (0x04EUL)  /*!< Value 0x0000004E */
#define SCS_INTID_79   (0x04FUL)  /*!< Value 0x0000004F */
#define SCS_INTID_80   (0x050UL)  /*!< Value 0x00000050 */
#define SCS_INTID_81   (0x051UL)  /*!< Value 0x00000051 */
#define SCS_INTID_82   (0x052UL)  /*!< Value 0x00000052 */
#define SCS_INTID_83   (0x053UL)  /*!< Value 0x00000053 */
#define SCS_INTID_84   (0x054UL)  /*!< Value 0x00000054 */
#define SCS_INTID_85   (0x055UL)  /*!< Value 0x00000055 */
#define SCS_INTID_86   (0x056UL)  /*!< Value 0x00000056 */
#define SCS_INTID_87   (0x057UL)  /*!< Value 0x00000057 */
#define SCS_INTID_88   (0x058UL)  /*!< Value 0x00000058 */
#define SCS_INTID_89   (0x059UL)  /*!< Value 0x00000059 */
#define SCS_INTID_90   (0x05AUL)  /*!< Value 0x0000005A */
#define SCS_INTID_91   (0x05BUL)  /*!< Value 0x0000005B */
#define SCS_INTID_92   (0x05CUL)  /*!< Value 0x0000005C */
#define SCS_INTID_93   (0x05DUL)  /*!< Value 0x0000005D */
#define SCS_INTID_94   (0x05EUL)  /*!< Value 0x0000005E */
#define SCS_INTID_95   (0x05FUL)  /*!< Value 0x0000005F */
#define SCS_INTID_96   (0x060UL)  /*!< Value 0x00000060 */
#define SCS_INTID_97   (0x061UL)  /*!< Value 0x00000061 */
#define SCS_INTID_98   (0x062UL)  /*!< Value 0x00000062 */
#define SCS_INTID_99   (0x063UL)  /*!< Value 0x00000063 */
#define SCS_INTID_100  (0x064UL)  /*!< Value 0x00000064 */
#define SCS_INTID_101  (0x065UL)  /*!< Value 0x00000065 */
#define SCS_INTID_102  (0x066UL)  /*!< Value 0x00000066 */
#define SCS_INTID_103  (0x067UL)  /*!< Value 0x00000067 */
#define SCS_INTID_104  (0x068UL)  /*!< Value 0x00000068 */
#define SCS_INTID_105  (0x069UL)  /*!< Value 0x00000069 */
#define SCS_INTID_106  (0x06AUL)  /*!< Value 0x0000006A */
#define SCS_INTID_107  (0x06BUL)  /*!< Value 0x0000006B */
#define SCS_INTID_108  (0x06CUL)  /*!< Value 0x0000006C */
#define SCS_INTID_109  (0x06DUL)  /*!< Value 0x0000006D */
#define SCS_INTID_110  (0x06EUL)  /*!< Value 0x0000006E */
#define SCS_INTID_111  (0x06FUL)  /*!< Value 0x0000006F */
#define SCS_INTID_112  (0x070UL)  /*!< Value 0x00000070 */
#define SCS_INTID_113  (0x071UL)  /*!< Value 0x00000071 */
#define SCS_INTID_114  (0x072UL)  /*!< Value 0x00000072 */
#define SCS_INTID_115  (0x073UL)  /*!< Value 0x00000073 */
#define SCS_INTID_116  (0x074UL)  /*!< Value 0x00000074 */
#define SCS_INTID_117  (0x075UL)  /*!< Value 0x00000075 */
#define SCS_INTID_118  (0x076UL)  /*!< Value 0x00000076 */
#define SCS_INTID_119  (0x077UL)  /*!< Value 0x00000077 */
#define SCS_INTID_120  (0x078UL)  /*!< Value 0x00000078 */
#define SCS_INTID_121  (0x079UL)  /*!< Value 0x00000079 */
#define SCS_INTID_122  (0x07AUL)  /*!< Value 0x0000007A */
#define SCS_INTID_123  (0x07BUL)  /*!< Value 0x0000007B */
#define SCS_INTID_124  (0x07CUL)  /*!< Value 0x0000007C */
#define SCS_INTID_125  (0x07DUL)  /*!< Value 0x0000007D */
#define SCS_INTID_126  (0x07EUL)  /*!< Value 0x0000007E */
#define SCS_INTID_127  (0x07FUL)  /*!< Value 0x0000007F */
#define SCS_INTID_128  (0x080UL)  /*!< Value 0x00000080 */
#define SCS_INTID_129  (0x081UL)  /*!< Value 0x00000081 */
#define SCS_INTID_130  (0x082UL)  /*!< Value 0x00000082 */
#define SCS_INTID_131  (0x083UL)  /*!< Value 0x00000083 */
#define SCS_INTID_132  (0x084UL)  /*!< Value 0x00000084 */
#define SCS_INTID_133  (0x085UL)  /*!< Value 0x00000085 */
#define SCS_INTID_134  (0x086UL)  /*!< Value 0x00000086 */
#define SCS_INTID_135  (0x087UL)  /*!< Value 0x00000087 */
#define SCS_INTID_136  (0x088UL)  /*!< Value 0x00000088 */
#define SCS_INTID_137  (0x089UL)  /*!< Value 0x00000089 */
#define SCS_INTID_138  (0x08AUL)  /*!< Value 0x0000008A */
#define SCS_INTID_139  (0x08BUL)  /*!< Value 0x0000008B */
#define SCS_INTID_140  (0x08CUL)  /*!< Value 0x0000008C */
#define SCS_INTID_141  (0x08DUL)  /*!< Value 0x0000008D */
#define SCS_INTID_142  (0x08EUL)  /*!< Value 0x0000008E */
#define SCS_INTID_143  (0x08FUL)  /*!< Value 0x0000008F */
#define SCS_INTID_144  (0x090UL)  /*!< Value 0x00000090 */
#define SCS_INTID_145  (0x091UL)  /*!< Value 0x00000091 */
#define SCS_INTID_146  (0x092UL)  /*!< Value 0x00000092 */
#define SCS_INTID_147  (0x093UL)  /*!< Value 0x00000093 */
#define SCS_INTID_148  (0x094UL)  /*!< Value 0x00000094 */
#define SCS_INTID_149  (0x095UL)  /*!< Value 0x00000095 */
#define SCS_INTID_150  (0x096UL)  /*!< Value 0x00000096 */
#define SCS_INTID_151  (0x097UL)  /*!< Value 0x00000097 */
#define SCS_INTID_152  (0x098UL)  /*!< Value 0x00000098 */
#define SCS_INTID_153  (0x099UL)  /*!< Value 0x00000099 */
#define SCS_INTID_154  (0x09AUL)  /*!< Value 0x0000009A */
#define SCS_INTID_155  (0x09BUL)  /*!< Value 0x0000009B */
#define SCS_INTID_156  (0x09CUL)  /*!< Value 0x0000009C */
#define SCS_INTID_157  (0x09DUL)  /*!< Value 0x0000009D */
#define SCS_INTID_158  (0x09EUL)  /*!< Value 0x0000009E */
#define SCS_INTID_159  (0x09FUL)  /*!< Value 0x0000009F */
#define SCS_INTID_160  (0x0A0UL)  /*!< Value 0x000000A0 */
#define SCS_INTID_161  (0x0A1UL)  /*!< Value 0x000000A1 */
#define SCS_INTID_162  (0x0A2UL)  /*!< Value 0x000000A2 */
#define SCS_INTID_163  (0x0A3UL)  /*!< Value 0x000000A3 */
#define SCS_INTID_164  (0x0A4UL)  /*!< Value 0x000000A4 */
#define SCS_INTID_165  (0x0A5UL)  /*!< Value 0x000000A5 */
#define SCS_INTID_166  (0x0A6UL)  /*!< Value 0x000000A6 */
#define SCS_INTID_167  (0x0A7UL)  /*!< Value 0x000000A7 */
#define SCS_INTID_168  (0x0A8UL)  /*!< Value 0x000000A8 */
#define SCS_INTID_169  (0x0A9UL)  /*!< Value 0x000000A9 */
#define SCS_INTID_170  (0x0AAUL)  /*!< Value 0x000000AA */
#define SCS_INTID_171  (0x0ABUL)  /*!< Value 0x000000AB */
#define SCS_INTID_172  (0x0ACUL)  /*!< Value 0x000000AC */
#define SCS_INTID_173  (0x0ADUL)  /*!< Value 0x000000AD */
#define SCS_INTID_174  (0x0AEUL)  /*!< Value 0x000000AE */
#define SCS_INTID_175  (0x0AFUL)  /*!< Value 0x000000AF */
#define SCS_INTID_176  (0x0B0UL)  /*!< Value 0x000000B0 */
#define SCS_INTID_177  (0x0B1UL)  /*!< Value 0x000000B1 */
#define SCS_INTID_178  (0x0B2UL)  /*!< Value 0x000000B2 */
#define SCS_INTID_179  (0x0B3UL)  /*!< Value 0x000000B3 */
#define SCS_INTID_180  (0x0B4UL)  /*!< Value 0x000000B4 */
#define SCS_INTID_181  (0x0B5UL)  /*!< Value 0x000000B5 */
#define SCS_INTID_182  (0x0B6UL)  /*!< Value 0x000000B6 */
#define SCS_INTID_183  (0x0B7UL)  /*!< Value 0x000000B7 */
#define SCS_INTID_184  (0x0B8UL)  /*!< Value 0x000000B8 */
#define SCS_INTID_185  (0x0B9UL)  /*!< Value 0x000000B9 */
#define SCS_INTID_186  (0x0BAUL)  /*!< Value 0x000000BA */
#define SCS_INTID_187  (0x0BBUL)  /*!< Value 0x000000BB */
#define SCS_INTID_188  (0x0BCUL)  /*!< Value 0x000000BC */
#define SCS_INTID_189  (0x0BDUL)  /*!< Value 0x000000BD */
#define SCS_INTID_190  (0x0BEUL)  /*!< Value 0x000000BE */
#define SCS_INTID_191  (0x0BFUL)  /*!< Value 0x000000BF */
#define SCS_INTID_192  (0x0C0UL)  /*!< Value 0x000000C0 */
#define SCS_INTID_193  (0x0C1UL)  /*!< Value 0x000000C1 */
#define SCS_INTID_194  (0x0C2UL)  /*!< Value 0x000000C2 */
#define SCS_INTID_195  (0x0C3UL)  /*!< Value 0x000000C3 */
#define SCS_INTID_196  (0x0C4UL)  /*!< Value 0x000000C4 */
#define SCS_INTID_197  (0x0C5UL)  /*!< Value 0x000000C5 */
#define SCS_INTID_198  (0x0C6UL)  /*!< Value 0x000000C6 */
#define SCS_INTID_199  (0x0C7UL)  /*!< Value 0x000000C7 */
#define SCS_INTID_200  (0x0C8UL)  /*!< Value 0x000000C8 */
#define SCS_INTID_201  (0x0C9UL)  /*!< Value 0x000000C9 */
#define SCS_INTID_202  (0x0CAUL)  /*!< Value 0x000000CA */
#define SCS_INTID_203  (0x0CBUL)  /*!< Value 0x000000CB */
#define SCS_INTID_204  (0x0CCUL)  /*!< Value 0x000000CC */
#define SCS_INTID_205  (0x0CDUL)  /*!< Value 0x000000CD */
#define SCS_INTID_206  (0x0CEUL)  /*!< Value 0x000000CE */
#define SCS_INTID_207  (0x0CFUL)  /*!< Value 0x000000CF */
#define SCS_INTID_208  (0x0D0UL)  /*!< Value 0x000000D0 */
#define SCS_INTID_209  (0x0D1UL)  /*!< Value 0x000000D1 */
#define SCS_INTID_210  (0x0D2UL)  /*!< Value 0x000000D2 */
#define SCS_INTID_211  (0x0D3UL)  /*!< Value 0x000000D3 */
#define SCS_INTID_212  (0x0D4UL)  /*!< Value 0x000000D4 */
#define SCS_INTID_213  (0x0D5UL)  /*!< Value 0x000000D5 */
#define SCS_INTID_214  (0x0D6UL)  /*!< Value 0x000000D6 */
#define SCS_INTID_215  (0x0D7UL)  /*!< Value 0x000000D7 */
#define SCS_INTID_216  (0x0D8UL)  /*!< Value 0x000000D8 */
#define SCS_INTID_217  (0x0D9UL)  /*!< Value 0x000000D9 */
#define SCS_INTID_218  (0x0DAUL)  /*!< Value 0x000000DA */
#define SCS_INTID_219  (0x0DBUL)  /*!< Value 0x000000DB */
#define SCS_INTID_220  (0x0DCUL)  /*!< Value 0x000000DC */
#define SCS_INTID_221  (0x0DDUL)  /*!< Value 0x000000DD */
#define SCS_INTID_222  (0x0DEUL)  /*!< Value 0x000000DE */
#define SCS_INTID_223  (0x0DFUL)  /*!< Value 0x000000DF */
#define SCS_INTID_224  (0x0E0UL)  /*!< Value 0x000000E0 */
#define SCS_INTID_225  (0x0E1UL)  /*!< Value 0x000000E1 */
#define SCS_INTID_226  (0x0E2UL)  /*!< Value 0x000000E2 */
#define SCS_INTID_227  (0x0E3UL)  /*!< Value 0x000000E3 */
#define SCS_INTID_228  (0x0E4UL)  /*!< Value 0x000000E4 */
#define SCS_INTID_229  (0x0E5UL)  /*!< Value 0x000000E5 */
#define SCS_INTID_230  (0x0E6UL)  /*!< Value 0x000000E6 */
#define SCS_INTID_231  (0x0E7UL)  /*!< Value 0x000000E7 */
#define SCS_INTID_232  (0x0E8UL)  /*!< Value 0x000000E8 */
#define SCS_INTID_233  (0x0E9UL)  /*!< Value 0x000000E9 */
#define SCS_INTID_234  (0x0EAUL)  /*!< Value 0x000000EA */
#define SCS_INTID_235  (0x0EBUL)  /*!< Value 0x000000EB */
#define SCS_INTID_236  (0x0ECUL)  /*!< Value 0x000000EC */
#define SCS_INTID_237  (0x0EDUL)  /*!< Value 0x000000ED */
#define SCS_INTID_238  (0x0EEUL)  /*!< Value 0x000000EE */
#define SCS_INTID_239  (0x0EFUL)  /*!< Value 0x000000EF */
#define SCS_INTID_240  (0x0F0UL)  /*!< Value 0x000000F0 */
#define SCS_INTID_241  (0x0F1UL)  /*!< Value 0x000000F1 */
#define SCS_INTID_242  (0x0F2UL)  /*!< Value 0x000000F2 */
#define SCS_INTID_243  (0x0F3UL)  /*!< Value 0x000000F3 */
#define SCS_INTID_244  (0x0F4UL)  /*!< Value 0x000000F4 */
#define SCS_INTID_245  (0x0F5UL)  /*!< Value 0x000000F5 */
#define SCS_INTID_246  (0x0F6UL)  /*!< Value 0x000000F6 */
#define SCS_INTID_247  (0x0F7UL)  /*!< Value 0x000000F7 */
#define SCS_INTID_248  (0x0F8UL)  /*!< Value 0x000000F8 */
#define SCS_INTID_249  (0x0F9UL)  /*!< Value 0x000000F9 */
#define SCS_INTID_250  (0x0FAUL)  /*!< Value 0x000000FA */
#define SCS_INTID_251  (0x0FBUL)  /*!< Value 0x000000FB */
#define SCS_INTID_252  (0x0FCUL)  /*!< Value 0x000000FC */
#define SCS_INTID_253  (0x0FDUL)  /*!< Value 0x000000FD */
#define SCS_INTID_254  (0x0FEUL)  /*!< Value 0x000000FE */
#define SCS_INTID_255  (0x0FFUL)  /*!< Value 0x000000FF */

#define INTCTRL_OFFSET 0xF00
#define INTCTRL_BASE (SCS_BASE + INTCTRL_OFFSET)
#define INTCTRL REGISTER_PTR(scs_int_regs, INTCTRL_BASE)

/** @} */ // End of IntCtrl group

/** @} */ // End of RegisterGroup group

#endif // INTCTRL_REGISTERS_H
