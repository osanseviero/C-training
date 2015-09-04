// Program # 14. Sum of digits
// Sum digits of number using recursion

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;


int sumDigits(int n){
	if(n !=0)
		return(n%10 + sumDigits(n/10));
	else
		return 0;
}


int main(){
	int n, result;
	cout << "Enter a number" << endl;
	cin >> n;
	result = sumDigits(n);
	cout << result << endl;
	return 0;
}
