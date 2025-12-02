#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define matrix_size 5

void print_matrix(int matrix[][matrix_size])
{
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/*
 * Lesson 121: Exercise 11
 * 11) Create a program that prints the main diagonal of a 5x5 matrix on the screen.
 */
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

    print_matrix(matrix);

    // print diagonal elements
    printf("Diagonal elements of the matrix:\n");
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            if (i == j)
            {
                printf("%d ", matrix[i][j]);
                continue;
            }
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}