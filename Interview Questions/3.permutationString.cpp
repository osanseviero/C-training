#include <iostream>
#include <string>
#include <map>
using namespace std;

// Determine if string has unique characters

/* Questions
	* It is case sensitive
	* They are not always of same size
	* Whitespace is significant
*/

/* Description
	* Brute force- Takes O(n^2) time
	* Sorting string- O(nlog(n))
	* Using map- O(n)
*/



/* Takes O(nlogn) because of the sorting */
int isPermutation(string str1, string str2){
	// Check for the size
	if(str1.length() != str2.length()){
		return 0;
	}
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	return(str1 == str2);
}

int isPermutation2(string s1, string s2){
	// Check the size
	if(s1.length() != s2.length()){
		return 0;
	}

	// Maps char to int. 
	map<char,int> ms1;
	map<char,int> ms2;

	// Counts the characters
	for(int i=0; i < s1.length(); i++){
		ms1[s1[i]]++;
	}
	for(int i=0; i < s2.length(); i++){
		ms2[s2[i]]++;
	}
	return ms1 == ms2;



}


int main(){
	
	string s1,s2;
	int a;
	cin >> s1;
	cin >> s2;
	a = isPermutation2(s1, s2);
	cout << a << endl;

}