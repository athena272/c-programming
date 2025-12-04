#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

/*
Lesson 125: Question
How to avoid generating repeated numbers?
*/

int main()
{
    int i = 0, vet[25];
    bool isEqual = false;
    srand(time(NULL));
    do
    {
        vet[i] = rand() % 100; // Random integers between 0 and 100
        isEqual = false;
        for (int j = 0; j < i; j++)
        {
            if (vet[i] == vet[j])
            {
                isEqual = true;
            }
        }
        if (!isEqual)
        {
            i++;
        }
    } while (i < 25);
    for (i = 0; i < 25; i++)
    {
        printf("%02d ", vet[i]);
    }
    printf("\n");
    return 0;
}