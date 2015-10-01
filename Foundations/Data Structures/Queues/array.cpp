#include <iostream> 
using namespace std;
#define MAX_SIZE 10


class QueueArray {
	public:
		int A[MAX_SIZE];
		int top;
		int rear;
		int front;

		QueueArray(){
			front = -1;
			rear = -1;
		}
		
		void enqueue(int x){
			if(isFull()){
				return;
			}
			if(isEmpty()){
				front = 0;
				rear = 0;

			}
			else{
				rear++;
			}
			
			A[rear] = x;

		}

		void deQueue(){
			if(isEmpty()){
				cout << "There are no elements!" << endl;
			}
			if(front == rear){
				front = -1;
				rear = -1;
			}
			else{
				front++;
			}
			
		}


		bool isEmpty(){
			if(front==-1 && rear==-1){
				return true;
			}
			return false;
		}

		bool isFull(){
			if(rear==MAX_SIZE-1){
				cout << "Queue is full" << endl;
				return true; 
			}
			return false;
		}

		void print(){
			for(int i=front; i<=rear;i++){
				cout << A[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	QueueArray test;
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