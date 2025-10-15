#include <stdio.h>
#include <stdlib.h>

static void print_relations(int a, int b)
{
    printf("Comparing a = %d, b = %d\n", a, b);
    printf("a <  b  : %d\n", a < b);
    printf("a >  b  : %d\n", a > b);
    printf("a <= b  : %d\n", a <= b);
    printf("a >= b  : %d\n", a >= b);
    printf("a == b  : %d\n", a == b);
    printf("a != b  : %d\n", a != b);
}

int main(void)
{
    int a = 10, b = 20;

    // Case 1: a < b
    print_relations(a, b);

    // Case 2: a == b
    a = b;
    print_relations(a, b);

    // Case 3: a > b
    a = 30;
    b = 20;
    print_relations(a, b);

    return 0;
}