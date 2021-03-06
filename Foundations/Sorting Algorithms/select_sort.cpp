#include <iostream>
using namespace std;


void swap(int a[], int b, int c){
	int temp;
	temp = a[b];
	a[b] = a[c];
	a[c] = temp;
}

void selectionSort(int a[], int size){
	// Go element by element
	for(int i = 0; i<size-2;i++){
		int min = i;

		// Find smallest element
		for(int j = i; j < size-1;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		// Swap
		swap(a,i, min);
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
	selectionSort(a,6);
	printArray(a,6);


	return 0;
}