#include <stdio.h>

int main(){
	int A[4];	// Pointer to first element
	A[0] = 1; A[1] = 3; A[2] = 5; A[3] = 20;
	printf("Address of base: %d\n", A);
	printf("Value of base: %d\n", *A);	// Value of first element

	printf("A+1: %d\n", A+1);	// Address of second element	
	printf("Second value. *(A+1): %d\n", *(A+1));	// Address of second element	

	return 0;
}