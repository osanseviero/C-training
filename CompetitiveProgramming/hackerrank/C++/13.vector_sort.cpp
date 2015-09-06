#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int elements;
    cin >> elements;

    vector <int> v;
    for(int i = 0; i < elements; i++){
    	int j;
    	cin >> j;
    	v.push_back(j);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < elements; i++){
    	cout << v[i] << " ";
    }
    return 0;
}
