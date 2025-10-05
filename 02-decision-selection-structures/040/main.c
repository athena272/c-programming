#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 40: Complete decision
   Check whether an integer is negative, zero, or positive.
*/

int main(void) {
    int a = 10;

    printf("\nEnter any integer: ");
    if (scanf("%d", &a) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (a < 0) {
        printf("\n\tNegative value!\n");
    } else if (a == 0) {
        printf("\n\tValue is zero.\n");
    } else {
        printf("\n\tPositive value!\n");
    }

    printf("\nProgram continues...\n");
    return 0;
}
