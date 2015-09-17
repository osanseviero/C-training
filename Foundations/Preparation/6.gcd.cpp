#include <iostream>
using namespace std;

int gcd(int num1, int num2) {  
    int min = num1;
    if(num2<num1)
        min = num2;
    int max = num1;
    for(int i=1; i<=min;i++){
        if(num1%i==0 && num2%i==0){
            max=i;
        }
    }
    return max;
}


int main(){ 
    int n1, n2;
    cout << "Enter a number: ";
    cin >> n1;
    cout << "Enter a number: ";
    cin >> n2;
    cout << gcd(n1,n2) << endl;
    return 0;
}


