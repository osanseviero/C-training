// Program # 17. Check if a number is a prime number using recursion

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int isPrime(int n, int upTo){
	if(upTo==1)
		return 1;
	else{
		if(n%upTo == 0)
			return 0;
		else
			return isPrime(n, upTo-1);
	}
}

int main(){
	int n, prime;
	cout << "Enter a number" << endl;
	cin >> n;
	prime = isPrime(n,n-1);
	if(prime==1)
		cout << "It is prime! " << endl;
	else
		cout << "It is not prime" << endl;
	return 0;
}
