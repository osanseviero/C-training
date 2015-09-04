// Program # 15. Reverse a number

#include <cstdio>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int reverse(int num, int len){
	int a = 0;
	if(len==1)
		return num;
	else{
		a = (num % 10) * pow(10, len - 1);
		return (a + reverse(num/10, --len));
	}
		
	return 1;
}

int getSize(int n){
	int length = 0;
	while(n!=0){
		length++;
		n = n/10;
	}
	return length;
}

int main(){
	int n, result;
	cout << "Enter a number" << endl;
	cin >> n;
	int size = getSize(n);
	int reversed = reverse(n, size);
	cout << reversed << endl;
	return 0;
}
