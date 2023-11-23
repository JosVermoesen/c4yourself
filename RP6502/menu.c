/*
    Simple menu example in C with Ascii code
    functions in file ascii-funtions.c
    Jos Vermoesen
 */

// #define IS_RP6502
#define IS_DOSWIN

#include "kc_functions.c"
#include <stdio.h>

void menu();

int main()
{
    int lFlag; // while loopflag
    int a, b, iChoise;
    char cChoise; // Key pressed

    menu();

    lFlag = -1;
    while (lFlag)
    {
        printAt(6, 0);
        printf("\nEnter the operation you wish to perform: ");

        cChoise = anyKey(48, 9 + 48);
        iChoise = (int)(cChoise)-48;
        printf("%d\n", iChoise);

        switch (iChoise)
        {
        case 0:
            anyCtrl();
            break;
            
        case 1:
            // Adding
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d + %d = %d\n", a, b, (a + b));

            clearLines(9, 13, -1);
            break;

        case 2:
            // Substracting
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d - %d = %d\n", a, b, (a - b));

            clearLines(9, 13, -1);
            break;

        case 3:
            // Multiplication
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d * %d = %d\n", a, b, (a * b));

            clearLines(9, 13, -1);
            break;

        case 4:
            // Number Input
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d / %d = %d\n", a, b, (a / b));

            clearLines(9, 13, -1);
            break;

        case 5: // BLUE
            printf("\nBYE!!!\n");
            // Termination of the Loop using flag state
            lFlag = 0;
            break;

        // operator doesn't match any case
        default:
            printf("\n>Invalid Input - Try again\n");
            clearLines(9, 11, -1);
            break;
        }
    }

    return 0;
}

void menu()
{
    clear();
    setColor(green);

    // Menu display line 0 to 5
    printAt(0, 0);
    printf("MENU:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
}
