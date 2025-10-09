#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // tolower

/*
   Lesson 47: Logical AND (&&)
   Reads gender (f/F or m/M) and age, then checks conscription rule.
*/

int main(void)
{
    int age;
    char gender;

    printf("Enter your gender (f/F or m/M) and your age: ");
    // leading space before %c skips leftover newlines/whitespace
    if (scanf(" %c%d", &gender, &age) != 2)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    // make gender lowercase only for the comparison
    if (tolower((unsigned char)gender) == 'm' && age == 18)
        printf("Mandatory enlistment!\n");
    else
        printf("Exempt!\n");

    return 0;
}
