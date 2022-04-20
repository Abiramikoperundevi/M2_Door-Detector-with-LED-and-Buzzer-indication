#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file Project_config.h
 * @author Abirami G ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTC)    /**< LED Port Number */
#define LED_PIN  (PORTB6)   /**< LED Pin number  */

#define BUZZER_PORT (PORTD)    /**< Buzzer Port Number */
#define BUZZER_PIN  (PORTD1)  /**< Buzzer Pin Number  */

#define DOORSENSOR_PORT (PORTB) /**< Door Port Number */
#define DOORSENSOR_PIN  (PORTB1)  /**< Door Pin Number */


#endif /* __PROJECT_CONFIG_H__ */
