#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // tolower

/*
   Lesson 51: switch–case with character options
   Options:
     a - Register product
     b - Sell product
     c - Search product
     d - Print report
     z - Exit
   Tip: we use tolower() so the menu accepts both upper- and lowercase letters.
*/

int main(void)
{
    char option;

    printf("a - Register product\n"
           "b - Sell product\n"
           "c - Search product\n"
           "d - Print report\n"
           "z - Exit\n"
           "Choose an option: ");

    // Leading space before %c skips any leftover newline
    if (scanf(" %c", &option) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    // Make the comparison case-insensitive
    switch (tolower((unsigned char)option))
    {
    case 'a':
        printf("Registering a new product.\n");
        break;
    case 'b':
        printf("Selling a product.\n");
        break;
    case 'c':
        printf("Searching for a product.\n");
        break;
    case 'd':
        printf("Printing report.\n");
        break;
    case 'z':
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid option!\n");
        break;
    }

    return 0;
}
