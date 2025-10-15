#include <stdio.h>
#include <stdlib.h>

/*
    Class 83: Exercise 13

    Ask the user for an integer greater than 1 and say whether
    the number is prime or not. Also print its (non-trivial) divisors.
*/

int main(void)
{
    int value, i, divisors, option;

    do
    {
        // read a valid value (> 1)
        do
        {
            printf("Enter an integer greater than 1: ");
            scanf("%d", &value);
        } while (value < 2);

        // list divisors (2..value/2) and count them
        printf("Divisors of %d: ", value);
        divisors = 0;
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
            printf("%d is NOT prime\n", value);
        else
            printf("%d IS prime\n", value);

        printf("\n1 - Enter another value\n2 - Exit\n");
        scanf("%d", &option);

    } while (option != 2);

    return EXIT_SUCCESS;
}
