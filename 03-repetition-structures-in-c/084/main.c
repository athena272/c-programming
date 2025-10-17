#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/*
    Class 84: Exercise 14

    Write a program that calculates the average salary of a company.
    Ask the user for the number of employees and the salary of each one.
    At the end, print:
      • the average of the salaries entered,
      • the highest salary, and
      • the lowest salary.
*/

int main(void)
{
    int count;

    // Read a positive number of employees
    do
    {
        printf("How many employees does the company have?: ");
        if (scanf("%d", &count) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            return EXIT_FAILURE;
        }
        if (count <= 0)
        {
            printf("Please enter a value greater than 0.\n");
        }
    } while (count <= 0);

    double total = 0.0;
    // double highest = -DBL_MAX;
    // double lowest = DBL_MAX;
    double highest, lowest;

    for (int i = 1; i <= count; i++)
    {
        double salary;

        // Read a non-negative salary for each employee
        do
        {
            printf("Salary of employee %d (in BRL): ", i);
            if (scanf("%lf", &salary) != 1)
            {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
            }
            if (salary < 0.0)
            {
                printf("Salary cannot be negative. Try again.\n");
            }

            if (i == 1)
            {
                highest = salary;
                lowest = salary;
            }
        } while (salary < 0.0);

        total += salary;
        if (salary > highest)  
            highest = salary;
        if (salary < lowest)
            lowest = salary;
    }

    printf("Average salary: R$%.2f\n", total / count);
    printf("Highest salary: R$%.2f\n", highest);
    printf("Lowest salary : R$%.2f\n", lowest);

    return EXIT_SUCCESS;
}
