/*
    Experimenting ASCII values and escape codes in C.
 */

#include <rp6502.h>
#include <stdio.h>

static const char *CSI = "\33[";  // escape

static const char *BLACK = "30m"; // color codes
static const char *RED = "31m";
static const char *GREEN = "32m";
static const char *BLUE = "34m";
static const char *MAGENTA = "35m";
static const char *CYAN = "36m";
static const char *WHITE = "37m";
static const char *YELLOW = "93m";
static const char *UNDEFINED = "37m";

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
    puts("\30\f");
    // printf("\f"); // also clear console
}

void setColor(colorCode)
{
    switch(colorCode)
    {
        case 0:
            printf("%s%s", CSI, BLACK);
            break;
        case 1:
            printf("%s%s", CSI, RED);
            break;
        case 2:
            printf("%s%s", CSI, GREEN);
            break;
        case 3:
            printf("%s%s", CSI, YELLOW);
            break;
        case 4:
            printf("%s%s", CSI, BLUE);
            break;
        case 5:
            printf("%s%s", CSI, MAGENTA);
            break;
        case 6:
            printf("%s%s", CSI, CYAN);
            break;
        case 7:
            printf("%s%s", CSI, WHITE);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct. Switching to white");
            printf("%s%s", CSI, WHITE);
    }
    
}

void charset()
{
    int i;
    setColor(green);
    clear();   

    /* Print ASCII values from 0 to 255 */
    for (i = 32; i <= 221; i++)
    {
        printf("%c: %d", i, i);
        printf(" ");
    }

    printf("Press any key to continue.\n");
    setColor(white);
    clear();
}

int main()
{
    int a_ulc = 201; // upper left corner
    int a_urc = 187; // upper right corner
    int a_llc = 200; // lower left corner
    int a_lrc = 188; // lower right corner
    int a_h = 205;   // horizontal
    int a_v = 186;   // vertical

    charset();

    printf("Upper left %c = %d\n", a_ulc, a_ulc);
    printf("Upper right %c = %d\n", a_urc, a_urc);
    printf("Lower left %c = %d\n", a_llc, a_llc);
    printf("Lower right %c = %d\n", a_lrc, a_lrc);
    printf("Horizontal %c = %d\n", a_h, a_h);
    printf("Vertical %c = %d\n", a_v, a_v);
    return 0;
}
