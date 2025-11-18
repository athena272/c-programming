#include <stdlib.h>
#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
    int i, j;
    int mat1[ROWS][COLUMNS] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    int mat2[ROWS][COLUMNS] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matSum[ROWS][COLUMNS];

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            matSum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%3d ", matSum[i][j]);
        }
        printf("\n");
    }

    return 0;
}