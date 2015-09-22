#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


int numRange(vector<int> A, int B, int C) {
	int total = 0;
	int sum, n;
	for(int i=0; i< A.size(); i++){
		sum = A[i];
		n = i;
		while(sum<=C && n < A.size()){		
			if(sum>=B){
				total += 1;
				cout << "Sum: " << sum<< " " << A[n] << endl;			
			}	
			n += 1;	
			sum += A[n];
		}
		
		
	}
	return total;
}

int main(){ 
	vector<int> problem;
	problem.push_back(10);
	problem.push_back(5);
	problem.push_back(1);
	problem.push_back(0);
	problem.push_back(2);
	problem.push_back(5);
    cout << numRange(problem,6,8) << endl;
    return 0;
}


