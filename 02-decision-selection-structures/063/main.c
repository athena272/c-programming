#include <stdio.h>
#include <stdlib.h>

/*
    Class 63: Exercise 10

    Read three values a, b, and c and check if they can be the lengths
    of the sides of a triangle. If so, also say whether the triangle is
    equilateral, isosceles, or scalene. Otherwise, print:
    "The 3 sides do NOT form a triangle!"
*/

int main()
{
    int a, b, c;

    printf("Enter three values: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Sides must be positive integers.\n");
        return EXIT_FAILURE;
    }

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("The 3 sides form a triangle!\n");

        if (a == b && b == c)
        {
            printf("Equilateral\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }
    }
    else
    {
        printf("The 3 sides do NOT form a triangle!\n");
    }

    return EXIT_SUCCESS;
}
