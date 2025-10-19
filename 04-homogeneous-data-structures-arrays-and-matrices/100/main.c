#include <stdio.h>
#include <stdlib.h>

/*
  Class 100: How to print the contents of an array?
  - Print an int array, a char array, and a float array.
*/

int main(void)
{

    int i;
    int numbers[] = {1, 5, 9, 15, 43};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    float grades[3] = {7.5f, 8.3f, 9.5f};

    printf("Integers: ");
    for (i = 0; i < 5; i++)
        printf("%d ", numbers[i]);

    printf("\nVowels: ");
    for (i = 0; i < 5; i++)
        printf("%c ", vowels[i]);

    printf("\nGrades: ");
    for (i = 0; i < 3; i++)
        printf("%.2f ", grades[i]);

    printf("\n");
    return 0;
}
