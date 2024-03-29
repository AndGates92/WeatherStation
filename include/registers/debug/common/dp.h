#ifndef DP_H
#define DP_H
/**
 * @copyright
 * @file dp.h
 * @author Andrea Gianarda
 * @date 29th of July 2021
 * @brief Debug Port (DP) global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup DP Debug Port (DP) macros
 *  @brief Debug Port (DP) macros
 *  @{
 */

typedef struct {
	RW uint32_t ADDR0;  /*!< Registers at address 0x0 (Offset 0x0) */
	RW uint32_t ADDR4;  /*!< Registers at address 0x4 (Offset 0x4) */
	RW uint32_t ADDR8;  /*!< Registers at address 0x8 (Offset 0x8) */
	RW uint32_t ADDRC;  /*!< Registers at address 0xC (Offset 0xC) */
} dp_regs;

/*!< Debug port (DP) registers */
/*!< Debug port identification register */
#define DP_DPIDR_REVISION_OFFSET  (28U)
#define DP_DPIDR_REVISION_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, DPIDR, REVISION))    /*!< Mask  0xF0000000 */

#define DP_DPIDR_PARTNO_OFFSET    (20U)
#define DP_DPIDR_PARTNO_MASK      (0xFFUL << REGISTER_FIELD_OFFSET(DP, DPIDR, PARTNO))     /*!< Mask  0x0FF00000 */

#define DP_DPIDR_MIN_OFFSET       (16U)
#define DP_DPIDR_MIN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DP, DPIDR, MIN))         /*!< Mask  0x00010000 */

#define DP_DPIDR_VERSION_OFFSET   (12U)
#define DP_DPIDR_VERSION_MASK     (0xFUL << REGISTER_FIELD_OFFSET(DP, DPIDR, VERSION))     /*!< Mask  0x0000F000 */

#define DP_DPIDR_DESIGNER_OFFSET  (1U)
#define DP_DPIDR_DESIGNER_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(DP, DPIDR, DESIGNER))  /*!< Mask  0x00000FFE */

// Values of minimal implemented debug port functions
#define DP_MINIMUMFUNCTION_IMPLEMENTED     (0x0UL)  /*!< Value 0x00000000 */
#define DP_MINIMUMFUNCTION_NOTIMPLEMENTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of the version of the debug port architecture
#define DP_VERSION_DPv0  (0x0UL)  /*!< Value 0x00000000 */
#define DP_VERSION_DPv1  (0x1UL)  /*!< Value 0x00000001 */
#define DP_VERSION_DPv2  (0x2UL)  /*!< Value 0x00000002 */
#define DP_VERSION_DPv3  (0x3UL)  /*!< Value 0x00000003 */

// Values of debug port designer JEDEC code register bits
#define DP_0x7FREPEAT  (7U)
#define DP_FINALCODE   (0U)

// Values of debug port designer JEDEC code
#define DP_DESIGNER_0x7FREPEAT_OFFSET  (REGISTER_FIELD_OFFSET(DP, DPIDR, DESIGNER) + DP_0x7FREPEAT)
#define DP_DESIGNER_0x7FREPEAT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, DESIGNER, 0x7FREPEAT))  /*!< Mask  0x00000F00 */

#define DP_DESIGNER_FINALCODE_OFFSET   (REGISTER_FIELD_OFFSET(DP, DPIDR, DESIGNER) + DP_FINALCODE)
#define DP_DESIGNER_FINALCODE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DP, DESIGNER, FINALCODE))   /*!< Mask  0x000000FE */

/*!< Debug port identification 1 register */
#define DP_DPIDR1_ERRMODE_OFFSET  (7U)
#define DP_DPIDR1_ERRMODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, DPIDR1, ERRMODE))  /*!< Mask  0x00000080 */

#define DP_DPIDR1_ASIZE_OFFSET    (0U)
#define DP_DPIDR1_ASIZE_MASK      (0x7FUL << REGISTER_FIELD_OFFSET(DP, DPIDR1, ASIZE))   /*!< Mask  0x0FF0007F */

// Values of error reporting mode suppport bit
#define DP_ERRORMODE_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_ERRORMODE_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of the address size
#define DP_ADDRESSSIZE_12BITS  (0x0CUL)  /*!< Value 0x0000000C */
#define DP_ADDRESSSIZE_20BITS  (0x14UL)  /*!< Value 0x00000014 */
#define DP_ADDRESSSIZE_32BITS  (0x20UL)  /*!< Value 0x00000020 */
#define DP_ADDRESSSIZE_40BITS  (0x28UL)  /*!< Value 0x00000028 */
#define DP_ADDRESSSIZE_48BITS  (0x30UL)  /*!< Value 0x00000030 */
#define DP_ADDRESSSIZE_52BITS  (0x34UL)  /*!< Value 0x00000034 */

/*!< Debug port base pointer 0 register */
#define DP_BASEPTR0_PTR_OFFSET    (12U)
#define DP_BASEPTR0_PTR_MASK      (0xFFFFFUL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Mask  0xFFFFF000 */
#define DP_BASEPTR0_PTR_0         (0x00001UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00001000 */
#define DP_BASEPTR0_PTR_1         (0x00002UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00002000 */
#define DP_BASEPTR0_PTR_2         (0x00004UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00004000 */
#define DP_BASEPTR0_PTR_3         (0x00008UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00008000 */
#define DP_BASEPTR0_PTR_4         (0x00010UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00010000 */
#define DP_BASEPTR0_PTR_5         (0x00020UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00020000 */
#define DP_BASEPTR0_PTR_6         (0x00040UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00040000 */
#define DP_BASEPTR0_PTR_7         (0x00080UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00080000 */
#define DP_BASEPTR0_PTR_8         (0x00100UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00100000 */
#define DP_BASEPTR0_PTR_9         (0x00200UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00200000 */
#define DP_BASEPTR0_PTR_10        (0x00400UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00400000 */
#define DP_BASEPTR0_PTR_11        (0x00800UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x00800000 */
#define DP_BASEPTR0_PTR_12        (0x01000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x01000000 */
#define DP_BASEPTR0_PTR_13        (0x02000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x02000000 */
#define DP_BASEPTR0_PTR_14        (0x04000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x04000000 */
#define DP_BASEPTR0_PTR_15        (0x08000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x08000000 */
#define DP_BASEPTR0_PTR_16        (0x10000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x10000000 */
#define DP_BASEPTR0_PTR_17        (0x20000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x20000000 */
#define DP_BASEPTR0_PTR_18        (0x40000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x40000000 */
#define DP_BASEPTR0_PTR_19        (0x80000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, PTR))  /*!< Value 0x80000000 */

#define DP_BASEPTR0_VALID_OFFSET  (0U)
#define DP_BASEPTR0_VALID_MASK    (0x7FUL << REGISTER_FIELD_OFFSET(DP, BASEPTR0, VALID))   /*!< Mask  0x0FF00000 */

/*!< Debug port base pointer 1 register */
#define DP_BASEPTR1_PTR_OFFSET  (0U)
#define DP_BASEPTR1_PTR_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Mask  0xFFFFFFFF */
#define DP_BASEPTR1_PTR_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000001 */
#define DP_BASEPTR1_PTR_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000002 */
#define DP_BASEPTR1_PTR_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000004 */
#define DP_BASEPTR1_PTR_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000008 */
#define DP_BASEPTR1_PTR_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000010 */
#define DP_BASEPTR1_PTR_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000020 */
#define DP_BASEPTR1_PTR_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000040 */
#define DP_BASEPTR1_PTR_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000080 */
#define DP_BASEPTR1_PTR_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000100 */
#define DP_BASEPTR1_PTR_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000200 */
#define DP_BASEPTR1_PTR_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000400 */
#define DP_BASEPTR1_PTR_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00000800 */
#define DP_BASEPTR1_PTR_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00001000 */
#define DP_BASEPTR1_PTR_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00002000 */
#define DP_BASEPTR1_PTR_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00004000 */
#define DP_BASEPTR1_PTR_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00008000 */
#define DP_BASEPTR1_PTR_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00010000 */
#define DP_BASEPTR1_PTR_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00020000 */
#define DP_BASEPTR1_PTR_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00040000 */
#define DP_BASEPTR1_PTR_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00080000 */
#define DP_BASEPTR1_PTR_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00100000 */
#define DP_BASEPTR1_PTR_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00200000 */
#define DP_BASEPTR1_PTR_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00400000 */
#define DP_BASEPTR1_PTR_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x00800000 */
#define DP_BASEPTR1_PTR_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x01000000 */
#define DP_BASEPTR1_PTR_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x02000000 */
#define DP_BASEPTR1_PTR_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x04000000 */
#define DP_BASEPTR1_PTR_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x08000000 */
#define DP_BASEPTR1_PTR_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x10000000 */
#define DP_BASEPTR1_PTR_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x20000000 */
#define DP_BASEPTR1_PTR_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x40000000 */
#define DP_BASEPTR1_PTR_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DP, BASEPTR1, PTR))  /*!< Value 0x80000000 */

/*!< Debug port ABORT register */
#define DP_ABORT_ORUNERRCLR_OFFSET  (4U)
#define DP_ABORT_ORUNERRCLR_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(DP, ABORT, ORUNERRCLR))  /*!< Mask  0x00000010 */

#define DP_ABORT_WDERRCLR_OFFSET    (3U)
#define DP_ABORT_WDERRCLR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DP, ABORT, WDERRCLR))     /*!< Mask  0x00000008 */

#define DP_ABORT_STKERRCLR_OFFSET   (2U)
#define DP_ABORT_STKERRCLR_MASK     (0xFUL << REGISTER_FIELD_OFFSET(DP, ABORT, STKERRCLR))    /*!< Mask  0x00000004 */

#define DP_ABORT_STKCMPCLR_OFFSET   (1U)
#define DP_ABORT_STKCMPCLR_MASK     (0x7FFUL << REGISTER_FIELD_OFFSET(DP, ABORT, STKCMPCLR))  /*!< Mask  0x00000002 */

#define DP_ABORT_DAPABORT_OFFSET    (0U)
#define DP_ABORT_DAPABORT_MASK      (0x7FFUL << REGISTER_FIELD_OFFSET(DP, ABORT, DAPABORT))   /*!< Mask  0x00000001 */

// Values of register triggering access port (AP) abort
#define DP_KEEPBITVALUE   (0x0UL)  /*!< Value 0x00000000 */
#define DP_CLEARBITVALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of register triggering access port (AP) abort
#define DP_APABORT_NOTRIGGER  (0x0UL)  /*!< Value 0x00000000 */
#define DP_APABORT_TRIGGER    (0x1UL)  /*!< Value 0x00000001 */

/*!< Control and status register */
#define DP_CTRLSTAT_CSYSPWRUPACK_OFFSET  (31U)
#define DP_CTRLSTAT_CSYSPWRUPACK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, CSYSPWRUPACK))  /*!< Mask  0x80000000 */

#define DP_CTRLSTAT_CSYSPWRUPREQ_OFFSET  (30U)
#define DP_CTRLSTAT_CSYSPWRUPREQ_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, CSYSPWRUPREQ))  /*!< Mask  0x40000000 */

#define DP_CTRLSTAT_CDBGPWRUPACK_OFFSET  (29U)
#define DP_CTRLSTAT_CDBGPWRUPACK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, CDBGPWRUPACK))  /*!< Mask  0x20000000 */

#define DP_CTRLSTAT_CDBGPWRUPREQ_OFFSET  (28U)
#define DP_CTRLSTAT_CDBGPWRUPREQ_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, CDBGPWRUPREQ))  /*!< Mask  0x10000000 */

#define DP_CTRLSTAT_CDBGRSTACK_OFFSET    (27U)
#define DP_CTRLSTAT_CDBGRSTACK_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, CDBGRSTACK))    /*!< Mask  0x08000000 */

#define DP_CTRLSTAT_CDBGRSTREQ_OFFSET    (26U)
#define DP_CTRLSTAT_CDBGRSTREQ_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, CDBGRSTREQ))    /*!< Mask  0x04000000 */

#define DP_CTRLSTAT_ERRMODE_OFFSET       (24U)
#define DP_CTRLSTAT_ERRMODE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, ERRMODE))       /*!< Mask  0x01000000 */

#define DP_CTRLSTAT_TRNCNT_OFFSET        (12U)
#define DP_CTRLSTAT_TRNCNT_MASK          (0xFFFUL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, TRNCNT))      /*!< Mask  0x00FFF000 */

#define DP_CTRLSTAT_MASKLANE_OFFSET      (8U)
#define DP_CTRLSTAT_MASKLANE_MASK        (0xFUL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, MASKLANE))      /*!< Mask  0x00000F00 */

#define DP_CTRLSTAT_WDATAERR_OFFSET      (7U)
#define DP_CTRLSTAT_WDATAERR_MASK        (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, WDATAERR))      /*!< Mask  0x00000080 */

#define DP_CTRLSTAT_READOK_OFFSET        (6U)
#define DP_CTRLSTAT_READOK_MASK          (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, READOK))        /*!< Mask  0x00000040 */

#define DP_CTRLSTAT_STICKYERR_OFFSET     (5U)
#define DP_CTRLSTAT_STICKYERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, STICKYERR))     /*!< Mask  0x00000020 */

#define DP_CTRLSTAT_STICKYCMP_OFFSET     (4U)
#define DP_CTRLSTAT_STICKYCMP_MASK       (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, STICKYCMP))     /*!< Mask  0x00000010 */

#define DP_CTRLSTAT_TRNMODE_OFFSET       (2U)
#define DP_CTRLSTAT_TRNMODE_MASK         (0x3UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, TRNMODE))       /*!< Mask  0x0000000C */

#define DP_CTRLSTAT_STICKYORUN_OFFSET    (1U)
#define DP_CTRLSTAT_STICKYORUN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, STICKYORUN))    /*!< Mask  0x00000002 */

#define DP_CTRLSTAT_ORUNDETECT_OFFSET    (0U)
#define DP_CTRLSTAT_ORUNDETECT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DP, CTRLSTAT, ORUNDETECT))    /*!< Mask  0x00000001 */

// Values of debug port system domain power up register bit
#define DP_SYSTEMPOWERSTATUS_POWEREDDOWN  (0x0UL)  /*!< Value 0x00000000 */
#define DP_SYSTEMPOWERSTATUS_POWEREDUP    (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port system domain power up request register bit
#define DP_SYSTEMPOWERREQUEST_POWERDOWN  (0x0UL)  /*!< Value 0x00000000 */
#define DP_SYSTEMPOWERREQUEST_POWERUP    (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port debug domain power up register bit
#define DP_DEBUGPOWERSTATUS_POWEREDDOWN  (0x0UL)  /*!< Value 0x00000000 */
#define DP_DEBUGPOWERSTATUS_POWEREDUP    (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port debug domain power up request register bit
#define DP_DEBUGPOWERREQUEST_POWERDOWN  (0x0UL)  /*!< Value 0x00000000 */
#define DP_DEBUGPOWERREQUEST_POWERUP    (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port debug domain reset register bit
#define DP_DEBUGRESETSTATUS_NOTACCEPTED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_DEBUGRESETSTATUS_ACCEPTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port system domain reset request register bit
#define DP_DEBUGRESETREQUEST_NONE       (0x0UL)  /*!< Value 0x00000000 */
#define DP_DEBUGRESETREQUEST_REQUESTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port error mode bit
#define DP_ERRORMODE_EXPLICITELYCLEARED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_ERRORMODE_ONFAULTRESPONSE     (0x1UL)  /*!< Value 0x00000001 */

// Values of debug port designer JEDEC code register bits
#define DP_BIT31_24  (3U)
#define DP_BIT23_16  (2U)
#define DP_BIT15_8   (1U)
#define DP_BIT7_0    (0U)

// Values of debug port designer JEDEC code
#define DP_MASKLANE_BIT31_24_OFFSET  (REGISTER_FIELD_OFFSET(DP, ABORT, MASKLANE) + DP_BIT31_24)
#define DP_MASKLANE_BIT31_24_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, MASKLANE, BIT31_24))  /*!< Mask  0x00000800 */

#define DP_MASKLANE_BIT23_16_OFFSET  (REGISTER_FIELD_OFFSET(DP, ABORT, MASKLANE) + DP_BIT23_16)
#define DP_MASKLANE_BIT23_16_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, MASKLANE, BIT23_16))  /*!< Mask  0x00000400 */

#define DP_MASKLANE_BIT15_8_OFFSET   (REGISTER_FIELD_OFFSET(DP, ABORT, MASKLANE) + DP_BIT15_8)
#define DP_MASKLANE_BIT15_8_MASK     (0x1UL << REGISTER_FIELD_OFFSET(DP, MASKLANE, BIT15_8))   /*!< Mask  0x00000200 */

#define DP_MASKLANE_BIT7_0_OFFSET    (REGISTER_FIELD_OFFSET(DP, ABORT, MASKLANE) + DP_BIT7_0)
#define DP_MASKLANE_BIT7_0_MASK      (0x1UL << REGISTER_FIELD_OFFSET(DP, MASKLANE, BIT7_0))    /*!< Mask  0x00000100 */

// Values of debug port mask lane bit
#define DP_LANE_NOTMASKED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_LANE_MASKED     (0x1UL)  /*!< Value 0x00000001 */

// Values of write data error occurred bit
#define DP_WRITEDATAERROR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_WRITEDATAERROR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of access port (AP) read response status bit
#define DP_APREADRESPONSE_READNOTOK  (0x0UL)  /*!< Value 0x00000000 */
#define DP_APREADRESPONSE_READOK     (0x1UL)  /*!< Value 0x00000001 */

// Values of access port (AP) transaction error bit
#define DP_TRANSACTIONERROR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_TRANSACTIONERROR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of compare match bit
#define DP_PUSHVERIFY_MISMATCH   (0x0UL)  /*!< Value 0x00000000 */
#define DP_PUSHVERIFY_MATCH      (0x1UL)  /*!< Value 0x00000001 */
#define DP_PUSHCOMPARE_MATCH     (0x0UL)  /*!< Value 0x00000000 */
#define DP_PUSHCOMPARE_MISMATCH  (0x1UL)  /*!< Value 0x00000001 */

// Values of transfer mode for access port (AP) operations
#define DP_TRANSFERMODE_NORMAL         (0x0UL)  /*!< Value 0x00000000 */
#define DP_TRANSFERMODE_PUSHEDVERIFY   (0x1UL)  /*!< Value 0x00000001 */
#define DP_TRANSFERMODE_PUSHEDCOMPARE  (0x2UL)  /*!< Value 0x00000002 */

// Values of overrun flag bit
#define DP_OVERRUN_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_OVERRUN_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of overrun dectection enable bit
#define DP_OVERRUNDETECTION_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define DP_OVERRUNDETECTION_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

/*!< Data link control register */
#define DP_DLCR_TURNROUND_OFFSET  (8U)
#define DP_DLCR_TURNROUND_MASK    (0x3UL << REGISTER_FIELD_OFFSET(DP, DLCR, TURNROUND))  /*!< Mask  0x00000300 */

// Values of turnaround tristate period register
#define DP_TURNAROUNDTRISTATEPERIOD_1DATAPERIOD  (0x0UL)  /*!< Value 0x00000000 */
#define DP_TURNAROUNDTRISTATEPERIOD_2DATAPERIOD  (0x1UL)  /*!< Value 0x00000001 */
#define DP_TURNAROUNDTRISTATEPERIOD_3DATAPERIOD  (0x2UL)  /*!< Value 0x00000002 */
#define DP_TURNAROUNDTRISTATEPERIOD_4DATAPERIOD  (0x3UL)  /*!< Value 0x00000003 */

/*!< Target identification register */
#define DP_TARGETID_TREVISION_OFFSET  (28U)
#define DP_TARGETID_TREVISION_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, TARGETID, TREVISION))    /*!< Mask  0xF0000000 */

#define DP_TARGETID_TPARTNO_OFFSET    (20U)
#define DP_TARGETID_TPARTNO_MASK      (0xFFFFUL << REGISTER_FIELD_OFFSET(DP, TARGETID, TPARTNO))   /*!< Mask  0x0FFFF000 */

#define DP_TARGETID_TDESIGNER_OFFSET  (1U)
#define DP_TARGETID_TDESIGNER_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(DP, TARGETID, TDESIGNER))  /*!< Mask  0x00000FFE */

/*!< Data link protocol identification register */
#define DP_DLPIDR_TINSTANCE_OFFSET  (28U)
#define DP_DLPIDR_TINSTANCE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, DLPIDR, TINSTANCE))  /*!< Mask  0xF0000000 */

#define DP_DLPIDR_PROTSVN_OFFSET    (0U)
#define DP_DLPIDR_PROTSVN_MASK      (0xFUL << REGISTER_FIELD_OFFSET(DP, DLPIDR, PROTSVN))    /*!< Mask  0x0000000F */

// Values of register storing the number of instances in a multi-drop system
#define DP_NUMBEROFINSTANCES_0   (0x0UL)  /*!< Value 0x00000000 */
#define DP_NUMBEROFINSTANCES_1   (0x1UL)  /*!< Value 0x00000001 */
#define DP_NUMBEROFINSTANCES_2   (0x2UL)  /*!< Value 0x00000002 */
#define DP_NUMBEROFINSTANCES_3   (0x3UL)  /*!< Value 0x00000003 */
#define DP_NUMBEROFINSTANCES_4   (0x4UL)  /*!< Value 0x00000004 */
#define DP_NUMBEROFINSTANCES_5   (0x5UL)  /*!< Value 0x00000005 */
#define DP_NUMBEROFINSTANCES_6   (0x6UL)  /*!< Value 0x00000006 */
#define DP_NUMBEROFINSTANCES_7   (0x7UL)  /*!< Value 0x00000007 */
#define DP_NUMBEROFINSTANCES_8   (0x8UL)  /*!< Value 0x00000008 */
#define DP_NUMBEROFINSTANCES_9   (0x9UL)  /*!< Value 0x00000009 */
#define DP_NUMBEROFINSTANCES_10  (0xAUL)  /*!< Value 0x0000000A */
#define DP_NUMBEROFINSTANCES_11  (0xBUL)  /*!< Value 0x0000000B */
#define DP_NUMBEROFINSTANCES_12  (0xCUL)  /*!< Value 0x0000000C */
#define DP_NUMBEROFINSTANCES_13  (0xDUL)  /*!< Value 0x0000000D */
#define DP_NUMBEROFINSTANCES_14  (0xEUL)  /*!< Value 0x0000000E */
#define DP_NUMBEROFINSTANCES_15  (0xFUL)  /*!< Value 0x0000000F */

// Values of protocol version register
// Serial Wire Debug (SWD)
#define DP_SWDPROTOCOLVERSION2  (0x1UL)  /*!< Value 0x00000001 */

// JTAG-DP
#define DP_JTAGDPPROTOCOLVERSION0  (0x0UL)  /*!< Value 0x00000000 */
#define DP_JTAGDPPROTOCOLVERSION1  (0x1UL)  /*!< Value 0x00000001 */

/*!< Event status register */
#define DP_EVENTSTAT_EA_OFFSET  (0U)
#define DP_EVENTSTAT_EA_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, EVENTSTAT, EA))    /*!< Mask  0x00000001 */

// Values of event status flag
#define DP_EVENTPENDING    (0x0UL)  /*!< Value 0x00000000 */
#define DP_NOEVENTPENDING  (0x1UL)  /*!< Value 0x00000001 */

/*!< Debug port SELECT1 register */
#define DP_SELECT1_ADDR_OFFSET  (0U)
#define DP_SELECT1_ADDR_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Mask  0xFFFFFFFF */
#define DP_SELECT1_ADDR_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000001 */
#define DP_SELECT1_ADDR_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000002 */
#define DP_SELECT1_ADDR_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000004 */
#define DP_SELECT1_ADDR_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000008 */
#define DP_SELECT1_ADDR_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000010 */
#define DP_SELECT1_ADDR_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000020 */
#define DP_SELECT1_ADDR_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000040 */
#define DP_SELECT1_ADDR_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000080 */
#define DP_SELECT1_ADDR_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000100 */
#define DP_SELECT1_ADDR_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000200 */
#define DP_SELECT1_ADDR_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000400 */
#define DP_SELECT1_ADDR_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00000800 */
#define DP_SELECT1_ADDR_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00001000 */
#define DP_SELECT1_ADDR_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00002000 */
#define DP_SELECT1_ADDR_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00004000 */
#define DP_SELECT1_ADDR_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00008000 */
#define DP_SELECT1_ADDR_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00010000 */
#define DP_SELECT1_ADDR_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00020000 */
#define DP_SELECT1_ADDR_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00040000 */
#define DP_SELECT1_ADDR_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00080000 */
#define DP_SELECT1_ADDR_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00100000 */
#define DP_SELECT1_ADDR_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00200000 */
#define DP_SELECT1_ADDR_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00400000 */
#define DP_SELECT1_ADDR_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x00800000 */
#define DP_SELECT1_ADDR_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x01000000 */
#define DP_SELECT1_ADDR_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x02000000 */
#define DP_SELECT1_ADDR_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x04000000 */
#define DP_SELECT1_ADDR_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x08000000 */
#define DP_SELECT1_ADDR_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x10000000 */
#define DP_SELECT1_ADDR_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x20000000 */
#define DP_SELECT1_ADDR_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x40000000 */
#define DP_SELECT1_ADDR_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DP, SELECT1, ADDR))  /*!< Value 0x80000000 */

/*!< Debug port SELECT register */
#define DP_SELECT_ADDR_OFFSET       (4U)
#define DP_SELECT_ADDR_MASK         (0xFFFFFFFUL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Mask  0xFFFFFFF0 */
#define DP_SELECT_ADDR_0            (0x0000001UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000001 */
#define DP_SELECT_ADDR_1            (0x0000002UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000002 */
#define DP_SELECT_ADDR_2            (0x0000004UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000004 */
#define DP_SELECT_ADDR_3            (0x0000008UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000008 */
#define DP_SELECT_ADDR_4            (0x0000010UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000010 */
#define DP_SELECT_ADDR_5            (0x0000020UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000020 */
#define DP_SELECT_ADDR_6            (0x0000040UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000040 */
#define DP_SELECT_ADDR_7            (0x0000080UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000080 */
#define DP_SELECT_ADDR_8            (0x0000100UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000100 */
#define DP_SELECT_ADDR_9            (0x0000200UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000200 */
#define DP_SELECT_ADDR_10           (0x0000400UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000400 */
#define DP_SELECT_ADDR_11           (0x0000800UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00000800 */
#define DP_SELECT_ADDR_12           (0x0001000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00001000 */
#define DP_SELECT_ADDR_13           (0x0002000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00002000 */
#define DP_SELECT_ADDR_14           (0x0004000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00004000 */
#define DP_SELECT_ADDR_15           (0x0008000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00008000 */
#define DP_SELECT_ADDR_16           (0x0010000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00010000 */
#define DP_SELECT_ADDR_17           (0x0020000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00020000 */
#define DP_SELECT_ADDR_18           (0x0040000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00040000 */
#define DP_SELECT_ADDR_19           (0x0080000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00080000 */
#define DP_SELECT_ADDR_20           (0x0100000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00100000 */
#define DP_SELECT_ADDR_21           (0x0200000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00200000 */
#define DP_SELECT_ADDR_22           (0x0400000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00400000 */
#define DP_SELECT_ADDR_23           (0x0800000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x00800000 */
#define DP_SELECT_ADDR_24           (0x1000000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x01000000 */
#define DP_SELECT_ADDR_25           (0x2000000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x02000000 */
#define DP_SELECT_ADDR_26           (0x4000000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x04000000 */
#define DP_SELECT_ADDR_27           (0x8000000UL << REGISTER_FIELD_OFFSET(DP, SELECT, ADDR))  /*!< Value 0x08000000 */

#define DP_SELECT_DPBANKSEL_OFFSET  (0U)
#define DP_SELECT_DPBANKSEL_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, SELECT, DPBANKSEL))   /*!< Mask  0x0000000F */

// Values of debug port address bank select register
// Address 0x0
#define DP_DPBANKSEL_DPIDR     (0x0UL)  /*!< Value 0x00000000 */
#define DP_DPBANKSEL_DPIDR1    (0x1UL)  /*!< Value 0x00000001 */
#define DP_DPBANKSEL_BASEPTR0  (0x2UL)  /*!< Value 0x00000002 */
#define DP_DPBANKSEL_BASEPTR1  (0x3UL)  /*!< Value 0x00000003 */

// Address 0x4
#define DP_DPBANKSEL_CTRLSTAT   (0x0UL)  /*!< Value 0x00000000 */
#define DP_DPBANKSEL_DLCR       (0x1UL)  /*!< Value 0x00000001 */
#define DP_DPBANKSEL_TARGETID   (0x2UL)  /*!< Value 0x00000002 */
#define DP_DPBANKSEL_DLPIDR     (0x3UL)  /*!< Value 0x00000003 */
#define DP_DPBANKSEL_EVENTSTAT  (0x4UL)  /*!< Value 0x00000004 */
#define DP_DPBANKSEL_SELECT1    (0x5UL)  /*!< Value 0x00000005 */

/*!< Debug port RESEND register */
#define DP_RESEND_DATA_OFFSET  (0U)
#define DP_RESEND_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Mask  0xFFFFFFFF */
#define DP_RESEND_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000001 */
#define DP_RESEND_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000002 */
#define DP_RESEND_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000004 */
#define DP_RESEND_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000008 */
#define DP_RESEND_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000010 */
#define DP_RESEND_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000020 */
#define DP_RESEND_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000040 */
#define DP_RESEND_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000080 */
#define DP_RESEND_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000100 */
#define DP_RESEND_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000200 */
#define DP_RESEND_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000400 */
#define DP_RESEND_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00000800 */
#define DP_RESEND_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00001000 */
#define DP_RESEND_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00002000 */
#define DP_RESEND_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00004000 */
#define DP_RESEND_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00008000 */
#define DP_RESEND_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00010000 */
#define DP_RESEND_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00020000 */
#define DP_RESEND_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00040000 */
#define DP_RESEND_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00080000 */
#define DP_RESEND_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00100000 */
#define DP_RESEND_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00200000 */
#define DP_RESEND_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00400000 */
#define DP_RESEND_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x00800000 */
#define DP_RESEND_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x01000000 */
#define DP_RESEND_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x02000000 */
#define DP_RESEND_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x04000000 */
#define DP_RESEND_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x08000000 */
#define DP_RESEND_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x10000000 */
#define DP_RESEND_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x20000000 */
#define DP_RESEND_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x40000000 */
#define DP_RESEND_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DP, RESEND, DATA))  /*!< Value 0x80000000 */

/*!< Debug port RDBUFF register */
#define DP_RDBUFF_DATA_OFFSET  (0U)
#define DP_RDBUFF_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Mask  0xFFFFFFFF */
#define DP_RDBUFF_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000001 */
#define DP_RDBUFF_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000002 */
#define DP_RDBUFF_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000004 */
#define DP_RDBUFF_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000008 */
#define DP_RDBUFF_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000010 */
#define DP_RDBUFF_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000020 */
#define DP_RDBUFF_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000040 */
#define DP_RDBUFF_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000080 */
#define DP_RDBUFF_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000100 */
#define DP_RDBUFF_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000200 */
#define DP_RDBUFF_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000400 */
#define DP_RDBUFF_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00000800 */
#define DP_RDBUFF_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00001000 */
#define DP_RDBUFF_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00002000 */
#define DP_RDBUFF_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00004000 */
#define DP_RDBUFF_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00008000 */
#define DP_RDBUFF_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00010000 */
#define DP_RDBUFF_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00020000 */
#define DP_RDBUFF_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00040000 */
#define DP_RDBUFF_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00080000 */
#define DP_RDBUFF_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00100000 */
#define DP_RDBUFF_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00200000 */
#define DP_RDBUFF_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00400000 */
#define DP_RDBUFF_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x00800000 */
#define DP_RDBUFF_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x01000000 */
#define DP_RDBUFF_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x02000000 */
#define DP_RDBUFF_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x04000000 */
#define DP_RDBUFF_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x08000000 */
#define DP_RDBUFF_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x10000000 */
#define DP_RDBUFF_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x20000000 */
#define DP_RDBUFF_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x40000000 */
#define DP_RDBUFF_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(DP, RDBUFF, DATA))  /*!< Value 0x80000000 */

/*!< Target selection register */
#define DP_TARGETSEL_TINSTANCE_OFFSET  (28U)
#define DP_TARGETSEL_TINSTANCE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(DP, TARGETSEL, TINSTANCE))    /*!< Mask  0xF0000000 */

#define DP_TARGETSEL_TPARTNO_OFFSET    (20U)
#define DP_TARGETSEL_TPARTNO_MASK      (0xFFFFUL << REGISTER_FIELD_OFFSET(DP, TARGETSEL, TPARTNO))   /*!< Mask  0x0FFFF000 */

#define DP_TARGETSEL_TDESIGNER_OFFSET  (1U)
#define DP_TARGETSEL_TDESIGNER_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(DP, TARGETSEL, TDESIGNER))  /*!< Mask  0x00000FFE */

/** @} */ // End of DP group

/** @} */ // End of RegisterGroup group

#endif // DP_H
