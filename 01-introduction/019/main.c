#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 19
   long long operator for int type
   %lli / %lld for printing long long int
*/

int main(void)
{
    long long int x = 2147483647;

    printf("Size of x in bytes: %zu\n", sizeof x);

    printf("Value of x: %lld\n", x);
    x++;
    printf("Value of x after ++: %lli\n", x);

    return 0;
}
