#include <iostream>

using namespace std;

// Rotate matrix 90º


void rotate(int matrix[][4], int n){
	int l=n;
		for(int i=0;i<l/2;i++){
			for(int j=i; j<l-i-1; 	j++){
				int t=matrix[i][j];
				matrix[i][j]=matrix[j][l-i-1];
				matrix[j][l-i-1]=matrix[l-i-1][l-j-1];
				matrix[l-i-1][l-j-1]=matrix[l-j-1][i];
				matrix[l-j-1][i]=t;
			}
		}
}



int main(){
	int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(int i=0; i < 4; i++){
		for(int j=0; j<4; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	rotate(matrix, 4);
	for(int i=0; i < 4; i++){
		for(int j=0; j<4; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


}