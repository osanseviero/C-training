#include <iostream>
using namespace std;

// Reverse a string in C++

/* Questions
	* It receives a pointer to first char
	* It is null terminated
	* It is in place
*/


void reverse(char* str){
	// Find last not null terminated char
	char * end = str;

	while(*end){
		end++;
	}
	end--;

	// Swap values
	char temp;
	while(str != end){
		temp = *end;
		*end = *str;
		*str = temp;

		str++;
		end--;
	}

}

int main(){
	char str[6] = "Hello";
	reverse(str);
	cout << str << endl;


}