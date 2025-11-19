#include <stdio.h>
#include <stdlib.h>

/*
 * Lesson 114: Exercise 04
 * 
 * 4) A small craft shop has only one salesperson and sells 10 different types of objects.
 * The salesperson receives a salary of R$1100.00 plus 5% of the total value of their sales.
 * The unit value of the objects must be informed and stored in a vector; the quantity sold
 * of each object must be in another vector, but in the same position. Create a program that
 * receives the prices and quantities sold, storing them in their respective vectors. Then,
 * determine and show:
 * 
 * a) The quantity sold, unit value, and total value of each object. Finally, the total sales
 *    value and the commission to be paid to the salesperson should be shown.
 * 
 * b) The value of the best-selling object and its position in the vector (in case of ties,
 *    show all tied objects).
 */

int main() {
    int i, quantity[10], bestSold = 0;
    float totalValue = 0, partialValue, price[10];
    
    // Input loop: receive unit value and quantity sold for each object
    for (i = 0; i < 10; i++) {
        printf("Enter unit value and quantity sold: ");
        scanf("%f %d", &price[i], &quantity[i]);
    }
    
    // Section a: Calculate and display sales information
    for (i = 0; i < 10; i++) {
        partialValue = quantity[i] * price[i];
        printf("Sold: %d\tUnit value R$%.2f\tTotal value R$%.2f\n", quantity[i], price[i], partialValue);
        totalValue += partialValue;
    }
    
    printf("Total sales value R$%.2f\n", totalValue);
    printf("Commission paid to salesperson R$%.2f\n", totalValue * 0.05);
    
    // Section b: Find the best-selling object(s)
    for (i = 0; i < 10; i++) {
        if (quantity[i] > bestSold) {
            bestSold = quantity[i];
        }
    }
    
    // Display all objects with the maximum quantity sold
    for (i = 0; i < 10; i++) {
        if (quantity[i] == bestSold) {
            printf("Position: %d\tValue R$%.2f\n", i, price[i]);
        }
    }
    
    return 0;
}

