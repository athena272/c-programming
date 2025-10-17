#include <stdio.h>
#include <stdlib.h>

/*
  Class 89: Exercise 19

  Read coordinates (X, Y) for an arbitrary number of points in the Cartesian plane.
  For each point, print the quadrant it belongs to:
    - first  quadrant:  x > 0 && y > 0
    - second quadrant:  x < 0 && y > 0
    - third  quadrant:  x < 0 && y < 0
    - fourth quadrant:  x > 0 && y < 0
  The algorithm stops when at least one coordinate is zero (print nothing in that case).
*/

int main(void)
{
    int x, y;

    do
    {
        printf("Enter x and y: ");
        if (scanf("%d %d", &x, &y) != 2)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }

        if (x != 0 && y != 0)
        {
            if (x > 0 && y > 0)
                printf("first quadrant\n");
            else if (x < 0 && y > 0)
                printf("second quadrant\n");
            else if (x < 0 && y < 0)
                printf("third quadrant\n");
            else
                printf("fourth quadrant\n");
        }
    } while (x != 0 && y != 0);

    return EXIT_SUCCESS;
}
