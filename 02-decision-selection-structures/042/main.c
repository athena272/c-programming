#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 42: Indentation and use of braces

   Tip: Always use braces even for single-statement blocks.
   It prevents bugs when adding lines later and keeps indentation consistent.
*/

int main(void) {
    int a = 10;

    printf("Enter any integer: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("\tNegative value!\n");
        printf("\tNegative value (again).\n");
    } else {
        printf("\tPositive or zero value!\n");
        printf("\tPositive or zero value (again).\n");
    }

    printf("Program continues...\n");
    return 0;
}
