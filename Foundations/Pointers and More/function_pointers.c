#include <stdio.h>

int main(){
	int (*say)(const char *);
	say = puts;
	say("Hello world");
	return 0;
}