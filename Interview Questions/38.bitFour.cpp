#include <iostream>
#include <string>
using namespace std;

/* 
Write a function to determine the number of bits required to convert integer A
to integer B.
*/


int bitSwapRequired(int n, int m){
	int count = 0;
	for(int i = n^m; i != 0; i>>=1){
		count += i&1;
	}
	return count;
}



int main(){
	std::cout << bitSwapRequired(31,14) << std::endl;
}