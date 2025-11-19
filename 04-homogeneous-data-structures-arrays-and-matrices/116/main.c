#include <stdio.h>
#include <stdlib.h>

/*
 * Class 116: Exercise 06
 * 6) Make a program that reads 10 real numbers and stores them in a vector.
 * Then, read an integer code and perform one of the actions below:
 * 0 - terminates the program;
 * 1 - prints the vector in order from start to end;
 * 2 - prints the vector in reverse order (from end to start).
 * The program must run until the user types 0 to terminate.
 */

int main() {
    int i, opcao;
    float vetor[10];

    // Read 10 real numbers
    for (i = 0; i < 10; i++) {
        printf("Enter the value for position %d: ", i);
        scanf("%f", &vetor[i]);
    }

    // Menu loop
    do {
        printf("0 - Finalize\n1 - Print vector\n2 - Print vector reversed\n");
        printf("Enter option: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Finalizing...\n");
                break;
            case 1:
                // Print vector in order
                for (i = 0; i < 10; i++) {
                    printf("%.2f ", vetor[i]);
                }
                printf("\n");
                break;
            case 2:
                // Print vector in reverse order
                for (i = 9; i >= 0; i--) {
                    printf("%.2f ", vetor[i]);
                }
                printf("\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while (opcao != 0);

    return 0;
}

