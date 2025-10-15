#include <stdio.h>
#include <stdlib.h>

/*
    Class 56: Exercise 05

    The BMI (Body Mass Index) can be calculated by dividing a person's weight (in kg)
    by the square of their height (in meters). (BMI = m / h^2)

    Write a program that reads a person's weight and height, calculates and prints
    the BMI and the category in which the individual fits according to the table below:

    +---------------------------+----------------------+
    |           BMI            |     Interpretation   |
    +---------------------------+----------------------+
    | Less than 18.5           | Underweight          |
    | Between 18.5 and < 25    | Normal weight        |
    | Between 25 and < 30      | Overweight           |
    | Between 30 and < 35      | Obesity class I      |
    | Between 35 and < 40      | Obesity class II     |
    | Greater than or equal 40 | Obesity class III    |
    +---------------------------+----------------------+
*/

int main(void)
{
    double weight, height, bmi;

    printf("Enter your weight (kg) and your height (m): ");
    if (scanf("%lf %lf", &weight, &height) != 2 || height <= 0)
    {
        fprintf(stderr, "Invalid input. Height must be greater than 0.\n");
        return EXIT_FAILURE;
    }

    bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Interpretation: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25.0)
    {
        printf("Interpretation: Normal weight\n");
    }
    else if (bmi >= 25.0 && bmi < 30.0)
    {
        printf("Interpretation: Overweight\n");
    }
    else if (bmi >= 30.0 && bmi < 35.0)
    {
        printf("Interpretation: Obesity class I\n");
    }
    else if (bmi >= 35.0 && bmi < 40.0)
    {
        printf("Interpretation: Obesity class II\n");
    }
    else
    {
        printf("Interpretation: Obesity class III\n");
    }

    return EXIT_SUCCESS;
}
