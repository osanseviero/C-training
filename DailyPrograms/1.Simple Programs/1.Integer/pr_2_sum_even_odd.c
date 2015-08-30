// Program # 2. Odd even sum
// This program receive a number n as input
// The program then checks one by one all numbers before n
// Adds the even and odd numbers separately

#include <stdio.h>

int main() {
	int odd_sum = 0;
	int even_sum = 0;
	int n = 0;

	printf("Enter a number :");
	scanf("%d", &n);
	while(n>0){
		if(n%2 == 0)
			even_sum += n;
		else
			odd_sum += n;
		n--;
	}
	printf("Sum of all odd numbers: %d\n", odd_sum);
	printf("Sum of all even numbers: %d\n", even_sum);


	return 1;
}