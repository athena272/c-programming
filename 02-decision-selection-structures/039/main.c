#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 39: Complete decision
   Checking if a number is negative
*/

int main(void) {
    int a = 10;

    printf("Enter any value: ");
    scanf("%d", &a);

    if (a < 0)
        printf("\tNegative value!\n");

    printf("Program continuation...\n");

    return 0;
}
