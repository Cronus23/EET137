/*
  Blink Light.c
  
  Blink light circuit connected to P26.
  
  http://learn.parallax.com/propeller-c-simple-circuits/blink-light
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  while(1)                                    // Endless loop
  {
    high(26); pause(50);                                // Set P26 I/O pin high
    high(27); // your turn, staggers the flashing lights by 50 ms
    pause(50);                               // Wait 1/10 second
    low(26);    pause(50);                             // Set P26 I/O pin low
    low(27); // yourturn , adds two blinking lights alternating
    pause(50);                               // Wait another 1/10 second
  }
}
