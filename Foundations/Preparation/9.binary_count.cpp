#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int FindFirst(vector<int> A, int size, int x){
	int start = 0;
    int end = size-1;
    int mid;
    int result = -1;
    while(start<=end){
    	mid = (start+end)/2;
    	if(A[mid]==x){
    		result = mid;
    		end = mid-1;
    	}	
    	else if(x<A[mid]){
    		end = mid-1;
    	}	
    	else{
    		start = mid+1;
    	}
    }
    return result;
}


int FindLast(vector<int> A, int size, int x){
	int start = 0;
    int end = size-1;
    int mid;
    int result = -1;
    while(start<=end){
    	mid = (start+end)/2;
    	if(A[mid]==x){
    		result = mid;
    		start = mid +1;
    	}	
    	else if(x<A[mid]){
    		end = mid-1;
    	}	
    	else{
    		start = mid+1;
    	}
    }
    return result;
}


int countElement(vector<int> A, int x) {
    int size = A.size();
    if(FindLast(A,size,x)==-1){
    	return 0;
    }
    return FindLast(A,size,x)-FindFirst(A,size,x)+1;
}

int main(){ 
	vector<int> problem;
	problem.push_back(1);
	problem.push_back(1);
	problem.push_back(2);
	problem.push_back(3);
	problem.push_back(3);
	problem.push_back(4);
    cout << countElement(problem,5) << endl;
    return 0;
}


