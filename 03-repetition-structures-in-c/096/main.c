#include <stdio.h>
#include <stdlib.h>

/*
    Class 96 — Exercise 25

    Read two integers X and Y. Then print the sequence from 1 to Y,
    moving to a new line after every X numbers.

    Example (input):
      3 99
    Example (output):
      1 2 3
      4 5 6
      ...
      97 98 99
*/

int main(void)
{
    int x, y;

    // Read X and Y
    printf("Enter X and Y: ");
    if (scanf("%d %d", &x, &y) != 2)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    // Optional: basic validation
    if (x <= 0 || y <= 0)
    {
        fprintf(stderr, "X and Y must be positive integers.\n");
        return EXIT_FAILURE;
    }

    // Print numbers from 1 to Y with X numbers per line
    for (int i = 1; i <= y; i++)
    {
        printf("%2d", i);
        if (i % x == 0 || i == y)
            printf("\n");
        else
            printf(" ");
    }

    return EXIT_SUCCESS;
}
