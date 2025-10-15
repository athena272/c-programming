#include <stdio.h>
#include <stdlib.h>

/*
  Lesson 53 — Exercise 02
  Read 5 integers (one at a time). Count how many are negative
  and how many are positive. Finally, print both totals.
  Note: this version intentionally does NOT use a loop.
*/

int main(void)
{
    int value, positives = 0, negatives = 0;

    printf("Enter the first value: ");
    scanf("%d", &value);
    if (value < 0)
        negatives++;
    else
        positives++;

    printf("Enter the second value: ");
    scanf("%d", &value);
    if (value < 0)
        negatives++;
    else
        positives++;

    printf("Enter the third value: ");
    scanf("%d", &value);
    if (value < 0)
        negatives++;
    else
        positives++;

    printf("Enter the fourth value: ");
    scanf("%d", &value);
    if (value < 0)
        negatives++;
    else
        positives++;

    printf("Enter the fifth value: ");
    scanf("%d", &value);
    if (value < 0)
        negatives++;
    else
        positives++;

    printf("\nPositives: %d\nNegatives: %d\n", positives, negatives);
    return 0;
}
