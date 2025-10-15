#include <stdio.h>
#include <stdlib.h>

/*
    Class 79: Exercise 10

    You decided to get rich by saving money for 30 consecutive days.
    On the 1st day you save 1 cent, on the 2nd day 2 cents, on the 3rd day 4 cents,
    on the 4th day 8 cents, and so on. Write a program to calculate how much
    money you will have at the end of 30 days.
*/

int main(void)
{
    int i, dailyAmount = 1, totalAmount = 1;

    for (i = 1; i <= 29; i++)
    {
        dailyAmount = dailyAmount * 2;
        totalAmount += dailyAmount;
    }

    printf("Total amount in cents: %d\n", totalAmount);
    printf("Total amount in dollars: $%.2f\n", totalAmount / 100.0);

    return EXIT_SUCCESS;
}
