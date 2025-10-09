#include <stdio.h>
#include <stdlib.h>

/*
    Class 60: Exercise 08 (second version)

    Write a program that, given the number of a month,
    prints how many days that month has. Use a switch statement.
    Note: Consider February as having 28 days.
*/

int main(void)
{
    int month;

    printf("Enter a number: ");
    if (scanf("%d", &month) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThis month has 31 days\n");
        break;

    case 2:
        printf("\nThis month has 28 days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThis month has 30 days\n");
        break;

    default:
        printf("\nValue does not correspond to any month!\n");
    }

    return EXIT_SUCCESS;
}
