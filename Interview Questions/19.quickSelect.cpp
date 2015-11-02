#include <iostream>


/*
	Given an array A of n numbers, find the ith smallest element
	So if A = {10, 8, 2, 4}, and i=3, the output is 8
*/


#define SIZE 4


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

int quickSelect(int A[], int low, int high, int order){
	if(low==high) return A[low];
	int j = partition(A,low, high);
	if(j==order) return A[j];
	if(j>order) return quickSelect(A,low, j-1, order);
	if(j<order) return quickSelect(A,j+1,high, order-j);
}


int main(){
	int A[SIZE] = {10, 2, 8, 4};
	int i = quickSelect(A,0,3,2);
	std::cout << i << std::endl;
	for(int i=0; i<4; i++){
		std::cout << A[i] << " ";
	}

	return 0;
}







