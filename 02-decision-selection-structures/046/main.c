#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 46: Logical NOT Operator (!)
   Truth Table
   -----------------
   x     |   !x
   true  |  false
   false |  true
*/

int main(void)
{
    int a = 10;

    printf("Enter any integer: ");
    scanf("%d", &a);

    printf("Ternary operator:\n");
    !(a < 0) ? printf("\tNegative value!\n")
             : printf("\tPositive or zero value!\n");

    printf("If/Else structure:\n");

    if (!(a < 0))
        printf("\tNegative value!\n");
    else
        printf("\tPositive or zero value!\n");

    printf("Program continues...\n");
    return 0;
}
