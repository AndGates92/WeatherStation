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

#define POS_MASK(BLOCK, REGISTER, FIELD, OFFSET, VALUE) \
	#define BLOCK##_##REGISTER##_##FIELD##_OFFSET OFFSET \
	#define BLOCK##_##REGISTER##_##FIELD##_MASK (VALUE << PREFIX##_##REGISTER##_##FIELD##_OFFSET)

// New value is:
// - clear bits of the field (ptr & ~field_mask)
// - offset value (value << offset)
// - perform OR between the register with the cleared field and the new value of the field
#define SET_FIELD(PTR, BLOCK, REGISTER, FIELD, VALUE) \
	SET_REG(PTR, ((PTR & ~BLOCK##_##REGISTER##_##FIELD##_MASK) | (VALUE << BLOCK##_##REGISTER##_##FIELD##_OFFSET)));

#define CLEAR_FIELD(PTR, BLOCK, REGISTER, FIELD) \
	((PTR) = (PTR &= ~BLOCK##_##REGISTER##_##FIELD##_MASK));

#define GET_FIELD(PTR, BLOCK, REGISTER, FIELD) \
	((PTR) & (BLOCK##_##REGISTER##_##FIELD##_MASK));

#define SET_REG(PTR, VALUE) \
	((PTR) = (VALUE));

#define CLEAR_REG(PTR) \
	((PTR) = (0x0));

#define GET_REG(PTR) \
	(PTR);

/** @} */ // End of Macros group

/** @} */ // End of RegisterGroup group

#endif // REGISTERS_H
