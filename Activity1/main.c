/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{

DDRB|=(1<<PB0); // PB0 set as output
DDRD&=~(3<<PD0);// CLEAR BITS (PD0 and PD1 as input ports))
PORTD|=(3<<PD0); // Pull up

   while(1)
    {
      if(!((PIND)&(3<<PD0))) //Seated and heater in turned on
      {
         PORTB |= (1<<PB0);
        _delay_ms(20);
      }
      else
        {PORTB &= ~(1<<PB0);
        _delay_ms(20);
        }
    }
    ;

    return 0;
}
