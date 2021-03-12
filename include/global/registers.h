#ifndef REGISTERS_H
#define REGISTERS_H
/**
 * @copyright
 * @file registers.h
 * @author Andrea Gianarda
 * @date 15th of February 2021
 * @brief Registers global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup Macros Register macros
 *  @brief Registers global macros
 *  @{
 */

// Register access rights fields
#define RO volatile /*!< Read only permission */
#define WO volatile /*!< Write only permission */
#define RW volatile /*!< Read write permission */

/*!< Address macros */
#define OFFSET_ADDRESS(BASE_ADDRESS, OFFSET) (BASE_ADDRESS + OFFSET) /*!< Compute offseted address */
#define REGISTER_PTR(TYPE, ADDRESS) ((TYPE *) ADDRESS) /*!< Pointer to memory location */

/*!< Field macros */

#define REGISTER_FIELD_MACRO_NAME(BLOCK, REGISTER, FIELD, SUFFIX) \
	BLOCK ## _ ## REGISTER ## _ ## FIELD ## _ ## SUFFIX

#define REGISTER_FIELD_OFFSET(BLOCK, REGISTER, FIELD) \
	REGISTER_FIELD_MACRO_NAME(BLOCK, REGISTER, FIELD, OFFSET)

#define REGISTER_FIELD_GLOBAL_MASK(BLOCK, REGISTER, FIELD) \
	BLOCK ## _ ## REGISTER ## _ ## FIELD ## _MASK
//	REGISTER_FIELD_MACRO_NAME(BLOCK, REGISTER, FIELD, MASK)

/*!< Register bit mask macro is only provided if:
     - register is multibit
     - its value have no particular meaning.
     If register values have a well defined meaning, please use REGISTER_FIELD_VALUE_MASK instead
*/
#define REGISTER_FIELD_BIT_MASK(BLOCK, REGISTER, FIELD, BIT) \
	REGISTER_FIELD_MACRO_NAME(BLOCK, REGISTER, FIELD, BIT)

/*!< Some field values have a specific meaning hence a macro is created for it
     For example value 0 of HSIDIV RCC register means division by 1 hence RCC_CR_HSIDIV_1 is present
     In such case, no bit mask is provided
*/
#define REGISTER_FIELD_VALUE_MASK(BLOCK, REGISTER, FIELD, VALUE) \
	REGISTER_FIELD_MACRO_NAME(BLOCK, REGISTER, FIELD, VALUE)

#define REGISTER_FIELD_SETTER(BLOCK, REGISTER, FIELD, VALUE) \
	(VALUE << REGISTER_FIELD_OFFSET(BLOCK, REGISTER, FIELD))

// New value is:
// - clear bits of the field (ptr & ~field_mask)
// - offset value (value << offset)
// - perform OR between the register with the cleared field and the new value of the field
#define MODIFY_FIELD_WITH_MASK(PTR, CLEAR, SET) \
	MODIFY_REG(PTR, ((PTR & ~CLEAR) | (SET)))

#define MODIFY_FIELD(PTR, BLOCK, REGISTER, FIELD, VALUE) \
	MODIFY_FIELD_WITH_MASK(PTR, REGISTER_FIELD_GLOBAL_MASK(BLOCK, REGISTER, FIELD), REGISTER_FIELD_SETTER(BLOCK, REGISTER, FIELD, VALUE))

#define CLEAR_FIELD(PTR, BLOCK, REGISTER, FIELD) \
	((PTR) &= (~(REGISTER_FIELD_GLOBAL_MASK(BLOCK, REGISTER, FIELD))))

// Masks register value to keep only bits of interest to 1
#define GET_FIELD(PTR, BLOCK, REGISTER, FIELD) \
	((PTR) & (REGISTER_FIELD_GLOBAL_MASK(BLOCK, REGISTER, FIELD)))

// Shift bits of interest to get the actual value of the field
#define GET_FIELD_VALUE(PTR, BLOCK, REGISTER, FIELD) \
	(GET_FIELD(PTR, BLOCK, REGISTER, FIELD) >> REGISTER_FIELD_OFFSET(BLOCK, REGISTER, FIELD))

#define CLEAR_BITS(PTR, MASK) \
	((PTR) &= (~MASK))

#define SET_BITS(PTR, MASK) \
	((PTR) |= (MASK))

#define MODIFY_REG(PTR, VALUE) \
	((PTR) = (VALUE))

#define CLEAR_REG(PTR) \
	((PTR) = (0x0))

#define GET_REG(PTR) \
	(PTR)

/** @} */ // End of Macros group

/** @} */ // End of RegisterGroup group

#endif // REGISTERS_H
