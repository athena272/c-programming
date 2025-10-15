#include <stdio.h>
#include <stdlib.h>

/*
    Class 75: Exercise 06

    Write a program that prints on the screen all multiples of 7 between 1 and 9999.
*/

int main(void)
{
    int i;

    for (i = 7; i <= 9999; i += 7)
    {
        printf("%4d ", i);
    }

    return EXIT_SUCCESS;
}
