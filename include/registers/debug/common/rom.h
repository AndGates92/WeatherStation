#ifndef ROM_H
#define ROM_H
/**
 * @copyright
 * @file rom.h
 * @author Andrea Gianarda
 * @date 15th of April 2021
 * @brief ROM table global definitions
*/

/**
 *  @defgroup RegisterGroup Register global macros, structure and functions
 *  @brief Registers global macros, structure and functions
 *  @{
 */

/**
 *  @ingroup RegisterGroup
 *  @defgroup ROM ROM table macros
 *  @brief ROM table macros
 *  @{
 */

// ROM table entries
#define ROM_COMPONENT_ADDRESSOFFSET_OFFSET (12U)
#define ROM_COMPONENT_FORMAT_OFFSET        (1U)
#define ROM_COMPONENT_FITTED_OFFSET        (0U)

// Values of ROM component format bit
#define ROM_COMPONENT_FORMAT_32BIT (0x1UL)  /*!< Value 0x00000001 */
#define ROM_COMPONENT_FORMAT_8BIT  (0x0UL)  /*!< Value 0x00000000 */

// Values of ROM component fitted bit
#define ROM_COMPONENT_FITTED    (0x1UL)  /*!< Value 0x00000001 */
#define ROM_COMPONENT_NOTFITTED (0x0UL)  /*!< Value 0x00000000 */

/** @} */ // End of ROM group

/** @} */ // End of RegisterGroup group

#endif // ROM_H
