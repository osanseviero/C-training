#include <iostream>
#include <string>
using namespace std;

/* 
 Write a program to determine if a number is a power of 2

*/


bool powerOfTwo(int x){
	if(x<=0){
		return false;
	}
	return (x&(x-1)) == 0;

}



int main(){
	std::cout << powerOfTwo(23) << std::endl;
	std::cout << powerOfTwo(8) << std::endl;
}