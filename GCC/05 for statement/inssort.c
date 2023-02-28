/*
 Insertion sort in C
 Source code origin: https://www.youtube.com/watch?v=Tz7vBodZqo8
*/
#include <stdio.h>

void insertion_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = a[i];
        int j = i - 1;

        // shift elements to the right
        // until the correct position is found
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {9, 6, 3, 12, 0, 5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);

    insertion_sort(a, size);
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // char sArray[] = {'e', 'g', 'i', 'd', 'a', 'f', 'b', 'h', 'c'};
    // int sSize = sizeof(sArray) / sizeof(sArray[0]);

    return 0;
}
