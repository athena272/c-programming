#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 29
   unsigned operator

   Use %u instead of %d for unsigned int
   Range for unsigned int: 0 to 4,294,967,295
   short int           -> %d or %hi
   unsigned short int  -> %hu
   unsigned long int   -> %lu
*/

int main()
{
    unsigned int x = 2147483647; // 0 ... 4,294,967,295

    unsigned short int y = 55000;

    printf("Value of y: %hu\n", y);

    unsigned short max_short = 65535; // máximo
    printf("%hu\n", max_short);       // 65535

    max_short++;
    printf("%hu\n", max_short); // 0  (voltou ao começo)

    return 0;
}
