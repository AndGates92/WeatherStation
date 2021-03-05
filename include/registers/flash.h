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
	RW uint32_t BANKPROGCURPROTADDR; /*!< Bank programmatic protection address register             (Offset 0x2C) */
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
#define FLASH_BANKCTRL_CRCRDERRINTEN_OFFSET          (28U)
#define FLASH_BANKCTRL_CRCRDERRINTEN_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, CRCRDERRINTEN))         /*!< Mask  0x10000000 */
#define FLASH_BANKCTRL_CRCRDERRINTEN_DISABLE         (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_CRCRDERRINTEN_ENABLE          (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_CRCEOCINTEN_OFFSET            (27U)
#define FLASH_BANKCTRL_CRCEOCINTEN_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, CRCEOCINTEN))           /*!< Mask  0x08000000 */
#define FLASH_BANKCTRL_CRCEOCINTEN_DISABLE           (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_CRCEOCINTEN_ENABLE            (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_ERRDOUBLEDETERRINTEN_OFFSET   (26U)
#define FLASH_BANKCTRL_ERRDOUBLEDETERRINTEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, ERRDOUBLEDETERRINTEN))  /*!< Mask  0x04000000 */
#define FLASH_BANKCTRL_ERRDOUBLEDETERRINTEN_DISABLE  (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_ERRDOUBLEDETERRINTEN_ENABLE   (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_ERRSGLCORRERRINTEN_OFFSET     (25U)
#define FLASH_BANKCTRL_ERRSGLCORRERRINTEN_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, ERRSGLCORRERRINTEN))    /*!< Mask  0x02000000 */
#define FLASH_BANKCTRL_ERRSGLCORRERRINTEN_DISABLE    (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_ERRSGLCORRERRINTEN_ENABLE     (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_SECRDERRINTEN_OFFSET          (24U)
#define FLASH_BANKCTRL_SECRDERRINTEN_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, SECRDERRINTEN))         /*!< Mask  0x01000000 */
#define FLASH_BANKCTRL_SECRDERRINTEN_DISABLE         (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_SECRDERRINTEN_ENABLE          (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_1RCRDERRINTEN_OFFSET          (23U)
#define FLASH_BANKCTRL_RDPROTERRINTEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, RDPROTERRINTEN))        /*!< Mask  0x00800000 */
#define FLASH_BANKCTRL_RDPROTERRINTEN_DISABLE        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_RDPROTERRINTEN_ENABLE         (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WREROPERRINTEN_OFFSET         (22U)
#define FLASH_BANKCTRL_WREROPERRINTEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WREROPERRINTEN))        /*!< Mask  0x00400000 */
#define FLASH_BANKCTRL_WREROPERRINTEN_DISABLE        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WREROPERRINTEN_ENABLE         (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WRINCOSTENCYERRINTEN_OFFSET   (21U)
#define FLASH_BANKCTRL_WRINCOSTENCYERRINTEN_MASK     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WRINCOSTENCYERRINTEN))  /*!< Mask  0x00200000 */
#define FLASH_BANKCTRL_WRINCOSTENCYERRINTEN_DISABLE  (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WRINCOSTENCYERRINTEN_ENABLE   (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WRSTRBERRINTEN_OFFSET         (19U)
#define FLASH_BANKCTRL_WRSTRBERRINTEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WRSTRBERRINTEN))        /*!< Mask  0x00080000 */
#define FLASH_BANKCTRL_WRSTRBERRINTEN_DISABLE        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WRSTRBERRINTEN_ENABLE         (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_PROGSEQINTEN_OFFSET           (18U)
#define FLASH_BANKCTRL_PROGSEQINTEN_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, PROGSEQINTEN))          /*!< Mask  0x00040000 */
#define FLASH_BANKCTRL_PROGSEQINTEN_DISABLE          (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_PROGSEQINTEN_ENABLE           (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_WRPROTERRINTEN_OFFSET         (17U)
#define FLASH_BANKCTRL_WRPROTERRINTEN_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, WRPROTERRINTEN))        /*!< Mask  0x00020000 */
#define FLASH_BANKCTRL_WRPROTERRINTEN_DISABLE        (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_WRPROTERRINTEN_ENABLE         (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_EOPINTEN_OFFSET               (16U)
#define FLASH_BANKCTRL_EOPINTEN_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, EOPINTEN))              /*!< Mask  0x00010000 */
#define FLASH_BANKCTRL_EOPINTEN_DISABLE              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_EOPINTEN_ENABLE               (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_CRCEN_OFFSET                  (15U)
#define FLASH_BANKCTRL_CRCEN_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, CRCEN))                 /*!< Mask  0x00008000 */
#define FLASH_BANKCTRL_CRCEN_DISABLE                 (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_CRCEN_ENABLE                  (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_SECERASESEL_OFFSET            (8U)
#define FLASH_BANKCTRL_SECERASESEL_MASK              (0x7UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, SECERASESEL))           /*!< Mask  0x00000700 */
#define FLASH_BANKCTRL_SECERASESEL_SEC0              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x1UL)                                                                  /*!< Value 0x00000001 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x2UL)                                                                  /*!< Value 0x00000002 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x3UL)                                                                  /*!< Value 0x00000003 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x4UL)                                                                  /*!< Value 0x00000004 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x5UL)                                                                  /*!< Value 0x00000005 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x6UL)                                                                  /*!< Value 0x00000006 */
#define FLASH_BANKCTRL_SECERASESEL_SEC1              (0x7UL)                                                                  /*!< Value 0x00000007 */

#define FLASH_BANKCTRL_START_OFFSET                  (7U)
#define FLASH_BANKCTRL_START_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, START))                 /*!< Mask  0x00000080 */
#define FLASH_BANKCTRL_START_DISABLE                 (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_START_ENABLE                  (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_FORCEWR_OFFSET                (6U)
#define FLASH_BANKCTRL_FORCEWR_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, FORCEWR))               /*!< Mask  0x00000040 */
#define FLASH_BANKCTRL_FORCEWR_DISABLE               (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_FORCEWR_ENABLE                (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_PROGSIZE_OFFSET               (4U)
#define FLASH_BANKCTRL_PROGSIZE_MASK                 (0x3UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, PROGSIZE))              /*!< Mask  0x00000030 */
#define FLASH_BANKCTRL_PROGSIZE_BYTEPAR              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_PROGSIZE_HALFWORDPAR          (0x1UL)                                                                  /*!< Value 0x00000001 */
#define FLASH_BANKCTRL_PROGSIZE_WORDPAR              (0x2UL)                                                                  /*!< Value 0x00000002 */
#define FLASH_BANKCTRL_PROGSIZE_DOUBLEWORDPAR        (0x3UL)                                                                  /*!< Value 0x00000003 */

#define FLASH_BANKCTRL_ERASEREQ_OFFSET               (3U)
#define FLASH_BANKCTRL_ERASEREQ_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, ERASEREQ))              /*!< Mask  0x00000008 */
#define FLASH_BANKCTRL_ERASEREQ_DISABLE              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_ERASEREQ_ENABLE               (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_SECERASEREQ_OFFSET            (2U)
#define FLASH_BANKCTRL_SECERASEREQ_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, SECERASEREQ))           /*!< Mask  0x00000004 */
#define FLASH_BANKCTRL_SECERASEREQ_DISABLE           (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_SECERASEREQ_ENABLE            (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_INTBUFEN_OFFSET               (1U)
#define FLASH_BANKCTRL_INTBUFEN_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, INTBUFEN))              /*!< Mask  0x00000002 */
#define FLASH_BANKCTRL_INTBUFEN_DISABLE              (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_INTBUFEN_ENABLE               (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANKCTRL_LOCK_OFFSET                   (0U)
#define FLASH_BANKCTRL_LOCK_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANKCTRL, LOCK))                  /*!< Mask  0x00000001 */
#define FLASH_BANKCTRL_LOCK_DISABLE                  (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANKCTRL_LOCK_ENABLE                   (0x1UL)                                                                  /*!< Value 0x00000001 */

/*!< Bank status register register */
/*!< Clear control register for bank */
/*!< Option control register */
/*!< Current option status register */
/*!< Programmatic option status register */
/*!< Option clear control register */
/*!< Bank current protection address register */
/*!< Bank programmatic protection address register */
/*!< Bank current secure address register */
/*!< Bank programmatic secure address register */
/*!< Bank current write sector protection register */
/*!< Bank programmatic write sector protection register */
/*!< Current boot address register for ARM Cortex M7 core */
/*!< Programmatic boot address register for ARM Cortex M7 core */
/*!< Current boot address register for ARM Cortex M4 core */
/*!< Programmatic boot address register for ARM Cortex M4 core */
/*!< Bank CRC control register */
/*!< Bank CRC start address register */
/*!< Bank CRC end address register */
/*!< Bank CRC data register */
/*!< Bank ECC fail address register */

/** @} */ // End of FlashMemory group

/** @} */ // End of RegisterGroup group

#endif // GPIO_REGISTERS_H
