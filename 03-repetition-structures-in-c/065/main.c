#include <stdio.h>
#include <stdlib.h>

/*
    Class 65: Decreasing For Loop Structure

    Demonstration: printing numbers in descending order using manual decrements
    and then using a for loop.
*/

int main()
{
    int i = 10;

    // Manual decrements (illustrating the logic behind a descending loop)
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d\n", i--);

    // for (initialization; stop condition; decrement)
    for (i = 10; i >= 0; i--)
    {
        printf("%d ", i);
    }

    printf("\n");
    return EXIT_SUCCESS;
}
