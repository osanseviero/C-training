// Program # 1. Odd even
// Check if a number is odd or even
#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	if(n%2 == 0) {
		printf("The number is even\n");
	}
	else{
		printf("The number is odd\n");
	}

	return 1;
}