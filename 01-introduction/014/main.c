#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char a, b;
    printf("Type the 1st letter: ");
    scanf(" %c", &a);

    printf("Type the 2nd letter: ");
    scanf(" %c", &b);

    printf("1st letter: %c\n2nd letter: %c\n", a, b);
}