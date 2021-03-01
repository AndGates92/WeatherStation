#ifndef FPB_H
#define FPB_H
/**
 * @copyright
 * @file fpb.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Flash patch and breakpoint (FPB) global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup FPB Flash patch and breakpoint (FPB) macros
 *  @brief Flash patch and breakpoint (FPB) macros
 *  @{
 */

typedef struct {
	RW uint32_t CTRL;             /*!< Control register                      (Offset 0x0)            */
	RW uint32_t REMAP;            /*!< Remap register                        (Offset 0x4)            */
	RW uint32_t COMP0;            /*!< Comparator 0 register                 (Offset 0x8)            */
	RW uint32_t COMP1;            /*!< Comparator 1 register                 (Offset 0xC)            */
	RW uint32_t COMP2;            /*!< Comparator 2 register                 (Offset 0x10)           */
	RW uint32_t COMP3;            /*!< Comparator 3 register                 (Offset 0x14)           */
	RW uint32_t COMP4;            /*!< Comparator 4 register                 (Offset 0x18)           */
	RW uint32_t COMP5;            /*!< Comparator 5 register                 (Offset 0x1C)           */
	RW uint32_t COMP6;            /*!< Comparator 6 register                 (Offset 0x20)           */
	RW uint32_t COMP7;            /*!< Comparator 7 register                 (Offset 0x24)           */
	   uint32_t reserved0[994U];  /*!< Reserved                              (Offset 0x28 to 0xFAC)  */
	WO uint32_t LAR;              /*!< CoreSight lock access register        (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register        (Offset 0xFB4)          */
	   uint32_t reserved1[6U];    /*!< Reserved                              (Offset 0xFB8 to 0xFCC) */
	RO uint32_t PIDR4;            /*!< Peripheral identification 4 register  (Offset 0xFD0)          */
	RO uint32_t PIDR5;            /*!< Peripheral identification 5 register  (Offset 0xFD4)          */
	RO uint32_t PIDR6;            /*!< Peripheral identification 6 register  (Offset 0xFD8)          */
	RO uint32_t PIDR7;            /*!< Peripheral identification 7 register  (Offset 0xFDC)          */
	RO uint32_t PIDR0;            /*!< Peripheral identification 0 register  (Offset 0xFE0)          */
	RO uint32_t PIDR1;            /*!< Peripheral identification 1 register  (Offset 0xFE4)          */
	RO uint32_t PIDR2;            /*!< Peripheral identification 2 register  (Offset 0xFE8)          */
	RO uint32_t PIDR3;            /*!< Peripheral identification 3 register  (Offset 0xFEC)          */
	RO uint32_t CIDR0;            /*!< Component identification 0 register   (Offset 0xFF0)          */
	RO uint32_t CIDR1;            /*!< Component identification 1 register   (Offset 0xFF4)          */
	RO uint32_t CIDR2;            /*!< Component identification 2 register   (Offset 0xFF8)          */
	RO uint32_t CIDR3;            /*!< Component identification 3 register   (Offset 0xFFC)          */
} fpb_regs;

/*!< Flash patch and breakpoint (FPB) unit registers in private peripheral bus (PPB) */
/*!< Control register */
#define FPB_CTRL_REV_OFFSET           (28U)
#define FPB_CTRL_REV_MASK             (0xFUL << REGISTER_FIELD_OFFSET(FPB, CTRL, REV))           /*!< Mask  0xF0000000 */
#define FPB_CTRL_REV_0                (0x1UL << REGISTER_FIELD_OFFSET(FPB, CTRL, REV))           /*!< Value 0x10000000 */
#define FPB_CTRL_REV_1                (0x2UL << REGISTER_FIELD_OFFSET(FPB, CTRL, REV))           /*!< Value 0x20000000 */
#define FPB_CTRL_REV_2                (0x4UL << REGISTER_FIELD_OFFSET(FPB, CTRL, REV))           /*!< Value 0x40000000 */
#define FPB_CTRL_REV_3                (0x8UL << REGISTER_FIELD_OFFSET(FPB, CTRL, REV))           /*!< Value 0x80000000 */

#define FPB_CTRL_NUM_CODE_6_4_OFFSET  (12U)
#define FPB_CTRL_NUM_CODE_6_4_MASK    (0x7UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_6_4))  /*!< Mask  0x00007000 */
#define FPB_CTRL_NUM_CODE_6_4_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_6_4))  /*!< Value 0x00001000 */
#define FPB_CTRL_NUM_CODE_6_4_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_6_4))  /*!< Value 0x00002000 */
#define FPB_CTRL_NUM_CODE_6_4_2       (0x4UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_6_4))  /*!< Value 0x00004000 */

#define FPB_CTRL_NUM_LIT_OFFSET       (8U)
#define FPB_CTRL_NUM_LIT_MASK         (0xFUL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_LIT))       /*!< Mask  0x00000F00 */
#define FPB_CTRL_NUM_LIT_0            (0x1UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_LIT))       /*!< Value 0x00000100 */
#define FPB_CTRL_NUM_LIT_1            (0x2UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_LIT))       /*!< Value 0x00000200 */
#define FPB_CTRL_NUM_LIT_2            (0x4UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_LIT))       /*!< Value 0x00000400 */
#define FPB_CTRL_NUM_LIT_3            (0x8UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_LIT))       /*!< Value 0x00000800 */

#define FPB_CTRL_NUM_CODE_3_0_OFFSET  (4U)
#define FPB_CTRL_NUM_CODE_3_0_MASK    (0xFUL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_3_0))  /*!< Mask  0x000000F0 */
#define FPB_CTRL_NUM_CODE_3_0_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_3_0))  /*!< Value 0x00000010 */
#define FPB_CTRL_NUM_CODE_3_0_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_3_0))  /*!< Value 0x00000020 */
#define FPB_CTRL_NUM_CODE_3_0_2       (0x4UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_3_0))  /*!< Value 0x00000040 */
#define FPB_CTRL_NUM_CODE_3_0_3       (0x8UL << REGISTER_FIELD_OFFSET(FPB, CTRL, NUM_CODE_3_0))  /*!< Value 0x00000080 */

#define FPB_CTRL_KEY_OFFSET           (1U)
#define FPB_CTRL_KEY_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FPB, CTRL, KEY))           /*!< Mask  0x00000002 */

#define FPB_CTRL_ENABLE_OFFSET        (0U)
#define FPB_CTRL_ENABLE_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FPB, CTRL, ENABLE))        /*!< Mask  0x00000001 */

// Values of flash patch and breakpoint (FPB) unit architecture revision select bit
#define FPB_REVISION_VERSION1  (0x0UL)  /*!< Value 0x00000000 */
#define FPB_REVISION_VERSION2  (0x1UL)  /*!< Value 0x00000001 - support breakpoints on any location in the 4GB address range */

// Values of the register storing bits[6:4] of the number of instruction address comparators (NUM_CODE)
#define FPB_NUMINSTRADDRCOMP_6_4_0   (0x0UL)  /*!< Value 0x00000000 */
#define FPB_NUMINSTRADDRCOMP_6_4_1   (0x1UL)  /*!< Value 0x00000001 */
#define FPB_NUMINSTRADDRCOMP_6_4_2   (0x2UL)  /*!< Value 0x00000002 */
#define FPB_NUMINSTRADDRCOMP_6_4_3   (0x3UL)  /*!< Value 0x00000003 */
#define FPB_NUMINSTRADDRCOMP_6_4_4   (0x4UL)  /*!< Value 0x00000004 */
#define FPB_NUMINSTRADDRCOMP_6_4_5   (0x5UL)  /*!< Value 0x00000005 */
#define FPB_NUMINSTRADDRCOMP_6_4_6   (0x6UL)  /*!< Value 0x00000006 */
#define FPB_NUMINSTRADDRCOMP_6_4_7   (0x7UL)  /*!< Value 0x00000007 */

// Values of the register storing the number of literal address comparator supported starting from the number of instruction address comparators (NUM_CODE) upwards
#define FPB_NUMLITERALADDRCOMP_0   (0x0UL)  /*!< Value 0x00000000 */
#define FPB_NUMLITERALADDRCOMP_1   (0x1UL)  /*!< Value 0x00000001 */
#define FPB_NUMLITERALADDRCOMP_2   (0x2UL)  /*!< Value 0x00000002 */
#define FPB_NUMLITERALADDRCOMP_3   (0x3UL)  /*!< Value 0x00000003 */
#define FPB_NUMLITERALADDRCOMP_4   (0x4UL)  /*!< Value 0x00000004 */
#define FPB_NUMLITERALADDRCOMP_5   (0x5UL)  /*!< Value 0x00000005 */
#define FPB_NUMLITERALADDRCOMP_6   (0x6UL)  /*!< Value 0x00000006 */
#define FPB_NUMLITERALADDRCOMP_7   (0x7UL)  /*!< Value 0x00000007 */
#define FPB_NUMLITERALADDRCOMP_8   (0x8UL)  /*!< Value 0x00000008 */
#define FPB_NUMLITERALADDRCOMP_9   (0x9UL)  /*!< Value 0x00000009 */
#define FPB_NUMLITERALADDRCOMP_10  (0xAUL)  /*!< Value 0x0000000A */
#define FPB_NUMLITERALADDRCOMP_11  (0xBUL)  /*!< Value 0x0000000B */
#define FPB_NUMLITERALADDRCOMP_12  (0xCUL)  /*!< Value 0x0000000C */
#define FPB_NUMLITERALADDRCOMP_13  (0xDUL)  /*!< Value 0x0000000D */
#define FPB_NUMLITERALADDRCOMP_14  (0xEUL)  /*!< Value 0x0000000E */
#define FPB_NUMLITERALADDRCOMP_15  (0xFUL)  /*!< Value 0x0000000F */

// Values of the register storing bits[3:0] of the number of instruction address comparators (NUM_CODE)
#define FPB_NUMINSTRADDRCOMP_3_0_0   (0x0UL)  /*!< Value 0x00000000 */
#define FPB_NUMINSTRADDRCOMP_3_0_1   (0x1UL)  /*!< Value 0x00000001 */
#define FPB_NUMINSTRADDRCOMP_3_0_2   (0x2UL)  /*!< Value 0x00000002 */
#define FPB_NUMINSTRADDRCOMP_3_0_3   (0x3UL)  /*!< Value 0x00000003 */
#define FPB_NUMINSTRADDRCOMP_3_0_4   (0x4UL)  /*!< Value 0x00000004 */
#define FPB_NUMINSTRADDRCOMP_3_0_5   (0x5UL)  /*!< Value 0x00000005 */
#define FPB_NUMINSTRADDRCOMP_3_0_6   (0x6UL)  /*!< Value 0x00000006 */
#define FPB_NUMINSTRADDRCOMP_3_0_7   (0x7UL)  /*!< Value 0x00000007 */
#define FPB_NUMINSTRADDRCOMP_3_0_8   (0x8UL)  /*!< Value 0x00000008 */
#define FPB_NUMINSTRADDRCOMP_3_0_9   (0x9UL)  /*!< Value 0x00000009 */
#define FPB_NUMINSTRADDRCOMP_3_0_10  (0xAUL)  /*!< Value 0x0000000A */
#define FPB_NUMINSTRADDRCOMP_3_0_11  (0xBUL)  /*!< Value 0x0000000B */
#define FPB_NUMINSTRADDRCOMP_3_0_12  (0xCUL)  /*!< Value 0x0000000C */
#define FPB_NUMINSTRADDRCOMP_3_0_13  (0xDUL)  /*!< Value 0x0000000D */
#define FPB_NUMINSTRADDRCOMP_3_0_14  (0xEUL)  /*!< Value 0x0000000E */
#define FPB_NUMINSTRADDRCOMP_3_0_15  (0xFUL)  /*!< Value 0x0000000F */

// Values of write protect key register bit
#define FPB_WRPROTECTKEY_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FPB_WRPROTECTKEY_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of flash patch and breakpoint (FPB) unit enable bit
#define FPB_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define FPB_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

/*!< Remap register */
#define FPB_REMAP_RMPSPT_OFFSET  (29U)
#define FPB_REMAP_RMPSPT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FPB, REMAP, RMPSPT))      /*!< Mask  0x20000000 */

#define FPB_REMAP_REMAP_OFFSET   (5U)
#define FPB_REMAP_REMAP_MASK     (0xFFFFFFUL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Mask  0x1FFFFFE0 */
#define FPB_REMAP_REMAP_0        (0x000001UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000020 */
#define FPB_REMAP_REMAP_1        (0x000002UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000040 */
#define FPB_REMAP_REMAP_2        (0x000004UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000080 */
#define FPB_REMAP_REMAP_3        (0x000008UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000100 */
#define FPB_REMAP_REMAP_4        (0x000010UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000200 */
#define FPB_REMAP_REMAP_5        (0x000020UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000400 */
#define FPB_REMAP_REMAP_6        (0x000040UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00000800 */
#define FPB_REMAP_REMAP_7        (0x000080UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00001000 */
#define FPB_REMAP_REMAP_8        (0x000100UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00002000 */
#define FPB_REMAP_REMAP_9        (0x000200UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00004000 */
#define FPB_REMAP_REMAP_10       (0x000400UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00008000 */
#define FPB_REMAP_REMAP_11       (0x000800UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00010000 */
#define FPB_REMAP_REMAP_12       (0x001000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00020000 */
#define FPB_REMAP_REMAP_13       (0x002000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00040000 */
#define FPB_REMAP_REMAP_14       (0x004000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00080000 */
#define FPB_REMAP_REMAP_15       (0x008000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00100000 */
#define FPB_REMAP_REMAP_16       (0x010000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00200000 */
#define FPB_REMAP_REMAP_17       (0x020000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00400000 */
#define FPB_REMAP_REMAP_18       (0x040000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x00800000 */
#define FPB_REMAP_REMAP_19       (0x080000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x01000000 */
#define FPB_REMAP_REMAP_20       (0x100000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x02000000 */
#define FPB_REMAP_REMAP_21       (0x200000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x04000000 */
#define FPB_REMAP_REMAP_22       (0x400000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x08000000 */
#define FPB_REMAP_REMAP_23       (0x800000UL << REGISTER_FIELD_OFFSET(FPB, REMAP, REMAP))  /*!< Value 0x10000000 */

// Values of flash patch and breakpoint (FPB) unit remap support bit
#define FPB_REMAP_NOTSUPPORTED     (0x0UL)  /*!< Value 0x00000000 - Flash patch and breakpoint (FPB) unit supports only breakpoint functionality */
#define FPB_REMAP_HARDWIREDTOSRAM  (0x1UL)  /*!< Value 0x00000001 - support breakpoints on any location in the 4GB address range */

/*!< Comparator register (Macros valid for registers COMP0, COMP1, COMP2, COMP3, COMP4, COMP5, COMP6 and COMP7) */
#define FPB_COMP_REPLACE_OFFSET  (30U)
#define FPB_COMP_REPLACE_MASK    (0x3UL << REGISTER_FIELD_OFFSET(FPB, COMP, REPLACE))     /*!< Mask  0xC0000000 */
#define FPB_COMP_REPLACE_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, COMP, REPLACE))     /*!< Value 0x40000000 */
#define FPB_COMP_REPLACE_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, COMP, REPLACE))     /*!< Value 0x80000000 */

#define FPB_COMP_COMP_OFFSET     (12U)
#define FPB_COMP_COMP_MASK       (0x7FFFFFFUL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Mask  0x1FFFFFFC */
#define FPB_COMP_COMP_0          (0x0000001UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000004 */
#define FPB_COMP_COMP_1          (0x0000002UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000008 */
#define FPB_COMP_COMP_2          (0x0000004UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000010 */
#define FPB_COMP_COMP_3          (0x0000008UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000020 */
#define FPB_COMP_COMP_4          (0x0000010UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000040 */
#define FPB_COMP_COMP_5          (0x0000020UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000080 */
#define FPB_COMP_COMP_6          (0x0000040UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000100 */
#define FPB_COMP_COMP_7          (0x0000080UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000200 */
#define FPB_COMP_COMP_8          (0x0000100UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000400 */
#define FPB_COMP_COMP_9          (0x0000200UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00000800 */
#define FPB_COMP_COMP_10         (0x0000400UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00001000 */
#define FPB_COMP_COMP_11         (0x0000800UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00002000 */
#define FPB_COMP_COMP_12         (0x0001000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00004000 */
#define FPB_COMP_COMP_13         (0x0002000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00008000 */
#define FPB_COMP_COMP_14         (0x0004000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00010000 */
#define FPB_COMP_COMP_15         (0x0008000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00020000 */
#define FPB_COMP_COMP_16         (0x0010000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00040000 */
#define FPB_COMP_COMP_17         (0x0020000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00080000 */
#define FPB_COMP_COMP_18         (0x0040000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00100000 */
#define FPB_COMP_COMP_19         (0x0080000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00200000 */
#define FPB_COMP_COMP_20         (0x0100000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00400000 */
#define FPB_COMP_COMP_21         (0x0200000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x00800000 */
#define FPB_COMP_COMP_22         (0x0400000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x01000000 */
#define FPB_COMP_COMP_23         (0x0800000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x02000000 */
#define FPB_COMP_COMP_24         (0x1000000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x04000000 */
#define FPB_COMP_COMP_25         (0x2000000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x08000000 */
#define FPB_COMP_COMP_26         (0x4000000UL << REGISTER_FIELD_OFFSET(FPB, COMP, COMP))  /*!< Value 0x10000000 */

#define FPB_COMP_ENABLE_OFFSET   (0U)
#define FPB_COMP_ENABLE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FPB, COMP, ENABLE))      /*!< Mask  0x00000001 */

// Values of the register defining the behaviour when the instruction address comparator address is matched
#define FPB_COMPMATCH_REMAPTOADDRESS         (0x0UL)  /*!< Value 0x00000000 */
#define FPB_COMPMATCH_BKPTONLOWERHHALFWORDS  (0x1UL)  /*!< Value 0x00000001 */
#define FPB_COMPMATCH_BKPTONUPPERHALFWORDS   (0x2UL)  /*!< Value 0x00000002 */
#define FPB_COMPMATCH_BKPTONBOTHHALFWORDS    (0x3UL)  /*!< Value 0x00000003 */

// Values of flash patch and breakpoint (FPB) unit comparator enable bit
#define FPB_COMP_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define FPB_COMP_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

/*!< CoreSight lock access register */
#define FPB_LAR_KEY_OFFSET  (0U)
#define FPB_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define FPB_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000001 */
#define FPB_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000002 */
#define FPB_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000004 */
#define FPB_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000008 */
#define FPB_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000010 */
#define FPB_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000020 */
#define FPB_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000040 */
#define FPB_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000080 */
#define FPB_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000100 */
#define FPB_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000200 */
#define FPB_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000400 */
#define FPB_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00000800 */
#define FPB_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00001000 */
#define FPB_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00002000 */
#define FPB_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00004000 */
#define FPB_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00008000 */
#define FPB_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00010000 */
#define FPB_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00020000 */
#define FPB_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00040000 */
#define FPB_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00080000 */
#define FPB_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00100000 */
#define FPB_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00200000 */
#define FPB_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00400000 */
#define FPB_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x00800000 */
#define FPB_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x01000000 */
#define FPB_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x02000000 */
#define FPB_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x04000000 */
#define FPB_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x08000000 */
#define FPB_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x10000000 */
#define FPB_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x20000000 */
#define FPB_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x40000000 */
#define FPB_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FPB, LAR, KEY))  /*!< Value 0x80000000 */

/*!< CoreSight lock status register */
#define FPB_LSR_NTT_OFFSET  (2U)
#define FPB_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FPB, LSR, NTT))  /*!< Mask  0x00000004 */

#define FPB_LSR_SLK_OFFSET  (1U)
#define FPB_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FPB, LSR, SLK))  /*!< Mask  0x00000002 */

#define FPB_LSR_SLI_OFFSET  (0U)
#define FPB_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FPB, LSR, SLI))  /*!< Mask  0x00000001 */

/*!< Peripheral identitication 4 register */
#define FPB_PIDR4_4KCOUNT_OFFSET    (4U)
#define FPB_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define FPB_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define FPB_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define FPB_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define FPB_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define FPB_PIDR4_JEP106CON_OFFSET  (0U)
#define FPB_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define FPB_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define FPB_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define FPB_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define FPB_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define FPB_PIDR4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define FPB_PIDR5_RSVD_OFFSET  (0U)
#define FPB_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define FPB_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define FPB_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define FPB_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define FPB_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define FPB_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define FPB_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define FPB_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define FPB_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define FPB_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define FPB_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define FPB_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define FPB_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define FPB_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define FPB_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define FPB_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define FPB_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define FPB_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define FPB_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define FPB_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define FPB_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define FPB_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define FPB_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define FPB_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define FPB_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define FPB_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define FPB_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define FPB_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define FPB_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define FPB_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define FPB_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define FPB_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define FPB_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define FPB_PIDR6_RSVD_OFFSET  (0U)
#define FPB_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define FPB_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define FPB_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define FPB_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define FPB_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define FPB_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define FPB_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define FPB_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define FPB_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define FPB_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define FPB_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define FPB_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define FPB_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define FPB_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define FPB_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define FPB_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define FPB_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define FPB_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define FPB_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define FPB_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define FPB_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define FPB_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define FPB_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define FPB_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define FPB_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define FPB_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define FPB_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define FPB_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define FPB_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define FPB_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define FPB_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define FPB_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define FPB_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define FPB_PIDR7_RSVD_OFFSET  (0U)
#define FPB_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define FPB_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define FPB_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define FPB_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define FPB_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define FPB_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define FPB_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define FPB_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define FPB_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define FPB_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define FPB_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define FPB_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define FPB_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define FPB_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define FPB_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define FPB_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define FPB_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define FPB_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define FPB_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define FPB_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define FPB_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define FPB_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define FPB_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define FPB_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define FPB_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define FPB_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define FPB_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define FPB_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define FPB_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define FPB_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define FPB_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define FPB_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define FPB_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FPB, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define FPB_PIDR0_PARTNUM_OFFSET  (0U)
#define FPB_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define FPB_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define FPB_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define FPB_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define FPB_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define FPB_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define FPB_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define FPB_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define FPB_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(FPB, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define FPB_PIDR0PARTNUM_ST   (0x0EUL)  /*!< Value 0x0000000E */
#define FPB_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define FPB_PIDR1_JEP106ID_OFFSET  (4U)
#define FPB_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define FPB_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define FPB_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define FPB_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define FPB_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define FPB_PIDR1_PARTNUM_OFFSET   (0U)
#define FPB_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define FPB_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define FPB_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define FPB_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define FPB_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define FPB_PIDR1PARTNUM_ST   (0x0UL)  /*!< Value 0x00000000 */
#define FPB_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define FPB_PIDR1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define FPB_PIDR2_REVISION_OFFSET    (4U)
#define FPB_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define FPB_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define FPB_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define FPB_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define FPB_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define FPB_PIDR2_JEDEC_OFFSET       (3U)
#define FPB_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define FPB_PIDR2_JEDEC106ID_OFFSET  (0U)
#define FPB_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define FPB_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define FPB_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define FPB_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define FPB_REVISION_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC assigned value select bit
#define FPB_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define FPB_PIDR2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define FPB_PIDR3_REVAND_OFFSET  (4U)
#define FPB_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define FPB_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define FPB_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define FPB_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define FPB_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define FPB_PIDR3_CMOD_OFFSET    (0U)
#define FPB_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(FPB, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define FPB_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define FPB_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define FPB_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define FPB_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(FPB, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define FPB_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define FPB_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define FPB_CIDR0_PREAMBLE_OFFSET  (0U)
#define FPB_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define FPB_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define FPB_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define FPB_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define FPB_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define FPB_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define FPB_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define FPB_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define FPB_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(FPB, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define FPB_CIDR0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define FPB_CIDR1_CLASS_OFFSET      (4U)
#define FPB_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(FPB, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define FPB_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define FPB_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define FPB_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define FPB_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define FPB_CIDR1_PREAMBLE_OFFSET   (0U)
#define FPB_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(FPB, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define FPB_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define FPB_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define FPB_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define FPB_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(FPB, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define FPB_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define FPB_CLASS_ARM  (0x9UL)  /*!< Value 0x00000009 */
#define FPB_CLASS_ST   (0xEUL)  /*!< Value 0x0000000E */

/*!< Component identitication 2 register */
#define FPB_CIDR2_PREAMBLE_OFFSET  (0U)
#define FPB_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define FPB_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define FPB_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define FPB_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define FPB_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define FPB_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define FPB_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define FPB_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define FPB_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(FPB, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define FPB_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define FPB_CIDR3_PREAMBLE_OFFSET  (0U)
#define FPB_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define FPB_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define FPB_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define FPB_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define FPB_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define FPB_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define FPB_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define FPB_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define FPB_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(FPB, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define FPB_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

/** @} */ // End of FPB group

/** @} */ // End of RegisterGroup group

#endif // FPB_H
