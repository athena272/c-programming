#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 25
   type casting
*/

int main(void)
{
    int a = 10, b = 20;
    float pi = 3.1415f;

    a = (int)pi; // explicit cast from float to int

    printf("Value of a: %d\n", a);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %f\n", a / (float)b);

    return 0;
}
