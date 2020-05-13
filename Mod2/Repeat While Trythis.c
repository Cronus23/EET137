/*
  Repeat While.c

  Keep displaying n = n + 5 every half second while n < 200.
  
  http://learn.parallax.com/propeller-c-start-simple/code-repeats
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  int n = 0;                                  // Declare n, initialize to zero
   // creates an endless loop when while(1) is envoked
   // the program will not execute print statement nor leave the loop
  while(1)                             
  {
    print("n = %d\n", n);                     // Display name & value of n
    n = n + 5;                                // Add 5 to n each time through
    pause(500);                               // 0.5 s between repetitions
    if ( n == 50)         //Yourturn, breaks out of loop
    { break; }
  }
  print("All done!");                         // Display all done
}
