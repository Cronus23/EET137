/*
  Multicore Example.c
  
  Launch a function into another cog (processor) and display what it does
  to the global n variable over time. 
  
  http://learn.parallax.com/propeller-c-functions/multicore-example
*/

#include "simpletools.h" // Include simpletools
// adder(void *par) passes the memory address of cog 0 or the parent

void adder(void *par); // Forward declaration
// Your turn: add a subtractor function which decrements the global value 'P' in a seperate core
// Show all cores simultaneously, create a stack array for the function
// add a new cogstart function
void subtractor(void *par); //Forward declaration

static volatile int t, n, P;  // Global vars for cogs to share
unsigned int stack[44 + 128]; // Stack vars for other cog
unsigned int subStack[44 + 128];

int main() // main function
{
  t = 50; // Set values of t & n , P
  n = 5000;
  P = 1000;

  // Launch adder function into another cog (processor).
  //cogstart(adder, NULL, stack, sizeof(stack));
  // Try THIS: "cogstart is a function from the simpletools library to access the cores"
  // This prints the state of the while loop adder function in an endless loop by having while(1)
  // cog start launch adder, and adder is endless, adder updates "n" twice the rate of cog updates "n"
  // since cog is an int it just updates the number and prints it every 100 ms, by then its updated by 2
  // the next print cycle, because of a 50 ms pause

  int cog = cogstart(adder, NULL, stack, sizeof(stack));
  int cog1 = cogstart(subtractor, NULL, subStack, sizeof(subStack));

  print(" cog = %d\n", cog);
  print(" cog1 = %d\n", cog1);

  // Watch what the other cog is doing to the value of n.

  // while loop in main ;beginning
  while (1)
  {
    print("n = %d P =%d\n", n, P); // Display result
    pause(100);                    // Wait 1/10 of a second to update
  }

  //This is the end of main
}

// Function that can continue on its
// own if launched into another cog.

void adder(void *par) // Adder keeps going on its own
{
  while (1) // Endless loop
  {
    n = n + 10; // n + 10 each time loop repeats
    pause(t);   // Wait for t ms between updates
  }
}
void subtractor(void *par)
{
  while (1)
  {
    P = P - 1; // we're subtracting here! subtracting P!
    pause(t);
  }
}
