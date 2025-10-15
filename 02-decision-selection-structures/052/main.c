#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 52 — Exercise 01
   Read three integers and print which is the smallest and which is the largest.
   Below are two solutions: (1) nested ifs, (2) initialize and update.
*/

int main(void)
{
    int a, b, c;
    int smallest, largest;

    printf("Enter three integers: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    /* ---------- First solution: nested ifs ---------- */
    if (a < b)
    {
        if (a < c)
            smallest = a;
        else
            smallest = c;
    }
    else
    {
        if (b < c)
            smallest = b;
        else
            smallest = c;
    }

    if (a > b)
    {
        if (a > c)
            largest = a;
        else
            largest = c;
    }
    else
    {
        if (b > c)
            largest = b;
        else
            largest = c;
    }

    printf("First version\tSmallest: %d\tLargest: %d\n", smallest, largest);

    /* ---------- Second solution: initialize and update ---------- */
    smallest = a;
    largest = a;

    if (smallest > b)
        smallest = b;
    if (smallest > c)
        smallest = c;

    if (largest < b)
        largest = b;
    if (largest < c)
        largest = c;

    printf("Second version\tSmallest: %d\tLargest: %d\n", smallest, largest);

    return 0;
}
