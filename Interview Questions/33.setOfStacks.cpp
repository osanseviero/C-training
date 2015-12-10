#include <iostream>
using namespace std;

int updateBits(int n, int m, int i, int j){
	int ones = ~0;

	// 1s before position j, then 0s
	int left = ones << (j+1);

	// 1s after position i
	int right = ((1 << i)-1);

	// 1s except double 0
	int mask = right | left;

	// Clear j through i
	int n_cleared = n & mask;
	int m_shifted = m << i;

	return n_cleared | m_shifted;

}


int main(){
	std::cout << updateBits(1024, 21, 2, 6);


}