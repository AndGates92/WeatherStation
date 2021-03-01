#ifndef MEMAP_H
#define MEMAP_H
/**
 * @copyright
 * @file ap.h
 * @author Andrea Gianarda
 * @date 28th of July 2021
 * @brief Memory access port (MEMAP) global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup MEMAP Memory access port (MEMAP) macros
 *  @brief Memory access port (MEMAP) macros
 *  @{
 */

typedef struct {
	RW uint32_t DAR[256];         /*!< Direct access register                                (Offset 0x000 to 0x3FC) */
	   uint32_t reserved0[3U];    /*!< Reserved                                              (Offset 0x400 to 0xCFC) */
	RW uint32_t CSW;              /*!< Control/Status word register                          (Offset 0xD00)          */
	RW uint32_t TAR[2];           /*!< Transfer address register                             (Offset 0xD04 to 0xD08) */
	RW uint32_t DRW;              /*!< Data read/write register                              (Offset 0xD0C)          */
	RW uint32_t BD[4];            /*!< Banked data register                                  (Offset 0xD10 to 0xD1C) */
	RW uint32_t MTB;              /*!< Memory barrier transfer register                      (Offset 0xD20)          */
	RW uint32_t TRR;              /*!< Transfer response register                            (Offset 0xD24)          */
	   uint32_t reserved1[2U];    /*!< Reserved                                              (Offset 0xD28 to 0xDEC) */
	RO uint32_t BASEH;            /*!< Debug base address (most significant word) register   (Offset 0xDF0)          */
	RO uint32_t CFG;              /*!< Configuration register                                (Offset 0xDF4)          */
	RO uint32_t BASEL;            /*!< Debug base address (least significant word) register  (Offset 0xDF8)          */
	RO uint32_t IDR;              /*!< Identification register                               (Offset 0xDFC)          */
	   uint32_t reserved2[256U];  /*!< Reserved                                              (Offset 0xE00 to 0xEFC) */
	RW uint32_t ITCTRL;           /*!< Integration mode control register                     (Offset 0xF00)          */
	   uint32_t reserved3[39U];   /*!< Reserved                                              (Offset 0xF04 to 0xF9C) */
	RW uint32_t CLAIMSET;         /*!< Claim tag set register                                (Offset 0xFA0)          */
	RW uint32_t CLAIMCLR;         /*!< Claim tag clear register                              (Offset 0xFA4)          */
	RO uint32_t DEVAFF0;          /*!< Device affinity 1 register                            (Offset 0xFA8)          */
	RO uint32_t DEVAFF1;          /*!< Device affinity 0 register                            (Offset 0xFAC)          */
	WO uint32_t LAR;              /*!< CoreSight lock access register                        (Offset 0xFB0)          */
	RO uint32_t LSR;              /*!< CoreSight lock status register                        (Offset 0xFB4)          */
	RO uint32_t AUTHSTAT;         /*!< Authentication status register                        (Offset 0xFB8)          */
	RO uint32_t DEVARCH;          /*!< Device architecture register                          (Offset 0xFBC)          */
	RO uint32_t DEVID2;           /*!< Device configuration 2 register                       (Offset 0xFC0)          */
	RO uint32_t DEVID1;           /*!< Device configuration 1 register                       (Offset 0xFC4)          */
	RO uint32_t DEVID;            /*!< Device configuration register                         (Offset 0xFC8)          */
	RO uint32_t DEVTYPE;          /*!< Device type register                                  (Offset 0xFCC)          */
	RO uint32_t PIDR4;            /*!< Peripheral identification 4 register                  (Offset 0xFD0)          */
	RO uint32_t PIDR5;            /*!< Peripheral identification 5 register                  (Offset 0xFD4)          */
	RO uint32_t PIDR6;            /*!< Peripheral identification 6 register                  (Offset 0xFD8)          */
	RO uint32_t PIDR7;            /*!< Peripheral identification 7 register                  (Offset 0xFDC)          */
	RO uint32_t PIDR0;            /*!< Peripheral identification 0 register                  (Offset 0xFE0)          */
	RO uint32_t PIDR1;            /*!< Peripheral identification 1 register                  (Offset 0xFE4)          */
	RO uint32_t PIDR2;            /*!< Peripheral identification 2 register                  (Offset 0xFE8)          */
	RO uint32_t PIDR3;            /*!< Peripheral identification 3 register                  (Offset 0xFEC)          */
	RO uint32_t CIDR0;            /*!< Component identification 0 register                   (Offset 0xFF0)          */
	RO uint32_t CIDR1;            /*!< Component identification 1 register                   (Offset 0xFF4)          */
	RO uint32_t CIDR2;            /*!< Component identification 2 register                   (Offset 0xFF8)          */
	RO uint32_t CIDR3;            /*!< Component identification 3 register                   (Offset 0xFFC)          */
} ap_regs;

/*!< Memory access port (MEMAP) registers in private peripheral bus (PPB) registers */
/*!< Direct access register */
#define MEMAP_DAR_DATA_OFFSET  (0U)
#define MEMAP_DAR_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DAR_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000001 */
#define MEMAP_DAR_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000002 */
#define MEMAP_DAR_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000004 */
#define MEMAP_DAR_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000008 */
#define MEMAP_DAR_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000010 */
#define MEMAP_DAR_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000020 */
#define MEMAP_DAR_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000040 */
#define MEMAP_DAR_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000080 */
#define MEMAP_DAR_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000100 */
#define MEMAP_DAR_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000200 */
#define MEMAP_DAR_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000400 */
#define MEMAP_DAR_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00000800 */
#define MEMAP_DAR_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00001000 */
#define MEMAP_DAR_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00002000 */
#define MEMAP_DAR_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00004000 */
#define MEMAP_DAR_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00008000 */
#define MEMAP_DAR_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00010000 */
#define MEMAP_DAR_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00020000 */
#define MEMAP_DAR_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00040000 */
#define MEMAP_DAR_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00080000 */
#define MEMAP_DAR_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00100000 */
#define MEMAP_DAR_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00200000 */
#define MEMAP_DAR_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00400000 */
#define MEMAP_DAR_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x00800000 */
#define MEMAP_DAR_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x01000000 */
#define MEMAP_DAR_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x02000000 */
#define MEMAP_DAR_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x04000000 */
#define MEMAP_DAR_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x08000000 */
#define MEMAP_DAR_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x10000000 */
#define MEMAP_DAR_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x20000000 */
#define MEMAP_DAR_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x40000000 */
#define MEMAP_DAR_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DAR, DATA))  /*!< Value 0x80000000 */

/*!< Control/Status word register */
#define MEMAP_CSW_DBGSWENABLE_OFFSET  (31U)
#define MEMAP_CSW_DBGSWENABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, DBGSWENABLE))  /*!< Mask  0x80000000 */

#define MEMAP_CSW_PROT_OFFSET         (24U)
#define MEMAP_CSW_PROT_MASK           (0x7FUL << REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT))        /*!< Mask  0x7F000000 */

#define MEMAP_CSW_SDEVICEEN_OFFSET    (23U)
#define MEMAP_CSW_SDEVICEEN_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, SDEVICEEN))    /*!< Mask  0x00800000 */

#define MEMAP_CSW_ERRSTOP_OFFSET      (17U)
#define MEMAP_CSW_ERRSTOP_MASK        (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, ERRSTOP))      /*!< Mask  0x00020000 */

#define MEMAP_CSW_ERRPASS_OFFSET      (16U)
#define MEMAP_CSW_ERRPASS_MASK        (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, ERRPASS))      /*!< Mask  0x00010000 */

#define MEMAP_CSW_TYPE_OFFSET         (12U)
#define MEMAP_CSW_TYPE_MASK           (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CSW, TYPE))         /*!< Mask  0x0000F000 */

#define MEMAP_CSW_MODE_OFFSET         (8U)
#define MEMAP_CSW_MODE_MASK           (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CSW, MODE))         /*!< Mask  0x00000F00 */

#define MEMAP_CSW_TRINPROG_OFFSET     (7U)
#define MEMAP_CSW_TRINPROG_MASK       (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, TRINPROG))     /*!< Mask  0x00000080 */

#define MEMAP_CSW_DEVICEEN_OFFSET     (6U)
#define MEMAP_CSW_DEVICEEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, DEVICEEN))     /*!< Mask  0x00000040 */

#define MEMAP_CSW_ADDRINC_OFFSET      (4U)
#define MEMAP_CSW_ADDRINC_MASK        (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, ADDRINC))      /*!< Mask  0x00000030 */

#define MEMAP_CSW_SIZE_OFFSET         (0U)
#define MEMAP_CSW_SIZE_MASK           (0x7UL << REGISTER_FIELD_OFFSET(MEMAP, CSW, SIZE))         /*!< Mask  0x00000007 */

// Values of debug software access enable bit
#define MEMAP_DEBUGSOFTWAREACCESS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_DEBUGSOFTWAREACCESS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bus access protection control register bits
#define DP_ACCESSBUSSHAREABLE   (6U)
#define DP_ACCESSBUSALLOCATE    (5U)
#define DP_ACCESSBUSLOOKUP      (4U)
#define DP_ACCESSBUSMODIFIABLE  (3U)
#define DP_ACCESSBUSBUFFERABLE  (2U)
#define DP_ACCESSBUSPRIVILEGED  (1U)
#define DP_ACCESSBUSCONTENT     (0U)

// Values of bus access protection control register field
#define DP_BUSACCESSPROTECTION_SHAREABLE_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSSHAREABLE)
#define DP_BUSACCESSPROTECTION_SHAREABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, SHAREABLE))    /*!< Mask  0x40000000 */

#define DP_BUSACCESSPROTECTION_ALLOCATE_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSALLOCATE)
#define DP_BUSACCESSPROTECTION_ALLOCATE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, ALLOCATE))      /*!< Mask  0x20000000 */

#define DP_BUSACCESSPROTECTION_LOOKUP_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSLOOKUP)
#define DP_BUSACCESSPROTECTION_LOOKUP_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, LOOKUP))          /*!< Mask  0x10000000 */

#define DP_BUSACCESSPROTECTION_MODIFIABLE_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSMODIFIABLE)
#define DP_BUSACCESSPROTECTION_MODIFIABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, MODIFIABLE))  /*!< Mask  0x08000000 */

#define DP_BUSACCESSPROTECTION_BUFFERABLE_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSBUFFERABLE)
#define DP_BUSACCESSPROTECTION_BUFFERABLE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, BUFFERABLE))  /*!< Mask  0x04000000 */

#define DP_BUSACCESSPROTECTION_PRIVILEGED_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSPRIVILEGED)
#define DP_BUSACCESSPROTECTION_PRIVILEGED_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, PRIVILEGED))  /*!< Mask  0x02000000 */

#define DP_BUSACCESSPROTECTION_CONTENT_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CSW, PROT) + DP_ACCESSBUSCONTENT)
#define DP_BUSACCESSPROTECTION_CONTENT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(DP, BUSACCESSPROTECTION, CONTENT))        /*!< Mask  0x01000000 */

// Values of the register bit controlling the region the informations are transfered to
#define MEMAP_BUSTRANSFERREGION_NONSHAREABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERREGION_SHAREABLE     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit controlling whether the transfer is allocated in the cache or not
#define MEMAP_BUSTRANSFERALLOCATION_NONCACHE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERALLOCATION_CACHE     (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit controlling whether the transfer must be looked up in cache
#define MEMAP_BUSTRANSFERCACHELOOKUP_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERCACHELOOKUP_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit controlling whether the characteristics of the transfer can be modified
#define MEMAP_BUSTRANSFERMODIFIABLE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERMODIFIABLE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit controlling whether the write response can be buffered (i.e. given from an intermediate point or final destination)
#define MEMAP_BUSTRANSFERWRITERESPONSE_FINALDESTINSTION   (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERWRITERESPONSE_INTERMEDIATEPOINT  (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit controlling whether the transfer is a priviledged access or not
#define MEMAP_BUSTRANSFERPRIVILEGEDACCESS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERPRIVILEGEDACCESS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the register bit stating the content of the transfer
#define MEMAP_BUSTRANSFERCONTENT_INSTRUCTION  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BUSTRANSFERCONTENT_DATA         (0x1UL)  /*!< Value 0x00000001 */

// Values of secure debug enable bit
#define MEMAP_SECUREDEBUG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_SECUREDEBUG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the bit enabling future memory accesses after errors
#define MEMAP_MEMORYACCESSAFTERERROR_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_MEMORYACCESSAFTERERROR_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of error upstream enable bit
#define MEMAP_ERRORUPSTREAM_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_ERRORUPSTREAM_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of mode of operation register field
#define MEMAP_OPERATIONMODE_BASICMODE             (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_OPERATIONMODE_BARRIERSUPPORTENABLE  (0x1UL)  /*!< Value 0x00000001 */

// Values of transfer in progress status bit
#define MEMAP_MODECONNECTION_IDLE                (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_MODECONNECTION_TRANSFERINPROGRESS  (0x1UL)  /*!< Value 0x00000001 */

// Values of device enable bit
#define MEMAP_DEVICE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_DEVICE_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of auto increment and packing register field
#define MEMAP_AUTOINCREMENT_OFF     (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_AUTOINCREMENT_SINGLE  (0x1UL)  /*!< Value 0x00000001 */
#define MEMAP_AUTOINCREMENT_PACKED  (0x2UL)  /*!< Value 0x00000002 */

// Values of data type size register field
#define MEMAP_DATASIZE_BYTE        (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_DATASIZE_HALFWORD    (0x1UL)  /*!< Value 0x00000001 */
#define MEMAP_DATASIZE_WORD        (0x2UL)  /*!< Value 0x00000002 */
#define MEMAP_DATASIZE_DOUBLEWORD  (0x3UL)  /*!< Value 0x00000003 */
#define MEMAP_DATASIZE_128BIT      (0x4UL)  /*!< Value 0x00000004 */
#define MEMAP_DATASIZE_256BIT      (0x5UL)  /*!< Value 0x00000005 */

/*!< Transfer address register */
#define MEMAP_TAR_ADDRESS_OFFSET  (0U)
#define MEMAP_TAR_ADDRESS_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_TAR_ADDRESS_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000001 */
#define MEMAP_TAR_ADDRESS_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000002 */
#define MEMAP_TAR_ADDRESS_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000004 */
#define MEMAP_TAR_ADDRESS_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000008 */
#define MEMAP_TAR_ADDRESS_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000010 */
#define MEMAP_TAR_ADDRESS_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000020 */
#define MEMAP_TAR_ADDRESS_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000040 */
#define MEMAP_TAR_ADDRESS_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000080 */
#define MEMAP_TAR_ADDRESS_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000100 */
#define MEMAP_TAR_ADDRESS_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000200 */
#define MEMAP_TAR_ADDRESS_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000400 */
#define MEMAP_TAR_ADDRESS_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00000800 */
#define MEMAP_TAR_ADDRESS_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00001000 */
#define MEMAP_TAR_ADDRESS_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00002000 */
#define MEMAP_TAR_ADDRESS_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00004000 */
#define MEMAP_TAR_ADDRESS_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00008000 */
#define MEMAP_TAR_ADDRESS_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00010000 */
#define MEMAP_TAR_ADDRESS_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00020000 */
#define MEMAP_TAR_ADDRESS_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00040000 */
#define MEMAP_TAR_ADDRESS_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00080000 */
#define MEMAP_TAR_ADDRESS_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00100000 */
#define MEMAP_TAR_ADDRESS_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00200000 */
#define MEMAP_TAR_ADDRESS_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00400000 */
#define MEMAP_TAR_ADDRESS_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x00800000 */
#define MEMAP_TAR_ADDRESS_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x01000000 */
#define MEMAP_TAR_ADDRESS_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x02000000 */
#define MEMAP_TAR_ADDRESS_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x04000000 */
#define MEMAP_TAR_ADDRESS_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x08000000 */
#define MEMAP_TAR_ADDRESS_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x10000000 */
#define MEMAP_TAR_ADDRESS_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x20000000 */
#define MEMAP_TAR_ADDRESS_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x40000000 */
#define MEMAP_TAR_ADDRESS_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, TAR, ADDRESS))  /*!< Value 0x80000000 */

/*!< Data read/write register */
#define MEMAP_DRW_DATA_OFFSET  (0U)
#define MEMAP_DRW_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DRW_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000001 */
#define MEMAP_DRW_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000002 */
#define MEMAP_DRW_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000004 */
#define MEMAP_DRW_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000008 */
#define MEMAP_DRW_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000010 */
#define MEMAP_DRW_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000020 */
#define MEMAP_DRW_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000040 */
#define MEMAP_DRW_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000080 */
#define MEMAP_DRW_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000100 */
#define MEMAP_DRW_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000200 */
#define MEMAP_DRW_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000400 */
#define MEMAP_DRW_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00000800 */
#define MEMAP_DRW_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00001000 */
#define MEMAP_DRW_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00002000 */
#define MEMAP_DRW_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00004000 */
#define MEMAP_DRW_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00008000 */
#define MEMAP_DRW_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00010000 */
#define MEMAP_DRW_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00020000 */
#define MEMAP_DRW_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00040000 */
#define MEMAP_DRW_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00080000 */
#define MEMAP_DRW_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00100000 */
#define MEMAP_DRW_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00200000 */
#define MEMAP_DRW_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00400000 */
#define MEMAP_DRW_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x00800000 */
#define MEMAP_DRW_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x01000000 */
#define MEMAP_DRW_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x02000000 */
#define MEMAP_DRW_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x04000000 */
#define MEMAP_DRW_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x08000000 */
#define MEMAP_DRW_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x10000000 */
#define MEMAP_DRW_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x20000000 */
#define MEMAP_DRW_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x40000000 */
#define MEMAP_DRW_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DRW, DATA))  /*!< Value 0x80000000 */

/*!< Banked data register */
#define MEMAP_BD_DATA_OFFSET  (0U)
#define MEMAP_BD_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_BD_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000001 */
#define MEMAP_BD_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000002 */
#define MEMAP_BD_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000004 */
#define MEMAP_BD_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000008 */
#define MEMAP_BD_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000010 */
#define MEMAP_BD_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000020 */
#define MEMAP_BD_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000040 */
#define MEMAP_BD_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000080 */
#define MEMAP_BD_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000100 */
#define MEMAP_BD_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000200 */
#define MEMAP_BD_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000400 */
#define MEMAP_BD_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00000800 */
#define MEMAP_BD_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00001000 */
#define MEMAP_BD_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00002000 */
#define MEMAP_BD_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00004000 */
#define MEMAP_BD_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00008000 */
#define MEMAP_BD_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00010000 */
#define MEMAP_BD_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00020000 */
#define MEMAP_BD_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00040000 */
#define MEMAP_BD_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00080000 */
#define MEMAP_BD_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00100000 */
#define MEMAP_BD_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00200000 */
#define MEMAP_BD_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00400000 */
#define MEMAP_BD_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x00800000 */
#define MEMAP_BD_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x01000000 */
#define MEMAP_BD_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x02000000 */
#define MEMAP_BD_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x04000000 */
#define MEMAP_BD_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x08000000 */
#define MEMAP_BD_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x10000000 */
#define MEMAP_BD_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x20000000 */
#define MEMAP_BD_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x40000000 */
#define MEMAP_BD_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, BD, DATA))  /*!< Value 0x80000000 */

/*!< Memory barrier transfer register */
#define MEMAP_MBT_DATA_OFFSET  (0U)
#define MEMAP_MBT_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_MBT_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000001 */
#define MEMAP_MBT_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000002 */
#define MEMAP_MBT_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000004 */
#define MEMAP_MBT_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000008 */
#define MEMAP_MBT_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000010 */
#define MEMAP_MBT_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000020 */
#define MEMAP_MBT_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000040 */
#define MEMAP_MBT_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000080 */
#define MEMAP_MBT_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000100 */
#define MEMAP_MBT_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000200 */
#define MEMAP_MBT_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000400 */
#define MEMAP_MBT_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00000800 */
#define MEMAP_MBT_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00001000 */
#define MEMAP_MBT_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00002000 */
#define MEMAP_MBT_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00004000 */
#define MEMAP_MBT_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00008000 */
#define MEMAP_MBT_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00010000 */
#define MEMAP_MBT_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00020000 */
#define MEMAP_MBT_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00040000 */
#define MEMAP_MBT_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00080000 */
#define MEMAP_MBT_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00100000 */
#define MEMAP_MBT_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00200000 */
#define MEMAP_MBT_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00400000 */
#define MEMAP_MBT_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x00800000 */
#define MEMAP_MBT_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x01000000 */
#define MEMAP_MBT_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x02000000 */
#define MEMAP_MBT_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x04000000 */
#define MEMAP_MBT_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x08000000 */
#define MEMAP_MBT_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x10000000 */
#define MEMAP_MBT_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x20000000 */
#define MEMAP_MBT_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x40000000 */
#define MEMAP_MBT_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, MBT, DATA))  /*!< Value 0x80000000 */

/*!< Transfer response register */
#define MEMAP_TRR_ERROR_OFFSET  (0U)
#define MEMAP_TRR_ERROR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, TRR, ERROR))  /*!< Mask  0x00000001 */

// Values of transfer response error bit
// Values returned on reads (error logging)
#define MEMAP_TRANSFERRESPONSEERROR_NOTLOGGED  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_TRANSFERRESPONSEERROR_LOGGED     (0x1UL)  /*!< Value 0x00000001 */

// Values used for writing (error response clear)
#define MEMAP_TRANSFERRESPONSEERROR_NOEFFECT  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_TRANSFERRESPONSEERROR_CLEARED   (0x1UL)  /*!< Value 0x00000001 */

/*!< Higher base address register */
#define MEMAP_BASEH_DATA_OFFSET  (0U)
#define MEMAP_BASEH_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_BASEH_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000001 */
#define MEMAP_BASEH_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000002 */
#define MEMAP_BASEH_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000004 */
#define MEMAP_BASEH_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000008 */
#define MEMAP_BASEH_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000010 */
#define MEMAP_BASEH_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000020 */
#define MEMAP_BASEH_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000040 */
#define MEMAP_BASEH_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000080 */
#define MEMAP_BASEH_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000100 */
#define MEMAP_BASEH_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000200 */
#define MEMAP_BASEH_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000400 */
#define MEMAP_BASEH_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00000800 */
#define MEMAP_BASEH_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00001000 */
#define MEMAP_BASEH_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00002000 */
#define MEMAP_BASEH_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00004000 */
#define MEMAP_BASEH_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00008000 */
#define MEMAP_BASEH_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00010000 */
#define MEMAP_BASEH_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00020000 */
#define MEMAP_BASEH_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00040000 */
#define MEMAP_BASEH_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00080000 */
#define MEMAP_BASEH_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00100000 */
#define MEMAP_BASEH_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00200000 */
#define MEMAP_BASEH_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00400000 */
#define MEMAP_BASEH_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x00800000 */
#define MEMAP_BASEH_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x01000000 */
#define MEMAP_BASEH_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x02000000 */
#define MEMAP_BASEH_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x04000000 */
#define MEMAP_BASEH_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x08000000 */
#define MEMAP_BASEH_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x10000000 */
#define MEMAP_BASEH_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x20000000 */
#define MEMAP_BASEH_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x40000000 */
#define MEMAP_BASEH_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEH, DATA))  /*!< Value 0x80000000 */

/*!< Configuration register */
#define MEMAP_CFG_TARINC_OFFSET   (16U)
#define MEMAP_CFG_TARINC_MASK     (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CFG, TARINC))   /*!< Mask  0x000F0000 */

#define MEMAP_CFG_ERR_OFFSET      (8U)
#define MEMAP_CFG_ERR_MASK        (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CFG, ERR))      /*!< Mask  0x00000F00 */

#define MEMAP_CFG_DARSIZE_OFFSET  (4U)
#define MEMAP_CFG_DARSIZE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CFG, DARSIZE))  /*!< Mask  0x000000F0 */

#define MEMAP_CFG_LD_OFFSET       (2U)
#define MEMAP_CFG_LD_MASK         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CFG, LD))       /*!< Mask  0x00000004 */

#define MEMAP_CFG_LA_OFFSET       (1U)
#define MEMAP_CFG_LA_MASK         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CFG, LA))       /*!< Mask  0x00000002 */

#define MEMAP_CFG_BE_OFFSET       (0U)
#define MEMAP_CFG_BE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CFG, BE))       /*!< Mask  0x00000001 */

// Values of transfer address register increment register
#define MEMAP_TARINCREMENT_UNSPECIFIED  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_TARINCREMENT_10           (0x1UL)  /*!< Value 0x00000001 */
#define MEMAP_TARINCREMENT_11           (0x2UL)  /*!< Value 0x00000002 */
#define MEMAP_TARINCREMENT_12           (0x3UL)  /*!< Value 0x00000003 */
#define MEMAP_TARINCREMENT_13           (0x4UL)  /*!< Value 0x00000004 */
#define MEMAP_TARINCREMENT_14           (0x5UL)  /*!< Value 0x00000005 */
#define MEMAP_TARINCREMENT_15           (0x6UL)  /*!< Value 0x00000006 */
#define MEMAP_TARINCREMENT_16           (0x7UL)  /*!< Value 0x00000007 */
#define MEMAP_TARINCREMENT_17           (0x8UL)  /*!< Value 0x00000008 */
#define MEMAP_TARINCREMENT_18           (0x9UL)  /*!< Value 0x00000009 */
#define MEMAP_TARINCREMENT_19           (0xAUL)  /*!< Value 0x0000000A */
#define MEMAP_TARINCREMENT_20           (0xBUL)  /*!< Value 0x0000000B */
#define MEMAP_TARINCREMENT_21           (0xCUL)  /*!< Value 0x0000000C */
#define MEMAP_TARINCREMENT_22           (0xDUL)  /*!< Value 0x0000000D */
#define MEMAP_TARINCREMENT_23           (0xEUL)  /*!< Value 0x0000000E */
#define MEMAP_TARINCREMENT_24           (0xFUL)  /*!< Value 0x0000000F */

// Values of type of error handling register
#define MEMAP_ERRORHANDLINGTYPE_PASSEDUPSTREAM          (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_ERRORHANDLINGTYPE_TRRCSWERRORIMPLEMENTED  (0x1UL)  /*!< Value 0x00000001 */

// Values of secure debug enable bit
#define MEMAP_SECUREDEBUG_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_SECUREDEBUG_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of the size of the direct access register space
#define MEMAP_DARSIZE_0KB  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_DARSIZE_1KB  (0x1UL)  /*!< Value 0x00000001 */

// Values of large data extension support bit
#define MEMAP_LARGEDATAEXTENSION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_LARGEDATAEXTENSION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of large physical address extension support bit
#define MEMAP_LONGPHYSICALADDRESSEXTENSION_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_LONGPHYSICALADDRESSEXTENSION_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of big endian support bit
#define MEMAP_ENDIANNESS_BIG     (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_ENDIANNESS_LITTLE  (0x1UL)  /*!< Value 0x00000001 */

/*!< Lower base address register */
#define MEMAP_BASEL_BASEADDR_OFFSET  (12U)
#define MEMAP_BASEL_BASEADDR_MASK    (0xFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Mask  0xFFFFF000 */
#define MEMAP_BASEL_BASEADDR_0       (0x00001UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00001000 */
#define MEMAP_BASEL_BASEADDR_1       (0x00002UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00002000 */
#define MEMAP_BASEL_BASEADDR_2       (0x00004UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00004000 */
#define MEMAP_BASEL_BASEADDR_3       (0x00008UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00008000 */
#define MEMAP_BASEL_BASEADDR_4       (0x00010UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00010000 */
#define MEMAP_BASEL_BASEADDR_5       (0x00020UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00020000 */
#define MEMAP_BASEL_BASEADDR_6       (0x00040UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00040000 */
#define MEMAP_BASEL_BASEADDR_7       (0x00080UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00080000 */
#define MEMAP_BASEL_BASEADDR_8       (0x00100UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00100000 */
#define MEMAP_BASEL_BASEADDR_9       (0x00200UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00200000 */
#define MEMAP_BASEL_BASEADDR_10      (0x00400UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00400000 */
#define MEMAP_BASEL_BASEADDR_11      (0x00800UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x00800000 */
#define MEMAP_BASEL_BASEADDR_12      (0x01000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x01000000 */
#define MEMAP_BASEL_BASEADDR_13      (0x02000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x02000000 */
#define MEMAP_BASEL_BASEADDR_14      (0x04000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x04000000 */
#define MEMAP_BASEL_BASEADDR_15      (0x08000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x08000000 */
#define MEMAP_BASEL_BASEADDR_16      (0x10000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x10000000 */
#define MEMAP_BASEL_BASEADDR_17      (0x20000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x20000000 */
#define MEMAP_BASEL_BASEADDR_18      (0x40000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x40000000 */
#define MEMAP_BASEL_BASEADDR_19      (0x80000UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, BASEADDR))  /*!< Value 0x80000000 */

#define MEMAP_BASEL_FORMAT_OFFSET    (1U)
#define MEMAP_BASEL_FORMAT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, FORMAT))        /*!< Mask  0x00000002 */

#define MEMAP_BASEL_P_OFFSET         (0U)
#define MEMAP_BASEL_P_MASK           (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, BASEL, P))             /*!< Mask  0x00000001 */

// Values of base address register format bit
#define MEMAP_BASEADDRESSFORMAT_LEGACY  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_BASEADDRESSFORMAT_ADIv6   (0x1UL)  /*!< Value 0x00000001 */

// Values of debug entry present bit
#define MEMAP_DEBUGENTRY_NOTPRESENT  (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_DEBUGENTRY_PRESENT     (0x1UL)  /*!< Value 0x00000001 */

/*!< Identification register */
#define MEMAP_IDR_REVISION_OFFSET  (28U)
#define MEMAP_IDR_REVISION_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, IDR, REVISION))    /*!< Mask  0xF0000000 */

#define MEMAP_IDR_DESIGNER_OFFSET  (17U)
#define MEMAP_IDR_DESIGNER_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(MEMAP, IDR, DESIGNER))  /*!< Mask  0x0FFE0000 */

#define MEMAP_IDR_CLASS_OFFSET     (13U)
#define MEMAP_IDR_CLASS_MASK       (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, IDR, CLASS))       /*!< Mask  0x0001E000 */

#define MEMAP_IDR_VARIANT_OFFSET   (4U)
#define MEMAP_IDR_VARIANT_MASK     (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, IDR, VARIANT))     /*!< Mask  0x000000F0 */

#define MEMAP_IDR_TYPE_OFFSET      (0U)
#define MEMAP_IDR_TYPE_MASK        (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, IDR, TYPE))        /*!< Mask  0x0000000F */

// Values of access port designer JEDEC code register bits
#define MEMAP_JEDECBANK  (7U)
#define MEMAP_JEDECCODE  (0U)

// Values of access port designer JEDEC code
#define MEMAP_DESIGNER_JEDECBANK_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, IDR, DESIGNER) + MEMAP_JEDECBANK)
#define MEMAP_DESIGNER_JEDECBANK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, DESIGNER, JEDECBANK))  /*!< Mask  0x0F000000 */

#define MEMAP_DESIGNER_JEDECCODE_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, IDR, DESIGNER) + MEMAP_JEDECCODE)
#define MEMAP_DESIGNER_JEDECCODE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, DESIGNER, JEDECCODE))  /*!< Mask  0x00FE0000 */

// Values of access port class register
#define MEMAP_CLASS_NODEFINEDCLASS    (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_CLASS_MEMORYACCESSPORT  (0x8UL)  /*!< Value 0x00000001 */

// Values of type of bus or connection register
#define MEMAP_CONNECTIONTYPE_JTAG          (0x0UL)  /*!< Value 0x00000000 */
#define MEMAP_CONNECTIONTYPE_AMBAAHB3      (0x1UL)  /*!< Value 0x00000001 */
#define MEMAP_CONNECTIONTYPE_AMBAAPB2APB3  (0x2UL)  /*!< Value 0x00000002 */
#define MEMAP_CONNECTIONTYPE_AMBAAXI3AXI4  (0x4UL)  /*!< Value 0x00000004 */
#define MEMAP_CONNECTIONTYPE_AMBAAHB5      (0x5UL)  /*!< Value 0x00000005 */

/*!< Integration mode control register */
#define MEMAP_ITCTRL_IME_OFFSET  (0U)
#define MEMAP_ITCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, ITCTRL, IME))  /*!< Mask  0x00000001 */

/*!< Claim tag set register */
#define MEMAP_CLAIMSET_CLAIMSET_OFFSET  (0U)
#define MEMAP_CLAIMSET_CLAIMSET_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MEMAP, CLAIMSET, CLAIMSET))  /*!< Mask  0x000000FF */

// Values of claim tag set register bits
#define MEMAP_CLAIMSET_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CLAIMSET, CLAIMSET) + CLAIM_BIT1)
#define MEMAP_CLAIMSET_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CLAIMSET, BIT1))  /*!< Mask  0x00000002 */

#define MEMAP_CLAIMSET_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CLAIMSET, CLAIMSET) + CLAIM_BIT0)
#define MEMAP_CLAIMSET_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CLAIMSET, BIT0))  /*!< Mask  0x00000001 */

/*!< Claim tag clear register */
#define MEMAP_CLAIMCLR_CLAIMCLR_OFFSET  (0U)
#define MEMAP_CLAIMCLR_CLAIMCLR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CLAIMCLR, CLAIMCLR))  /*!< Mask  0x0000000F */

// Values of claim tag clear register bits
#define MEMAP_CLAIMCLR_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CLAIMCLR, CLAIMCLR) + CLAIM_BIT1)
#define MEMAP_CLAIMCLR_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CLAIMCLR, BIT1))  /*!< Mask  0x00000002 */

#define MEMAP_CLAIMCLR_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(MEMAP, CLAIMCLR, CLAIMCLR) + CLAIM_BIT0)
#define MEMAP_CLAIMCLR_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CLAIMCLR, BIT0))  /*!< Mask  0x00000001 */

/*!< Device affinity 0 register */
#define MEMAP_DEVAFF0_AFFINITY_OFFSET  (0U)
#define MEMAP_DEVAFF0_AFFINITY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DEVAFF0_AFFINITY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000001 */
#define MEMAP_DEVAFF0_AFFINITY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000002 */
#define MEMAP_DEVAFF0_AFFINITY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000004 */
#define MEMAP_DEVAFF0_AFFINITY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000008 */
#define MEMAP_DEVAFF0_AFFINITY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000010 */
#define MEMAP_DEVAFF0_AFFINITY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000020 */
#define MEMAP_DEVAFF0_AFFINITY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000040 */
#define MEMAP_DEVAFF0_AFFINITY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000080 */
#define MEMAP_DEVAFF0_AFFINITY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000100 */
#define MEMAP_DEVAFF0_AFFINITY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000200 */
#define MEMAP_DEVAFF0_AFFINITY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000400 */
#define MEMAP_DEVAFF0_AFFINITY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00000800 */
#define MEMAP_DEVAFF0_AFFINITY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00001000 */
#define MEMAP_DEVAFF0_AFFINITY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00002000 */
#define MEMAP_DEVAFF0_AFFINITY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00004000 */
#define MEMAP_DEVAFF0_AFFINITY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00008000 */
#define MEMAP_DEVAFF0_AFFINITY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00010000 */
#define MEMAP_DEVAFF0_AFFINITY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00020000 */
#define MEMAP_DEVAFF0_AFFINITY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00040000 */
#define MEMAP_DEVAFF0_AFFINITY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00080000 */
#define MEMAP_DEVAFF0_AFFINITY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00100000 */
#define MEMAP_DEVAFF0_AFFINITY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00200000 */
#define MEMAP_DEVAFF0_AFFINITY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00400000 */
#define MEMAP_DEVAFF0_AFFINITY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x00800000 */
#define MEMAP_DEVAFF0_AFFINITY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x01000000 */
#define MEMAP_DEVAFF0_AFFINITY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x02000000 */
#define MEMAP_DEVAFF0_AFFINITY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x04000000 */
#define MEMAP_DEVAFF0_AFFINITY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x08000000 */
#define MEMAP_DEVAFF0_AFFINITY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x10000000 */
#define MEMAP_DEVAFF0_AFFINITY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x20000000 */
#define MEMAP_DEVAFF0_AFFINITY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x40000000 */
#define MEMAP_DEVAFF0_AFFINITY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF0, AFFINITY))  /*!< Value 0x80000000 */

/*!< Device affinity 1 register */
#define MEMAP_DEVAFF1_AFFINITY_OFFSET  (0U)
#define MEMAP_DEVAFF1_AFFINITY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DEVAFF1_AFFINITY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000001 */
#define MEMAP_DEVAFF1_AFFINITY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000002 */
#define MEMAP_DEVAFF1_AFFINITY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000004 */
#define MEMAP_DEVAFF1_AFFINITY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000008 */
#define MEMAP_DEVAFF1_AFFINITY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000010 */
#define MEMAP_DEVAFF1_AFFINITY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000020 */
#define MEMAP_DEVAFF1_AFFINITY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000040 */
#define MEMAP_DEVAFF1_AFFINITY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000080 */
#define MEMAP_DEVAFF1_AFFINITY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000100 */
#define MEMAP_DEVAFF1_AFFINITY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000200 */
#define MEMAP_DEVAFF1_AFFINITY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000400 */
#define MEMAP_DEVAFF1_AFFINITY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00000800 */
#define MEMAP_DEVAFF1_AFFINITY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00001000 */
#define MEMAP_DEVAFF1_AFFINITY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00002000 */
#define MEMAP_DEVAFF1_AFFINITY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00004000 */
#define MEMAP_DEVAFF1_AFFINITY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00008000 */
#define MEMAP_DEVAFF1_AFFINITY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00010000 */
#define MEMAP_DEVAFF1_AFFINITY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00020000 */
#define MEMAP_DEVAFF1_AFFINITY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00040000 */
#define MEMAP_DEVAFF1_AFFINITY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00080000 */
#define MEMAP_DEVAFF1_AFFINITY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00100000 */
#define MEMAP_DEVAFF1_AFFINITY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00200000 */
#define MEMAP_DEVAFF1_AFFINITY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00400000 */
#define MEMAP_DEVAFF1_AFFINITY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x00800000 */
#define MEMAP_DEVAFF1_AFFINITY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x01000000 */
#define MEMAP_DEVAFF1_AFFINITY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x02000000 */
#define MEMAP_DEVAFF1_AFFINITY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x04000000 */
#define MEMAP_DEVAFF1_AFFINITY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x08000000 */
#define MEMAP_DEVAFF1_AFFINITY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x10000000 */
#define MEMAP_DEVAFF1_AFFINITY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x20000000 */
#define MEMAP_DEVAFF1_AFFINITY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x40000000 */
#define MEMAP_DEVAFF1_AFFINITY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVAFF1, AFFINITY))  /*!< Value 0x80000000 */

/*!< CoreSight lock access register */
#define MEMAP_LAR_KEY_OFFSET  (0U)
#define MEMAP_LAR_KEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_LAR_KEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000001 */
#define MEMAP_LAR_KEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000002 */
#define MEMAP_LAR_KEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000004 */
#define MEMAP_LAR_KEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000008 */
#define MEMAP_LAR_KEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000010 */
#define MEMAP_LAR_KEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000020 */
#define MEMAP_LAR_KEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000040 */
#define MEMAP_LAR_KEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000080 */
#define MEMAP_LAR_KEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000100 */
#define MEMAP_LAR_KEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000200 */
#define MEMAP_LAR_KEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000400 */
#define MEMAP_LAR_KEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00000800 */
#define MEMAP_LAR_KEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00001000 */
#define MEMAP_LAR_KEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00002000 */
#define MEMAP_LAR_KEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00004000 */
#define MEMAP_LAR_KEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00008000 */
#define MEMAP_LAR_KEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00010000 */
#define MEMAP_LAR_KEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00020000 */
#define MEMAP_LAR_KEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00040000 */
#define MEMAP_LAR_KEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00080000 */
#define MEMAP_LAR_KEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00100000 */
#define MEMAP_LAR_KEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00200000 */
#define MEMAP_LAR_KEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00400000 */
#define MEMAP_LAR_KEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x00800000 */
#define MEMAP_LAR_KEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x01000000 */
#define MEMAP_LAR_KEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x02000000 */
#define MEMAP_LAR_KEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x04000000 */
#define MEMAP_LAR_KEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x08000000 */
#define MEMAP_LAR_KEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x10000000 */
#define MEMAP_LAR_KEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x20000000 */
#define MEMAP_LAR_KEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x40000000 */
#define MEMAP_LAR_KEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, LAR, KEY))  /*!< Value 0x80000000 */

/*!< CoreSight lock status register */
#define MEMAP_LSR_NTT_OFFSET  (2U)
#define MEMAP_LSR_NTT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, LSR, NTT))  /*!< Mask  0x00000004 */

#define MEMAP_LSR_SLK_OFFSET  (1U)
#define MEMAP_LSR_SLK_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, LSR, SLK))  /*!< Mask  0x00000002 */

#define MEMAP_LSR_SLI_OFFSET  (0U)
#define MEMAP_LSR_SLI_MASK    (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, LSR, SLI))  /*!< Mask  0x00000001 */

/*!< Authentication status register */
#define MEMAP_AUTHSTAT_HNID_OFFSET   (10U)
#define MEMAP_AUTHSTAT_HNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, AUTHSTAT, HNID))   /*!< Mask  0x00000C00 - non-invasive debug for exception level 2 (EL2) */

#define MEMAP_AUTHSTAT_HID_OFFSET    (8U)
#define MEMAP_AUTHSTAT_HID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, AUTHSTAT, HID))    /*!< Mask  0x00000300 - invasive debug for exception level 2 (EL2) */

#define MEMAP_AUTHSTAT_SNID_OFFSET   (6U)
#define MEMAP_AUTHSTAT_SNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, AUTHSTAT, SNID))   /*!< Mask  0x000000C0 - security level for secure non-invasive debug */

#define MEMAP_AUTHSTAT_SID_OFFSET    (4U)
#define MEMAP_AUTHSTAT_SID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, AUTHSTAT, SID))    /*!< Mask  0x00000030 - security level for secure invasive debug */

#define MEMAP_AUTHSTAT_NSNID_OFFSET  (2U)
#define MEMAP_AUTHSTAT_NSNID_MASK    (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, AUTHSTAT, NSNID))  /*!< Mask  0x0000000C - security level for non secure non-invasive debug */

#define MEMAP_AUTHSTAT_NSID_OFFSET   (0U)
#define MEMAP_AUTHSTAT_NSID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(MEMAP, AUTHSTAT, NSID))   /*!< Mask  0x00000003 - security level for non secure invasive debug */

/*!< Device architecture register */
#define MEMAP_DEVARCH_ARCHITECT_OFFSET  (21U)
#define MEMAP_DEVARCH_ARCHITECT_MASK    (0x7FFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVARCH, ARCHITECT))  /*!< Mask  0xFFE00000 */

#define MEMAP_DEVARCH_PRESENT_OFFSET    (20U)
#define MEMAP_DEVARCH_PRESENT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, DEVARCH, PRESENT))      /*!< Mask  0x001000C0 */

#define MEMAP_DEVARCH_REVISION_OFFSET   (16U)
#define MEMAP_DEVARCH_REVISION_MASK     (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVARCH, REVISION))     /*!< Mask  0x000F0000 */

#define MEMAP_DEVARCH_ARCHID_OFFSET     (0U)
#define MEMAP_DEVARCH_ARCHID_MASK       (0xFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVARCH, ARCHPART))  /*!< Mask  0x0000FFFF */

// Values of architect component register
#define MEMAP_ARCHITECT_ARM  (0x23BUL)  /*!< Value 0x0000023B - ARM continuation code (bits 31:28) is 0x4 and JEP106 code for ARM (bits 27:21) is 0x3B */

// Values of device architecture presence bit
#define MEMAP_DEVARCH_PRESENT  (0x1UL)  /*!< Value 0x00000001 */

// Values of revision register
#define MEMAP_REVISION_V0  (0x0UL)  /*!< Value 0x00000000 - v0 */

// Values of architecture id register
#define MEMAP_ARCHPARTNUM_MEMAPV4  (0x0A17UL)  /*!< Value 0x00000A17 */

/*!< Device configuration 2 register */
#define MEMAP_DEVID2_RSVD_OFFSET  (0U)
#define MEMAP_DEVID2_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DEVID2_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000001 */
#define MEMAP_DEVID2_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000002 */
#define MEMAP_DEVID2_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000004 */
#define MEMAP_DEVID2_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000008 */
#define MEMAP_DEVID2_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000010 */
#define MEMAP_DEVID2_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000020 */
#define MEMAP_DEVID2_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000040 */
#define MEMAP_DEVID2_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000080 */
#define MEMAP_DEVID2_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000100 */
#define MEMAP_DEVID2_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000200 */
#define MEMAP_DEVID2_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000400 */
#define MEMAP_DEVID2_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00000800 */
#define MEMAP_DEVID2_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00001000 */
#define MEMAP_DEVID2_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00002000 */
#define MEMAP_DEVID2_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00004000 */
#define MEMAP_DEVID2_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00008000 */
#define MEMAP_DEVID2_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00010000 */
#define MEMAP_DEVID2_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00020000 */
#define MEMAP_DEVID2_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00040000 */
#define MEMAP_DEVID2_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00080000 */
#define MEMAP_DEVID2_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00100000 */
#define MEMAP_DEVID2_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00200000 */
#define MEMAP_DEVID2_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00400000 */
#define MEMAP_DEVID2_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x00800000 */
#define MEMAP_DEVID2_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x01000000 */
#define MEMAP_DEVID2_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x02000000 */
#define MEMAP_DEVID2_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x04000000 */
#define MEMAP_DEVID2_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x08000000 */
#define MEMAP_DEVID2_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x10000000 */
#define MEMAP_DEVID2_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x20000000 */
#define MEMAP_DEVID2_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x40000000 */
#define MEMAP_DEVID2_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID2, RSVD))  /*!< Value 0x80000000 */


/*!< Device configuration 1 register */
#define MEMAP_DEVID1_RSVD_OFFSET  (0U)
#define MEMAP_DEVID1_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DEVID1_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000001 */
#define MEMAP_DEVID1_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000002 */
#define MEMAP_DEVID1_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000004 */
#define MEMAP_DEVID1_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000008 */
#define MEMAP_DEVID1_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000010 */
#define MEMAP_DEVID1_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000020 */
#define MEMAP_DEVID1_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000040 */
#define MEMAP_DEVID1_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000080 */
#define MEMAP_DEVID1_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000100 */
#define MEMAP_DEVID1_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000200 */
#define MEMAP_DEVID1_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000400 */
#define MEMAP_DEVID1_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00000800 */
#define MEMAP_DEVID1_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00001000 */
#define MEMAP_DEVID1_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00002000 */
#define MEMAP_DEVID1_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00004000 */
#define MEMAP_DEVID1_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00008000 */
#define MEMAP_DEVID1_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00010000 */
#define MEMAP_DEVID1_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00020000 */
#define MEMAP_DEVID1_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00040000 */
#define MEMAP_DEVID1_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00080000 */
#define MEMAP_DEVID1_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00100000 */
#define MEMAP_DEVID1_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00200000 */
#define MEMAP_DEVID1_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00400000 */
#define MEMAP_DEVID1_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x00800000 */
#define MEMAP_DEVID1_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x01000000 */
#define MEMAP_DEVID1_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x02000000 */
#define MEMAP_DEVID1_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x04000000 */
#define MEMAP_DEVID1_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x08000000 */
#define MEMAP_DEVID1_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x10000000 */
#define MEMAP_DEVID1_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x20000000 */
#define MEMAP_DEVID1_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x40000000 */
#define MEMAP_DEVID1_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID1, RSVD))  /*!< Value 0x80000000 */

/*!< Device configuration register */
#define MEMAP_DEVID_RSVD_OFFSET  (0U)
#define MEMAP_DEVID_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_DEVID_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000001 */
#define MEMAP_DEVID_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000002 */
#define MEMAP_DEVID_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000004 */
#define MEMAP_DEVID_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000008 */
#define MEMAP_DEVID_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000010 */
#define MEMAP_DEVID_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000020 */
#define MEMAP_DEVID_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000040 */
#define MEMAP_DEVID_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000080 */
#define MEMAP_DEVID_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000100 */
#define MEMAP_DEVID_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000200 */
#define MEMAP_DEVID_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000400 */
#define MEMAP_DEVID_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00000800 */
#define MEMAP_DEVID_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00001000 */
#define MEMAP_DEVID_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00002000 */
#define MEMAP_DEVID_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00004000 */
#define MEMAP_DEVID_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00008000 */
#define MEMAP_DEVID_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00010000 */
#define MEMAP_DEVID_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00020000 */
#define MEMAP_DEVID_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00040000 */
#define MEMAP_DEVID_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00080000 */
#define MEMAP_DEVID_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00100000 */
#define MEMAP_DEVID_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00200000 */
#define MEMAP_DEVID_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00400000 */
#define MEMAP_DEVID_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x00800000 */
#define MEMAP_DEVID_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x01000000 */
#define MEMAP_DEVID_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x02000000 */
#define MEMAP_DEVID_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x04000000 */
#define MEMAP_DEVID_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x08000000 */
#define MEMAP_DEVID_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x10000000 */
#define MEMAP_DEVID_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x20000000 */
#define MEMAP_DEVID_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x40000000 */
#define MEMAP_DEVID_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, DEVID, RSVD))  /*!< Value 0x80000000 */

/*!< Device type register */
#define MEMAP_DEVTYPE_SUBTYPE_OFFSET    (4U)
#define MEMAP_DEVTYPE_SUBTYPE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVTYPE, SUBTYPE))    /*!< Mask  0x000000F0 */

#define MEMAP_DEVTYPE_MAJORTYPE_OFFSET  (0U)
#define MEMAP_DEVTYPE_MAJORTYPE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, DEVTYPE, MAJORTYPE))  /*!< Mask  0x0000000F */

// Values of the sub-classification register
#define MEMAP_SUBTYPE_UNDEFINED  (0x0UL)  /*!< Value 0x00000000 */

// Values of the major classification register
#define MEMAP_MAJORTYPE_MISCELLANEOUS  (0x0UL)  /*!< Value 0x00000000 */

/*!< Peripheral identitication 4 register */
#define MEMAP_PIDR4_4KCOUNT_OFFSET    (4U)
#define MEMAP_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define MEMAP_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define MEMAP_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define MEMAP_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define MEMAP_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define MEMAP_PIDR4_JEP106CON_OFFSET  (0U)
#define MEMAP_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define MEMAP_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define MEMAP_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define MEMAP_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define MEMAP_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define MEMAP_PIDR4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define MEMAP_PIDR5_RSVD_OFFSET  (0U)
#define MEMAP_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define MEMAP_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define MEMAP_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define MEMAP_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define MEMAP_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define MEMAP_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define MEMAP_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define MEMAP_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define MEMAP_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define MEMAP_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define MEMAP_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define MEMAP_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define MEMAP_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define MEMAP_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define MEMAP_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define MEMAP_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define MEMAP_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define MEMAP_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define MEMAP_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define MEMAP_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define MEMAP_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define MEMAP_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define MEMAP_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define MEMAP_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define MEMAP_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define MEMAP_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define MEMAP_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define MEMAP_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define MEMAP_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define MEMAP_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define MEMAP_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define MEMAP_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define MEMAP_PIDR6_RSVD_OFFSET  (0U)
#define MEMAP_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define MEMAP_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define MEMAP_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define MEMAP_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define MEMAP_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define MEMAP_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define MEMAP_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define MEMAP_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define MEMAP_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define MEMAP_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define MEMAP_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define MEMAP_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define MEMAP_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define MEMAP_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define MEMAP_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define MEMAP_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define MEMAP_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define MEMAP_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define MEMAP_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define MEMAP_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define MEMAP_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define MEMAP_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define MEMAP_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define MEMAP_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define MEMAP_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define MEMAP_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define MEMAP_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define MEMAP_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define MEMAP_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define MEMAP_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define MEMAP_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define MEMAP_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define MEMAP_PIDR7_RSVD_OFFSET  (0U)
#define MEMAP_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define MEMAP_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define MEMAP_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define MEMAP_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define MEMAP_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define MEMAP_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define MEMAP_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define MEMAP_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define MEMAP_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define MEMAP_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define MEMAP_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define MEMAP_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define MEMAP_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define MEMAP_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define MEMAP_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define MEMAP_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define MEMAP_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define MEMAP_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define MEMAP_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define MEMAP_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define MEMAP_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define MEMAP_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define MEMAP_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define MEMAP_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define MEMAP_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define MEMAP_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define MEMAP_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define MEMAP_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define MEMAP_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define MEMAP_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define MEMAP_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define MEMAP_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define MEMAP_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define MEMAP_PIDR0_PARTNUM_OFFSET  (0U)
#define MEMAP_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define MEMAP_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define MEMAP_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define MEMAP_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define MEMAP_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define MEMAP_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define MEMAP_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define MEMAP_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define MEMAP_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define MEMAP_PIDR0PARTNUM_ST   (0x12UL)  /*!< Value 0x00000012 */
#define MEMAP_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define MEMAP_PIDR1_JEP106ID_OFFSET  (4U)
#define MEMAP_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define MEMAP_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define MEMAP_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define MEMAP_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define MEMAP_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define MEMAP_PIDR1_PARTNUM_OFFSET   (0U)
#define MEMAP_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define MEMAP_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define MEMAP_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define MEMAP_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define MEMAP_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of part number register
#define MEMAP_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define MEMAP_PIDR1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

/*!< Peripheral identitication 2 register */
#define MEMAP_PIDR2_REVISION_OFFSET    (4U)
#define MEMAP_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define MEMAP_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define MEMAP_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define MEMAP_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define MEMAP_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define MEMAP_PIDR2_JEDEC_OFFSET       (3U)
#define MEMAP_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define MEMAP_PIDR2_JEDEC106ID_OFFSET  (0U)
#define MEMAP_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define MEMAP_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define MEMAP_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define MEMAP_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define MEMAP_REVISION_R0P2  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC assigned value select bit
#define MEMAP_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define MEMAP_PIDR2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define MEMAP_PIDR3_REVAND_OFFSET  (4U)
#define MEMAP_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define MEMAP_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define MEMAP_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define MEMAP_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define MEMAP_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define MEMAP_PIDR3_CMOD_OFFSET    (0U)
#define MEMAP_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define MEMAP_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define MEMAP_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define MEMAP_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define MEMAP_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define MEMAP_REVAND_NOMETALFIX  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define MEMAP_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define MEMAP_CIDR0_PREAMBLE_OFFSET  (0U)
#define MEMAP_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define MEMAP_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define MEMAP_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define MEMAP_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define MEMAP_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define MEMAP_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define MEMAP_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define MEMAP_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define MEMAP_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define MEMAP_CIDR0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define MEMAP_CIDR1_CLASS_OFFSET      (4U)
#define MEMAP_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define MEMAP_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define MEMAP_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define MEMAP_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define MEMAP_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define MEMAP_CIDR1_PREAMBLE_OFFSET   (0U)
#define MEMAP_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define MEMAP_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define MEMAP_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define MEMAP_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define MEMAP_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define MEMAP_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define MEMAP_CLASS_CORESIGHT   (0x9UL)  /*!< Value 0x00000009 */

/*!< Component identitication 2 register */
#define MEMAP_CIDR2_PREAMBLE_OFFSET  (0U)
#define MEMAP_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define MEMAP_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define MEMAP_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define MEMAP_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define MEMAP_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define MEMAP_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define MEMAP_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define MEMAP_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define MEMAP_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define MEMAP_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define MEMAP_CIDR3_PREAMBLE_OFFSET  (0U)
#define MEMAP_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define MEMAP_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define MEMAP_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define MEMAP_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define MEMAP_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define MEMAP_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define MEMAP_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define MEMAP_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define MEMAP_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(MEMAP, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define MEMAP_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

/** @} */ // End of MEMAP group

/** @} */ // End of RegisterGroup group

#endif // MEMAP_H
