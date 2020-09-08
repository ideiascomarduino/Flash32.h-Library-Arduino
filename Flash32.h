/*
 

    Flash32.h
 
    Administration By Paulo Ricardo L. de Sena.
    (Date 08/09/2020)
    Progranmed By Paulo Ricardo L. de Sena
    (Date 08/09/2020)
 
 
 
 */

#ifndef Flash32
#define Flash32

#include "Arduino.h"

class Flash32
{
   public:
       Flash32(int pin);  
       void Flash32_led(int ms);

   private:
       int _pin;
  
  
};

#endif
