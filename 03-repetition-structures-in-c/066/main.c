#include <stdio.h>
#include <stdlib.h>

/*
    Class 66: Increment different from 1

    Example: Print all odd numbers from 1 to 100 using a for loop
    with an increment of 2.
*/

int main()
{
    int i;

    for (i = 1; i <= 100; i += 2) // prints 50 numbers (1, 3, 5, ...)
        printf("%d ", i);

    printf("\n");
    return EXIT_SUCCESS;
}
