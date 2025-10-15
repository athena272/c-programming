#include <stdio.h>
#include <stdlib.h>

/*
  Task:
  Write a program that receives two values from the keyboard, one for variable 'a'
  and one for variable 'b'. Then perform the necessary steps so that, at the end,
  variable 'a' holds the value that was initially in 'b', and variable 'b' holds
  the value that was initially in 'a'.
*/

int main(void)
{
    int a, b, aux;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    printf("Read values: a = %d | b = %d\n", a, b);

    // Swap using auxiliary variable
    aux = a;
    a = b;
    b = aux;

    printf("Swapped values: a = %d | b = %d\n", a, b);

    return 0;
}