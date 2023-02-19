#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    /*
     &a = address of a
     p = address of a
     *p = value of a
    */
    printf("a: %d\n", a);
    printf("&a: %d\n", &a);
    printf("*p: %d\n", *p);
    printf("Address p is %d\n", p);
    printf("size of integer is %d\n", sizeof(int));
    printf("Address p+1 is %d\n", p + 1);
    /*
     so if you are using a pointer to point to an
     integer and you add 1 to the pointer, it will
     add 4 bytes to the pointer because the size of
     an integer is 4 bytes
    */
    
    return 0;
}
/* Source:
   https://www.youtube.com/watch?v=zuegQmMdy8M&t=1036s
*/