#include <iostream>

class Node {
	private:
		int data;	
		Node * next;
	public:
		Node();
		Node(int _data);

		int getData();
		Node * getNext();
		void setNext(Node *nextNode);
};

Node::Node(){
	next = nullptr;
}
Node::Node(int _data){
	data = _data;
	next = nullptr;
}
int Node::getData(){
	return this->data;
}
Node * Node::getNext(){
	return this->next;
}
void Node::setNext(Node *nextNode){
			this->next = nextNode;
		}


class LinkedList {		
	public:
		Node * head;
		void appendToTail(int d);
		void remove(int k);
		void print();

};

void LinkedList::appendToTail(int d){
		
	Node * n = new Node(d);
	n->setNext(nullptr);
	Node * temp = new Node();
	temp = this->head;

	
	while(temp->getNext() != nullptr){
		temp = temp->getNext();
	}
	temp->setNext(n);
	}

void LinkedList::print(){
	Node* item;
    item = this->head;
    while (item != nullptr)
    {
        std::cout << item->getData() << std::endl;
        item = item->getNext();
    }
}

/* Removes element based on position*/
void LinkedList::remove(int d){
	if(d==0){
		this->head = this->head->getNext();
		return;
	}
	Node* item;
    item = this->head;
    int count = 0;
	while(count + 1 < d){
		item = item->getNext();
		count++;
	}
	if(item->getNext()->getNext() == nullptr){
		item->setNext(nullptr);
		return;
	}

	item->setNext(item->getNext()->getNext());
}


int main(){
	Node * n = new Node(5);
	LinkedList list;
	list.head = n;
	list.print();

	list.appendToTail(10);
	list.appendToTail(20);
	list.appendToTail(30);
	list.appendToTail(40);	

	list.print();
	// Example of deleting first element
	list.remove(0);
	list.print();

	// Deleting at middle
	list.remove(2);
	list.print();

	// Deleting at end
	list.remove(2);
	list.print();
	return 0;
} 