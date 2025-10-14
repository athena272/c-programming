#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    Class 61: Exercise 09

    A user wants a program where they can choose which type of average to compute
    from three grades. Read the grades and the type of average chosen by the user,
    then calculate and display the result.

    Options:
      'a' – Arithmetic.
      'p' – Weighted (weights: 3, 3, 4).
*/

int main()
{
    double g1, g2, g3;
    char choice;

    printf("Which average do you want?\n a - arithmetic\n p - weighted\n");
    if (scanf(" %c", &choice) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    printf("Enter the three grades: ");
    if (scanf("%lf %lf %lf", &g1, &g2, &g3) != 3)
    {
        fprintf(stderr, "Invalid grades.\n");
        return EXIT_FAILURE;
    }

    choice = (char)tolower((unsigned char)choice);

    if (choice == 'a')
    {
        double mean = (g1 + g2 + g3) / 3.0;
        printf("Arithmetic mean: %.2f\n", mean);
    }
    else if (choice == 'p')
    {
        double mean = (g1 * 3 + g2 * 3 + g3 * 4) / 10.0;
        printf("Weighted mean: %.2f\n", mean);
    }
    else
    {
        printf("Invalid option!\n");
    }

    return EXIT_SUCCESS;
}
