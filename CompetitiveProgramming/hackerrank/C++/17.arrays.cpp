/*
	First line: Size of array
	Second line: Elements of the array
	Output: Array inversed
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[10000];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
    	cin >> a[i];
    }
    for(int i=size-1; i >= 0; i--){
    	cout << a[i] << " ";
    }
    return 0;
}
