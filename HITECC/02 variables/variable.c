#include <stdio.h>

/*
 on 8-bit, int has max value of +32767 and min value of -32768 (2 bytes)
 on 8-bit, unsigned int has max value of +65535 and min value of 0 (2 bytes)
*/
int main()
{

    int imax = 32767, imin = -32768;
    unsigned int i0 = 65535;

    char test[5]; /* 5 bytes */
    char *test2;
    test2 = "Test Whatever"; /* ? bytes */
    test[0] = 'T';
    test[1] = 'e';
    test[2] = 's';
    test[3] = 't';
    test[4] = '\0'; /* null terminator */

    printf("test string has value: %s\n", test); /* Test */
    printf("test string has size: %d bytes\n\n", sizeof(test));

    printf("test2 string has value: %s\n", test2); /* Test */
    printf("test2 string has size: %d bytes\n", sizeof(test2));
    printf("sems not working as expected\n\n");
    
    printf("int imax has max +value: %d\n", imax);
    printf("imax has size: %d bytes\n", sizeof(imax));
    printf("int imin has min -value: %d\n", imin);
    printf("imin has size: %d bytes\n", sizeof(imin));
    printf("unsigned int i0 has max value: %u\n", i0);
    printf("i0 has size: %d bytes\n", sizeof(i0));

    return 0;
}