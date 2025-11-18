#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Lesson 112: Exercise 02
 * 2) Make a program that sums the content of two vectors of size 25 and stores
 *    the result in a third vector. Print the three vectors on the screen.
 */

int main() {
    int i, vector1[25], vector2[25], vector3[25];

    srand(time(NULL));

    for (i = 0; i < 25; i++) {
        vector1[i] = rand() % 100;
        vector2[i] = rand() % 100;
    }

    for (i = 0; i < 25; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    printf("\nVector 1: ");
    for (i = 0; i < 25; i++)
        printf("%3d", vector1[i]);

    printf("\nVector 2: ");
    for (i = 0; i < 25; i++)
        printf("%3d", vector2[i]);

    printf("\nVector 3: ");
    for (i = 0; i < 25; i++)
        printf("%3d", vector3[i]);

    printf("\n");

    return 0;
}

