#include <stdio.h>
#include <stdlib.h>

/*
  Lesson 94: Exercise 23

  Task:
    Print a half-triangle made of asterisks like this:

    *
    **
    ***
    ****
    *****
    ******
    *******
    ********

  Constraints:
    - Use the instruction "printf" at most 2 times in the source.
    - Use the newline escape '\n' at most 2 times in the source.

  Approach:
    Nested loops. One printf prints "*", the other prints the newline.
*/

int main(void)
{
    const int ROWS = 8;

    for (int r = 1; r <= ROWS; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
