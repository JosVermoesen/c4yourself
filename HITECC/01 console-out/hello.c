/*
 HELLO.C
 Source code origin: https://www.youtube.com/watch?v=KJgsSFOSQv0
 Works with GCC and HITEC C, check the changes for MECC

 To compile with HITEC C:

   c hello

 #include, #define, #pragma, #if, #else, #elif, #endif,
 #error, #warning, #line, #ident, #undef, #include_next,
 #sccs, #assert, #pragma, #prag etc. are preprocessor directives

 More info here:
 https://en.wikipedia.org/wiki/C_preprocessor
 https://gcc.gnu.org/onlinedocs/cpp/Include-Syntax.html
*/
#include <stdio.h>
/*
Standard Input/Output library (printf, scanf, etc.)
https://en.wikipedia.org/wiki/C_standard_library#Standard_input/output
*/

int main() /* Entry point of the program */
{
    /*
    A function that prints to the console
    Use printf("") to print a string, end always with a semicolon
    \n is a newline, \t is a tab
    Return success(0) or failure(-1) to the OS
    */
    printf("Hello, World!");
    printf("I like pizza!\n");
    printf("It's really good!\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n\n");

    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    return 0;
}