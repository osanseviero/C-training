// Add all numbers from 1 to N (including it)
// Input: N, max size 10^4

#include <iostream>

using namespace std;

int main(){
	int n;
	int sum = 0;
	cin >> n;
	

	if(n>=0){
		while(n>=1){
			sum += n;
			n--;
		}
	}
	else{
		while(n<=1){
			sum += n;
			n++;
		}
	}
		

	cout << sum;

	return 0;
}