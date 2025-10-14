#include <stdio.h>
#include <stdlib.h>

/*
    Class 67: While loop

    Ask the user for a value greater than zero.
    While the value is not greater than zero, keep asking again.
*/

int main()
{
    int value;

    printf("Enter a value greater than zero: ");
    if (scanf("%d", &value) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    // while (value <= 0) keep asking
    while (value <= 0)
    {
        printf("Invalid value! Enter a value greater than zero: ");
        if (scanf("%d", &value) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    }

    printf("Value read: %d\n", value);
    return EXIT_SUCCESS;
}
