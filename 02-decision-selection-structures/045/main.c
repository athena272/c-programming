#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 45: Nested Ternary Operator in C
   Demonstrates the use of nested ternary operators
   to check whether a number is negative, positive, or zero.
*/

int main(void)
{
    int a = 10;

    printf("\nEnter any integer: ");
    scanf("%d", &a);

    printf("Nested Ternary Operator:\n");

    (a < 0)   ? printf("\n\tNegative value!\n")
    : (a > 0) ? printf("\n\tPositive value!\n")
              : printf("\n\tValue equals zero!\n");

    printf("\nProgram continues...\n");
    return 0;
}
