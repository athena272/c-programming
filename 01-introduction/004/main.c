#include <stdio.h>
#include <stdlib.h>

/*
    Lesson 4
    Reading integer numbers
*/

int main(void) {

    int value1, value2; // I created variables to store integer values

    // assignment -> assign a value to a variable
    value1 = 50; // example assignment (will be replaced by user input)

    printf("Enter an integer value: ");
    scanf("%d", &value1);

    printf("Enter a second integer value: ");
    scanf("%d", &value2);

    printf("First value: %d\nSecond value: %d\n", value1, value2);

    return 0;
}
