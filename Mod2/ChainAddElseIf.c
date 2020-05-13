/*
  Decision Chain.c

  Check a series of conditions, but only act on the first one that's true.
  
  http://learn.parallax.com/propeller-c-start-simple/make-several-decisions
*/

#include "simpletools.h" // Include simpletools

int main() // main function
{
  int a = 25;                      // Initialize a variable to 25
  int b = 1000;                    // Initialize b variable to 1000
  print("a = %d, b = %d\n", a, b); // Print all
  if (a > b)                       // If a > b condition is true
  {
    print("a is larger \n"); // Then print this message
  }
  else if (b == 1000) //If this code executes, jumps out of the ifelse line 27 does not run
  {
    print("WARNING, b is 1000 \n");
  }

  else if (a < b) // a > b not true? check a < b
  {
    print("b is larger \n"); // If true, print this instead
  }
  // Nothing else true? This is a catch-all statement will execute
  // everytime if no other if statement is true

  else // catch-all statement
  {
    print("a equals b"); // Print this
  }
  if (a < 0)
  {// your turn
    print("a is negative\n");
  }
  else
  {
    print("a is positive\n");
  }

  {
    if (b < 0)
    {// your turn
      print("b is negative\n");
    }
    else
    {
      print(" b is positive\n ");
    }
  }
}
