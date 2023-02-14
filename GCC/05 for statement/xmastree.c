#include <stdio.h>

int main()
{

    int x, y, stars;
    int height = 22; /* CHANGE TO 27 FOR AMSTRAD PCW 31 ROW SCREEN! */

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