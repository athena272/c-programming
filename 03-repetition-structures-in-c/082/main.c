#include <stdio.h>
#include <stdlib.h>

/*
    Class 82: Exercise 13

    Ask the user for an integer greater than 1 and say whether
    the informed number is prime or not. Show the divisors found.
*/

int main(void)
{
    int value, i, divisors, option;

    do
    {
        // read a value > 1
        do
        {
            printf("Enter a value greater than 1: ");
            if (scanf("%d", &value) != 1)
            {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
            }
        } while (value < 2);

        // check divisors in [2, value/2]
        printf("Divisors of %d: ", value);
        divisors = 0; // reset for each run!
        for (i = 2; i <= value / 2; i++)
        {
            if (value % i == 0)
            {
                printf("%d ", i);
                divisors++;
            }
        }
        printf("\n");

        if (divisors != 0)
            printf("%d is NOT prime.\n", value);
        else
            printf("%d IS prime.\n", value);

        printf("\n1 - Enter another value\n2 - Exit\nOption: ");
        if (scanf("%d", &option) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    } while (option != 2);

    return EXIT_SUCCESS;
}
