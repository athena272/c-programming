#include <stdio.h>
#include <stdlib.h>

/*
  Task:
  Write a C program to swap the values of two integer variables
  without using any auxiliary variable.
*/

int main() {
    int a, b;

    printf("Enter two values: ");
    scanf("%d%d", &a, &b);

    printf("Initial values: a = %d | b = %d\n", a, b);

    /*
       Example with a = 10 and b = 5
       a = a + b -> 15
       b = a - b -> 10
       a = a - b -> 5
    */
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swapped values: a = %d | b = %d\n", a, b);

    return 0;
}
