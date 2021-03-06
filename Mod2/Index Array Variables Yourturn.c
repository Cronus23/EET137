/*
  Index Array Variables.c
  
  Use a for loop to display all the elements in an array.
  
  http://learn.parallax.com/propeller-c-start-simple/index-array-variables
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  // Your Turn
  int p[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};      
  int n[9]; // initialize second array 
  for(int i = 0; i < sizeof(p)/sizeof(int) ; i++)                  // Count i from 0 to 5
  {
n[i] = p[i]*100; // get values multiples of 100 from p[]

    print("n[%d] = %d\n", i, n[i]);           // Display array element & value
    pause(500);                               // 1/2 second pause
  } 
}
