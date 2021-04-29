/**
 * @file main.c
 * @author NikhilSai (you@domain.com)
 * @brief  Embedded Project
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include<util/delay.h>
#include<Activity1.h>
#include<Activity2.h>
#include<Activity3.h>
#include<Activity4.h>
#include<stdint.h>




int main(void)
{
  
initializeports(); /**  
*@brief  initialize ports for the LED on Activity 
*
*/


initializeADC();/** 
* @brief Initialize PortC for ADC
*
 */

 USARTinit(103);/**
  * @brief Initialize USART
  * 
  */
uint16_t temp;
while(1)
    {
      if(CHECK) /**
       * @brief When passenger is seated and turns on the heater on the LED
       * 
       */
      {
        PORTB |= (1<<PB0);
        _delay_ms(20); 
        temp= ReadADC(0);/** Perform analog to digital conversion 
        * @brief 
        * 
        */
        _delay_ms(2000);
        timer0();/**
        * @brief Initialize timer0
        * 
        */
        displayWave(temp);/**
        * @brief Display waveform indicating temperature
        * 
        */
        USARTWriteChar( temp );/**
        * @brief Write temperature on serial monitor
        * 
        */
      }
      else 
      { PORTB &= ~(1<<PB0); /**
        * @brief Switch of the LED in any other scenario
        * 
        */
        _delay_ms(20);
      }
    }
    ;
   
  return 0;
}

