/*
  Variables and Calculations.c
  
  Add two integer values together and display the result.
  
  http://learn.parallax.com/propeller-c-start-simple/variables-and-math
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  int a = 17;                                 // Initialize a variable to 17, was 25
  int b = 25;                                 // Initialize b variable to 25, was 17
  int c = a + b;                              // Initialize c variable to a + b
  print("a = %d, b=%d\n", a,b);               //<---- modify program does binary operations on numbers
  print("a + b = %d\n", c);                   // %d displays that the output is to be decimal
  c = a - b;                  // change c to be the result of a-b
    // semicolon terminates the statement, known as a delimeter
  print("a - b = %d\n", c);
  c = a*b;          //change c to be the product of a and b                
  
  print("a * b = %d\n",c);                    // variables seperated by commas 
  c = a/b;          //change c to be the dividend of a and b
  
  print("a / b = %d\n", c);
  
  
//  int f;
 // f = a + b;
 // print("variable f; a + b = %d\n", a+b);
  
}
