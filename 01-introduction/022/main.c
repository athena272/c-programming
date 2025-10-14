#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 22
   long modifier for the double type
   double      -> %f
   long double -> %Lf
*/

int main()
{
    float x = 3.1415f;
    long double y = 3.1415896587458962548L; // note the 'L' suffix for long double literals

    printf("Value of y: %.21Lf\n", y);
    __builtin_printf("Value of y: %.21Lf\n", y);
    printf("A long double requires %zu bytes of memory.\n", sizeof y);

    return 0;
}
