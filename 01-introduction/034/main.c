#include <stdlib.h>
#include <stdio.h>

/*
    Read the restaurant bill amount, the tip (as a percentage)
    and the number of people. Print how much each person should pay
    assuming the bill is split equality
*/

int main()
{
    int numPeople;
    float billAmount, tipPercent;
    float tipAmount, totalAmount, amountPerPerson;

    printf("Enter the bill amount, the tip (%%), and the number of people: ");
    // printf("Value of scanf: %d\n", scanf("%f %f %d", &billAmount, &tipPercent, &numPeople));
    if (scanf("%f %f %d", &billAmount, &tipPercent, &numPeople) != 3 || numPeople <= 0)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    // Compute tip separately, then total
    tipAmount = billAmount * tipPercent / 100.0f;
    totalAmount = billAmount + tipAmount;
    amountPerPerson = totalAmount / numPeople;

    printf("Tip amount: $%.2f\n", tipAmount);
    printf("Total amount: $%.2f\n", totalAmount);
    printf("Each person will pay: $%.2f\n", amountPerPerson);

    return 0;
}