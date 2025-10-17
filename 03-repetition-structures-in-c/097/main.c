#include <stdio.h>
#include <stdlib.h>

/*
  Class 97: Exercise 26

  Read two valid grades (each in the range [0, 10]) and print their average.
  After each calculation, ask the user: "New calculation? (1-Yes 2-No)".
  If the user enters 1, repeat the whole process; if 2, finish the program.
  Each grade must be validated separately.
*/

int main(void)
{
    float g1, g2, average;
    int option;

    do
    {
        // validate first grade
        do
        {
            printf("Enter the first grade (0..10): ");
            if (scanf("%f", &g1) != 1)
            {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
            }
        } while (g1 < 0.0f || g1 > 10.0f);

        // validate second grade
        do
        {
            printf("Enter the second grade (0..10): ");
            if (scanf("%f", &g2) != 1)
            {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
            }
        } while (g2 < 0.0f || g2 > 10.0f);

        average = (g1 + g2) / 2.0f;
        printf("Average: %.2f\n", average);

        // ask whether to run a new calculation
        do
        {
            printf("New calculation? (1-Yes 2-No): ");
            if (scanf("%d", &option) != 1)
            {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
            }
        } while (option != 1 && option != 2);

    } while (option == 1);

    return EXIT_SUCCESS;
}
