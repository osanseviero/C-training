#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int sumDivisibleBy(int n, int p){
	return double(n*(p/n)*((p/n)+1)/2);
}


int main() {
	float tests, n, sum;
	cin >> tests;
	while(tests>0){			
	   	cin >> n;
	   	sum = sumDivisibleBy(3,n-1) + sumDivisibleBy(5,n-1) - sumDivisibleBy(15,n-1);
	   	cout << sum << endl;
	   	tests--;
	}

   
   		


    return 0;
}
