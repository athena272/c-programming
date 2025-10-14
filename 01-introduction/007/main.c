#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 7
   Reading characters
   function getchar()
*/

int main()
{
    char letter;

    printf("Type a letter: ");
    letter = getchar();

    printf("Character read: %c\n", letter);

    return 0;
}
