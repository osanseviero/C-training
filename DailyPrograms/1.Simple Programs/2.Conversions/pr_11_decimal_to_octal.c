// Program # 11. Decimal to octal
// Receive a decimal and converts to octal

#include <stdio.h>


int main(){
	int decimal, remaind, quotient;
	int octal[100];

	printf("Enter a decimal number: ");
	scanf("%d",&decimal);
	
	int i = 1;

	quotient = decimal;
	while(quotient != 0){
		remaind = quotient % 8;
		octal[i] = remaind; 	// The remainder is equal to the next element
		quotient = quotient/8;
		i++;
	}

	printf("Decimal number: %d\n",decimal);
	printf("Octal number:");
	int j;
	// We need to print reversed
	for(j=i-1; j>0;j--){
		printf("%d",octal[j]);
	}
	printf("\n");
}