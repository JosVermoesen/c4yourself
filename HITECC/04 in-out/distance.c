/*	DISTANCE.C

    Source code origin: https://www.youtube.com/watch?v=KJgsSFOSQv0
    Works with GCC and HITEC C, check the changes for MECC

    To compile with HITEC C:

    c distance
*/
#include <stdio.h>

int main()
{
    int speed = 0;
    int time = 0;
    int distance = 0;

    printf("\nSpeed: ");
    scanf("%d", &speed);

    printf("Time: ");
    scanf("%d", &time);

    distance = speed * time;
    printf("\nDistance: %d", distance);

    return 0;
}