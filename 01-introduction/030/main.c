#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
   Lesson 30
   ASCII table and accents
   1 byte (8 bits) signed   -> -128 to 127
   1 byte (8 bits) unsigned -> 0 to 255

   Examples:
   9  -> tab character \t
   10 -> newline character \n (Enter)
   65 -> uppercase letter A
   66 -> uppercase letter B
   90 -> uppercase letter Z

   setlocale(LC_ALL, NULL);        // C language default
   setlocale(LC_ALL, "");          // operating system default
   setlocale(LC_ALL, "Portuguese");// Portuguese locale
*/

int main() {
    // show which locale is being used
    printf("Current locale: %s\n", setlocale(LC_ALL, "Portuguese"));

    // print with accented characters
    printf("Heart in Portuguese: Coração\n");

    return 0;
}
