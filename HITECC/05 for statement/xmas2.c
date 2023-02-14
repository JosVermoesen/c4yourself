/* #include <stdio.h>
#include <stdlib.h>

char *chrstr(char c, int len)
{
   char *s;
   int x;

   if (c == '\0' || len <= 0)
      return (NULL);

   s = malloc(len * sizeof(char) + 1);
   if (s == NULL)
      return (s);

   for (x = 0; x < len; x++)
      *(s + x) = c;

   *(s + x) = '\0';

   return (s);
}

int main()
{

   int x, stars, height;
   height = 27; 

   for (x = 0, stars = 1; x < height; x++, stars += 2)
   {

      printf("%s%s\n",
             chrstr(' ', height - x),
             chrstr('*', stars));
   }

   return (0);
} */