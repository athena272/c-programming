#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 40: Complete decision
   Check whether an integer is negative, zero, or positive.
*/

int main() {
    int a = 10;

    printf("Enter any integer: ");
    if (scanf("%d", &a) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (a < 0) {
        printf("\tNegative value!\n");
    } else if (a == 0) {
        printf("\tValue is zero.\n");
    } else {
        printf("\tPositive value!\n");
    }

    printf("Program continues...\n");
    return 0;
}
