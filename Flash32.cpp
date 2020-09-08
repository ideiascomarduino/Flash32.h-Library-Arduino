/*
 

    Flash32.cpp
 
    Administration By Paulo Ricardo L. de Sena.
    (Date 08/09/2020)
    Programmed By Paulo Ricardo L. de Sena
    (Date 08/09/2020)
 
 
 
 */

 #include "Arduino.h"
#include "Flash32.h"

Flash32::Flash32(int pin)
{
   pinMode(pin, OUTPUT);
   _pin = pin;  
  
}

void Flash32::Flash32_led(int ms)
{
   digitalWrite(_pin, HIGH);
   delay(ms);
   digitalWrite(_pin,  LOW);
   delay(ms);
  
}
