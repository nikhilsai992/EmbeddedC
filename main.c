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



int main(void)
{

DDRB|=(1<<PB0); /**
 * @brief SET PB0 as Output for LED
 * 
 */
DDRD&=~(3<<PD0);
/**
 * @brief CLEAR BITS (PD0 and PD1 as input ports))
 * 
 */

PORTD|=(3<<PD0);
/**
 * @brief Pull up for the input
 * 
 */

 

   while(1)
    {
      if(!((PIND)&(3<<PD0))) /**
       * @brief When passenger is seated and turns on the heater on the LED
       * 
       */
      
      {
         PORTB |= (1<<PB0);
        _delay_ms(20);
      }
      else /**
       * @brief SWitch of the LED in any other scenario
       * 
       */
        {PORTB &= ~(1<<PB0);
        _delay_ms(20);
        }
    }
    ;

    return 0;
}
