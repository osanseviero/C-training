#include <iostream>
using namespace std;


void swap(int a[], int b, int c){
	int temp;
	temp = a[b];
	a[b] = a[c];
	a[c] = temp;
}


void insertSort(int a[], int size){
	
	for(int i = 1; i<size-1; i++){
		int hole = i;
		while((hole>0) && (a[hole-1] > a[hole])){
			swap(a,hole-1,hole);
			hole--;
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
	insertSort(a,6);
	printArray(a,6);


	return 0;
}