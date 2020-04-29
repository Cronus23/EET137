/*
  Floating Point Calculations.c
  
  Calculate and display circumference of a circle of radius = 1.0.
  
  http://learn.parallax.com/propeller-c-start-simple/floating-point-math
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  float r = 1.0;                              // Set radius to 1.0
  float c = 2.0 * PI * r;                     // Calculate circumference
  print("circumference = %f \n", c);          // Display circumference
  float a = PI * r * r;             // trythis
  print("area = %f \n", a);       //< added
  
// ^TRY THIS^ 
  r = 3.0 ; a = PI * r * r;             // trythis
  print("area = %f \n", a);       //< added
// calculate the volume of a sphere using v = 4/3 x pi x r^3
float v;        // create float variable v for volume
v = 4/3 * PI * r * r * r;         //calculate v
print(" the volume of a sphere\n");         // prints the volume of a sphere
print("v = %f * %f * %f * %f * %f", v, PI, r, r, r); // prints the answer 84.822998 along with the values of PI=3.14... and r = 3.0
}
