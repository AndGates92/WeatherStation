#ifndef CTI_REGISTERS_H
#define CTI_REGISTERS_H
/**
 * @copyright
 * @file cti.h
 * @author Andrea Gianarda
 * @date 16th of June 2021
 * @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) register
*/

#include <stdint.h>

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup CTI Cross trigger interface (CTI) registers in private peripheral bus (PPB)
 *  @brief Cross trigger interface (CTI) registers in private peripheral bus (PPB) macros and structures
 *  @{
 */

typedef struct {
	RW uint32_t CTICONTROL;        /*!< Cross trigger interface (CTI) control register                      (Offset 0x000)          */
	   uint32_t reserved0[3U];     /*!< Reserved                                                            (Offset 0x004 to 0x00C) */
	WO uint32_t CTIINTACK;         /*!< Cross trigger interface (CTI) interrupt acknowledge register        (Offset 0x010)          */
	RW uint32_t CTIAPPSET;         /*!< Cross trigger interface (CTI) application trigger set register      (Offset 0x014)          */
	WO uint32_t CTIAPPCLEAR;       /*!< Cross trigger interface (CTI) application trigger clear register    (Offset 0x018)          */
	WO uint32_t CTIAPPPULSE;       /*!< Cross trigger interface (CTI) application pulse register            (Offset 0x01C)          */
	RW uint32_t CTIINEN0;          /*!< Cross trigger interface (CTI) trigger to channel 0 enable register  (Offset 0x020)          */
	RW uint32_t CTIINEN1;          /*!< Cross trigger interface (CTI) trigger to channel 1 enable register  (Offset 0x024)          */
	RW uint32_t CTIINEN2;          /*!< Cross trigger interface (CTI) trigger to channel 2 enable register  (Offset 0x028)          */
	RW uint32_t CTIINEN3;          /*!< Cross trigger interface (CTI) trigger to channel 3 enable register  (Offset 0x02C)          */
	RW uint32_t CTIINEN4;          /*!< Cross trigger interface (CTI) trigger to channel 4 enable register  (Offset 0x030)          */
	RW uint32_t CTIINEN5;          /*!< Cross trigger interface (CTI) trigger to channel 5 enable register  (Offset 0x034)          */
	RW uint32_t CTIINEN6;          /*!< Cross trigger interface (CTI) trigger to channel 6 enable register  (Offset 0x038)          */
	RW uint32_t CTIINEN7;          /*!< Cross trigger interface (CTI) trigger to channel 7 enable register  (Offset 0x03C)          */
	   uint32_t reserved1[24U];    /*!< Reserved                                                            (Offset 0x040 to 0x09C) */
	RW uint32_t CTIOUTEN0;         /*!< Cross trigger interface (CTI) channel 0 to trigger enable register  (Offset 0x0A0)          */
	RW uint32_t CTIOUTEN1;         /*!< Cross trigger interface (CTI) channel 1 to trigger enable register  (Offset 0x0A4)          */
	RW uint32_t CTIOUTEN2;         /*!< Cross trigger interface (CTI) channel 2 to trigger enable register  (Offset 0x0A8)          */
	RW uint32_t CTIOUTEN3;         /*!< Cross trigger interface (CTI) channel 3 to trigger enable register  (Offset 0x0AC)          */
	RW uint32_t CTIOUTEN4;         /*!< Cross trigger interface (CTI) channel 4 to trigger enable register  (Offset 0x0B0)          */
	RW uint32_t CTIOUTEN5;         /*!< Cross trigger interface (CTI) channel 5 to trigger enable register  (Offset 0x0B4)          */
	RW uint32_t CTIOUTEN6;         /*!< Cross trigger interface (CTI) channel 6 to trigger enable register  (Offset 0x0B8)          */
	RW uint32_t CTIOUTEN7;         /*!< Cross trigger interface (CTI) channel 7 to trigger enable register  (Offset 0x0BC)          */
	   uint32_t reserved2[28U];    /*!< Reserved                                                            (Offset 0x0C0 to 0x12C) */
	RO uint32_t CTITRIGINSTATUS;   /*!< Cross trigger interface (CTI) trigger in status register            (Offset 0x130)          */
	RO uint32_t CTITRIGOUTSTATUS;  /*!< Cross trigger interface (CTI) trigger out status register           (Offset 0x134)          */
	RO uint32_t CTICHINSTATUS;     /*!< Cross trigger interface (CTI) channel in status register            (Offset 0x138)          */
	RO uint32_t CTICHOUTSTATUS;    /*!< Cross trigger interface (CTI) channel out status register           (Offset 0x13C)          */
	RW uint32_t CTIGATE;           /*!< Cross trigger interface (CTI) channel gate register                 (Offset 0x140)          */
	RW uint32_t ASICCTL;           /*!< External multiplexor control register                               (Offset 0x144)          */
	   uint32_t reserved3[869U];   /*!< Reserved                                                            (Offset 0x148 to 0xED8) */
	WO uint32_t ITCHINACK;         /*!< ITCHINACK register                                                  (Offset 0xEDC)          */
	WO uint32_t ITTRIGINACK;       /*!< ITTRIGINACK register                                                (Offset 0xEE0)          */
	WO uint32_t ITCHOUT;           /*!< ITCHOUT register                                                    (Offset 0xEE4)          */
	WO uint32_t ITTRIGOUT;         /*!< ITTRIGOUT register                                                  (Offset 0xEE8)          */
	RO uint32_t ITCHOUTACK;        /*!< ITCHOUTACK register                                                 (Offset 0xEEC)          */
	RO uint32_t ITTRIGOUTACK;      /*!< ITTRIGOUTACK register                                               (Offset 0xEF0)          */
	RO uint32_t ITCHIN;            /*!< ITCHIN register                                                     (Offset 0xEF4)          */
	RO uint32_t ITTRIGIN;          /*!< ITTRIGIN register                                                   (Offset 0xEF8)          */
	   uint32_t reserved32;        /*!< Reserved                                                            (Offset 0xEFC)          */
	RW uint32_t ITCTRL;            /*!< Integration mode control register                                   (Offset 0xF00)          */
	   uint32_t reserved32[39U];   /*!< Reserved                                                            (Offset 0xF04 to 0xF9C) */
	RW uint32_t CLAIMSET;          /*!< Claim tag set register                                              (Offset 0xFA0)          */
	RW uint32_t CLAIMCLR;          /*!< Claim tag clear register                                            (Offset 0xFA4)          */
	   uint32_t reserved32[2U];    /*!< Reserved                                                            (Offset 0xFA8 to 0xFAC) */
	WO uint32_t LAR;               /*!< CoreSight lock access register                                      (Offset 0xFB0)          */
	RO uint32_t LSR;               /*!< CoreSight lock status register                                      (Offset 0xFB4)          */
	RO uint32_t AUTHSTAT;          /*!< Authentication status register                                      (Offset 0xFB8)          */
	   uint32_t reserved33[3U];    /*!< Reserved                                                            (Offset 0xFBC to 0xFC4) */
	RO uint32_t DEVID;             /*!< Device ID register                                                  (Offset 0xFC8)          */
	RO uint32_t DEVTYPE;           /*!< Device type register                                                (Offset 0xFCC)          */
	RO uint32_t PIDR4;             /*!< Peripheral identification 4 register                                (Offset 0xFD0)          */
	RO uint32_t PIDR5;             /*!< Peripheral identification 5 register                                (Offset 0xFD4)          */
	RO uint32_t PIDR6;             /*!< Peripheral identification 6 register                                (Offset 0xFD8)          */
	RO uint32_t PIDR7;             /*!< Peripheral identification 7 register                                (Offset 0xFDC)          */
	RO uint32_t PIDR0;             /*!< Peripheral identification 0 register                                (Offset 0xFE0)          */
	RO uint32_t PIDR1;             /*!< Peripheral identification 1 register                                (Offset 0xFE4)          */
	RO uint32_t PIDR2;             /*!< Peripheral identification 2 register                                (Offset 0xFE8)          */
	RO uint32_t PIDR3;             /*!< Peripheral identification 3 register                                (Offset 0xFEC)          */
	RO uint32_t CIDR0;             /*!< Component identification 0 register                                 (Offset 0xFF0)          */
	RO uint32_t CIDR1;             /*!< Component identification 1 register                                 (Offset 0xFF4)          */
	RO uint32_t CIDR2;             /*!< Component identification 2 register                                 (Offset 0xFF8)          */
	RO uint32_t CIDR3;             /*!< Component identification 3 register                                 (Offset 0xFFC)          */
} cti_regs;

/*!< CTI control register */
#define CTI_CTICONTROL_GLBEN_OFFSET  (0U)
#define CTI_CTICONTROL_GLBEN_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTICONTROL, GLBEN))  /*!< Mask  0x00000001 */

// Values of embedded cross trigger (ETC) enable bit
#define CTI_ETC_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_ETC_ENABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< CTI interrupt acknowledge register */
#define CTI_CTIINTACK_INACK_OFFSET  (0U)
#define CTI_CTIINTACK_INACK_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(CTI, CTIINTACK, INACK))  /*!< Mask  0x000000FF */

// Values of CTITRIGOUT output bits
#define CTI_CTITRIGOUT7  (7U)
#define CTI_CTITRIGOUT6  (6U)
#define CTI_CTITRIGOUT5  (5U)
#define CTI_CTITRIGOUT4  (4U)
#define CTI_CTITRIGOUT3  (3U)
#define CTI_CTITRIGOUT2  (2U)
#define CTI_CTITRIGOUT1  (1U)
#define CTI_CTITRIGOUT0  (0U)

// Values of register acknowledging CTITRIGOUT output
#define CTI_CTITRIGOUT_CTITRIGOUT7_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT7)
#define CTI_CTITRIGOUT_CTITRIGOUT7_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT7))  /*!< Mask  0x00000080 */

#define CTI_CTITRIGOUT_CTITRIGOUT6_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT6)
#define CTI_CTITRIGOUT_CTITRIGOUT6_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT6))  /*!< Mask  0x00000040 */

#define CTI_CTITRIGOUT_CTITRIGOUT5_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT5)
#define CTI_CTITRIGOUT_CTITRIGOUT5_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT5))  /*!< Mask  0x00000020 */

#define CTI_CTITRIGOUT_CTITRIGOUT4_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT4)
#define CTI_CTITRIGOUT_CTITRIGOUT4_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT4))  /*!< Mask  0x00000010 */

#define CTI_CTITRIGOUT_CTITRIGOUT3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT3)
#define CTI_CTITRIGOUT_CTITRIGOUT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT3))  /*!< Mask  0x00000008 */

#define CTI_CTITRIGOUT_CTITRIGOUT2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT2)
#define CTI_CTITRIGOUT_CTITRIGOUT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT2))  /*!< Mask  0x00000004 */

#define CTI_CTITRIGOUT_CTITRIGOUT1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT1)
#define CTI_CTITRIGOUT_CTITRIGOUT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT1))  /*!< Mask  0x00000002 */

#define CTI_CTITRIGOUT_CTITRIGOUT0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINACK, INACK) + CTI_CTITRIGOUT0)
#define CTI_CTITRIGOUT_CTITRIGOUT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CTITRIGOUT, CTITRIGOUT0))  /*!< Mask  0x00000001 */

// Values of integration mode enable bit
#define CTI_CTITRIGOUT_NOEFFECT     (0x0UL)  /*!< Value 0x00000000 */
#define CTI_CTITRIGOUT_ACKOWLEDGED  (0x1UL)  /*!< Value 0x00000001 */

/*!< CTI application trigger set register */
#define CTI_CTIAPPSET_APPSET_OFFSET  (0U)
#define CTI_CTIAPPSET_APPSET_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, CTIAPPSET, APPSET))  /*!< Mask  0x0000000F */

// Values of bits of the channel
#define CTI_CHANNEL3  (3U)
#define CTI_CHANNEL2  (2U)
#define CTI_CHANNEL1  (1U)
#define CTI_CHANNEL0  (0U)

// Values of channel even generation
#define CTI_EVENTSET_CHANNEL3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPSET, APPSET) + CTI_CHANNEL3)
#define CTI_EVENTSET_CHANNEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTSET, CHANNEL3))  /*!< Mask  0x00000008 */

#define CTI_EVENTSET_CHANNEL2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPSET, APPSET) + CTI_CHANNEL2)
#define CTI_EVENTSET_CHANNEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTSET, CHANNEL2))  /*!< Mask  0x00000004 */

#define CTI_EVENTSET_CHANNEL1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPSET, APPSET) + CTI_CHANNEL1)
#define CTI_EVENTSET_CHANNEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTSET, CHANNEL1))  /*!< Mask  0x00000002 */

#define CTI_EVENTSET_CHANNEL0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPSET, APPSET) + CTI_CHANNEL0)
#define CTI_EVENTSET_CHANNEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTSET, CHANNEL0))  /*!< Mask  0x00000001 */

// Values of integration mode enable bit
// Read values
#define CTI_EVENT_NOEFFECT  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_EVENT_GENERATE  (0x1UL)  /*!< Value 0x00000001 */

// Write values
#define CTI_APPLICATIONTRIGGER_INACTIVE  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_APPLICATIONTRIGGER_ACTIVE    (0x1UL)  /*!< Value 0x00000001 */

/*!< CTI application trigger clear register */
#define CTI_CTIAPPCLEAR_APPCLEAR_OFFSET  (0U)
#define CTI_CTIAPPCLEAR_APPCLEAR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, CTIAPPCLEAR, APPCLEAR))  /*!< Mask  0x0000000F */

// Values of channel even generation
#define CTI_EVENTCLEAR_CHANNEL3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPCLEAR, APPCLEAR) + CTI_CHANNEL3)
#define CTI_EVENTCLEAR_CHANNEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTCLEAR, CHANNEL3))  /*!< Mask  0x00000008 */

#define CTI_EVENTCLEAR_CHANNEL2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPCLEAR, APPCLEAR) + CTI_CHANNEL2)
#define CTI_EVENTCLEAR_CHANNEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTCLEAR, CHANNEL2))  /*!< Mask  0x00000004 */

#define CTI_EVENTCLEAR_CHANNEL1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPCLEAR, APPCLEAR) + CTI_CHANNEL1)
#define CTI_EVENTCLEAR_CHANNEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTCLEAR, CHANNEL1))  /*!< Mask  0x00000002 */

#define CTI_EVENTCLEAR_CHANNEL0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPCLEAR, APPCLEAR) + CTI_CHANNEL0)
#define CTI_EVENTCLEAR_CHANNEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTCLEAR, CHANNEL0))  /*!< Mask  0x00000001 */

// Values of integration mode clear bit
#define CTI_EVENT_NOEFFECT  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_EVENT_DISABLE   (0x1UL)  /*!< Value 0x00000001 */

/*!< CTI application trigger pulse register */
#define CTI_CTIAPPPULSE_APPPULSE_OFFSET  (0U)
#define CTI_CTIAPPPULSE_APPPULSE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, CTIAPPPULSE, APPPULSE))  /*!< Mask  0x0000000F */

// Values of channel even generation
#define CTI_EVENTPULSE_CHANNEL3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPPULSE, APPPULSE) + CTI_CHANNEL3)
#define CTI_EVENTPULSE_CHANNEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTPULSE, CHANNEL3))  /*!< Mask  0x00000008 */

#define CTI_EVENTPULSE_CHANNEL2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPPULSE, APPPULSE) + CTI_CHANNEL2)
#define CTI_EVENTPULSE_CHANNEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTPULSE, CHANNEL2))  /*!< Mask  0x00000004 */

#define CTI_EVENTPULSE_CHANNEL1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPPULSE, APPPULSE) + CTI_CHANNEL1)
#define CTI_EVENTPULSE_CHANNEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTPULSE, CHANNEL1))  /*!< Mask  0x00000002 */

#define CTI_EVENTPULSE_CHANNEL0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIAPPPULSE, APPPULSE) + CTI_CHANNEL0)
#define CTI_EVENTPULSE_CHANNEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, EVENTPULSE, CHANNEL0))  /*!< Mask  0x00000001 */

// Values of integration mode pulse bit
#define CTI_EVENT_NOEFFECT       (0x0UL)  /*!< Value 0x00000000 */
#define CTI_EVENT_GENERATEPULSE  (0x1UL)  /*!< Value 0x00000001 */

/*!< CTI application trigger clear register */
#define CTI_CTIINEN_TRIGINEN_OFFSET  (0U)
#define CTI_CTIINEN_TRIGINEN_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, CTIINEN, TRIGINEN))  /*!< Mask  0x0000000F */

// Values of channel even generation
#define CTI_CROSSTRIGGEREVENT_CHANNEL3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINEN, TRIGINEN) + CTI_CHANNEL3)
#define CTI_CROSSTRIGGEREVENT_CHANNEL3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CROSSTRIGGEREVENT, CHANNEL3))  /*!< Mask  0x00000008 */

#define CTI_CROSSTRIGGEREVENT_CHANNEL2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINEN, TRIGINEN) + CTI_CHANNEL2)
#define CTI_CROSSTRIGGEREVENT_CHANNEL2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CROSSTRIGGEREVENT, CHANNEL2))  /*!< Mask  0x00000004 */

#define CTI_CROSSTRIGGEREVENT_CHANNEL1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINEN, TRIGINEN) + CTI_CHANNEL1)
#define CTI_CROSSTRIGGEREVENT_CHANNEL1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CROSSTRIGGEREVENT, CHANNEL1))  /*!< Mask  0x00000002 */

#define CTI_CROSSTRIGGEREVENT_CHANNEL0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CTIINEN, TRIGINEN) + CTI_CHANNEL0)
#define CTI_CROSSTRIGGEREVENT_CHANNEL0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CROSSTRIGGEREVENT, CHANNEL0))  /*!< Mask  0x00000001 */

// Values of integration mode clear bit
#define CTI_CROSSTRIGGEREVENT_DISABLESIGNAL  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_CROSSTRIGGEREVENT_ENABLESIGNAL   (0x1UL)  /*!< Value 0x00000001 */

/*!< Integration mode control register */
#define CTI_ITCTRL_IME_OFFSET  (0U)
#define CTI_ITCTRL_IME_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, ITCTRL, IME))  /*!< Mask  0x00000001 */

// Values of integration mode enable bit
#define CTI_INTEGRATIONMODE_DISABLE  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_INTEGRATIONMODE_ENABLE   (0x1UL)  /*!< Value 0x00000001 - enable debug agent to perform topology detection and system-on-chip (SoC) test software to perform integration testing */

/*!< Claim tag set register */
#define CTI_CLAIMSET_CLAIMSET_OFFSET  (0U)
#define CTI_CLAIMSET_CLAIMSET_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, CLAIMSET, CLAIMSET))  /*!< Mask  0x0000000F */

// Values of register bit enabling embedding of triggers in formatted trace
#define CTI_CLAIMSET_NONE       (0x0UL)  /*!< Value 0x00000000 */

// Values of claim tag bit
#define CTI_CLAIM_BIT3  (3U)
#define CTI_CLAIM_BIT2  (2U)
#define CTI_CLAIM_BIT1  (1U)
#define CTI_CLAIM_BIT0  (0U)

// Values of claim tag set register bits
#define CTI_CLAIMSET_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMSET, CLAIMSET) + CTI_CLAIM_BIT3)
#define CTI_CLAIMSET_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMSET, BIT3))  /*!< Mask  0x00000008 */

#define CTI_CLAIMSET_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMSET, CLAIMSET) + CTI_CLAIM_BIT2)
#define CTI_CLAIMSET_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMSET, BIT2))  /*!< Mask  0x00000004 */

#define CTI_CLAIMSET_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMSET, CLAIMSET) + CTI_CLAIM_BIT1)
#define CTI_CLAIMSET_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMSET, BIT1))  /*!< Mask  0x00000002 */

#define CTI_CLAIMSET_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMSET, CLAIMSET) + CTI_CLAIM_BIT0)
#define CTI_CLAIMSET_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMSET, BIT0))  /*!< Mask  0x00000001 */

/*!< Claim tag clear register */
#define CTI_CLAIMCLR_CLAIMCLR_OFFSET  (0U)
#define CTI_CLAIMCLR_CLAIMCLR_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, CLAIMCLR))  /*!< Mask  0x0000000F */

// Values of register bit enabling embedding of triggers in formatted trace
#define CTI_CLAIMCLR_NONE       (0x0UL)  /*!< Value 0x00000000 */

// Values of claim tag clear register bits
#define CTI_CLAIMCLR_BIT3_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, CLAIMCLR) + CTI_CLAIM_BIT3)
#define CTI_CLAIMCLR_BIT3_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, BIT3))  /*!< Mask  0x00000008 */

#define CTI_CLAIMCLR_BIT2_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, CLAIMCLR) + CTI_CLAIM_BIT2)
#define CTI_CLAIMCLR_BIT2_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, BIT2))  /*!< Mask  0x00000004 */

#define CTI_CLAIMCLR_BIT1_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, CLAIMCLR) + CTI_CLAIM_BIT1)
#define CTI_CLAIMCLR_BIT1_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, BIT1))  /*!< Mask  0x00000002 */

#define CTI_CLAIMCLR_BIT0_OFFSET  (REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, CLAIMCLR) + CTI_CLAIM_BIT0)
#define CTI_CLAIMCLR_BIT0_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, CLAIMCLR, BIT0))  /*!< Mask  0x00000001 */

/*!< CoreSight lock access register */
#define CTI_LAR_ACCESS_W_OFFSET  (0U)
#define CTI_LAR_ACCESS_W_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Mask  0xFFFFFFFF */
#define CTI_LAR_ACCESS_W_0       (0x00000001UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000001 */
#define CTI_LAR_ACCESS_W_1       (0x00000002UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000002 */
#define CTI_LAR_ACCESS_W_2       (0x00000004UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000004 */
#define CTI_LAR_ACCESS_W_3       (0x00000008UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000008 */
#define CTI_LAR_ACCESS_W_4       (0x00000010UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000010 */
#define CTI_LAR_ACCESS_W_5       (0x00000020UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000020 */
#define CTI_LAR_ACCESS_W_6       (0x00000040UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000040 */
#define CTI_LAR_ACCESS_W_7       (0x00000080UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000080 */
#define CTI_LAR_ACCESS_W_8       (0x00000100UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000100 */
#define CTI_LAR_ACCESS_W_9       (0x00000200UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000200 */
#define CTI_LAR_ACCESS_W_10      (0x00000400UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000400 */
#define CTI_LAR_ACCESS_W_11      (0x00000800UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00000800 */
#define CTI_LAR_ACCESS_W_12      (0x00001000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00001000 */
#define CTI_LAR_ACCESS_W_13      (0x00002000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00002000 */
#define CTI_LAR_ACCESS_W_14      (0x00004000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00004000 */
#define CTI_LAR_ACCESS_W_15      (0x00008000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00008000 */
#define CTI_LAR_ACCESS_W_16      (0x00010000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00010000 */
#define CTI_LAR_ACCESS_W_17      (0x00020000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00020000 */
#define CTI_LAR_ACCESS_W_18      (0x00040000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00040000 */
#define CTI_LAR_ACCESS_W_19      (0x00080000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00080000 */
#define CTI_LAR_ACCESS_W_20      (0x00100000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00100000 */
#define CTI_LAR_ACCESS_W_21      (0x00200000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00200000 */
#define CTI_LAR_ACCESS_W_22      (0x00400000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00400000 */
#define CTI_LAR_ACCESS_W_23      (0x00800000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x00800000 */
#define CTI_LAR_ACCESS_W_24      (0x01000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x01000000 */
#define CTI_LAR_ACCESS_W_25      (0x02000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x02000000 */
#define CTI_LAR_ACCESS_W_26      (0x04000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x04000000 */
#define CTI_LAR_ACCESS_W_27      (0x08000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x08000000 */
#define CTI_LAR_ACCESS_W_28      (0x10000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x10000000 */
#define CTI_LAR_ACCESS_W_29      (0x20000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x20000000 */
#define CTI_LAR_ACCESS_W_30      (0x40000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x40000000 */
#define CTI_LAR_ACCESS_W_31      (0x80000000UL << REGISTER_FIELD_OFFSET(CTI, LAR, ACCESS_W))  /*!< Value 0x80000000 */

// Values of integration mode enable bit
#define CTI_WRITEACCESS_ENABLE  (0xC5ACCE55UL)  /*!< Value 0xC5ACCE55 */

/*!< CoreSight lock status register */
#define CTI_LSR_LOCKTYPE_OFFSET  (2U)
#define CTI_LSR_LOCKTYPE_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, LSR, LOCKTYPE))  /*!< Mask  0x00000004 */

#define CTI_LSR_LOCKGRANT_OFFSET  (1U)
#define CTI_LSR_LOCKGRANT_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, LSR, LOCKGRANT))  /*!< Mask  0x00000002 */

#define CTI_LSR_LOCKEXIST_OFFSET  (0U)
#define CTI_LSR_LOCKEXIST_MASK    (0x1UL << REGISTER_FIELD_OFFSET(CTI, LSR, LOCKEXIST))  /*!< Mask  0x00000001 */

// Values of lock key size select bit
#define CTI_LOCKKEYSIZE_32BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of software lock status bit
#define CTI_SWLOCK_RW  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_SWLOCK_RO  (0x1UL)  /*!< Value 0x00000001 */

// Values of software lock implemented select bit
#define CTI_SWLOCK_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_SWLOCK_IMPLEMENTED     (0x1UL)  /*!< Value 0x00000001 */

/*!< Authentication status register */
#define CTI_AUTHSTAT_SNID_OFFSET   (6U)
#define CTI_AUTHSTAT_SNID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(CTI, AUTHSTAT, SNID))   /*!< Mask  0x000000C0 - security level for secure non-invasive debug */

#define CTI_AUTHSTAT_SID_OFFSET    (4U)
#define CTI_AUTHSTAT_SID_MASK      (0x3UL << REGISTER_FIELD_OFFSET(CTI, AUTHSTAT, SID))    /*!< Mask  0x00000030 - security level for secure invasive debug */

#define CTI_AUTHSTAT_NSNID_OFFSET  (2U)
#define CTI_AUTHSTAT_NSNID_MASK    (0x3UL << REGISTER_FIELD_OFFSET(CTI, AUTHSTAT, NSNID))  /*!< Mask  0x0000000C - security level for non secure non-invasive debug */

#define CTI_AUTHSTAT_NSID_OFFSET   (0U)
#define CTI_AUTHSTAT_NSID_MASK     (0x3UL << REGISTER_FIELD_OFFSET(CTI, AUTHSTAT, NSID))   /*!< Mask  0x00000003 - security level for non secure invasive debug */

// Values of authentification signal status register
#define CTI_AUTHSIGNAL_NOTIMPLEMENTED  (0x0UL)  /*!< Value 0x00000000 */
#define CTI_AUTHSIGNAL_DISABLED        (0x2UL)  /*!< Value 0x00000002 */
#define CTI_AUTHSIGNAL_ENABLED         (0x3UL)  /*!< Value 0x00000003 */

/*!< Device ID register */
#define CTI_DEVID_NUMCH_OFFSET      (16U)
#define CTI_DEVID_NUMCH_MASK        (0xFUL << REGISTER_FIELD_OFFSET(CTI, DEVID, NUMCH))       /*!< Mask  0x000F0000 */

#define CTI_DEVID_NUMTRIG_OFFSET    (8U)
#define CTI_DEVID_NUMTRIG_MASK      (0xFFUL << REGISTER_FIELD_OFFSET(CTI, DEVID, NUMTRIG))    /*!< Mask  0x0000FF00 */

#define CTI_DEVID_EXTMUXNUM_OFFSET  (0U)
#define CTI_DEVID_EXTMUXNUM_MASK    (0x1FUL << REGISTER_FIELD_OFFSET(CTI, DEVID, EXTMUXNUM))  /*!< Mask  0x0000001F */

// Values of the register storing the number of available embedded cross trigger (ECT) channels
#define CTI_ECTCHANNELS_NONE  (0x00UL)  /*!< Value 0x00000000 */
#define CTI_ECTCHANNELS_1     (0x01UL)  /*!< Value 0x00000001 */
#define CTI_ECTCHANNELS_2     (0x02UL)  /*!< Value 0x00000002 */
#define CTI_ECTCHANNELS_3     (0x03UL)  /*!< Value 0x00000003 */
#define CTI_ECTCHANNELS_4     (0x04UL)  /*!< Value 0x00000004 */
#define CTI_ECTCHANNELS_5     (0x05UL)  /*!< Value 0x00000005 */
#define CTI_ECTCHANNELS_6     (0x06UL)  /*!< Value 0x00000006 */
#define CTI_ECTCHANNELS_7     (0x07UL)  /*!< Value 0x00000007 */
#define CTI_ECTCHANNELS_8     (0x08UL)  /*!< Value 0x00000008 */
#define CTI_ECTCHANNELS_9     (0x09UL)  /*!< Value 0x00000009 */
#define CTI_ECTCHANNELS_10    (0x0AUL)  /*!< Value 0x0000000A */
#define CTI_ECTCHANNELS_11    (0x0BUL)  /*!< Value 0x0000000B */
#define CTI_ECTCHANNELS_12    (0x0CUL)  /*!< Value 0x0000000C */
#define CTI_ECTCHANNELS_13    (0x0DUL)  /*!< Value 0x0000000D */
#define CTI_ECTCHANNELS_14    (0x0EUL)  /*!< Value 0x0000000E */
#define CTI_ECTCHANNELS_15    (0x0FUL)  /*!< Value 0x0000000F */

// Values of the register storing the number of available embedded cross trigger (ECT) triggers
#define CTI_ECTTRIGGERS_NONE  (0x00UL)  /*!< Value 0x00000000 */
#define CTI_ECTTRIGGERS_1     (0x01UL)  /*!< Value 0x00000001 */
#define CTI_ECTTRIGGERS_2     (0x02UL)  /*!< Value 0x00000002 */
#define CTI_ECTTRIGGERS_3     (0x03UL)  /*!< Value 0x00000003 */
#define CTI_ECTTRIGGERS_4     (0x04UL)  /*!< Value 0x00000004 */
#define CTI_ECTTRIGGERS_5     (0x05UL)  /*!< Value 0x00000005 */
#define CTI_ECTTRIGGERS_6     (0x06UL)  /*!< Value 0x00000006 */
#define CTI_ECTTRIGGERS_7     (0x07UL)  /*!< Value 0x00000007 */
#define CTI_ECTTRIGGERS_8     (0x08UL)  /*!< Value 0x00000008 */
#define CTI_ECTTRIGGERS_9     (0x09UL)  /*!< Value 0x00000009 */
#define CTI_ECTTRIGGERS_10    (0x0AUL)  /*!< Value 0x0000000A */
#define CTI_ECTTRIGGERS_11    (0x0BUL)  /*!< Value 0x0000000B */
#define CTI_ECTTRIGGERS_12    (0x0CUL)  /*!< Value 0x0000000C */
#define CTI_ECTTRIGGERS_13    (0x0DUL)  /*!< Value 0x0000000D */
#define CTI_ECTTRIGGERS_14    (0x0EUL)  /*!< Value 0x0000000E */
#define CTI_ECTTRIGGERS_15    (0x0FUL)  /*!< Value 0x0000000F */
#define CTI_ECTTRIGGERS_16    (0x10UL)  /*!< Value 0x00000010 */
#define CTI_ECTTRIGGERS_17    (0x11UL)  /*!< Value 0x00000011 */
#define CTI_ECTTRIGGERS_18    (0x12UL)  /*!< Value 0x00000012 */
#define CTI_ECTTRIGGERS_19    (0x13UL)  /*!< Value 0x00000013 */
#define CTI_ECTTRIGGERS_20    (0x14UL)  /*!< Value 0x00000014 */
#define CTI_ECTTRIGGERS_21    (0x15UL)  /*!< Value 0x00000015 */
#define CTI_ECTTRIGGERS_22    (0x16UL)  /*!< Value 0x00000016 */
#define CTI_ECTTRIGGERS_23    (0x17UL)  /*!< Value 0x00000017 */
#define CTI_ECTTRIGGERS_24    (0x18UL)  /*!< Value 0x00000018 */
#define CTI_ECTTRIGGERS_25    (0x19UL)  /*!< Value 0x00000019 */
#define CTI_ECTTRIGGERS_26    (0x1AUL)  /*!< Value 0x0000001A */
#define CTI_ECTTRIGGERS_27    (0x1BUL)  /*!< Value 0x0000001B */
#define CTI_ECTTRIGGERS_28    (0x1CUL)  /*!< Value 0x0000001C */
#define CTI_ECTTRIGGERS_29    (0x1DUL)  /*!< Value 0x0000001D */
#define CTI_ECTTRIGGERS_30    (0x1EUL)  /*!< Value 0x0000001E */
#define CTI_ECTTRIGGERS_31    (0x1FUL)  /*!< Value 0x0000001F */
#define CTI_ECTTRIGGERS_32    (0x20UL)  /*!< Value 0x00000020 */
#define CTI_ECTTRIGGERS_33    (0x21UL)  /*!< Value 0x00000021 */
#define CTI_ECTTRIGGERS_34    (0x22UL)  /*!< Value 0x00000022 */
#define CTI_ECTTRIGGERS_35    (0x23UL)  /*!< Value 0x00000023 */
#define CTI_ECTTRIGGERS_36    (0x24UL)  /*!< Value 0x00000024 */
#define CTI_ECTTRIGGERS_37    (0x25UL)  /*!< Value 0x00000025 */
#define CTI_ECTTRIGGERS_38    (0x26UL)  /*!< Value 0x00000026 */
#define CTI_ECTTRIGGERS_39    (0x27UL)  /*!< Value 0x00000027 */
#define CTI_ECTTRIGGERS_40    (0x28UL)  /*!< Value 0x00000028 */
#define CTI_ECTTRIGGERS_41    (0x29UL)  /*!< Value 0x00000029 */
#define CTI_ECTTRIGGERS_42    (0x2AUL)  /*!< Value 0x0000002A */
#define CTI_ECTTRIGGERS_43    (0x2BUL)  /*!< Value 0x0000002B */
#define CTI_ECTTRIGGERS_44    (0x2CUL)  /*!< Value 0x0000002C */
#define CTI_ECTTRIGGERS_45    (0x2DUL)  /*!< Value 0x0000002D */
#define CTI_ECTTRIGGERS_46    (0x2EUL)  /*!< Value 0x0000002E */
#define CTI_ECTTRIGGERS_47    (0x2FUL)  /*!< Value 0x0000002F */
#define CTI_ECTTRIGGERS_48    (0x30UL)  /*!< Value 0x00000030 */
#define CTI_ECTTRIGGERS_49    (0x31UL)  /*!< Value 0x00000031 */
#define CTI_ECTTRIGGERS_50    (0x32UL)  /*!< Value 0x00000032 */
#define CTI_ECTTRIGGERS_51    (0x33UL)  /*!< Value 0x00000033 */
#define CTI_ECTTRIGGERS_52    (0x34UL)  /*!< Value 0x00000034 */
#define CTI_ECTTRIGGERS_53    (0x35UL)  /*!< Value 0x00000035 */
#define CTI_ECTTRIGGERS_54    (0x36UL)  /*!< Value 0x00000036 */
#define CTI_ECTTRIGGERS_55    (0x37UL)  /*!< Value 0x00000037 */
#define CTI_ECTTRIGGERS_56    (0x38UL)  /*!< Value 0x00000038 */
#define CTI_ECTTRIGGERS_57    (0x39UL)  /*!< Value 0x00000039 */
#define CTI_ECTTRIGGERS_58    (0x3AUL)  /*!< Value 0x0000003A */
#define CTI_ECTTRIGGERS_59    (0x3BUL)  /*!< Value 0x0000003B */
#define CTI_ECTTRIGGERS_60    (0x3CUL)  /*!< Value 0x0000003C */
#define CTI_ECTTRIGGERS_61    (0x3DUL)  /*!< Value 0x0000003D */
#define CTI_ECTTRIGGERS_62    (0x3EUL)  /*!< Value 0x0000003E */
#define CTI_ECTTRIGGERS_63    (0x3FUL)  /*!< Value 0x0000003F */
#define CTI_ECTTRIGGERS_64    (0x40UL)  /*!< Value 0x00000040 */
#define CTI_ECTTRIGGERS_65    (0x41UL)  /*!< Value 0x00000041 */
#define CTI_ECTTRIGGERS_66    (0x42UL)  /*!< Value 0x00000042 */
#define CTI_ECTTRIGGERS_67    (0x43UL)  /*!< Value 0x00000043 */
#define CTI_ECTTRIGGERS_68    (0x44UL)  /*!< Value 0x00000044 */
#define CTI_ECTTRIGGERS_69    (0x45UL)  /*!< Value 0x00000045 */
#define CTI_ECTTRIGGERS_70    (0x46UL)  /*!< Value 0x00000046 */
#define CTI_ECTTRIGGERS_71    (0x47UL)  /*!< Value 0x00000047 */
#define CTI_ECTTRIGGERS_72    (0x48UL)  /*!< Value 0x00000048 */
#define CTI_ECTTRIGGERS_73    (0x49UL)  /*!< Value 0x00000049 */
#define CTI_ECTTRIGGERS_74    (0x4AUL)  /*!< Value 0x0000004A */
#define CTI_ECTTRIGGERS_75    (0x4BUL)  /*!< Value 0x0000004B */
#define CTI_ECTTRIGGERS_76    (0x4CUL)  /*!< Value 0x0000004C */
#define CTI_ECTTRIGGERS_77    (0x4DUL)  /*!< Value 0x0000004D */
#define CTI_ECTTRIGGERS_78    (0x4EUL)  /*!< Value 0x0000004E */
#define CTI_ECTTRIGGERS_79    (0x4FUL)  /*!< Value 0x0000004F */
#define CTI_ECTTRIGGERS_80    (0x50UL)  /*!< Value 0x00000050 */
#define CTI_ECTTRIGGERS_81    (0x51UL)  /*!< Value 0x00000051 */
#define CTI_ECTTRIGGERS_82    (0x52UL)  /*!< Value 0x00000052 */
#define CTI_ECTTRIGGERS_83    (0x53UL)  /*!< Value 0x00000053 */
#define CTI_ECTTRIGGERS_84    (0x54UL)  /*!< Value 0x00000054 */
#define CTI_ECTTRIGGERS_85    (0x55UL)  /*!< Value 0x00000055 */
#define CTI_ECTTRIGGERS_86    (0x56UL)  /*!< Value 0x00000056 */
#define CTI_ECTTRIGGERS_87    (0x57UL)  /*!< Value 0x00000057 */
#define CTI_ECTTRIGGERS_88    (0x58UL)  /*!< Value 0x00000058 */
#define CTI_ECTTRIGGERS_89    (0x59UL)  /*!< Value 0x00000059 */
#define CTI_ECTTRIGGERS_90    (0x5AUL)  /*!< Value 0x0000005A */
#define CTI_ECTTRIGGERS_91    (0x5BUL)  /*!< Value 0x0000005B */
#define CTI_ECTTRIGGERS_92    (0x5CUL)  /*!< Value 0x0000005C */
#define CTI_ECTTRIGGERS_93    (0x5DUL)  /*!< Value 0x0000005D */
#define CTI_ECTTRIGGERS_94    (0x5EUL)  /*!< Value 0x0000005E */
#define CTI_ECTTRIGGERS_95    (0x5FUL)  /*!< Value 0x0000005F */
#define CTI_ECTTRIGGERS_96    (0x60UL)  /*!< Value 0x00000060 */
#define CTI_ECTTRIGGERS_97    (0x61UL)  /*!< Value 0x00000061 */
#define CTI_ECTTRIGGERS_98    (0x62UL)  /*!< Value 0x00000062 */
#define CTI_ECTTRIGGERS_99    (0x63UL)  /*!< Value 0x00000063 */
#define CTI_ECTTRIGGERS_100   (0x64UL)  /*!< Value 0x00000064 */
#define CTI_ECTTRIGGERS_101   (0x65UL)  /*!< Value 0x00000065 */
#define CTI_ECTTRIGGERS_102   (0x66UL)  /*!< Value 0x00000066 */
#define CTI_ECTTRIGGERS_103   (0x67UL)  /*!< Value 0x00000067 */
#define CTI_ECTTRIGGERS_104   (0x68UL)  /*!< Value 0x00000068 */
#define CTI_ECTTRIGGERS_105   (0x69UL)  /*!< Value 0x00000069 */
#define CTI_ECTTRIGGERS_106   (0x6AUL)  /*!< Value 0x0000006A */
#define CTI_ECTTRIGGERS_107   (0x6BUL)  /*!< Value 0x0000006B */
#define CTI_ECTTRIGGERS_108   (0x6CUL)  /*!< Value 0x0000006C */
#define CTI_ECTTRIGGERS_109   (0x6DUL)  /*!< Value 0x0000006D */
#define CTI_ECTTRIGGERS_110   (0x6EUL)  /*!< Value 0x0000006E */
#define CTI_ECTTRIGGERS_111   (0x6FUL)  /*!< Value 0x0000006F */
#define CTI_ECTTRIGGERS_112   (0x70UL)  /*!< Value 0x00000070 */
#define CTI_ECTTRIGGERS_113   (0x71UL)  /*!< Value 0x00000071 */
#define CTI_ECTTRIGGERS_114   (0x72UL)  /*!< Value 0x00000072 */
#define CTI_ECTTRIGGERS_115   (0x73UL)  /*!< Value 0x00000073 */
#define CTI_ECTTRIGGERS_116   (0x74UL)  /*!< Value 0x00000074 */
#define CTI_ECTTRIGGERS_117   (0x75UL)  /*!< Value 0x00000075 */
#define CTI_ECTTRIGGERS_118   (0x76UL)  /*!< Value 0x00000076 */
#define CTI_ECTTRIGGERS_119   (0x77UL)  /*!< Value 0x00000077 */
#define CTI_ECTTRIGGERS_120   (0x78UL)  /*!< Value 0x00000078 */
#define CTI_ECTTRIGGERS_121   (0x79UL)  /*!< Value 0x00000079 */
#define CTI_ECTTRIGGERS_122   (0x7AUL)  /*!< Value 0x0000007A */
#define CTI_ECTTRIGGERS_123   (0x7BUL)  /*!< Value 0x0000007B */
#define CTI_ECTTRIGGERS_124   (0x7CUL)  /*!< Value 0x0000007C */
#define CTI_ECTTRIGGERS_125   (0x7DUL)  /*!< Value 0x0000007D */
#define CTI_ECTTRIGGERS_126   (0x7EUL)  /*!< Value 0x0000007E */
#define CTI_ECTTRIGGERS_127   (0x7FUL)  /*!< Value 0x0000007F */
#define CTI_ECTTRIGGERS_128   (0x80UL)  /*!< Value 0x00000080 */
#define CTI_ECTTRIGGERS_129   (0x81UL)  /*!< Value 0x00000081 */
#define CTI_ECTTRIGGERS_130   (0x82UL)  /*!< Value 0x00000082 */
#define CTI_ECTTRIGGERS_131   (0x83UL)  /*!< Value 0x00000083 */
#define CTI_ECTTRIGGERS_132   (0x84UL)  /*!< Value 0x00000084 */
#define CTI_ECTTRIGGERS_133   (0x85UL)  /*!< Value 0x00000085 */
#define CTI_ECTTRIGGERS_134   (0x86UL)  /*!< Value 0x00000086 */
#define CTI_ECTTRIGGERS_135   (0x87UL)  /*!< Value 0x00000087 */
#define CTI_ECTTRIGGERS_136   (0x88UL)  /*!< Value 0x00000088 */
#define CTI_ECTTRIGGERS_137   (0x89UL)  /*!< Value 0x00000089 */
#define CTI_ECTTRIGGERS_138   (0x8AUL)  /*!< Value 0x0000008A */
#define CTI_ECTTRIGGERS_139   (0x8BUL)  /*!< Value 0x0000008B */
#define CTI_ECTTRIGGERS_140   (0x8CUL)  /*!< Value 0x0000008C */
#define CTI_ECTTRIGGERS_141   (0x8DUL)  /*!< Value 0x0000008D */
#define CTI_ECTTRIGGERS_142   (0x8EUL)  /*!< Value 0x0000008E */
#define CTI_ECTTRIGGERS_143   (0x8FUL)  /*!< Value 0x0000008F */
#define CTI_ECTTRIGGERS_144   (0x90UL)  /*!< Value 0x00000090 */
#define CTI_ECTTRIGGERS_145   (0x91UL)  /*!< Value 0x00000091 */
#define CTI_ECTTRIGGERS_146   (0x92UL)  /*!< Value 0x00000092 */
#define CTI_ECTTRIGGERS_147   (0x93UL)  /*!< Value 0x00000093 */
#define CTI_ECTTRIGGERS_148   (0x94UL)  /*!< Value 0x00000094 */
#define CTI_ECTTRIGGERS_149   (0x95UL)  /*!< Value 0x00000095 */
#define CTI_ECTTRIGGERS_150   (0x96UL)  /*!< Value 0x00000096 */
#define CTI_ECTTRIGGERS_151   (0x97UL)  /*!< Value 0x00000097 */
#define CTI_ECTTRIGGERS_152   (0x98UL)  /*!< Value 0x00000098 */
#define CTI_ECTTRIGGERS_153   (0x99UL)  /*!< Value 0x00000099 */
#define CTI_ECTTRIGGERS_154   (0x9AUL)  /*!< Value 0x0000009A */
#define CTI_ECTTRIGGERS_155   (0x9BUL)  /*!< Value 0x0000009B */
#define CTI_ECTTRIGGERS_156   (0x9CUL)  /*!< Value 0x0000009C */
#define CTI_ECTTRIGGERS_157   (0x9DUL)  /*!< Value 0x0000009D */
#define CTI_ECTTRIGGERS_158   (0x9EUL)  /*!< Value 0x0000009E */
#define CTI_ECTTRIGGERS_159   (0x9FUL)  /*!< Value 0x0000009F */
#define CTI_ECTTRIGGERS_160   (0xA0UL)  /*!< Value 0x000000A0 */
#define CTI_ECTTRIGGERS_161   (0xA1UL)  /*!< Value 0x000000A1 */
#define CTI_ECTTRIGGERS_162   (0xA2UL)  /*!< Value 0x000000A2 */
#define CTI_ECTTRIGGERS_163   (0xA3UL)  /*!< Value 0x000000A3 */
#define CTI_ECTTRIGGERS_164   (0xA4UL)  /*!< Value 0x000000A4 */
#define CTI_ECTTRIGGERS_165   (0xA5UL)  /*!< Value 0x000000A5 */
#define CTI_ECTTRIGGERS_166   (0xA6UL)  /*!< Value 0x000000A6 */
#define CTI_ECTTRIGGERS_167   (0xA7UL)  /*!< Value 0x000000A7 */
#define CTI_ECTTRIGGERS_168   (0xA8UL)  /*!< Value 0x000000A8 */
#define CTI_ECTTRIGGERS_169   (0xA9UL)  /*!< Value 0x000000A9 */
#define CTI_ECTTRIGGERS_170   (0xAAUL)  /*!< Value 0x000000AA */
#define CTI_ECTTRIGGERS_171   (0xABUL)  /*!< Value 0x000000AB */
#define CTI_ECTTRIGGERS_172   (0xACUL)  /*!< Value 0x000000AC */
#define CTI_ECTTRIGGERS_173   (0xADUL)  /*!< Value 0x000000AD */
#define CTI_ECTTRIGGERS_174   (0xAEUL)  /*!< Value 0x000000AE */
#define CTI_ECTTRIGGERS_175   (0xAFUL)  /*!< Value 0x000000AF */
#define CTI_ECTTRIGGERS_176   (0xB0UL)  /*!< Value 0x000000B0 */
#define CTI_ECTTRIGGERS_177   (0xB1UL)  /*!< Value 0x000000B1 */
#define CTI_ECTTRIGGERS_178   (0xB2UL)  /*!< Value 0x000000B2 */
#define CTI_ECTTRIGGERS_179   (0xB3UL)  /*!< Value 0x000000B3 */
#define CTI_ECTTRIGGERS_180   (0xB4UL)  /*!< Value 0x000000B4 */
#define CTI_ECTTRIGGERS_181   (0xB5UL)  /*!< Value 0x000000B5 */
#define CTI_ECTTRIGGERS_182   (0xB6UL)  /*!< Value 0x000000B6 */
#define CTI_ECTTRIGGERS_183   (0xB7UL)  /*!< Value 0x000000B7 */
#define CTI_ECTTRIGGERS_184   (0xB8UL)  /*!< Value 0x000000B8 */
#define CTI_ECTTRIGGERS_185   (0xB9UL)  /*!< Value 0x000000B9 */
#define CTI_ECTTRIGGERS_186   (0xBAUL)  /*!< Value 0x000000BA */
#define CTI_ECTTRIGGERS_187   (0xBBUL)  /*!< Value 0x000000BB */
#define CTI_ECTTRIGGERS_188   (0xBCUL)  /*!< Value 0x000000BC */
#define CTI_ECTTRIGGERS_189   (0xBDUL)  /*!< Value 0x000000BD */
#define CTI_ECTTRIGGERS_190   (0xBEUL)  /*!< Value 0x000000BE */
#define CTI_ECTTRIGGERS_191   (0xBFUL)  /*!< Value 0x000000BF */
#define CTI_ECTTRIGGERS_192   (0xC0UL)  /*!< Value 0x000000C0 */
#define CTI_ECTTRIGGERS_193   (0xC1UL)  /*!< Value 0x000000C1 */
#define CTI_ECTTRIGGERS_194   (0xC2UL)  /*!< Value 0x000000C2 */
#define CTI_ECTTRIGGERS_195   (0xC3UL)  /*!< Value 0x000000C3 */
#define CTI_ECTTRIGGERS_196   (0xC4UL)  /*!< Value 0x000000C4 */
#define CTI_ECTTRIGGERS_197   (0xC5UL)  /*!< Value 0x000000C5 */
#define CTI_ECTTRIGGERS_198   (0xC6UL)  /*!< Value 0x000000C6 */
#define CTI_ECTTRIGGERS_199   (0xC7UL)  /*!< Value 0x000000C7 */
#define CTI_ECTTRIGGERS_200   (0xC8UL)  /*!< Value 0x000000C8 */
#define CTI_ECTTRIGGERS_201   (0xC9UL)  /*!< Value 0x000000C9 */
#define CTI_ECTTRIGGERS_202   (0xCAUL)  /*!< Value 0x000000CA */
#define CTI_ECTTRIGGERS_203   (0xCBUL)  /*!< Value 0x000000CB */
#define CTI_ECTTRIGGERS_204   (0xCCUL)  /*!< Value 0x000000CC */
#define CTI_ECTTRIGGERS_205   (0xCDUL)  /*!< Value 0x000000CD */
#define CTI_ECTTRIGGERS_206   (0xCEUL)  /*!< Value 0x000000CE */
#define CTI_ECTTRIGGERS_207   (0xCFUL)  /*!< Value 0x000000CF */
#define CTI_ECTTRIGGERS_208   (0xD0UL)  /*!< Value 0x000000D0 */
#define CTI_ECTTRIGGERS_209   (0xD1UL)  /*!< Value 0x000000D1 */
#define CTI_ECTTRIGGERS_210   (0xD2UL)  /*!< Value 0x000000D2 */
#define CTI_ECTTRIGGERS_211   (0xD3UL)  /*!< Value 0x000000D3 */
#define CTI_ECTTRIGGERS_212   (0xD4UL)  /*!< Value 0x000000D4 */
#define CTI_ECTTRIGGERS_213   (0xD5UL)  /*!< Value 0x000000D5 */
#define CTI_ECTTRIGGERS_214   (0xD6UL)  /*!< Value 0x000000D6 */
#define CTI_ECTTRIGGERS_215   (0xD7UL)  /*!< Value 0x000000D7 */
#define CTI_ECTTRIGGERS_216   (0xD8UL)  /*!< Value 0x000000D8 */
#define CTI_ECTTRIGGERS_217   (0xD9UL)  /*!< Value 0x000000D9 */
#define CTI_ECTTRIGGERS_218   (0xDAUL)  /*!< Value 0x000000DA */
#define CTI_ECTTRIGGERS_219   (0xDBUL)  /*!< Value 0x000000DB */
#define CTI_ECTTRIGGERS_220   (0xDCUL)  /*!< Value 0x000000DC */
#define CTI_ECTTRIGGERS_221   (0xDDUL)  /*!< Value 0x000000DD */
#define CTI_ECTTRIGGERS_222   (0xDEUL)  /*!< Value 0x000000DE */
#define CTI_ECTTRIGGERS_223   (0xDFUL)  /*!< Value 0x000000DF */
#define CTI_ECTTRIGGERS_224   (0xE0UL)  /*!< Value 0x000000E0 */
#define CTI_ECTTRIGGERS_225   (0xE1UL)  /*!< Value 0x000000E1 */
#define CTI_ECTTRIGGERS_226   (0xE2UL)  /*!< Value 0x000000E2 */
#define CTI_ECTTRIGGERS_227   (0xE3UL)  /*!< Value 0x000000E3 */
#define CTI_ECTTRIGGERS_228   (0xE4UL)  /*!< Value 0x000000E4 */
#define CTI_ECTTRIGGERS_229   (0xE5UL)  /*!< Value 0x000000E5 */
#define CTI_ECTTRIGGERS_230   (0xE6UL)  /*!< Value 0x000000E6 */
#define CTI_ECTTRIGGERS_231   (0xE7UL)  /*!< Value 0x000000E7 */
#define CTI_ECTTRIGGERS_232   (0xE8UL)  /*!< Value 0x000000E8 */
#define CTI_ECTTRIGGERS_233   (0xE9UL)  /*!< Value 0x000000E9 */
#define CTI_ECTTRIGGERS_234   (0xEAUL)  /*!< Value 0x000000EA */
#define CTI_ECTTRIGGERS_235   (0xEBUL)  /*!< Value 0x000000EB */
#define CTI_ECTTRIGGERS_236   (0xECUL)  /*!< Value 0x000000EC */
#define CTI_ECTTRIGGERS_237   (0xEDUL)  /*!< Value 0x000000ED */
#define CTI_ECTTRIGGERS_238   (0xEEUL)  /*!< Value 0x000000EE */
#define CTI_ECTTRIGGERS_239   (0xEFUL)  /*!< Value 0x000000EF */
#define CTI_ECTTRIGGERS_240   (0xF0UL)  /*!< Value 0x000000F0 */
#define CTI_ECTTRIGGERS_241   (0xF1UL)  /*!< Value 0x000000F1 */
#define CTI_ECTTRIGGERS_242   (0xF2UL)  /*!< Value 0x000000F2 */
#define CTI_ECTTRIGGERS_243   (0xF3UL)  /*!< Value 0x000000F3 */
#define CTI_ECTTRIGGERS_244   (0xF4UL)  /*!< Value 0x000000F4 */
#define CTI_ECTTRIGGERS_245   (0xF5UL)  /*!< Value 0x000000F5 */
#define CTI_ECTTRIGGERS_246   (0xF6UL)  /*!< Value 0x000000F6 */
#define CTI_ECTTRIGGERS_247   (0xF7UL)  /*!< Value 0x000000F7 */
#define CTI_ECTTRIGGERS_248   (0xF8UL)  /*!< Value 0x000000F8 */
#define CTI_ECTTRIGGERS_249   (0xF9UL)  /*!< Value 0x000000F9 */
#define CTI_ECTTRIGGERS_250   (0xFAUL)  /*!< Value 0x000000FA */
#define CTI_ECTTRIGGERS_251   (0xFBUL)  /*!< Value 0x000000FB */
#define CTI_ECTTRIGGERS_252   (0xFCUL)  /*!< Value 0x000000FC */
#define CTI_ECTTRIGGERS_253   (0xFDUL)  /*!< Value 0x000000FD */
#define CTI_ECTTRIGGERS_254   (0xFEUL)  /*!< Value 0x000000FE */
#define CTI_ECTTRIGGERS_255   (0xFFUL)  /*!< Value 0x000000FF */

// Values of the register storing the number of trigger input/output multiplexers
#define CTI_TRIGGERINPUTOUTPUTMUX_NONE  (0x00UL)  /*!< Value 0x00000000 */
#define CTI_TRIGGERINPUTOUTPUTMUX_1     (0x01UL)  /*!< Value 0x00000001 */
#define CTI_TRIGGERINPUTOUTPUTMUX_2     (0x02UL)  /*!< Value 0x00000002 */
#define CTI_TRIGGERINPUTOUTPUTMUX_3     (0x03UL)  /*!< Value 0x00000003 */
#define CTI_TRIGGERINPUTOUTPUTMUX_4     (0x04UL)  /*!< Value 0x00000004 */
#define CTI_TRIGGERINPUTOUTPUTMUX_5     (0x05UL)  /*!< Value 0x00000005 */
#define CTI_TRIGGERINPUTOUTPUTMUX_6     (0x06UL)  /*!< Value 0x00000006 */
#define CTI_TRIGGERINPUTOUTPUTMUX_7     (0x07UL)  /*!< Value 0x00000007 */
#define CTI_TRIGGERINPUTOUTPUTMUX_8     (0x08UL)  /*!< Value 0x00000008 */
#define CTI_TRIGGERINPUTOUTPUTMUX_9     (0x09UL)  /*!< Value 0x00000009 */
#define CTI_TRIGGERINPUTOUTPUTMUX_10    (0x0AUL)  /*!< Value 0x0000000A */
#define CTI_TRIGGERINPUTOUTPUTMUX_11    (0x0BUL)  /*!< Value 0x0000000B */
#define CTI_TRIGGERINPUTOUTPUTMUX_12    (0x0CUL)  /*!< Value 0x0000000C */
#define CTI_TRIGGERINPUTOUTPUTMUX_13    (0x0DUL)  /*!< Value 0x0000000D */
#define CTI_TRIGGERINPUTOUTPUTMUX_14    (0x0EUL)  /*!< Value 0x0000000E */
#define CTI_TRIGGERINPUTOUTPUTMUX_15    (0x0FUL)  /*!< Value 0x0000000F */
#define CTI_TRIGGERINPUTOUTPUTMUX_16    (0x10UL)  /*!< Value 0x00000010 */
#define CTI_TRIGGERINPUTOUTPUTMUX_17    (0x11UL)  /*!< Value 0x00000011 */
#define CTI_TRIGGERINPUTOUTPUTMUX_18    (0x12UL)  /*!< Value 0x00000012 */
#define CTI_TRIGGERINPUTOUTPUTMUX_19    (0x13UL)  /*!< Value 0x00000013 */
#define CTI_TRIGGERINPUTOUTPUTMUX_20    (0x14UL)  /*!< Value 0x00000014 */
#define CTI_TRIGGERINPUTOUTPUTMUX_21    (0x15UL)  /*!< Value 0x00000015 */
#define CTI_TRIGGERINPUTOUTPUTMUX_22    (0x16UL)  /*!< Value 0x00000016 */
#define CTI_TRIGGERINPUTOUTPUTMUX_23    (0x17UL)  /*!< Value 0x00000017 */
#define CTI_TRIGGERINPUTOUTPUTMUX_24    (0x18UL)  /*!< Value 0x00000018 */
#define CTI_TRIGGERINPUTOUTPUTMUX_25    (0x19UL)  /*!< Value 0x00000019 */
#define CTI_TRIGGERINPUTOUTPUTMUX_26    (0x1AUL)  /*!< Value 0x0000001A */
#define CTI_TRIGGERINPUTOUTPUTMUX_27    (0x1BUL)  /*!< Value 0x0000001B */
#define CTI_TRIGGERINPUTOUTPUTMUX_28    (0x1CUL)  /*!< Value 0x0000001C */
#define CTI_TRIGGERINPUTOUTPUTMUX_29    (0x1DUL)  /*!< Value 0x0000001D */
#define CTI_TRIGGERINPUTOUTPUTMUX_30    (0x1EUL)  /*!< Value 0x0000001E */
#define CTI_TRIGGERINPUTOUTPUTMUX_31    (0x1FUL)  /*!< Value 0x0000001F */

/*!< Device type register */
#define CTI_DEVTYPE_SUBTYPE_OFFSET    (4U)
#define CTI_DEVTYPE_SUBTYPE_MASK      (0xFUL << REGISTER_FIELD_OFFSET(CTI, DEVTYPE, SUBTYPE))    /*!< Mask  0x000000F0 */

#define CTI_DEVTYPE_MAJORTYPE_OFFSET  (0U)
#define CTI_DEVTYPE_MAJORTYPE_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, DEVTYPE, MAJORTYPE))  /*!< Mask  0x0000000F */

// Values of the sub-classification register
#define CTI_SUBTYPE_CROSSTRIGGERING  (0x1UL)  /*!< Value 0x00000001 */

// Values of the major classification register
#define CTI_MAJORTYPE_CORESIGHTCOMPONENTCONTROL  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 4 register */
#define CTI_PIDR4_4KCOUNT_OFFSET    (4U)
#define CTI_PIDR4_4KCOUNT_MASK      (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR4, 4KCOUNT))    /*!< Mask  0x000000F0 */
#define CTI_PIDR4_4KCOUNT_0         (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, 4KCOUNT))    /*!< Value 0x00000010 */
#define CTI_PIDR4_4KCOUNT_1         (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, 4KCOUNT))    /*!< Value 0x00000020 */
#define CTI_PIDR4_4KCOUNT_2         (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, 4KCOUNT))    /*!< Value 0x00000040 */
#define CTI_PIDR4_4KCOUNT_3         (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, 4KCOUNT))    /*!< Value 0x00000080 */

#define CTI_PIDR4_JEP106CON_OFFSET  (0U)
#define CTI_PIDR4_JEP106CON_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR4, JEP106CON))  /*!< Mask  0x0000000F */
#define CTI_PIDR4_JEP106CON_0       (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, JEP106CON))  /*!< Value 0x00000001 */
#define CTI_PIDR4_JEP106CON_1       (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, JEP106CON))  /*!< Value 0x00000002 */
#define CTI_PIDR4_JEP106CON_2       (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, JEP106CON))  /*!< Value 0x00000004 */
#define CTI_PIDR4_JEP106CON_3       (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR4, JEP106CON))  /*!< Value 0x00000008 */

// Values of square root of the number of 4K blocks register
#define CTI_4KCOUNT_1      (0x0UL)  /*!< Value 0x00000000 */
#define CTI_4KCOUNT_2      (0x1UL)  /*!< Value 0x00000001 */
#define CTI_4KCOUNT_4      (0x2UL)  /*!< Value 0x00000002 */
#define CTI_4KCOUNT_8      (0x3UL)  /*!< Value 0x00000003 */
#define CTI_4KCOUNT_16     (0x4UL)  /*!< Value 0x00000004 */
#define CTI_4KCOUNT_32     (0x5UL)  /*!< Value 0x00000005 */
#define CTI_4KCOUNT_64     (0x6UL)  /*!< Value 0x00000006 */
#define CTI_4KCOUNT_128    (0x7UL)  /*!< Value 0x00000007 */
#define CTI_4KCOUNT_256    (0x8UL)  /*!< Value 0x00000008 */
#define CTI_4KCOUNT_512    (0x9UL)  /*!< Value 0x00000009 */
#define CTI_4KCOUNT_1024   (0xAUL)  /*!< Value 0x0000000A */
#define CTI_4KCOUNT_2048   (0xBUL)  /*!< Value 0x0000000B */
#define CTI_4KCOUNT_4096   (0xCUL)  /*!< Value 0x0000000C */
#define CTI_4KCOUNT_8192   (0xDUL)  /*!< Value 0x0000000D */
#define CTI_4KCOUNT_16384  (0xEUL)  /*!< Value 0x0000000E */
#define CTI_4KCOUNT_32728  (0xFUL)  /*!< Value 0x0000000F */

// Values of JEDEC JEP 106 continuation code in peripheral identification 4 register
#define CTI_PIDR4JEP106_VALUE  (0x4UL)  /*!< Value 0x00000004 */

/*!< Peripheral identitication 5 register */
#define CTI_PIDR5_RSVD_OFFSET  (0U)
#define CTI_PIDR5_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Mask  0xFFFFFFFF */
#define CTI_PIDR5_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000001 */
#define CTI_PIDR5_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000002 */
#define CTI_PIDR5_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000004 */
#define CTI_PIDR5_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000008 */
#define CTI_PIDR5_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000010 */
#define CTI_PIDR5_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000020 */
#define CTI_PIDR5_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000040 */
#define CTI_PIDR5_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000080 */
#define CTI_PIDR5_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000100 */
#define CTI_PIDR5_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000200 */
#define CTI_PIDR5_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000400 */
#define CTI_PIDR5_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00000800 */
#define CTI_PIDR5_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00001000 */
#define CTI_PIDR5_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00002000 */
#define CTI_PIDR5_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00004000 */
#define CTI_PIDR5_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00008000 */
#define CTI_PIDR5_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00010000 */
#define CTI_PIDR5_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00020000 */
#define CTI_PIDR5_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00040000 */
#define CTI_PIDR5_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00080000 */
#define CTI_PIDR5_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00100000 */
#define CTI_PIDR5_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00200000 */
#define CTI_PIDR5_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00400000 */
#define CTI_PIDR5_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x00800000 */
#define CTI_PIDR5_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x01000000 */
#define CTI_PIDR5_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x02000000 */
#define CTI_PIDR5_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x04000000 */
#define CTI_PIDR5_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x08000000 */
#define CTI_PIDR5_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x10000000 */
#define CTI_PIDR5_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x20000000 */
#define CTI_PIDR5_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x40000000 */
#define CTI_PIDR5_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR5, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 6 register */
#define CTI_PIDR6_RSVD_OFFSET  (0U)
#define CTI_PIDR6_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Mask  0xFFFFFFFF */
#define CTI_PIDR6_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000001 */
#define CTI_PIDR6_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000002 */
#define CTI_PIDR6_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000004 */
#define CTI_PIDR6_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000008 */
#define CTI_PIDR6_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000010 */
#define CTI_PIDR6_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000020 */
#define CTI_PIDR6_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000040 */
#define CTI_PIDR6_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000080 */
#define CTI_PIDR6_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000100 */
#define CTI_PIDR6_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000200 */
#define CTI_PIDR6_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000400 */
#define CTI_PIDR6_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00000800 */
#define CTI_PIDR6_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00001000 */
#define CTI_PIDR6_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00002000 */
#define CTI_PIDR6_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00004000 */
#define CTI_PIDR6_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00008000 */
#define CTI_PIDR6_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00010000 */
#define CTI_PIDR6_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00020000 */
#define CTI_PIDR6_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00040000 */
#define CTI_PIDR6_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00080000 */
#define CTI_PIDR6_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00100000 */
#define CTI_PIDR6_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00200000 */
#define CTI_PIDR6_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00400000 */
#define CTI_PIDR6_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x00800000 */
#define CTI_PIDR6_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x01000000 */
#define CTI_PIDR6_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x02000000 */
#define CTI_PIDR6_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x04000000 */
#define CTI_PIDR6_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x08000000 */
#define CTI_PIDR6_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x10000000 */
#define CTI_PIDR6_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x20000000 */
#define CTI_PIDR6_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x40000000 */
#define CTI_PIDR6_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR6, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 7 register */
#define CTI_PIDR7_RSVD_OFFSET  (0U)
#define CTI_PIDR7_RSVD_MASK    (0xFFFFFFFFUL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Mask  0xFFFFFFFF */
#define CTI_PIDR7_RSVD_0       (0x00000001UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000001 */
#define CTI_PIDR7_RSVD_1       (0x00000002UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000002 */
#define CTI_PIDR7_RSVD_2       (0x00000004UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000004 */
#define CTI_PIDR7_RSVD_3       (0x00000008UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000008 */
#define CTI_PIDR7_RSVD_4       (0x00000010UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000010 */
#define CTI_PIDR7_RSVD_5       (0x00000020UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000020 */
#define CTI_PIDR7_RSVD_6       (0x00000040UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000040 */
#define CTI_PIDR7_RSVD_7       (0x00000080UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000080 */
#define CTI_PIDR7_RSVD_8       (0x00000100UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000100 */
#define CTI_PIDR7_RSVD_9       (0x00000200UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000200 */
#define CTI_PIDR7_RSVD_10      (0x00000400UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000400 */
#define CTI_PIDR7_RSVD_11      (0x00000800UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00000800 */
#define CTI_PIDR7_RSVD_12      (0x00001000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00001000 */
#define CTI_PIDR7_RSVD_13      (0x00002000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00002000 */
#define CTI_PIDR7_RSVD_14      (0x00004000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00004000 */
#define CTI_PIDR7_RSVD_15      (0x00008000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00008000 */
#define CTI_PIDR7_RSVD_16      (0x00010000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00010000 */
#define CTI_PIDR7_RSVD_17      (0x00020000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00020000 */
#define CTI_PIDR7_RSVD_18      (0x00040000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00040000 */
#define CTI_PIDR7_RSVD_19      (0x00080000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00080000 */
#define CTI_PIDR7_RSVD_20      (0x00100000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00100000 */
#define CTI_PIDR7_RSVD_21      (0x00200000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00200000 */
#define CTI_PIDR7_RSVD_22      (0x00400000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00400000 */
#define CTI_PIDR7_RSVD_23      (0x00800000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x00800000 */
#define CTI_PIDR7_RSVD_24      (0x01000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x01000000 */
#define CTI_PIDR7_RSVD_25      (0x02000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x02000000 */
#define CTI_PIDR7_RSVD_26      (0x04000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x04000000 */
#define CTI_PIDR7_RSVD_27      (0x08000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x08000000 */
#define CTI_PIDR7_RSVD_28      (0x10000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x10000000 */
#define CTI_PIDR7_RSVD_29      (0x20000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x20000000 */
#define CTI_PIDR7_RSVD_30      (0x40000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x40000000 */
#define CTI_PIDR7_RSVD_31      (0x80000000UL << REGISTER_FIELD_OFFSET(CTI, PIDR7, RSVD))  /*!< Value 0x80000000 */

/*!< Peripheral identitication 0 register */
#define CTI_PIDR0_PARTNUM_OFFSET  (0U)
#define CTI_PIDR0_PARTNUM_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Mask  0x000000FF */
#define CTI_PIDR0_PARTNUM_0       (0x01UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000001 */
#define CTI_PIDR0_PARTNUM_1       (0x02UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000002 */
#define CTI_PIDR0_PARTNUM_2       (0x04UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000004 */
#define CTI_PIDR0_PARTNUM_3       (0x08UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000008 */
#define CTI_PIDR0_PARTNUM_4       (0x10UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000010 */
#define CTI_PIDR0_PARTNUM_5       (0x20UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000020 */
#define CTI_PIDR0_PARTNUM_6       (0x40UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000040 */
#define CTI_PIDR0_PARTNUM_7       (0x80UL << REGISTER_FIELD_OFFSET(CTI, PIDR0, PARTNUM))  /*!< Value 0x00000080 */

// Values of part number register
#define CTI_PIDR0PARTNUM_ST   (0x06UL)  /*!< Value 0x00000006 */
#define CTI_PIDR0PARTNUM_ARM  (0x75UL)  /*!< Value 0x00000075 */

/*!< Peripheral identitication 1 register */
#define CTI_PIDR1_JEP106ID_OFFSET  (4U)
#define CTI_PIDR1_JEP106ID_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR1, JEP106ID))  /*!< Mask  0x000000F0 */
#define CTI_PIDR1_JEP106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, JEP106ID))  /*!< Value 0x00000010 */
#define CTI_PIDR1_JEP106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, JEP106ID))  /*!< Value 0x00000020 */
#define CTI_PIDR1_JEP106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, JEP106ID))  /*!< Value 0x00000040 */
#define CTI_PIDR1_JEP106ID_3       (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, JEP106ID))  /*!< Value 0x00000080 */

#define CTI_PIDR1_PARTNUM_OFFSET   (0U)
#define CTI_PIDR1_PARTNUM_MASK     (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR1, PARTNUM))   /*!< Mask  0x0000000F */
#define CTI_PIDR1_PARTNUM_0        (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, PARTNUM))   /*!< Value 0x00000001 */
#define CTI_PIDR1_PARTNUM_1        (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, PARTNUM))   /*!< Value 0x00000002 */
#define CTI_PIDR1_PARTNUM_2        (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, PARTNUM))   /*!< Value 0x00000004 */
#define CTI_PIDR1_PARTNUM_3        (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR1, PARTNUM))   /*!< Value 0x00000008 */

// Values of JEDEC JEP 106 ID code in peripheral identification 1 register
#define CTI_PIDR1JEP106ID_VALUE  (0xBUL)  /*!< Value 0x0000000B */

// Values of part number register
#define CTI_PIDR1PARTNUM_ARM  (0x9UL)  /*!< Value 0x00000009 */

/*!< Peripheral identitication 2 register */
#define CTI_PIDR2_REVISION_OFFSET    (4U)
#define CTI_PIDR2_REVISION_MASK      (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR2, REVISION))    /*!< Mask  0x000000F0 */
#define CTI_PIDR2_REVISION_0         (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, REVISION))    /*!< Value 0x00000010 */
#define CTI_PIDR2_REVISION_1         (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, REVISION))    /*!< Value 0x00000020 */
#define CTI_PIDR2_REVISION_2         (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, REVISION))    /*!< Value 0x00000040 */
#define CTI_PIDR2_REVISION_3         (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, REVISION))    /*!< Value 0x00000080 */

#define CTI_PIDR2_JEDEC_OFFSET       (3U)
#define CTI_PIDR2_JEDEC_MASK         (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, JEDEC))       /*!< Mask  0x00000008 */

#define CTI_PIDR2_JEDEC106ID_OFFSET  (0U)
#define CTI_PIDR2_JEDEC106ID_MASK    (0x7UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, JEDEC106ID))  /*!< Mask  0x00000007 */
#define CTI_PIDR2_JEDEC106ID_0       (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, JEDEC106ID))  /*!< Value 0x00000001 */
#define CTI_PIDR2_JEDEC106ID_1       (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, JEDEC106ID))  /*!< Value 0x00000002 */
#define CTI_PIDR2_JEDEC106ID_2       (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR2, JEDEC106ID))  /*!< Value 0x00000004 */

// Values of revision number register
#define CTI_REVISION_R1P0  (0x5UL)  /*!< Value 0x00000005 */

// Values of JEDEC assigned value select bit
#define CTI_JEDEC_VALUE  (0x1UL)  /*!< Value 0x00000001 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define CTI_PIDR2JEP106ID_VALUE  (0x3UL)  /*!< Value 0x00000003 */

/*!< Peripheral identitication 3 register */
#define CTI_PIDR3_REVAND_OFFSET  (4U)
#define CTI_PIDR3_REVAND_MASK    (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR3, REVAND))  /*!< Mask  0x000000F0 */
#define CTI_PIDR3_REVAND_0       (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, REVAND))  /*!< Value 0x00000010 */
#define CTI_PIDR3_REVAND_1       (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, REVAND))  /*!< Value 0x00000020 */
#define CTI_PIDR3_REVAND_2       (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, REVAND))  /*!< Value 0x00000040 */
#define CTI_PIDR3_REVAND_3       (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, REVAND))  /*!< Value 0x00000080 */

#define CTI_PIDR3_CMOD_OFFSET    (0U)
#define CTI_PIDR3_CMOD_MASK      (0xFUL << REGISTER_FIELD_OFFSET(CTI, PIDR3, CMOD))    /*!< Mask  0x0000000F */
#define CTI_PIDR3_CMOD_0         (0x1UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, CMOD))    /*!< Value 0x00000001 */
#define CTI_PIDR3_CMOD_1         (0x2UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, CMOD))    /*!< Value 0x00000002 */
#define CTI_PIDR3_CMOD_2         (0x4UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, CMOD))    /*!< Value 0x00000004 */
#define CTI_PIDR3_CMOD_3         (0x8UL << REGISTER_FIELD_OFFSET(CTI, PIDR3, CMOD))    /*!< Value 0x00000008 */

// Values of manifacturer revision number register
#define CTI_REVAND_NOMETALFIX  (0x0UL)  /*!< Value 0x00000000 */

// Values of JEDEC JEP 106 ID code in peripheral identification 2 register
#define CTI_CMOD_ARM  (0x0UL)  /*!< Value 0x00000000 */

/*!< Component identitication 0 register */
#define CTI_CIDR0_PREAMBLE_OFFSET  (0U)
#define CTI_CIDR0_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Mask  0x000000FF */
#define CTI_CIDR0_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000001 */
#define CTI_CIDR0_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000002 */
#define CTI_CIDR0_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000004 */
#define CTI_CIDR0_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000008 */
#define CTI_CIDR0_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000010 */
#define CTI_CIDR0_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000020 */
#define CTI_CIDR0_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000040 */
#define CTI_CIDR0_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(CTI, CIDR0, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 0 register
#define CTI_CIDR0PREAMBLE_VALUE  (0x0DUL)  /*!< Value 0x0000000D */

/*!< Component identitication 1 register */
#define CTI_CIDR1_CLASS_OFFSET      (4U)
#define CTI_CIDR1_CLASS_MASK        (0xFUL << REGISTER_FIELD_OFFSET(CTI, CIDR1, CLASS))      /*!< Mask  0x000000F0 */
#define CTI_CIDR1_CLASS_0           (0x1UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, CLASS))      /*!< Value 0x00000010 */
#define CTI_CIDR1_CLASS_1           (0x2UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, CLASS))      /*!< Value 0x00000020 */
#define CTI_CIDR1_CLASS_2           (0x4UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, CLASS))      /*!< Value 0x00000040 */
#define CTI_CIDR1_CLASS_3           (0x8UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, CLASS))      /*!< Value 0x00000080 */

#define CTI_CIDR1_PREAMBLE_OFFSET   (0U)
#define CTI_CIDR1_PREAMBLE_MASK     (0xFUL << REGISTER_FIELD_OFFSET(CTI, CIDR1, PREAMBLE))   /*!< Mask  0x0000000F */
#define CTI_CIDR1_PREAMBLE_0        (0x1UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, PREAMBLE))   /*!< Value 0x00000001 */
#define CTI_CIDR1_PREAMBLE_1        (0x2UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, PREAMBLE))   /*!< Value 0x00000002 */
#define CTI_CIDR1_PREAMBLE_2        (0x4UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, PREAMBLE))   /*!< Value 0x00000004 */
#define CTI_CIDR1_PREAMBLE_3        (0x8UL << REGISTER_FIELD_OFFSET(CTI, CIDR1, PREAMBLE))   /*!< Value 0x00000008 */

// Values of component identifier in component identification 1 register
#define CTI_CIDR1PREAMBLE_VALUE  (0x0UL)  /*!< Value 0x00000000 */

// Values of debug component with CoreSight-compatible registers
#define CTI_CLASS_ARM  (0x1UL)  /*!< Value 0x00000001 */
#define CTI_CLASS_ST   (0x9UL)  /*!< Value 0x00000009 */

/*!< Component identitication 2 register */
#define CTI_CIDR2_PREAMBLE_OFFSET  (0U)
#define CTI_CIDR2_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Mask  0x000000FF */
#define CTI_CIDR2_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000001 */
#define CTI_CIDR2_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000002 */
#define CTI_CIDR2_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000004 */
#define CTI_CIDR2_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000008 */
#define CTI_CIDR2_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000010 */
#define CTI_CIDR2_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000020 */
#define CTI_CIDR2_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000040 */
#define CTI_CIDR2_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(CTI, CIDR2, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 2 register
#define CTI_CIDR2PREAMBLE_VALUE  (0x05UL)  /*!< Value 0x00000005 */

/*!< Component identitication 3 register */
#define CTI_CIDR3_PREAMBLE_OFFSET  (0U)
#define CTI_CIDR3_PREAMBLE_MASK    (0xFFUL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Mask  0x000000FF */
#define CTI_CIDR3_PREAMBLE_0       (0x01UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000001 */
#define CTI_CIDR3_PREAMBLE_1       (0x02UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000002 */
#define CTI_CIDR3_PREAMBLE_2       (0x04UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000004 */
#define CTI_CIDR3_PREAMBLE_3       (0x08UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000008 */
#define CTI_CIDR3_PREAMBLE_4       (0x10UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000010 */
#define CTI_CIDR3_PREAMBLE_5       (0x20UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000020 */
#define CTI_CIDR3_PREAMBLE_6       (0x40UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000040 */
#define CTI_CIDR3_PREAMBLE_7       (0x80UL << REGISTER_FIELD_OFFSET(CTI, CIDR3, PREAMBLE))  /*!< Value 0x00000080 */

// Values of component identifier in component identification 3 register
#define CTI_CIDR3PREAMBLE_VALUE  (0xB1UL)  /*!< Value 0x000000B1 */

#define CTI_OFFSET 0x43000UL
#define CTI_BASE OFFSET_ADDRESS(PPB_BASE, CTI_OFFSET)
#define CTI REGISTER_PTR(cti_regs, CTI_BASE)

/** @} */ // End of CTI group

/** @} */ // End of RegisterGroup group

#endif // CTI_REGISTERS_H
