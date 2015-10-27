#include <iostream>
#define SIZE 10



void merge(int A[], int low, int q1, int q2, int high){
	int i = low;
	int j= q1;
	int k = q2;
	int h = 0;
	int temp[SIZE];


	while((i<q1) && (j<q2) && (k<high)){
		if(A[i] < A[j] && A[i] < A[k])
			temp[h++] = A[i++];
		if(A[k] < A[j] & A[k] < A[i])
			temp[h++] = A[k++];		
		else
			temp[h++] = A[j++];
	}

	while(i<q1 && j<q2){
		if(A[i] < A[j])
			temp[h++] = A[i++];
		else
			temp[h++] = A[j++];
	}
	while(i<q1 && k<high){
		if(A[i] < A[k])
			temp[h++] = A[i++];
		else
			temp[h++] = A[k++];
	}
	while(k<high && j<q2){
		if(A[j] < A[k])
			temp[h++] = A[j++];
		else
			temp[h++] = A[k++];
	}
	while(i<q1)
		temp[h++] = A[i++];
	while(j<q2)
		temp[h++] = A[j++];
	while(k<high)
		temp[h++] = A[k++];

	h--;

	while(h>0){
		A[low+h] = temp[h];
		h--;
	}



}


void mergeSort(int A[], int low, int high){
	std::cout << low << " and h: " << high << std::endl;
	// We put 3 elements
	if(low<high-2){
		int q1 = (low+high)/3;
		int q2 = 2*q1;
		std::cout << "q1: " << q1 << " q2: " << q2 << std::endl;
		mergeSort(A,low,q1);
		mergeSort(A,q1+1,q2);
		mergeSort(A,q2+1,high);
		merge(A,low,q1,q2,high);
	}

}








int main(){
	int A[SIZE] = {1,2,4,5,7,9,3,6,8};
	mergeSort(A,0,9);

	for(int i=0; i<9; i++){
		std::cout << A[i] << " ";
	}

	return 0;
}

