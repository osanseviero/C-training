#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


vector<vector<int> > generate(int n) {
    vector<vector<int> > answer;
    if(n <= 0){
        return answer;
    }

    int elem;
    for(int i = 0; i<=n;i++){
        vector<int> row;
        for(int j=0; j<i; j++){
            if((j==0) || (j==i-1)){
                row.push_back(1);
            }
            else{
                elem = answer[i-1][j-1] + answer[i-1][j];
                row.push_back(elem);
            }
        }
        answer.push_back(row);
    }
   //answer.erase( answer.begin() );
   return answer;
}


int main(){ 
	vector<vector<int> > problem;
    int n = 5;
	problem = generate(n);
    for(int i = 0; i < n+1; i++){
        for(int j=0; j < i;j++){
            cout << problem[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}


