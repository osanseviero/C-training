#include <iostream>
#include <vector>


// Find contiguous subarray with largest sum

/* Questions
	* Which size? At least one element
*/

/* Description
	* Go from beg to end O(n)
	* Keep track of max sum and temp sum
	* If temp gets negative, reset it to zero
*/


int maxSubArray(const std::vector<int> &A) {
	int maxSum = INT_MIN;
	int temp = 0;

	for(int i=0; i<A.size(); i++){
		temp += A[i];
		maxSum = std::max(maxSum, temp);
		if(temp<0) temp = 0;	
	}
	return maxSum;
}

int main(){
	std::vector<int> example;
	example.push_back(-2);
	example.push_back(-3);
	example.push_back(5);
	example.push_back(7);
	example.push_back(-8);
	example.push_back(1);
	example.push_back(10);
	example.push_back(-3);
	example.push_back(2);
	std::cout << maxSubArray(example) << std::endl;

	return 0;
}







