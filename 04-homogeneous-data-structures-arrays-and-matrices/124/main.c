#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define matrix_size 4

/*
Lesson 124: Exercise 14
14) Write a program that prints on the screen only the values below the main diagonal of a 4x4 matrix.

Example matrix:
        columns:  0   1   2   3
row 0:           45  78  41  58
row 1:           51  59  24  47
row 2:           17  24  19  92
row 3:           34  39  83  16
*/

void print_matrix(int matrix[matrix_size][matrix_size])
{
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    int matrix[matrix_size][matrix_size];
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            matrix[i][j] = rand() % 100; // Random integers between 0 and 99
        }
    }

    printf("Original Matrix (%dx%d):\n", matrix_size, matrix_size);
    print_matrix(matrix);

    //print elements below the main diagonal
    printf("Elements below the main diagonal:\n");
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            if (i > j)
            {
                printf("%2d ", matrix[i][j]);
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}