#include <iostream>
#include <climits>
using namespace std;

/*
    A magic index in an array A[0.. .n-1] is defined to be an index such that A[i] = i. 
    Given a sorted array of distinct integers, write a method to find a magic index, if 
    one exists, in array A. 

    FOLLOW UP What if the values are not distinct?  
*/

int magicNumber(int number[10], int start, int end){
    if(end<start) return -1;
    if(start<0) return -1;
    if(end>=10) return -1;

    int mid = (start+end)/2;
    int midValue = number[mid];

    if(midValue == mid) return mid;

    int leftIndex = min(mid-1, midValue);
    int left = magicNumber(number, start, leftIndex);
    if(left>=0){
        return left;
    }

    int rightIndex = min(mid+1, midValue);
    int right = magicNumber(number, rightIndex, end);
    return right;
}


int main(){
    int number[10] = {-10, -5, 2, 2, 2,3,4,7,9,12};
    cout << magicNumber(number,0,9) << endl;
    return 0;
}