#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Lesson 119: Exercise 09
 * 9) Create a program that fills a 5x10 matrix with integers.
 * Then do the following:
 * a) sum each of the rows, storing the result in a vector;
 * b) sum each of the columns, storing the result in a vector;
 * c) Print the matrix and the two vectors, identifying which is the sum of the rows and which is the sum of the columns.
 */

int main()
{
    int row, column, sum;
    int mat[5][10];
    int rowSums[5];
    int columnSums[10];

    srand(time(NULL));

    // Fill the matrix with random numbers
    for (row = 0; row < 5; row++)
    {
        for (column = 0; column < 10; column++)
        {
            mat[row][column] = rand() % 100;
        }
    }

    // a) Sum of each row
    for (row = 0; row < 5; row++)
    {
        sum = 0;
        for (column = 0; column < 10; column++)
        {
            sum += mat[row][column];
        }
        rowSums[row] = sum;
    }

    // b) Sum of each column
    for (column = 0; column < 10; column++)
    {
        sum = 0;
        for (row = 0; row < 5; row++)
        {
            sum += mat[row][column];
        }
        columnSums[column] = sum;
    }

    // c) Print the structures
    printf("Matrix:\n");
    for (row = 0; row < 5; row++)
    {
        for (column = 0; column < 10; column++)
        {
            printf("%2d ", mat[row][column]);
        }
        printf("\n");
    }

    printf("Vector with the sum of the rows:\n");
    for (row = 0; row < 5; row++)
    {
        printf("Row %d: %d\n", row, rowSums[row]);
    }

    printf("Vector with the sum of the columns:\n");
    for (column = 0; column < 10; column++)
    {
        printf("Column %d: %d\n", column, columnSums[column]);
    }

    return 0;
}
