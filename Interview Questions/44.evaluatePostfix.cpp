#include <iostream>
#include <stack>
#include <vector>
using namespace std;

/* 
 Evaluate the value of an arithmetic expression in Reverse Polish Notation.
    Valid operators are +, -, *, /. Each operand may be an integer or another expression.

Some examples:
 ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6


*/

int evaluatePolish(vector<string>& tokens ){
    // Stack that saves the numbers
    stack<int> operands;

    // Go over each element
    for(int i=0; i<tokens.size(); i++){
        char token = tokens[i][0];
        // If number is found, save to stack
        if((token >= '0' && token <= '9')||((token=='-')&&(tokens[i].length()>1))){
            operands.push(stoi(tokens[i]));
        }
    
        // If sign if found, pop two elements, compute, save
        else{
            int op1 = operands.top();operands.pop();
            int op2 = operands.top(); operands.pop();
            if(token == '+'){
                operands.push(op1+op2);
            }
            else if(token == '-')
                operands.push(op2-op1);
            else if(token == '*')
                operands.push(op2*op1);
            else if(token == '/')
                operands.push(op2/op1);
        }
    }
    return operands.top();
}



int main(){
    vector<string> t1;
    t1.push_back("-4");
    t1.push_back("4");
    t1.push_back("13");
    t1.push_back("5");
    t1.push_back("/");
    t1.push_back("+");
    std::cout << evaluatePolish(t1)<< std::endl;
    return 0;
}