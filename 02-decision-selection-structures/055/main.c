#include <stdio.h>
#include <stdlib.h>

/*
  Lesson 55 — Exercise 04
  Build a program that lets the user convert currency
  either from Brazilian Real (BRL) to U.S. Dollar (USD)
  or from USD to BRL.

  Use the exchange rate: 1 USD = 5.30 BRL.
*/

int main()
{
    const double RATE = 5.30;
    double amount, converted;
    int option;

    printf("Enter the amount to convert: ");
    if (scanf("%lf", &amount) != 1)
    {
        fprintf(stderr, "Invalid amount.\n");
        return 1;
    }

    printf("1 - Convert BRL to USD\n"
           "2 - Convert USD to BRL\n"
           "Choose an option: ");
    if (scanf("%d", &option) != 1)
    {
        fprintf(stderr, "Invalid option.\n");
        return 1;
    }

    switch (option)
    {
    case 1: // BRL -> USD
        converted = amount / RATE;
        printf("Converted amount: $%.2f\n", converted);
        break;

    case 2: // USD -> BRL
        converted = amount * RATE;
        printf("Converted amount: R$%.2f\n", converted);
        break;

    default:
        printf("Invalid option!\n");
        return 1;
    }

    return 0;
}