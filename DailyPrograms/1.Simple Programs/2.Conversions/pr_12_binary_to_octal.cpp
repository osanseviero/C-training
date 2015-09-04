// Program # 12. Binary to octal
// Receive a binary and converts to octal

#include <stdio.h>


int main(){
	int binary, remaind, octal;
	octal = 0;

	printf("Enter a binary number: ");
	scanf("%d",&binary);
	
	int i = 1;

	while(binary != 0){
		remaind = binary % 10;	// We get each digit
		octal += remaind * i; 
		i = i*2;
		binary = binary/10;
	}

	printf("The number in octal is: %d\n",octal);
}