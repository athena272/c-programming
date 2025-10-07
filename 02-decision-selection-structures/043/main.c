#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 43: The ternary operator in C
   syntax: condition ? true_expr : false_expr
*/

int main(void) {
    int a = 10;

    printf("\nEnter any integer: ");
    scanf("%d", &a);

    printf("Ternary operator:\n");
    (a < 0) ? printf("\n\tNegative value!\n")
            : printf("\n\tPositive or zero value!\n");

    printf("\nIf/else\n");
    if (a < 0)
        printf("\n\tNegative value!\n");
    else
        printf("\n\tPositive or zero value!\n");

    printf("\nProgram continues...\n");
    return 0;
}
