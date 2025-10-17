#include <stdio.h>
#include <stdlib.h>

/*
  Lesson 93: Exercise 22

  Problem:
    Chico is 1.50 m tall and grows 2 cm per year.
    Zé is 1.10 m tall and grows 3 cm per year.
    Build a program that calculates and prints how many years
    are needed until Zé becomes taller than Chico.

  Approach:
    Work in centimeters (integers) to avoid floating-point drift.
    Loop until Ze > Chico, counting years.
*/

int main(void)
{
    const int CHICO_GROWTH_CM_PER_YEAR = 2;
    const int ZE_GROWTH_CM_PER_YEAR = 3;

    int chico_cm = 150; // 1.50 m
    int ze_cm = 110;    // 1.10 m
    int years = 0;

    while (ze_cm <= chico_cm)
    {
        chico_cm += CHICO_GROWTH_CM_PER_YEAR;
        ze_cm += ZE_GROWTH_CM_PER_YEAR;
        years++;
    }

    printf("Years needed: %d\n", years);
    printf("Final heights -> Chico: %.2f m, Ze: %.2f m\n",
           chico_cm / 100.0, ze_cm / 100.0);

    return EXIT_SUCCESS;
}
