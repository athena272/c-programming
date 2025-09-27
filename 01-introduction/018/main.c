#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 18
   size of an int in memory
   range: -2,147,483,648 to 2,147,483,647
   %d for printing int
*/

int main(void)
{
    int x = 2147483647; // maximum value for a 32-bit signed int

    printf("Value of x: %d\n", x);
    x++;
    printf("Value of x after ++: %d\n", x);

    return 0;
}
