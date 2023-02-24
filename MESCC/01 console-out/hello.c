/*	hello.c

	Hello world for MESCC.

	Copyright (c) 2015 Miguel I. Garcia Lopez.

	To compile with MESCC:

	cc hello
	ccopt hello
	zsm hello
	hextocom hello

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

	Revisions:

	23 Feb 2015 : v1.00
	05 Apr 2016 : v1.01 Minor changes.
*/

/* Defines for MESCC libraries
   ---------------------------
   Leave only what you need.
*/
// #define CC_STDIO        // Support for stdin, stdout, stderr.
// #define CC_REDIR        // Support for command line redirection - needs CC_STDIO.
// #define CC_CONIO_BIOS   // Console I/O through BIOS instead of BDOS.
// #define CC_FCX          // Support for user number in filenames.
// #define CC_FCX_DIR      // Support for named user numbers - needs CC_FCX and DirToDrvUsr().
// #define CC_FOPEN_A	// Enable modes "a" and "ab" for fopen.
// #define CC_FREAD	// Include fread().
// #define CC_FWRITE	// Include fwrite().
// #define CC_FGETS	// Include fgets().

/* Some defs. to save memory
 */
#define CC_NO_MUL	 // To exclude MULTIPLICATION code.
#define CC_NO_DIV	 // To exclude DIVISION & MODULUS code.
#define CC_NO_SWITCH // To exclude SWITCH code.
#define CC_NO_ARGS	 // To exclude ARGC & ARGV code.

/* Standard MESCC library
   ----------------------
   You must include this library;
   it contains some defs. and the runtime.
*/
#include <mescc.h>

/* Standard MESCC libraries
   ------------------------
   Use only what you need.
*/
// #include <alloc.h>
// #include <atexit.h>
// #include <bsearch.h>
// #include <clock.h>
#include <conio.h>
// #include <cpm.h>
// #include <ctype.h>
// #include <fileio.h>
// #include <fprintf.h>
// #include <mem.h>
// #include <printf.h>
// #include <qsort.h>
// #include <rand.h>
// #include <setjmp.h>
// #include <sprintf.h>
// #include <stdbool.h>
// #include <string.h>
// #include <z80.h>

/* The real code
 */
main()
{
	puts("Hello MESCC!");
}