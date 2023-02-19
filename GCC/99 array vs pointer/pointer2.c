#include <stdio.h>

int main()
{
    /*
         1. memory addresses are stored in hexadecimal
            %p is for pointer address in hexadecimal format
            %d is for decimal format for integer and float values
            &age and &month are the addresses of age and month
    */
    int age = 25;
    int month = 11;
    printf("pointer of int age: %p\n", &age);
    printf("value of int age: %d\n", age);

    printf("month of birth: ");
    scanf("%d", &month);
    printf("month of birth is stored at pointer %p\n", &month);
    printf("month of birth value is: %d\n", month);

    /*
         2.
    */
    int *ptr = &month;
    printf("pointer ptr: %p\n", ptr);

    return 0;
}
/* Source:
   https://www.youtube.com/watch?v=KGhacRRMnDw
*/