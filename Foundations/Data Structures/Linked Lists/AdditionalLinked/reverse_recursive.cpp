#include <iostream>

class Node{
	public:
		int data;
		Node * next;
		~Node(){
			std::cout << "Destroying: " << data << std::endl;
		}
};

class List{
	public:
		Node*head;
		int size;

		/* Insert node at beginning*/
		void insertBeg(int x){
			// Create node
			Node* temp = new Node();
			temp->data = x;

			// If list is empty
			if(this->head != nullptr){
				temp->next = this->head;
			}
			this->head = temp;
			size++;
		}

		/* Print the list from top to bottom */
		void print(){
			Node* temp = this->head;
			std::cout << "List is: " << std::endl;
			while(temp != nullptr){
				std::cout << "Data: " << temp->data << std::endl;
				temp = temp->next;
			}
		}

		/* Reverse linked list recursively*/
		void reverseRecursive(Node * temp){
			// Exit condition for recursion
			if(temp->next == nullptr){
				this->head = temp;
				return;
			}
			reverseRecursive(temp->next);	// Gets to end
			Node* q = temp->next;
			q->next = temp;
			temp->next = nullptr;

		}
};


int main(){
	// Empty list
	List a;
	a.head = nullptr;
	a.size = 0;

	printf("How many elements to insert at beginning?\n");
	int n, x, pos;
	std::cin >> n;
	for(int i = 0; i <n; i++){
		printf("Enter the data\n");
		std::cin >> x;
		a.insertBeg(x);	
	}
	a.print();

	a.reverseRecursive(a.head);
	a.print();


	return 0;
}
