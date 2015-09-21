#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;


int square_root(int n){
    if (x == 0) return 0;
            int start = 1, end = x, ans;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (mid <= x / mid) {
                    start = mid + 1;
                    ans = mid;
                } else {
                    end = mid - 1;
                }
            }
            return ans;
}


int main(){ 
	int n1, n2;
    cout << "Enter a number: ";
    cin >> n1;
    cout << square_root(n1) << endl;
    return 0;
}


