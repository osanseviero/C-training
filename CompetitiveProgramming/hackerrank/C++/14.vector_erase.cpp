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
    int x;
    cin >> x;
    int a, b;
    cin >> a >> b;

    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    cout << v.size() << endl;
    for(int i = 0; i != v.size(); i++){
    	cout << v[i] << " ";
    }

    return 0;
}
