#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 44: Nested Decisions (if/else)
   Example showing how to check whether a number
   is negative, positive, or equal to zero.
*/

int main(void)
{
    int a = 10;

    printf("Enter any integer: ");
    scanf("%d", &a);

    printf("Ternary operator:\n");
    (a < 0)
        ? printf("\tNegative value!\n")
        : printf("\tPositive or zero value!\n");

    printf("\nIf/else structure:\n");

    if (a < 0)
    {
        printf("\tNegative value!\n");
    }
    else
    {
        if (a > 0)
            printf("\tPositive value!\n");
        else
            printf("\tValue equals zero!\n");
    }

    printf("Program continues...\n");
    return 0;
}
