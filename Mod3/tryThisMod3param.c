/*
  Function with Parameters and Return Value.c
  
  Pass parameters to a function, let it do its job, and display the result
  it returns.
  
  http://learn.parallax.com/propeller-c-functions/function-parameters-and-return
*/

#include "simpletools.h"                      // Include simpletools

int adder(int a, int b);                      // Function prototype

int main()                                    // main function
{
  // Call adder function twice adding the sums of each, store this value into n
  int n = adder(25, 17) + adder(100,2);        
              // Display adder function result
  print("adder's result is = %d", n);       
  // assign -95 into n and print result
  n = adder(-100,5);
  print("adder's result = %d",n);
}

int adder(int a, int b)                       // adder function
{
  int c = a + b;                              // Add two values
  return c;                                   // Return the result
}
