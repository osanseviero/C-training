#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


/* http://www.geeksforgeeks.org/find-the-element-that-appears-once/ */
int kthSmallest(vector<int> A, int k) {
    int min;
    while(k>1){
        min = INT_MAX;
        for(int i=0; i<A.size(); i++){
            if(A[i] < min){
                min = A[i];
            }
        }
        for(int i=0; i<A.size(); i++){
            if(A[i] == min){
                A[i] = INT_MAX;
            }
        }
        k--;
    }
    for(int i=0; i<A.size(); i++){
            cout << A[i] << " and: ";
        }
    return min;
}

int main(){ 
	vector<int> problem;
	problem.push_back(2);
	problem.push_back(1);
	problem.push_back(4);
	problem.push_back(3);
	problem.push_back(2);
    cout << kthSmallest(problem,3) << endl;
    return 0;
}


