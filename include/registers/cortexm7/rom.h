#ifndef ROM_REGISTERS_H
#define ROM_REGISTERS_H
/**
 * @copyright
 * @file rom.h
 * @author Andrea Gianarda
 * @date 06th of May 2021
 * @brief ROM table registers in private peripheral bus (PPB) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup ROM ROM table registers in private peripheral bus (PPB)
 *  @brief ROM table registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

typedef struct {
	RO uint32_t ROMSCS;           /*!< System control space (SCS) register             (Offset 0x0)            */
	RO uint32_t ROMDWT;           /*!< Data watchpoint and trace (DWT) register        (Offset 0x4)            */
	RO uint32_t ROMFPB;           /*!< Flash patch and breakpoint (FPB) unit register  (Offset 0x8)            */
	RO uint32_t ROMITM;           /*!< Instrumentation trace macrocell (ITM) register  (Offset 0xC)            */
	RO uint32_t ROMTPIU;          /*!< Trace port interface unit (TPIU) register       (Offset 0x10)           */
	RO uint32_t ROMETM;           /*!< Embedded trace macrocell (ETM) register         (Offset 0x14)           */
	RO uint32_t END;              /*!< End-of-table marker                             (Offset 0x18)           */
	   uint32_t reserved0[997U];  /*!< Reserved                                        (Offset 0x1C to 0xFAC)  */
	WO uint32_t LAR;              /*!< CoreSight lock access register                  (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register                  (Offset 0xFB4)          */
	   uint32_t reserved1[5U];    /*!< Reserved                                        (Offset 0xFB8 to 0xFC8) */
	RO uint32_t MEMTYPE;          /*!< System memory type register                     (Offset 0xFCC)          */
	RO uint32_t PIDR4;            /*!< Peripheral identification 4 register            (Offset 0xFD0)          */
	RO uint32_t PIDR5;            /*!< Peripheral identification 5 register            (Offset 0xFD4)          */
	RO uint32_t PIDR6;            /*!< Peripheral identification 6 register            (Offset 0xFD8)          */
	RO uint32_t PIDR7;            /*!< Peripheral identification 7 register            (Offset 0xFDC)          */
	RO uint32_t PIDR0;            /*!< Peripheral identification 0 register            (Offset 0xFE0)          */
	RO uint32_t PIDR1;            /*!< Peripheral identification 1 register            (Offset 0xFE4)          */
	RO uint32_t PIDR2;            /*!< Peripheral identification 2 register            (Offset 0xFE8)          */
	RO uint32_t PIDR3;            /*!< Peripheral identification 3 register            (Offset 0xFEC)          */
	RO uint32_t CIDR0;            /*!< Component identification 0 register             (Offset 0xFF0)          */
	RO uint32_t CIDR1;            /*!< Component identification 1 register             (Offset 0xFF4)          */
	RO uint32_t CIDR2;            /*!< Component identification 2 register             (Offset 0xFF8)          */
	RO uint32_t CIDR3;            /*!< Component identification 3 register             (Offset 0xFFC)          */
} rom_regs;

/*!< ROM table registers in private peripheral bus (PPB) registers */
/*!< System control space (SCS) register */
#define ROM_ROMSCS_FITTED_OFFSET  (0U)
#define ROM_ROMSCS_FITTED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, ROMSCS, FITTED))  /*!< Mask  0x00000001 */

// Values of system control space (SCS) fitted bit
#define ROM_SCS_NOTFITTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_SCS_FITTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Data watchpoint and trace (DWT) register */
#define ROM_ROMDWT_FITTED_OFFSET  (0U)
#define ROM_ROMDWT_FITTED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, ROMDWT, FITTED))  /*!< Mask  0x00000001 */

// Values of data watchpoint and trace (DWT) fitted bit
#define ROM_DWT_NOTFITTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_DWT_FITTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Flash patch and breakpoint (FPB) unit register */
#define ROM_ROMFPB_FITTED_OFFSET  (0U)
#define ROM_ROMFPB_FITTED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, ROMFPB, FITTED))  /*!< Mask  0x00000001 */

// Values of flash patch and breakpoint (FPB) unit fitted bit
#define ROM_FPB_NOTFITTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_FPB_FITTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Instrumentation trace macrocell (ITM) register */
#define ROM_ROMITM_FITTED_OFFSET  (0U)
#define ROM_ROMITM_FITTED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, ROMITM, FITTED))  /*!< Mask  0x00000001 */

// Values of instrumentation trace macrocell (ITM) fitted bit
#define ROM_ITM_NOTFITTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_ITM_FITTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Trace port interface unit (TPIU) register */
#define ROM_ROMTPIU_FITTED_OFFSET  (0U)
#define ROM_ROMTPIU_FITTED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, ROMTPIU, FITTED))  /*!< Mask  0x00000001 */

// Values of trace port interface unit (TPIU) fitted bit
#define ROM_TPIU_NOTFITTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_TPIU_FITTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Embedded trace macrocell (ETM) register */
#define ROM_ROMETM_FITTED_OFFSET  (0U)
#define ROM_ROMETM_FITTED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, ROMETM, FITTED))  /*!< Mask  0x00000001 */

// Values of embedded trace macrocell (ETM) fitted bit
#define ROM_ETM_NOTFITTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_ETM_FITTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< CoreSight lock access register */
#define ROM_LAR_KEY_OFFSET  (0U)
#define ROM_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define ROM_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000001 */
#define ROM_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000002 */
#define ROM_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000004 */
#define ROM_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000008 */
#define ROM_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000010 */
#define ROM_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000020 */
#define ROM_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000040 */
#define ROM_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000080 */
#define ROM_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000100 */
#define ROM_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000200 */
#define ROM_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000400 */
#define ROM_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00000800 */
#define ROM_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00001000 */
#define ROM_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00002000 */
#define ROM_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00004000 */
#define ROM_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00008000 */
#define ROM_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00010000 */
#define ROM_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00020000 */
#define ROM_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00040000 */
#define ROM_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00080000 */
#define ROM_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00100000 */
#define ROM_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00200000 */
#define ROM_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00400000 */
#define ROM_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x00800000 */
#define ROM_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x01000000 */
#define ROM_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x02000000 */
#define ROM_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x04000000 */
#define ROM_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x08000000 */
#define ROM_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x10000000 */
#define ROM_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x20000000 */
#define ROM_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x40000000 */
#define ROM_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ROM, LAR, KEY))  /*!< Value 0x80000000 */

// Values of integration mode enable bit
#define ROM_KEY_LOCKCLEAR  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

/*!< CoreSight lock status register */
#define ROM_LSR_NTT_OFFSET  (2U)
#define ROM_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, LSR, NTT))  /*!< Mask  0x00000004 */

#define ROM_LSR_SLK_OFFSET  (1U)
#define ROM_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, LSR, SLK))  /*!< Mask  0x00000002 */

#define ROM_LSR_SLI_OFFSET  (0U)
#define ROM_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, LSR, SLI))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define ROM_LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of software lock status bit
#define ROM_SWLOCK_CLEAR  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_SWLOCK_SET    (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define ROM_SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Memory type register */
#define ROM_MEMTYPE_SYSMEM_OFFSET  (0U)
#define ROM_MEMTYPE_SYSMEM_MASK    (0x1UL << REGISTER_FIELD_OFFSET(ROM, MEMTYPE, SYSMEM))  /*!< Mask  0x00000001 */

// Values of the register bit stating the presence of the system memory on the bus
#define ROM_SYSMEM_NOTPRESENT  (0x0UL)  /*!< Value 0x00000000 */
#define ROM_SYSMEM_PRESENT     (0x1UL)  /*!< Value 0x00000001 */

/*!< Peripheral identitication 4 register */
#define ROM_PIDR4_4KCOUNT_OFFSET    (4U)
#define ROM_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define ROM_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define ROM_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define ROM_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define ROM_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define ROM_PIDR4_JEP106CON_OFFSET  (0U)
#define ROM_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define ROM_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define ROM_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define ROM_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define ROM_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of square root of the number of 4K blocks register
#define ROM_4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define ROM_4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define ROM_4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define ROM_4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define ROM_4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define ROM_4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define ROM_4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define ROM_4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define ROM_4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define ROM_4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define ROM_4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define ROM_4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define ROM_4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define ROM_4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define ROM_4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define ROM_4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define ROM_PIDR4JEP106_VALUE  (0x0UL)  /*!< Value 0x00000000 */

/*!< Peripheral identitication 5 register */
#define ROM_PIDR5_RSVD_OFFSET  (0U)
#define ROM_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ROM_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define ROM_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define ROM_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define ROM_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define ROM_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define ROM_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define ROM_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define ROM_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define ROM_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define ROM_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define ROM_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define ROM_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define ROM_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define ROM_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define ROM_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define ROM_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define ROM_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define ROM_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define ROM_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define ROM_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define ROM_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define ROM_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define ROM_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define ROM_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define ROM_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define ROM_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define ROM_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define ROM_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define ROM_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define ROM_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define ROM_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define ROM_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define ROM_PIDR6_RSVD_OFFSET  (0U)
#define ROM_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ROM_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define ROM_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define ROM_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define ROM_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define ROM_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define ROM_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define ROM_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define ROM_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define ROM_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define ROM_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define ROM_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define ROM_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define ROM_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define ROM_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define ROM_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define ROM_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define ROM_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define ROM_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define ROM_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define ROM_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define ROM_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define ROM_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define ROM_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define ROM_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define ROM_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define ROM_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define ROM_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define ROM_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define ROM_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define ROM_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define ROM_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define ROM_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define ROM_PIDR7_RSVD_OFFSET  (0U)
#define ROM_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define ROM_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define ROM_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define ROM_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define ROM_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define ROM_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define ROM_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define ROM_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define ROM_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define ROM_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define ROM_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define ROM_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define ROM_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define ROM_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define ROM_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define ROM_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define ROM_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define ROM_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define ROM_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define ROM_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define ROM_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define ROM_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define ROM_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define ROM_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define ROM_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define ROM_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define ROM_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define ROM_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define ROM_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define ROM_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define ROM_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define ROM_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define ROM_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(ROM, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define ROM_PIDR0_PARTNUM_OFFSET  (0U)
#define ROM_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define ROM_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define ROM_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define ROM_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define ROM_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define ROM_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define ROM_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define ROM_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define ROM_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(ROM, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define ROM_PIDR0PARTNUM_ST   (0x50UL)  /*!< Value 0x00000050 */
#define ROM_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define ROM_PIDR1_JEP106ID_OFFSET  (4U)
#define ROM_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define ROM_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define ROM_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define ROM_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define ROM_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define ROM_PIDR1_PARTNUM_OFFSET   (0U)
#define ROM_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define ROM_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define ROM_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define ROM_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define ROM_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define ROM_PIDR1PARTNUM_ST   (0x8UL)  /*!< Value 0x00000008 */
#define ROM_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define ROM_PIDR1JEP106ID_VALUE  (0x0UL)  /*!< Value 0x00000000 */

/*!< Peripheral identitication 2 register */
#define ROM_PIDR2_REVISION_OFFSET    (4U)
#define ROM_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define ROM_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define ROM_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define ROM_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define ROM_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define ROM_PIDR2_JEDEC_OFFSET       (3U)
#define ROM_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define ROM_PIDR2_JEDEC106ID_OFFSET  (0U)
#define ROM_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define ROM_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define ROM_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define ROM_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define ROM_REVISION_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC assigned value select bit
#define ROM_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define ROM_PIDR2JEP106ID_VALUE  (0x2UL)  /*!< Value 0x00000002 */

/*!< Peripheral identitication 3 register */
#define ROM_PIDR3_REVAND_OFFSET  (4U)
#define ROM_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define ROM_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define ROM_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define ROM_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define ROM_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define ROM_PIDR3_CMOD_OFFSET    (0U)
#define ROM_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(ROM, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define ROM_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define ROM_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define ROM_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define ROM_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(ROM, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define ROM_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define ROM_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define ROM_CIDR0_PREAMBLE_OFFSET  (0U)
#define ROM_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define ROM_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define ROM_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define ROM_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define ROM_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define ROM_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define ROM_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define ROM_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define ROM_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ROM, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define ROM_CIDR0PREAMBLE_VALUE  (0x0AUL)  /*!< Value 0x0000000A */

/*!< Component identitication 1 register */
#define ROM_CIDR1_CLASS_OFFSET      (4U)
#define ROM_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(ROM, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define ROM_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define ROM_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define ROM_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define ROM_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define ROM_CIDR1_PREAMBLE_OFFSET   (0U)
#define ROM_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(ROM, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define ROM_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define ROM_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define ROM_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define ROM_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(ROM, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define ROM_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define ROM_CLASS_ARM  (0x1UL)  /*!< Value 0x00000001 */
#define ROM_CLASS_ST   (0xEUL)  /*!< Value 0x0000000E */

/*!< Component identitication 2 register */
#define ROM_CIDR2_PREAMBLE_OFFSET  (0U)
#define ROM_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define ROM_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define ROM_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define ROM_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define ROM_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define ROM_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define ROM_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define ROM_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define ROM_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ROM, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define ROM_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define ROM_CIDR3_PREAMBLE_OFFSET  (0U)
#define ROM_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define ROM_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define ROM_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define ROM_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define ROM_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define ROM_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define ROM_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define ROM_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define ROM_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(ROM, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define ROM_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

#define ROM_OFFSET 0xFF000UL
#define ROM_BASE OFFSET_ADDRESS(PPB_BASE, ROM_OFFSET)
#define ROM REGISTER_PTR(rom_regs, ROM_BASE)

/** @} */ // End of ROM group

/** @} */ // End of RegisterGroup group

#endif // ROM_REGISTERS_H
