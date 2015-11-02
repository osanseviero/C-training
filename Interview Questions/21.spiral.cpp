#include <iostream>

// Given an m*n 2D matrix, print it in spiral

/* Questions
	* Do I receive the size of the matrix? Yes
	* Is it a square matrix? Yes
*/

/* Description
	* Solve first for one layer for a 3x3 matrix. Then add the layers.
*/



void spiral(int arr[4][4], int size){
	int n = size;

	for(int layer=0; layer<=n/2; layer++){
		int first = layer;
		int last = n-1-layer;

		// Go from [0][0] to [0][2]
		for(int j=first; j<=last; j++){
			std::cout << arr[first][j];
		}

		// Go from [1][2] to [2][2]
		for(int i=first+1; i<last; i++){
			std::cout << arr[i][last];

		}

		// Go from [2][1] to [2][0]
		for(int j=last; j>first; j--){
			std::cout << arr[last][j];

		}

		// Go from [2][0] to [1][0]
		for(int i=last; i>first; i--){
			std::cout << arr[i][first];
		}
	}
}

int main(){
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	spiral(arr,4);
}