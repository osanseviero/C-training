#include <iostream>
#include <string>
using namespace std;

/* 
 Given a real number between 0 and 1 (e.g., 0.72) that is passed in as a double,
print the binary representation. If the number cannot be represented accurately
in binary with at most 32 characters, print "ERROR."
*/


std::string printBinary(float num) {
	
	if(num>=1 || num <= 0){
		return "ERROR";
	}
	std::string binary;
	binary = ".";
	while(num>0){
		if(binary.length() > 32){
			return "ERROR";
		}
		float r = num * 2;
		if(r >= 1){
			binary += "1";
			num = r-1;
		}
		else{
			binary += "0";
			num = r;
		}
	}
	return binary;
}




int main(){
	std::cout << printBinary(0.3) << std::endl;


}