#include<avr/io.h>
#include<Activity1.h>
void initializeports()
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
}

 