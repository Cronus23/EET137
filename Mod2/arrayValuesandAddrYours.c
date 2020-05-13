/*

 Array Value and Address.c

 Display a variable’s value and its address.

*/

#include "simpletools.h"                         // Include simpletools library
// Your turn use char array type and verify it works program prints values and addresses
// also prints address locations
char array[5] = {11,13,17,19,23};                             

int main()                                       // Main function

{

print("array start address = %d \n\n", array);

for(int i = 0; i < 5; i++)
{ print(" array[%d] = %d \n", i, array[i]);
print("&array[%d] = %d \n", i, &array[i]);
}
}