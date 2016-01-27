#include <stdio.h>


int main() {
	bool flag = false;
	char inp;

	while (scanf("%c", &inp), !feof(stdin)) {
		if(inp == '\"'){
			if(!flag) printf("``");
			else printf("\'\'");
			flag = !flag;
		}
		else{
			printf("%c", inp);
		}
	}
	return 0;
}