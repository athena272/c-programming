#include <stdio.h>
#include <stdlib.h>

/*
    Read an amount in Brazilian reais (BRL) and convert it to US dollars (USD).
    Exchange rate: 1 USD = 5.30 BRL -> USD = BRL / 5.30
*/

int main()
{
    double  brl, usd;
    const double BRL_per_USD = 5.30;

    printf("Enter te amount in BRL (reais): ");
    if(scanf("%lf", &brl) != 1 || brl < 0)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    usd = brl / BRL_per_USD;

    printf("Amount in USD: $%.2f\n", usd);

    return 0;
}