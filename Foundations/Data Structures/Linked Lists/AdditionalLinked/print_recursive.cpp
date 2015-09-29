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

		/* Print the list from top to bottom recursively */
		void printRecursive(Node * temp){
			if(temp == nullptr){
				return;
			}
			std::cout << "Data: " << temp->data << std::endl;
			printRecursive(temp->next);
		}

		/* Print the list from bottom to top recursively */
		void printReverse(Node * temp){
			if(temp == nullptr){
				return;
			}
			printReverse(temp->next);
			std::cout << "Data: " << temp->data << std::endl;
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
	std::cout << "Print recurisve" << std::endl;
	a.printRecursive(a.head);

	std::cout << "Print reverse recurisve" << std::endl;
	a.printReverse(a.head);


	return 0;
}
