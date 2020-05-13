/*

 Variable Value and Address.c

 Display a variable’s value and its address.

*/

#include "simpletools.h"                         // Include simpletools library

int variable = 123;                              // Declare/initialize variable

int main()                                       // Main function

{

 print("variable value   = %d \n",  variable);  // Display variable value

 print("variable address = %d \n", &variable);  // Display variable address

 variable = 4321;  

 print("variable value   = %d \n",  variable);  // Display variable value

 print("variable address = %d \n", &variable);  // Display variable address

}