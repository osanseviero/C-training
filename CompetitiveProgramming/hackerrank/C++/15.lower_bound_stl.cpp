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

    int queries;
    cin >> queries;
    int q;
    while(queries--){
        cin >> q;
        vector<int>::iterator low;
        low = lower_bound(v.begin(),v.end(), q);    // Low will point to the element
        if(*low==q){
            cout << "Yes " << (low- (v.begin()-1)) << endl;
        }
        else{
            cout<<"No "<<(low- (v.begin()-1)) << endl;;
        }
    }

    return 0;
}
