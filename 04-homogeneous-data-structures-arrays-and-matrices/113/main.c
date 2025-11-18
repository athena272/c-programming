#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 113: Exercise 03
 * 3) Write a program that reads a vector N of size 20 and prints it on the screen.
 *    Then, swap the 1st element with the last, the 2nd with the second to last, ...
 *    up to the 10th with the 11th. Print the modified vector N.
 *
 *    Example:
 *    index:  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
 *    vector: 14 52 36 54 78 84 91 16 18 24 57 55 32 39 76 81 46 43 48 29
 */

int main() {
    int i, end = 19, temp, vector[20];

    // Read 20 values from the user
    for (i = 0; i < 20; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &vector[i]);
    }

    // Print the original vector
    printf("Original vector: ");
    for (i = 0; i < 20; i++)
        printf("%2d ", vector[i]);

    // Swap elements: first with last, second with second-to-last, etc.
    // Only iterate through the first half (10 iterations)
    for (i = 0; i < 10; i++) {
        temp = vector[i];         // Save the value at position i
        vector[i] = vector[end];  // Replace position i with value from position end
        vector[end] = temp;       // Replace position end with saved value
        end--;                     // Move end pointer one position back
    }

    // Print the modified vector
    printf("\nModified vector: ");
    for (i = 0; i < 20; i++)
        printf("%2d ", vector[i]);

    printf("\n");

    return 0;
}

