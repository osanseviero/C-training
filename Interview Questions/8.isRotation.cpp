#include <iostream>
#include <string>

using namespace std;

// Given two strings, check if s2 is a rotation of s1

/* Description
	* You need to use isSubstring only once
	* Think that isSubstring is already implemented
*/

/* Check if a string is a substring of another*/
int isSubstring(string s1, string s2){
	if (s1.find(s2) != std::string::npos) {
	    return 1;
	}
	return 0;
}


/* Check if a string is a rotation of another */
int isRotation(string s1, string s2){
	// Strings need to be of same length
	if(s1.length() != s2.length()){
		return 0;
	}
	// Empty string can't be rotated
	if(s1.length() == 0){
		return 0;
	}

	// For a string yx to be a rotation of xy, yx needs to be a substring of xyxy (because of the middle)
	string s1s1 = s1 + s1;
	return isSubstring(s1s1,s2);
}



int main(){
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int i;
	i = isRotation(s1,s2);
	cout << i << endl;


}