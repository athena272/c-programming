#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
    int i, j;
    int matrix[ROWS][COLUMNS];
    printf("Time null equals to: %ld\n", time(NULL));

    srand(time(NULL)); // Seed the random number generator for reproducibility
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            matrix[i][j] = 1 + rand() % 99; // Random integers between 1 and 99
        }
    }

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}