/*
    Simple menu example in C with Ascii code
    functions in file ascii-funtions.c
    Jos Vermoesen
 */

#define SO_6502
// #define SO_DOSWIN

#ifdef SO_6502
#include <rp6502.h>
#include "ascii-functions.c"
#include <stdio.h>
#else
#include "ascii-functions.c"
#include <conio.h>
#include <stdio.h>
#endif

int main()
{
    int a, b, iChoise;
    char cChoise; // Key pressed

    clear();
    setColor(green);

    // Menu display
    printf("MENUUTJE:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");

    // Infinite Loop for choice input
    while (1)
    {
        printf("\nEnter the operation you wish to perform: ");

        cChoise = anyKey(48, 9 + 48);
        iChoise = (int)(cChoise)-48;
        printf("%d\n", iChoise);

        switch (iChoise)
        {
        case 1:
            // Adding
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d + %d = %d\n", a, b, (a + b));
            break;

        case 2:
            // Substracting
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d - %d = %d\n", a, b, (a - b));
            break;

        case 3:
            // Multiplication
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d * %d = %d\n", a, b, (a * b));
            break;

        case 4:
            // Number Input
            printf("\nEnter First number: ");
            scanf("%d", &a);
            printf("Enter Second number: ");
            scanf("%d", &b);
            printf("Result: %d / %d = %d\n", a, b, (a / b));
            break;

        case 5: // BLUE
            printf("\nBYE!!!\n");
            // Termination of the Loop using break statement
            return 0;

        // operator doesn't match any case
        default:
            printf("\n>Invalid Input - Try again\n");
        }
    }
}