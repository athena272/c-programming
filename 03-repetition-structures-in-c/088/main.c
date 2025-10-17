#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    Class 88: Exercise 18

    A survey was conducted among residents of a region collecting age, sex (M/F),
    and salary for X people (X is provided by the user). Write a program that reports:
      a) the average salary of the group;
      b) the highest and the lowest age in the group;
      c) the number of women whose salary is at most R$2000.00.
*/

int main(void)
{
    int x;

    // Read a positive number of respondents
    do
    {
        printf("Enter the number of respondents (X): ");
        if (scanf("%d", &x) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
        if (x <= 0)
        {
            printf("Please enter a value greater than 0.\n");
        }
    } while (x <= 0);

    double salary, salarySum = 0.0;
    int i, age, minAge, maxAge, womenAtMost2000 = 0;
    char sex;

    for (i = 1; i <= x; i++)
    {
        printf("Person %d — enter age, sex (M/F), and salary: ", i);

        // Note the leading space before %c to skip leftover newlines
        if (scanf("%d %c %lf", &age, &sex, &salary) != 3)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }

        sex = (char)toupper((unsigned char)sex);

        // (a) accumulate salary
        salarySum += salary;

        if (i == 1)
        {
            minAge = age;
            maxAge = age;
        }
        // (b) track min and max age
        if (age < minAge)
            minAge = age;
        if (age > maxAge)
            maxAge = age;

        // (c) women with salary <= 2000
        if (sex == 'F' && salary <= 2000.0)
        {
            womenAtMost2000++;
        }
    }

    printf("Average salary: R$%.2f\n", salarySum / x);
    printf("Youngest age: %d\nOldest age: %d\n", minAge, maxAge);
    printf("Women with salary up to R$2000.00: %d\n", womenAtMost2000);

    return EXIT_SUCCESS;
}
