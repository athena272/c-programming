#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, aux;
    int vector[100];
    int array_length = sizeof(vector) / sizeof(vector[0]);
    bool swapped_flag = false;
    int num_swappz = 0;

    for (i = 0; i < array_length; i++)
    {
        vector[i] = rand() % 1000;
    }

    do
    {
        swapped_flag = false;
        num_swappz++;
        for (i = 0; i < array_length - 1; i++)
        {
            if (vector[i] > vector[i + 1])
            {
                aux = vector[i];
                vector[i] = vector[i + 1];
                vector[i + 1] = aux;
                swapped_flag = true;
            }
        }

    } while (swapped_flag);

    for (i = 0; i < array_length; i++)
    {
        printf("%3d ", vector[i]);
    }

    printf("\nSwapped: %3d\n", num_swappz);
}