#include <stdio.h>
#include <stdlib.h>

/*
    Class 77: Exercise 08

    Make a calculator for the 4 basic operations using a switch.
    Menu:
      1 – Add
      2 – Subtract
      3 – Multiply
      4 – Divide
      0 – Exit
*/

int main(void)
{
    int option, num1, num2;

    do
    {
        printf("1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\n0 - Exit\n");
        scanf("%d", &option);

        if (option > 0 && option < 5)
        {
            printf("Enter two integers: ");
            scanf("%d%d", &num1, &num2);
        }

        switch (option)
        {
        case 0:
            printf("Exiting...\n");
            break;

        case 1:
            printf("Sum: %d\n", num1 + num2);
            break;

        case 2:
            printf("Subtraction: %d\n", num1 - num2);
            break;

        case 3:
            printf("Multiplication: %d\n", num1 * num2);
            break;

        case 4:
            while (num2 == 0)
            {
                printf("Division by zero is not allowed!\nEnter another value: ");
                scanf("%d", &num2);
            }
            printf("Division: %d\n", num1 / num2); // integer division
            break;

        default:
            printf("Invalid option.\nEnter another option: ");
        }
    } while (option != 0);

    return EXIT_SUCCESS;
}
