#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to verify if the char is an operand
bool operand(char C){
	if(C >= '0' && C <= '9') return true;
	if(C >= 'a' && C <= 'z') return true;
	if(C >= 'A' && C <= 'Z') return true;
	return false;
}

// Function to verify is char is a normal binary operator
bool isOperator(char C){
	if(C == '+' || C == '-' || C == '*' || C == '/')
		return true;
	return false;
}

int getWeight(char op)
{
	int weight = -1; 
	switch(op)
	{
		case '+':
		case '-':
			weight = 1;
			break;
		case '*':
		case '/':
			weight = 2;
			break;
	}
	return weight;
}


int hasHigherPrec(char op1, char op2 ){
	int op1Weight = getWeight(op1);
	int op2Weight = getWeight(op2);

	if(op1Weight == op2Weight){
		return true;
	}

	return op1Weight > op2Weight ?  true: false;
}


string infixToPost(string expression){
	stack<int> S;
	string res = "";

	for(int i=0; i<expression.size();i++){

		// Delimiters
		if(expression[i] == ' ' || expression[i] == ',') continue; 

		else if(isOperator(expression[i])) {
			while(!S.empty() && hasHigherPrec(S.top(), expression[i])){
				res += S.top();
				S.pop();
			}
			S.push(expression[i]);
		}

		else if(operand(expression[i])){
			res += expression[i];
		}


	}

	while(!S.empty()){
		res += S.top();
		S.pop();
	}

	return res;
	
}












int main(){
	string expression;
	cout << "Enter infix notation separating numbers with spaces" << endl;
	getline(cin,expression);
	string result = infixToPost(expression);
	cout << "Output: " << result << endl;

	return 0;
}