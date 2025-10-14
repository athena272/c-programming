#include <stdio.h>
#include <stdlib.h>

/*
    Class 59: Exercise 08

    Write a program that, given the month number, prints how many days that
    month has. Use a switch selection structure.
    Note: Consider February as having 28 days.
*/

int main()
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
        printf("\nJanuary has 31 days\n");
        break;
    case 2:
        printf("\nFebruary has 28 days\n");
        break;
    case 3:
        printf("\nMarch has 31 days\n");
        break;
    case 4:
        printf("\nApril has 30 days\n");
        break;
    case 5:
        printf("\nMay has 31 days\n");
        break;
    case 6:
        printf("\nJune has 30 days\n");
        break;
    case 7:
        printf("\nJuly has 31 days\n");
        break;
    case 8:
        printf("\nAugust has 31 days\n");
        break;
    case 9:
        printf("\nSeptember has 30 days\n");
        break;
    case 10:
        printf("\nOctober has 31 days\n");
        break;
    case 11:
        printf("\nNovember has 30 days\n");
        break;
    case 12:
        printf("\nDecember has 31 days\n");
        break;
    default:
        printf("\nValue does not correspond to any month!\n");
    }

    return EXIT_SUCCESS;
}
