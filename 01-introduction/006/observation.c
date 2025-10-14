#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gender;

    // User enters: m<Enter>
    printf("Enter your gender (f/F m/M): ");
    scanf(" %c", &gender);
    printf("You typed: '%c'\n", gender);

    char another;
    // It didn't ask anything; reads the leftover '\n'!
    printf("Next: '%c'\n", another);
    scanf(" %c", &another);

    return 0;
}
