/*
  Decide on Multiple Conditions.c 
  
  Make a decision based on two conditions.  
  
  http://learn.parallax.com/propeller-c-start-simple/make-complicated-decisions 
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  int a = 150;                                // Initialize a variable to 25
  int b = 17;                                 // Initialize b variable to 17
  print("a = %d, b = %d\n", a, b);            // Print all
  if((a >= 100) && (a <= 200))                   // YourTurn
  {
    /* print("a might be larger than b,\n");           // Then print this message
    print("OR a might be 100, \n");                 // Then print this message
    print("OR maybe both!\n"); */
print("This only prints if 'a' is between 100 and 200\n");
  }
}
