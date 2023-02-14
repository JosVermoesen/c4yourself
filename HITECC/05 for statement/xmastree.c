/*	XMASTREE.C

    Source code origin: https://c-for-dummies.com/blog/?p=5681
    Works with GCC and HITEC C, check the changes for MECC

    To compile with HITEC C:

    c xmastree
*/
#include <stdio.h>

int main()
{

    int x, y, stars;
    int height = 22; /* 27 FOR PCW 31 ROW SCREEN! CHANGE TO 20 FOR 24 ROW TEXT SCREEN */

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