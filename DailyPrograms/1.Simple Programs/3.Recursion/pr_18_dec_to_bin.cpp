 // Program # 18. Decimal to binary using recursion

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int toBinary(int n){
	if(n==0)
		return 0;
	else
		return (n%2) + 10 * toBinary(n/2);
}

int main(){
	int n, binary;
	cout << "Enter a number" << endl;
	cin >> n;
	binary = toBinary(n);
	cout << "The binary is: " << binary << endl;
	
	return 0;
}
