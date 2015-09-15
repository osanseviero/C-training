#include <iostream>
using namespace std;


void swap(int a[], int b, int c){
	int temp;
	temp = a[b];
	a[b] = a[c];
	a[c] = temp;
}


void mergeSort(int a[], int size){
	int n = size;
	if(n<2)
		return 0;
	
	
}

void printArray(int a[], int size){
	for(int i =0; i<size-1;i++){	
		cout << a[i] << " ";
	}
	cout << endl;

}

int main(){
	int a[] = {2,7,4,1,5,3};
	mergeSort(a,6);
	printArray(a,6);


	return 0;
}