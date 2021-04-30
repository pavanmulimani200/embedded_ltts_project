#ifndef __ACT3_H__
#define __ACT3_H__
/**
 * @file act3.h
 * @author Pavan B Mulimani(pavanmulimani200@gmail.com)
 * @brief This is the Header File for Activity_3
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Macro Definitions
 */
#define PWM_20_PERCENT (205) /**< This is for Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< This is for Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< This is for Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< This is for Output PWM for 95% duty cycle */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Function to Initialize Timer1 registers
 *
 */
void Init_Timer();

/**
 * @brief Produce duty cycle in PWM according to input ADC value
 *
 * @param[in] temp The ADC value from Activity_2
 */
void PWM(uint16_t temp);

#endif /* __ACT3_H__ */
