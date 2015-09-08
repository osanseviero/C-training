/*
 First line: Number of queries
 Second: Query

 Query types:
 1. receives a student name and the marks of the student
 2. Receives a string and erases the student marks
 3. Receives a string and prints the marks
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int elements;
    cin >> elements;

    map<string, int> sheet;
    int t, sum;
    string name;
    int mark;

    std::map<string, int>::iterator it;    // it is an iterator

    for(int i = 0; i < elements; i++){
        cin >> t;
        if(t==1){
            cin >> name >> mark;
            it = sheet.find(name);
            if(it == sheet.end()){
                sheet.insert(make_pair(name, mark));
            }
            else{
                it->second += mark;
            }
            
        }          
        else if(t==2){
            cin >> name;
            sheet.erase(name);
        }         
        else{
            cin >> name;
            sum = 0;
            it = sheet.find(name);
            if(it == sheet.end()){
                cout << 0 << endl;
            }
            else{
                cout << it->second << endl;
            }
        }
    }



    return 0;
}
