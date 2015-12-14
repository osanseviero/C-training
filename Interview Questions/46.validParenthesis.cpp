#include <iostream>
#include <string>
#include <stack>
using namespace std;

/* 
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.


*/

bool isValid(string s) {
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if(st.empty()){
                    return false;
                }
                else if(st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i]==']'){
                if(st.empty()){
                    return false;
                }
                else if(st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i]=='}'){
                if(st.empty()){
                    return false;
                }
                else if(st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    return st.empty();
}

int main(){
    cout << isValid("()[]{}") << endl;
    cout << isValid("([)]" ) << endl;

    return 0;
}