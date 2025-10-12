#include <stdio.h>
#include <stdlib.h>

/*
    Class 71: Exercise 02

    Repeat reading a password until it is valid.
    For each incorrect attempt, print "Invalid password".
    When the correct password is entered, print "Access permitted" and end.
    Consider the correct password to be 123456.
*/

int main(void)
{
    const int correctPassword = 123456;
    int password;

    printf("Enter your password: ");
    if (scanf("%d", &password) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    while (password != correctPassword)
    {
        printf("Invalid password!\n\nEnter your password: ");
        if (scanf("%d", &password) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    }

    printf("Access permitted!\n");
    return EXIT_SUCCESS;
}
