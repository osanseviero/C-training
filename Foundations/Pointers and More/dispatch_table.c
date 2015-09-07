#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

/*
 * Demonstrate use of dispatch tables.
 */

/* print a character twice */
/* like putchar, returns character if successful or EOF on error */
int
putcharTwice(int c)
{
    if(putchar(c) == EOF || putchar(c) == EOF) {
        return EOF;
    } else {
        return c;
    }
}

#define NUM_CHARS (UCHAR_MAX + 1) /* UCHAR_MAX is in limits.h */

int
main(int argc, char **argv)
{
    /* this declares table as an array of function pointers */
    int (*table[UCHAR_MAX+1])(int);
    int i;
    int c;

    for(i = 0; i < UCHAR_MAX; i++) {
        /* default is to call putchar */
        table[i] = putchar;
    }

    /* but lower-case vowels show up twice */
    table['a'] = putcharTwice;
    table['e'] = putcharTwice;
    table['i'] = putcharTwice;
    table['o'] = putcharTwice;
    table['u'] = putcharTwice;

    while((c = getchar()) != EOF) {
        table[c](c);
    }

    return 0;
}