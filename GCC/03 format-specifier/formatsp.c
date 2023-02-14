#include <stdio.h>

int main()
{
    /*
    format specifier % = defines the type of data to be displayed
    %c = single character
    %s = string of characters
    %f = floating point number
    %lf = double floating point number
    %d = decimal integer
    %.1 = 1 decimal place
    %.2 = 2 decimal places
    %1 = 1 character
    %2 = 2 characters
    %- = left justify
    %0 = pad with 0's

    %u = unsigned integer
    %ld = long integer
    %lu = unsigned long integer
    %lld = long long integer
    %llu = unsigned long long integer

    %x = hexadecimal integer
    %X = hexadecimal integer (uppercase)
    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    char *name = "John";
    int age = 35;
    char grade = 'B';
    const float mypi = 3.141592;
    const double myd = 3.141592987;

    /* As Euro did not exist in 1980's, do not use
       € symbol for old school compatibility 
       No problem for $, £, ¥, etc.
       Use 'EUR' instead of '€' 
    */
    printf("Hello Formatted Variables!\n\n");
    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);

    printf("There once was a man named %s\n", name);
    printf("he was %d years old.\n", age);
    printf("He really liked the name %s\n", name);
    printf("but did not liked being %d.\n", age);
    printf("His endgrade: %c class.\n", grade);
    printf("Still he does not know PI is %f...\n", mypi);
    printf("Double is better for PI: %f.\n", myd);

    return 0;
}