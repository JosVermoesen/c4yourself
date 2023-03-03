#include <stdio.h>

int main()
{
	int x, y, z, i;

	for (i = 0; i < 1; i++)
	{
		x = 0;
		y = 1;
		do
		{
			printf("%d\n", x);

			z = x + y;
			x = y;
			y = z;
		} while (x < 255);
	}
}
/* Source:
   Ben Eater's video on YouTube:
   https://www.youtube.com/watch?v=yOyaJXpAYZQ
*/