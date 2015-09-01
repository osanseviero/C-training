#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <limits.h>  /* for INT_MIN */

/* Maximum of a group of an array */
int maximum(int n, int *a)
{
    int i;
    int max;

    max = INT_MIN;
    for(i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        } 
    }

    return max;
}


int
main(int argc, char **argv)
{
    int a[10];
    int i;

    for(i = 0; i < 10; i++) {
        a[i] = i*i;
    }

    printf("%d\n", maximum(9, a+1));

    return 0;
}