#include <stdio.h>
#include <stdlib.h>

/*
    Class 78: Exercise 09

    Compute A = 1 + 2 + 3 + ... + n, where n is a positive integer
    provided by the user (n > 0).
*/

int main(void)
{
    int i, n, A = 0;

    // read n and validate: must be > 0
    do
    {
        printf("Enter the value of n (n > 0): ");
        if (scanf("%d", &n) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    } while (n < 1);

    // accumulate the sum from 1 to n
    for (i = 1; i <= n; i++)
    {
        A += i;
    }

    printf("Sum from 1 to %d: %d\n", n, A);
    return EXIT_SUCCESS;
}
