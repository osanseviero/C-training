#include <iostream>
using namespace std;

int trailingZeroes(int n){
    int count = 0;
    for (int i=5; n/i>=1; i *= 5)
        count += n/i;
    return count;
}


int main(){ 
    int n1, n2;
    cout << "Enter a number: ";
    cin >> n1;
    cout << trailingZeroes((n1)) << endl;
    return 0;
}


