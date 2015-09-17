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
    main.push_back(row);

    for(int i = 1; i < ((2*n -1)/2)+1; i++){    
        for(int j=start+1; j < end;j++){
            row[j] -= 1;
        }
        main.push_back(row);
        end--;
        start++;         
    }

    for(int i = ((2*n -1)/2)+1; i < 2*n -1; i++){      
        for(int j=start; j < end+1;j++){
            if(start<0){
                break;
            }
            row[j] += 1;
        }
        start--;
        end++;
        main.push_back(row);              
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


