#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 21
   double type
   %lf for printing doubles
*/

int main(void)
{
    float x = 3.1415f;
    double y = 3.1415896587458962548;

    printf("A double requires %zu bytes of memory.\n", sizeof y);

    float xf = 3.1415896587458962548f; // literal float (sufixo f)
    double xd = 3.1415896587458962548; // literal double (padrão)

    printf("As stored in float : %.20f\n", xf);
    printf("As stored in double: %.20f\n\n", xd);

    // Mostrar com quantidades de casas que destacam a perda de precisão
    printf("float  (7 dec places) : %.7f\n", xf);
    printf("double (16 dec places): %.16f\n", xd);

    return 0;
}
