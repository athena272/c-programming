#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 20
   size of a float in memory
   %f for printing floats
*/

int main(void)
{
    float x = 3.1415f;

    printf("A float requires %zu bytes of memory.\n", sizeof x);

    return 0;
}
