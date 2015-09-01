// Program # 8. Binary to decimal
// Receive an integer and converts to decimal

#include <stdio.h>


int main(){
	int num, binary, decimal = 0;
	int base = 1;
	int rem;

	printf("Enter a binary number");
	scanf("%d",&num);

	binary = num;

	while(num>0){
		rem = num%10;
		decimal += rem * base;
		num = num/10;
		base = base * 2;
	}

	printf("Binary: %d and decimal: %d\n", binary,decimal);
}