#include <iostream>
using namespace std;


void swap(int a[], int b, int c){
	int temp;
	temp = a[b];
	a[b] = a[c];
	a[c] = temp;
}


void bubbleSort(int a[], int size){
	
	for(int i = 1; i<size-1; i++){
		int flag = 0;
		for(int j=0; j<size-i-1; j++){
			if(a[j] > a[j+1]){
				swap(a,j,j+1);
				flag = 1;
			}
		}
		if(flag==0){
			break;
		}
	}
	
	
}

void printArray(int a[], int size){
	for(int i =0; i<size-1;i++){	
		cout << a[i] << " ";
	}
	cout << endl;

}

int main(){
	int a[] = {2,7,4,1,5,3};
	bubbleSort(a,6);
	printArray(a,6);


	return 0;
}