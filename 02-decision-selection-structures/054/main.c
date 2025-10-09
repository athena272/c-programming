#include <stdio.h>
#include <stdlib.h>

/*
  Lesson 54 — Exercise 03
  Read an integer and report whether it is divisible by 2, by 3,
  or by 5 (i.e., divisible by at least one of them). Otherwise,
  say it is not divisible by any of them.
*/

int main(void)
{
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    /* If the remainder is zero for 2 OR 3 OR 5, it's divisible. */
    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
    {
        printf("Divisible by 2, 3, or 5.\n");
    }
    else
    {
        printf("Not divisible by 2, 3, or 5.\n");
    }

    return 0;
}
