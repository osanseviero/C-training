#include <stdio.h>
#include <stdlib.h>

int *makeIntArray(int n)
{
    int *a;
    a = malloc(sizeof(int) * n);
    if(a == 0) abort();                 /* die on failure */

    return a;
}

void destroyIntArray(int *a)
{
    free(a);
}

int * readNumbers(int *count /* RETVAL */)
{
    int mycount;        /* number of numbers read */
    int size;           /* size of block allocated so far */
    int *a;             /* block */
    int n;              /* number read */

    mycount = 0;
    size = 1;

    a = malloc(sizeof(int) * size);     /* allocating zero bytes is tricky */
    if(a == 0) return 0;

    while(scanf("%d", &n) == 1) {
        /* is there room? */
        while(mycount >= size) {
            /* double the size to avoid calling realloc for every number read */
            size *= 2;
            a = realloc(a, sizeof(int) * size);
            if(a == 0) return 0;
        }

        /* put the new number in */
        a[mycount++] = n;
    }

    /* now trim off any excess space */
    a = realloc(a, sizeof(int) * mycount);
    /* note: if a == 0 at this point we'll just return it anyway */

    /* save out mycount */
    *count = mycount;

    return a;
}
int main(){
	int count[3] = {1,2,3};
	readNumbers(count);
	for(int i = 0; i< 5; i++){
		printf("%d",count[i]);
	}

	return 0;
}