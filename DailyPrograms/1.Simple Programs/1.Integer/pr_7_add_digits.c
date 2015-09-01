// Program # 7. Add digits
// Receive an integer and adds the digits

#include <stdio.h>


int main(){
	long num, temp, digit, sum = 0;

	printf("Enter a number: ");
	scanf("%ld", &num);
	temp = num;

	while(num>0) {
		digit = num % 10;
		sum += digit;
		num /= 10;
	}
	printf("Sum of digits is %ld = %ld\n",temp,sum);

}