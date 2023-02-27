/*
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
    Returns success(0) or failure(-1) to the OS
    */
    printf("Hello, World!");

    return 0;
}