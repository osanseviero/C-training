#include <iostream>
using namespace std;

/* You are given two 32-bit numbers, N and M, and two bit positions, i and j. Write
a method to insert M into N such that M starts at bit j and ends at bit i. You can
assume that the bits j through i have enough space to fit all of M. That is, if
M = 10011, you can assume that there are at least 5 bits between j and i. You
would not, for example, have j = 3 and i = 2, because M could not fully fit
between bit 3 and bit 2.

*/


int insertMintoN(long m, long n, long i, long j) {
	
	// Sets 0s from i to j
	long allOnes = ~0;
	long left = allOnes << (j+1);
	long right = (1<<i) - 1;
	long mask = left | right;
	
	// Erase everything in n from i to j
	long n_cleared = n & mask;

	// Shift m so it lines up with j through i
	long m_shifted = m << i;
	long res = m_shifted | n_cleared;
	return res;
}




int main(){
	std::cout << insertMintoN(1024,21, 2, 6) << std::endl;


}