#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MATRIX_SIZE 7

void print_matrix(int matrix[][MATRIX_SIZE])
{
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/*
 * Lesson 122: Exercise 12
 * 12) Create a program that prints the secondary diagonal of a 7x7 matrix on the screen.
 */
int main()
{
    srand(time(NULL));
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            matrix[i][j] = rand() % 100; // Random integers between 0 and 99
        }
    }

    print_matrix(matrix);
    // print diagonal elements
    printf("Diagonal elements of the matrix:\n");
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
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

    //print second diagonal elements
    printf("Second diagonal elements of the matrix:\n");
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            if (i + j == MATRIX_SIZE - 1)
            {
                printf("%2d ", matrix[i][j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}