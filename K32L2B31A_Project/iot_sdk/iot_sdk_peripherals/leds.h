/*! @file : leds.h
 * @author  carlos gonzalez pertuz
 * @version 1.0.0
 * @date    11/09/2021
 * @brief    Driver para controlar tarjeta FRDM-K32L2B3
 * @details
 *
 */
#ifndef IOT_SDK_PERIPHERALS_LEDS_H_
#define IOT_SDK_PERIPHERALS_LEDS_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/


/*!
 * @addtogroup PERIPHERALS
 * @{
 */
/*!
 * @addtogroup LEDS
 * @{
 */
/*******************************************************************************
 * Public Definitions
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Public vars
 ******************************************************************************/

/*******************************************************************************
 * Public Prototypes
 ******************************************************************************/
/*!
 * @brief enciende el led verde de la tarjeta  FRDM-K32L2B3
 *
 */
void led_on_gree();

/*----------------------------------------------------------*/
/*!
 * @brief apaga el led verde de la tarjeta  FRDM-K32L2B3
 *
 */
void led_off_gree();

/*!
 * @brief enciende el led ROJO de la tarjeta  FRDM-K32L2B3
 *
 */
void led_on_red();
/*----------------------------------------------------------*/
/*!
 * @brief apaga el led ROJO de la tarjeta  FRDM-K32L2B3
 *
 */
void led_off_red();
/** @} */ // end of LEDS
/** @} */ // end of PERIPHERALS

#endif /* IOT_SDK_PERIPHERALS_LEDS_H_ */
