#include <stdio.h>
#include <stdlib.h>

/*
    Class 69: Differences between for, while, and do-while

    Example: print the numbers 0 to 10 using each repetition structure.
*/

int main(void)
{
    int i;

    // --- for: init; condition; increment (checked before each iteration)
    printf("Generated with for: ");
    for (i = 0; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // --- while: check condition first, then execute body
    printf("Generated with while: ");
    i = 0;
    while (i <= 10)
    {
        printf("%d ", i);
        i++; // note: you must increment manually
    }
    printf("\n");

    // --- do-while: execute body at least once, then check condition
    printf("Generated with do-while: ");
    i = 0;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return EXIT_SUCCESS;
}
