#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
	int elements;
    cin >> elements;

    set <int> s;
    int t, j;
    for(int i = 0; i < elements; i++){
    	cin >> t >> j;
    	if(t==1)
    		s.insert(j);
    	else if(t==2)
    		s.erase(j);
    	else{
    		set<int>::iterator itr = s.find(j);
    		if(itr == s.end()){
    			cout << "No" << endl;
    		}
    		else{
    			cout << "Yes" << endl;
    		}
    	}
    }



    return 0;
}
