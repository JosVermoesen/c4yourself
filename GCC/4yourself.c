#include <stdio.h>
/* <stdio.h> is a preprocessor directive that tells a C compiler to
   include stdio.h file before going to actual compilation.
   The stdio.h header file contains declarations of functions and macros
   which are commonly used for input and output operations. */
#include <stdlib.h>
/* <stdlib.h> header file contains declarations of functions and macros
   that perform general functions, including dynamic memory management,
   random number generation, communication with the environment, integer
   arithmetics, searching, sorting and converting. */
#include <string.h>
/* <string.h> header file contains declarations of functions and macros
   that manipulate arrays of characters. */
#include <math.h>
/* <math.h> header file contains declarations of functionsfor mathematical
   operations. */
#include <ctype.h>
/* <ctype.h> header file contains declarations of functions that perform
   tests on characters. */
#include <time.h>    /* time() functions */
#include <conio.h>   /* getch() function */
#include <windows.h> /* Sleep() function */
#include <dos.h>     /* delay() function */
#include <dir.h>     /* getcwd() function */
#include <io.h>      /* access() function */
#include <process.h> /* system() function */
#include <bios.h>    /* bioskey() function */
#include <dir.h>
/* Functions getdisk() getdrive() getcurdir() getdiskfree() mkdir()
   rmdir() chdir() findfirst() findnext() findclose() rename() setdisk()
   setdrive() getdfree() diskfree() */
#include <fcntl.h>       /* file control options */
#include <sys\stat.h>    /* file status options */
#include <sys\utime.h>   /* file time options */
#include <sys\locking.h> /* file locking options */
#include <sys\timeb.h>   /* timeb structure */
#include <sys\types.h>   /* types used by system calls */

/*

#include <errno.h>
#include <alloc.h>
#include <stdarg.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
#include <setjmp.h>
#include <signal.h>
#include <search.h>
#include <assert.h>
#include <stddef.h>
#include <wchar.h>
#include <wctype.h>
#include <sys\locking.h>
#include <sys\timeb.h>
#include <sys\utime.h> */

int main(void)
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}