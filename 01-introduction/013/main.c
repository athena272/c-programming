#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char a, b;
    printf("Type two letters: ");
    scanf("%c %c", &a, &b);

    printf("First letter: %c\nSecond letter: %c\n", a, b);

    return 0;
}