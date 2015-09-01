#include <stdio.h>
#include <stdlib.h>

int G = 0;   /* a global variable, stored in BSS segment */

int main(int argc, char **argv) {
    static int s;  /* static local variable, stored in BSS segment */
    int a;         /* automatic variable, stored on stack */
    int *p;        /* pointer variable for malloc below */

    /* obtain a block big enough for one int from the heap */
    p = malloc(sizeof(int));

    printf("&G   = %p\n", (void *) &G);
    printf("&s   = %p\n", (void *) &s);
    printf("&a   = %p\n", (void *) &a);
    printf("&p   = %p\n", (void *) &p);
    printf("p    = %p\n", (void *) p);
    printf("main = %p\n", (void *) main);

    free(p);

    return 0;
}