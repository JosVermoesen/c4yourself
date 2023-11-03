/*
    Simple search and sort examples in C
    Jos Vermoesen
 */
#define IS_6502
// #define IS_DOSWIN

#ifdef IS_6502
#include <rp6502.h>
#include "ascii-functions.c"
#include <stdio.h>
#else
#include "ascii-functions.c"
#include <conio.h>
#include <stdio.h>
#endif

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

void bubbleSort(int arr[], int size)
{
    int step;
    int i;

    for (step = 0; step < size - 1; ++step)
    {
        for (i = 0; i < size - step - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
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

void menu()
{
    clear();
    setColor(green);
    printf("MENU:\n0. Menu refresh\n1. Linear Search for 89\n2. Binary Search for 22\n3. Quicksort\n4. Bubblesort\n5. Exit\n6. Show array\n");
}

int main()
{
    int iChoise;
    char cChoise; // Key pressed

    /* int values[10000];
    int size;
    int i
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for(i = 0; i < size; i++)
        scanf("%d", &values[i]); */

    int values[] = {99, 64, 25, 40, 42, 89, 20, 21, 22};
    int size = sizeof(values) / sizeof(values[0]);
    int value;

    int linear;
    int binary;

    menu();

    while (1)
    {
        printf("\nEnter the operation you wish to perform: ");

        cChoise = anyKey(48, 9 + 48);
        iChoise = (int)(cChoise)-48;
        printf("%d\n", iChoise);

        switch (iChoise)
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
            quickSort(values, 0, size - 1);
            printf("Sorting Given Array In The Ascending Order: \n");
            printArray(values, size);
            break;

        case 4:
            bubbleSort(values, size);
            printf("After sorting, the array in ascending order is: ");
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
            printf("\n>Invalid Input - Try again\n");
            break;
        }
    }
}