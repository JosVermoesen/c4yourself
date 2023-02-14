/*	XMASTREE.C

 Source code origin:
 https://c-for-dummies.com/blog/?p=5681
 
 To compile with MESCC:

    cc xmastree
    ccopt xmastree
    zsm xmastree
    hextocom xmastree 
*/
#include <mescc.h>
#include <printf.h>

int main()
{
    int x, y, spaces, stars, height;
    height = 22; // Height of the tree in lines for PCW XMAS tree 27
    stars = 1;   // Start with 1 star

    for (x = 0; x < height; x++)
    {
        spaces = height - x;
        for (y = 0; y < spaces; y++)
        {
            putchar(' ');
        }
        for (y = 0; y < stars; y++)
        {
            putchar('*');
        }
        putchar('\n');
        stars += 2;
    }

    return (0);
}