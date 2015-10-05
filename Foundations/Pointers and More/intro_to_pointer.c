// An introduction to pointers

#include <stdio.h>

int main(){

	// Example 1. Pointer to an int
	int n;	
	int *p = &n; // Pointer to int
	p = &n; // Now p is a pointer to n

	// Example 2. Pointer to an address = pointer to an int
	int *q;
	q = p;

	// Example 3. Changing the variable from the pointer. 
	*p = 2;	// The * means dereference
	printf("%d\n",n);




	return 1;
}