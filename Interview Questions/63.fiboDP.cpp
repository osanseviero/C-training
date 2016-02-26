#include <iostream>
#include <climits>
using namespace std;

/*
    Solve Fibonacci with DP

*/

int fib[INT_MAX];

int fibonacci(int i){
    if(i==0) return 0;
    if(i==1) return 1;
    if(fib[i] != 0) return fib[i];
    fib[i] = fibonacci(i-1) + fibonacci(i-2);
    return fib[i];
}

int main(){
    cout << fibonacci(3) << endl;
    cout << fibonacci(4) << endl;
    cout << fibonacci(5) << endl;
    return 0;
}