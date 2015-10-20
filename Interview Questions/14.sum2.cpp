#include <iostream>
#include <vector>
#include <map>

/*
	Inside an array of integers, find two numbers that sum the target
*/

/* Questions
	* We need to do this in constant time
*/

// We want to find target = a + b
// So a = target - b
// So we can save a 
// And if we find target-b in hash table(a)
// We get result


std::vector<int> twoSum(std::vector<int> num, int target ){

	std::map<int,int> M;
	std::vector<int> res;

	// For every element
	for(int i=0; i<num.size(); i++){
		int b = target - num[i];

		// If it is in the map
		if(M.find(b) != M.end()){
			res.push_back(M[b]);
			res.push_back(i+1);
			return res;
		}

		// Else put the number and index in the map (just one time!)
		else if(M.find(num[i]) == M.end()){
			M[num[i]] = i + 1;
		}
	}
	return res;
}

int main(){
	std::vector<int> example;
	example.push_back(2);
	example.push_back(7);
	example.push_back(11);
	example.push_back(15);
	example = twoSum(example, 9);

	for(int i=0; i<example.size(); i++){
		std::cout << example[i] << " ";
	}

	return 0;
}







