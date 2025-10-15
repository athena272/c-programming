#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 8
   Reading characters
   function getc()
*/

int main(void)
{
    char letter;
    printf("Type a letter: ");
    letter = getc(stdin);

    printf("Character read: %c\n", letter);

    return 0;
}