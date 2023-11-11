#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    int num;

    /* printf("Please enter your name: ");
    scanf("%s", name);
    printf("Your name is %s.\n\n", name); */

    printf("Please enter your name: ");
    scanf(" %[^\n]s", name);
    printf("Your name is %s.\n\n", name);

    
    printf("Please enter a value: ");
    if (scanf("%d", &num) == 1)
    {
        printf("This is an integer with value %d\n", num);
    }
    else
    {
        printf("The value is not an integer.\n");
        num = 0;
    }

    return 0;
}
