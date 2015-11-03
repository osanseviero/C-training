#include <iostream>
#include <vector>
using namespace std;

// Given an int n, return the first n rows of the Pascal Triangle

/* Questions
	* Can I use the STL vector class? Yes
*/

/* Description
	* If it is the first or last element of row, it is a 1
	* Else, check the last row
*/



vector<vector<int> > generatePascal(int n){
	vector<vector<int> > result;
	if(n==0)
		return result;

	// i goes from 0 to n
	for(int i=0; i<=n; i++){
		vector<int> row;

		// Iterate from 0 to i
		for(int j=0; j<i;j++){

			// If first or last column, it is 1
			if((j==0) || (j==i-1))
				row.push_back(1);

			// Else, check the last row
			else
				row.push_back(result[i-1][j-1]+result[i-1][j]);
		}
		result.push_back(row);
	}
	result.erase(result.begin());
	return result;

}


int main(){
	vector <vector<int> > pascal = generatePascal(6);
	for(int i=0; i<6; i++){
		for(int j=0; j<=i; j++){
			std::cout << pascal[i][j] << " ";
		}
		std::cout << std::endl;
	}
}