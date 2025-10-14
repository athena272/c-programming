#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 49: Chained else-if

   Read an integer and print whether it is
   negative, positive, or equal to zero.

   We show two equivalent versions:
   1) Nested if/else
   2) Chained else-if
*/

int main()
{
    int a = 10;

    printf("Enter any integer: ");
    scanf("%d", &a);

    // First version: nested if/else
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

    // Second version: chained else-if (clearer and preferred)
    if (a < 0)
    {
        printf("\tNegative value!\n");
    }
    else if (a > 0)
    {
        printf("\tPositive value!\n");
    }
    else
    {
        printf("\tValue equals zero!\n");
    }

    return 0;
}
