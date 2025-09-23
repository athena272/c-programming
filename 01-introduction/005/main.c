#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 5
   Reading floating-point numbers
*/

int main(void)
{
    float number = 3.1415;

    printf("Value of my variable: %.2f\n", number);

    printf("Enter a real number: ");
    if (scanf("%f", &number) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    printf("Value read: %.3f\n", number);

    return 0;
}
