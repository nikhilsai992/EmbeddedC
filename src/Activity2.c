#include<avr/io.h>
#include<stdint.h>
#include<Activity2.h>

void initializeADC()
{
    ADMUX|=(1<<REFS0); //ARef = AVcc
    ADCSRA|=(1<<ADEN)|(7<<ADPS0);
}

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