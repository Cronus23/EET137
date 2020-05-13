/*
  Make a Decision.c
  
  If a condition is true, display a second message.
  
  http://learn.parallax.com/propeller-c-start-simple/make-decision
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  int a = -100;                                 // Initialize a variable to -25
  int b = -25;                                 // Initialize b variable to -17
 
  //The program has few options  
  // It will print if a < b ; a > b; a = b all in one go
  print("a = %d, b = %d\n", a, b);            // Print all
  if(a > b)                                   // If a > b condition is true
  {
    print("a is larger \n");                  // ...then print this message
    // Your Turn
  }
  if(a == b){
    print("a is equal to b\n");
  }
  if(a < b){
    print("b is greater than a\n");
  }        
  if(a != b){
    print("a is not equal to b\n");
  }    
    
}
