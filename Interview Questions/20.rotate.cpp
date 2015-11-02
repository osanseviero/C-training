#include <iostream>

// Given an n*n 2D matrix representing an image composed of 4bit bytes, write a method to rotate 90\

/* Questions
	* Do I receive the size of the matrix? Yes
	* Can I use additional arrays? No, do it in place
*/

/* Description
	* Iterate by layers. Think carefully of which indexes you need to use
	* It does in n*n time (fastest)
*/



void rotateMatrix(int arr[][4], int n){
	for(int layer=0; layer < n/2; layer++){
		int first = layer;
		int last = n-1-layer;
		for(int i=first; i < last; i++){
			
			int offset = i - first;

			// Save top
			int top = arr[first][i];

			// Left goes to top
			arr[first][i] = arr[last-offset][first];

			// Bottom to left
			arr[last-offset][first] = arr[last][last-offset];

			// Right to bottom
			arr[last][last-offset] = arr[i][last];

			// Top to right
			arr[i][last] = top;
			

		}
	}
}


int main(){
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	rotateMatrix(arr,4);
	for(int i=0; i<4;i++){
		for(int j=0; j<4;j++){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}





}