#include <stdio.h>
#include <stdlib.h>

/*
  Lesson 92: Exercise 21

  Write a program that prints the following shape:
  - 10 lines
  - 20 asterisks (*) per line

  Constraints:
  - The instruction "printf" may be used at most 2 times in the source.
  - The newline escape '\n' may be used at most once in the source.

  Approach:
  - Use nested for-loops:
      * Outer loop controls the number of lines.
      * Inner loop prints 20 asterisks.
  - Keep exactly two printf statements:
      * One to print "*"
      * One to print the newline (reused each line)
*/

int main(void)
{
  const int ROWS = 10;
  const int COLS = 20;

  for (int r = 0; r < ROWS; r++)
  { // 10 lines
    for (int c = 0; c < COLS; c++)
    { // 20 columns
      printf("*");
    }
    printf("\n"); // this is the single use of '\n' in the source
  }

  return EXIT_SUCCESS;
}
