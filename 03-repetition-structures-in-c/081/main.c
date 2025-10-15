#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int CLASS_SIZE = 45;

    int age;
    float height;

    // (a) average age of students shorter than 1.70 m
    int countUnder170 = 0;
    int sumAgeUnder170 = 0;

    // (b) average height of students older than 20
    int countOver20 = 0;
    float sumHeightOver20 = 0.0f;

    for (int i = 1; i <= CLASS_SIZE; ++i)
    {
        printf("Student %d — enter age (years) and height (meters): ", i);
        if (scanf("%d%f", &age, &height) != 2)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }

        if (height < 1.70f)
        { // part (a)
            sumAgeUnder170 += age;
            countUnder170++;
        }

        if (age > 20)
        { // part (b)
            sumHeightOver20 += height;
            countOver20++;
        }
    }

    if (countUnder170 > 0)
    {
        printf("Average age of students under 1.70 m: %.2f years\n",
               (double)sumAgeUnder170 / countUnder170);
    }
    else
    {
        printf("No students under 1.70 m to compute average age.\n");
    }

    if (countOver20 > 0)
    {
        printf("Average height of students older than 20: %.2f m\n",
               sumHeightOver20 / countOver20);
    }
    else
    {
        printf("No students older than 20 to compute average height.\n");
    }

    return EXIT_SUCCESS;
}
