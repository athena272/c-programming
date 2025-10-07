#include <stdio.h>
#include <stdlib.h>

/*
   Lesson 41: True and false in C
   - Any non-zero value is treated as TRUE.
   - Zero is treated as FALSE.
*/

int main(void) {
    int a = 10;

    printf("\nEnter any integer: ");
    scanf("%d", &a);

    // Logical expression: prints 1 if (a < 0) is true, else 0
    printf("\nLogical result (a < 0): %d\n", a < 0);

    // Examples of truthiness/falsiness in an if condition:
    if (0.1)  // non-zero (double literal) → TRUE
        printf("\n\tCondition 'if (0.1)' is TRUE (non-zero).\n");
    else
        printf("\n\tCondition 'if (0.1)' is FALSE.\n");

    if (0)    // zero → FALSE
        printf("\n\tCondition 'if (0)' is TRUE.\n");
    else
        printf("\n\tCondition 'if (0)' is FALSE (zero).\n");

    printf("\nProgram continues...\n");
    return 0;
}
