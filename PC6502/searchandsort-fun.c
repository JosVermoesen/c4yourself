/*
    Simple search and sort examples in C
    Jos Vermoesen
 */
// #define IS_6502
#define IS_DOSWIN

#ifdef IS_6502
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
#ifdef IS_6502
    puts("\30\f"); // rp6502 and others
    // printf("\f"); // also clears console
#else
    printf("\e[1;1H\e[2J"); // DOS/WINDOWS
#endif
}

void anyKey()
{
    char c;
#ifdef IS_6502
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

void menu()
{
    clear();
    setColor(green);
    printf("MENU:\n0. Menu refresh\n1. Linear Search for 89\n2. Binary Search for 22\n3. Quicksort\n5. Exit\n6. Show array\n");
}

void printArray(int arr[], int size)
{
    int i;
    printf("\n");
    for (i = 0; i < size; ++i)
    {
        printf("Value of %i: %d\n", i, arr[i]);
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

// Swap Function
void swap(int *n1, int *n2)
{
    int m = *n1;
    *n1 = *n2;
    *n2 = m;
}

int partition(int arr[], int x, int y)
{
    int j;
    int pivot = arr[y];
    int i = (x - 1);

    for (j = x; j < y; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[y]);
    return (i + 1);
}

void quickSort(int arr[], int x, int y)
{
    if (x < y)
    {

        int pi = partition(arr, x, y);
        quickSort(arr, x, pi - 1);
        quickSort(arr, pi + 1, y);
    }
}

int main()
{
    int choise;
    int values[] = {99, 64, 25, 40, 42, 89, 20, 21, 22};
    int size = sizeof(values) / sizeof(values[0]);
    int value;

    int linear;
    int binary;

    menu();
    while (1)
    {
        choise = -1;
        printf("\nEnter the operation you wish to perform: ");
        scanf("%i", &choise);

        switch (choise)
        {
        case 0:
            menu();
            break;

        case 1:
            value = 89;
            linear = linearSearch(values, value, size);
            (linear == -1)
                ? printf("\nThe Given Element Is Not Found At Any Index\n")
                : printf("\nThe Given Element 89 Found At Index Of: %d\n", linear);
            break;

        case 2:
            value = 22;
            binary = binarySearch(values, value, 0, size - 1);
            (binary == -1)
                ? printf("\nThe Given Element Is Not Found In The Given Sorted List\n")
                : printf("\nThe Given Element 22 Is Found At The Index Of %d\n", binary);
            break;

        case 3:
            printf("Given Unsorted Array Values \n");
            printArray(values, size);

            quickSort(values, 0, size - 1);

            printf("Sorting Given Array In The Ascending Order: \n");
            printArray(values, size);
            break;

        case 5:
            printf("BYE!!!\n");
            // Termination of the Loop using break statement
            return 0;

        case 6:
            printArray(values, size);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("> Invalid Input\n");
            printf("Any key to abort program\n");
            anyKey();
            return 0;
        }
    }
}