#include <iostream>
using namespace std;

int findSingle(int n[]){
    int number = 0;
    int size = n.size();
    for(int i=0; i<size; i++){
    	number = number ^ n;
    }
    return number
}


int main(){ 
    cout << findSingle({1,1,2,3,3,4}) << endl;
    return 0;
}


