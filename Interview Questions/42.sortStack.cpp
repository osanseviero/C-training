#include <iostream>
#include <stack>
using namespace std;

/* 
Sort a stack in ascending order using two stacks

*/

void sortStack(stack<int> &s){
	stack<int> tmp;
    while(!s.empty())
    {
        int t = s.top();
        s.pop();
        while(!tmp.empty() && tmp.top() < t)
        {
            s.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    while(!tmp.empty())
    {
        s.push(tmp.top());
        tmp.pop();
    }
}




int main(){
	stack<int> s;
	s.push(8);
	s.push(7);
	s.push(4);
	s.push(10);
	s.push(12);
	sortStack(s);
	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
}