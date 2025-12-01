#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Lesson 118: Exercise 08
 * 8) Create a program that calculates and prints the sum of all elements of a 5 x 7 matrix.
 */

int main()
{
    int i, j, sum;
    int mat[5][7];

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            mat[i][j] = rand() % 100;
        }
    }

    sum = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            sum += mat[i][j];
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Total sum: %d\n", sum);

    return 0;
}
