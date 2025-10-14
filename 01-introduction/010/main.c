#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 10
   Reading multiple values
*/

int main()
{
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Values read: %d, %d and %d\n", num1, num2, num3);

    return 0;
}
