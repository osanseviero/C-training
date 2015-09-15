#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int A) {
    
    if(A<=1)
        return 0;
    
    for(int i=2; i<=sqrt(A); i++){
        if(A%i == 0)
            return 0;
    }
    return 1;
}

int main(){ 
    int n;
    cout << "Enter the max value: ";
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}


