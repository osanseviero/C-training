#include <iostream>

class Node{
	public:
		int data;
		Node * next;
};

class List{
	public:
		Node*head;

};


int main(){
	List a;
	a.head = nullptr;

	Node * temp = new Node();
	temp->data = 2;
	temp->next = nullptr;
	a.head = temp;

	Node * temp2 = new Node();
	temp2->data = 4;
	temp2->next = nullptr;
	a.head->next = temp2;

	Node * temp3 = new Node();
	temp3 = a.head;
	while(temp3 != nullptr){
		std::cout << temp3->data << std::endl;
		temp3 = temp3->next;
	}

	return 0;
}
