// Check if string 2 is substring of the first one
// Input: two strings

#include <iostream>
#include <string>

using namespace std;

int main(){

	string word, encrypted, output;
	output = "";
	for(int i = 0; i <= 20; i++){
		
		cin >> word >> encrypted;

		if(!cin){
			break;
		}
		
		int counter = 0;

		for(int i = 0; i < encrypted.size(); i++){
			if(word[counter]==encrypted[i]){
				counter++;
			}	
		}

		if(counter == word.size()){
			output += "Yes\n";
		}
		else{
			output += "No\n";
		}
	}
	cout << output;
	return 0;
}