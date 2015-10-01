#include <iostream> 
#include <stack>
using namespace std;


string Reverse(string c){
	stack<char> S;
	string solution = "";
	int n = c.size();
	for(int i=0; i<n;i++){
		S.push(c[i]);
	}
	for(int i=0; i<n;i++){
		solution += S.top();
		S.pop();
	}
	return solution;

}


int main(){
	string c;
	cout << "Enter a string" << endl;
	cin >> c;
	cout << "Output = " << Reverse(c) << endl;

	return 0;
}