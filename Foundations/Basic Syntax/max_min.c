// Funcion examples of maximum and minimum

#include <stdio.h>

/*Return the max of x and y */
int maximum(int x, int y) {
	if(x > y)
		return x;
	else
		return y;
}

/*Return the min of x and y */
int minimum(int x, int y) {
	if(x > y)
		return y;
	else
		return x;
}



int main() {
	printf("%d\n", maximum(6,1));
	return 1;
}