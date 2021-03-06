#include <iostream> 
#include <stack> 
using namespace std;

class Node{
	public:
		Node * next;
		int data;
};

class StackList {
	public:
		Node * head;

		void push(int x){
			Node * temp = new Node();
			temp->data = x;
			if(this->head != nullptr){
				temp->next = this->head;
			}
			this->head = temp;
		}
		void pop(){
			// Empty list
			if(this->head == nullptr){
				cout << "Stack empty" << endl;
				return;
			}
			// One elmement in the list
			else if(this->head->next == nullptr){
				this->head = nullptr;
				return;
			}

			this->head = this->head->next;
		}

		void print(){
			Node * temp = new Node();
			temp = this->head;
			while(temp != nullptr){
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << endl;
		}

		void reverse(){
			stack<Node*>S;
			Node * temp = new Node();
			temp = this->head;
			while(temp != nullptr){
				S.push(temp);
				temp = temp->next;
			}
			temp = S.top();
			head = temp;
			S.pop();
			while(!S.empty()){
				temp->next = S.top();
				S.pop();
				temp = temp->next;
			}
			temp->next = nullptr;
		}
		
};

int main(){
	StackList * test = new StackList();
	test->pop();
	test->print();
	test->push(5);
	test->push(8);
	test->print();
	test->pop();
	test->print();
	test->push(6);
	test->push(6);
	test->push(6);
	test->push(6);
	test->pop();
	test->print();
	test->reverse();
	test->print();

	return 0;
}