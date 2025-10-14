#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 11
   Read gender, age, weight and height
*/

int main()
{
    char gender;
    int age;
    float weight, height;

    printf("Enter gender (f, F, m or M), age, weight and height:\n");
    scanf(" %c%d%f%f", &gender, &age, &weight, &height);

    printf("Gender: %c\nAge: %d\nWeight: %.1f\nHeight: %.2f\n",
           gender, age, weight, height);

    return 0;
}
