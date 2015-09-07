#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



int
strlen1(const char *s)
{
    int i;

    for(i = 0; *s; i++, s++);

    return i;
}
int main(int argc, char **argv)
{
	char s[] = "hello";
	int length = strlen1(s);
	printf("%d\n",length);
    return 0;
}
