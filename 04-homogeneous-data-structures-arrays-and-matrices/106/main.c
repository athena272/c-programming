#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 106: How to create a matrix?
 */

int main()
{
    //type identifier
    int vet[10];
    
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    /*
     * col0 col1 col2
     * row 0 1 2 3
     * row 1 4 5 6
     * row 2 7 8 9
     */
    
    int mat2[][3] = {1,2,3,4,5,6,7};
    int mat3[3][3] = {0};
    
    float mat4[4][5];
    char mat5[10][10];

    return 0;
}

