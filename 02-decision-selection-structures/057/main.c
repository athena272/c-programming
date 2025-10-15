#include <stdio.h>
#include <stdlib.h>

/*
    Class 57: Exercise 06

    Write a program to read an integer and check if it corresponds to a valid
    month in the calendar. If it does, print the month's name; otherwise,
    print the message "Invalid month".
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
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        printf("Invalid month!\n");
    }

    return EXIT_SUCCESS;
}
