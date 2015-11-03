#include <iostream>
#include <string>
using namespace std;

/* Create your own atoi: string to integer
*/

/* Questions
	* Can the number be bigger than 2*10^31? No (we're safe with integer and don't need to handle edge cases)
	* Can it have a sign? Yes (we need to handle negative numbers)
*/



int myatoi(string str){
	int res = 0;
	int positive = 1;
	int i=0;
	if(str[0] =='-'){
		positive = 0;
		i++;
	}
		
	while(i<str.length()){
		res = res * 10;
		res += str[i] - '0';
		i++;
	}
	if(positive==0)
		res = res* -1;
	return res;
}


int main(){
	std::cout << myatoi("12321") << std::endl;
	std::cout << myatoi("-12321") << std::endl;
	std::cout << myatoi("12321") << std::endl;
}