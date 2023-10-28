/*
    Simple menu example in C
    Jos Vermoesen
 */
// #define SO_6502
#define SO_DOSWIN

#ifdef SO_6502
#include <rp6502.h>
#include <stdio.h>
#else
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

int main()
{
    char* str1 = "2"; 
    char* str2 = "12345.54"; 
    int x; 
  
    // taking integer value using %d format specifier for 
    // int 
    sscanf(str1, "%d", &x); 
    printf("The value of x : %d\n", x); 
  
    float y; 
    // taking float value using %f format specifier for 
    // float 
    sscanf(str2, "%f", &y); 
    printf("The value of x : %f\n", y); 

    /* int a;
    int b;
    int choise;
    choise = -1;

    clear();
    setColor(green);

    // Menu display
    printf("MENU:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n"); */



    // Infinite Loop for choice input
    /* while (1)    {
        printf("\nEnter the operation you wish to perform:");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            // Adding
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d + %d = %d\n", a, b, (a + b));
            break;

        case 2:
            // Substracting
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d - %d = %d\n", a, b, (a - b));
            break;

        case 3:
            // Multiplication
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d * %d = %d\n", a, b, (a * b));
            break;

        case 4:
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d / %d = %d\n", a, b, (a / b));
            break;

        case 5: // BLUE
            printf("BYE!!!\n");
            // Termination of the Loop using break statement
            return 0;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("> Invalid Input\n");
            choise = -1;
            break;
        }
    } */
}
