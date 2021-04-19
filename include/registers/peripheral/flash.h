#ifndef FLASH_REGISTERS_H
#define FLASH_REGISTERS_H
/**
 * @copyright
 * @file flash.h
 * @author Andrea Gianarda
 * @date 5th of March 2021
 * @brief Flash registers
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
 *  @defgroup EmbeddedFlashMemory Embedded Flash Memory
 *  @brief Embedded Flash memory macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t ACR;         /*!< Access control register                                    (Offset 0x0)  */
	WO uint32_t KEYR;        /*!< Bank key register register                                 (Offset 0x4)  */
	WO uint32_t OPTKEYR;     /*!< Option key register                                        (Offset 0x8)  */
	RW uint32_t CR;          /*!< Bank control register register                             (Offset 0xC)  */
	RO uint32_t SR;          /*!< Bank status register register                              (Offset 0x10) */
	WO uint32_t CCR;         /*!< Bank clear control register                                (Offset 0x14) */
	RW uint32_t OPTCR;       /*!< Option control register                                    (Offset 0x18) */
	RO uint32_t OPTSR_CUR;   /*!< Current option status register                             (Offset 0x1C) */
	RW uint32_t OPTSR_PRG;   /*!< Programmatic option status register                        (Offset 0x20) */
	RW uint32_t OPTCCR;      /*!< Option clear control register                              (Offset 0x24) */
	RO uint32_t PRAR_CUR;    /*!< Bank current protection address register                   (Offset 0x28) */
	RW uint32_t PRAR_PRG;    /*!< Bank programmatic protection address register              (Offset 0x2C) */
	RO uint32_t SCAR_CUR;    /*!< Bank current secure address register                       (Offset 0x30) */
	RW uint32_t SCAR_PRG;    /*!< Bank programmatic secure address register                  (Offset 0x34) */
	RO uint32_t WPSN_CURR;   /*!< Bank current write sector protection register              (Offset 0x38) */
	RW uint32_t WPSN_PRGR;   /*!< Bank programmatic write sector protection register         (Offset 0x3C) */
	RO uint32_t BOOT7_CURR;  /*!< Current boot address register for ARM Cortex M7 core       (Offset 0x40) */
	RW uint32_t BOOT7_PRGR;  /*!< Programmatic boot address register for ARM Cortex M7 core  (Offset 0x44) */
	RO uint32_t BOOT4_CURR;  /*!< Current boot address register for ARM Cortex M4 core       (Offset 0x48) */
	RW uint32_t BOOT4_PRGR;  /*!< Programmatic boot address register for ARM Cortex M4 core  (Offset 0x4C) */
	RW uint32_t CRCCR;       /*!< Bank CRC control register                                  (Offset 0x50) */
	RW uint32_t CRCSADDR;    /*!< Bank CRC start address register                            (Offset 0x54) */
	RW uint32_t CRCEADDR;    /*!< Bank CRC end address register                              (Offset 0x58) */
	RO uint32_t CRCDATAR;    /*!< Bank CRC data register                                     (Offset 0x5C) */
	RO uint32_t ECC_FAR;     /*!< Bank ECC fail address register                             (Offset 0x60) */
} flash_bank_regs;

/*!< Embedded Flash memory registers */
/*!< Access control register */
#define FLASH_ACR_WRHIGHFREQ_OFFSET  (4U)
#define FLASH_ACR_WRHIGHFREQ_MASK    (0x3UL << REGISTER_FIELD_OFFSET(FLASH, ACR, WRHIGHFREQ))  /*!< Mask  0x00000030 */

#define FLASH_ACR_LATENCY_OFFSET     (0U)
#define FLASH_ACR_LATENCY_MASK       (0xFUL << REGISTER_FIELD_OFFSET(FLASH, ACR, LATENCY))     /*!< Mask  0x0000000F */

// Available delays between non volatile memory signals during programming operations
#define FLASH_WRHIGHFREQ_0  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_WRHIGHFREQ_1  (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_WRHIGHFREQ_2  (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_WRHIGHFREQ_3  (0x3UL)  /*!< Value 0x00000003 */

// Values of flash wait states
#define FLASH_LATENCY_0WAITSTATE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_LATENCY_1WAITSTATE  (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_LATENCY_2WAITSTATE  (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_LATENCY_3WAITSTATE  (0x3UL)  /*!< Value 0x00000003 */
#define FLASH_LATENCY_4WAITSTATE  (0x4UL)  /*!< Value 0x00000004 */
#define FLASH_LATENCY_7WAITSTATE  (0x7UL)  /*!< Value 0x00000007 */

/*!< Bank key register register  */
#define FLASH_KEYR_KEYR_OFFSET  (0U)
#define FLASH_KEYR_KEYR_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Mask  0xFFFFFFFF */
#define FLASH_KEYR_KEYR_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000001 */
#define FLASH_KEYR_KEYR_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000002 */
#define FLASH_KEYR_KEYR_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000004 */
#define FLASH_KEYR_KEYR_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000008 */
#define FLASH_KEYR_KEYR_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000010 */
#define FLASH_KEYR_KEYR_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000020 */
#define FLASH_KEYR_KEYR_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000040 */
#define FLASH_KEYR_KEYR_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000080 */
#define FLASH_KEYR_KEYR_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000100 */
#define FLASH_KEYR_KEYR_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000200 */
#define FLASH_KEYR_KEYR_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000400 */
#define FLASH_KEYR_KEYR_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00000800 */
#define FLASH_KEYR_KEYR_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00001000 */
#define FLASH_KEYR_KEYR_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00002000 */
#define FLASH_KEYR_KEYR_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00004000 */
#define FLASH_KEYR_KEYR_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00008000 */
#define FLASH_KEYR_KEYR_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00010000 */
#define FLASH_KEYR_KEYR_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00020000 */
#define FLASH_KEYR_KEYR_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00040000 */
#define FLASH_KEYR_KEYR_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00080000 */
#define FLASH_KEYR_KEYR_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00100000 */
#define FLASH_KEYR_KEYR_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00200000 */
#define FLASH_KEYR_KEYR_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00400000 */
#define FLASH_KEYR_KEYR_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x00800000 */
#define FLASH_KEYR_KEYR_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x01000000 */
#define FLASH_KEYR_KEYR_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x02000000 */
#define FLASH_KEYR_KEYR_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x04000000 */
#define FLASH_KEYR_KEYR_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x08000000 */
#define FLASH_KEYR_KEYR_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x10000000 */
#define FLASH_KEYR_KEYR_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x20000000 */
#define FLASH_KEYR_KEYR_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x40000000 */
#define FLASH_KEYR_KEYR_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FLASH, KEYR, KEYR))  /*!< Value 0x80000000 */

// Key to program the bank key register with
#define FLASH_BANKKEY_KEY1  (0x45670123UL)  /*!< Value 0x45670123 */
#define FLASH_BANKKEY_KEY2  (0xCDEF89ABUL)  /*!< Value 0xCDEF89AB */

/*!< Option key register  */
#define FLASH_OPTKEYR_OPTKEYR_OFFSET  (0U)
#define FLASH_OPTKEYR_OPTKEYR_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Mask  0xFFFFFFFF */
#define FLASH_OPTKEYR_OPTKEYR_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000001 */
#define FLASH_OPTKEYR_OPTKEYR_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000002 */
#define FLASH_OPTKEYR_OPTKEYR_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000004 */
#define FLASH_OPTKEYR_OPTKEYR_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000008 */
#define FLASH_OPTKEYR_OPTKEYR_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000010 */
#define FLASH_OPTKEYR_OPTKEYR_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000020 */
#define FLASH_OPTKEYR_OPTKEYR_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000040 */
#define FLASH_OPTKEYR_OPTKEYR_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000080 */
#define FLASH_OPTKEYR_OPTKEYR_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000100 */
#define FLASH_OPTKEYR_OPTKEYR_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000200 */
#define FLASH_OPTKEYR_OPTKEYR_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000400 */
#define FLASH_OPTKEYR_OPTKEYR_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00000800 */
#define FLASH_OPTKEYR_OPTKEYR_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00001000 */
#define FLASH_OPTKEYR_OPTKEYR_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00002000 */
#define FLASH_OPTKEYR_OPTKEYR_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00004000 */
#define FLASH_OPTKEYR_OPTKEYR_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00008000 */
#define FLASH_OPTKEYR_OPTKEYR_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00010000 */
#define FLASH_OPTKEYR_OPTKEYR_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00020000 */
#define FLASH_OPTKEYR_OPTKEYR_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00040000 */
#define FLASH_OPTKEYR_OPTKEYR_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00080000 */
#define FLASH_OPTKEYR_OPTKEYR_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00100000 */
#define FLASH_OPTKEYR_OPTKEYR_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00200000 */
#define FLASH_OPTKEYR_OPTKEYR_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00400000 */
#define FLASH_OPTKEYR_OPTKEYR_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x00800000 */
#define FLASH_OPTKEYR_OPTKEYR_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x01000000 */
#define FLASH_OPTKEYR_OPTKEYR_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x02000000 */
#define FLASH_OPTKEYR_OPTKEYR_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x04000000 */
#define FLASH_OPTKEYR_OPTKEYR_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x08000000 */
#define FLASH_OPTKEYR_OPTKEYR_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x10000000 */
#define FLASH_OPTKEYR_OPTKEYR_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x20000000 */
#define FLASH_OPTKEYR_OPTKEYR_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x40000000 */
#define FLASH_OPTKEYR_OPTKEYR_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEYR, OPTKEYR))  /*!< Value 0x80000000 */

// Key to program the option key register with
#define FLASH_OPTKEY_KEY1    (0x4C5D6E7FUL)  /*!< Value 0x4C5D6E7F */
#define FLASH_OPTKEY_KEY2    (0x08192A3BUL)  /*!< Value 0x08192A3B */

/*!< Bank control register register  */
#define FLASH_CR_CRCRDERRIE_OFFSET  (28U)
#define FLASH_CR_CRCRDERRIE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, CRCRDERRIE))  /*!< Mask  0x10000000 */

#define FLASH_CR_CRCENDIE_OFFSET    (27U)
#define FLASH_CR_CRCENDIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, CRCENDIE))    /*!< Mask  0x08000000 */

#define FLASH_CR_DBECCERRIE_OFFSET  (26U)
#define FLASH_CR_DBECCERRIE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, DBECCERRIE))  /*!< Mask  0x04000000 */

#define FLASH_CR_SNECCERRIE_OFFSET  (25U)
#define FLASH_CR_SNECCERRIE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, SNECCERRIE))  /*!< Mask  0x02000000 */

#define FLASH_CR_RDSERRIE_OFFSET    (24U)
#define FLASH_CR_RDSERRIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, RDSERRIE))    /*!< Mask  0x01000000 */

#define FLASH_CR_RDPERRIE_OFFSET    (23U)
#define FLASH_CR_RDPERRIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, RDPERRIE))    /*!< Mask  0x00800000 */

#define FLASH_CR_OPERRIE_OFFSET     (22U)
#define FLASH_CR_OPERRIE_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, OPERRIE))     /*!< Mask  0x00400000 */

#define FLASH_CR_INCERRIE_OFFSET    (21U)
#define FLASH_CR_INCERRIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, INCERRIE))    /*!< Mask  0x00200000 */

#define FLASH_CR_STRBERRIE_OFFSET   (19U)
#define FLASH_CR_STRBERRIE_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, STRBERRIE))   /*!< Mask  0x00080000 */

#define FLASH_CR_PGSIE_OFFSET       (18U)
#define FLASH_CR_PGSIE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, PGSIE))       /*!< Mask  0x00040000 */

#define FLASH_CR_WRPERRIE_OFFSET    (17U)
#define FLASH_CR_WRPERRIE_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, WRPERRIE))    /*!< Mask  0x00020000 */

#define FLASH_CR_EOPIE_OFFSET       (16U)
#define FLASH_CR_EOPIE_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, EOPIE))       /*!< Mask  0x00010000 */

#define FLASH_CR_CRCEN_OFFSET       (15U)
#define FLASH_CR_CRCEN_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, CRCEN))       /*!< Mask  0x00008000 */

#define FLASH_CR_SPSS_OFFSET        (14U)
#define FLASH_CR_SPSS_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, SPSS))        /*!< Mask  0x00008000 */

#define FLASH_CR_SNB_OFFSET         (8U)
#define FLASH_CR_SNB_MASK           (0x7UL << REGISTER_FIELD_OFFSET(FLASH, CR, SNB))         /*!< Mask  0x00000700 */

#define FLASH_CR_START_OFFSET       (7U)
#define FLASH_CR_START_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, START))       /*!< Mask  0x00000080 */

#define FLASH_CR_FW_OFFSET          (6U)
#define FLASH_CR_FW_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, FW))          /*!< Mask  0x00000040 */

#define FLASH_CR_PSIZE_OFFSET       (4U)
#define FLASH_CR_PSIZE_MASK         (0x3UL << REGISTER_FIELD_OFFSET(FLASH, CR, PSIZE))       /*!< Mask  0x00000030 */

#define FLASH_CR_BER_OFFSET         (3U)
#define FLASH_CR_BER_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, BER))         /*!< Mask  0x00000008 */

#define FLASH_CR_SBER_OFFSET        (2U)
#define FLASH_CR_SBER_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, SBER))        /*!< Mask  0x00000004 */

#define FLASH_CR_PG_OFFSET          (1U)
#define FLASH_CR_PG_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, PG))          /*!< Mask  0x00000002 */

#define FLASH_CR_LOCK_OFFSET        (0U)

#define FLASH_CR_LOCK_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CR, LOCK))        /*!< Mask  0x00000001 */

// Values of bank CRC read error interrupt enable bit
#define FLASH_BANKCRCRDERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCRDERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank CRC end of calculation interrupt enable bit
#define FLASH_BANKCRCENDINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCENDINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank ECC double detection error interrupt enable bit
#define FLASH_BANKDBECCERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKDBECCERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank ECC single detection error interrupt enable bit
#define FLASH_BANKSNECCERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSNECCERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank secure read error interrupt enable bit
#define FLASH_BANKRDSERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKRDSERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank read protection interrupt enable bit
#define FLASH_BANKRDPERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKRDPERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write/erase error interrupt enable bit
#define FLASH_BANKOPERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKOPERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write incosistency error interrupt enable bit
#define FLASH_BANKINCERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKINCERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank strobe error interrupt enable bit
#define FLASH_BANKSTRBERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSTRBERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank programming sequence error interrupt enable bit
#define FLASH_BANKPGSINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKPGSINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write protection interrupt enable bit
#define FLASH_BANKWRPERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKWRPERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank end of program interrupt enable bit
#define FLASH_BANKEOPINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKEOPINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank CRC enable bit
#define FLASH_BANKCRC_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRC_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank special sector selection bit
#define FLASH_BANKSPECIALSEC_USERSECTORS     (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSPECIALSEC_NONUSERSECTORS  (0x1UL)  /*!< Value 0x00000001 */

// Values of bank sector erase selection register
#define FLASH_BANKSECERASESEL_SEC0  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSECERASESEL_SEC1  (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_BANKSECERASESEL_SEC2  (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_BANKSECERASESEL_SEC3  (0x3UL)  /*!< Value 0x00000003 */
#define FLASH_BANKSECERASESEL_SEC4  (0x4UL)  /*!< Value 0x00000004 */
#define FLASH_BANKSECERASESEL_SEC5  (0x5UL)  /*!< Value 0x00000005 */
#define FLASH_BANKSECERASESEL_SEC6  (0x6UL)  /*!< Value 0x00000006 */
#define FLASH_BANKSECERASESEL_SEC7  (0x7UL)  /*!< Value 0x00000007 */

// Values of bank erase start bit
#define FLASH_BANKSTART_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSTART_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of enable got to start a write even if the wrtie buffer is not full
#define FLASH_BANKFORCEWR_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKFORCEWR_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank program size register
#define FLASH_BANKPROGSIZE_BYTEPAR        (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKPROGSIZE_HALFWORDPAR    (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_BANKPROGSIZE_WORDPAR        (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_BANKPROGSIZE_DOUBLEWORDPAR  (0x3UL)  /*!< Value 0x00000003 */

// Values of bank erase request bit
#define FLASH_BANKERASEREQ_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKERASEREQ_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank sector erase request bit
#define FLASH_BANKSECERASEREQ_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSECERASEREQ_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank internal buffer for write operations enable bit
#define FLASH_BANKINTBUF_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKINTBUF_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of bank configuration lock bit
#define FLASH_BANKCFG_UNLOCKED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCFG_LOCKED    (0x1UL)  /*!< Value 0x00000001 */

/*!< Bank status register register */
#define FLASH_SR_CRCRDERR_OFFSET  (28U)
#define FLASH_SR_CRCRDERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, CRCRDERR))  /*!< Mask  0x10000000 */

#define FLASH_SR_CRCEND_OFFSET    (27U)
#define FLASH_SR_CRCEND_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, CRCEND))    /*!< Mask  0x08000000 */

#define FLASH_SR_DBECCERR_OFFSET  (26U)
#define FLASH_SR_DBECCERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, DBECCERR))  /*!< Mask  0x04000000 */

#define FLASH_SR_SNECCERR_OFFSET  (25U)
#define FLASH_SR_SNECCERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, SNECCERR))  /*!< Mask  0x02000000 */

#define FLASH_SR_RDSERR_OFFSET    (24U)
#define FLASH_SR_RDSERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, RDSERR))    /*!< Mask  0x01000000 */

#define FLASH_SR_RDPERR_OFFSET    (23U)
#define FLASH_SR_RDPERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, RDPERR))    /*!< Mask  0x00800000 */

#define FLASH_SR_OPERR_OFFSET     (22U)
#define FLASH_SR_OPERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, OPERR))     /*!< Mask  0x00400000 */

#define FLASH_SR_INCERR_OFFSET    (21U)
#define FLASH_SR_INCERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, INCERR))    /*!< Mask  0x00200000 */

#define FLASH_SR_STRBERR_OFFSET   (19U)
#define FLASH_SR_STRBERR_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, STRBERR))   /*!< Mask  0x00080000 */

#define FLASH_SR_PGS_OFFSET       (18U)
#define FLASH_SR_PGS_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, PGS))       /*!< Mask  0x00040000 */

#define FLASH_SR_WRPERR_OFFSET    (17U)
#define FLASH_SR_WRPERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, WRPERR))    /*!< Mask  0x00020000 */

#define FLASH_SR_EOP_OFFSET       (16U)
#define FLASH_SR_EOP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, EOP))       /*!< Mask  0x00010000 */

#define FLASH_SR_CRCBUSY_OFFSET   (3U)
#define FLASH_SR_CRCBUSY_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, CRCBUSY))   /*!< Mask  0x00000008 */

#define FLASH_SR_QW_OFFSET        (2U)
#define FLASH_SR_QW_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, QWFLAG))    /*!< Mask  0x00000004 */

#define FLASH_SR_WBNE_OFFSET      (1U)
#define FLASH_SR_WBNE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, WBNE))      /*!< Mask  0x00000002 */

#define FLASH_SR_BSY_OFFSET       (0U)
#define FLASH_SR_BSY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SR, BSY))       /*!< Mask  0x00000001 */

// Values of bank CRC read error status
#define FLASH_BANKCRCRDERR_NOTDETECTED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCRDERR_DETECTED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank CRC end of calculation status
#define FLASH_BANKCRCEND_CRCNOTCALCULATED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCEND_CRCCALCULATED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank ECC double detection error status
#define FLASH_BANKDBECCERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKDBECCERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank single correction error status
#define FLASH_BANKSNECCERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSNECCERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank secure error status
#define FLASH_BANKRDSERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKRDSERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank read protection error status
#define FLASH_BANKRDPERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKRDPERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write/erase error status
#define FLASH_BANKOPERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKOPERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank inconsistency error status
#define FLASH_BANKINCERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKINCERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank strobe error status
#define FLASH_BANKSTRBERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSTRBERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank programming sequence error status
#define FLASH_BANKPGS_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKPGS_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write protection error status
#define FLASH_BANKWRPERR_NOTOCCURRED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKWRPERR_OCCURRED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank end of program error status
#define FLASH_BANKEOP_PROGNOTCOMPLETED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKEOP_PROGCOMPLETED     (0x1UL)  /*!< Value 0x00000001 */

// Values of bank CRC busy bit
#define FLASH_BANKCRCBUSY_NOCALCRUNNING  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCBUSY_CALCRUNNING    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank wait queue flag bit
#define FLASH_BANKQW_EMPTY      (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKQW_OPWAITING  (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write buffer not empty bit
#define FLASH_BANKWBNE_EMPTYORFULL  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKWBNE_WAITINGDATA  (0x1UL)  /*!< Value 0x00000001 */

// Values of bank busy bit
#define FLASH_BANKBSY_NOOPEXECUTING  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKBSY_OPONGOING      (0x1UL)  /*!< Value 0x00000001 */

/*!< Bank clear control register */
#define FLASH_CCR_CLR_CRCRDERR_OFFSET  (28U)
#define FLASH_CCR_CLR_CRCRDERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_CRCRDERR))  /*!< Mask  0x10000000 */

#define FLASH_CCR_CLR_CRCEND_OFFSET    (27U)
#define FLASH_CCR_CLR_CRCEND_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_CRCEND))    /*!< Mask  0x08000000 */

#define FLASH_CCR_CLR_DBECCERR_OFFSET  (26U)
#define FLASH_CCR_CLR_DBECCERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_DBECCERR))  /*!< Mask  0x04000000 */

#define FLASH_CCR_CLR_SNECCERR_OFFSET  (25U)
#define FLASH_CCR_CLR_SNECCERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_SNECCERR))  /*!< Mask  0x02000000 */

#define FLASH_CCR_CLR_RDSERR_OFFSET    (24U)
#define FLASH_CCR_CLR_RDSERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_RDSERR))    /*!< Mask  0x01000000 */

#define FLASH_CCR_CLR_RDPERR_OFFSET    (23U)
#define FLASH_CCR_CLR_RDPERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_RDPERR))    /*!< Mask  0x00800000 */

#define FLASH_CCR_CLR_OPERR_OFFSET     (22U)
#define FLASH_CCR_CLR_OPERR_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_OPERR))     /*!< Mask  0x00400000 */

#define FLASH_CCR_CLR_INCERR_OFFSET    (21U)
#define FLASH_CCR_CLR_INCERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_INCERR))    /*!< Mask  0x00200000 */

#define FLASH_CCR_CLR_STRBERR_OFFSET   (19U)
#define FLASH_CCR_CLR_STRBERR_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_STRBERR))   /*!< Mask  0x00080000 */

#define FLASH_CCR_CLR_PGS_OFFSET       (18U)
#define FLASH_CCR_CLR_PGS_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_PGS))       /*!< Mask  0x00040000 */

#define FLASH_CCR_CLR_WRPERR_OFFSET    (17U)
#define FLASH_CCR_CLR_WRPERR_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_WRPERR))    /*!< Mask  0x00020000 */

#define FLASH_CCR_CLR_EOP_OFFSET       (16U)
#define FLASH_CCR_CLR_EOP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CCR, CLR_EOP))       /*!< Mask  0x00010000 */

// Values of bank CRC read error interrupt clear bit
#define FLASH_BANKCRCRDERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCRDERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank CRC end of calculator interrupt clear bit
#define FLASH_BANKCRCEND_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKCRCEND_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank double detection error interrupt clear bit
#define FLASH_BANKDBECCERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKDBECCERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank single correction error interrupt clear bit
#define FLASH_BANKSNECCERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSNECCERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank secure error interrupt clear bit
#define FLASH_BANKRDSERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKRDSERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank read protection error interrupt clear bit
#define FLASH_BANKRDPERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKRDPERR_CLR  (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write/erase error interrupt clear bit
#define FLASH_BANKOPERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKOPERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write inconsistency error interrupt clear bit
#define FLASH_BANKINCERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKINCERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write strobes error interrupt clear bit
#define FLASH_BANKSTRBERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKSTRBERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank programming sequence interrupt clear bit
#define FLASH_BANKPGS_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKPGS_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank write protection error interrupt clear bit
#define FLASH_BANKWRPERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKWRPERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

// Values of bank end of program interrupt clear bit
#define FLASH_BANKEOP_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BANKEOP_CLR    (0x1UL)  /*!< Value 0x00000001 */

/*!< Option control register */
#define FLASH_OPTCR_SWAP_BANKS_OFFSET      (31U)
#define FLASH_OPTCR_SWAP_BANKS_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCR, SWAP_BANKS))      /*!< Mask  0x80000000 */

#define FLASH_OPTCR_OPTCHANGEERRIE_OFFSET  (30U)
#define FLASH_OPTCR_OPTCHANGEERRIE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCR, OPTCHANGEERRIE))  /*!< Mask  0x40000000 */

#define FLASH_OPTCR_MES_OFFSET             (4U)
#define FLASH_OPTCR_MES_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCR, MES))             /*!< Mask  0x00000010 */

#define FLASH_OPTCR_OPTSTART_OFFSET        (1U)
#define FLASH_OPTCR_OPTSTART_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCR, OPTSTART))        /*!< Mask  0x00000002 */

#define FLASH_OPTCR_OPTLOCK_OFFSET         (0U)
#define FLASH_OPTCR_OPTLOCK_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCR, OPTLOCK))         /*!< Mask  0x00000001 */

// Values of swap bank enable bit
#define FLASH_SWAPBANKS_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_SWAPBANKS_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Values of option byte change error interrupt enable bit
#define FLASH_OPTCHANGEERRINT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_OPTCHANGEERRINT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of mass erase request bit
#define FLASH_MES_NOREQUEST  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_MES_REQUEST    (0x1UL)  /*!< Value 0x00000001 */

// Values of option byte change start bit
#define FLASH_OPTSTART_NOTRIGGER  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_OPTSTART_TRIGGER    (0x1UL)  /*!< Value 0x00000001 */

// Values of option configuration lock bit
#define FLASH_OPTLOCK_UNLOCKED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_OPTLOCK_LOCKED    (0x1UL)  /*!< Value 0x00000001 */

/*!< Current option status register */
#define FLASH_OPTSR_CUR_SWAP_BANKSOPT_OFFSET  (31U)
#define FLASH_OPTSR_CUR_SWAP_BANKSOPT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, SWAP_BANKSOPT))  /*!< Mask  0x80000000 */

#define FLASH_OPTSR_CUR_OPTCHANGEERR_OFFSET   (30U)
#define FLASH_OPTSR_CUR_OPTCHANGEERR_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, OPTCHANGEERR))   /*!< Mask  0x40000000 */

#define FLASH_OPTSR_CUR_IO_HSVL_OFFSET        (29U)
#define FLASH_OPTSR_CUR_IO_HSVL_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, IO_HSVL))        /*!< Mask  0x20000000 */

#define FLASH_OPTSR_CUR_NRST_STBY_D2_OFFSET   (25U)
#define FLASH_OPTSR_CUR_NRST_STBY_D2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, NRST_STBY_D2))   /*!< Mask  0x02000000 */

#define FLASH_OPTSR_CUR_NRST_STOP_D2_OFFSET   (24U)
#define FLASH_OPTSR_CUR_NRST_STOP_D2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, NRST_STOP_D2))   /*!< Mask  0x01000000 */

#define FLASH_OPTSR_CUR_BOOT_CM7_OFFSET       (23U)
#define FLASH_OPTSR_CUR_BOOT_CM7_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, BOOT_CM7))       /*!< Mask  0x00800000 */

#define FLASH_OPTSR_CUR_BOOT_CM4_OFFSET       (22U)
#define FLASH_OPTSR_CUR_BOOT_CM4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, BOOT_CM4))       /*!< Mask  0x00400000 */

#define FLASH_OPTSR_CUR_SECURITY_OFFSET       (21U)
#define FLASH_OPTSR_CUR_SECURITY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, SECURITY))       /*!< Mask  0x00200000 */

#define FLASH_OPTSR_CUR_ST_RAM_SIZE_OFFSET    (19U)
#define FLASH_OPTSR_CUR_ST_RAM_SIZE_MASK      (0x3UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, ST_RAM_SIZE))    /*!< Mask  0x00180000 */

#define FLASH_OPTSR_CUR_IWDG_FZ_SDBY_OFFSET   (18U)
#define FLASH_OPTSR_CUR_IWDG_FZ_SDBY_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, IWDG_FZ_SDBY))   /*!< Mask  0x00040000 */

#define FLASH_OPTSR_CUR_IWDG_FZ_STOP_OFFSET   (17U)
#define FLASH_OPTSR_CUR_IWDG_FZ_STOP_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, IWDG_FZ_STOP))   /*!< Mask  0x00020000 */

#define FLASH_OPTSR_CUR_RDP_OFFSET            (8U)
#define FLASH_OPTSR_CUR_RDP_MASK              (0xFFUL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, RDP))           /*!< Mask  0x0000FF00 */

#define FLASH_OPTSR_CUR_NRST_STDY_D1_OFFSET   (7U)
#define FLASH_OPTSR_CUR_NRST_STDY_D1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, NRST_STDY_D1))   /*!< Mask  0x00000080 */

#define FLASH_OPTSR_CUR_NRST_STOP_D1_OFFSET   (6U)
#define FLASH_OPTSR_CUR_NRST_STOP_D1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, NRST_STOP_D1))   /*!< Mask  0x00000040 */

#define FLASH_OPTSR_CUR_IWDG2_SW_OFFSET       (5U)
#define FLASH_OPTSR_CUR_IWDG2_SW_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, IWDG2_SW))       /*!< Mask  0x00000020 */

#define FLASH_OPTSR_CUR_IWDG_SW_OFFSET        (4U)
#define FLASH_OPTSR_CUR_IWDG_SW_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, IWDG_SW))        /*!< Mask  0x00000010 */

#define FLASH_OPTSR_CUR_BOR_LEV_OFFSET        (2U)
#define FLASH_OPTSR_CUR_BOR_LEV_MASK          (0x3UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, BOR_LEV))        /*!< Mask  0x0000000C */

#define FLASH_OPTSR_CUR_OPT_BUSY_OFFSET       (0U)
#define FLASH_OPTSR_CUR_OPT_BUSY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_CUR, OPT_BUSY))       /*!< Mask  0x00000001 */

// Value of option byte change error
#define FLASH_OPTBYTECHANGEERR_NOTTRIGGERED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_OPTBYTECHANGEERR_TRIGGERED     (0x1UL)  /*!< Value 0x00000001 */

// Value of option byte change
#define FLASH_OPTBYTE_NOOP       (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_OPTBYTE_OPONGOING  (0x1UL)  /*!< Value 0x00000001 */

/*!< Programmatic option status register */
#define FLASH_OPTSR_PRG_SWAP_BANKSOPT_OFFSET  (31U)
#define FLASH_OPTSR_PRG_SWAP_BANKSOPT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, SWAP_BANKSOPT))  /*!< Mask  0x80000000 */

#define FLASH_OPTSR_PRG_IO_HSVL_OFFSET        (29U)
#define FLASH_OPTSR_PRG_IO_HSVL_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, IO_HSVL))        /*!< Mask  0x20000000 */

#define FLASH_OPTSR_PRG_NRST_STBY_D2_OFFSET   (25U)
#define FLASH_OPTSR_PRG_NRST_STBY_D2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, NRST_STBY_D2))   /*!< Mask  0x02000000 */

#define FLASH_OPTSR_PRG_NRST_STOP_D2_OFFSET   (24U)
#define FLASH_OPTSR_PRG_NRST_STOP_D2_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, NRST_STOP_D2))   /*!< Mask  0x01000000 */

#define FLASH_OPTSR_PRG_BOOT_CM7_OFFSET       (23U)
#define FLASH_OPTSR_PRG_BOOT_CM7_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, BOOT_CM7))       /*!< Mask  0x00800000 */

#define FLASH_OPTSR_PRG_BOOT_CM4_OFFSET       (22U)
#define FLASH_OPTSR_PRG_BOOT_CM4_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, BOOT_CM4))       /*!< Mask  0x00400000 */

#define FLASH_OPTSR_PRG_SECURITY_OFFSET       (21U)
#define FLASH_OPTSR_PRG_SECURITY_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, SECURITY))       /*!< Mask  0x00200000 */

#define FLASH_OPTSR_PRG_ST_RAM_SIZE_OFFSET    (19U)
#define FLASH_OPTSR_PRG_ST_RAM_SIZE_MASK      (0x3UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, ST_RAM_SIZE))    /*!< Mask  0x00180000 */

#define FLASH_OPTSR_PRG_IWDG_FZ_SDBY_OFFSET   (18U)
#define FLASH_OPTSR_PRG_IWDG_FZ_SDBY_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, IWDG_FZ_SDBY))   /*!< Mask  0x00040000 */

#define FLASH_OPTSR_PRG_IWDG_FZ_STOP_OFFSET   (17U)
#define FLASH_OPTSR_PRG_IWDG_FZ_STOP_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, IWDG_FZ_STOP))   /*!< Mask  0x00020000 */

#define FLASH_OPTSR_PRG_RDP_OFFSET            (8U)
#define FLASH_OPTSR_PRG_RDP_MASK              (0xFFUL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, RDP))           /*!< Mask  0x0000FF00 */

#define FLASH_OPTSR_PRG_NRST_STDY_D1_OFFSET   (7U)
#define FLASH_OPTSR_PRG_NRST_STDY_D1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, NRST_STDY_D1))   /*!< Mask  0x00000080 */

#define FLASH_OPTSR_PRG_NRST_STOP_D1_OFFSET   (6U)
#define FLASH_OPTSR_PRG_NRST_STOP_D1_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, NRST_STOP_D1))   /*!< Mask  0x00000040 */

#define FLASH_OPTSR_PRG_IWDG2_SW_OFFSET       (5U)
#define FLASH_OPTSR_PRG_IWDG2_SW_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, IWDG2_SW))       /*!< Mask  0x00000020 */

#define FLASH_OPTSR_PRG_IWDG_SW_OFFSET        (4U)
#define FLASH_OPTSR_PRG_IWDG_SW_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, IWDG_SW))        /*!< Mask  0x00000010 */

#define FLASH_OPTSR_PRG_BOR_LEV_OFFSET        (2U)
#define FLASH_OPTSR_PRG_BOR_LEV_MASK          (0x3UL << REGISTER_FIELD_OFFSET(FLASH, OPTSR_PRG, BOR_LEV))        /*!< Mask  0x0000000C */

// Value of swap bank bit
#define FLASH_SWAPBANKSOPT_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_SWAPBANKSOPT_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Value of I/O high speed at low voltage bit
#define FLASH_IOHSVL_FULLRANGE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_IOHSVL_BELOW2_5V  (0x1UL)  /*!< Value 0x00000001 */

// Value of security bit
#define FLASH_SECURITY_DISABLED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_SECURITY_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Value of CPU boot bit
#define FLASH_COREBOOT_CLKGATED  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_COREBOOT_ENABLED   (0x1UL)  /*!< Value 0x00000001 */

// Value of independent watchdog (IWDG) freeze in DStandby
#define FLASH_IWDGFZSDBY_FREEZE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_IWDGFZSDBY_RUN     (0x1UL)  /*!< Value 0x00000001 */

// Value of independent watchdog (IWDG) freeze in DStop
#define FLASH_IWDGFZSTOP_FREEZE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_IWDGFZSTOP_RUN     (0x1UL)  /*!< Value 0x00000001 */

// Value of entry reset on DStandby
#define FLASH_STDYRST_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_STDYRST_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

// Value of entry reset on DStop
#define FLASH_STOPRST_ENABLE   (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_STOPRST_DISABLE  (0x1UL)  /*!< Value 0x00000001 */

// Size of the RAM reserved to ST
#define FLASH_STRAMSIZE_2KRESERVED   (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_STRAMSIZE_4KRESERVED   (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_STRAMSIZE_8KRESERVED   (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_STRAMSIZE_16KRESERVED  (0x3UL)  /*!< Value 0x00000003 */

// Value of readout protection level
#define FLASH_READOUTPROTLEVEL1  (0x88UL)  /*!< Value 0x00008800 */
#define FLASH_READOUTPROTLEVEL0  (0xAAUL)  /*!< Value 0x0000AA00 */
#define FLASH_READOUTPROTLEVEL2  (0xCCUL)  /*!< Value 0x0000CC00 */

// Value of the independent watchdog (IWDG) controller select bit
#define FLASH_IWDGCTRL_HW  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_IWDGCTRL_SW  (0x1UL)  /*!< Value 0x00000001 */

// Value of brownout level
#define FLASH_BORLEV_VTH0  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BORLEV_VTH1  (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_BORLEV_VTH2  (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_BORLEV_VTH3  (0x3UL)  /*!< Value 0x00000003 */

/*!< Option clear control register */
#define FLASH_OPTCCR_CLR_OPTBYTECHANGEERR_OFFSET  (6U)
#define FLASH_OPTCCR_CLR_OPTBYTECHANGEERR_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCCR, CLR_OPTBYTECHANGEERR))  /*!< Mask  0x00000040 */

// Values of option clear interrupt clear bit
#define FLASH_OPTBYTECHANGEERR_NOCLR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_OPTBYTECHANGEERR_CLR    (0x1UL)  /*!< Value 0x00000001 */

/*!< Bank current protection address register */
#define FLASH_PRAR_CUR_DMEP_OFFSET             (31U)
#define FLASH_PRAR_CUR_DMEP_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, DMEP))               /*!< Mask  0x80000000 */

#define FLASH_PRAR_CUR_PROT_AREA_END_OFFSET    (16U)
#define FLASH_PRAR_CUR_PROT_AREA_END_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Mask  0x0FFF0000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00010000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00020000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00040000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00080000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00100000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00200000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00400000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x00800000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x01000000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x02000000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x04000000 */
#define FLASH_PRAR_CUR_PROT_AREA_END_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_END))    /*!< Value 0x08000000 */

#define FLASH_PRAR_CUR_PROT_AREA_START_OFFSET  (0U)
#define FLASH_PRAR_CUR_PROT_AREA_START_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Mask  0x00000FFF */
#define FLASH_PRAR_CUR_PROT_AREA_START_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000001 */
#define FLASH_PRAR_CUR_PROT_AREA_START_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000002 */
#define FLASH_PRAR_CUR_PROT_AREA_START_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000004 */
#define FLASH_PRAR_CUR_PROT_AREA_START_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000008 */
#define FLASH_PRAR_CUR_PROT_AREA_START_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000010 */
#define FLASH_PRAR_CUR_PROT_AREA_START_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000020 */
#define FLASH_PRAR_CUR_PROT_AREA_START_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000040 */
#define FLASH_PRAR_CUR_PROT_AREA_START_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000080 */
#define FLASH_PRAR_CUR_PROT_AREA_START_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000100 */
#define FLASH_PRAR_CUR_PROT_AREA_START_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000200 */
#define FLASH_PRAR_CUR_PROT_AREA_START_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000400 */
#define FLASH_PRAR_CUR_PROT_AREA_START_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_CUR, PROT_AREA_START))  /*!< Value 0x00000800 */

/*!< Bank programmatic protection address register */
#define FLASH_PRAR_PRG_DMEP_OFFSET             (31U)
#define FLASH_PRAR_PRG_DMEP_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, DMEP))               /*!< Mask  0x80000000 */

#define FLASH_PRAR_PRG_PROT_AREA_END_OFFSET    (16U)
#define FLASH_PRAR_PRG_PROT_AREA_END_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Mask  0x0FFF0000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00010000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00020000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00040000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00080000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00100000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00200000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00400000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x00800000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x01000000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x02000000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x04000000 */
#define FLASH_PRAR_PRG_PROT_AREA_END_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_END))    /*!< Value 0x08000000 */

#define FLASH_PRAR_PRG_PROT_AREA_START_OFFSET  (0U)
#define FLASH_PRAR_PRG_PROT_AREA_START_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Mask  0x00000FFF */
#define FLASH_PRAR_PRG_PROT_AREA_START_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000001 */
#define FLASH_PRAR_PRG_PROT_AREA_START_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000002 */
#define FLASH_PRAR_PRG_PROT_AREA_START_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000004 */
#define FLASH_PRAR_PRG_PROT_AREA_START_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000008 */
#define FLASH_PRAR_PRG_PROT_AREA_START_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000010 */
#define FLASH_PRAR_PRG_PROT_AREA_START_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000020 */
#define FLASH_PRAR_PRG_PROT_AREA_START_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000040 */
#define FLASH_PRAR_PRG_PROT_AREA_START_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000080 */
#define FLASH_PRAR_PRG_PROT_AREA_START_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000100 */
#define FLASH_PRAR_PRG_PROT_AREA_START_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000200 */
#define FLASH_PRAR_PRG_PROT_AREA_START_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000400 */
#define FLASH_PRAR_PRG_PROT_AREA_START_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, PRAR_PRG, PROT_AREA_START))  /*!< Value 0x00000800 */

/*!< Bank current secure address register */
#define FLASH_SCAR_CUR_DMES_OFFSET            (31U)
#define FLASH_SCAR_CUR_DMES_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, DMES))              /*!< Mask  0x80000000 */

#define FLASH_SCAR_CUR_SEC_AREA_END_OFFSET    (16U)
#define FLASH_SCAR_CUR_SEC_AREA_END_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Mask  0x0FFF0000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00010000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00020000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00040000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00080000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00100000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00200000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00400000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x00800000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x01000000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x02000000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x04000000 */
#define FLASH_SCAR_CUR_SEC_AREA_END_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_END))    /*!< Value 0x08000000 */

#define FLASH_SCAR_CUR_SEC_AREA_START_OFFSET  (0U)
#define FLASH_SCAR_CUR_SEC_AREA_START_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Mask  0x00000FFF */
#define FLASH_SCAR_CUR_SEC_AREA_START_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000001 */
#define FLASH_SCAR_CUR_SEC_AREA_START_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000002 */
#define FLASH_SCAR_CUR_SEC_AREA_START_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000004 */
#define FLASH_SCAR_CUR_SEC_AREA_START_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000008 */
#define FLASH_SCAR_CUR_SEC_AREA_START_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000010 */
#define FLASH_SCAR_CUR_SEC_AREA_START_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000020 */
#define FLASH_SCAR_CUR_SEC_AREA_START_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000040 */
#define FLASH_SCAR_CUR_SEC_AREA_START_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000080 */
#define FLASH_SCAR_CUR_SEC_AREA_START_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000100 */
#define FLASH_SCAR_CUR_SEC_AREA_START_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000200 */
#define FLASH_SCAR_CUR_SEC_AREA_START_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000400 */
#define FLASH_SCAR_CUR_SEC_AREA_START_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_CUR, SEC_AREA_START))  /*!< Value 0x00000800 */

/*!< Bank programmatic secure address register */
#define FLASH_SCAR_PRG_DMES_OFFSET            (31U)
#define FLASH_SCAR_PRG_DMES_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, DMES))              /*!< Mask  0x80000000 */

#define FLASH_SCAR_PRG_SEC_AREA_END_OFFSET    (16U)
#define FLASH_SCAR_PRG_SEC_AREA_END_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Mask  0x0FFF0000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00010000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00020000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00040000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00080000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00100000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00200000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00400000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x00800000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x01000000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x02000000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x04000000 */
#define FLASH_SCAR_PRG_SEC_AREA_END_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_END))    /*!< Value 0x08000000 */

#define FLASH_SCAR_PRG_SEC_AREA_START_OFFSET  (0U)
#define FLASH_SCAR_PRG_SEC_AREA_START_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Mask  0x00000FFF */
#define FLASH_SCAR_PRG_SEC_AREA_START_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000001 */
#define FLASH_SCAR_PRG_SEC_AREA_START_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000002 */
#define FLASH_SCAR_PRG_SEC_AREA_START_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000004 */
#define FLASH_SCAR_PRG_SEC_AREA_START_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000008 */
#define FLASH_SCAR_PRG_SEC_AREA_START_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000010 */
#define FLASH_SCAR_PRG_SEC_AREA_START_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000020 */
#define FLASH_SCAR_PRG_SEC_AREA_START_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000040 */
#define FLASH_SCAR_PRG_SEC_AREA_START_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000080 */
#define FLASH_SCAR_PRG_SEC_AREA_START_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000100 */
#define FLASH_SCAR_PRG_SEC_AREA_START_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000200 */
#define FLASH_SCAR_PRG_SEC_AREA_START_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000400 */
#define FLASH_SCAR_PRG_SEC_AREA_START_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, SCAR_PRG, SEC_AREA_START))  /*!< Value 0x00000800 */

// Value of enable bank area erase bit when the protection level downgrades from 1 to 0
#define FLASH_ERASEAREA_DISABLED    (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_ERASEAREA_ENABLED     (0x1UL)                                                                /*!< Value 0x00000001 */

/*!< Bank current write sector protection register */
#define FLASH_WPSN_CURR_WRPS7_OFFSET  (7U)
#define FLASH_WPSN_CURR_WRPS7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS7))  /*!< Mask  0x00000080 */

#define FLASH_WPSN_CURR_WRPS6_OFFSET  (6U)
#define FLASH_WPSN_CURR_WRPS6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS6))  /*!< Mask  0x00000040 */

#define FLASH_WPSN_CURR_WRPS5_OFFSET  (5U)
#define FLASH_WPSN_CURR_WRPS5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS5))  /*!< Mask  0x00000020 */

#define FLASH_WPSN_CURR_WRPS4_OFFSET  (4U)
#define FLASH_WPSN_CURR_WRPS4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS4))  /*!< Mask  0x00000010 */

#define FLASH_WPSN_CURR_WRPS3_OFFSET  (3U)
#define FLASH_WPSN_CURR_WRPS3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS3))  /*!< Mask  0x00000008 */

#define FLASH_WPSN_CURR_WRPS2_OFFSET  (2U)
#define FLASH_WPSN_CURR_WRPS2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS2))  /*!< Mask  0x00000004 */

#define FLASH_WPSN_CURR_WRPS1_OFFSET  (1U)
#define FLASH_WPSN_CURR_WRPS1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS1))  /*!< Mask  0x00000002 */

#define FLASH_WPSN_CURR_WRPS0_OFFSET  (0U)
#define FLASH_WPSN_CURR_WRPS0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_CURR, WRPS0))  /*!< Mask  0x00000001 */

/*!< Bank programmatic write sector protection register */
#define FLASH_WPSN_PRGR_WRPS7_OFFSET  (7U)
#define FLASH_WPSN_PRGR_WRPS7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS7))  /*!< Mask  0x00000080 */

#define FLASH_WPSN_PRGR_WRPS6_OFFSET  (6U)
#define FLASH_WPSN_PRGR_WRPS6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS6))  /*!< Mask  0x00000040 */

#define FLASH_WPSN_PRGR_WRPS5_OFFSET  (5U)
#define FLASH_WPSN_PRGR_WRPS5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS5))  /*!< Mask  0x00000020 */

#define FLASH_WPSN_PRGR_WRPS4_OFFSET  (4U)
#define FLASH_WPSN_PRGR_WRPS4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS4))  /*!< Mask  0x00000010 */

#define FLASH_WPSN_PRGR_WRPS3_OFFSET  (3U)
#define FLASH_WPSN_PRGR_WRPS3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS3))  /*!< Mask  0x00000008 */

#define FLASH_WPSN_PRGR_WRPS2_OFFSET  (2U)
#define FLASH_WPSN_PRGR_WRPS2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS2))  /*!< Mask  0x00000004 */

#define FLASH_WPSN_PRGR_WRPS1_OFFSET  (1U)
#define FLASH_WPSN_PRGR_WRPS1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS1))  /*!< Mask  0x00000002 */

#define FLASH_WPSN_PRGR_WRPS0_OFFSET  (0U)
#define FLASH_WPSN_PRGR_WRPS0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, WPSN_PRGR, WRPS0))  /*!< Mask  0x00000001 */

// Value of bank sector write protection
#define FLASH_WRSECPROT_PROTECT    (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_WRSECPROT_NOPROTECT  (0x1UL)  /*!< Value 0x00000001 */

/*!< Current boot address register for ARM Cortex M7 core */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_OFFSET  (16U)
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Mask  0xFFFF0000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000001 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000002 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000004 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000008 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000010 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000020 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000040 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000080 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000100 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000200 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000400 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00000800 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00001000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00002000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00004000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD1))  /*!< Value 0x00008000 */

#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_OFFSET  (0U)
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Mask  0x0000FFFF */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00010000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00020000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00040000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00080000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00100000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00200000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00400000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x00800000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x01000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x02000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x04000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x08000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x10000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x20000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x40000000 */
#define FLASH_BOOT7_CURR_BOOT_CM7_ADD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_CURR, BOOT_CM7_ADD0))  /*!< Value 0x80000000 */

/*!< Programmatic boot address register for ARM Cortex M7 core */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_OFFSET  (16U)
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Mask  0xFFFF0000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000001 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000002 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000004 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000008 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000010 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000020 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000040 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000080 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000100 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000200 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000400 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00000800 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00001000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00002000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00004000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD1))  /*!< Value 0x00008000 */

#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_OFFSET  (0U)
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Mask  0x0000FFFF */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00010000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00020000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00040000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00080000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00100000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00200000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00400000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x00800000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x01000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x02000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x04000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x08000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x10000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x20000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x40000000 */
#define FLASH_BOOT7_PRGR_BOOT_CM7_ADD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT7_PRGR, BOOT_CM7_ADD0))  /*!< Value 0x80000000 */

/*!< Current boot address register for ARM Cortex M4 core */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_OFFSET  (16U)
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Mask  0xFFFF0000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000001 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000002 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000004 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000008 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000010 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000020 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000040 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000080 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000100 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000200 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000400 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00000800 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00001000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00002000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00004000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD1))  /*!< Value 0x00008000 */

#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_OFFSET  (0U)
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Mask  0x0000FFFF */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00010000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00020000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00040000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00080000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00100000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00200000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00400000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x00800000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x01000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x02000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x04000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x08000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x10000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x20000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x40000000 */
#define FLASH_BOOT4_CURR_BOOT_CM4_ADD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_CURR, BOOT_CM4_ADD0))  /*!< Value 0x80000000 */

/*!< Programmatic boot address register for ARM Cortex M4 core */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_OFFSET  (16U)
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Mask  0xFFFF0000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000001 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000002 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000004 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000008 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000010 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000020 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000040 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000080 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000100 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000200 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000400 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00000800 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00001000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00002000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00004000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD1))  /*!< Value 0x00008000 */

#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_OFFSET  (0U)
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Mask  0x0000FFFF */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00010000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00020000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00040000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00080000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00100000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00200000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00400000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x00800000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x01000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x02000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x04000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x08000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x10000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x20000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x40000000 */
#define FLASH_BOOT4_PRGR_BOOT_CM4_ADD0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, BOOT4_PRGR, BOOT_CM4_ADD0))  /*!< Value 0x80000000 */

/*!< Bank CRC control register */
#define FLASH_CRCCR_ALL_BANK_OFFSET     (22U)
#define FLASH_CRCCR_ALL_BANK_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, ALL_BANK))     /*!< Mask  0x00400000 */

#define FLASH_CRCCR_CRC_BURST_OFFSET    (20U)
#define FLASH_CRCCR_CRC_BURST_MASK      (0x3UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, CRC_BURST))    /*!< Mask  0x00300000 */

#define FLASH_CRCCR_CLEAN_CRC_OFFSET    (17U)
#define FLASH_CRCCR_CLEAN_CRC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, CLEAN_CRC))    /*!< Mask  0x00020000 */

#define FLASH_CRCCR_START_CRC_OFFSET    (16U)
#define FLASH_CRCCR_START_CRC_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, START_CRC))    /*!< Mask  0x00010000 */

#define FLASH_CRCCR_CLEAN_SECT_OFFSET   (10U)
#define FLASH_CRCCR_CLEAN_SECT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, CLEAN_SECT))   /*!< Mask  0x00000400 */

#define FLASH_CRCCR_ADD_SECT_OFFSET     (9U)
#define FLASH_CRCCR_ADD_SECT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, ADD_SECT))     /*!< Mask  0x00000200 */

#define FLASH_CRCCR_CRC_BY_SECT_OFFSET  (8U)
#define FLASH_CRCCR_CRC_BY_SECT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, CRC_BY_SECT))  /*!< Mask  0x00000100 */

#define FLASH_CRCCR_CRC_SECT_OFFSET     (0U)
#define FLASH_CRCCR_CRC_SECT_MASK       (0x7UL << REGISTER_FIELD_OFFSET(FLASH, CRCCR, CRC_SECT))     /*!< Mask  0x00000007 */

// Values of enable bit to add all sectors to the list of sector used to calculate the CRC
#define FLASH_ALLSECTORS_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_ALLSECTORS_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

// Values of CRC burst size
#define FLASH_BURSTSIZE_4FLASHWORDS    (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_BURSTSIZE_16FLASHWORDS   (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_BURSTSIZE_64FLASHWORDS   (0x2UL)  /*!< Value 0x00000001 */
#define FLASH_BURSTSIZE_256FLASHWORDS  (0x3UL)  /*!< Value 0x00000001 */

// Values of CRC calculation clear bit
#define FLASH_CLRRESULT_KEEP   (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_CLRRESULT_CLEAR  (0x1UL)  /*!< Value 0x00000001 */

// Values of CRC calculation start bit
#define FLASH_STARTCALC_NOTRIGGER  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_STARTCALC_TRIGGER    (0x1UL)  /*!< Value 0x00000001 */

// Values of sector list clear bit
#define FLASH_SECLIST_KEEP   (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_SECLIST_CLEAR  (0x1UL)  /*!< Value 0x00000001 */

// Values of sector addition enable bit
#define FLASH_SECLIST_NOADD  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_SECLIST_ADD    (0x1UL)  /*!< Value 0x00000001 */

// Values of CRC calculation mode select bit
#define FLASH_CRCCALC_ALLADDR  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_CRCCALC_SECTOR   (0x1UL)  /*!< Value 0x00000001 */

// Values of sector selector register
#define FLASH_SECSEL_SEC0  (0x0UL)  /*!< Value 0x00000000 */
#define FLASH_SECSEL_SEC1  (0x1UL)  /*!< Value 0x00000001 */
#define FLASH_SECSEL_SEC2  (0x2UL)  /*!< Value 0x00000002 */
#define FLASH_SECSEL_SEC3  (0x3UL)  /*!< Value 0x00000003 */
#define FLASH_SECSEL_SEC4  (0x4UL)  /*!< Value 0x00000004 */
#define FLASH_SECSEL_SEC5  (0x5UL)  /*!< Value 0x00000005 */
#define FLASH_SECSEL_SEC6  (0x6UL)  /*!< Value 0x00000006 */
#define FLASH_SECSEL_SEC7  (0x7UL)  /*!< Value 0x00000007 */

/*!< Bank CRC start address register */
#define FLASH_CRCSADDR_CRC_START_ADDR_OFFSET  (2U)
#define FLASH_CRCSADDR_CRC_START_ADDR_MASK    (0x3FFFFUL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Mask  0x000FFFFC */
#define FLASH_CRCSADDR_CRC_START_ADDR_0       (0x00001UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000004 */
#define FLASH_CRCSADDR_CRC_START_ADDR_1       (0x00002UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000008 */
#define FLASH_CRCSADDR_CRC_START_ADDR_2       (0x00004UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000010 */
#define FLASH_CRCSADDR_CRC_START_ADDR_3       (0x00008UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000020 */
#define FLASH_CRCSADDR_CRC_START_ADDR_4       (0x00010UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000040 */
#define FLASH_CRCSADDR_CRC_START_ADDR_5       (0x00020UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000080 */
#define FLASH_CRCSADDR_CRC_START_ADDR_6       (0x00040UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000100 */
#define FLASH_CRCSADDR_CRC_START_ADDR_7       (0x00080UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000200 */
#define FLASH_CRCSADDR_CRC_START_ADDR_8       (0x00100UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000400 */
#define FLASH_CRCSADDR_CRC_START_ADDR_9       (0x00200UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00000800 */
#define FLASH_CRCSADDR_CRC_START_ADDR_10      (0x00400UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00001000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_11      (0x00800UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00002000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_12      (0x01000UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00004000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_13      (0x02000UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00008000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_14      (0x04000UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00010000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_15      (0x08000UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00020000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_16      (0x10000UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00040000 */
#define FLASH_CRCSADDR_CRC_START_ADDR_17      (0x20000UL << REGISTER_FIELD_OFFSET(FLASH, CRCSADDR, CRC_START_ADDR))  /*!< Value 0x00080000 */

/*!< Bank CRC end address register */
#define FLASH_CRCEADDR_CRC_END_ADDR_OFFSET  (2U)
#define FLASH_CRCEADDR_CRC_END_ADDR_MASK    (0x3FFFFUL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Mask  0x000FFFFC */
#define FLASH_CRCEADDR_CRC_END_ADDR_0       (0x00001UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000004 */
#define FLASH_CRCEADDR_CRC_END_ADDR_1       (0x00002UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000008 */
#define FLASH_CRCEADDR_CRC_END_ADDR_2       (0x00004UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000010 */
#define FLASH_CRCEADDR_CRC_END_ADDR_3       (0x00008UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000020 */
#define FLASH_CRCEADDR_CRC_END_ADDR_4       (0x00010UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000040 */
#define FLASH_CRCEADDR_CRC_END_ADDR_5       (0x00020UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000080 */
#define FLASH_CRCEADDR_CRC_END_ADDR_6       (0x00040UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000100 */
#define FLASH_CRCEADDR_CRC_END_ADDR_7       (0x00080UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000200 */
#define FLASH_CRCEADDR_CRC_END_ADDR_8       (0x00100UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000400 */
#define FLASH_CRCEADDR_CRC_END_ADDR_9       (0x00200UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00000800 */
#define FLASH_CRCEADDR_CRC_END_ADDR_10      (0x00400UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00001000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_11      (0x00800UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00002000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_12      (0x01000UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00004000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_13      (0x02000UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00008000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_14      (0x04000UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00010000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_15      (0x08000UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00020000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_16      (0x10000UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00040000 */
#define FLASH_CRCEADDR_CRC_END_ADDR_17      (0x20000UL << REGISTER_FIELD_OFFSET(FLASH, CRCEADDR, CRC_END_ADDR))  /*!< Value 0x00080000 */

/*!< Bank CRC data register */
#define FLASH_CRCDATAR_CRC_DATA_OFFSET  (0U)
#define FLASH_CRCDATAR_CRC_DATA_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Mask  0xFFFFFFFF */
#define FLASH_CRCDATAR_CRC_DATA_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000001 */
#define FLASH_CRCDATAR_CRC_DATA_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000002 */
#define FLASH_CRCDATAR_CRC_DATA_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000004 */
#define FLASH_CRCDATAR_CRC_DATA_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000008 */
#define FLASH_CRCDATAR_CRC_DATA_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000010 */
#define FLASH_CRCDATAR_CRC_DATA_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000020 */
#define FLASH_CRCDATAR_CRC_DATA_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000040 */
#define FLASH_CRCDATAR_CRC_DATA_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000080 */
#define FLASH_CRCDATAR_CRC_DATA_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000100 */
#define FLASH_CRCDATAR_CRC_DATA_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000200 */
#define FLASH_CRCDATAR_CRC_DATA_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000400 */
#define FLASH_CRCDATAR_CRC_DATA_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00000800 */
#define FLASH_CRCDATAR_CRC_DATA_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00001000 */
#define FLASH_CRCDATAR_CRC_DATA_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00002000 */
#define FLASH_CRCDATAR_CRC_DATA_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00004000 */
#define FLASH_CRCDATAR_CRC_DATA_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00008000 */
#define FLASH_CRCDATAR_CRC_DATA_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00010000 */
#define FLASH_CRCDATAR_CRC_DATA_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00020000 */
#define FLASH_CRCDATAR_CRC_DATA_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00040000 */
#define FLASH_CRCDATAR_CRC_DATA_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00080000 */
#define FLASH_CRCDATAR_CRC_DATA_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00100000 */
#define FLASH_CRCDATAR_CRC_DATA_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00200000 */
#define FLASH_CRCDATAR_CRC_DATA_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00400000 */
#define FLASH_CRCDATAR_CRC_DATA_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x00800000 */
#define FLASH_CRCDATAR_CRC_DATA_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x01000000 */
#define FLASH_CRCDATAR_CRC_DATA_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x02000000 */
#define FLASH_CRCDATAR_CRC_DATA_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x04000000 */
#define FLASH_CRCDATAR_CRC_DATA_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x08000000 */
#define FLASH_CRCDATAR_CRC_DATA_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x10000000 */
#define FLASH_CRCDATAR_CRC_DATA_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x20000000 */
#define FLASH_CRCDATAR_CRC_DATA_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x40000000 */
#define FLASH_CRCDATAR_CRC_DATA_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FLASH, CRCDATAR, CRC_DATA))  /*!< Value 0x80000000 */

/*!< Bank ECC fail address register */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_OFFSET  (0U)
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_MASK    (0x00007FFFUL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Mask  0x00007FFF */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000001 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000002 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000004 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000008 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000010 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000020 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000040 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000080 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000100 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000200 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000400 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00000800 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00001000 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00002000 */
#define FLASH_ECC_FAR_FAIL_ECC_ADDR_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, ECC_FAR, FAIL_ECC_ADDR))  /*!< Value 0x00004000 */

#define FLASH_OFFSET 0x1002000UL
#define FLASH_BASE (D1_AHB3_BASE + FLASH_OFFSET)
#define FLASH_ADDRESS_RANGE 0x100UL

/*!< FLASH registers for bank 1 */
#define FLASH_BANK1_OFFSET (0*FLASH_ADDRESS_RANGE)
#define FLASH_BANK1_BASE OFFSET_ADDRESS(FLASH_BASE, FLASH_BANK1_OFFSET)
#define FLASH_BANK1 REGISTER_PTR(flash_bank_regs, FLASH_BANK1_BASE)

/*!< FLASH registers for bank 2 */
#define FLASH_BANK2_OFFSET (1*FLASH_ADDRESS_RANGE)
#define FLASH_BANK2_BASE OFFSET_ADDRESS(FLASH_BASE, FLASH_BANK2_OFFSET)
#define FLASH_BANK2 REGISTER_PTR(flash_bank_regs, FLASH_BANK2_BASE)

/** @} */ // End of EmbeddedFlashMemory group

/** @} */ // End of RegisterGroup group

#endif // FLASH_REGISTERS_H
