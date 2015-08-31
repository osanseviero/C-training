// Program # 5. Swap
// Function that takes two numbers and swaps them

#include <stdio.h>

void swap(int * a, int * b);

int main() {
	int num1, num2;
	printf("Give me a number: ");
	scanf("%d", &num1);

	printf("Give me another number: ");
	scanf("%d", &num2);

	swap(&num1, &num2);
	printf("Num1: %d. Num2: %d\n", num1, num2);
	return 0;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}