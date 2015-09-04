// Program # 16. Sum N numbers using recursion

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int addToN(int n){
	int sum = 0;
	if(n==1)
		return 1;
	else
		sum = n + addToN(n-1);
	return sum;
}

int main(){
	int n, result;
	cout << "Enter a number" << endl;
	cin >> n;
	int sum = addToN(n);
	cout << sum << endl;
	return 0;
}
