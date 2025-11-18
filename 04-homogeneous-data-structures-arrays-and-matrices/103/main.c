#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int num[10];
    srand(time(NULL)); // Seed for reproducibility

    for (i = 0; i < 10; i++)
    {
        num[i] = rand();
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n");
}