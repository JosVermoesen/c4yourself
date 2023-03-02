#include <stdio.h>

/*
 stdbool.h is a header file that defines a new data type called bool,
 which has two possible values: true and false.
 It also defines a new macro called boolean, which can be used to declare
 variables of type bool.
*/
#include <stdbool.h>

int main()
{
    // Variables / Data Types
    int x;   // Declaration
    x = 123; // Initialisation, int has max value 32767

    int age = 21;                                 // Integer %d
    float gpa = 2.05;                             // floating point number %f
    char grade = 'C';                             // Single character %c
    char name[] = "Bob";                          // Array of characters %s
    char a = 'A';                                 // 1 byte single character %c
    char b[] = "B";                               // 2 bytes array of characters %s
    const float pif = 3.141592;                   // 4 bytes (32 bits of precision) floating point number %f
                                                  // const means it cannot be changed best option for PI
                                                  // for PI numbers use const float or const double
    const double pid = 3.141592653589793;         // 8 bytes (64 bits of precision) best floating point number %lf
                                                  // double has more precision than float
    bool e = true;                                // 1 byte boolean value (true or false) %d
    char f = 120;                                 // 1 byte (-128 to 127) %d or %c (ASCII)
    unsigned char g = 255;                        // 1 byte (0 to 255) %d or %c (ASCII)
                                                  // double the range of a signed char
    short h = 32767;                              // 2 bytes (-32768 to 32767) %d short int
    short hh = -32768;                            // 2 bytes (-32768 to 32767) %d short int
    unsigned short i = 65535;                     // 2 bytes (0 to 65535) %d unsigned short int
    long j = 2147483647;                          // 4 bytes (-2147483648 to 2147483647) %d signed long int
    long jj = -2147483647 - 1;                    // 4 bytes (-2147483648 to 2147483647) %d signed long int
    unsigned long k = 4294967295;                 // 4 bytes (0 to 4294967295) %d unsigned long int
    long long l = 9223372036854775807;            // 8 bytes (-9223372036854775808 to 9223372036854775807) %d long long int
    long long ll = -9223372036854775807 + 1;      // 8 bytes (-9223372036854775808 to 9223372036854775807) %d long long int
    unsigned long long m = 18446744073709551615U; // 8 bytes (0 to 18446744073709551615) %d unsigned long long int

    // on 8-bit, int has max value of +32767 and min value of -32768 (2 bytes)
    // on 8-bit, unsigned int has max value of +65535 and min value of 0 (2 bytes)

    // on 16-bit and higher, int has max value of +2147483647 and min value of -2147483648 (4 bytes)
    // on 16-bit and higher, unsigned int has max value of +4294967295 and min value of 0 (4 bytes)
    int imax = 2147483647, imin = -2147483648;
    unsigned int i0 = 4294967295;

    char test[5]; // 5 bytes
    test[0] = 'T';
    test[1] = 'e';
    test[2] = 's';
    test[3] = 't';
    test[4] = '\0'; // null terminator

    printf("%s\n", test); // Test

    // Print to console
    printf("Hello %s\n", name);                                // %s is a string
    printf("You are %d years old\n", age);                     // %d is a decimal number
    printf("Your average grade is %c\n", grade);               // %c is a single character
    printf("Your gpa is %f\n", gpa);                           // %f is a floating point number
    printf("float c= %0.15f, very basic precision\n", pif);    // float is basic for PI numbers low precision
    printf("double d= %0.15lf gives better precision\n", pid); // double is better for PI numbers high precision
    printf("bool e= %d, 1 for true 0 for false\n", e);         // bool
    printf("As char num value of f= %d\n", f);                 // char as numeric value
    printf("As ASCII char f= %c, check ascii table!\n", f);    // char as ASCII character
    printf("As unsigned char num value of g= %d\n", g);        // unsigned char as numeric value
    printf("As unsigned ASCII char g= %c\n", g);               // unsigned char as ASCII character
    printf("short (int) h= %d\n", h);                          // short int
    printf("short (int) h= %d\n", hh);                         // short int
    printf("unsigned short (int) i= %d\n", i);                 // unsigned short int
    printf("(signed) long (int) j= %ld\n", j);                 // int
    printf("(signed) long (int) jj= %ld\n", jj);               // int
    printf("unsigned long (int) k= %lu\n", k);                 // unsigned int
    printf("(signed) long long (int) l= %lld\n", l);           // long int
    printf("(signed) long long (int) ll= %lld\n", ll);         // long int
    printf("unsigned long long (int) m= %llu\n\n", m);         // unsigned long int

    printf("int imax has max +value: %d\n", imax);
    printf("imax has size: %d bytes\n", sizeof(imax));
    printf("int imin has min -value: %d\n", imin);
    printf("imin has size: %d bytes\n", sizeof(imin));
    printf("unsigned int i0 has max value: %u\n", i0);
    printf("i0 has size: %d bytes\n", sizeof(i0));

    return 0;
}