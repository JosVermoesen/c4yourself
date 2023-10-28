/*
    Menu example in C.
    https://www.scaler.com/topics/menu-driven-program-in-c/
 */
// #define SO_6502
#define SO_DOSWIN

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
    clear();
    setColor(green);

    // Choice variable
    int choice = -1;
    
    // Variables to store the numbers
    int a, b;
        
    // Menu display
    printf("MENU:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    
    // Infinite Loop for choice input
    while(1){
        printf("\nEnter the operation you wish to perform:");
        scanf("%d", &choice);
        
        // If-else ladder
        if(choice == 1){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d + %d = %d\n", a, b, (a+b));            
        }
        else if (choice == 2){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d - %d = %d\n", a, b, (a-b));            
        }
        else if (choice == 3){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            printf("\nResult: %d * %d = %d\n", a, b, (a*b));            
        }
        else if (choice == 4){
            // Number Input
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number:");
            scanf("%d", &b);
            result = a/b;
            printf("\nResult: %d / %d = %d\n", a, b, (a/b));            
        }
        else if (choice == 5){
            printf("BYE!!!\n");
            // Termination of the Loop using break statement
            break;
        }
        else{
            printf("> Invalid Input\n");
        }
    }
    
    return 0;
}