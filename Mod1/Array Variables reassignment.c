/* 
  Array Variables.c  
   
  Declare and initialize an array and display a couple of its elements.
  
  http://learn.parallax.com/propeller-c-start-simple/array-variables
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  int p[] = {1, 2, 3, 5, 7, 11};              // Initialize the array
  print("p[0] = %d\n", p[0]);                 // Display what p[0] stores
  print("p[3] = %d\n", p[3]);                 // display what p[3] stores
  p[3] = 101;                         //changed the value stored in position(3)=5 to 101
  print("p[3] =%d\n", p[3]);            //print the new value stored at 3 
  
    p[0] = 11; p[1] = 7; p[2] = 5; p[3] = 3; p[4]=2; p[5] =1;
    int i;
  for ( i = 0; i < 5 ; i++ )     //getting fancy with loops creates a for loop initialize i first to zero loop through the array printing and line return. 
  {
     print("%d = p[%d]\n", p[i],i);
  }  
  
}
