/*
    Experimenting ASCII values and escape codes in C.
 */

// #include <rp6502.h>
#include <stdio.h>

static const char *CSI = "\33["; // escape

const int black = 0;
const int red = 1;
const int green = 2;
const int yellow = 3;
const int blue = 4;
const int magenta = 5;
const int cyan = 6;
const int white = 7;

void clear()
{
    // puts("\30\f"); // rp6502 and others
    // printf("\f"); // also clears console
    printf("\e[1;1H\e[2J"); // DOS/WINDOWS
}

void setColor(int colorCode)
{
    /*
        static const char *BLACK = "30m"; // color codes
        static const char *RED = "31m";
        static const char *YELLOW = "93m";
        static const char *GREEN = "32m";
        static const char *BLUE = "34m";
        static const char *MAGENTA = "35m";
        static const char *CYAN = "36m";
        static const char *WHITE = "37m";
        static const char *UNDEFINED = "37m";
     */
    switch (colorCode)
    {
    case 0: // BLACK
        printf("%s%s", CSI, "30m");
        break;
    case 1: // RED
        printf("%s%s", CSI, "31m");
        break;
    case 2: // GREEN
        printf("%s%s", CSI, "32m");
        break;
    case 3: // YELLOW
        printf("%s%s", CSI, "93m");
        break;
    case 4: // BLUE
        printf("%s%s", CSI, "34m");
        break;
    case 5: // MAGENTA
        printf("%s%s", CSI, "35m");
        break;
    case 6: // CYAN
        printf("%s%s", CSI, "36m");
        break;
    case 7: // WHITE
        printf("%s%s", CSI, "37m");
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct. Switching to white");
        printf("%s%s", CSI, "37m");
    }
}

void anyKey()
{
    /* while (!(RIA.ready & RIA_READY_RX_BIT))
        ;
    printf("pressed: %c\n", RIA.rx); */
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
}

void charset(int aFrom, int aTo)
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for (i = aFrom; i <= aTo; i++)
    {
        printf("%c: %d", i, i);
        printf(" ");
    }
}

int main()
{
    int a_ulc = 201; // double upper left corner
    int a_urc = 187; // double upper right corner
    int a_llc = 200; // double lower left corner
    int a_lrc = 188; // double lower right corner
    int a_h = 205;   // double horizontal
    int a_v = 186;   // double vertical

    charset(32,221);

    printf("Upper left %c = %d\n", a_ulc, a_ulc);
    printf("Upper right %c = %d\n", a_urc, a_urc);
    printf("Lower left %c = %d\n", a_llc, a_llc);
    printf("Lower right %c = %d\n", a_lrc, a_lrc);
    printf("Horizontal %c = %d\n", a_h, a_h);
    printf("Vertical %c = %d\n", a_v, a_v);
    return 0;
}