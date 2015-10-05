#include <iostream>
#include <string>

using namespace std;

// String compression. aaabbaaaa = a3b2a4




string compress(string s){
	string result = "";
	int count;
	char elem;
	for(int i=0; i<s.length(); i++){
		elem = s[i];
		count = 1;
		while(s[i+1]==elem){
			count++;
			i++;
		}
		result += elem;
		result += to_string(count);
	}

	// If size of new one is smaller
	if(result.length() < s.length()){
		return result;
	}
	return s;
}



int main(){
	string s1, s2;
	cin >> s1;
	s2 = compress(s1);
	cout << s2 << endl;


}