#include <iostream>
using namespace std;


void swap(int a[], int b, int c){
	int temp;
	temp = a[b];
	a[b] = a[c];
	a[c] = temp;
}


void quickSort(int base_array[], int low, int high){
	/* 
		You chose an element from the array.
		Every element higher from the array go to one side, the elements lower to it go to the left.
		Repeat!
	*/
    int pivot,j,temp,i;

     if(low < high){
         pivot = low;
         i = low;
         j = high;

         // This part is named partitioning
         while(i < j){
             while(base_array[i] <= base_array[pivot] && ( i < high))
                 i++;
             while(base_array[j] > base_array[pivot])
                 j--;
             if(i < j){
             	swap(base_array, i, j);
             }
         }
         // Direct case: when the pivot is higher than j. (Remember that we reduce j in the while)
         swap(base_array, pivot, j);	

         quickSort(base_array, low, j-1);
         quickSort(base_array, j+1, high);

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
	quickSort(a,0,5);
	printArray(a,6);


	return 0;
}