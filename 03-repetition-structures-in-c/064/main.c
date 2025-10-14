#include <stdio.h>
#include <stdlib.h>

/*
    Class 64: For loop (repetition structure)

    Demo: print numbers using manual i++ calls (not recommended)
    and then using a for loop (recommended).
*/

int main()
{
    int i = 0;

    // Manual increments (just to illustrate why a loop is better)
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d\n", i++);

    // for (init; condition; increment)
    for (i = 0; i <= 10; i++)
    {
        printf("%d ", i);
        printf("%d | ", 500);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
