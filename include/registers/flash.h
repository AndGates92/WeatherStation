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
	WO uint32_t BANK1KEY;            /*!< Bank 1 key register register                              (Offset 0x4)  */
	WO uint32_t OPTKEY;              /*!< Option key register                                       (Offset 0x8)  */
	RW uint32_t BANK1CTRL;           /*!< Bank 1 control register register                          (Offset 0xC)  */
	RO uint32_t BANK1STATUS;         /*!< Bank 1 status register register                           (Offset 0x10) */
	WO uint32_t BANK1CLRCTRL;        /*!< Clear control register for bank                           (Offset 0x14) */
	RW uint32_t OPTCTRL;             /*!< Option control register                                   (Offset 0x18) */
	RO uint32_t CUROPTSTATUS;        /*!< Current option status register                            (Offset 0x1C) */
	RW uint32_t PROGOPTSTATUS;       /*!< Programmatic option status register                       (Offset 0x20) */
	RW uint32_t OPTCLRCTRL;          /*!< Option clear control register                             (Offset 0x24) */
	RO uint32_t BANK1CURPROTADDR;    /*!< Bank 1 current protection address register                (Offset 0x28) */
	RW uint32_t BANK1PROGPROTADDR;   /*!< Bank 1 programmatic protection address register           (Offset 0x2C) */
	RO uint32_t BANK1CURSECADDR;     /*!< Bank 1 current secure address register                    (Offset 0x30) */
	RW uint32_t BANK1PROGSECADDR;    /*!< Bank 1 programmatic secure address register               (Offset 0x34) */
	RO uint32_t BANK1CURWRSECPROT;   /*!< Bank 1 current write sector protection register           (Offset 0x38) */
	RW uint32_t BANK1PROGWRSECPROT;  /*!< Bank 1 programmatic write sector protection register      (Offset 0x3C) */
	RO uint32_t CURBOOTADDRM7;       /*!< Current boot address register for ARM Cortex M7 core      (Offset 0x40) */
	RW uint32_t PROGBOOTADDRM7;      /*!< Programmatic boot address register for ARM Cortex M7 core (Offset 0x44) */
	RO uint32_t CURBOOTADDRM4;       /*!< Current boot address register for ARM Cortex M4 core      (Offset 0x48) */
	RW uint32_t PROGBOOTADDRM4;      /*!< Programmatic boot address register for ARM Cortex M4 core (Offset 0x4C) */
	RW uint32_t BANK1CRCCTRL;        /*!< Bank 1 CRC control register                               (Offset 0x50) */
	RW uint32_t BANK1CRCSTARTADDR;   /*!< Bank 1 CRC start address register                         (Offset 0x54) */
	RW uint32_t BANK1CRCENDADDR;     /*!< Bank 1 CRC end address register                           (Offset 0x58) */
	RO uint32_t BANK1CRCDATA;        /*!< Bank 1 CRC data register                                  (Offset 0x5C) */
	RO uint32_t BANK1ERRFAILADDR;    /*!< Bank 1 ECC fail address register                          (Offset 0x60) */
} flash_bank1_regs;

typedef struct {
	RW uint32_t ACCESSCTRL;          /*!< Access control register                                   (Offset 0x0)  */
	WO uint32_t BANK2KEY;            /*!< Bank 2 key register register                              (Offset 0x4)  */
	WO uint32_t OPTKEY;              /*!< Option key register                                       (Offset 0x8)  */
	RW uint32_t BANK2CTRL;           /*!< Bank 2 control register register                          (Offset 0xC)  */
	RO uint32_t BANK2STATUS;         /*!< Bank 2 status register register                           (Offset 0x10) */
	WO uint32_t BANK2CLRCTRL;        /*!< Clear control register for bank                           (Offset 0x14) */
	RW uint32_t OPTCTRL;             /*!< Option control register                                   (Offset 0x18) */
	RO uint32_t CUROPTSTATUS;        /*!< Current option status register                            (Offset 0x1C) */
	RW uint32_t PROGOPTSTATUS;       /*!< Programmatic option status register                       (Offset 0x20) */
	RW uint32_t OPTCLRCTRL;          /*!< Option clear control register                             (Offset 0x24) */
	RO uint32_t BANK2CURPROTADDR;    /*!< Bank 2 current protection address register                (Offset 0x28) */
	RW uint32_t BANK2PROGPROTADDR;   /*!< Bank 2 programmatic protection address register           (Offset 0x2C) */
	RO uint32_t BANK2CURSECADDR;     /*!< Bank 2 current secure address register                    (Offset 0x30) */
	RW uint32_t BANK2PROGSECADDR;    /*!< Bank 2 programmatic secure address register               (Offset 0x34) */
	RO uint32_t BANK2CURWRSECPROT;   /*!< Bank 2 current write sector protection register           (Offset 0x38) */
	RW uint32_t BANK2PROGWRSECPROT;  /*!< Bank 2 programmatic write sector protection register      (Offset 0x3C) */
	RO uint32_t CURBOOTADDRM7;       /*!< Current boot address register for ARM Cortex M7 core      (Offset 0x40) */
	RW uint32_t PROGBOOTADDRM7;      /*!< Programmatic boot address register for ARM Cortex M7 core (Offset 0x44) */
	RO uint32_t CURBOOTADDRM4;       /*!< Current boot address register for ARM Cortex M4 core      (Offset 0x48) */
	RW uint32_t PROGBOOTADDRM4;      /*!< Programmatic boot address register for ARM Cortex M4 core (Offset 0x4C) */
	RW uint32_t BANK2CRCCTRL;        /*!< Bank 2 CRC control register                               (Offset 0x50) */
	RW uint32_t BANK2CRCSTARTADDR;   /*!< Bank 2 CRC start address register                         (Offset 0x54) */
	RW uint32_t BANK2CRCENDADDR;     /*!< Bank 2 CRC end address register                           (Offset 0x58) */
	RO uint32_t BANK2CRCDATA;        /*!< Bank 2 CRC data register                                  (Offset 0x5C) */
	RO uint32_t BANK2ERRFAILADDR;    /*!< Bank 2 ECC fail address register                          (Offset 0x60) */
} flash_bank2_regs;

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
#define FLASH_BANK1KEY_ACCESSKEY_OFFSET  (0U)
#define FLASH_BANK1KEY_ACCESSKEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Mask  0xFFFFFFFF */
#define FLASH_BANK1KEY_ACCESSKEY_KEY1    (0x45670123UL)                                                       /*!< Value 0x45670123 */
#define FLASH_BANK1KEY_ACCESSKEY_KEY2    (0xCDEF89ABUL)                                                       /*!< Value 0xCDEF89AB */
#define FLASH_BANK1KEY_ACCESSKEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000001 */
#define FLASH_BANK1KEY_ACCESSKEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000002 */
#define FLASH_BANK1KEY_ACCESSKEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000004 */
#define FLASH_BANK1KEY_ACCESSKEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000008 */
#define FLASH_BANK1KEY_ACCESSKEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000010 */
#define FLASH_BANK1KEY_ACCESSKEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000020 */
#define FLASH_BANK1KEY_ACCESSKEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000040 */
#define FLASH_BANK1KEY_ACCESSKEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000080 */
#define FLASH_BANK1KEY_ACCESSKEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000100 */
#define FLASH_BANK1KEY_ACCESSKEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000200 */
#define FLASH_BANK1KEY_ACCESSKEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000400 */
#define FLASH_BANK1KEY_ACCESSKEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00000800 */
#define FLASH_BANK1KEY_ACCESSKEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00001000 */
#define FLASH_BANK1KEY_ACCESSKEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00002000 */
#define FLASH_BANK1KEY_ACCESSKEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00004000 */
#define FLASH_BANK1KEY_ACCESSKEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00008000 */
#define FLASH_BANK1KEY_ACCESSKEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00010000 */
#define FLASH_BANK1KEY_ACCESSKEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00020000 */
#define FLASH_BANK1KEY_ACCESSKEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00040000 */
#define FLASH_BANK1KEY_ACCESSKEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00080000 */
#define FLASH_BANK1KEY_ACCESSKEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00100000 */
#define FLASH_BANK1KEY_ACCESSKEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00200000 */
#define FLASH_BANK1KEY_ACCESSKEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00400000 */
#define FLASH_BANK1KEY_ACCESSKEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x00800000 */
#define FLASH_BANK1KEY_ACCESSKEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x01000000 */
#define FLASH_BANK1KEY_ACCESSKEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x02000000 */
#define FLASH_BANK1KEY_ACCESSKEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x04000000 */
#define FLASH_BANK1KEY_ACCESSKEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x08000000 */
#define FLASH_BANK1KEY_ACCESSKEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x10000000 */
#define FLASH_BANK1KEY_ACCESSKEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x20000000 */
#define FLASH_BANK1KEY_ACCESSKEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x40000000 */
#define FLASH_BANK1KEY_ACCESSKEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1KEY, ACCESSKEY))  /*!< Value 0x80000000 */

/*!< Option key register  */
#define FLASH_OPTKEY_ACCESSKEY_OFFSET  (0U)
#define FLASH_OPTKEY_ACCESSKEY_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Mask  0xFFFFFFFF */
#define FLASH_OPTKEY_ACCESSKEY_KEY1    (0x08192A3BUL)                                                     /*!< Value 0x08192A3B */
#define FLASH_OPTKEY_ACCESSKEY_KEY2    (0x4C5D6E7FUL)                                                     /*!< Value 0x4C5D6E7F */
#define FLASH_OPTKEY_ACCESSKEY_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000001 */
#define FLASH_OPTKEY_ACCESSKEY_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000002 */
#define FLASH_OPTKEY_ACCESSKEY_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000004 */
#define FLASH_OPTKEY_ACCESSKEY_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000008 */
#define FLASH_OPTKEY_ACCESSKEY_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000010 */
#define FLASH_OPTKEY_ACCESSKEY_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000020 */
#define FLASH_OPTKEY_ACCESSKEY_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000040 */
#define FLASH_OPTKEY_ACCESSKEY_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000080 */
#define FLASH_OPTKEY_ACCESSKEY_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000100 */
#define FLASH_OPTKEY_ACCESSKEY_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000200 */
#define FLASH_OPTKEY_ACCESSKEY_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000400 */
#define FLASH_OPTKEY_ACCESSKEY_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00000800 */
#define FLASH_OPTKEY_ACCESSKEY_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00001000 */
#define FLASH_OPTKEY_ACCESSKEY_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00002000 */
#define FLASH_OPTKEY_ACCESSKEY_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00004000 */
#define FLASH_OPTKEY_ACCESSKEY_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00008000 */
#define FLASH_OPTKEY_ACCESSKEY_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00010000 */
#define FLASH_OPTKEY_ACCESSKEY_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00020000 */
#define FLASH_OPTKEY_ACCESSKEY_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00040000 */
#define FLASH_OPTKEY_ACCESSKEY_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00080000 */
#define FLASH_OPTKEY_ACCESSKEY_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00100000 */
#define FLASH_OPTKEY_ACCESSKEY_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00200000 */
#define FLASH_OPTKEY_ACCESSKEY_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00400000 */
#define FLASH_OPTKEY_ACCESSKEY_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x00800000 */
#define FLASH_OPTKEY_ACCESSKEY_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x01000000 */
#define FLASH_OPTKEY_ACCESSKEY_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x02000000 */
#define FLASH_OPTKEY_ACCESSKEY_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x04000000 */
#define FLASH_OPTKEY_ACCESSKEY_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x08000000 */
#define FLASH_OPTKEY_ACCESSKEY_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x10000000 */
#define FLASH_OPTKEY_ACCESSKEY_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x20000000 */
#define FLASH_OPTKEY_ACCESSKEY_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x40000000 */
#define FLASH_OPTKEY_ACCESSKEY_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FLASH, OPTKEY, ACCESSKEY))  /*!< Value 0x80000000 */

/*!< Bank control register register  */
#define FLASH_BANK1CTRL_CRCRDERRINT_OFFSET            (28U)
#define FLASH_BANK1CTRL_CRCRDERRINT_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, CRCRDERRINT))         /*!< Mask  0x10000000 */
#define FLASH_BANK1CTRL_CRCRDERRINT_DISABLE           (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_CRCRDERRINT_ENABLE            (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_CRCEOCINT_OFFSET              (27U)
#define FLASH_BANK1CTRL_CRCEOCINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, CRCEOCINT))           /*!< Mask  0x08000000 */
#define FLASH_BANK1CTRL_CRCEOCINT_DISABLE             (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_CRCEOCINT_ENABLE              (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_ERRDOUBLEDETERRINT_OFFSET     (26U)
#define FLASH_BANK1CTRL_ERRDOUBLEDETERRINT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, ERRDOUBLEDETERRINT))  /*!< Mask  0x04000000 */
#define FLASH_BANK1CTRL_ERRDOUBLEDETERRINT_DISABLE    (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_ERRDOUBLEDETERRINT_ENABLE     (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_ERRSGLCORRERRINT_OFFSET       (25U)
#define FLASH_BANK1CTRL_ERRSGLCORRERRINT_MASK         (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, ERRSGLCORRERRINT))    /*!< Mask  0x02000000 */
#define FLASH_BANK1CTRL_ERRSGLCORRERRINT_DISABLE      (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_ERRSGLCORRERRINT_ENABLE       (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_SECRDERRINT_OFFSET            (24U)
#define FLASH_BANK1CTRL_SECRDERRINT_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, SECRDERRINT))         /*!< Mask  0x01000000 */
#define FLASH_BANK1CTRL_SECRDERRINT_DISABLE           (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_SECRDERRINT_ENABLE            (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_1RCRDERRINT_OFFSET            (23U)
#define FLASH_BANK1CTRL_RDPROTERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, RDPROTERRINT))        /*!< Mask  0x00800000 */
#define FLASH_BANK1CTRL_RDPROTERRINT_DISABLE          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_RDPROTERRINT_ENABLE           (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_WREROPERRINT_OFFSET           (22U)
#define FLASH_BANK1CTRL_WREROPERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, WREROPERRINT))        /*!< Mask  0x00400000 */
#define FLASH_BANK1CTRL_WREROPERRINT_DISABLE          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_WREROPERRINT_ENABLE           (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_WRINCOSTENCYERRINT_OFFSET     (21U)
#define FLASH_BANK1CTRL_WRINCOSTENCYERRINT_MASK       (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, WRINCOSTENCYERRINT))  /*!< Mask  0x00200000 */
#define FLASH_BANK1CTRL_WRINCOSTENCYERRINT_DISABLE    (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_WRINCOSTENCYERRINT_ENABLE     (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_WRSTRBERRINT_OFFSET           (19U)
#define FLASH_BANK1CTRL_WRSTRBERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, WRSTRBERRINT))        /*!< Mask  0x00080000 */
#define FLASH_BANK1CTRL_WRSTRBERRINT_DISABLE          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_WRSTRBERRINT_ENABLE           (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_PROGSEQINT_OFFSET             (18U)
#define FLASH_BANK1CTRL_PROGSEQINT_MASK               (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, PROGSEQINT))          /*!< Mask  0x00040000 */
#define FLASH_BANK1CTRL_PROGSEQINT_DISABLE            (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_PROGSEQINT_ENABLE             (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_WRPROTERRINT_OFFSET           (17U)
#define FLASH_BANK1CTRL_WRPROTERRINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, WRPROTERRINT))        /*!< Mask  0x00020000 */
#define FLASH_BANK1CTRL_WRPROTERRINT_DISABLE          (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_WRPROTERRINT_ENABLE           (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_EOPINT_OFFSET                 (16U)
#define FLASH_BANK1CTRL_EOPINT_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, EOPINT))              /*!< Mask  0x00010000 */
#define FLASH_BANK1CTRL_EOPINT_DISABLE                (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_EOPINT_ENABLE                 (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_CRCEN_OFFSET                  (15U)
#define FLASH_BANK1CTRL_CRCEN_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, CRCEN))               /*!< Mask  0x00008000 */
#define FLASH_BANK1CTRL_CRCEN_DISABLE                 (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_CRCEN_ENABLE                  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_SECERASESEL_OFFSET            (8U)
#define FLASH_BANK1CTRL_SECERASESEL_MASK              (0x7UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, SECERASESEL))         /*!< Mask  0x00000700 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC0              (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC1              (0x1UL)                                                                 /*!< Value 0x00000001 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC2              (0x2UL)                                                                 /*!< Value 0x00000002 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC3              (0x3UL)                                                                 /*!< Value 0x00000003 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC4              (0x4UL)                                                                 /*!< Value 0x00000004 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC5              (0x5UL)                                                                 /*!< Value 0x00000005 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC6              (0x6UL)                                                                 /*!< Value 0x00000006 */
#define FLASH_BANK1CTRL_SECERASESEL_SEC7              (0x7UL)                                                                 /*!< Value 0x00000007 */

#define FLASH_BANK1CTRL_START_OFFSET                  (7U)
#define FLASH_BANK1CTRL_START_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, START))               /*!< Mask  0x00000080 */
#define FLASH_BANK1CTRL_START_DISABLE                 (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_START_ENABLE                  (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_FORCEWR_OFFSET                (6U)
#define FLASH_BANK1CTRL_FORCEWR_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, FORCEWR))             /*!< Mask  0x00000040 */
#define FLASH_BANK1CTRL_FORCEWR_DISABLE               (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_FORCEWR_ENABLE                (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_PROGSIZE_OFFSET               (4U)
#define FLASH_BANK1CTRL_PROGSIZE_MASK                 (0x3UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, PROGSIZE))            /*!< Mask  0x00000030 */
#define FLASH_BANK1CTRL_PROGSIZE_BYTEPAR              (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_PROGSIZE_HALFWORDPAR          (0x1UL)                                                                 /*!< Value 0x00000001 */
#define FLASH_BANK1CTRL_PROGSIZE_WORDPAR              (0x2UL)                                                                 /*!< Value 0x00000002 */
#define FLASH_BANK1CTRL_PROGSIZE_DOUBLEWORDPAR        (0x3UL)                                                                 /*!< Value 0x00000003 */

#define FLASH_BANK1CTRL_ERASEREQ_OFFSET               (3U)
#define FLASH_BANK1CTRL_ERASEREQ_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, ERASEREQ))            /*!< Mask  0x00000008 */
#define FLASH_BANK1CTRL_ERASEREQ_DISABLE              (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_ERASEREQ_ENABLE               (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_SECERASEREQ_OFFSET            (2U)
#define FLASH_BANK1CTRL_SECERASEREQ_MASK              (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, SECERASEREQ))         /*!< Mask  0x00000004 */
#define FLASH_BANK1CTRL_SECERASEREQ_DISABLE           (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_SECERASEREQ_ENABLE            (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_INTBUFEN_OFFSET               (1U)
#define FLASH_BANK1CTRL_INTBUFEN_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, INTBUFEN))            /*!< Mask  0x00000002 */
#define FLASH_BANK1CTRL_INTBUFEN_DISABLE              (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_INTBUFEN_ENABLE               (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CTRL_LOCK_OFFSET                   (0U)
#define FLASH_BANK1CTRL_LOCK_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CTRL, LOCK))                /*!< Mask  0x00000001 */
#define FLASH_BANK1CTRL_LOCK_DISABLE                  (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CTRL_LOCK_ENABLE                   (0x1UL)                                                                 /*!< Value 0x00000001 */

/*!< Bank status register register */
#define FLASH_BANK1STATUS_CRCRDERRINT_OFFSET               (28U)
#define FLASH_BANK1STATUS_CRCRDERRINT_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, CRCRDERRINT))         /*!< Mask  0x10000000 */
#define FLASH_BANK1STATUS_CRCRDERRINT_NOTTRIGGERED         (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_CRCRDERRINT_TRIGGERED            (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_CRCEOCINT_OFFSET                 (27U)
#define FLASH_BANK1STATUS_CRCEOCINT_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, CRCEOCINT))           /*!< Mask  0x08000000 */
#define FLASH_BANK1STATUS_CRCEOCINT_NOTTRIGGERED           (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_CRCEOCINT_TRIGGERED              (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_ERRDOUBLEDETERRINT_OFFSET        (26U)
#define FLASH_BANK1STATUS_ERRDOUBLEDETERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, ERRDOUBLEDETERRINT))  /*!< Mask  0x04000000 */
#define FLASH_BANK1STATUS_ERRDOUBLEDETERRINT_NOTTRIGGERED  (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_ERRDOUBLEDETERRINT_TRIGGERED     (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_ERRSGLCORRERRINT_OFFSET          (25U)
#define FLASH_BANK1STATUS_ERRSGLCORRERRINT_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, ERRSGLCORRERRINT))    /*!< Mask  0x02000000 */
#define FLASH_BANK1STATUS_ERRSGLCORRERRINT_NOTTRIGGERED    (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_ERRSGLCORRERRINT_TRIGGERED       (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_SECRDERRINT_OFFSET               (24U)
#define FLASH_BANK1STATUS_SECRDERRINT_MASK                 (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, SECRDERRINT))         /*!< Mask  0x01000000 */
#define FLASH_BANK1STATUS_SECRDERRINT_NOTTRIGGERED         (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_SECRDERRINT_TRIGGERED            (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_1RCRDERRINT_OFFSET               (23U)
#define FLASH_BANK1STATUS_RDPROTERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, RDPROTERRINT))        /*!< Mask  0x00800000 */
#define FLASH_BANK1STATUS_RDPROTERRINT_NOTTRIGGERED        (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_RDPROTERRINT_TRIGGERED           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_WREROPERRINT_OFFSET              (22U)
#define FLASH_BANK1STATUS_WREROPERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, WREROPERRINT))        /*!< Mask  0x00400000 */
#define FLASH_BANK1STATUS_WREROPERRINT_NOTTRIGGERED        (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_WREROPERRINT_TRIGGERED           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_WRINCOSTENCYERRINT_OFFSET        (21U)
#define FLASH_BANK1STATUS_WRINCOSTENCYERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, WRINCOSTENCYERRINT))  /*!< Mask  0x00200000 */
#define FLASH_BANK1STATUS_WRINCOSTENCYERRINT_NOTTRIGGERED  (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_WRINCOSTENCYERRINT_TRIGGERED     (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_WRSTRBERRINT_OFFSET              (19U)
#define FLASH_BANK1STATUS_WRSTRBERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, WRSTRBERRINT))        /*!< Mask  0x00080000 */
#define FLASH_BANK1STATUS_WRSTRBERRINT_NOTTRIGGERED        (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_WRSTRBERRINT_TRIGGERED           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_PROGSEQINT_OFFSET                (18U)
#define FLASH_BANK1STATUS_PROGSEQINT_MASK                  (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, PROGSEQINT))          /*!< Mask  0x00040000 */
#define FLASH_BANK1STATUS_PROGSEQINT_NOTTRIGGERED          (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_PROGSEQINT_TRIGGERED             (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_WRPROTERRINT_OFFSET              (17U)
#define FLASH_BANK1STATUS_WRPROTERRINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, WRPROTERRINT))        /*!< Mask  0x00020000 */
#define FLASH_BANK1STATUS_WRPROTERRINT_NOTTRIGGERED        (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_WRPROTERRINT_TRIGGERED           (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_EOPINT_OFFSET                    (16U)
#define FLASH_BANK1STATUS_EOPINT_MASK                      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, EOPINT))              /*!< Mask  0x00010000 */
#define FLASH_BANK1STATUS_EOPINT_NOTTRIGGERED              (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_EOPINT_TRIGGERED                 (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_CRCBUSY_OFFSET                   (3U)
#define FLASH_BANK1STATUS_CRCBUSY_MASK                     (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, CRCBUSYFLAG))         /*!< Mask  0x00000008 */
#define FLASH_BANK1STATUS_CRCBUSY_NOCALCRUNNING            (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_CRCBUSY_CALCRUNNINGG             (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_WAITQUEUEFLAG_OFFSET             (2U)
#define FLASH_BANK1STATUS_WAITQUEUE_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, WAITQUEUEFLAG))       /*!< Mask  0x00000004 */
#define FLASH_BANK1STATUS_WAITQUEUE_EMPTY                  (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_WAITQUEUE_OPPENDING              (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_WRITEBUF_OFFSET                  (1U)
#define FLASH_BANK1STATUS_WRITEBUF_MASK                    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, WRITEBUF))            /*!< Mask  0x00000002 */
#define FLASH_BANK1STATUS_WRITEBUF_EMPTY                   (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_WRITEBUF_WAITINGDATA             (0x1UL)                                                                   /*!< Value 0x00000001 */

#define FLASH_BANK1STATUS_BUSYFLAGS_OFFSET                 (0U)
#define FLASH_BANK1STATUS_BUSYFLAGS_MASK                   (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1STATUS, BUSYFLAGS))           /*!< Mask  0x00000001 */
#define FLASH_BANK1STATUS_BUSYFLAGS_NOOP                   (0x0UL)                                                                   /*!< Value 0x00000000 */
#define FLASH_BANK1STATUS_BUSYFLAGS_OPONGOING              (0x1UL)                                                                   /*!< Value 0x00000001 */

/*!< Clear control register for bank */
#define FLASH_BANK1CLRCTRL_CRCRDERRINT_OFFSET         (28U)
#define FLASH_BANK1CLRCTRL_CRCRDERRINT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, CRCRDERRINT))         /*!< Mask  0x10000000 */
#define FLASH_BANK1CLRCTRL_CRCRDERRINT_NOCLR          (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_CRCRDERRINT_CLR            (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_CRCEOCINT_OFFSET           (27U)
#define FLASH_BANK1CLRCTRL_CRCEOCINT_MASK             (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, CRCEOCINT))           /*!< Mask  0x08000000 */
#define FLASH_BANK1CLRCTRL_CRCEOCINT_NOCLR            (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_CRCEOCINT_CLR              (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_ERRDOUBLEDETERRINT_OFFSET  (26U)
#define FLASH_BANK1CLRCTRL_ERRDOUBLEDETERRINT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, ERRDOUBLEDETERRINT))  /*!< Mask  0x04000000 */
#define FLASH_BANK1CLRCTRL_ERRDOUBLEDETERRINT_NOCLR   (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_ERRDOUBLEDETERRINT_CLR     (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_ERRSGLCORRERRINT_OFFSET    (25U)
#define FLASH_BANK1CLRCTRL_ERRSGLCORRERRINT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, ERRSGLCORRERRINT))    /*!< Mask  0x02000000 */
#define FLASH_BANK1CLRCTRL_ERRSGLCORRERRINT_NOCLR     (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_ERRSGLCORRERRINT_CLR       (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_SECRDERRINT_OFFSET         (24U)
#define FLASH_BANK1CLRCTRL_SECRDERRINT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, SECRDERRINT))         /*!< Mask  0x01000000 */
#define FLASH_BANK1CLRCTRL_SECRDERRINT_NOCLR          (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_SECRDERRINT_CLR            (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_1RCRDERRINT_OFFSET         (23U)
#define FLASH_BANK1CLRCTRL_RDPROTERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, RDPROTERRINT))        /*!< Mask  0x00800000 */
#define FLASH_BANK1CLRCTRL_RDPROTERRINT_NOCLR         (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_RDPROTERRINT_CLR           (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_WREROPERRINT_OFFSET        (22U)
#define FLASH_BANK1CLRCTRL_WREROPERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, WREROPERRINT))        /*!< Mask  0x00400000 */
#define FLASH_BANK1CLRCTRL_WREROPERRINT_NOCLR         (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_WREROPERRINT_CLR           (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_WRINCOSTENCYERRINT_OFFSET  (21U)
#define FLASH_BANK1CLRCTRL_WRINCOSTENCYERRINT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, WRINCOSTENCYERRINT))  /*!< Mask  0x00200000 */
#define FLASH_BANK1CLRCTRL_WRINCOSTENCYERRINT_NOCLR   (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_WRINCOSTENCYERRINT_CLR     (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_WRSTRBERRINT_OFFSET        (19U)
#define FLASH_BANK1CLRCTRL_WRSTRBERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, WRSTRBERRINT))        /*!< Mask  0x00080000 */
#define FLASH_BANK1CLRCTRL_WRSTRBERRINT_NOCLR         (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_WRSTRBERRINT_CLR           (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_PROGSEQINT_OFFSET          (18U)
#define FLASH_BANK1CLRCTRL_PROGSEQINT_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, PROGSEQINT))          /*!< Mask  0x00040000 */
#define FLASH_BANK1CLRCTRL_PROGSEQINT_NOCLR           (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_PROGSEQINT_CLR             (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_WRPROTERRINT_OFFSET        (17U)
#define FLASH_BANK1CLRCTRL_WRPROTERRINT_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, WRPROTERRINT))        /*!< Mask  0x00020000 */
#define FLASH_BANK1CLRCTRL_WRPROTERRINT_NOCLR         (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_WRPROTERRINT_CLR           (0x1UL)                                                                    /*!< Value 0x00000001 */

#define FLASH_BANK1CLRCTRL_EOPINT_OFFSET              (16U)
#define FLASH_BANK1CLRCTRL_EOPINT_MASK                (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CLRCTRL, EOPINT))              /*!< Mask  0x00010000 */
#define FLASH_BANK1CLRCTRL_EOPINT_NOCLR               (0x0UL)                                                                    /*!< Value 0x00000000 */
#define FLASH_BANK1CLRCTRL_EOPINT_CLR                 (0x1UL)                                                                    /*!< Value 0x00000001 */

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
#define FLASH_BANK1CURPROTADDR_ERASE_OFFSET      (31U)
#define FLASH_BANK1CURPROTADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANK1CURPROTADDR_ERASE_DISABLED    (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1CURPROTADDR_ERASE_ENABLED     (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1CURPROTADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANK1CURPROTADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00010000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00020000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00040000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00080000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00100000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00200000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00400000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x00800000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x01000000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x02000000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x04000000 */
#define FLASH_BANK1CURPROTADDR_ENDADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, ENDADDR))    /*!< Value 0x08000000 */

#define FLASH_BANK1CURPROTADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANK1CURPROTADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Mask  0x00000FFF */
#define FLASH_BANK1CURPROTADDR_STARTADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000001 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000002 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1CURPROTADDR_STARTADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURPROTADDR, STARTADDR))  /*!< Value 0x00000800 */

/*!< Bank programmatic protection address register */
#define FLASH_BANK1PROGPROTADDR_ERASE_OFFSET      (31U)
#define FLASH_BANK1PROGPROTADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANK1PROGPROTADDR_ERASE_DISABLED    (0x0UL)                                                                  /*!< Value 0x00000000 */
#define FLASH_BANK1PROGPROTADDR_ERASE_ENABLED     (0x1UL)                                                                  /*!< Value 0x00000001 */

#define FLASH_BANK1PROGPROTADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANK1PROGPROTADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00010000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00020000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00040000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00080000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00100000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00200000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00400000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x00800000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x01000000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x02000000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x04000000 */
#define FLASH_BANK1PROGPROTADDR_ENDADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, ENDADDR))    /*!< Value 0x08000000 */

#define FLASH_BANK1PROGPROTADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANK1PROGPROTADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Mask  0x00000FFF */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000001 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000002 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1PROGPROTADDR_STARTADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGPROTADDR, STARTADDR))  /*!< Value 0x00000800 */

/*!< Bank current secure address register */
#define FLASH_BANK1CURSECADDR_ERASE_OFFSET      (31U)
#define FLASH_BANK1CURSECADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANK1CURSECADDR_ERASE_DISABLED    (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1CURSECADDR_ERASE_ENABLED     (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1CURSECADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANK1CURSECADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00010000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00020000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00040000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00080000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00100000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00200000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00400000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x00800000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x01000000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x02000000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x04000000 */
#define FLASH_BANK1CURSECADDR_ENDADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, ENDADDR))    /*!< Value 0x08000000 */

#define FLASH_BANK1CURSECADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANK1CURSECADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Mask  0x00000FFF */
#define FLASH_BANK1CURSECADDR_STARTADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000001 */
#define FLASH_BANK1CURSECADDR_STARTADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000002 */
#define FLASH_BANK1CURSECADDR_STARTADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1CURSECADDR_STARTADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1CURSECADDR_STARTADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1CURSECADDR_STARTADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1CURSECADDR_STARTADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1CURSECADDR_STARTADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1CURSECADDR_STARTADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1CURSECADDR_STARTADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1CURSECADDR_STARTADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1CURSECADDR_STARTADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURSECADDR, STARTADDR))  /*!< Value 0x00000800 */

/*!< Bank programmatic secure address register */
#define FLASH_BANK1PROGSECADDR_ERASE_OFFSET      (31U)
#define FLASH_BANK1PROGSECADDR_ERASE_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ERASE))        /*!< Mask  0x80000000 */
#define FLASH_BANK1PROGSECADDR_ERASE_DISABLED    (0x0UL)                                                                 /*!< Value 0x00000000 */
#define FLASH_BANK1PROGSECADDR_ERASE_ENABLED     (0x1UL)                                                                 /*!< Value 0x00000001 */

#define FLASH_BANK1PROGSECADDR_ENDADDR_OFFSET    (16U)
#define FLASH_BANK1PROGSECADDR_ENDADDR_MASK      (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Mask  0x0FFF0000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_0         (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00010000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_1         (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00020000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_2         (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00040000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_3         (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00080000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_4         (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00100000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_5         (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00200000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_6         (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00400000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_7         (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x00800000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_8         (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x01000000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_9         (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x02000000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_10        (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x04000000 */
#define FLASH_BANK1PROGSECADDR_ENDADDR_11        (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, ENDADDR))    /*!< Value 0x08000000 */

#define FLASH_BANK1PROGSECADDR_STARTADDR_OFFSET  (0U)
#define FLASH_BANK1PROGSECADDR_STARTADDR_MASK    (0xFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Mask  0x00000FFF */
#define FLASH_BANK1PROGSECADDR_STARTADDR_0       (0x001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000001 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_1       (0x002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000002 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_2       (0x004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_3       (0x008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_4       (0x010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_5       (0x020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_6       (0x040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_7       (0x080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_8       (0x100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_9       (0x200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_10      (0x400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1PROGSECADDR_STARTADDR_11      (0x800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGSECADDR, STARTADDR))  /*!< Value 0x00000800 */

/*!< Bank current write sector protection register */
#define FLASH_BANK1CURWRSECPROT_SEC7PROT_OFFSET    (7U)
#define FLASH_BANK1CURWRSECPROT_SEC7PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC7PROT))  /*!< Mask  0x00000080 */
#define FLASH_BANK1CURWRSECPROT_SEC7PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC7PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC6PROT_OFFSET    (6U)
#define FLASH_BANK1CURWRSECPROT_SEC6PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC6PROT))  /*!< Mask  0x00000040 */
#define FLASH_BANK1CURWRSECPROT_SEC6PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC6PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC5PROT_OFFSET    (5U)
#define FLASH_BANK1CURWRSECPROT_SEC5PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC5PROT))  /*!< Mask  0x00000020 */
#define FLASH_BANK1CURWRSECPROT_SEC5PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC5PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC4PROT_OFFSET    (4U)
#define FLASH_BANK1CURWRSECPROT_SEC4PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC4PROT))  /*!< Mask  0x00000010 */
#define FLASH_BANK1CURWRSECPROT_SEC4PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC4PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC3PROT_OFFSET    (3U)
#define FLASH_BANK1CURWRSECPROT_SEC3PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC3PROT))  /*!< Mask  0x00000008 */
#define FLASH_BANK1CURWRSECPROT_SEC3PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC3PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC2PROT_OFFSET    (2U)
#define FLASH_BANK1CURWRSECPROT_SEC2PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC2PROT))  /*!< Mask  0x00000004 */
#define FLASH_BANK1CURWRSECPROT_SEC2PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC2PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC1PROT_OFFSET    (1U)
#define FLASH_BANK1CURWRSECPROT_SEC1PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC1PROT))  /*!< Mask  0x00000002 */
#define FLASH_BANK1CURWRSECPROT_SEC1PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC1PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

#define FLASH_BANK1CURWRSECPROT_SEC0PROT_OFFSET    (0U)
#define FLASH_BANK1CURWRSECPROT_SEC0PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CURWRSECPROT, SEC0PROT))  /*!< Mask  0x00000001 */
#define FLASH_BANK1CURWRSECPROT_SEC0PROT_ENABLED   (0x0UL)                                                               /*!< Value 0x00000000 */
#define FLASH_BANK1CURWRSECPROT_SEC0PROT_DISABLED  (0x1UL)                                                               /*!< Value 0x00000001 */

/*!< Bank programmatic write sector protection register */
#define FLASH_BANK1PROGWRSECPROT_SEC7PROT_OFFSET    (7U)
#define FLASH_BANK1PROGWRSECPROT_SEC7PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC7PROT))  /*!< Mask  0x00000080 */
#define FLASH_BANK1PROGWRSECPROT_SEC7PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC7PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC6PROT_OFFSET    (6U)
#define FLASH_BANK1PROGWRSECPROT_SEC6PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC6PROT))  /*!< Mask  0x00000040 */
#define FLASH_BANK1PROGWRSECPROT_SEC6PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC6PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC5PROT_OFFSET    (5U)
#define FLASH_BANK1PROGWRSECPROT_SEC5PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC5PROT))  /*!< Mask  0x00000020 */
#define FLASH_BANK1PROGWRSECPROT_SEC5PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC5PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC4PROT_OFFSET    (4U)
#define FLASH_BANK1PROGWRSECPROT_SEC4PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC4PROT))  /*!< Mask  0x00000010 */
#define FLASH_BANK1PROGWRSECPROT_SEC4PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC4PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC3PROT_OFFSET    (3U)
#define FLASH_BANK1PROGWRSECPROT_SEC3PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC3PROT))  /*!< Mask  0x00000008 */
#define FLASH_BANK1PROGWRSECPROT_SEC3PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC3PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC2PROT_OFFSET    (2U)
#define FLASH_BANK1PROGWRSECPROT_SEC2PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC2PROT))  /*!< Mask  0x00000004 */
#define FLASH_BANK1PROGWRSECPROT_SEC2PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC2PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC1PROT_OFFSET    (1U)
#define FLASH_BANK1PROGWRSECPROT_SEC1PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC1PROT))  /*!< Mask  0x00000002 */
#define FLASH_BANK1PROGWRSECPROT_SEC1PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC1PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

#define FLASH_BANK1PROGWRSECPROT_SEC0PROT_OFFSET    (0U)
#define FLASH_BANK1PROGWRSECPROT_SEC0PROT_MASK      (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1PROGWRSECPROT, SEC0PROT))  /*!< Mask  0x00000001 */
#define FLASH_BANK1PROGWRSECPROT_SEC0PROT_ENABLED   (0x0UL)                                                                /*!< Value 0x00000000 */
#define FLASH_BANK1PROGWRSECPROT_SEC0PROT_DISABLED  (0x1UL)                                                                /*!< Value 0x00000001 */

/*!< Current boot address register for ARM Cortex M7 core */
#define FLASH_CURBOOTADDRM7_ADDR1_OFFSET  (16U)
#define FLASH_CURBOOTADDRM7_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Mask  0xFFFF0000 */
#define FLASH_CURBOOTADDRM7_ADDR1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000001 */
#define FLASH_CURBOOTADDRM7_ADDR1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000002 */
#define FLASH_CURBOOTADDRM7_ADDR1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000004 */
#define FLASH_CURBOOTADDRM7_ADDR1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000008 */
#define FLASH_CURBOOTADDRM7_ADDR1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000010 */
#define FLASH_CURBOOTADDRM7_ADDR1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000020 */
#define FLASH_CURBOOTADDRM7_ADDR1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000040 */
#define FLASH_CURBOOTADDRM7_ADDR1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000080 */
#define FLASH_CURBOOTADDRM7_ADDR1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000100 */
#define FLASH_CURBOOTADDRM7_ADDR1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000200 */
#define FLASH_CURBOOTADDRM7_ADDR1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000400 */
#define FLASH_CURBOOTADDRM7_ADDR1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00000800 */
#define FLASH_CURBOOTADDRM7_ADDR1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00001000 */
#define FLASH_CURBOOTADDRM7_ADDR1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00002000 */
#define FLASH_CURBOOTADDRM7_ADDR1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00004000 */
#define FLASH_CURBOOTADDRM7_ADDR1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR1))  /*!< Value 0x00008000 */

#define FLASH_CURBOOTADDRM7_ADDR0_OFFSET  (0U)
#define FLASH_CURBOOTADDRM7_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Mask  0x0000FFFF */
#define FLASH_CURBOOTADDRM7_ADDR0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00010000 */
#define FLASH_CURBOOTADDRM7_ADDR0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00020000 */
#define FLASH_CURBOOTADDRM7_ADDR0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00040000 */
#define FLASH_CURBOOTADDRM7_ADDR0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00080000 */
#define FLASH_CURBOOTADDRM7_ADDR0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00100000 */
#define FLASH_CURBOOTADDRM7_ADDR0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00200000 */
#define FLASH_CURBOOTADDRM7_ADDR0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00400000 */
#define FLASH_CURBOOTADDRM7_ADDR0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x00800000 */
#define FLASH_CURBOOTADDRM7_ADDR0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x01000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x02000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x04000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x08000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x10000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x20000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x40000000 */
#define FLASH_CURBOOTADDRM7_ADDR0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM7, ADDR0))  /*!< Value 0x80000000 */

/*!< Programmatic boot address register for ARM Cortex M7 core */
#define FLASH_PROGBOOTADDRM7_ADDR1_OFFSET  (16U)
#define FLASH_PROGBOOTADDRM7_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Mask  0xFFFF0000 */
#define FLASH_PROGBOOTADDRM7_ADDR1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000001 */
#define FLASH_PROGBOOTADDRM7_ADDR1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000002 */
#define FLASH_PROGBOOTADDRM7_ADDR1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000004 */
#define FLASH_PROGBOOTADDRM7_ADDR1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000008 */
#define FLASH_PROGBOOTADDRM7_ADDR1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000010 */
#define FLASH_PROGBOOTADDRM7_ADDR1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000020 */
#define FLASH_PROGBOOTADDRM7_ADDR1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000040 */
#define FLASH_PROGBOOTADDRM7_ADDR1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000080 */
#define FLASH_PROGBOOTADDRM7_ADDR1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000100 */
#define FLASH_PROGBOOTADDRM7_ADDR1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000200 */
#define FLASH_PROGBOOTADDRM7_ADDR1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000400 */
#define FLASH_PROGBOOTADDRM7_ADDR1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00000800 */
#define FLASH_PROGBOOTADDRM7_ADDR1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00001000 */
#define FLASH_PROGBOOTADDRM7_ADDR1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00002000 */
#define FLASH_PROGBOOTADDRM7_ADDR1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00004000 */
#define FLASH_PROGBOOTADDRM7_ADDR1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR1))  /*!< Value 0x00008000 */

#define FLASH_PROGBOOTADDRM7_ADDR0_OFFSET  (0U)
#define FLASH_PROGBOOTADDRM7_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Mask  0x0000FFFF */
#define FLASH_PROGBOOTADDRM7_ADDR0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00010000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00020000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00040000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00080000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00100000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00200000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00400000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x00800000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x01000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x02000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x04000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x08000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x10000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x20000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x40000000 */
#define FLASH_PROGBOOTADDRM7_ADDR0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM7, ADDR0))  /*!< Value 0x80000000 */

/*!< Current boot address register for ARM Cortex M4 core */
#define FLASH_CURBOOTADDRM4_ADDR1_OFFSET  (16U)
#define FLASH_CURBOOTADDRM4_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Mask  0xFFFF0000 */
#define FLASH_CURBOOTADDRM4_ADDR1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000001 */
#define FLASH_CURBOOTADDRM4_ADDR1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000002 */
#define FLASH_CURBOOTADDRM4_ADDR1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000004 */
#define FLASH_CURBOOTADDRM4_ADDR1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000008 */
#define FLASH_CURBOOTADDRM4_ADDR1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000010 */
#define FLASH_CURBOOTADDRM4_ADDR1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000020 */
#define FLASH_CURBOOTADDRM4_ADDR1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000040 */
#define FLASH_CURBOOTADDRM4_ADDR1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000080 */
#define FLASH_CURBOOTADDRM4_ADDR1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000100 */
#define FLASH_CURBOOTADDRM4_ADDR1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000200 */
#define FLASH_CURBOOTADDRM4_ADDR1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000400 */
#define FLASH_CURBOOTADDRM4_ADDR1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00000800 */
#define FLASH_CURBOOTADDRM4_ADDR1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00001000 */
#define FLASH_CURBOOTADDRM4_ADDR1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00002000 */
#define FLASH_CURBOOTADDRM4_ADDR1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00004000 */
#define FLASH_CURBOOTADDRM4_ADDR1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR1))  /*!< Value 0x00008000 */

#define FLASH_CURBOOTADDRM4_ADDR0_OFFSET  (0U)
#define FLASH_CURBOOTADDRM4_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Mask  0x0000FFFF */
#define FLASH_CURBOOTADDRM4_ADDR0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00010000 */
#define FLASH_CURBOOTADDRM4_ADDR0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00020000 */
#define FLASH_CURBOOTADDRM4_ADDR0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00040000 */
#define FLASH_CURBOOTADDRM4_ADDR0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00080000 */
#define FLASH_CURBOOTADDRM4_ADDR0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00100000 */
#define FLASH_CURBOOTADDRM4_ADDR0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00200000 */
#define FLASH_CURBOOTADDRM4_ADDR0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00400000 */
#define FLASH_CURBOOTADDRM4_ADDR0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x00800000 */
#define FLASH_CURBOOTADDRM4_ADDR0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x01000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x02000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x04000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x08000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x10000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x20000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x40000000 */
#define FLASH_CURBOOTADDRM4_ADDR0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, CURBOOTADDRM4, ADDR0))  /*!< Value 0x80000000 */

/*!< Programmatic boot address register for ARM Cortex M4 core */
#define FLASH_PROGBOOTADDRM4_ADDR1_OFFSET  (16U)
#define FLASH_PROGBOOTADDRM4_ADDR1_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Mask  0xFFFF0000 */
#define FLASH_PROGBOOTADDRM4_ADDR1_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000001 */
#define FLASH_PROGBOOTADDRM4_ADDR1_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000002 */
#define FLASH_PROGBOOTADDRM4_ADDR1_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000004 */
#define FLASH_PROGBOOTADDRM4_ADDR1_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000008 */
#define FLASH_PROGBOOTADDRM4_ADDR1_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000010 */
#define FLASH_PROGBOOTADDRM4_ADDR1_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000020 */
#define FLASH_PROGBOOTADDRM4_ADDR1_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000040 */
#define FLASH_PROGBOOTADDRM4_ADDR1_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000080 */
#define FLASH_PROGBOOTADDRM4_ADDR1_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000100 */
#define FLASH_PROGBOOTADDRM4_ADDR1_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000200 */
#define FLASH_PROGBOOTADDRM4_ADDR1_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000400 */
#define FLASH_PROGBOOTADDRM4_ADDR1_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00000800 */
#define FLASH_PROGBOOTADDRM4_ADDR1_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00001000 */
#define FLASH_PROGBOOTADDRM4_ADDR1_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00002000 */
#define FLASH_PROGBOOTADDRM4_ADDR1_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00004000 */
#define FLASH_PROGBOOTADDRM4_ADDR1_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR1))  /*!< Value 0x00008000 */

#define FLASH_PROGBOOTADDRM4_ADDR0_OFFSET  (0U)
#define FLASH_PROGBOOTADDRM4_ADDR0_MASK    (0xFFFFUL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Mask  0x0000FFFF */
#define FLASH_PROGBOOTADDRM4_ADDR0_0       (0x0001UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00010000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_1       (0x0002UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00020000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_2       (0x0004UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00040000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_3       (0x0008UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00080000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_4       (0x0010UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00100000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_5       (0x0020UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00200000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_6       (0x0040UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00400000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_7       (0x0080UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x00800000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_8       (0x0100UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x01000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_9       (0x0200UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x02000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_10      (0x0400UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x04000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_11      (0x0800UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x08000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_12      (0x1000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x10000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_13      (0x2000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x20000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_14      (0x4000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x40000000 */
#define FLASH_PROGBOOTADDRM4_ADDR0_15      (0x8000UL << REGISTER_FIELD_OFFSET(FLASH, PROGBOOTADDRM4, ADDR0))  /*!< Value 0x80000000 */

/*!< Bank CRC control register */
#define FLASH_BANK1CRCCTRL_ALLSECTORS_OFFSET        (22U)
#define FLASH_BANK1CRCCTRL_ALLSECTORS_MASK          (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, ALLSECTORS))    /*!< Mask  0x00400000 */
#define FLASH_BANK1CRCCTRL_ALLSECTORS_DISABLE       (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_ALLSECTORS_ENABLE        (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_BURSTSIZE_OFFSET         (20U)
#define FLASH_BANK1CRCCTRL_BURSTSIZE_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, BURSTSIZE))     /*!< Mask  0x00300000 */
#define FLASH_BANK1CRCCTRL_BURSTSIZE_4FLASHWORDS    (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_BURSTSIZE_16FLASHWORDS   (0x1UL)                                                              /*!< Value 0x00000001 */
#define FLASH_BANK1CRCCTRL_BURSTSIZE_64FLASHWORDS   (0x2UL)                                                              /*!< Value 0x00000001 */
#define FLASH_BANK1CRCCTRL_BURSTSIZE_256FLASHWORDS  (0x3UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_CLRRESULT_OFFSET         (17U)
#define FLASH_BANK1CRCCTRL_CLRRESULT_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, CLRRESULT))     /*!< Mask  0x00020000 */
#define FLASH_BANK1CRCCTRL_CLRRESULT_KEEP           (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_CLRRESULT_CLEAR          (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_STARTCALC_OFFSET         (16U)
#define FLASH_BANK1CRCCTRL_STARTCALC_MASK           (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, STARTCALC))     /*!< Mask  0x00010000 */
#define FLASH_BANK1CRCCTRL_STARTCALC_NOTRIGGER      (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_STARTCALC_TRIGGER        (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_CLEARSECLIST_OFFSET      (10U)
#define FLASH_BANK1CRCCTRL_CLEARSECLIST_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, CLEARSECLIST))  /*!< Mask  0x00000400 */
#define FLASH_BANK1CRCCTRL_CLEARSECLIST_KEEP        (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_CLEARSECLIST_CLEAR       (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_ADDSECTOCALC_OFFSET      (9U)
#define FLASH_BANK1CRCCTRL_ADDSECTOCALC_MASK        (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, ADDSECTOCALC))  /*!< Mask  0x00000200 */
#define FLASH_BANK1CRCCTRL_ADDSECTOCALC_NOADD       (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_ADDSECTOCALC_ADD         (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_CALCMODE_OFFSET          (8U)
#define FLASH_BANK1CRCCTRL_CALCMODE_MASK            (0x1UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, CALCMODE))      /*!< Mask  0x00000100 */
#define FLASH_BANK1CRCCTRL_CALCMODE_ALLADDR         (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_CALCMODE_SECTOR          (0x1UL)                                                              /*!< Value 0x00000001 */

#define FLASH_BANK1CRCCTRL_SELECTSEC_OFFSET         (0U)
#define FLASH_BANK1CRCCTRL_SELECTSEC_MASK           (0x7UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCCTRL, SELECTSEC))     /*!< Mask  0x00000007 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC0           (0x0UL)                                                              /*!< Value 0x00000000 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC1           (0x1UL)                                                              /*!< Value 0x00000001 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC2           (0x2UL)                                                              /*!< Value 0x00000002 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC3           (0x3UL)                                                              /*!< Value 0x00000003 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC4           (0x4UL)                                                              /*!< Value 0x00000004 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC5           (0x5UL)                                                              /*!< Value 0x00000005 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC6           (0x6UL)                                                              /*!< Value 0x00000006 */
#define FLASH_BANK1CRCCTRL_SELECTSEC_SEC7           (0x7UL)                                                              /*!< Value 0x00000007 */

/*!< Bank CRC start address register */
#define FLASH_BANK1CRCSTARTADDR_ADDR_OFFSET  (2U)
#define FLASH_BANK1CRCSTARTADDR_ADDR_MASK    (0x3FFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Mask  0x000FFFFC */
#define FLASH_BANK1CRCSTARTADDR_ADDR_0       (0x00001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_1       (0x00002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_2       (0x00004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_3       (0x00008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_4       (0x00010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_5       (0x00020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_6       (0x00040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_7       (0x00080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_8       (0x00100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_9       (0x00200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00000800 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_10      (0x00400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00001000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_11      (0x00800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00002000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_12      (0x01000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00004000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_13      (0x02000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00008000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_14      (0x04000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00010000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_15      (0x08000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00020000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_16      (0x10000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00040000 */
#define FLASH_BANK1CRCSTARTADDR_ADDR_17      (0x20000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCSTARTADDR, ADDR))  /*!< Value 0x00080000 */

/*!< Bank CRC end address register */
#define FLASH_BANK1CRCENDADDR_ADDR_OFFSET  (2U)
#define FLASH_BANK1CRCENDADDR_ADDR_MASK    (0x3FFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Mask  0x000FFFFC */
#define FLASH_BANK1CRCENDADDR_ADDR_0       (0x00001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1CRCENDADDR_ADDR_1       (0x00002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1CRCENDADDR_ADDR_2       (0x00004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1CRCENDADDR_ADDR_3       (0x00008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1CRCENDADDR_ADDR_4       (0x00010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1CRCENDADDR_ADDR_5       (0x00020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1CRCENDADDR_ADDR_6       (0x00040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1CRCENDADDR_ADDR_7       (0x00080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1CRCENDADDR_ADDR_8       (0x00100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1CRCENDADDR_ADDR_9       (0x00200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00000800 */
#define FLASH_BANK1CRCENDADDR_ADDR_10      (0x00400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00001000 */
#define FLASH_BANK1CRCENDADDR_ADDR_11      (0x00800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00002000 */
#define FLASH_BANK1CRCENDADDR_ADDR_12      (0x01000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00004000 */
#define FLASH_BANK1CRCENDADDR_ADDR_13      (0x02000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00008000 */
#define FLASH_BANK1CRCENDADDR_ADDR_14      (0x04000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00010000 */
#define FLASH_BANK1CRCENDADDR_ADDR_15      (0x08000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00020000 */
#define FLASH_BANK1CRCENDADDR_ADDR_16      (0x10000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00040000 */
#define FLASH_BANK1CRCENDADDR_ADDR_17      (0x20000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCENDADDR, ADDR))  /*!< Value 0x00080000 */

/*!< Bank CRC data register */
#define FLASH_BANK1CRCDATA_RESULT_OFFSET  (0U)
#define FLASH_BANK1CRCDATA_RESULT_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Mask  0xFFFFFFFF */
#define FLASH_BANK1CRCDATA_RESULT_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000001 */
#define FLASH_BANK1CRCDATA_RESULT_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000002 */
#define FLASH_BANK1CRCDATA_RESULT_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000004 */
#define FLASH_BANK1CRCDATA_RESULT_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000008 */
#define FLASH_BANK1CRCDATA_RESULT_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000010 */
#define FLASH_BANK1CRCDATA_RESULT_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000020 */
#define FLASH_BANK1CRCDATA_RESULT_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000040 */
#define FLASH_BANK1CRCDATA_RESULT_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000080 */
#define FLASH_BANK1CRCDATA_RESULT_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000100 */
#define FLASH_BANK1CRCDATA_RESULT_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000200 */
#define FLASH_BANK1CRCDATA_RESULT_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000400 */
#define FLASH_BANK1CRCDATA_RESULT_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00000800 */
#define FLASH_BANK1CRCDATA_RESULT_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00001000 */
#define FLASH_BANK1CRCDATA_RESULT_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00002000 */
#define FLASH_BANK1CRCDATA_RESULT_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00004000 */
#define FLASH_BANK1CRCDATA_RESULT_15      (0x00008000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00008000 */
#define FLASH_BANK1CRCDATA_RESULT_16      (0x00010000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00010000 */
#define FLASH_BANK1CRCDATA_RESULT_17      (0x00020000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00020000 */
#define FLASH_BANK1CRCDATA_RESULT_18      (0x00040000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00040000 */
#define FLASH_BANK1CRCDATA_RESULT_19      (0x00080000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00080000 */
#define FLASH_BANK1CRCDATA_RESULT_20      (0x00100000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00100000 */
#define FLASH_BANK1CRCDATA_RESULT_21      (0x00200000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00200000 */
#define FLASH_BANK1CRCDATA_RESULT_22      (0x00400000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00400000 */
#define FLASH_BANK1CRCDATA_RESULT_23      (0x00800000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x00800000 */
#define FLASH_BANK1CRCDATA_RESULT_24      (0x01000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x01000000 */
#define FLASH_BANK1CRCDATA_RESULT_25      (0x02000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x02000000 */
#define FLASH_BANK1CRCDATA_RESULT_26      (0x04000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x04000000 */
#define FLASH_BANK1CRCDATA_RESULT_27      (0x08000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x08000000 */
#define FLASH_BANK1CRCDATA_RESULT_28      (0x10000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x10000000 */
#define FLASH_BANK1CRCDATA_RESULT_29      (0x20000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x20000000 */
#define FLASH_BANK1CRCDATA_RESULT_30      (0x40000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x40000000 */
#define FLASH_BANK1CRCDATA_RESULT_31      (0x80000000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1CRCDATA, RESULT))  /*!< Value 0x80000000 */

/*!< Bank ECC fail address register */
#define FLASH_BANK1ERRFAILADDR_ADDR_OFFSET  (0U)
#define FLASH_BANK1ERRFAILADDR_ADDR_MASK    (0x00007FFFUL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Mask  0x00007FFF */
#define FLASH_BANK1ERRFAILADDR_ADDR_0       (0x00000001UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000001 */
#define FLASH_BANK1ERRFAILADDR_ADDR_1       (0x00000002UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000002 */
#define FLASH_BANK1ERRFAILADDR_ADDR_2       (0x00000004UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000004 */
#define FLASH_BANK1ERRFAILADDR_ADDR_3       (0x00000008UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000008 */
#define FLASH_BANK1ERRFAILADDR_ADDR_4       (0x00000010UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000010 */
#define FLASH_BANK1ERRFAILADDR_ADDR_5       (0x00000020UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000020 */
#define FLASH_BANK1ERRFAILADDR_ADDR_6       (0x00000040UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000040 */
#define FLASH_BANK1ERRFAILADDR_ADDR_7       (0x00000080UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000080 */
#define FLASH_BANK1ERRFAILADDR_ADDR_8       (0x00000100UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000100 */
#define FLASH_BANK1ERRFAILADDR_ADDR_9       (0x00000200UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000200 */
#define FLASH_BANK1ERRFAILADDR_ADDR_10      (0x00000400UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000400 */
#define FLASH_BANK1ERRFAILADDR_ADDR_11      (0x00000800UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00000800 */
#define FLASH_BANK1ERRFAILADDR_ADDR_12      (0x00001000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00001000 */
#define FLASH_BANK1ERRFAILADDR_ADDR_13      (0x00002000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00002000 */
#define FLASH_BANK1ERRFAILADDR_ADDR_14      (0x00004000UL << REGISTER_FIELD_OFFSET(FLASH, BANK1ERRFAILADDR, ADDR))  /*!< Value 0x00004000 */

#define FLASH_OFFSET 0x1004000
#define FLASH_BASE (D1_AHB3_BASE + FLASH_OFFSET)
#define FLASH_ADDRESS_RANGE 0x100

/*!< FLASH registers for bank 1 */
#define FLASH_BANK1_OFFSET (0*FLASH_ADDRESS_RANGE)
#define FLASH_BANK1_BASE OFFSET_ADDRESS(FLASH_BASE, FLASH_BANK1_OFFSET)
#define FLASH_BANK1 REGISTER_PTR(flash_bank1_regs, FLASH_BANK1_BASE)

/*!< FLASH registers for bank 2 */
#define FLASH_BANK2_OFFSET (1*FLASH_ADDRESS_RANGE)
#define FLASH_BANK2_BASE OFFSET_ADDRESS(FLASH_BASE, FLASH_BANK2_OFFSET)
#define FLASH_BANK2 REGISTER_PTR(flash_bank2_regs, FLASH_BANK2_BASE)

/** @} */ // End of FlashMemory group

/** @} */ // End of RegisterGroup group

#endif // GPIO_REGISTERS_H
