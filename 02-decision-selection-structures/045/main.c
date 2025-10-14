#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 45: Nested Ternary Operator in C
   Demonstrates the use of nested ternary operators
   to check whether a number is negative, positive, or zero.
*/

int main()
{
    int a = 10;

    printf("Enter any integer: ");
    scanf("%d", &a);

    printf("Nested Ternary Operator:\n");

    (a < 0)   ? printf("\tNegative value!\n")
    : (a > 0) ? printf("\tPositive value!\n")
              : printf("\tValue equals zero!\n");

    printf("Program continues...\n");
    return 0;
}
