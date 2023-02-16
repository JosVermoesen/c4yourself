#include <stdio.h>

int main()
{
    int radius; // The distance from the center of the circle to the edge
    printf("Enter the radius: "); // Prompt the user for input
    scanf("%d", &radius); // The & is the address of the variable

    double area = 3.14159 * radius * radius; // The area of the circle
    printf("The area of the circle is: %f", area);
       
    return 0;
}
/*
Source code origin:
https://www.youtube.com/watch?v=Bz4MxDeEM6k

Works with GCC and HITEC C, help needed for MECC!
*/