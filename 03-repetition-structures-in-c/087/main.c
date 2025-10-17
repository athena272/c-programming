#include <stdio.h>
#include <stdlib.h>

/*
    Class 87: Exercise 17

    Read integers from the user until 0 is entered.
    When 0 is entered, print how many positive and how many negative
    numbers were typed.
*/

int main(void)
{
    int num, positives = 0, negatives = 0;

    do
    {
        printf("Enter an integer (0 to finish): ");
        if (scanf("%d", &num) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }

        if (num > 0)
        {
            positives++;
        }
        else if (num < 0)
        {
            negatives++;
        }
        // if num == 0 we just exit the loop

    } while (num != 0);

    printf("Positives: %d\nNegatives: %d\n", positives, negatives);
    return EXIT_SUCCESS;
}
