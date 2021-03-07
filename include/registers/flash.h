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
 *  @defgroup FlashMemory Embedded Flash Memory
 *  @brief Embedded Flash memory macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t ACCESSCTRL;          /*!< Access control register                                   (Offset 0x0)  */
	WO uint32_t BANKKEY;             /*!< Bank key register register                                (Offset 0x4)  */
	WO uint32_t OPTKEY;              /*!< Option key register                                       (Offset 0x8)  */
	RW uint32_t BANKCTRL;            /*!< Bank control register register                            (Offset 0xC)  */
	RO uint32_t BANKSTATUS;          /*!< Bank status register register                             (Offset 0x10) */
	WO uint32_t BANKCLRCTRL;         /*!< Clear control register for bank                           (Offset 0x14) */
	RW uint32_t OPTCTRL;             /*!< Option control register                                   (Offset 0x18) */
	RO uint32_t CUROPTSTATUS;        /*!< Current option status register                            (Offset 0x1C) */
	RW uint32_t PROGOPTSTATUS;       /*!< Programmatic option status register                       (Offset 0x20) */
	RW uint32_t OPTCLRCTRL;          /*!< Option clear control register                             (Offset 0x24) */
	RO uint32_t BANKCURPROTADDR;     /*!< Bank current protection address register                  (Offset 0x28) */
	RW uint32_t BANKPROGPROTADDR;    /*!< Bank programmatic protection address register             (Offset 0x2C) */
	RO uint32_t BANKCURSECADDR;      /*!< Bank current secure address register                      (Offset 0x30) */
	RW uint32_t BANKPROGSECADDR;     /*!< Bank programmatic secure address register                 (Offset 0x34) */
	RO uint32_t BANKCURWRSECPROT;    /*!< Bank current write sector protection register             (Offset 0x38) */
	RW uint32_t BANKPROGWRSECPROT;   /*!< Bank programmatic write sector protection register        (Offset 0x3C) */
	RO uint32_t CURBOOTADDRM7;       /*!< Current boot address register for ARM Cortex M7 core      (Offset 0x40) */
	RW uint32_t PROGBOOTADDRM7;      /*!< Programmatic boot address register for ARM Cortex M7 core (Offset 0x44) */
	RO uint32_t CURBOOTADDRM4;       /*!< Current boot address register for ARM Cortex M4 core      (Offset 0x48) */
	RW uint32_t PROGBOOTADDRM4;      /*!< Programmatic boot address register for ARM Cortex M4 core (Offset 0x4C) */
	RW uint32_t BANKCRCCTRL;         /*!< Bank CRC control register                                 (Offset 0x50) */
	RW uint32_t BANKCRCSTARTADDR;    /*!< Bank CRC start address register                           (Offset 0x54) */
	RW uint32_t BANKCRCENDADDR;      /*!< Bank CRC end address register                             (Offset 0x58) */
	RO uint32_t BANKCRCDATA;         /*!< Bank CRC data register                                    (Offset 0x5C) */
	RO uint32_t BANKERRFAILADDR;     /*!< Bank ECC fail address register                            (Offset 0x60) */
} bank_regs;

/*!< Embedded Flash memory registers */
/*!< Access control register */
#define FLASH_ACCESSCTRL_PROGDLY_OFFSET      (4U)
#define FLASH_ACCESSCTRL_PROGDLY_MASK        (0x3UL << REGISTER_FIELD_OFFSET(FLASH, ACCESSCTRL, PROGDLY))  /*!< Mask  0x00000030 */
#define FLASH_ACCESSCTRL_PROGDLY_0           (0x0UL)                                                       /*!< Value 0x00000000 */
#define FLASH_ACCESSCTRL_PROGDLY_1           (0x1UL)                                                       /*!< Value 0x00000001 */
#define FLASH_ACCESSCTRL_PROGDLY_2           (0x2UL)                                                       /*!< Value 0x00000002 */
#define FLASH_ACCESSCTRL_PROGDLY_3           (0x3UL)                                                       /*!< Value 0x00000003 */

#define FLASH_ACCESSCTRL_LATENCY_OFFSET      (0U)
#define FLASH_ACCESSCTRL_LATENCY_MASK        (0xFUL << REGISTER_FIELD_OFFSET(FLASH, ACCESSCTRL, LATENCY))  /*!< Mask  0x0000000F */
#define FLASH_ACCESSCTRL_LATENCY_0WAITSTATE  (0x0UL)                                                       /*!< Value 0x00000000 */
#define FLASH_ACCESSCTRL_LATENCY_1WAITSTATE  (0x1UL)                                                       /*!< Value 0x00000001 */
#define FLASH_ACCESSCTRL_LATENCY_2WAITSTATE  (0x2UL)                                                       /*!< Value 0x00000002 */
#define FLASH_ACCESSCTRL_LATENCY_3WAITSTATE  (0x3UL)                                                       /*!< Value 0x00000003 */
#define FLASH_ACCESSCTRL_LATENCY_4WAITSTATE  (0x4UL)                                                       /*!< Value 0x00000004 */
#define FLASH_ACCESSCTRL_LATENCY_3WAITSTATE  (0x7UL)                                                       /*!< Value 0x00000007 */

/*!< Bank key register register  */
#define FLASH_BANKKEY_ACCESSKEY_OFFSET  (0U)
#define FLASH_BANKKEY_ACCESSKEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKKEY, ACCESSKEY))  /*!< Mask  0xFFFFFFFF */
#define FLASH_BANKKEY_ACCESSKEY_KEY1    (0x45670123UL)                                                      /*!< Value 0x45670123 */
#define FLASH_BANKKEY_ACCESSKEY_KEY2    (0xCDEF89ABUL)                                                      /*!< Value 0xCDEF89AB */

/*!< Option key register  */
#define FLASH_OPTKEY_ACCESSKEY_OFFSET  (0U)
#define FLASH_OPTKEY_ACCESSKEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Mask  0xFFFFFFFF */
#define FLASH_OPTKEY_ACCESSKEY_KEY1    (0x08192A3BUL)                                                     /*!< Value 0x08192A3B */
#define FLASH_OPTKEY_ACCESSKEY_KEY2    (0x4C5D6E7FUL)                                                     /*!< Value 0x4C5D6E7F */

/*!< Bank control register register  */
#define FLASH_BANKCTRL_CRCRDERRINT_OFFSET            (28U)
#define FLASH_BANKCTRL_CRCRDERRINT_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, CRCRDERRINT))         /*!< Mask  0x10000000 */
#define FLASH_BANKCTRL_CRCRDERRINT_DISABLE           (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_CRCRDERRINT_ENABLE            (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_CRCEOCINT_OFFSET              (27U)
#define FLASH_BANKCTRL_CRCEOCINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, CRCEOCINT))           /*!< Mask  0x08000000 */
#define FLASH_BANKCTRL_CRCEOCINT_DISABLE             (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_CRCEOCINT_ENABLE              (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_ERRDOUBLEDETERRINT_OFFSET     (26U)
#define FLASH_BANKCTRL_ERRDOUBLEDETERRINT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, ERRDOUBLEDETERRINT))  /*!< Mask  0x04000000 */
#define FLASH_BANKCTRL_ERRDOUBLEDETERRINT_DISABLE    (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_ERRDOUBLEDETERRINT_ENABLE     (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_ERRSGLCORRERRINT_OFFSET       (25U)
#define FLASH_BANKCTRL_ERRSGLCORRERRINT_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, ERRSGLCORRERRINT))    /*!< Mask  0x02000000 */
#define FLASH_BANKCTRL_ERRSGLCORRERRINT_DISABLE      (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_ERRSGLCORRERRINT_ENABLE       (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_SECRDERRINT_OFFSET            (24U)
#define FLASH_BANKCTRL_SECRDERRINT_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, SECRDERRINT))         /*!< Mask  0x01000000 */
#define FLASH_BANKCTRL_SECRDERRINT_DISABLE           (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_SECRDERRINT_ENABLE            (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_1RCRDERRINT_OFFSET            (23U)
#define FLASH_BANKCTRL_RDPROTERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, RDPROTERRINT))        /*!< Mask  0x00800000 */
#define FLASH_BANKCTRL_RDPROTERRINT_DISABLE          (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_RDPROTERRINT_ENABLE           (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WREROPERRINT_OFFSET           (22U)
#define FLASH_BANKCTRL_WREROPERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WREROPERRINT))        /*!< Mask  0x00400000 */
#define FLASH_BANKCTRL_WREROPERRINT_DISABLE          (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WREROPERRINT_ENABLE           (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WRINCOSTENCYERRINT_OFFSET     (21U)
#define FLASH_BANKCTRL_WRINCOSTENCYERRINT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WRINCOSTENCYERRINT))  /*!< Mask  0x00200000 */
#define FLASH_BANKCTRL_WRINCOSTENCYERRINT_DISABLE    (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WRINCOSTENCYERRINT_ENABLE     (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WRSTRBERRINT_OFFSET           (19U)
#define FLASH_BANKCTRL_WRSTRBERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WRSTRBERRINT))        /*!< Mask  0x00080000 */
#define FLASH_BANKCTRL_WRSTRBERRINT_DISABLE          (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WRSTRBERRINT_ENABLE           (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_PROGSEQINT_OFFSET             (18U)
#define FLASH_BANKCTRL_PROGSEQINT_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, PROGSEQINT))          /*!< Mask  0x00040000 */
#define FLASH_BANKCTRL_PROGSEQINT_DISABLE            (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_PROGSEQINT_ENABLE             (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WRPROTERRINT_OFFSET           (17U)
#define FLASH_BANKCTRL_WRPROTERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WRPROTERRINT))        /*!< Mask  0x00020000 */
#define FLASH_BANKCTRL_WRPROTERRINT_DISABLE          (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WRPROTERRINT_ENABLE           (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_EOPINT_OFFSET                 (16U)
#define FLASH_BANKCTRL_EOPINT_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, EOPINT))              /*!< Mask  0x00010000 */
#define FLASH_BANKCTRL_EOPINT_DISABLE                (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_EOPINT_ENABLE                 (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_CRCEN_OFFSET                  (15U)
#define FLASH_BANKCTRL_CRCEN_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, CRCEN))               /*!< Mask  0x00008000 */
#define FLASH_BANKCTRL_CRCEN_DISABLE                 (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_CRCEN_ENABLE                  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_SECERASESEL_OFFSET            (8U)
#define FLASH_BANKCTRL_SECERASESEL_MASK              (0x7UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, SECERASESEL))         /*!< Mask  0x00000700 */
#define FLASH_BANKCTRL_SECERASESEL_SEC0              (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x1UL)                                                                /*!< Value 0x00000001 */
#define FLASH_BANKCTRL_SECERASESEL_SEC2              (0x2UL)                                                                /*!< Value 0x00000002 */
#define FLASH_BANKCTRL_SECERASESEL_SEC3              (0x3UL)                                                                /*!< Value 0x00000003 */
#define FLASH_BANKCTRL_SECERASESEL_SEC4              (0x4UL)                                                                /*!< Value 0x00000004 */
#define FLASH_BANKCTRL_SECERASESEL_SEC5              (0x5UL)                                                                /*!< Value 0x00000005 */
#define FLASH_BANKCTRL_SECERASESEL_SEC6              (0x6UL)                                                                /*!< Value 0x00000006 */
#define FLASH_BANKCTRL_SECERASESEL_SEC7              (0x7UL)                                                                /*!< Value 0x00000007 */

#define FLASH_BANKCTRL_START_OFFSET                  (7U)
#define FLASH_BANKCTRL_START_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, START))               /*!< Mask  0x00000080 */
#define FLASH_BANKCTRL_START_DISABLE                 (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_START_ENABLE                  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_FORCEWR_OFFSET                (6U)
#define FLASH_BANKCTRL_FORCEWR_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, FORCEWR))             /*!< Mask  0x00000040 */
#define FLASH_BANKCTRL_FORCEWR_DISABLE               (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_FORCEWR_ENABLE                (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_PROGSIZE_OFFSET               (4U)
#define FLASH_BANKCTRL_PROGSIZE_MASK                 (0x3UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, PROGSIZE))            /*!< Mask  0x00000030 */
#define FLASH_BANKCTRL_PROGSIZE_BYTEPAR              (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_PROGSIZE_HALFWORDPAR          (0x1UL)                                                                /*!< Value 0x00000001 */
#define FLASH_BANKCTRL_PROGSIZE_WORDPAR              (0x2UL)                                                                /*!< Value 0x00000002 */
#define FLASH_BANKCTRL_PROGSIZE_DOUBLEWORDPAR        (0x3UL)                                                                /*!< Value 0x00000003 */

#define FLASH_BANKCTRL_ERASEREQ_OFFSET               (3U)
#define FLASH_BANKCTRL_ERASEREQ_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, ERASEREQ))            /*!< Mask  0x00000008 */
#define FLASH_BANKCTRL_ERASEREQ_DISABLE              (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_ERASEREQ_ENABLE               (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_SECERASEREQ_OFFSET            (2U)
#define FLASH_BANKCTRL_SECERASEREQ_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, SECERASEREQ))         /*!< Mask  0x00000004 */
#define FLASH_BANKCTRL_SECERASEREQ_DISABLE           (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_SECERASEREQ_ENABLE            (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_INTBUFEN_OFFSET               (1U)
#define FLASH_BANKCTRL_INTBUFEN_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, INTBUFEN))            /*!< Mask  0x00000002 */
#define FLASH_BANKCTRL_INTBUFEN_DISABLE              (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_INTBUFEN_ENABLE               (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_LOCK_OFFSET                   (0U)
#define FLASH_BANKCTRL_LOCK_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, LOCK))                /*!< Mask  0x00000001 */
#define FLASH_BANKCTRL_LOCK_DISABLE                  (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_LOCK_ENABLE                   (0x1UL)                                                                /*!< Value 0x00000001 */

/*!< Bank status register register */
#define FLASH_BANKSTATUS_CRCRDERRINT_OFFSET               (28U)
#define FLASH_BANKSTATUS_CRCRDERRINT_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, CRCRDERRINT))         /*!< Mask  0x10000000 */
#define FLASH_BANKSTATUS_CRCRDERRINT_NOTTRIGGERED         (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_CRCRDERRINT_TRIGGERED            (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_CRCEOCINT_OFFSET                 (27U)
#define FLASH_BANKSTATUS_CRCEOCINT_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, CRCEOCINT))           /*!< Mask  0x08000000 */
#define FLASH_BANKSTATUS_CRCEOCINT_NOTTRIGGERED           (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_CRCEOCINT_TRIGGERED              (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_ERRDOUBLEDETERRINT_OFFSET        (26U)
#define FLASH_BANKSTATUS_ERRDOUBLEDETERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, ERRDOUBLEDETERRINT))  /*!< Mask  0x04000000 */
#define FLASH_BANKSTATUS_ERRDOUBLEDETERRINT_NOTTRIGGERED  (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_ERRDOUBLEDETERRINT_TRIGGERED     (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_ERRSGLCORRERRINT_OFFSET          (25U)
#define FLASH_BANKSTATUS_ERRSGLCORRERRINT_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, ERRSGLCORRERRINT))    /*!< Mask  0x02000000 */
#define FLASH_BANKSTATUS_ERRSGLCORRERRINT_NOTTRIGGERED    (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_ERRSGLCORRERRINT_TRIGGERED       (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_SECRDERRINT_OFFSET               (24U)
#define FLASH_BANKSTATUS_SECRDERRINT_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, SECRDERRINT))         /*!< Mask  0x01000000 */
#define FLASH_BANKSTATUS_SECRDERRINT_NOTTRIGGERED         (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_SECRDERRINT_TRIGGERED            (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_1RCRDERRINT_OFFSET               (23U)
#define FLASH_BANKSTATUS_RDPROTERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, RDPROTERRINT))        /*!< Mask  0x00800000 */
#define FLASH_BANKSTATUS_RDPROTERRINT_NOTTRIGGERED        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_RDPROTERRINT_TRIGGERED           (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_WREROPERRINT_OFFSET              (22U)
#define FLASH_BANKSTATUS_WREROPERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, WREROPERRINT))        /*!< Mask  0x00400000 */
#define FLASH_BANKSTATUS_WREROPERRINT_NOTTRIGGERED        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_WREROPERRINT_TRIGGERED           (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_WRINCOSTENCYERRINT_OFFSET        (21U)
#define FLASH_BANKSTATUS_WRINCOSTENCYERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, WRINCOSTENCYERRINT))  /*!< Mask  0x00200000 */
#define FLASH_BANKSTATUS_WRINCOSTENCYERRINT_NOTTRIGGERED  (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_WRINCOSTENCYERRINT_TRIGGERED     (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_WRSTRBERRINT_OFFSET              (19U)
#define FLASH_BANKSTATUS_WRSTRBERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, WRSTRBERRINT))        /*!< Mask  0x00080000 */
#define FLASH_BANKSTATUS_WRSTRBERRINT_NOTTRIGGERED        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_WRSTRBERRINT_TRIGGERED           (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_PROGSEQINT_OFFSET                (18U)
#define FLASH_BANKSTATUS_PROGSEQINT_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, PROGSEQINT))          /*!< Mask  0x00040000 */
#define FLASH_BANKSTATUS_PROGSEQINT_NOTTRIGGERED          (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_PROGSEQINT_TRIGGERED             (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_WRPROTERRINT_OFFSET              (17U)
#define FLASH_BANKSTATUS_WRPROTERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, WRPROTERRINT))        /*!< Mask  0x00020000 */
#define FLASH_BANKSTATUS_WRPROTERRINT_NOTTRIGGERED        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_WRPROTERRINT_TRIGGERED           (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_EOPINT_OFFSET                    (16U)
#define FLASH_BANKSTATUS_EOPINT_MASK                      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, EOPINT))              /*!< Mask  0x00010000 */
#define FLASH_BANKSTATUS_EOPINT_NOTTRIGGERED              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_EOPINT_TRIGGERED                 (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_CRCBUSY_OFFSET                   (3U)
#define FLASH_BANKSTATUS_CRCBUSY_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, CRCBUSYFLAG))         /*!< Mask  0x00000008 */
#define FLASH_BANKSTATUS_CRCBUSY_NOCALCRUNNING            (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_CRCBUSY_CALCRUNNINGG             (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_WAITQUEUEFLAG_OFFSET             (2U)
#define FLASH_BANKSTATUS_WAITQUEUE_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, WAITQUEUEFLAG))       /*!< Mask  0x00000004 */
#define FLASH_BANKSTATUS_WAITQUEUE_EMPTY                  (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_WAITQUEUE_OPPENDING              (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_WRITEBUF_OFFSET                  (1U)
#define FLASH_BANKSTATUS_WRITEBUF_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, WRITEBUF))            /*!< Mask  0x00000002 */
#define FLASH_BANKSTATUS_WRITEBUF_EMPTY                   (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_WRITEBUF_WAITINGDATA             (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKSTATUS_BUSYFLAGS_OFFSET                 (0U)
#define FLASH_BANKSTATUS_BUSYFLAGS_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKSTATUS, BUSYFLAGS))           /*!< Mask  0x00000001 */
#define FLASH_BANKSTATUS_BUSYFLAGS_NOOP                   (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKSTATUS_BUSYFLAGS_OPONGOING              (0x1UL)                                                                  /*!< Value 0x00000001 */

/*!< Clear control register for bank */
#define FLASH_BANKCLRCTRL_CRCRDERRINT_OFFSET         (28U)
#define FLASH_BANKCLRCTRL_CRCRDERRINT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, CRCRDERRINT))         /*!< Mask  0x10000000 */
#define FLASH_BANKCLRCTRL_CRCRDERRINT_NOCLR          (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_CRCRDERRINT_CLR            (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_CRCEOCINT_OFFSET           (27U)
#define FLASH_BANKCLRCTRL_CRCEOCINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, CRCEOCINT))           /*!< Mask  0x08000000 */
#define FLASH_BANKCLRCTRL_CRCEOCINT_NOCLR            (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_CRCEOCINT_CLR              (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_ERRDOUBLEDETERRINT_OFFSET  (26U)
#define FLASH_BANKCLRCTRL_ERRDOUBLEDETERRINT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, ERRDOUBLEDETERRINT))  /*!< Mask  0x04000000 */
#define FLASH_BANKCLRCTRL_ERRDOUBLEDETERRINT_NOCLR   (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_ERRDOUBLEDETERRINT_CLR     (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_ERRSGLCORRERRINT_OFFSET    (25U)
#define FLASH_BANKCLRCTRL_ERRSGLCORRERRINT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, ERRSGLCORRERRINT))    /*!< Mask  0x02000000 */
#define FLASH_BANKCLRCTRL_ERRSGLCORRERRINT_NOCLR     (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_ERRSGLCORRERRINT_CLR       (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_SECRDERRINT_OFFSET         (24U)
#define FLASH_BANKCLRCTRL_SECRDERRINT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, SECRDERRINT))         /*!< Mask  0x01000000 */
#define FLASH_BANKCLRCTRL_SECRDERRINT_NOCLR          (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_SECRDERRINT_CLR            (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_1RCRDERRINT_OFFSET         (23U)
#define FLASH_BANKCLRCTRL_RDPROTERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, RDPROTERRINT))        /*!< Mask  0x00800000 */
#define FLASH_BANKCLRCTRL_RDPROTERRINT_NOCLR         (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_RDPROTERRINT_CLR           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_WREROPERRINT_OFFSET        (22U)
#define FLASH_BANKCLRCTRL_WREROPERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, WREROPERRINT))        /*!< Mask  0x00400000 */
#define FLASH_BANKCLRCTRL_WREROPERRINT_NOCLR         (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_WREROPERRINT_CLR           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_WRINCOSTENCYERRINT_OFFSET  (21U)
#define FLASH_BANKCLRCTRL_WRINCOSTENCYERRINT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, WRINCOSTENCYERRINT))  /*!< Mask  0x00200000 */
#define FLASH_BANKCLRCTRL_WRINCOSTENCYERRINT_NOCLR   (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_WRINCOSTENCYERRINT_CLR     (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_WRSTRBERRINT_OFFSET        (19U)
#define FLASH_BANKCLRCTRL_WRSTRBERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, WRSTRBERRINT))        /*!< Mask  0x00080000 */
#define FLASH_BANKCLRCTRL_WRSTRBERRINT_NOCLR         (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_WRSTRBERRINT_CLR           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_PROGSEQINT_OFFSET          (18U)
#define FLASH_BANKCLRCTRL_PROGSEQINT_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, PROGSEQINT))          /*!< Mask  0x00040000 */
#define FLASH_BANKCLRCTRL_PROGSEQINT_NOCLR           (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_PROGSEQINT_CLR             (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_WRPROTERRINT_OFFSET        (17U)
#define FLASH_BANKCLRCTRL_WRPROTERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, WRPROTERRINT))        /*!< Mask  0x00020000 */
#define FLASH_BANKCLRCTRL_WRPROTERRINT_NOCLR         (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_WRPROTERRINT_CLR           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANKCLRCTRL_EOPINT_OFFSET              (16U)
#define FLASH_BANKCLRCTRL_EOPINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCLRCTRL, EOPINT))              /*!< Mask  0x00010000 */
#define FLASH_BANKCLRCTRL_EOPINT_NOCLR               (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANKCLRCTRL_EOPINT_CLR                 (0x1UL)                                                                   /*!< Value 0x00000001 */

/*!< Option control register */
#define FLASH_OPTCTRL_SWAPBANKS_OFFSET          (31U)
#define FLASH_OPTCTRL_SWAPBANKS_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCTRL, SWAPBANKS))         /*!< Mask  0x80000000 */
#define FLASH_OPTCTRL_SWAPBANKS_DISABLE         (0x0UL)                                                             /*!< Value 0x00000000 */
#define FLASH_OPTCTRL_SWAPBANKS_ENABLE          (0x1UL)                                                             /*!< Value 0x00000001 */

#define FLASH_OPTCTRL_OPTBYTECHANGEINT_OFFSET   (30U)
#define FLASH_OPTCTRL_OPTBYTECHANGEINT_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCTRL, OPTBYTECHANGEINT))  /*!< Mask  0x40000000 */
#define FLASH_OPTCTRL_OPTBYTECHANGEINT_DISABLE  (0x0UL)                                                             /*!< Value 0x00000000 */
#define FLASH_OPTCTRL_OPTBYTECHANGEINT_ENABLE   (0x1UL)                                                             /*!< Value 0x00000001 */

#define FLASH_OPTCTRL_MASSERASE_OFFSET          (4U)
#define FLASH_OPTCTRL_MASSERASE_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCTRL, MASSERASE))         /*!< Mask  0x00000010 */
#define FLASH_OPTCTRL_MASSERASE_NOREQUEST       (0x0UL)                                                             /*!< Value 0x00000000 */
#define FLASH_OPTCTRL_MASSERASE_REQUEST         (0x1UL)                                                             /*!< Value 0x00000001 */

#define FLASH_OPTCTRL_OPTBYTESTART_OFFSET       (1U)
#define FLASH_OPTCTRL_OPTBYTESTART_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCTRL, OPTBYTESTART))      /*!< Mask  0x00000002 */
#define FLASH_OPTCTRL_OPTBYTESTART_NOTRIGGER    (0x0UL)                                                             /*!< Value 0x00000000 */
#define FLASH_OPTCTRL_OPTBYTESTART_TRIGGER      (0x1UL)                                                             /*!< Value 0x00000001 */

#define FLASH_OPTCTRL_LOCKCTRL_OFFSET           (0U)
#define FLASH_OPTCTRL_LOCKCTRL_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCTRL, LOCKCTRL))          /*!< Mask  0x00000001 */
#define FLASH_OPTCTRL_LOCKCTRL_UNLOCKED         (0x0UL)                                                             /*!< Value 0x00000000 */
#define FLASH_OPTCTRL_LOCKCTRL_LOCKED           (0x1UL)                                                             /*!< Value 0x00000001 */

/*!< Current option status register */
#define FLASH_CUROPTSTATUS_SWAPBANKS_OFFSET                (31U)
#define FLASH_CUROPTSTATUS_SWAPBANKS_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, SWAPBANKS))              /*!< Mask  0x80000000 */
#define FLASH_CUROPTSTATUS_SWAPBANKS_DISABLE               (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_SWAPBANKS_ENABLE                (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_OPTBYTECHANGEINT_OFFSET         (30U)
#define FLASH_CUROPTSTATUS_OPTBYTECHANGEINT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, OPTBYTECHANGEINT))       /*!< Mask  0x40000000 */
#define FLASH_CUROPTSTATUS_OPTBYTECHANGEINT_NOTTRIGGERED   (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_OPTBYTECHANGEINT_TRIGGERED      (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_IOSPEEDOPTLOWVLT_OFFSET         (29U)
#define FLASH_CUROPTSTATUS_IOSPEEDOPTLOWVLT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, IOSPEEDOPTLOWVLT))       /*!< Mask  0x20000000 */
#define FLASH_CUROPTSTATUS_IOSPEEDOPTLOWVLT_DISABLED       (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_IOSPEEDOPTLOWVLT_ALLOWED        (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_D2STANDBYRST_OFFSET             (25U)
#define FLASH_CUROPTSTATUS_D2STANDBYRST_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, D2STANDBYRST))           /*!< Mask  0x02000000 */
#define FLASH_CUROPTSTATUS_D2STANDBYRST_ENABLED            (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_D2STANDBYRST_DISABLED           (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_D2STOPRST_OFFSET                (24U)
#define FLASH_CUROPTSTATUS_D2STOPRST_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, D2STOPRST))              /*!< Mask  0x01000000 */
#define FLASH_CUROPTSTATUS_D2STOPRST_ENABLED               (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_D2STOPRST_DISABLED              (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_BOOTM7_OFFSET                   (23U)
#define FLASH_CUROPTSTATUS_BOOTM7_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, BOOTM7))                 /*!< Mask  0x00800000 */
#define FLASH_CUROPTSTATUS_BOOTM7_DISABLED                 (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_BOOTM7_ENABLED                  (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_BOOTM4_OFFSET                   (22U)
#define FLASH_CUROPTSTATUS_BOOTM4_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, BOOTM4))                 /*!< Mask  0x00400000 */
#define FLASH_CUROPTSTATUS_BOOTM4_DISABLED                 (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_BOOTM4_ENABLED                  (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_SECOPT_OFFSET                   (21U)
#define FLASH_CUROPTSTATUS_SECOPT_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, SECOPT))                 /*!< Mask  0x00200000 */
#define FLASH_CUROPTSTATUS_SECOPT_DISABLED                 (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_SECOPT_ENABLED                  (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_STRAMSIZE_OFFSET                (19U)
#define FLASH_CUROPTSTATUS_STRAMSIZE_MASK                  (0x3UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, STRAMSIZE))              /*!< Mask  0x00180000 */
#define FLASH_CUROPTSTATUS_STRAMSIZE_2KRESERVED            (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_STRAMSIZE_4KRESERVED            (0x1UL)                                                                       /*!< Value 0x00000001 */
#define FLASH_CUROPTSTATUS_STRAMSIZE_8KRESERVED            (0x2UL)                                                                       /*!< Value 0x00000002 */
#define FLASH_CUROPTSTATUS_STRAMSIZE_16KRESERVED           (0x3UL)                                                                       /*!< Value 0x00000003 */

#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTANDBY_OFFSET    (18U)
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTANDBY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, INDWINWATCHDOGSTANDBY))  /*!< Mask  0x00040000 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTANDBY_DISABLED  (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTANDBY_ENABLED   (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTOP_OFFSET       (17U)
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTOP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, INDWINWATCHDOGSTOP))     /*!< Mask  0x00020000 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTOP_DISABLED     (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGSTOP_ENABLED      (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_READOUTPROT_OFFSET              (8U)
#define FLASH_CUROPTSTATUS_READOUTPROT_MASK                (0xFFUL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, READOUTPROT))           /*!< Mask  0x0000FF00 */
#define FLASH_CUROPTSTATUS_READOUTPROT_LEVEL1              (0x88UL)                                                                      /*!< Value 0x00008800 */
#define FLASH_CUROPTSTATUS_READOUTPROT_LEVEL0              (0xAAUL)                                                                      /*!< Value 0x0000AA00 */
#define FLASH_CUROPTSTATUS_READOUTPROT_LEVEL2              (0xCCUL)                                                                      /*!< Value 0x0000CC00 */

#define FLASH_CUROPTSTATUS_D1STANDBYRST_OFFSET             (7U)
#define FLASH_CUROPTSTATUS_D1STANDBYRST_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, D1STANDBYRST))           /*!< Mask  0x00000080 */
#define FLASH_CUROPTSTATUS_D1STANDBYRST_ENABLED            (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_D1STANDBYRST_DISABLED           (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_D1STOPRST_OFFSET                (6U)
#define FLASH_CUROPTSTATUS_D1STOPRST_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, D1STOPRST))              /*!< Mask  0x00000040 */
#define FLASH_CUROPTSTATUS_D1STOPRST_ENABLED               (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_D1STOPRST_DISABLED              (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_INDWINWATCHDOG2CTRL_OFFSET      (5U)
#define FLASH_CUROPTSTATUS_INDWINWATCHDOG2CTRL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, INDWINWATCHDOG2CTRL))    /*!< Mask  0x00000020 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOG2CTRL_HW          (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOG2CTRL_SW          (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_INDWINWATCHDOGCTRL_OFFSET       (4U)
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGCTRL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, INDWINWATCHDOGCTRL))     /*!< Mask  0x00000010 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGCTRL_HW           (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_INDWINWATCHDOGCTRL_SW           (0x1UL)                                                                       /*!< Value 0x00000001 */

#define FLASH_CUROPTSTATUS_SYSRSTBROWLEVEL_OFFSET          (2U)
#define FLASH_CUROPTSTATUS_SYSRSTBROWLEVEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, SYSRSTBROWLEVEL))        /*!< Mask  0x0000000C */
#define FLASH_CUROPTSTATUS_SYSRSTBROWLEVEL_VTH0            (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_SYSRSTBROWLEVEL_VTH1            (0x1UL)                                                                       /*!< Value 0x00000001 */
#define FLASH_CUROPTSTATUS_SYSRSTBROWLEVEL_VTH2            (0x2UL)                                                                       /*!< Value 0x00000002 */
#define FLASH_CUROPTSTATUS_SYSRSTBROWLEVEL_VTH3            (0x3UL)                                                                       /*!< Value 0x00000003 */

#define FLASH_CUROPTSTATUS_OPTBUSY_OFFSET                  (0U)
#define FLASH_CUROPTSTATUS_OPTBUSY_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, CUROPTSTATUS, OPTBUSY))                /*!< Mask  0x00000001 */
#define FLASH_CUROPTSTATUS_OPTBUSY_NOOP                    (0x0UL)                                                                       /*!< Value 0x00000000 */
#define FLASH_CUROPTSTATUS_OPTBUSY_OPONGOING               (0x1UL)                                                                       /*!< Value 0x00000001 */

/*!< Programmatic option status register */
#define FLASH_PROGOPTSTATUS_SWAPBANKS_OFFSET                (31U)
#define FLASH_PROGOPTSTATUS_SWAPBANKS_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, SWAPBANKS))              /*!< Mask  0x80000000 */
#define FLASH_PROGOPTSTATUS_SWAPBANKS_DISABLE               (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_SWAPBANKS_ENABLE                (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_IOSPEEDOPTLOWVLT_OFFSET         (29U)
#define FLASH_PROGOPTSTATUS_IOSPEEDOPTLOWVLT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, IOSPEEDOPTLOWVLT))       /*!< Mask  0x20000000 */
#define FLASH_PROGOPTSTATUS_IOSPEEDOPTLOWVLT_DISABLED       (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_IOSPEEDOPTLOWVLT_ALLOWED        (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_D2STANDBYRST_OFFSET             (25U)
#define FLASH_PROGOPTSTATUS_D2STANDBYRST_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, D2STANDBYRST))           /*!< Mask  0x02000000 */
#define FLASH_PROGOPTSTATUS_D2STANDBYRST_ENABLED            (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_D2STANDBYRST_DISABLED           (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_D2STOPRST_OFFSET                (24U)
#define FLASH_PROGOPTSTATUS_D2STOPRST_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, D2STOPRST))              /*!< Mask  0x01000000 */
#define FLASH_PROGOPTSTATUS_D2STOPRST_ENABLED               (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_D2STOPRST_DISABLED              (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_BOOTM7_OFFSET                   (23U)
#define FLASH_PROGOPTSTATUS_BOOTM7_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, BOOTM7))                 /*!< Mask  0x00800000 */
#define FLASH_PROGOPTSTATUS_BOOTM7_DISABLED                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_BOOTM7_ENABLED                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_BOOTM4_OFFSET                   (22U)
#define FLASH_PROGOPTSTATUS_BOOTM4_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, BOOTM4))                 /*!< Mask  0x00400000 */
#define FLASH_PROGOPTSTATUS_BOOTM4_DISABLED                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_BOOTM4_ENABLED                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_SECOPT_OFFSET                   (21U)
#define FLASH_PROGOPTSTATUS_SECOPT_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, SECOPT))                 /*!< Mask  0x00200000 */
#define FLASH_PROGOPTSTATUS_SECOPT_DISABLED                 (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_SECOPT_ENABLED                  (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_STRAMSIZE_OFFSET                (19U)
#define FLASH_PROGOPTSTATUS_STRAMSIZE_MASK                  (0x3UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, STRAMSIZE))              /*!< Mask  0x00180000 */
#define FLASH_PROGOPTSTATUS_STRAMSIZE_2KRESERVED            (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_STRAMSIZE_4KRESERVED            (0x1UL)                                                                        /*!< Value 0x00000001 */
#define FLASH_PROGOPTSTATUS_STRAMSIZE_8KRESERVED            (0x2UL)                                                                        /*!< Value 0x00000002 */
#define FLASH_PROGOPTSTATUS_STRAMSIZE_16KRESERVED           (0x3UL)                                                                        /*!< Value 0x00000003 */

#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTANDBY_OFFSET    (18U)
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTANDBY_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, INDWINWATCHDOGSTANDBY))  /*!< Mask  0x00040000 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTANDBY_DISABLED  (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTANDBY_ENABLED   (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTOP_OFFSET       (17U)
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTOP_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, INDWINWATCHDOGSTOP))     /*!< Mask  0x00020000 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTOP_DISABLED     (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGSTOP_ENABLED      (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_READOUTPROT_OFFSET              (8U)
#define FLASH_PROGOPTSTATUS_READOUTPROT_MASK                (0xFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, READOUTPROT))           /*!< Mask  0x0000FF00 */
#define FLASH_PROGOPTSTATUS_READOUTPROT_LEVEL1              (0x88UL)                                                                       /*!< Value 0x00008800 */
#define FLASH_PROGOPTSTATUS_READOUTPROT_LEVEL0              (0xAAUL)                                                                       /*!< Value 0x0000AA00 */
#define FLASH_PROGOPTSTATUS_READOUTPROT_LEVEL2              (0xCCUL)                                                                       /*!< Value 0x0000CC00 */

#define FLASH_PROGOPTSTATUS_D1STANDBYRST_OFFSET             (7U)
#define FLASH_PROGOPTSTATUS_D1STANDBYRST_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, D1STANDBYRST))           /*!< Mask  0x00000080 */
#define FLASH_PROGOPTSTATUS_D1STANDBYRST_ENABLED            (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_D1STANDBYRST_DISABLED           (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_D1STOPRST_OFFSET                (6U)
#define FLASH_PROGOPTSTATUS_D1STOPRST_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, D1STOPRST))              /*!< Mask  0x00000040 */
#define FLASH_PROGOPTSTATUS_D1STOPRST_ENABLED               (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_D1STOPRST_DISABLED              (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_INDWINWATCHDOG2CTRL_OFFSET      (5U)
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOG2CTRL_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, INDWINWATCHDOG2CTRL))    /*!< Mask  0x00000020 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOG2CTRL_HW          (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOG2CTRL_SW          (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGCTRL_OFFSET       (4U)
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGCTRL_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, INDWINWATCHDOGCTRL))     /*!< Mask  0x00000010 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGCTRL_HW           (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_INDWINWATCHDOGCTRL_SW           (0x1UL)                                                                        /*!< Value 0x00000001 */

#define FLASH_PROGOPTSTATUS_SYSRSTBROWLEVEL_OFFSET          (2U)
#define FLASH_PROGOPTSTATUS_SYSRSTBROWLEVEL_MASK            (0x3UL << REGISTER_FIELD_OFFSET(FLASH, PROGOPTSTATUS, SYSRSTBROWLEVEL))        /*!< Mask  0x0000000C */
#define FLASH_PROGOPTSTATUS_SYSRSTBROWLEVEL_VTH0            (0x0UL)                                                                        /*!< Value 0x00000000 */
#define FLASH_PROGOPTSTATUS_SYSRSTBROWLEVEL_VTH1            (0x1UL)                                                                        /*!< Value 0x00000001 */
#define FLASH_PROGOPTSTATUS_SYSRSTBROWLEVEL_VTH2            (0x2UL)                                                                        /*!< Value 0x00000002 */
#define FLASH_PROGOPTSTATUS_SYSRSTBROWLEVEL_VTH3            (0x3UL)                                                                        /*!< Value 0x00000003 */

/*!< Option clear control register */
#define FLASH_OPTCLRCTRL_OPTBYTECHANGEINT_OFFSET  (6U)
#define FLASH_OPTCLRCTRL_OPTBYTECHANGEINT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, OPTCLRCTRL, OPTBYTECHANGEINT))  /*!< Mask  0x00000040 */
#define FLASH_OPTCLRCTRL_OPTBYTECHANGEINT_NOCLR   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_OPTCLRCTRL_OPTBYTECHANGEINT_CLR     (0x1UL)                                                                /*!< Value 0x00000001 */

/*!< Bank current protection address register */
#define FLASH_BANKCURPROTADDR_ERASE_OFFSET      (31U)
#define FLASH_BANKCURPROTADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURPROTADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANKCURPROTADDR_ERASE_DISABLED    (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKCURPROTADDR_ERASE_ENABLED     (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKCURPROTADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANKCURPROTADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCURPROTADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */

#define FLASH_BANKCURPROTADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANKCURPROTADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCURPROTADDR, STARTADDR))  /*!< Mask  0x00000FFF */

/*!< Bank programmatic protection address register */
#define FLASH_BANKPROGPROTADDR_ERASE_OFFSET      (31U)
#define FLASH_BANKPROGPROTADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGPROTADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANKPROGPROTADDR_ERASE_DISABLED    (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANKPROGPROTADDR_ERASE_ENABLED     (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANKPROGPROTADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANKPROGPROTADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGPROTADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */

#define FLASH_BANKPROGPROTADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANKPROGPROTADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGPROTADDR, STARTADDR))  /*!< Mask  0x00000FFF */

/*!< Bank current secure address register */
#define FLASH_BANKCURSECADDR_ERASE_OFFSET      (31U)
#define FLASH_BANKCURSECADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURSECADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANKCURSECADDR_ERASE_DISABLED    (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKCURSECADDR_ERASE_ENABLED     (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKCURSECADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANKCURSECADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCURSECADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */

#define FLASH_BANKCURSECADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANKCURSECADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCURSECADDR, STARTADDR))  /*!< Mask  0x00000FFF */

/*!< Bank programmatic secure address register */
#define FLASH_BANKPROGSECADDR_ERASE_OFFSET      (31U)
#define FLASH_BANKPROGSECADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGSECADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANKPROGSECADDR_ERASE_DISABLED    (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANKPROGSECADDR_ERASE_ENABLED     (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANKPROGSECADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANKPROGSECADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGSECADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */

#define FLASH_BANKPROGSECADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANKPROGSECADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGSECADDR, STARTADDR))  /*!< Mask  0x00000FFF */

/*!< Bank current write sector protection register */
#define FLASH_BANKCURWRSECPROT_SEC7PROT_OFFSET    (7U)
#define FLASH_BANKCURWRSECPROT_SEC7PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC7PROT))  /*!< Mask  0x00000080 */
#define FLASH_BANKCURWRSECPROT_SEC7PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC7PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC6PROT_OFFSET    (6U)
#define FLASH_BANKCURWRSECPROT_SEC6PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC6PROT))  /*!< Mask  0x00000040 */
#define FLASH_BANKCURWRSECPROT_SEC6PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC6PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC5PROT_OFFSET    (5U)
#define FLASH_BANKCURWRSECPROT_SEC5PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC5PROT))  /*!< Mask  0x00000020 */
#define FLASH_BANKCURWRSECPROT_SEC5PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC5PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC4PROT_OFFSET    (4U)
#define FLASH_BANKCURWRSECPROT_SEC4PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC4PROT))  /*!< Mask  0x00000010 */
#define FLASH_BANKCURWRSECPROT_SEC4PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC4PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC3PROT_OFFSET    (3U)
#define FLASH_BANKCURWRSECPROT_SEC3PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC3PROT))  /*!< Mask  0x00000008 */
#define FLASH_BANKCURWRSECPROT_SEC3PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC3PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC2PROT_OFFSET    (2U)
#define FLASH_BANKCURWRSECPROT_SEC2PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC2PROT))  /*!< Mask  0x00000004 */
#define FLASH_BANKCURWRSECPROT_SEC2PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC2PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC1PROT_OFFSET    (1U)
#define FLASH_BANKCURWRSECPROT_SEC1PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC1PROT))  /*!< Mask  0x00000002 */
#define FLASH_BANKCURWRSECPROT_SEC1PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC1PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANKCURWRSECPROT_SEC0PROT_OFFSET    (0U)
#define FLASH_BANKCURWRSECPROT_SEC0PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCURWRSECPROT, SEC0PROT))  /*!< Mask  0x00000001 */
#define FLASH_BANKCURWRSECPROT_SEC0PROT_ENABLED   (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANKCURWRSECPROT_SEC0PROT_DISABLED  (0x1UL)                                                              /*!< Value 0x00000001 */

/*!< Bank programmatic write sector protection register */
#define FLASH_BANKPROGWRSECPROT_SEC7PROT_OFFSET    (7U)
#define FLASH_BANKPROGWRSECPROT_SEC7PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC7PROT))  /*!< Mask  0x00000080 */
#define FLASH_BANKPROGWRSECPROT_SEC7PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC7PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC6PROT_OFFSET    (6U)
#define FLASH_BANKPROGWRSECPROT_SEC6PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC6PROT))  /*!< Mask  0x00000040 */
#define FLASH_BANKPROGWRSECPROT_SEC6PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC6PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC5PROT_OFFSET    (5U)
#define FLASH_BANKPROGWRSECPROT_SEC5PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC5PROT))  /*!< Mask  0x00000020 */
#define FLASH_BANKPROGWRSECPROT_SEC5PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC5PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC4PROT_OFFSET    (4U)
#define FLASH_BANKPROGWRSECPROT_SEC4PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC4PROT))  /*!< Mask  0x00000010 */
#define FLASH_BANKPROGWRSECPROT_SEC4PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC4PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC3PROT_OFFSET    (3U)
#define FLASH_BANKPROGWRSECPROT_SEC3PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC3PROT))  /*!< Mask  0x00000008 */
#define FLASH_BANKPROGWRSECPROT_SEC3PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC3PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC2PROT_OFFSET    (2U)
#define FLASH_BANKPROGWRSECPROT_SEC2PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC2PROT))  /*!< Mask  0x00000004 */
#define FLASH_BANKPROGWRSECPROT_SEC2PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC2PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC1PROT_OFFSET    (1U)
#define FLASH_BANKPROGWRSECPROT_SEC1PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC1PROT))  /*!< Mask  0x00000002 */
#define FLASH_BANKPROGWRSECPROT_SEC1PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC1PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANKPROGWRSECPROT_SEC0PROT_OFFSET    (0U)
#define FLASH_BANKPROGWRSECPROT_SEC0PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKPROGWRSECPROT, SEC0PROT))  /*!< Mask  0x00000001 */
#define FLASH_BANKPROGWRSECPROT_SEC0PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANKPROGWRSECPROT_SEC0PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

/*!< Current boot address register for ARM Cortex M7 core */
#define FLASH_CURBOOTADDRM7_ADDR1_OFFSET  (16U)
#define FLASH_CURBOOTADDRM7_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Mask  0xFFFF0000 */

#define FLASH_CURBOOTADDRM7_ADDR0_OFFSET  (0U)
#define FLASH_CURBOOTADDRM7_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Mask  0x0000FFFF */

/*!< Programmatic boot address register for ARM Cortex M7 core */
#define FLASH_PROGBOOTADDRM7_ADDR1_OFFSET  (16U)
#define FLASH_PROGBOOTADDRM7_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Mask  0xFFFF0000 */

#define FLASH_PROGBOOTADDRM7_ADDR0_OFFSET  (0U)
#define FLASH_PROGBOOTADDRM7_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Mask  0x0000FFFF */

/*!< Current boot address register for ARM Cortex M4 core */
#define FLASH_CURBOOTADDRM4_ADDR1_OFFSET  (16U)
#define FLASH_CURBOOTADDRM4_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Mask  0xFFFF0000 */

#define FLASH_CURBOOTADDRM4_ADDR0_OFFSET  (0U)
#define FLASH_CURBOOTADDRM4_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Mask  0x0000FFFF */

/*!< Programmatic boot address register for ARM Cortex M4 core */
#define FLASH_PROGBOOTADDRM4_ADDR1_OFFSET  (16U)
#define FLASH_PROGBOOTADDRM4_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Mask  0xFFFF0000 */

#define FLASH_PROGBOOTADDRM4_ADDR0_OFFSET  (0U)
#define FLASH_PROGBOOTADDRM4_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Mask  0x0000FFFF */

/*!< Bank CRC control register */
#define FLASH_BANKCRCCTRL_ALLSECTORS_OFFSET        (22U)
#define FLASH_BANKCRCCTRL_ALLSECTORS_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, ALLSECTORS))  /*!< Mask  0x00400000 */
#define FLASH_BANKCRCCTRL_ALLSECTORS_DISABLE       (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_ALLSECTORS_ENABLE        (0x1UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_BURSTSIZE_OFFSET         (20U)
#define FLASH_BANKCRCCTRL_BURSTSIZE_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, BURSTSIZE))   /*!< Mask  0x00300000 */
#define FLASH_BANKCRCCTRL_BURSTSIZE_4FLASHWORDS    (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_BURSTSIZE_16FLASHWORDS   (0x1UL)                                                           /*!< Value 0x00000001 */
#define FLASH_BANKCRCCTRL_BURSTSIZE_64FLASHWORDS   (0x2UL)                                                           /*!< Value 0x00000001 */
#define FLASH_BANKCRCCTRL_BURSTSIZE_256FLASHWORDS  (0x3UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_CLRRESULT_OFFSET         (22U)
#define FLASH_BANKCRCCTRL_CLRRESULT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, CLRRESULT))  /*!< Mask  0x00400000 */
#define FLASH_BANKCRCCTRL_CLRRESULT_KEEP           (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_CLRRESULT_CLEAR          (0x1UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_STARTCALC_OFFSET         (22U)
#define FLASH_BANKCRCCTRL_STARTCALC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, STARTCALC))  /*!< Mask  0x00400000 */
#define FLASH_BANKCRCCTRL_STARTCALC_NOTRIGGER      (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_STARTCALC_TRIGGER        (0x1UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_CLEARSECLIST_OFFSET      (22U)
#define FLASH_BANKCRCCTRL_CLEARSECLIST_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, CLEARSECLIST))  /*!< Mask  0x00400000 */
#define FLASH_BANKCRCCTRL_CLEARSECLIST_KEEP        (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_CLEARSECLIST_CLEAR       (0x1UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_ADDSECTOCALC_OFFSET      (22U)
#define FLASH_BANKCRCCTRL_ADDSECTOCALC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, ADDSECTOCALC))  /*!< Mask  0x00400000 */
#define FLASH_BANKCRCCTRL_ADDSECTOCALC_NOADD       (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_ADDSECTOCALC_ADD         (0x1UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_CALCMODE_OFFSET          (22U)
#define FLASH_BANKCRCCTRL_CALCMODE_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, CALCMODE))  /*!< Mask  0x00400000 */
#define FLASH_BANKCRCCTRL_CALCMODE_ALLADDR         (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_CALCMODE_SECTOR          (0x1UL)                                                           /*!< Value 0x00000001 */

#define FLASH_BANKCRCCTRL_SELECTSEC_OFFSET         (0U)
#define FLASH_BANKCRCCTRL_SELECTSEC_MASK           (0x7UL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCCTRL, SELECTSEC))   /*!< Mask  0x00000007 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC0           (0x0UL)                                                           /*!< Value 0x00000000 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC1           (0x1UL)                                                           /*!< Value 0x00000001 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC2           (0x2UL)                                                           /*!< Value 0x00000002 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC3           (0x3UL)                                                           /*!< Value 0x00000003 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC4           (0x4UL)                                                           /*!< Value 0x00000004 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC5           (0x5UL)                                                           /*!< Value 0x00000005 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC6           (0x6UL)                                                           /*!< Value 0x00000006 */
#define FLASH_BANKCRCCTRL_SELECTSEC_SEC7           (0x7UL)                                                           /*!< Value 0x00000007 */

/*!< Bank CRC start address register */
#define FLASH_BANKCRCSTARTADDR_ADDR_OFFSET  (2U)
#define FLASH_BANKCRCSTARTADDR_ADDR_MASK    (0x3FFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCSTARTADDR, ADDR))  /*!< Mask  0x000FFFFC */

/*!< Bank CRC end address register */
#define FLASH_BANKCRCENDADDR_ADDR_OFFSET  (2U)
#define FLASH_BANKCRCENDADDR_ADDR_MASK    (0x3FFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCENDADDR, ADDR))  /*!< Mask  0x000FFFFC */

/*!< Bank CRC data register */
#define FLASH_BANKCRCDATA_RESULT_OFFSET  (0U)
#define FLASH_BANKCRCDATA_RESULT_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKCRCDATA, RESULT))  /*!< Mask  0xFFFFFFFF */

/*!< Bank ECC fail address register */
#define FLASH_BANKERRFAILADDR_ADDR_OFFSET  (0U)
#define FLASH_BANKERRFAILADDR_ADDR_MASK    (0x00007FFFUL << REGISTER_FIELD_OFFSET(FLASH, BANKERRFAILADDR, ADDR))  /*!< Mask  0x00007FFF */

/** @} */ // End of FlashMemory group

/** @} */ // End of RegisterGroup group

#endif // GPIO_REGISTERS_H
