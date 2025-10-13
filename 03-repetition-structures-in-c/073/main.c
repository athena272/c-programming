#include <stdio.h>
#include <stdlib.h>

/*
    Class 72: Exercise 03

    Create a program that sums all odd numbers between 1 and 1000 and prints the result.
    Below are two versions:
    - More efficient, incrementing by 2 to skip even numbers.
*/

int main()
{
    int i, sum;
    for (i = 1; i <= 1000; i += 2)
    {
        sum = sum + i;
    }

    printf("Sum of odd numbers from 1 to 1000: %d\n", sum);

    return EXIT_SUCCESS;
}