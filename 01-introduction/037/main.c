#include <stdio.h>
#include <stdlib.h>

/*
    Write a program to read from the keyboard a number of seconds
    and convert it to hours, minutes, and seconds.
    Example:
    Input:  3672
    Output: 1:1:12
*/

int main()
{
    int totalSeconds, hours, minutes, seconds, remaining;

    printf("Enter a number of seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;     // 1 hour = 3600 seconds
    remaining = totalSeconds % 3600; // leftover after hours
    minutes = remaining / 60;        // 1 minute = 60 seconds
    seconds = remaining % 60;        // leftover after minutes

    // Print with zero padding
    printf("Converted time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
