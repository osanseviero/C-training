#include <iostream>


/*
	Implement quicksort
*/


#define SIZE 6


void swap(int base_array[], int j, int k) {
	int tmp = base_array[k];
	base_array[k] = base_array[j];
	base_array[j] = tmp;
}

int partition(int A[], int l, int r){
	int pI = l;

	while(l<r){
		while(A[r] > A[pI]){
			r--;
		}

		while((l<r) && (A[l] <= A[pI])){
			l++;
		}
		if(l<r)
			swap(A,l,r);

	}
	swap(A, pI, r);
	return r;
}

void quickSort(int A[], int low, int high){
	if(low<high){
		int pI = partition(A,low, high);
		quickSort(A,low,pI-1);
		quickSort(A, pI+1,high);
	}
}


int main(){
	int A[SIZE] = {6,5,4,3,2,1};
	quickSort(A,0,5);

	for(int i=0; i<6; i++){
		std::cout << A[i] << " ";
	}

	return 0;
}







