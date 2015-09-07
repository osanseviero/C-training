#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>



char * strdup(const char *s)
{
    char *s2;

    s2 = malloc(strlen(s)+1);

    if(s2 != 0) {
        strcpy(s2, s);
    }

    return s2;
}


int main(int argc, char **argv)
{
	char s1[3];
	s1[0] = 'a';
	s1[1] = 'b';
	s1[2] = '\0';

	char * a;
	a = strdup(s1);
	printf("%s\n",a);
    return 0;
}
