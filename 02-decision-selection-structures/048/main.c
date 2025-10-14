#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 48: Logical OR (||)
   Truth Table:
   -----------------
   a     b   |  a || b
   true true |  true
   true false|  true
   false true|  true
   false false| false
*/

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 5 || age >= 60)
        printf("Eligible for free fare!\n");
    else
        printf("Not eligible for free fare!\n");

    return 0;
}
