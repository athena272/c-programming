#include <stdio.h>
#include <stdlib.h>

/*
    Class 68: do-while repetition structure

    Read a value greater than zero using a while loop,
    then read another value greater than zero using a do-while loop.
*/

int main()
{
    int value1, value2;

    printf("Enter a value greater than zero: ");
    if (scanf("%d", &value1) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    // while: check first, then execute
    while (value1 <= 0)
    {
        printf("Invalid value! Enter a value greater than zero: ");
        if (scanf("%d", &value1) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    }
    printf("Value read: %d\n", value1);

    // do-while: execute at least once, then check
    do
    {
        printf("Enter a value greater than zero: ");
        if (scanf("%d", &value2) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    } while (value2 <= 0);

    printf("Value read: %d\n", value2);

    return EXIT_SUCCESS;
}
