/**
 * @file Activity3.c
 * @author Nikhil (you@domain.com)
 * @brief Display the temperature based on the sensor output
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdint.h>
#include<Activity3.h>
#include<avr/io.h>
/**
 * @brief initialize timer0
 * 
 */
void timer0()
{
    TCCR0A|=(1<<COM0A1)|(1<<WGM00)|(1<<WGM01);
    TCCR0B|=(1<<CS00)|(1<<CS01);
    DDRD|=(1<<PD6);
}

/**
 * @brief display waveform 
 * 
 * @param temp (The ADC value) 
 */
void displayWave(uint16_t temp)
{
    if(temp>=0x00 && temp <0xC8)
         OCR0A=51;
         else if(temp>0xD2 && temp <0x1F4)
         OCR0A=102;
         else if(temp>0x1FE && temp <0x2BC)
         OCR0A=179;
         else if(temp>0x2C6 && temp <0x400)
         OCR0A=242;
}