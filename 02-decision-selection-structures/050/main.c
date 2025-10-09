#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 50: switch–case selection structure
   Options:
     1 - Register product
     2 - Sell product
     3 - Search product
     4 - Print report
     5 - Exit
*/

int main(void)
{
    int option;

    printf("1 - Register product\n"
           "2 - Sell product\n"
           "3 - Search product\n"
           "4 - Print report\n"
           "5 - Exit\n"
           "Choose an option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Registering a new product.\n");
        break; // stop, leave switch
    case 2:
        printf("Selling a product.\n");
        break;
    case 3:
        printf("Searching for a product.\n");
        break;
    case 4:
        printf("Printing report.\n");
        break;
    case 5:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid option!\n");
    }

    return 0;
}
