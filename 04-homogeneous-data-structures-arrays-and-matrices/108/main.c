#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 108: How to read a matrix from the keyboard?
 */

int main()
{
    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat5[3][4] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i','j','k','l'};

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter the value for row %d, column %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%3d ", mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}