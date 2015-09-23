#include <iostream>

class Node{
	public:
		int data;
		Node * next;
};


int main(){
	Node * A;
	A = nullptr; // Empty list

	Node * temp = new Node();
	temp->data = 2;
	temp->next = nullptr;
	A = temp;

	temp = new Node();
	temp->data = 4;
	temp->next = nullptr;
	A->next = temp;

	temp = A;
	while(temp! = nullptr){
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}

	return 0;
}
