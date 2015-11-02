#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Determine if string has unique characters

/* Questions
	* All chars are ASCII (256 chars vs the 65k in unicode)
*/

/* Description
	* Brute force- Takes O(n^2) time
	* Sorting string- O(nlog(n))
	* Using map- O(n)
*/



int isUniqueChar(string str){
	// If more chars that in ascii table
	if(str.length() > 256){
		return 0;
	}
	
	// Char -> amount of times of the char
	unordered_map<char,int> values;

	// Iterate over string
	for(int i = 0; i < str.length(); i++){
		// If it already is there
		if(values[str[i]]>0){
			return 0;
		}
		values[str[i]]++;
	}

	return 1;
}


int main(){
	string s;
	cin >> s;
	int a;
	a = isUniqueChar(s);
	cout << a << endl;


}