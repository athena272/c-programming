#include <stdio.h>
#include <stdlib.h>

/*
    Class 70: Exercise 01

    Read an integer between 1 and 10 and print its multiplication table (1 to 10).
*/

int main(void)
{
    int i, num;

    // read and validate number in [1, 10]
    do
    {
        printf("Enter a value between 1 and 10: ");
        if (scanf("%d", &num) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    } while (num < 1 || num > 10);

    // print the table
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return EXIT_SUCCESS;
}
