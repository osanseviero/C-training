#include <iostream>
#include <string>
using namespace std;

/* Find the largest palindrome substring of a given string
*/

/* Description: 
	* Write the function to check if it is a palindrome
	* Go from outside to inside, if it is a palindrome, return it.
*/


int isPalindrome(string a){
    return a == string(a.rbegin(), a.rend());
}

string longestPalindrome(string A) {
	int i, j;
    for(i=0, j=A.length()-1; i !=j; i++, j--){
    	if(isPalindrome(A.substr(i,A.length()-i-i)))
    		return A.substr(i,A.length()-i-i);
    }
    return "";
}


int main(){
	std::cout << longestPalindrome("aaabaaa") << std::endl;
	std::cout << longestPalindrome("lbacall") << std::endl;
	std::cout << longestPalindrome("aeiou") << std::endl;
}