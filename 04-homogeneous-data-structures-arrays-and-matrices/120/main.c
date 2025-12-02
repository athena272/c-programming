#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MATRIX_SIZE 3

void print_matrix(int matrix[][MATRIX_SIZE])
{
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/*
 * Lesson 120: Exercise 10
 * 10) Given two 3x3 matrices A and B, create a program to calculate the sum of the
 * matrices and save it in a matrix C. Print all three matrices.
 */
int main()
{
    srand(time(NULL));
    int i, j, A[MATRIX_SIZE][MATRIX_SIZE], B[MATRIX_SIZE][MATRIX_SIZE], C[MATRIX_SIZE][MATRIX_SIZE];

    for (i = 0; i < MATRIX_SIZE; i++)
    {
        for (j = 0; j < MATRIX_SIZE; j++)
        {
            A[i][j] = rand() % 100;
            B[i][j] = rand() % 100;
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matrix A: \n");
    print_matrix(A);

    printf("Matrix B: \n");
    print_matrix(B);

    printf("Matrix C: \n");
    print_matrix(C);
}