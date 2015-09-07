/* Demo program for malloc'd two-dimensional arrays */

#include <stdio.h>
#include <stdlib.h>

/* frees a 2d array created by malloc2d */
void
free2d(void **a)
{
    void **row;

    /* first free rows */
    for(row = a; *row != 0; row++) {
        free(*row);
    }

    /* then free array of rows */
    free(a);
}

/* returns a two-dimensional array with numRows rows and 
 * rowSize bytes per row, or 0 on allocation failure.
 * The caller is responsible for freeing the result with free2d. */
void ** malloc2d(size_t numRows, size_t rowSize)
{
    void **a;
    size_t i;

    /* a is an array of void * pointers that point to the rows */
    /* The last element is 0, so free2d can detect the last row */
    a = malloc(sizeof(void *) * (numRows + 1));        /* one extra for sentinel */
    if(a == 0) {
        /* malloc failed */
        return 0;
    }

    /* now allocate the actual rows */
    for(i = 0; i < numRows; i++) {
        a[i] = malloc(rowSize);
        if(a[i] == 0) {
            /* note that 0 in a[i] will stop freed2d after it frees previous rows */
            free2d(a);
            return 0;
        }
    }

    /* initialize the sentinel value */
    a[numRows] = 0;

    return a;
}

int
main(int argc, char **argv)
{
    int rows;
    int cols;
    int **a;
    int i;
    int j;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s rows cols\n", argv[0]);
        return 1;
    }

    // Converts the arguments
    rows = atoi(argv[1]);
    cols = atoi(argv[2]);

    /* note that void ** is not converted automatically,
     * so we need an explicit cast */
    a = (int **) malloc2d(rows, cols * sizeof(int));
    if(a == 0) {
        fprintf(stderr, "malloc2d failed, exiting\n");
        return 2;
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            a[i][j] = i - j;
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d", a[i][j]);
        }
        putchar('\n');
    }

    free2d((void **) a);                        /* always clean up */

    return 0;
}
