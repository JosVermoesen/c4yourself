#include <stdio.h>

int main()
{
    int imax = 32767, imin = -32768;
    unsigned int i0 = 65535;

    printf("int imax has max +value: %d\n", imax);
    printf("imax has size: %d\n", sizeof(imax));
    printf("int imin has min -value: %d\n", imin);
    printf("imin has size: %d\n", sizeof(imin));
    printf("unsigned int i0 has max value: %u\n", i0);
    printf("i0 has size: %d\n", sizeof(i0));
    
    return 0;
}