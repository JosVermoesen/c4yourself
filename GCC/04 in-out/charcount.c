#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
	long nc;

	nc = 0;
	printf("Press some keys please (Q to quit) ");
	while (getchar() != 'Q')
		/*
		  Use != EOF eventually, a value that is returned
		  by getchar() when the end of the file is reached.
		  Use CTRL+C to send EOF to the program. Does not work
		  always in the console window.
		*/
		++nc;
	printf("You pressed %ld times\n", nc);

	return 0;
}
/* Source:
   https://en.wikipedia.org/wiki/The_C_Programming_Language
*/