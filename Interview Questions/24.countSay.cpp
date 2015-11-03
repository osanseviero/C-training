#include <iostream>
#include <string>
using namespace std;

/* This is the count and say sequence
	1	one
	11	one one
	21	two ones (check the previous)
	1211	one two and one one
	111221	one one, one two, two ones
	312211	three ones, two twos, one one

	Write a function that returns the n row of this sequence
*/


string countSay(int n){
	if(n==0) return "";
	if(n==1) return "1";

	string res = "1";
	string temp;

	for(int i=2; i<=n; i++){
		temp = "";
		for(int j=0; j<res.length();j++){
			int count = 1;
			while((j+1<res.length()) && (res[j]==res[j+1])){
				count++;
				j++;
			}
			temp += to_string(count) + res[j];
		}
		res = temp;
	}
	return res;
}


int main(){
	string res = countSay(1);
	cout << res << endl;
	res = countSay(2);
	cout << res << endl;
	res = countSay(3);
	cout << res << endl;
	res = countSay(4);
	cout << res << endl;
	res = countSay(5);
	cout << res << endl;
	res = countSay(6);
	cout << res << endl;

}