#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 27
   increment operator ++
*/

int main(void)
{
    int result, counter = 10;

    // synonyms
    // counter++;
    // counter += 1;
    // counter = counter + 1;

    result = ++counter; // pre-increment

    printf("Value: %d\n", result);

    return 0;
}
