#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 16
   sizeof operator
   sizeof x  or  sizeof(int)
*/

int main(void)
{
    float x = 1.0f;

    printf("Size of a float in memory: %zu bytes\n", sizeof x);
    printf("Size of an int in memory: %zu bytes\n", sizeof(int));
    printf("Size of a char in memory: %zu byte(s)\n", sizeof(char));

    // 4 * 8 = 32 bits
    return 0;
}
