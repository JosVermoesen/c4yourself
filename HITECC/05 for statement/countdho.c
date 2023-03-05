/*	COUNTDHO.C
    To compile with HITEC C:
    c countdho.c
*/
#include <stdio.h>

int main()
{
    int x;

    printf(" Dec\t Hex\t Oct\n");
    printf(" ===\t ===\t ===\n");

    for (x = 0; x < 256; x++)
    {
        printf("%4.3d\t", x);
        printf("%4.3x\t", x);
        printf("%4.3o\n", x);
    }

    return (0);
}