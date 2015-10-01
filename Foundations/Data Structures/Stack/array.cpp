#include <iostream> 
using namespace std;
#define MAX_SIZE 3


class StackArray {
	public:
		int A[MAX_SIZE];
		int top;
		StackArray(){
			top = -1;
		}
		void push(int x){
			if(top == MAX_SIZE-1){
				cout << "Stack overflow" << endl;
				return;
			}
			top += 1;
			A[top] = x;
		}
		void pop(){
			if(top == -1){
				cout << "Stack empty" << endl;
				return;
			}
			top -= 1;
		}

		int Top(){
			return A[top];
		}

		int isEmpty(){
			if(top==-1){
				return 0;
			}
			return 1;

		}

		void print(){
			for(int i=0; i<=top;i++){
				cout << A[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	StackArray test;
	test.pop();
	test.print();
	test.push(5);
	test.push(8);
	test.print();
	test.pop();
	test.print();
	test.push(6);
	test.push(6);
	test.push(6);
	test.push(6);
	test.pop();
	test.print();

	return 0;
}