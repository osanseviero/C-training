#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


int numRange(vector<int> A, int B, int C) {
	int total = 0;
	int sum;
	for(int i=0; i< A.size(); i++){
		sum = 0;
		while(sum<=C){
			sum += A[i];
			if(sum>=B){
				total += 1;
			}
		}
	}
}

int main(){ 
	vector<int> problem;
	problem.push_back(10);
	problem.push_back(5);
	problem.push_back(1);
	problem.push_back(0);
	problem.push_back(2);
    cout << countElement(problem,5) << endl;
    return 0;
}


