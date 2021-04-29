/**
 * @file Activity2.c
 * @author Nikhil(you@domain.com)
 * @brief Reading the temperature sensor values
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include<stdint.h>
#include<Activity2.h>
/**
 * @brief initilialize ADC
 * 
 */
void initializeADC()
{
    ADMUX|=(1<<REFS0); //ARef = AVcc
    ADCSRA|=(1<<ADEN)|(7<<ADPS0);
}

/**
 * @brief Perform analog to digital conversion
 * 
 * @param ch ( The channel number which receives the sensor output)
 * @return uint16_t (returns the digital value after the conversion)
 */
uint16_t ReadADC(uint8_t ch)
{
     // select channels 0-7
ADMUX&=0xf8;
ch=ch&0b00000111;
ADMUX|=ch;

// start single conversion
ADCSRA|=(1<<ADSC);

while(!(ADCSRA&(1<<ADIF)));
ADCSRA|=(1<<ADIF);
return (ADC);

}