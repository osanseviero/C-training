#include <iostream>

class Node{
	public:
		int data;
		Node * next;
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

			// If list is not empty
			if(this->head != nullptr){
				temp->next = this->head;
			}
			this->head = temp;
			size++;
		}

		/* Insert node at position*/
		void insertAt(int x, int pos){
			// Create node
			Node* insert = new Node();
			insert->data = x;

			// If insert at head
			if(pos==1){
				insert->next = this->head;	
				this->head = insert;
				return;
			}
			if(pos>size){
				std::cout << "Invalid position" << std::endl;
				return;
			}
			

			Node* temp = this->head;
			for(int i = 0; i < pos-2; i++){
				temp = temp->next;
			}

			insert->next = temp->next;
			temp->next = insert;
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

	printf("How many elements to insert at nth position\n");
	std::cin >> n;
	for(int i = 0; i <n; i++){
		printf("Enter the data\n");
		std::cin >> x;
		printf("Enter the position\n");
		std::cin >> pos;

		a.insertAt(x,pos);	
	}
	a.print();


	return 0;
}
