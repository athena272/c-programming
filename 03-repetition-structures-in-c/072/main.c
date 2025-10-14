#include <stdio.h>
#include <stdlib.h>

/*
    Class 72: Exercise 03

    Create a program that sums all odd numbers between 1 and 1000 and prints the result.
    Below are two versions:
    - Version 1: Using an `if` condition to check odd numbers.
    - Version 2: More efficient, incrementing by 2 to skip even numbers.
*/

int main()
{
    int i, sum = 0;

    // --- Version 1: Using if condition ---
    for (i = 1; i <= 1000; i++)
    {
        if (i % 2 == 1)
            sum += i;
    }

    printf("Sum of odd numbers from 1 to 1000 (version 1): %d\n", sum);

    // --- Version 2: Increment by 2 ---
    sum = 0; // reset sum
    for (i = 1; i <= 1000; i += 2)
    {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to 1000 (version 2): %d\n", sum);

    return EXIT_SUCCESS;
}
