/*
    Experimenting with ASCII values and escape codes in C.
    Jos Vermoesen
 */

// #define IS_RP6502
#define IS_DOSWIN

#ifdef IS_RP6502
#include <rp6502.h>
#include <stdio.h>
#else
#include <conio.h>
#include <stdio.h>
#endif

static const char *CSI = "\33["; // Escape

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
#ifdef SO_6502
    puts("\30\f"); // rp6502 and others
    // printf("\f"); // also clears console
#else
    printf("\e[1;1H\e[2J"); // DOS/WINDOWS
#endif
}

void setColor(int colorCode)
{
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
}

char anyKey(int kFrom, int kTo)
{
    char c;
    int choise = -1;

    if (kTo == 0)
    {
        kFrom = 32;
        kTo = 254;
    }

    while ((choise < kFrom) || (choise > kTo))
    {
#ifdef SO_6502
        while (!(RIA.ready & RIA_READY_RX_BIT))
            ;
        c = RIA.rx;
#else
        c = getch();
#endif
        choise = (int)(c);
    }
    // printf("%c pressed (ascii: %d)\n", c, c);
    return c;
}