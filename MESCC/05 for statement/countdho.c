/*	COUNTDHO.C

 For MESCC.
 Copyright (c) 2023 Jos Vermoesen.

 To compile with MESCC:

    cc countdho
    ccopt countdho
    zsm countdho
    hextocom countdho

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

int main()
{
    int x;

    printf(" Dec\t Hex\n");
    printf(" ===\t ===\n");

    for (x = 0; x < 256; x++)
    {
        printf("%4d\t", x);
        printf("%4x\n", x);
    }

    return (0);
}