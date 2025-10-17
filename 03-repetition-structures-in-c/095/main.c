#include <stdio.h>
#include <stdlib.h>

/*
  Class 95: Exercise 24

  Write a program that displays the following sequence:

  I=1 J=7 -> j - i = 6
  I=1 J=6
  I=1 J=5 -> j - i = 4
  I=3 J=9 -> j - i = 6
  I=3 J=8
  I=3 J=7 -> j - i = 4
  I=5 J=11 -> j - i = 6
  I=5 J=10
  I=5 J=9 -> j - i = 4
  ...
  I=9 J=15
  I=9 J=14
  I=9 J=13
*/

int main(void)
{
    int i, j;

    // Outer loop controls I (increments by 2 each cycle)
    for (i = 1; i <= 9; i += 2)
    {

        // Inner loop controls J (starts at i + 6, decreases until i + 4)
        for (j = i + 6; j >= i + 4; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }

        // Separate each I group for better readability
        if (i != 9)
        {
            printf("\n"); 
        }
    }

    return EXIT_SUCCESS;
}
