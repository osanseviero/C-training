#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    Give all permutations of a string
*/

vector<string> perms;

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void permutations(string s, int l, int r){
    if(l==r) perms.push_back(s);

    else{
        for(int i=l; i<=r; i++){
            swap(s[l],s[i]);
            permutations(s, l+1, r);
            swap(s[l],s[i]);
        }
    }
}


int main(){
    string s = "abc";
    permutations(s, 0, s.length()-1);
    for(int i=0; i<perms.size(); i++){
        cout << perms[i] << endl;
    }
    return 0;
}