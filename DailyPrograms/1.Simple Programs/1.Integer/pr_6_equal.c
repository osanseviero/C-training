// Program # 5. Swap
// Function that takes two numbers and swaps them

#include <stdio.h>
#include <stdbool.h>	// C does not support bool as a primitive

bool areEqual(int num1, int num2);

int main(){
	int num1, num2;
	printf("Give me a number: ");
	scanf("%d", &num1);

	printf("Give me another number: ");
	scanf("%d", &num2);

	printf("%d == %d : %d\n", num1, num2, areEqual(num1, num2));
}

bool areEqual(int num1, int num2) {
	if(num1==num2)
		return true;
	return false;
}