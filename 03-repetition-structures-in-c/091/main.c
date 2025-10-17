#include <stdio.h>
#include <stdlib.h>

/*
  Class 91: Exercise 20 — Wheat and the chessboard

  A queen promised to pay a monk with wheat placed on a chessboard (64 squares):
  the first square has 1 grain and each subsequent square has double the previous one.
  Write a program that calculates the total number of grains the monk receives.
*/

#if defined(__MINGW32__) || defined(__MINGW64__)
// MinGW's printf doesn’t print long double correctly; use __mingw_printf.
#define LPRINTF __mingw_printf
#else
#define LPRINTF printf
#endif

int main(void)
{
    long double grains_on_square = 1.0L; // grains on the current square
    long double total_grains = 1.0L;     // total grains so far (starts with square 1)

    // From square 2 to 64, always double the grains and add to the total
    for (int square = 2; square <= 64; ++square)
    {
        grains_on_square *= 2.0L;
        total_grains += grains_on_square;
    }

    // Print the total in integer form (no decimals) and also in scientific notation
    LPRINTF("Total grains on the 64-square board: %.0Lf\n", total_grains);
    LPRINTF("Scientific notation: %.Lf\n", total_grains); // typically prints like 1.84e19

    return EXIT_SUCCESS;
}
