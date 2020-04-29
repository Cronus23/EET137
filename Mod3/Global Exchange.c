/*
  Global Exchange.c
  
  Functions exchange information with global variables. 
  
  http://learn.parallax.com/propeller-c-functions/memory-functions-can-share
*/

#include "simpletools.h"                      // Include simpletools

void adder(void);                             // Forward declaration

int a, b, n;                                  // Global variables

int main()                                    // main function
{
  a = 96;                                     // Set values of a & b
  b = 32;
  adder();                                    // Call adder function
  print("n = %d\n", n);                       // Display result
  // call subtracter print the result 
  subtracter();
  print("from subtracter n = %d\n", n);
}

void adder(void)                              // Adder, no parameters or return
{
  n = a + b;                                  // Use values of a & b to set n
}
//newly created subtracter function
void subtracter(void){
  // n is the subtraction of b from a
  n = a - b;
}
  