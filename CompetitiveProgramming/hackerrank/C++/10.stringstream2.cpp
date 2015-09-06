#include <sstream>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> res;
    char *s= new char[str.size()+1];
    strcpy(s, str.c_str());

    char * pch;
    pch=strtok(s,",");
    while (pch!=NULL)
    {
     res.push_back(stoi(pch));
     pch=strtok(NULL, ",");
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
