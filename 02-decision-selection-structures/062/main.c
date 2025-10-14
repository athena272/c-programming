#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    Class 62: Exercise 09 (version 2)

    A user wants a program where they can choose which type of average to compute
    from three grades. Read the choice first; only if it is valid, read the grades.
    Then compute and display the result.

    Options:
      'a' – Arithmetic.
      'p' – Weighted (weights: 3, 3, 4).
*/

int main()
{
    double grade1, grade2, grade3;
    char choice;

    printf("Which average do you want?\n a - arithmetic\n p - weighted\n");
    if (scanf(" %c", &choice) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    choice = (char)tolower((unsigned char)choice);

    if (choice == 'a' || choice == 'p')
    {
        printf("Enter the three grades: ");
        if (scanf("%lf %lf %lf", &grade1, &grade2, &grade3) != 3)
        {
            fprintf(stderr, "Invalid grades.\n");
            return EXIT_FAILURE;
        }
    }

    if (choice == 'a')
    {
        double mean = (grade1 + grade2 + grade3) / 3.0;
        printf("Arithmetic mean: %.2f\n", mean);
    }
    else if (choice == 'p')
    {
        double mean = (grade1 * 3 + grade2 * 3 + grade3 * 4) / 10.0;
        printf("Weighted mean: %.2f\n", mean);
    }
    else
    {
        printf("\nInvalid option!!!\n");
    }

    return EXIT_SUCCESS;
}
