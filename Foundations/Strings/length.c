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
	char s[3];
	s[0] = 'a';
	s[1] = 'b';
	int length = strlen1(s);
	printf("%d\n",length);
    return 0;
}
