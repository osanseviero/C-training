#include <iostream>

class Node {
	public:
		int data;
		Node * prev;
		Node * next;
};

class List{
	public:
		Node * head;

		// Insert at head
		void insertBeg(int x){
			Node * temp = new Node();
			temp->data = x;
			temp->prev = nullptr;

			// If list is not empty
			if(this->head != nullptr){
				this->head->prev = temp;
				temp->next = this->head;
			}
			else{
				temp->next = nullptr;
			}
			this->head = temp;

		}
		// Insert at tail
		void insertTail(int x){
			Node * temp = new Node();
			temp->data = x;
			
			// If list is empty
			if(this->head == nullptr){
				temp->prev = nullptr;
				temp->next = this->head;
				this->head = temp;
			}
			else{
				Node * trans = new Node();
				trans = this->head;
				// Go to end
				while(trans->next != nullptr){
					trans = trans->next;
				}
				trans->next = temp;
				temp->prev = trans;
			}

		}


		// Print forward
		void print(){
			Node * temp = new Node();
			temp = this->head;
			while(temp != nullptr){
				std::cout << temp->data << std::endl;
				temp = temp->next;
			}
		}

		// Print backward
		void backPrint(){
			Node * temp = new Node();
			temp = this->head;

			// Traverse to end
			while(temp->next != nullptr){
				temp = temp->next;
			}
			while(temp!= nullptr){
				std::cout << temp->data << std::endl;
				temp = temp->prev;
			}
		}
};


int main(){
	// Empty list
	List a;
	a.head = nullptr;

	printf("How many elements to insert at beginning?\n");
	int n, x, pos;
	std::cin >> n;
	for(int i = 0; i <n; i++){
		printf("Enter the data\n");
		std::cin >> x;
		a.insertBeg(x);	
	}

	printf("How many elements to insert at tail?\n");
	std::cin >> n;
	for(int i = 0; i <n; i++){
		printf("Enter the data\n");
		std::cin >> x;
		a.insertTail(x);	
	}

	std::cout << "Print" << std::endl;
	a.print();
	std::cout << "Print backwards" << std::endl;
	a.backPrint();
}
