#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string decToBin(int A) {
    if(A==0)
        return "0";
    string answer = "";
    int rem = 0;
    string convert;
    while(A>0){
        rem = A%2;
        convert = std::to_string(rem);
        answer += convert;

        A = A/2;
    }
    return string(answer.rbegin(), answer.rend() );;
}

int main(){ 
    int n;
    cout << "Enter the max value: ";
    cin >> n;
    cout << decToBin(n) << endl;
    return 0;
}


