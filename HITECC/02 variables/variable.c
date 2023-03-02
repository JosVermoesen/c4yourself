#include <stdio.h>

/*
 on 8-bit, int has max value of +32767 and min value of -32768 (2 bytes)
 on 8-bit, unsigned int has max value of +65535 and min value of 0 (2 bytes)
*/
int main()
{

    int imax = 32767, imin = -32768;
    unsigned int i0 = 65535;

    printf("int imax has max +value: %d\n", imax);
    printf("imax has size: %d bytes\n", sizeof(imax));
    printf("int imin has min -value: %d\n", imin);
    printf("imin has size: %d bytes\n", sizeof(imin));
    printf("unsigned int i0 has max value: %u\n", i0);
    printf("i0 has size: %d bytes\n", sizeof(i0));

    return 0;
}