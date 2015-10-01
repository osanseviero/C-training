#include <iostream> 
#include <stack>
using namespace std;



bool arePair(char opening, char closing){
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}


int CheckBalanced(string c){
	int n = c.size();
	stack<char> S;

	for(int i=0; i<n; i++){
		if((c[i]=='(') || (c[i]=='{') || (c[i]=='[')){
			S.push(c[i]);
		}
		else if((c[i]==')') || (c[i]=='}') || (c[i]==']')){
			if(S.empty() || !arePair(S.top(), c[i])){
				return 0;
			}
			
			else{
				S.pop();
			}
		}
	}
	if(S.empty()){
		return 1;
	}
	return 0;

}


int main(){
	string c;
	cout << "Enter a string" << endl;
	cin >> c;
	cout << "Output = " << CheckBalanced(c) << endl;

	return 0;
}