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

		/* Reverse linked list*/
		void reverse(){
			Node *next;
			Node *prev = nullptr;
			Node *current = this->head;
			while(current != nullptr){
				next = current->next;
				current->next = prev;
				prev = current;
				current = next;
			}
			this->head = prev;
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

	a.reverse();
	a.print();


	return 0;
}
