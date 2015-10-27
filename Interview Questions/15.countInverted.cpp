#include <iostream>


/*
	Given an array which originally was sorted, count the number of inverted elements, which is the 
	number of pairs (i,j) of array where i<j and A[i] > A[j]
*/

/* Example: 1 3 5 2 4 6
We find inversions every time a number has a smaller number after ir:
3,2
5,2
5,4
*/


/* Description
	* Brute force- Takes O(n^2) time. Do a bubble sort and count swaps.
	* Divide and conquer- O(nlogn). Do a merge sort and count elements of sec array which are smaller than first array
*/
#define SIZE 6

int count = 0;


void merge(int A[], int low, int mid, int high){
	int temp[SIZE];
	int i = low;
	int k = 0;
	int j = mid+1;

	while(i<=mid && j <= high){
		if(A[i] <= A[j]){
			temp[k++] = A[i++];
		}
		else{
			temp[k++] = A[j++];
			count += mid-i+1;	// To also count current element
		}
	}

	while(i<=mid){
		temp[k++] = A[i++];
	}

	while(j <= high){
		temp[k++] = A[j++];
	}

	k--;

	while(k >= 0){
		A[low+k] = temp[k];
		k--;	
	}

}



void mergeSort(int A[], int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);
		merge(A,low,mid,high);
	}

}



int main(){
	int A[SIZE] = {6,5,4,3,2,1};
	mergeSort(A,0,5);

	for(int i=0; i<6; i++){
		std::cout << A[i] << " ";
	}
	std::cout << "Inversions: " << count << std::endl;

	return 0;
}







