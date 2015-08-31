// Static function example
// Just this file can use the function
#include <stdio.h>

static void helloHelper(void){
	puts("hi!");
}

void hello(int repetitions){
	int i;
	for(i=0; i < repetitions; i++){
		helloHelper();
	}
}

int main(){
	hello(5);
	return 0;
}