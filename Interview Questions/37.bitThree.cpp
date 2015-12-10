#include <iostream>
#include <string>
using namespace std;

/* 
 Given a positive integer, print the next smallest and the next largest 
 number that have the same number of 1 bits in their binary representation.
*/


int getNext(int n){
	int c = n;
	int c0 = 0;
	int c1 = 0;

	// Pass over first 0’s
	while(((c & 1) == 0) && (c != 0)){
		c0++;
		c >>= 1;
	}
	// Pass over first 1’s
	while((c & 1) == 1){
		c1++;
		c >>= 1;
	}
	
	// Error: just 1’s and then 0’s
	if(c0+c1 == 31 || c0+c1 == 0){
		return -1;
	}

	int p = c0+c1;

	// Clears all bits at the right of p
			/*int mask = 1<<p;
			mask = mask-1;
			mask = ~mask;
			n = n & mask;*/
	n |= (1 << p); 
	n &= ~((1 << p) - 1);
	
	
	// Makes all 0’s and then c1 1’s
			/*mask = 1 << (c1-1);
			mask = mask-1;
			n = n |mask;*/
	n |= (1 << (c1 - 1)) - 1; 
	return n;
}


int getPrev(int n){
	int c0 = 0;
	int c1 = 0;
	int c = n;

	while((c&1)==1){
		c1++;
		c>>=1;
	}
	if(c==0) return -1;

	while((c&1)==0 && (c!=0)){
		c0++;
		c>>=1;
	}

	int p = c0+c1;
	
	int a = ~0;
	int b = a << (p+1);
	n &= b;

	a = 1 << (c1 + 1);
	b = a - 1;
	c = b << (c0-1);
	n |= c;

	return n;
	
}



int main(){
	std::cout << getPrev(10) << std::endl;


}