#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 28
   decrement operator --
*/

int main()
{
    int result, counter = 10;

    // synonyms
    // counter--;
    // counter -= 1;
    // counter = counter - 1;

    result = --counter; // pre-decrement

    printf("Value: %d\n", result);

    return 0;
}
