#include <iostream>
#include <climits>
using namespace std;

/*
    A child is running up a staircase with n steps, 
    and can hop either 1 step, 2 steps, or 3 steps at a time. 
    Implement a method to count how many possible ways the child can run up the stairs.


*/

int map[INT_MAX];

int countWays(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    else if(map[n] > 0) return map[n];
    else{
        map[n] = countWays(n-1)+countWays(n-2)+countWays(n-3);
    }
    return map[n];
}

int main(){
    cout << countWays(3) << endl;
    cout << countWays(4) << endl;
    cout << countWays(5) << endl;
    return 0;
}