#include <iostream>
#include <string>
using namespace std;

/* 
 Write a program to swap odd and even bits in an integer with as few 
 instructions as possible.pr

*/


int swapEvenOdds(int x){
	int evens = x & 0xAAAAAAAA;
	int odds = x & 0x55555555;
	
	evens = evens >>1;
	odds = odds << 1;

	return evens|odds;

}



int main(){
	std::cout << swapEvenOdds(23) << std::endl;
}