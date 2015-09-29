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

		/* Delete node at position*/
		void deleteAt(int pos){
			Node *temp= new Node();
			temp = this->head;

			// If delete head
			if(pos==1){
				this->head = this->head->next;
				delete(temp);
				return;
			}
			if(pos>size){
				std::cout << "Invalid position" << std::endl;
				return;
			}
			
			// Traverse the linked list
			for(int i = 0; i < pos-2; i++){
				temp = temp->next;
			}
			Node *temp2 = temp->next;		// Element to be deleted
			temp->next = temp->next->next;	// Fix the link
			delete(temp2);					// Frees the link
			size++;
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

	printf("How many elements to delete\n");
	std::cin >> n;
	for(int i = 0; i <n; i++){
		printf("Enter the position\n");
		std::cin >> pos;
		a.deleteAt(pos);	
	}
	a.print();


	return 0;
}
