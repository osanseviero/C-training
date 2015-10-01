#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to verify if the char is a digit between 0 and 9
bool isNumericDigit(char C){
	if(C >= '0' && C<='9') return true;
	return false;
}

// Function to verify is char is a normal binary operator
bool isOperator(char C){
	if(C == '+' || C == '-' || C == '*' || C == '/')
		return true;
	return false;
}

int performOperation(char operation, char op1, char op2 ){
	if(operation=='+') return op1 + op2;
	else if(operation=='-') return op1 - op2;
	else if(operation=='*') return op1 * op2;
	else if(operation=='/') return op1 / op2;

	else{
		cout << "Unexpected error" << endl;
		return -1;
	}
}


int evaluateExp(string expression){
	stack<int> S;

	for(int i=0; i<expression.length(); i++){
		// If character is delimiter, go to next
		if(expression[i] == ' ' || expression[i] == ',') continue;

		// If s[i] is operator, pop two elements, use the operation, push it
		if(isOperator(expression[i])){
			// Pop two elements
			int op2 = S.top(); S.pop();
			int op1 = S.top(); S.pop();

			// Perform operation
			int result = performOperation(expression[i], op1, op2);

			// Push result
			S.push(result);
		}


		// If s[i] is operand, push it. This works for multi digit numbers
		else if(isNumericDigit(expression[i])){

			// Extract the numeric operand from the string
			// Keep incrementing i as long as you are getting a numeric digit. 
			int operand = 0; 
			while(i<expression.length() && isNumericDigit(expression[i])) {
				// For a number with more than one digits, as we are scanning from left to right. 
				// Everytime , we get a digit towards right, we can multiply current total in operand by 10 
				// and add the new digit. 
				operand = (operand*10) + (expression[i] - '0'); 
				i++;
			}
			// Finally, you will come out of while loop with i set to a non-numeric character or end of string
			// decrement i because it will be incremented in increment section of loop once again. 
			// We do not want to skip the non-numeric character by incrementing i twice. 
			i--;

			// Push operand on stack. 
			S.push(operand);
		}
		
	}

	return S.top();
}


int main(){
	string expression;
	cout << "Enter postfix notation separating numbers with spaces" << endl;
	getline(cin,expression);
	int result = evaluateExp(expression);
	cout << "Output: " << result << endl;

	return 0;
}