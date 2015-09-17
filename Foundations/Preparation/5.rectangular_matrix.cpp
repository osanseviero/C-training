#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > prettyPrint(int n) {
     vector<vector<int> > main;
     
     int start = 0;
     int end;
     std::vector<int> row;

    for(int j=0; j < 2*n-1;j++){
        row.push_back(n);
    }

    end = (2*n) - 2;   
    for(int i = 0; i < 2*n -1; i++){
        
        main.push_back(row);
        if(i <= n/2){        
            cout << i << " and start: " << start << " and end: " << end << endl;
            for(int j=start+1; j < end;j++){
                row[j] -= 1;
            }
            end--;
            start++;
            
        }
        for(int j=0; j < 2*n-1;j++){
            cout << row[j] << " ";
        } 
        cout << std::endl;
        if(i>n/2){
            start--;
            cout << i << " and start: " << start << " and end: " << end << endl;
            end++;
            for(int j=start; j < end;j++){
                if(start<0){
                    break;
                }
                row[j] += 1;

            }
             
            
        }
    }

     return main;
}


int main(){ 
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<vector<int> > result = prettyPrint(n);
    for(int i = 0; i < 2*n -1; i++){
        for(int j=0; j < 2*n-1;j++){
            cout << result[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}


