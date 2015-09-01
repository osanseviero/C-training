// Program # 9. Decimal to binary
// Receive an integer, converts to binary, and adds the 1s

#include <stdio.h>


int main(){
	int num, binary = 0, decimal = 0;
	int base = 1;
	int rem;
	int ones = 0;

	printf("Enter a decimal number: ");
	scanf("%d",&num);

	decimal = num;

	while(num>0){
		rem = num%2;
		if(rem==1)
			ones++;
		binary += rem * base;
		num = num/2;
		base = base * 10;
	}

	printf("Binary: %d and decimal: %d\n", binary,decimal);
	printf("Amount of zero: %d\n", ones);
}