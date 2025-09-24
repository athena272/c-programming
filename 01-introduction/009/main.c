#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 9
   Reading characters
   function fgetc()
*/

int main()
{
    char letter;
    printf("Type a letter: ");
    letter = fgetc(stdin);

    printf("Character read: %c\n", letter);
    
    return 0;
}