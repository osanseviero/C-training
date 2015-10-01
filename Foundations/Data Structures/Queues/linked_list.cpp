#include <iostream> 
using namespace std;

class Node{
	public:
		Node * next;
		int data;
};

class QueueList {
	public:
		Node * head = nullptr;

		void enqueue(int x){
			Node * temp = new Node();
			temp->data = x;
			if(this->head != nullptr){
				temp->next = this->head;
			}
			this->head = temp;
		}
		void deQueue(){
			// Empty list
			if(this->head == nullptr){
				cout << "Queue empty" << endl;
				return;
			}
			// One elmement in the list
			else if(this->head->next == nullptr){
				this->head = nullptr;
				return;
			}

			Node * temp = new Node();
			temp = this->head;
			while(temp->next->next != nullptr){
				temp = temp->next;

			}
			temp->next = nullptr;

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
		
};

int main(){
	QueueList test;
	test.deQueue();
	test.enqueue(2);
	test.enqueue(3);
	test.enqueue(4);
	test.enqueue(5);
	test.enqueue(6);
	test.enqueue(7);
	test.enqueue(8);
	test.print();
	test.deQueue();
	test.deQueue();
	test.deQueue();
	test.deQueue();
	test.deQueue();
	test.print();
	test.enqueue(2);
	test.enqueue(8);
	test.print();

	return 0;
}