#include <stdio.h>

int main()
{
    int i1 = 0, i2 = 0, i3 = 0;
    char *s1 = "Hello vscode";
    char *s2 = "Hello vscode";
    char *s3 = "new string";

    printf("s1: %s\n", s1);

    s1[0] = 'h';
    printf("s1: %s\n", s1);

    printf("s2: %s\n", s2);
    s2[1] = 'a';
    printf("s2: %s\n", s2);

    printf("s3: %s\n", s3);

    /* HOWTO IN HITEC C?
       This is not working:
    */
    i1 = sizeof(s1);
    i2 = sizeof(s2);
    i3 = sizeof(s3);
    printf("sizeof(s1): %d\n", i1);
    printf("sizeof(s2): %d\n", i2);
    printf("sizeof(s3): %d\n", i3);
}
/* Source:
   https://www.youtube.com/watch?v=Qp3WatLL_Hc
*/