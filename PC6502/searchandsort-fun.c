/*
    Simple menu example in C
    Jos Vermoesen
 */
#define SO_6502
// #define SO_DOSWIN

#ifdef SO_6502
#include <rp6502.h>
#include <stdio.h>
#else
#include <conio.h>
#include <stdio.h>
#endif

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
#ifdef SO_6502
    puts("\30\f"); // rp6502 and others
    // printf("\f"); // also clears console
#else
    printf("\e[1;1H\e[2J"); // DOS/WINDOWS
#endif
}

void anyKey()
{
    char c;
#ifdef SO_6502
    while (!(RIA.ready & RIA_READY_RX_BIT))
        ;
    c = RIA.rx;
#else
    c = getch();
#endif
    // printf("pressed: %c %d\n", c, c);
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
}

int linearSearch(int arr[], int val, int i)
{
    int y;

    for (y = 0; y < i; y++)
    {
        if (arr[y] == val)
            return y;
    }
    return -1;
}

int binarySearch(int arr[], int val, int x, int y)
{
    int m;

    while (x <= y)
    {
        m = x + (y - x) / 2;

        if (arr[m] == val)
            return m;

        if (arr[m] < val)
            x = m + 1;

        else
            y = m - 1;
    }
    return -1;
}

int main()
{
    int choise;
    int arr[] = {12, 14, 17, 19, 89, 20, 21, 22};
    int val;
    int i = sizeof(arr) / sizeof(arr[0]);
    int y;

    int linear;
    int binary;

    clear();
    setColor(green);

    // Menu display
    printf("MENU:\n0. Show array\n1. Linear Search for 89\n2. Binary Search for 22\n5. Exit\n");

    // Infinite Loop for choice input
    while (1)
    {
        choise = -1;
        printf("\nEnter the operation you wish to perform: ");
        scanf("%i", &choise);

        switch (choise)
        {
        case 0:
            printf("\n");
            for (y = 0; y < i; y++)
            {
                printf("Value of %d: %d\n", y, arr[y]);
            }
            break;

        case 1:
            val = 89;
            linear = linearSearch(arr, val, i);
            (linear == -1)
                ? printf("\nThe Given Element Is Not Found At Any Index\n")
                : printf("\nThe Given Element 89 Found At Index Of: %d\n", linear);
            break;

        case 2:
            val = 22;
            binary = binarySearch(arr, val, 0, i - 1);
            (binary == -1)
                ? printf("\nThe Given Element Is Not Found In The Given Sorted List\n")
                : printf("\nThe Given Element 22 Is Found At The Index Of %d\n", binary);
            break;

        case 5:
            printf("BYE!!!\n");
            // Termination of the Loop using break statement
            return 0;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("> Invalid Input\n");
            printf("Any key to abort program\n");
            anyKey();
            return 0;
        }
    }
}