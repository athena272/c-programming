#include <stdio.h>
#include <stdlib.h>

/*
  Class 99: How to create an array?

  In this example, we’ll see different ways to declare and initialize arrays in C.
*/

int main(void)
{

    // Integer array named numbers1 with size 10
    int numbers1[10];

    /*
       Integer array named numbers2.
       The size is not specified, but an initializer list is given.
       In this case, the compiler automatically sets the size to 5.
    */
    int numbers2[] = {1, 2, 3, 4, 5};

    /*
       Integer array named numbers3.
       Size is specified as 5, but only 3 elements are initialized.
       The remaining positions are automatically filled with zeros.
    */
    int numbers3[5] = {1, 2, 3};

    /*
       Integer array named numbers4.
       Size is specified as 5, but 6 elements are provided.
       The extra element (6) will be ignored.
    */
    // int numbers4[5] = {1, 2, 3, 4, 5, 6};

    /*
       Integer array named numbers5.
       All elements initialized with zero.
    */
    int numbers5[5] = {0};

    // Character array named letters1 with size 100
    char letters1[100];

    /*
       Character array named vowels with 5 elements.
       Each character is placed inside single quotes.
    */
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    // Float array named grades initialized with three values
    float grades[3] = {7.3f, 8.5f, 4.6f};

    // Example output to confirm initialization
    printf("First vowel: %c\n", vowels[0]);
    printf("Third number in numbers2: %d\n", numbers2[2]);
    printf("Second grade: %.1f\n", grades[1]);

    return EXIT_SUCCESS;
}
