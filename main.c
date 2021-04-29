/**
 * @file main.c
 * @author NikhilSai (you@domain.com)
 * @brief  Program for activity 1
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
#include<stdint.h>




int main(void)
{
  /**
   * @brief  initialize ports for the LED on Activity 
   * 
   */
initializeports();
/**
     * @brief Initialize PortC for ADC 
     * 
     */
 initializeADC();
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
         /**
       * @brief Convert anlog signal to Digital values
       * 
       */
        temp= ReadADC(0);
        
        _delay_ms(200);
       /**
        * @brief Initialize timer0
        * 
        */

        timer0();
      /**
       * @brief Display waveform indicating temperature
       * 
       */

        displayWave(temp);

        
      }
      else /**
       * @brief Switch of the LED in any other scenario
       * 
       */
        {PORTB &= ~(1<<PB0);
        _delay_ms(20);
        }
    }
    ;
   
  return 0;
}

