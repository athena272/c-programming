#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 23
   escape characters

   New line        -> \n
   Tab             -> \t
   Double quote    -> \"
   Single quote    -> \'
   Backslash       -> \\
   Bell/alert      -> \a
   Carriage return -> \r
   Vertical tab    -> \v
   Form feed       -> \f
   Hex byte        -> \xHH   (e.g., \x41 = 'A')
   Octal byte      -> \ooo   (e.g., \101 = 'A')

   Note: '\0' is the null terminator for C strings (not printable).
*/

int main()
{
    printf("\n\n\tThis is a message with an escaped \\'a\\' printed on the screen.\n\n");

    // More examples
    printf("New line example -> first line\nsecond line\n");
    printf("Tab example      -> col1\tcol2\tcol3\n");
    printf("Quotes           -> \"double\" and \'single\'\n");
    printf("Backslash        -> \\\n");

    // May produce a beep depending on your terminal
    printf("Bell/alert       -> \a(you might hear a beep)\n");

    // Carriage return rewinds to the line start and overwrites what was printed
    printf("Carriage return  -> ABCDE\rXYZ\n"); // likely shows "XYZDE"

    // Terminal-dependent effects:
    printf("Vertical tab     -> before\vafter\n");
    printf("Form feed        -> before\faftermaybe-new-page\n");

    // Bytes by numeric escapes
    printf("Hex escapes      -> \x41 \x42 \x43\n"); // A B C
    printf("Octal escapes    -> \101 \102 \103\n"); // A B C

    // Reminder about \\0 (null terminator) — don't print it mid-string or it will cut the output.
    // Example (commented out because it would stop printing after 'A'):
    // printf("Null terminator  -> A\0B\n");

    return 0;
}
