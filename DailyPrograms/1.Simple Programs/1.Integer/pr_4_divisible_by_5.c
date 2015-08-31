// Program # 4. Divisible by 5
// Asks for two numbers
// Check for all numbers in that range that are divisible by 5
// Then add them

#include <stdio.h>

int main() {
	int num1, num2;

	printf("Enter the lower number: ");
	scanf("%d", &num1);

	printf("Enter the bigger number: ");
	scanf("%d", &num2);

	int i;
	int count = 0;
	int sum = 0;
	printf("Numbers divisible by 5: \n");
	for(i=num1; i < num2; i++){
		if(i%5 == 0){
			printf("%d! ", i);
			count++;
			sum += i;
		}
	}
	printf("\nTotal of numbers divisible by 5: %d\n", count);
	printf("Sum of numbers: %d\n", sum);
	return 0;
}
