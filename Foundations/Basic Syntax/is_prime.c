// Funcion that tells if a number is prime

#include <stdio.h>

int isPrime(int n) {
	int i;
	if(n < 2)
		return 0;
	for(i=2; i< n; i++){
		if(n%i == 0){
			return 0;
		}
	}

	return 1;
}


int main(){
	printf("Is %d prime? %d\n", 2, isPrime(2));
	return 0;
}