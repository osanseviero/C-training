#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


/* http://www.geeksforgeeks.org/find-the-element-that-appears-once/ */
int singleNumber(vector<int> A) {
    int ones = 0, twos = 0;
    int common_bit_mask;
    int n = A.size();
    for( int i=0; i< n; i++ ){
    	twos  = twos | (ones & A[i]);
    	ones  = ones ^ A[i];
    	common_bit_mask = ~(ones & twos);
    	ones &= common_bit_mask;
    	twos &= common_bit_mask;
    }
    
    return ones;
}

int main(){ 
	vector<int> problem;
	problem.push_back(1);
	problem.push_back(1);
	problem.push_back(1);
	problem.push_back(2);
	problem.push_back(3);
	problem.push_back(3);
	problem.push_back(3);
	problem.push_back(2);
	problem.push_back(2);
	problem.push_back(4);
    cout << singleNumber(problem) << endl;
    return 0;
}


