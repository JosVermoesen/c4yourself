/*
 Bubble sort in C
 Source code origin: https://www.youtube.com/watch?v=qLVrwCvVPGo
*/
// #define IS_6502
#define IS_DOSWIN

#ifdef IS_6502
#include <rp6502.h>
#include <stdio.h>
#else
#include <stdio.h>
#endif

void iSortAsc(int tosort[], int size)
{
    int temp;
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (tosort[j] > tosort[j + 1])
            {
                temp = tosort[j];
                tosort[j] = tosort[j + 1];
                tosort[j + 1] = temp;
            }
        }
    }
}

void iSortDsc(int tosort[], int size)
{
    int temp;
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (tosort[j] < tosort[j + 1])
            {
                temp = tosort[j];
                tosort[j] = tosort[j + 1];
                tosort[j + 1] = temp;
            }
        }
    }
}

void cSortAsc(char tosort[], int size)
{
    int temp;
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (tosort[j] > tosort[j + 1])
            {
                temp = tosort[j];
                tosort[j] = tosort[j + 1];
                tosort[j + 1] = temp;
            }
        }
    }
}

void cSortDsc(char tosort[], int size)
{
    int temp;
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (tosort[j] < tosort[j + 1])
            {
                temp = tosort[j];
                tosort[j] = tosort[j + 1];
                tosort[j + 1] = temp;
            }
        }
    }
}
void iPrintArray(int sorted[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", sorted[i]);
    }
    printf("\n");
}

void cPrintArray(char sorted[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%c ", sorted[i]);
    }
    printf("\n");
}

int main()
{
    int iArray[] = {9, 6, 3, 0, 5, 4, 3, 2, 1};
    int iSize = sizeof(iArray) / sizeof(iArray[0]);

    char sArray[] = {'e', 'g', 'i', 'd', 'a', 'f', 'b', 'h', 'c'};
    int sSize = sizeof(sArray) / sizeof(sArray[0]);

    iSortAsc(iArray, iSize);
    iPrintArray(iArray, iSize);
    iSortDsc(iArray, iSize);
    iPrintArray(iArray, iSize);

    cSortAsc(sArray, sSize);
    cPrintArray(sArray, sSize);
    cSortDsc(sArray, sSize);
    cPrintArray(sArray, sSize);

    return 0;
}
