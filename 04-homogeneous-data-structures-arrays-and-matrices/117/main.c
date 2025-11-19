#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, j;
    int vector[10];
    int array_length = sizeof(vector) / sizeof(vector[0]);

    for (i = 0; i < array_length; i++)
    {
        vector[i] = rand() % 1000;
    }
    // print original vector
    printf("Original vector\n");

    for (i = 0; i < array_length; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");

    // Bubble sort
    // Loop externo: controla as passadas (array_length - 1 passadas)
    // Loop interno: compara elementos adjacentes
    // Otimização: j < (array_length - 1 - i) evita comparar elementos já ordenados
    // Para explicação detalhada, veja bubble-sort-explanation.md
    for (i = 0; i < array_length - 1; i++)
    {
        for (j = 0; j < (array_length - 1 - i); j++)
        {
            if (vector[j] > vector[j + 1])
            {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    // print sorted vector
    printf("Sorted vector\n");
    for (i = 0; i < array_length; i++)
    {
        printf("%d ", vector[i]);
    }

    return 0;
}