#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gender;

    printf("Enter your gender (f/F m/M): ");
    scanf("%c", &gender); // usuário digita: m<Enter>
    printf("You typed: '%c'\n", gender);

    return 0;
}