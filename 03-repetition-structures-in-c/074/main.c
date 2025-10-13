#include <stdio.h>
#include <stdlib.h>

/*
    Class 74: Exercise 05

    Read the grades of a student's two assessments, validating each one
    separately. Only accept valid grades in the range [0, 10]. Then compute
    and print the semester average.
*/

int main(void)
{
    double grade1, grade2, avg;

    // read and validate first grade
    do
    {
        printf("Enter the first grade (0–10): ");
        if (scanf("%lf", &grade1) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    } while (grade1 < 0.0 || grade1 > 10.0);

    // read and validate second grade
    do
    {
        printf("Enter the second grade (0–10): ");
        if (scanf("%lf", &grade2) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
    } while (grade2 < 0.0 || grade2 > 10.0);

    avg = (grade1 + grade2) / 2.0;
    printf("Final average: %.2f\n", avg);

    return EXIT_SUCCESS;
}