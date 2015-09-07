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
	char s1[] = "ab";
	char s2[] = "ab";

	if(!strcmp(s1,s2)){
		printf("Equal!\n");
	}
	else{
		printf("Different!\n");
	}
    return 0;
}
