#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int totalBits(int x) {
    int total_ones = 0;
    while (x != 0) {
        x = x & (x-1);
        total_ones++;
      }
  return total_ones;
}

int main(){ 
    int n;
    cout << "Enter the max value: ";
    cin >> n;
    cout << totalBits(n) << endl;
    return 0;
}


