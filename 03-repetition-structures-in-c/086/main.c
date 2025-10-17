#include <stdio.h>
#include <stdlib.h>

/*
    Class 86: Exercise 16

    Goal:
      Find the smallest positive integer that is divisible by all
      the integers from 1 through 10.

    Approach:
      Start from a candidate that must be divisible by 10 (so begin at 10)
      and increase by 10 each step. For each candidate, check divisibility
      by every number from 1 to 10. When we find one that passes all checks,
      we stop and print it.
*/

int main(void)
{
    int candidate = 10; // must be divisible by 10
    int divisor_count;

    do
    {
        divisor_count = 0;
        for (int i = 1; i <= 10; i++)
        {
            if (candidate % i == 0)
                divisor_count++;
            else
                break; // early exit if any divisor fails
        }
        if (divisor_count < 10)
            candidate += 10;
    } while (divisor_count < 10);

    printf("Smallest number divisible by 1..10: %d\n", candidate); // 2520
    return EXIT_SUCCESS;
} 
