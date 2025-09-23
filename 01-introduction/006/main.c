#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 6
   Reading characters
*/

int main(void)
{
    char gender = 'k';

    printf("Value of the variable 'gender': %c\n", gender);

    printf("Enter your gender (f, F, m or M): ");
    if (scanf(" %c", &gender) != 1)
    { // note the leading space: it skips pending whitespace/newlines
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    printf("Value read: %c\n", gender);

    return 0;
}
