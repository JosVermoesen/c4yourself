#include <stdio.h>
#include <stdlib.h>
// #include <mem.h>

int main(int arg, char *argv[])
{
    int *pint = (int *)malloc(sizeof(int));
    int *arr = (int *)malloc(3 * sizeof(int));

    *pint = 5;
    arr[0] = 91;
    arr[1] = 42;
    arr[2] = 3;

    printf("The value of pint is %d\n", *pint);
    printf("The value of arr are %d and %d and %d\n", arr[0], arr[1], arr[2]);

    free(pint);
    free(arr);
    return 0;
}