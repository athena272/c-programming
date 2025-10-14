#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 12
   Read gender, age, weight and height
*/

int main()
{
    char gender;
    int age;
    float weight, height;

    printf("Enter age, weight, height and gender (f, F, m or M):\n");
    scanf("%d %f %f %c", &age, &weight, &height, &gender);

    printf("Gender: %c\nAge: %d\nWeight: %.1f\nHeight: %.2f\n",
           gender, age, weight, height);

    return 0;
}
