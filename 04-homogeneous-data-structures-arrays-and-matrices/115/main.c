#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 115: Exercise 05
 *
 * 5) Create a program that receives the average temperature of each month of the year,
 *    storing them in a vector. At the end, show the highest and lowest temperatures
 *    of the year and in which month they occurred (show the month in full: January,
 *    February...). Disregard ties.
 */

int main()
{
    int i, maxIndex, minIndex;
    float min, max, temperature[12];
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    // Input loop: receive average temperature for each month
    for (i = 0; i < 12; i++)
    {
        printf("Enter the temperature of month %d: ", i + 1);
        scanf("%f", &temperature[i]);
    }

    // Find minimum and maximum temperatures and their indices
    for (i = 0; i < 12; i++)
    {
        // first iteration initialization
        if (i == 0)
        {
            min = temperature[i];
            max = temperature[i];
            minIndex = i;
            maxIndex = i;
        }

        if (min > temperature[i])
        {
            min = temperature[i];
            minIndex = i;
        }
        if (max < temperature[i])
        {
            max = temperature[i];
            maxIndex = i;
        }
    }

    // Display results
    printf("The lowest temperature was %.2f and occurred in the month %s\n", min, months[minIndex]);
    printf("The highest temperature was %.2f and occurred in the month %s\n", max, months[maxIndex]);

    return 0;
}
