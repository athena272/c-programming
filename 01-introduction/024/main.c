#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
   Lesson 24
   basic math operators:
   +  addition
   -  subtraction
   *  multiplication
   /  division
   %  modulus (remainder, integers only)

   extras:
   ++ --            increment / decrement
   += -= *= /= %=   compound assignments
   & | ^            bitwise AND, OR, XOR
   << >>            bitwise shifts
   pow()            exponentiation (from <math.h>)
*/

int main(void)
{
    int a = 10, b = 20;

    // integer arithmetic
    printf("\nAddition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Integer division: %d (20/10)\n", b / a); // integer / integer → integer
    printf("Modulus: %d (20%%10)\n", b % a); // remainder
    printf("Modulus: %d (22%%10)\n", (b + 2) % a); // remainder

    // floating-point division
    double x = 10.0, y = 20.0;
    printf("\nFloating division: %.2f (20.0/10.0)\n", y / x);

    // exponentiation (C has no ** operator; use pow from <math.h>)
    printf("Power (2^5): %.0f\n", pow(2.0, 5.0));

    // increment / decrement
    int n = 5;
    printf("\nn before: %d\n", n);
    printf("n++  returns %d, n becomes %d\n", n++, n);
    printf("++n  returns %d, n becomes %d\n", ++n, n);
    printf("n--  returns %d, n becomes %d\n", n--, n);
    printf("--n  returns %d, n becomes %d\n", --n, n);

    // compound assignments
    int c = 7;
    c += 3; // 10
    c *= 2; // 20
    printf("\nCompound assignments (start 7 → +=3 → *=2): %d\n", c);

    // precedence and parentheses
    int prec = a + b * 2;     // * has higher precedence → 10 + (20*2) = 50
    int forced = (a + b) * 2; // parentheses change order → (10+20)*2 = 40
    printf("\nPrecedence: a + b * 2 = %d;  (a + b) * 2 = %d\n", prec, forced);

    // bitwise operators (work on the binary representation)
    int m = 6;                                      // 0b0110
    int k = 3;                                      // 0b0011
    printf("\nBitwise AND  (6 & 3):  %d\n", m & k); // 0b0010 = 2
    printf("Bitwise OR   (6 | 3):  %d\n", m | k);   // 0b0111 = 7
    printf("Bitwise XOR  (6 ^ 3):  %d\n", m ^ k);   // 0b0101 = 5
    printf("Left shift   (6 << 1): %d\n", m << 1);  // 12
    printf("Right shift  (6 >> 1): %d\n", m >> 1);  // 3

    return 0;
}
