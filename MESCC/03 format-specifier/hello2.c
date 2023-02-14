/*	HELLO2.C

 HELLO2 for MESCC.
 Copyright (c) 2022 Jos Vermoesen.

 To compile with MESCC:

	cc hello2
	ccopt hello2
	zsm hello2
	hextocom hello2

 This program is free software; you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the
 Free Software Foundation; either version 2, or (at your option) any
 later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/* Standard libraries for MESCC are different from other C compilers
   Instead of #include <stdio.h> always use #include <mescc.h> followed by
   other libraries, like #include <printf.h> and/or #include <conio.h> etc.
*/
#include <mescc.h>
#include <printf.h>

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
/*
Source code origin: https://www.youtube.com/watch?v=KJgsSFOSQv0
Works with GCC and HITEC C, check the changes for MECC
*/