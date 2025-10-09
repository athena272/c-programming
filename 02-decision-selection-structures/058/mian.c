#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    Class 58: Exercise 07

    Ask the user for a character and say whether it is a vowel or not.
*/

int main()
{
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1)
    {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    // Use tolower for a case-insensitive check (cast to unsigned char is safest)
    char c = (char) tolower((unsigned char)ch);
    printf("C value is: %c\n", c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("\tVowel...\n");
    } else {
        printf("\tConsonant\n");
    }

    return EXIT_SUCCESS;
}