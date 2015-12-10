#include <iostream>
#include <stack>
using namespace std;

class StackWithMin{
	public:
	stack<int> s;
	stack<int> minS;


	void push(int data){ I
		s.push(data);
		if(minS.empty()){
			minS.push(data);
		}
		else if(min() > data){
			minS.push(data);
		}	
	}
			
	void pop(){
		if(s.top() == minS.top()){
			minS.pop();
		}
		s.pop();
	}
			
	int min(){
		return minS.top();			
	}
};


int main(){
	StackWithMin s;
	s.push(5);
	std::cout << s.min() << std::endl;
	s.push(6);
	std::cout << s.min() << std::endl;
	s.push(3);
	std::cout << s.min() << std::endl;
	s.push(7);
	std::cout << s.min() << std::endl;
	s.pop();
	std::cout << s.min() << std::endl;
	s.pop();
	std::cout << s.min() << std::endl;


}