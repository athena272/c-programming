#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Lesson 123: Exercise 13
 * 13) Create a program to calculate the transpose of a 5x4 matrix.
 * Print both matrices on the screen.
 */
int main()
{
    int rowsSize = 5;
    int colsSize = 4;

    srand(time(NULL));
    int original_matrix[rowsSize][colsSize];
    int transposed_matrix[colsSize][rowsSize];
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < colsSize; j++)
        {
            original_matrix[i][j] = rand() % 100; // Random integers between 0 and 99
        }
    }

    // Print original matrix
    printf("Original Matrix (%dx%d):\n", rowsSize, colsSize);
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < colsSize; j++)
        {
            printf("%2d ", original_matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate transpose
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < colsSize; j++)
        {
            transposed_matrix[j][i] = original_matrix[i][j];
        }
    }
    // Print transposed matrix
    printf("Transposed Matrix (%dx%d):\n", colsSize, rowsSize);
    for (int i = 0; i < colsSize; i++)
    {
        for (int j = 0; j < rowsSize; j++)
        {
            printf("%2d ", transposed_matrix[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
