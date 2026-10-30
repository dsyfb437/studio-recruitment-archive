#include <stdio.h>

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0'
 * to '9') Example: isAsciiDigit(0x35) = 1. isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x)
{
    // #error TODO: Return 1 when x is between 0x30 and 0x39 inclusive.
    // printf("%dqwq\n", (x & 32) >> 5);
    return ((x & 16) >> 4) & ((x & 32) >> 5) & ((x + ~58 + 1) >> 31 & 1);
}

int main(void)
{
    int x;
    if (scanf("%d", &x) != 1)
        return 1;
    printf("%d\n", isAsciiDigit(x));
    return 0;
}
