#include <stdlib.h>
#include <stdio.h>

/*
    A company hires a plumber at $45.00  per day.
    Write a program that asks for the number of days worked
    and prints the net amount to be paid, knowing that 8% is
    withheld for income tax. Assume a simple calculation:
    net = days * 45 - 8% of (days * 45).
*/

int main(void)
{
    float days;
    const float dailyRate = 45.0;
    const float taxRate = 0.08; // 8%

    printf("How many days were worked?: ");
    if (scanf("%f", &days) != 1 || days < 0)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    float gross = days * dailyRate;
    float tax = gross * taxRate;
    float netPay = gross - tax;

    printf("Gross amount: R$%.2f\n", gross);
    printf("Tax withheld (8%%): R$%.2f\n", tax);
    printf("Net to receive: R$%.2f\n", netPay);

    return 0;
}