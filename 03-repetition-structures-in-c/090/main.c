#include <stdio.h>
#include <stdlib.h>

/*
  Class 90: Difference between operators && and &

  Read Cartesian coordinates (x, y) and print which quadrant the point belongs to.
  The loop stops when either coordinate is zero.

  Below there are TWO versions:
  1) Using single '&'  (bitwise AND — both sides are always evaluated)
  2) Using '&&'        (logical AND with short-circuit)
*/
int main(void)
{
    int x, y;

    /* -------- Version 1: using single '&' (bitwise AND) -------- */
    do
    {
        printf("Enter x and y: ");
        scanf("%d%d", &x, &y);

        if (x != 0 & y != 0)
        { // both expressions evaluated
            if (x > 0 & y > 0)
                printf("First quadrant\n");
            else if (x < 0 & y > 0)
                printf("Second quadrant\n");
            else if (x < 0 & y < 0)
                printf("Third quadrant\n");
            else
                printf("Fourth quadrant\n");
        }
    } while (x != 0 & y != 0); // stops when x == 0 or y == 0

    /* -------- Version 2: using '&&' (logical AND, short-circuit) -------- */
    // Reset example interaction (optional; remove if not needed)
    // If you want to run only one version, comment the other out.
    do
    {
        printf("Enter x and y: ");
        scanf("%d%d", &x, &y);

        if (x != 0 && y != 0)
        { // second side not evaluated if first is false
            if (x > 0 && y > 0)
                printf("First quadrant\n");
            else if (x < 0 && y > 0)
                printf("Second quadrant\n");
            else if (x < 0 && y < 0)
                printf("Third quadrant\n");
            else
                printf("Fourth quadrant\n");
        }
    } while (x != 0 && y != 0);

    return EXIT_SUCCESS;
}
