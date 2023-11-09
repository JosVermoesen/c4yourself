/*	XMASTREE.C:	Christmas tree program.
    This program prints a Christmas tree on the screen.
    It's a good example of nested FOR loops.
*/
// #define SO_6502
#define SO_DOSWIN

#include "kc-functions.c"
#include <stdio.h>

int main()
{
    int x, y, stars;
    int height = 26;

    clear();
    setColor(green);

    for (x = 0, stars = 1; x < height; x++, stars += 2)
    {
        printf("%*c", height - x, ' ');
        for (y = 0; y < stars; y++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return (0);
}