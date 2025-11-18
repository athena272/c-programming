#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 111: Exercise 01
 * 1) Make a program that fills an integer array of size 10 by asking the user for values.
 *    Then, calculate and save the square of each element of the first array into a second array.
 *    Finally, print both arrays.
 */

int main() {
    int i, vector1[10], vector2[10];

    for (i = 0; i < 10; i++) {
        printf("Enter the value for position %d: ", i);
        scanf("%d", &vector1[i]);
    }

    for (i = 0; i < 10; i++)
        vector2[i] = vector1[i] * vector1[i];

    printf("\nVector 1: ");
    for (i = 0; i < 10; i++)
        printf("%3d", vector1[i]);

    printf("\nVector 2: ");
    for (i = 0; i < 10; i++)
        printf("%3d", vector2[i]);

    return 0;
}

