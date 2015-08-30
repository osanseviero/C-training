// Program # 3. Negative
// Tells if a number is negative

#include <stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	if(n>0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n",n);
	


	return 0;
}