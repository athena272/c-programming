#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 102: How to change the content of a vector?
 */

int main()
{
    int i;
    int num2[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter the element for position %d: ", i);
        scanf("%d", &num2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        num2[i] = num2[i] * 3;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num2[i]);
    }

    printf("\n");

    return 0;
}