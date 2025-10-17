#include <stdio.h>
#include <stdlib.h>

/*
    Class 85: Exercise 15

    Ask the user for two integers and print their product
    WITHOUT using the multiplication operator.

    Idea: repeated addition.  We add |b| to the result |a| times
    and then fix the sign at the end.
*/

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d%d", &a, &b) != 2)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    // Repeated addition using absolute values
    int times = a < 0 ? -a : a;  // |a|
    int addend = b < 0 ? -b : b; // |b|
    int result = 0;

    for (int i = 0; i < times; i++)
    {
        result += addend;
    }

    // Fix the sign: product is negative if exactly one operand is negative
    if ((a < 0) ^ (b < 0))
        result = -result;

    printf("%d x %d = %d\n", a, b, result);
    return EXIT_SUCCESS;
}
