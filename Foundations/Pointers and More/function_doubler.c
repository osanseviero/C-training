#include <stdio.h>

void doubler(int *x){
	*x *= 2;
}

int main(int argc, char **argv)
{
    int y;
    y = 5;
    doubler(&y);                /* sets y to 2 */
    printf("%d\n", y);          /* prints 2 */
    return 0;
}
