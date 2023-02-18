#include <stdio.h>

int main()
{
    char s1[] = "Hello vscode";
    char s2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'v', 's', 'c', 'o', 'd', 'e', '\0'};

    printf("s1: %s\n", s1);
    s1[0] = 'h';
    printf("s1: %s\n", s1);
    
    printf("s2: %s\n", s2);
    s2[1] = 'a';
    printf("s2: %s\n", s2);

    char *s3 = "Hello vscode"; // string literal somewhere in memory sizeof(s3) = 13
    // s3[0] = 'h'; // error: assignment of read-only location ‘*s3’
    printf("s3: %s\n", s3);

    s3 = "new string"; // another string literal somewhere in memory sizeof(s3) = 8
    printf("s3: %s\n", s3);
    printf("sizeof(s1): %d\n", sizeof(s1)); // sizeof(s1) = 13
    printf("sizeof(s2): %d\n", sizeof(s2)); // sizeof(s2) = 13 
    printf("sizeof(s3): %d\n", sizeof(s3)); // sizeof(s3) = 8
}
/* Source:
   https://www.youtube.com/watch?v=Qp3WatLL_Hc
*/