#include <stdio.h>
#include <stdlib.h>

/*
    Class 76: Exercise 07

    Read an integer N. Print the square of each even number from 1 up to N
    (inclusive), when applicable.
*/

int main(void)
{
    int i, n;

    printf("Enter an integer N: ");
    if (scanf("%d", &n) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    // Start at 2 (first positive even) and jump by 2 to visit only evens
    for (i = 2; i <= n; i += 2)
    {
        printf("%d^2 = %d\n", i, i * i);
    }

    return EXIT_SUCCESS;
}
