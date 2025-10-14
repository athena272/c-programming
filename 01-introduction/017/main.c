#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 17
   short operator for int type
   range: -32,768 to 32,767
   %hi or %d for printing short
*/

int main()
{
    int y = 0;
    short int x = 32767;

    printf("Size of an int in memory: %zu bytes\n", sizeof y);
    printf("Size of a short int in memory: %zu bytes\n", sizeof x);

    printf("Value of x: %d\n", x);
    x++;
    printf("Value of x after ++: %d\n", x);

    return 0;
}
