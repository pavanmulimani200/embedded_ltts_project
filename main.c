  
/**
 * @file main.c
 * @author Pavan B Mulimani(pavanmulimani200@gmail.com)
 * @brief Heat Seating Application to set Temperature of seat
 * @version 0.1
 * @date 2021-04-27 
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "act1.h"
#include "act2.h"
#include "act3.h"
#include "act4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(LED()==1) //Check if both the switches are pressed
        {
            LED_ON();          //Turn LED ON
            temp=GetADC();     //To Get the ADC value
            PWM(temp);         //this is to PWM output based on temperature
		        USARTWrite(temp); //this is for Serial monitor to display Temperature
        }
        else  // other cases
        {
            LED_OFF();     //Turn LED OFF
		        _delay_ms(200);
        }

    }
    return 0;
}
