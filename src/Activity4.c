/**
 * @file Activity4.c
 * @author Nikhil (you@domain.com)
 * @brief Displaying temperature on serial monitor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<avr/io.h>
#include<util/delay.h>
#include"Activity4.h"
/**
 * @brief initialize USART
 * 
 * @param ubrr_value ( UBRR value for 9600 baud)
 */

void USARTinit(uint16_t ubrr_value)
{
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

/**
 * @brief Writing the temperature values to the serial monitor
 * 
 * @param temp (The ADC value)
 */


void USARTWriteChar(uint16_t temp )
{  int i;
   if(temp>=0 && temp<=200)
   {
   unsigned char data1[]= "20 degree C\n";
   i=0;
   while(data1[i]!=0){
       while(!(UCSR0A &(1<<UDRE0)));
       UDR0= data1[i];
       i++;
       _delay_ms(2000);
   }
   }

   else if(temp>=210 && temp<=500)
   {
   unsigned char data2[]= "25 degree C\n";
   i=0;
   while(data2[i]!=0){
       while(!(UCSR0A &(1<<UDRE0)));
       UDR0= data2[i];
       i++;
       _delay_ms(2000);
   }
   }

    else if(temp>=510 && temp<=700)
   {
   unsigned char data3[]= "29 degree C\n";
   i=0;
   while(data3[i]!=0){
       while(!(UCSR0A &(1<<UDRE0)));
       UDR0= data3[i];
       i++;
       _delay_ms(2000);
   }
   }

    else if(temp>=710 && temp<=1024)
   {
   unsigned char data3[]= "33 degree C\n";
   i=0;
   while(data3[i]!=0){
       while(!(UCSR0A &(1<<UDRE0)));
       UDR0= data3[i];
       i++;
       _delay_ms(2000);
   }
   }
}