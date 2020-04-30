/*
  Multicore Example.c
  
  Launch a function into another cog (processor) and display what it does
  to the global n variable over time. 
  
  http://learn.parallax.com/propeller-c-functions/multicore-example
*/

#include "simpletools.h"                      // Include simpletools
// adder(void *par) passes the memory address of cog 0 or the parent 

void adder(void *par);                        // Forward declaration

static volatile int t, n;                     // Global vars for cogs to share
unsigned int stack[44 + 128];                 // Stack vars for other cog

int main()                                    // main function
{
  t = 50;                                     // Set values of t & n
  n = 5000;

  // Launch adder function into another cog (processor).
  //cogstart(adder, NULL, stack, sizeof(stack));
  // Try THIS: "cogstart is a function from the simpletools library to access the cores"
  // This prints the state of the while loop adder function in an endless loop by having while(1)
  // cog start launch adder, and adder is endless, adder updates "n" twice the rate of cog updates "n"
  // since cog is an int it just updates the number and prints it every 100 ms, by then its updated by 2 
  // the next print cycle, because of a 50 ms pause
  
  int cog =  cogstart(adder, NULL, stack, sizeof(stack));
  print(" cog = %d\n", cog);

  // Watch what the other cog is doing to the value of n.
  while(1)
  {
    print("n = %d\n", n);                     // Display result
    pause(100);                               // Wait 1/10 of a second    
  }    
}

// Function that can continue on its 
// own if launched into another cog.

void adder(void *par)                         // Adder keeps going on its own
{
  while(1)                                    // Endless loop
  {
    n = n + 1;                                // n + 1 each time loop repeats
    pause(t);                                 // Wait for t ms between updates
  }                            
}

