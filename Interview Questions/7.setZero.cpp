#include <iostream>
#include <vector>

using namespace std;

// If an element of an MxN matrix is 0, set the column and the row to 0

/* Questions
	* The space does matter
	* It needs to be in place
*/

/* Description
	* We could just iterate over matrix, but we would check 0's that are not original
	* We can creata a copy of the matrix, but that would be expensive
*/


void setZeroes(int matrix[][4], int n, int m){
	vector<int> row;
	vector<int> column;

	// Save rows and columns with an element with 0
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				 row.push_back(i);
				 column.push_back(j);
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(std::find(row.begin(),row.end(),i) != row.end()){
				matrix[i][j] = 0;
			}
			if(std::find(column.begin(),column.end(),j) != column.end() ){
				matrix[i][j] = 0;
			}
		}
	}


}



int main(){
	int matrix[5][4] = {{1,2,3,0},{5,6,7,8},{9,10,11,12},{13,14,15,16}, {7,0,6,4}};
	for(int i=0; i < 5; i++){
		for(int j=0; j<4; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	setZeroes(matrix, 5,4);
	for(int i=0; i < 5; i++){
		for(int j=0; j<4; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


}