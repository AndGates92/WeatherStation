#ifndef SWO_H
#define SWO_H
/**
 * @copyright
 * @file swo.h
 * @author Andrea Gianarda
 * @date 17th of August 2021
 * @brief Serial wire output (SWO) registers
*/

#include <stdint.h>
#include "registers/debug/common/swo.h"
#include "registers/debug/common/coresight.h"

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup SWO Serial wire output (SWO) registers
 *  @brief Serial wire output (SWO) registers macros and structures
 *  @{
 */

typedef struct {
	RO uint32_t SPR;              /*!< Supported synchronous port size register                  (Offset 0x0)            */
	RO uint32_t CPR;              /*!< Current synchronous port size register                    (Offset 0x4)            */
	   uint32_t reserved0[2U];    /*!< Reserved                                                  (Offset 0x8 to 0xC)     */
	RW uint32_t CODR;             /*!< Current asynchronous output speed divisors register       (Offset 0x10)           */
	   uint32_t reserved1[55U];   /*!< Reserved                                                  (Offset 0x14 to 0xEC)   */
	RW uint32_t SPPR;             /*!< Select ping protocol register                             (Offset 0xF0)           */
	   uint32_t reserved2[3U];    /*!< Reserved                                                  (Offset 0xF4 to 0xFC)   */
	R0 uint32_t STMR;             /*!< Supported trigger modes register                          (Offset 0x100)          */
	   uint32_t reserved3[63U];   /*!< Reserved                                                  (Offset 0x104 to 0x1FC) */
	R0 uint32_t STPR;             /*!< Supported test pattern/modes register                     (Offset 0x200)          */
	   uint32_t reserved4[63U];   /*!< Reserved                                                  (Offset 0x204 to 0x2FC) */
	RO uint32_t FFSR;             /*!< Formatter and flush status register                       (Offset 0x300)          */
	R0 uint32_t FFCR;             /*!< Formatter and flush control register                      (Offset 0x304)          */
	   uint32_t reserved5[761U];  /*!< Reserved                                                  (Offset 0x308 to 0xEE8) */
	RO uint32_t ITATBDATA0;       /*!< Integration test AMBA Trace Bus (ATB) data 0 register     (Offset 0xEEC)          */
	WO uint32_t ITATBCTR2;        /*!< Integration test AMBA Trace Bus (ATB) control 2 register  (Offset 0xEF0)          */
	   uint32_t reserved6;        /*!< Reserved                                                  (Offset 0xEF4)          */
	RO uint32_t ITATBCTR0;        /*!< Integration test AMBA Trace Bus (ATB) control 0 register  (Offset 0xEF8)          */
	   uint32_t reserved7;        /*!< Reserved                                                  (Offset 0xEFC)          */
	RW uint32_t ITCTRL;           /*!< Integration mode control register                         (Offset 0xF00)          */
	   uint32_t reserved8[39U];   /*!< Reserved                                                  (Offset 0xF04 to 0xF9C) */
	RW uint32_t CLAIMSET;         /*!< Claim tag set register                                    (Offset 0xFA0)          */
	RW uint32_t CLAIMCLR;         /*!< Claim tag clear register                                  (Offset 0xFA4)          */
	   uint32_t reserved9[2U];    /*!< Reserved                                                  (Offset 0xFA8 to 0xFAC) */
	WO uint32_t LAR;              /*!< CoreSight lock access register                            (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register                            (Offset 0xFB4)          */
	RO uint32_t AUTHSTATUS;       /*!< Authentication status register                            (Offset 0xFB8)          */
	   uint32_t reserved10[3U];   /*!< Reserved                                                  (Offset 0xFBC to 0xFC4) */
	RO uint32_t DEVID;            /*!< Device configuration register                             (Offset 0xFC8)          */
	RO uint32_t DEVTYPE;          /*!< Device type register                                      (Offset 0xFCC)          */
	RO uint32_t PERIPHID4;        /*!< Peripheral identification 4 register                      (Offset 0xFD0)          */
	RO uint32_t PERIPHID5;        /*!< Peripheral identification 5 register                      (Offset 0xFD4)          */
	RO uint32_t PERIPHID6;        /*!< Peripheral identification 6 register                      (Offset 0xFD8)          */
	RO uint32_t PERIPHID7;        /*!< Peripheral identification 7 register                      (Offset 0xFDC)          */
	RO uint32_t PERIPHID0;        /*!< Peripheral identification 0 register                      (Offset 0xFE0)          */
	RO uint32_t PERIPHID1;        /*!< Peripheral identification 1 register                      (Offset 0xFE4)          */
	RO uint32_t PERIPHID2;        /*!< Peripheral identification 2 register                      (Offset 0xFE8)          */
	RO uint32_t PERIPHID3;        /*!< Peripheral identification 3 register                      (Offset 0xFEC)          */
	RO uint32_t COMPID0;          /*!< Component identification 0 register                       (Offset 0xFF0)          */
	RO uint32_t COMPID1;          /*!< Component identification 1 register                       (Offset 0xFF4)          */
	RO uint32_t COMPID2;          /*!< Component identification 2 register                       (Offset 0xFF8)          */
	RO uint32_t COMPID3;          /*!< Component identification 3 register                       (Offset 0xFFC)          */
} swo_regs;

/*!< Serial wire output (SWO) registers */
/*!< Supported synchronous port size register */
#define SWO_SPR_RSVD_OFFSET  (0U)
#define SWO_SPR_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_SPR_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000001 */
#define SWO_SPR_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000002 */
#define SWO_SPR_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000004 */
#define SWO_SPR_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000008 */
#define SWO_SPR_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000010 */
#define SWO_SPR_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000020 */
#define SWO_SPR_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000040 */
#define SWO_SPR_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000080 */
#define SWO_SPR_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000100 */
#define SWO_SPR_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000200 */
#define SWO_SPR_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000400 */
#define SWO_SPR_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00000800 */
#define SWO_SPR_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00001000 */
#define SWO_SPR_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00002000 */
#define SWO_SPR_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00004000 */
#define SWO_SPR_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00008000 */
#define SWO_SPR_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00010000 */
#define SWO_SPR_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00020000 */
#define SWO_SPR_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00040000 */
#define SWO_SPR_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00080000 */
#define SWO_SPR_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00100000 */
#define SWO_SPR_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00200000 */
#define SWO_SPR_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00400000 */
#define SWO_SPR_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x00800000 */
#define SWO_SPR_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x01000000 */
#define SWO_SPR_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x02000000 */
#define SWO_SPR_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x04000000 */
#define SWO_SPR_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x08000000 */
#define SWO_SPR_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x10000000 */
#define SWO_SPR_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x20000000 */
#define SWO_SPR_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x40000000 */
#define SWO_SPR_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, SPR, RSVD))  /*!< Value 0x80000000 */

// Values of trace port width support bit
#define SWO_SUPPORTEDPORTSIZE  (0x0UL)  /*!< Value 0x00000000 */

/*!< Current synchronous port size register */
#define SWO_CPR_RSVD_OFFSET  (0U)
#define SWO_CPR_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_CPR_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000001 */
#define SWO_CPR_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000002 */
#define SWO_CPR_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000004 */
#define SWO_CPR_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000008 */
#define SWO_CPR_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000010 */
#define SWO_CPR_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000020 */
#define SWO_CPR_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000040 */
#define SWO_CPR_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000080 */
#define SWO_CPR_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000100 */
#define SWO_CPR_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000200 */
#define SWO_CPR_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000400 */
#define SWO_CPR_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00000800 */
#define SWO_CPR_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00001000 */
#define SWO_CPR_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00002000 */
#define SWO_CPR_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00004000 */
#define SWO_CPR_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00008000 */
#define SWO_CPR_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00010000 */
#define SWO_CPR_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00020000 */
#define SWO_CPR_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00040000 */
#define SWO_CPR_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00080000 */
#define SWO_CPR_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00100000 */
#define SWO_CPR_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00200000 */
#define SWO_CPR_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00400000 */
#define SWO_CPR_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x00800000 */
#define SWO_CPR_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x01000000 */
#define SWO_CPR_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x02000000 */
#define SWO_CPR_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x04000000 */
#define SWO_CPR_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x08000000 */
#define SWO_CPR_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x10000000 */
#define SWO_CPR_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x20000000 */
#define SWO_CPR_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x40000000 */
#define SWO_CPR_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, CPR, RSVD))  /*!< Value 0x80000000 */

// Values of trace port width support bit
#define SWO_CURRENTPORTSIZE  (0x0UL)  /*!< Value 0x00000000 */

/*!< Current output divisor register */
#define SWO_CODR_PRESCALER_OFFSET  (0U)
#define SWO_CODR_PRESCALER_MASK    (0x1FFFUL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Mask  0x00001FFF */
#define SWO_CODR_PRESCALER_0       (0x0001UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000001 */
#define SWO_CODR_PRESCALER_1       (0x0002UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000002 */
#define SWO_CODR_PRESCALER_2       (0x0004UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000004 */
#define SWO_CODR_PRESCALER_3       (0x0008UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000008 */
#define SWO_CODR_PRESCALER_4       (0x0010UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000010 */
#define SWO_CODR_PRESCALER_5       (0x0020UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000020 */
#define SWO_CODR_PRESCALER_6       (0x0040UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000040 */
#define SWO_CODR_PRESCALER_7       (0x0080UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000080 */
#define SWO_CODR_PRESCALER_8       (0x0100UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000100 */
#define SWO_CODR_PRESCALER_9       (0x0200UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000200 */
#define SWO_CODR_PRESCALER_10      (0x0400UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000400 */
#define SWO_CODR_PRESCALER_11      (0x0800UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00000800 */
#define SWO_CODR_PRESCALER_12      (0x1000UL << REGISTER_FIELD_OFFSET(SWO, CODR, PRESCALER))  /*!< Value 0x00001000 */

/*!< Selected pin protocol register */
#define SWO_SPPR_PPROTOCOL_OFFSET  (0U)
#define SWO_SPPR_PPROTOCOL_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SWO, SPPR, PPROTOCOL))  /*!< Mask  0x00000003 */

// Values of register storing the pin protocol
#define SWO_PINPROTOCOL_MANCHESTERASYNCSWO  (0x1UL)  /*!< Value 0x00000001 */
#define SWO_PINPROTOCOL_NRZASYCSWO          (0x2UL)  /*!< Value 0x00000002 */

/*!< Supported trigger mode register */
#define SWO_STMR_RSVD_OFFSET  (0U)
#define SWO_STMR_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_STMR_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000001 */
#define SWO_STMR_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000002 */
#define SWO_STMR_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000004 */
#define SWO_STMR_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000008 */
#define SWO_STMR_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000010 */
#define SWO_STMR_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000020 */
#define SWO_STMR_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000040 */
#define SWO_STMR_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000080 */
#define SWO_STMR_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000100 */
#define SWO_STMR_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000200 */
#define SWO_STMR_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000400 */
#define SWO_STMR_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00000800 */
#define SWO_STMR_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00001000 */
#define SWO_STMR_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00002000 */
#define SWO_STMR_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00004000 */
#define SWO_STMR_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00008000 */
#define SWO_STMR_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00010000 */
#define SWO_STMR_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00020000 */
#define SWO_STMR_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00040000 */
#define SWO_STMR_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00080000 */
#define SWO_STMR_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00100000 */
#define SWO_STMR_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00200000 */
#define SWO_STMR_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00400000 */
#define SWO_STMR_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x00800000 */
#define SWO_STMR_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x01000000 */
#define SWO_STMR_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x02000000 */
#define SWO_STMR_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x04000000 */
#define SWO_STMR_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x08000000 */
#define SWO_STMR_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x10000000 */
#define SWO_STMR_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x20000000 */
#define SWO_STMR_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x40000000 */
#define SWO_STMR_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, STMR, RSVD))  /*!< Value 0x80000000 */

// Values of supported trigger mode
#define SWO_SUPPORTTRIGGERMODE  (0x0UL)  /*!< Value 0x00000000 */

/*!< Supported test patterns and modes register */
#define SWO_STPR_RSVD_OFFSET  (0U)
#define SWO_STPR_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_STPR_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000001 */
#define SWO_STPR_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000002 */
#define SWO_STPR_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000004 */
#define SWO_STPR_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000008 */
#define SWO_STPR_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000010 */
#define SWO_STPR_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000020 */
#define SWO_STPR_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000040 */
#define SWO_STPR_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000080 */
#define SWO_STPR_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000100 */
#define SWO_STPR_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000200 */
#define SWO_STPR_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000400 */
#define SWO_STPR_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00000800 */
#define SWO_STPR_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00001000 */
#define SWO_STPR_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00002000 */
#define SWO_STPR_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00004000 */
#define SWO_STPR_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00008000 */
#define SWO_STPR_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00010000 */
#define SWO_STPR_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00020000 */
#define SWO_STPR_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00040000 */
#define SWO_STPR_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00080000 */
#define SWO_STPR_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00100000 */
#define SWO_STPR_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00200000 */
#define SWO_STPR_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00400000 */
#define SWO_STPR_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x00800000 */
#define SWO_STPR_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x01000000 */
#define SWO_STPR_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x02000000 */
#define SWO_STPR_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x04000000 */
#define SWO_STPR_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x08000000 */
#define SWO_STPR_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x10000000 */
#define SWO_STPR_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x20000000 */
#define SWO_STPR_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x40000000 */
#define SWO_STPR_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, STPR, RSVD))  /*!< Value 0x80000000 */

// Values of test patterns and modes
#define SWO_TESTPATTERNSMODES  (0x0UL)  /*!< Value 0x00000000 */

/*!< Formatter and flush status register */
#define SWO_FFSR_FTNONSTOP_OFFSET  (3U)
#define SWO_FFSR_FTNONSTOP_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFSR, FTNONSTOP))  /*!< Mask  0x00000008 */

#define SWO_FFSR_TCPRESENT_OFFSET  (2U)
#define SWO_FFSR_TCPRESENT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFSR, TCPRESENT))  /*!< Mask  0x00000004 */

#define SWO_FFSR_FTSTOPPED_OFFSET  (1U)
#define SWO_FFSR_FTSTOPPED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFSR, FTSTOPPED))  /*!< Mask  0x00000002 */

#define SWO_FFSR_FLINPROG_OFFSET   (0U)
#define SWO_FFSR_FLINPROG_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFSR, FLINPROG))   /*!< Mask  0x00000001 */

// Values of formatter stop enable bit
#define SWO_FORMATTERSTOP_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define SWO_FORMATTERSTOP_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

// Values of TRACECTL present bit
#define SWO_TRACECTL_NOTPRESENT  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRACECTL_PRESENT     (0x1UL)  /*!< Value 0x00000001 */

// Values of formatter stopped status bit
#define SWO_FORMATTER_RUNNING  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_FORMATTER_STOPPED  (0x1UL)  /*!< Value 0x00000001 */

// Values of flushing in progress status bit
#define SWO_FLUSHING_NONE        (0x0UL)  /*!< Value 0x00000000 */
#define SWO_FLUSHING_INPROGRESS  (0x1UL)  /*!< Value 0x00000001 */

/*!< Formatter and flush control register */
#define SWO_FFCR_DRAINBUFFER_OFFSET    (14U)
#define SWO_FFCR_DRAINBUFFER_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, DRAINBUFFER))    /*!< Mask  0x00004000 */

#define SWO_FFCR_STOPONTRIGEVT_OFFSET  (13U)
#define SWO_FFCR_STOPONTRIGEVT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, STOPONTRIGEVT))  /*!< Mask  0x00002000 */

#define SWO_FFCR_STOPONFLIN_OFFSET     (12U)
#define SWO_FFCR_STOPONFLIN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, STOPONFLIN))     /*!< Mask  0x00001000 */

#define SWO_FFCR_TRIGONFL_OFFSET       (10U)
#define SWO_FFCR_TRIGONFL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, TRIGONFL))       /*!< Mask  0x00000400 */

#define SWO_FFCR_TRIGONTRIGEVT_OFFSET  (9U)
#define SWO_FFCR_TRIGONTRIGEVT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, TRIGONTRIGEVT))  /*!< Mask  0x00000200 */

#define SWO_FFCR_TRIGONFLIN_OFFSET     (8U)
#define SWO_FFCR_TRIGONFLIN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, TRIGONFLIN))     /*!< Mask  0x00000100 */

#define SWO_FFCR_FLUSHMAN_OFFSET       (6U)
#define SWO_FFCR_FLUSHMAN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, FLUSHMAN))       /*!< Mask  0x00000040 */

#define SWO_FFCR_FONTRIGEVT_OFFSET     (5U)
#define SWO_FFCR_FONTRIGEVT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, FONTRIGEVT))     /*!< Mask  0x00000020 */

#define SWO_FFCR_FONFLIN_OFFSET        (4U)
#define SWO_FFCR_FONFLIN_MASK          (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, FONFLIN))        /*!< Mask  0x00000010 */

#define SWO_FFCR_ENTI_OFFSET           (1U)
#define SWO_FFCR_ENTI_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, ENTI))           /*!< Mask  0x00000002 */

#define SWO_FFCR_ENFT_OFFSET           (0U)
#define SWO_FFCR_ENFT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(SWO, FFCR, ENFT))           /*!< Mask  0x00000001 */

// Values of trace data drained through ATB interface enable bit
#define SWO_ATBTRACEDATADRAIN_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_ATBTRACEDATADRAIN_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trace capture stop on trigger event enable bit
#define SWO_TRACECAPTUREONTRIGGEREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRACECAPTUREONTRIGGEREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trace capture stop on flush completition enable bit
#define SWO_TRACECAPTUREONFLUSHCOMPLETE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRACECAPTUREONFLUSHCOMPLETE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger on flush completition enable bit
#define SWO_TRIGGERONFLUSHCOMPLETE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRIGGERONFLUSHCOMPLETE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger on trigger event enable bit
#define SWO_TRIGGERONTRIGGEREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRIGGERONTRIGGEREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of TRIGIN transition detection enable bit
#define SWO_TRIGINTRANSITIONDETECTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRIGINTRANSITIONDETECTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of manual flush enable bit
#define SWO_MANUALFLUSH_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_MANUALFLUSH_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of flush on trigger event enable bit
#define SWO_FLUSHONTRIGGEREVENT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_FLUSHONTRIGGEREVENT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of FLUSHIN transition detection enable bit
#define SWO_FLUSHINTRANSITIONDETECTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_FLUSHINTRANSITIONDETECTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of trigger insertion enable bit
#define SWO_TRIGGERINSERTION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_TRIGGERINSERTION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of formatting enable bit
#define SWO_FORMATTING_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_FORMATTING_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) data 0 register */
#define SWO_ITATBDATA0_ATDATASBIT7_OFFSET    (1U)
#define SWO_ITATBDATA0_ATDATASBIT7_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SWO, ITATBDATA0, ATDATASBIT7))    /*!< Mask  0x00000002 */

#define SWO_ITATBDATA0_ATDATASBIT0_OFFSET    (0U)
#define SWO_ITATBDATA0_ATDATASBIT0_MASK      (0x1UL << REGISTER_FIELD_OFFSET(SWO, ITATBDATA0, ATDATASBIT0))    /*!< Mask  0x00000001 */

// Values of trace data drained through ATB interface enable bit
#define SWO_ATB_LOGIC0  (0x0UL)  /*!< Value 0x00000000 */
#define SWO_ATB_LOGIC1  (0x1UL)  /*!< Value 0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) control 2 register */
#define SWO_ITATBCTR2_AFVALIDS_OFFSET  (1U)
#define SWO_ITATBCTR2_AFVALIDS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, ITATBCTR2, AFVALIDS))  /*!< Mask  0x00000002 */

#define SWO_ITATBCTR2_ATREADYS_OFFSET  (0U)
#define SWO_ITATBCTR2_ATREADYS_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, ITATBCTR2, ATREADYS))  /*!< Mask  0x00000001 */

/*!< Integration test AMBA Trace Bus (ATB) control 0 register */
#define SWO_ITATBCTR0_ATVALID_OFFSET  (0U)
#define SWO_ITATBCTR0_ATVALID_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, ITATBCTR0, AFVALID))  /*!< Mask  0x00000001 */

/*!< Integration mode control register */
#define SWO_ITCTRL_IME_OFFSET  (0U)
#define SWO_ITCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, ITCTRL, IME))  /*!< Mask  0x00000001 */

/*!< Claim tag set register */
#define SWO_CLAIMSET_CLAIMSET_OFFSET  (0U)
#define SWO_CLAIMSET_CLAIMSET_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SWO, CLAIMSET, CLAIMSET))  /*!< Mask  0x0000000F */

// Values of claim tag set register bits
#define SWO_CLAIMSET_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMSET, CLAIMSET) + SWO_CLAIM_BIT3)
#define SWO_CLAIMSET_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMSET, BIT3))  /*!< Mask  0x00000008 */

#define SWO_CLAIMSET_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMSET, CLAIMSET) + SWO_CLAIM_BIT2)
#define SWO_CLAIMSET_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMSET, BIT2))  /*!< Mask  0x00000004 */

#define SWO_CLAIMSET_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMSET, CLAIMSET) + SWO_CLAIM_BIT1)
#define SWO_CLAIMSET_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMSET, BIT1))  /*!< Mask  0x00000002 */

#define SWO_CLAIMSET_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMSET, CLAIMSET) + SWO_CLAIM_BIT0)
#define SWO_CLAIMSET_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMSET, BIT0))  /*!< Mask  0x00000001 */

/*!< Claim tag clear register */
#define SWO_CLAIMCLR_CLAIMCLR_OFFSET  (0U)
#define SWO_CLAIMCLR_CLAIMCLR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, CLAIMCLR))  /*!< Mask  0x0000000F */

// Values of claim tag clear register bits
#define SWO_CLAIMCLR_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, CLAIMCLR) + SWO_CLAIM_BIT3)
#define SWO_CLAIMCLR_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, BIT3))  /*!< Mask  0x00000008 */

#define SWO_CLAIMCLR_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, CLAIMCLR) + SWO_CLAIM_BIT2)
#define SWO_CLAIMCLR_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, BIT2))  /*!< Mask  0x00000004 */

#define SWO_CLAIMCLR_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, CLAIMCLR) + SWO_CLAIM_BIT1)
#define SWO_CLAIMCLR_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, BIT1))  /*!< Mask  0x00000002 */

#define SWO_CLAIMCLR_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, CLAIMCLR) + SWO_CLAIM_BIT0)
#define SWO_CLAIMCLR_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, CLAIMCLR, BIT0))  /*!< Mask  0x00000001 */

/*!< CoreSight lock access register */
#define SWO_LAR_KEY_OFFSET  (0U)
#define SWO_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define SWO_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000001 */
#define SWO_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000002 */
#define SWO_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000004 */
#define SWO_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000008 */
#define SWO_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000010 */
#define SWO_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000020 */
#define SWO_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000040 */
#define SWO_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000080 */
#define SWO_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000100 */
#define SWO_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000200 */
#define SWO_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000400 */
#define SWO_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00000800 */
#define SWO_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00001000 */
#define SWO_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00002000 */
#define SWO_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00004000 */
#define SWO_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00008000 */
#define SWO_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00010000 */
#define SWO_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00020000 */
#define SWO_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00040000 */
#define SWO_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00080000 */
#define SWO_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00100000 */
#define SWO_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00200000 */
#define SWO_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00400000 */
#define SWO_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x00800000 */
#define SWO_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x01000000 */
#define SWO_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x02000000 */
#define SWO_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x04000000 */
#define SWO_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x08000000 */
#define SWO_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x10000000 */
#define SWO_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x20000000 */
#define SWO_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x40000000 */
#define SWO_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, LAR, KEY))  /*!< Value 0x80000000 */

/*!< CoreSight lock status register */
#define SWO_LSR_LOCKTYPE_OFFSET   (2U)
#define SWO_LSR_LOCKTYPE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(SWO, LSR, LOCKTYPE))   /*!< Mask  0x00000004 */

#define SWO_LSR_LOCKGRANT_OFFSET  (1U)
#define SWO_LSR_LOCKGRANT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, LSR, LOCKGRANT))  /*!< Mask  0x00000002 */

#define SWO_LSR_LOCKEXIST_OFFSET  (0U)
#define SWO_LSR_LOCKEXIST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(SWO, LSR, LOCKEXIST))  /*!< Mask  0x00000001 */

/*!< Authentication status register */
#define SWO_AUTHSTATUS_SNID_OFFSET   (6U)
#define SWO_AUTHSTATUS_SNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SWO, AUTHSTATUS, SNID))   /*!< Mask  0x000000C0 - security level for secure non-invasive debug */

#define SWO_AUTHSTATUS_SID_OFFSET    (4U)
#define SWO_AUTHSTATUS_SID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(SWO, AUTHSTATUS, SID))    /*!< Mask  0x00000030 - security level for secure invasive debug */

#define SWO_AUTHSTATUS_NSNID_OFFSET  (2U)
#define SWO_AUTHSTATUS_NSNID_MASK    (0x3UL << REGISTER_FIELD_OFFSET(SWO, AUTHSTATUS, NSNID))  /*!< Mask  0x0000000C - security level for non secure non-invasive debug */

#define SWO_AUTHSTATUS_NSID_OFFSET   (0U)
#define SWO_AUTHSTATUS_NSID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(SWO, AUTHSTATUS, NSID))   /*!< Mask  0x00000003 - security level for non secure invasive debug */

/*!< Device configuration register */
#define TPIU_DEVID_NRZVALID_OFFSET   (11U)
#define TPIU_DEVID_NRZVALID_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TPIU, DEVID, NRZVALID))   /*!< Mask  0x00000800 */

#define TPIU_DEVID_MANCVALID_OFFSET  (10U)
#define TPIU_DEVID_MANCVALID_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TPIU, DEVID, MANCVALID))  /*!< Mask  0x00000400 */

#define TPIU_DEVID_PTINVALID_OFFSET  (9U)
#define TPIU_DEVID_PTINVALID_MASK    (0x1UL << REGISTER_FIELD_OFFSET(TPIU, DEVID, PTINVALID))  /*!< Mask  0x00000200 */

#define TPIU_DEVID_FIFOSZ_OFFSET     (6U)
#define TPIU_DEVID_FIFOSZ_MASK       (0x7UL << REGISTER_FIELD_OFFSET(TPIU, DEVID, FIFOSZ))     /*!< Mask  0x000001C0 */

#define TPIU_DEVID_CLKRELAT_OFFSET   (5U)
#define TPIU_DEVID_CLKRELAT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(TPIU, DEVID, CLKRELAT))   /*!< Mask  0x00000020 */

#define TPIU_DEVID_MAXNUM_OFFSET     (0U)
#define TPIU_DEVID_MAXNUM_MASK       (0x1FUL << REGISTER_FIELD_OFFSET(TPIU, DEVID, MAXNUM))    /*!< Mask  0x0000001F */

// Values of register bit stating the support of serial wire output (SWO) using universal asynchronous receiver-transmitter (UART) or non-return-to-zero (NRZ)
#define TPIU_SWOUARTNRZ_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define TPIU_SWOUARTNRZ_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of register bit stating the support of serial wire output (SWO) using Manchester format
#define TPIU_SWOMANCHESTERFORMAT_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define TPIU_SWOMANCHESTERFORMAT_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of parallel trace port operation support bit
#define TPIU_TRACECLKDATA_NOTSUPPORTED  (0x0UL)  /*!< Value 0x00000000 */
#define TPIU_TRACECLKDATA_SUPPORTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of square root of the number of 4K blocks register
#define TPIU_FIFOSIZE_1    (0x0UL)  /*!< Value 0x00000000 */
#define TPIU_FIFOSIZE_2    (0x1UL)  /*!< Value 0x00000001 */
#define TPIU_FIFOSIZE_4    (0x2UL)  /*!< Value 0x00000002 */
#define TPIU_FIFOSIZE_8    (0x3UL)  /*!< Value 0x00000003 */
#define TPIU_FIFOSIZE_16   (0x4UL)  /*!< Value 0x00000004 */
#define TPIU_FIFOSIZE_32   (0x5UL)  /*!< Value 0x00000005 */
#define TPIU_FIFOSIZE_64   (0x6UL)  /*!< Value 0x00000006 */
#define TPIU_FIFOSIZE_128  (0x7UL)  /*!< Value 0x00000007 */

// Values of software lock status bit
#define TPIU_ATBTRACECLKRELATIONSHIP_SYNCHRONOUS   (0x0UL)  /*!< Value 0x00000000 */
#define TPIU_ATBTRACECLKRELATIONSHIP_ASYNCHRONOUS  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register storing the number/type of AMBA Trace Bus (ATB) input port multiplexing
#define TPIU_NUMATBINPUTPORT_NONE  (0x00UL)  /*!< Value 0x00000000 */
#define TPIU_NUMATBINPUTPORT_1     (0x01UL)  /*!< Value 0x00000001 */
#define TPIU_NUMATBINPUTPORT_2     (0x02UL)  /*!< Value 0x00000002 */
#define TPIU_NUMATBINPUTPORT_3     (0x03UL)  /*!< Value 0x00000003 */
#define TPIU_NUMATBINPUTPORT_4     (0x04UL)  /*!< Value 0x00000004 */
#define TPIU_NUMATBINPUTPORT_5     (0x05UL)  /*!< Value 0x00000005 */
#define TPIU_NUMATBINPUTPORT_6     (0x06UL)  /*!< Value 0x00000006 */
#define TPIU_NUMATBINPUTPORT_7     (0x07UL)  /*!< Value 0x00000007 */
#define TPIU_NUMATBINPUTPORT_8     (0x08UL)  /*!< Value 0x00000008 */
#define TPIU_NUMATBINPUTPORT_9     (0x09UL)  /*!< Value 0x00000009 */
#define TPIU_NUMATBINPUTPORT_10    (0x0AUL)  /*!< Value 0x0000000A */
#define TPIU_NUMATBINPUTPORT_11    (0x0BUL)  /*!< Value 0x0000000B */
#define TPIU_NUMATBINPUTPORT_12    (0x0CUL)  /*!< Value 0x0000000C */
#define TPIU_NUMATBINPUTPORT_13    (0x0DUL)  /*!< Value 0x0000000D */
#define TPIU_NUMATBINPUTPORT_14    (0x0EUL)  /*!< Value 0x0000000E */
#define TPIU_NUMATBINPUTPORT_15    (0x0FUL)  /*!< Value 0x0000000F */
#define TPIU_NUMATBINPUTPORT_16    (0x10UL)  /*!< Value 0x00000010 */
#define TPIU_NUMATBINPUTPORT_17    (0x11UL)  /*!< Value 0x00000011 */
#define TPIU_NUMATBINPUTPORT_18    (0x12UL)  /*!< Value 0x00000012 */
#define TPIU_NUMATBINPUTPORT_19    (0x13UL)  /*!< Value 0x00000013 */
#define TPIU_NUMATBINPUTPORT_20    (0x14UL)  /*!< Value 0x00000014 */
#define TPIU_NUMATBINPUTPORT_21    (0x15UL)  /*!< Value 0x00000015 */
#define TPIU_NUMATBINPUTPORT_22    (0x16UL)  /*!< Value 0x00000016 */
#define TPIU_NUMATBINPUTPORT_23    (0x17UL)  /*!< Value 0x00000017 */
#define TPIU_NUMATBINPUTPORT_24    (0x18UL)  /*!< Value 0x00000018 */
#define TPIU_NUMATBINPUTPORT_25    (0x19UL)  /*!< Value 0x00000019 */
#define TPIU_NUMATBINPUTPORT_26    (0x1AUL)  /*!< Value 0x0000001A */
#define TPIU_NUMATBINPUTPORT_27    (0x1BUL)  /*!< Value 0x0000001B */
#define TPIU_NUMATBINPUTPORT_28    (0x1CUL)  /*!< Value 0x0000001C */
#define TPIU_NUMATBINPUTPORT_29    (0x1DUL)  /*!< Value 0x0000001D */
#define TPIU_NUMATBINPUTPORT_30    (0x1EUL)  /*!< Value 0x0000001E */
#define TPIU_NUMATBINPUTPORT_31    (0x1FUL)  /*!< Value 0x0000001F */

/*!< Device type register */
#define SWO_DEVTYPE_SUBTYPE_OFFSET    (4U)
#define SWO_DEVTYPE_SUBTYPE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SWO, DEVTYPE, SUBTYPE))    /*!< Mask  0x000000F0 */

#define SWO_DEVTYPE_MAJORTYPE_OFFSET  (0U)
#define SWO_DEVTYPE_MAJORTYPE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SWO, DEVTYPE, MAJORTYPE))  /*!< Mask  0x0000000F */

// Values of the sub-classification register
#define SWO_SUBTYPE_ETBETR  (0x2UL)  /*!< Value 0x00000002 */
#define SWO_SUBTYPE_ETF     (0x3UL)  /*!< Value 0x00000003 */

// Values of the major classification register
#define SWO_MAJORTYPE_ETBETR  (0x1UL)  /*!< Value 0x00000001 */
#define SWO_MAJORTYPE_ETF     (0x2UL)  /*!< Value 0x00000002 */

/*!< Peripheral identitication 4 register */
#define SWO_PERIPHID4_4KCOUNT_OFFSET    (4U)
#define SWO_PERIPHID4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define SWO_PERIPHID4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000010 */
#define SWO_PERIPHID4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000020 */
#define SWO_PERIPHID4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000040 */
#define SWO_PERIPHID4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, 4KCOUNT))    /*!< Value 0x00000080 */

#define SWO_PERIPHID4_JEP106CON_OFFSET  (0U)
#define SWO_PERIPHID4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, JEP106CON))  /*!< Mask  0x0000000F */
#define SWO_PERIPHID4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, JEP106CON))  /*!< Value 0x00000001 */
#define SWO_PERIPHID4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, JEP106CON))  /*!< Value 0x00000002 */
#define SWO_PERIPHID4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, JEP106CON))  /*!< Value 0x00000004 */
#define SWO_PERIPHID4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID4, JEP106CON))  /*!< Value 0x00000008 */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define SWO_PERIPHID4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define SWO_PERIPHID5_RSVD_OFFSET  (0U)
#define SWO_PERIPHID5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_PERIPHID5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000001 */
#define SWO_PERIPHID5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000002 */
#define SWO_PERIPHID5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000004 */
#define SWO_PERIPHID5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000008 */
#define SWO_PERIPHID5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000010 */
#define SWO_PERIPHID5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000020 */
#define SWO_PERIPHID5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000040 */
#define SWO_PERIPHID5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000080 */
#define SWO_PERIPHID5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000100 */
#define SWO_PERIPHID5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000200 */
#define SWO_PERIPHID5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000400 */
#define SWO_PERIPHID5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00000800 */
#define SWO_PERIPHID5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00001000 */
#define SWO_PERIPHID5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00002000 */
#define SWO_PERIPHID5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00004000 */
#define SWO_PERIPHID5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00008000 */
#define SWO_PERIPHID5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00010000 */
#define SWO_PERIPHID5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00020000 */
#define SWO_PERIPHID5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00040000 */
#define SWO_PERIPHID5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00080000 */
#define SWO_PERIPHID5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00100000 */
#define SWO_PERIPHID5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00200000 */
#define SWO_PERIPHID5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00400000 */
#define SWO_PERIPHID5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x00800000 */
#define SWO_PERIPHID5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x01000000 */
#define SWO_PERIPHID5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x02000000 */
#define SWO_PERIPHID5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x04000000 */
#define SWO_PERIPHID5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x08000000 */
#define SWO_PERIPHID5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x10000000 */
#define SWO_PERIPHID5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x20000000 */
#define SWO_PERIPHID5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x40000000 */
#define SWO_PERIPHID5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define SWO_PERIPHID6_RSVD_OFFSET  (0U)
#define SWO_PERIPHID6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_PERIPHID6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000001 */
#define SWO_PERIPHID6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000002 */
#define SWO_PERIPHID6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000004 */
#define SWO_PERIPHID6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000008 */
#define SWO_PERIPHID6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000010 */
#define SWO_PERIPHID6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000020 */
#define SWO_PERIPHID6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000040 */
#define SWO_PERIPHID6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000080 */
#define SWO_PERIPHID6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000100 */
#define SWO_PERIPHID6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000200 */
#define SWO_PERIPHID6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000400 */
#define SWO_PERIPHID6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00000800 */
#define SWO_PERIPHID6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00001000 */
#define SWO_PERIPHID6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00002000 */
#define SWO_PERIPHID6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00004000 */
#define SWO_PERIPHID6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00008000 */
#define SWO_PERIPHID6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00010000 */
#define SWO_PERIPHID6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00020000 */
#define SWO_PERIPHID6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00040000 */
#define SWO_PERIPHID6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00080000 */
#define SWO_PERIPHID6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00100000 */
#define SWO_PERIPHID6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00200000 */
#define SWO_PERIPHID6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00400000 */
#define SWO_PERIPHID6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x00800000 */
#define SWO_PERIPHID6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x01000000 */
#define SWO_PERIPHID6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x02000000 */
#define SWO_PERIPHID6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x04000000 */
#define SWO_PERIPHID6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x08000000 */
#define SWO_PERIPHID6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x10000000 */
#define SWO_PERIPHID6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x20000000 */
#define SWO_PERIPHID6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x40000000 */
#define SWO_PERIPHID6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define SWO_PERIPHID7_RSVD_OFFSET  (0U)
#define SWO_PERIPHID7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define SWO_PERIPHID7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000001 */
#define SWO_PERIPHID7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000002 */
#define SWO_PERIPHID7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000004 */
#define SWO_PERIPHID7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000008 */
#define SWO_PERIPHID7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000010 */
#define SWO_PERIPHID7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000020 */
#define SWO_PERIPHID7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000040 */
#define SWO_PERIPHID7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000080 */
#define SWO_PERIPHID7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000100 */
#define SWO_PERIPHID7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000200 */
#define SWO_PERIPHID7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000400 */
#define SWO_PERIPHID7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00000800 */
#define SWO_PERIPHID7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00001000 */
#define SWO_PERIPHID7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00002000 */
#define SWO_PERIPHID7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00004000 */
#define SWO_PERIPHID7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00008000 */
#define SWO_PERIPHID7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00010000 */
#define SWO_PERIPHID7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00020000 */
#define SWO_PERIPHID7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00040000 */
#define SWO_PERIPHID7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00080000 */
#define SWO_PERIPHID7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00100000 */
#define SWO_PERIPHID7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00200000 */
#define SWO_PERIPHID7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00400000 */
#define SWO_PERIPHID7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x00800000 */
#define SWO_PERIPHID7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x01000000 */
#define SWO_PERIPHID7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x02000000 */
#define SWO_PERIPHID7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x04000000 */
#define SWO_PERIPHID7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x08000000 */
#define SWO_PERIPHID7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x10000000 */
#define SWO_PERIPHID7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x20000000 */
#define SWO_PERIPHID7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x40000000 */
#define SWO_PERIPHID7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define SWO_PERIPHID0_PARTNUM_OFFSET  (0U)
#define SWO_PERIPHID0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Mask  0x000000FF */
#define SWO_PERIPHID0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000001 */
#define SWO_PERIPHID0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000002 */
#define SWO_PERIPHID0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000004 */
#define SWO_PERIPHID0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000008 */
#define SWO_PERIPHID0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000010 */
#define SWO_PERIPHID0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000020 */
#define SWO_PERIPHID0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000040 */
#define SWO_PERIPHID0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define SWO_PERIPHID0PARTNUM_ARM   (0x14UL)  /*!< Value 0x00000014 */

/*!< Peripheral identitication 1 register */
#define SWO_PERIPHID1_JEP106ID_OFFSET  (4U)
#define SWO_PERIPHID1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, JEP106ID))  /*!< Mask  0x000000F0 */
#define SWO_PERIPHID1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, JEP106ID))  /*!< Value 0x00000010 */
#define SWO_PERIPHID1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, JEP106ID))  /*!< Value 0x00000020 */
#define SWO_PERIPHID1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, JEP106ID))  /*!< Value 0x00000040 */
#define SWO_PERIPHID1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, JEP106ID))  /*!< Value 0x00000080 */

#define SWO_PERIPHID1_PARTNUM_OFFSET   (0U)
#define SWO_PERIPHID1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, PARTNUM))   /*!< Mask  0x0000000F */
#define SWO_PERIPHID1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, PARTNUM))   /*!< Value 0x00000001 */
#define SWO_PERIPHID1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, PARTNUM))   /*!< Value 0x00000002 */
#define SWO_PERIPHID1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, PARTNUM))   /*!< Value 0x00000004 */
#define SWO_PERIPHID1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define SWO_PERIPHID1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define SWO_PERIPHID1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define SWO_PERIPHID2_REVISION_OFFSET    (4U)
#define SWO_PERIPHID2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, REVISION))    /*!< Mask  0x000000F0 */
#define SWO_PERIPHID2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, REVISION))    /*!< Value 0x00000010 */
#define SWO_PERIPHID2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, REVISION))    /*!< Value 0x00000020 */
#define SWO_PERIPHID2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, REVISION))    /*!< Value 0x00000040 */
#define SWO_PERIPHID2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, REVISION))    /*!< Value 0x00000080 */

#define SWO_PERIPHID2_JEDEC_OFFSET       (3U)
#define SWO_PERIPHID2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, JEDEC))       /*!< Mask  0x00000008 */

#define SWO_PERIPHID2_JEDEC106ID_OFFSET  (0U)
#define SWO_PERIPHID2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define SWO_PERIPHID2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, JEDEC106ID))  /*!< Value 0x00000001 */
#define SWO_PERIPHID2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, JEDEC106ID))  /*!< Value 0x00000002 */
#define SWO_PERIPHID2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define SWO_REVISION_VALUE  (0x2UL)  /*!< Value 0x00000002 */

// Values of JEDEC assigned value select bit
#define SWO_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define SWO_PERIPHID2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define SWO_PERIPHID3_REVAND_OFFSET  (4U)
#define SWO_PERIPHID3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, REVAND))  /*!< Mask  0x000000F0 */
#define SWO_PERIPHID3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, REVAND))  /*!< Value 0x00000010 */
#define SWO_PERIPHID3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, REVAND))  /*!< Value 0x00000020 */
#define SWO_PERIPHID3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, REVAND))  /*!< Value 0x00000040 */
#define SWO_PERIPHID3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, REVAND))  /*!< Value 0x00000080 */

#define SWO_PERIPHID3_CMOD_OFFSET    (0U)
#define SWO_PERIPHID3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, CMOD))    /*!< Mask  0x0000000F */
#define SWO_PERIPHID3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, CMOD))    /*!< Value 0x00000001 */
#define SWO_PERIPHID3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, CMOD))    /*!< Value 0x00000002 */
#define SWO_PERIPHID3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, CMOD))    /*!< Value 0x00000004 */
#define SWO_PERIPHID3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(SWO, PERIPHID3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define SWO_REVAND_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define SWO_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define SWO_COMPID0_PREAMBLE_OFFSET  (0U)
#define SWO_COMPID0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Mask  0x000000FF */
#define SWO_COMPID0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000001 */
#define SWO_COMPID0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000002 */
#define SWO_COMPID0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000004 */
#define SWO_COMPID0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000008 */
#define SWO_COMPID0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000010 */
#define SWO_COMPID0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000020 */
#define SWO_COMPID0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000040 */
#define SWO_COMPID0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(SWO, COMPID0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define SWO_COMPID0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define SWO_COMPID1_CLASS_OFFSET      (4U)
#define SWO_COMPID1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(SWO, COMPID1, CLASS))      /*!< Mask  0x000000F0 */
#define SWO_COMPID1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, CLASS))      /*!< Value 0x00000010 */
#define SWO_COMPID1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, CLASS))      /*!< Value 0x00000020 */
#define SWO_COMPID1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, CLASS))      /*!< Value 0x00000040 */
#define SWO_COMPID1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, CLASS))      /*!< Value 0x00000080 */

#define SWO_COMPID1_PREAMBLE_OFFSET   (0U)
#define SWO_COMPID1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(SWO, COMPID1, PREAMBLE))   /*!< Mask  0x0000000F */
#define SWO_COMPID1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, PREAMBLE))   /*!< Value 0x00000001 */
#define SWO_COMPID1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, PREAMBLE))   /*!< Value 0x00000002 */
#define SWO_COMPID1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, PREAMBLE))   /*!< Value 0x00000004 */
#define SWO_COMPID1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(SWO, COMPID1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define SWO_COMPID1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define SWO_CLASS_ARM   (0x9UL)  /*!< Value 0x00000009 */

/*!< Component identitication 2 register */
#define SWO_COMPID2_PREAMBLE_OFFSET  (0U)
#define SWO_COMPID2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Mask  0x000000FF */
#define SWO_COMPID2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000001 */
#define SWO_COMPID2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000002 */
#define SWO_COMPID2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000004 */
#define SWO_COMPID2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000008 */
#define SWO_COMPID2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000010 */
#define SWO_COMPID2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000020 */
#define SWO_COMPID2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000040 */
#define SWO_COMPID2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(SWO, COMPID2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define SWO_COMPID2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define SWO_COMPID3_PREAMBLE_OFFSET  (0U)
#define SWO_COMPID3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Mask  0x000000FF */
#define SWO_COMPID3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000001 */
#define SWO_COMPID3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000002 */
#define SWO_COMPID3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000004 */
#define SWO_COMPID3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000008 */
#define SWO_COMPID3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000010 */
#define SWO_COMPID3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000020 */
#define SWO_COMPID3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000040 */
#define SWO_COMPID3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(SWO, COMPID3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define SWO_COMPID3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

/** @} */ // End of SWO group

/** @} */ // End of RegisterGroup group

#endif // SWO_H
