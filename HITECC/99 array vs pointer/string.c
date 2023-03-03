#include <stdio.h>

int main()
{
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

   return 0;
}
/* Source:
   https://www.youtube.com/watch?v=Qp3WatLL_Hc
*/