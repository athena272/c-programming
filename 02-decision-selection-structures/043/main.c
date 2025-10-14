#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 43: The ternary operator in C
   syntax: condition ? true_expr : false_expr
*/

int main()
{
    int a = 10;

    printf("Enter any integer: ");
    scanf("%d", &a);

    printf("Ternary operator:\n");
    (a < 0) ? printf("\tNegative value!\n")
            : printf("\tPositive or zero value!\n");

    printf("\nIf/else\n");
    if (a < 0)
        printf("\tNegative value!\n");
    else
        printf("\tPositive or zero value!\n");

    printf("Program continues...\n");
    return 0;
}
