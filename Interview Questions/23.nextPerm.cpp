#include <iostream>
#include <vector>
using namespace std;

// Given a vector of integers, return the next permutation

/* Questions
	* Can I use the STL vector class? Yes
	* What happens if it is already the last one? Return the min one
*/

/* Description: 1 2 3 7 5 1
	* Find the element which is not in decreasing order from left to right [3]
	* Find the element which is bigger than the previous step element [5]
 	* Swap i and j 1 2 5 7 3 1
 	* Reverse to right of i  1 2 5 1 3 7
*/



void nextPerm(vector<int> &num){
	int j;

	// Find idx that is not descending order
	for(j= num.size()-2; j>=0; j--){
		if(num[j] < num[j+1]) break;
	}

	// If it is already the biggest, make it the lowest
	if(j==-1){
		reverse(num.begin(), num.end());
		return;
	}
	int i;

	// Find element to swap
	for(i = num.size()-1; i>j; i--){
		if(num[i] > num[j]) break;

	}

	swap(num[i], num[j]);
	reverse(num.begin()+j+1, num.end());
}


int main(){
	vector<int> perm;
	// 1 2 3 7 5 1

	perm.push_back(1);
	perm.push_back(2);
	perm.push_back(3);
	perm.push_back(7);
	perm.push_back(5);
	perm.push_back(1);

	for(int i=0; i<6; i++){
		std::cout << perm[i] << " ";
	}
	std::cout << std::endl;

	nextPerm(perm);
	for(int i=0; i<6; i++){
		std::cout << perm[i] << " ";
	}
	std::cout << std::endl;

}