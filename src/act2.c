/**
 * @file act2.c
 * @author Pavan B Mulimani(pavanmulimani200@gmail.com)
 * @brief This is the Function to get the values of ADC
 * @version 0.1
 * @date 2021-04-28
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "act2.h"

void Init_ADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}

uint16_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}

uint16_t GetADC(void)
{
      Init_ADC();
      uint16_t temp;
      temp=Read_ADC(0);
      return temp;
}
