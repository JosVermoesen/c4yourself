/*
 Bubble sort in C
 Source code origin: https://www.youtube.com/watch?v=qLVrwCvVPGo
*/
#include <stdio.h>
#define SIZE 10

void iSortAsc(int tosort[], int size)
{
    int temp, i, j;

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
    int temp, i, j;

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
    int temp, i, j;

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
    int temp, i, j;

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
        printf("[%d]=%d ", i, sorted[i]);
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
    int iArray[SIZE - 1], iSize = SIZE;
    iArray[0] = 9;
    iArray[1] = 6;
    iArray[2] = 7;
    iArray[3] = 0;
    iArray[4] = 5;
    iArray[5] = 4;
    iArray[6] = 3;
    iArray[7] = 2;
    iArray[8] = 8;
    iArray[9] = 1;

    /* char sArray = [ 'e', 'g', 'i', 'd', 'a', 'f', 'b', 'h', 'c', 'j' ];
    int sSize = sizeof(sArray) / sizeof(sArray[0]); */

    iPrintArray(iArray, iSize);
    printf("ascendin:\n");
    iSortAsc(iArray, iSize);
    iPrintArray(iArray, iSize);
    printf("descending:\n");
    iSortDsc(iArray, iSize);
    iPrintArray(iArray, iSize);

    /* cSortAsc(sArray, sSize);
    cPrintArray(sArray, sSize);
    cSortDsc(sArray, sSize);
    cPrintArray(sArray, sSize); */

    return 0;
}
