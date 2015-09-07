#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



int strcmp(const char* s1, const char* s2){
	while(*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}


int main(int argc, char **argv)
{
	char s1[3];
	s1[0] = 'a';
	s1[1] = 'b';
	s1[2] = '\0';

	char s2[3];
	s2[0] = 'a';
	s2[1] = 'b';
	s2[2] = '\0';

	if(!strcmp(s1,s2)){
		printf("Equal!\n");
	}
	else{
		printf("Different!\n");
	}
    return 0;
}
