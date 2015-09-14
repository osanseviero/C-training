#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int isPrime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}

vector<int> findPrimes(int n){
    vector<int> sieve(n+1);
    for(int i = 0; i<=n; i++){
        sieve[i] = 1;
    }
    sieve[0] = 0;
    sieve[1] = 0;

    for(int i = 2; i<= n; i++){
        if(isPrime(i)){
            for(int j = 2; j*j <=n; j++){
                sieve[i*j] = 0;
            }
        }
    }
    return sieve;
}

int main(){	
    int n;
    cout << "Enter the max value: ";
    cin >> n;
    cout << endl;
    vector<int> primes = findPrimes(n);
    for(int i=0; i<n; i++){
        if(primes[i] == 1)
            cout << i << endl;
    }
	return 0;
}




