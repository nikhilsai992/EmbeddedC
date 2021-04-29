/**
 * @file Activity1.c
 * @author NIkhil (you@domain.com)
 * @brief Passeneger seated and turns on the heater
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * @brief initializing ports for LED and button sensor
 * 
 */
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

 