#include <stdio.h>
#include <stdlib.h>

/*
    Class 80: Exercise 11

    A certain radioactive material loses half of its mass every 50 seconds.
    Given the initial mass (in grams), determine how long it takes for the
    mass to become less than 0.05 grams.
*/

int main(void)
{
    float mass;
    int time_sec = 0;

    printf("Enter the material mass in grams: ");
    if (scanf("%f", &mass) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    while (mass >= 0.05f)
    {
        mass = mass / 2.0f;
        time_sec += 50;
    }

    printf("Final mass: %.6f g\n", mass);
    printf("Elapsed time: %d seconds.\n", time_sec);

    return EXIT_SUCCESS;
}
