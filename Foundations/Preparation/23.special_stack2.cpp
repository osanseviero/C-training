#include <iostream> 
using namespace std;

class Node{
    public:
        Node * next;
        int data;
};

class Stack {
    public:
        Node * head;

        void push(int x){
            Node * temp = new Node();
            temp->data = x;
            if(this->head != nullptr){
                temp->next = this->head;
            }
            this->head = temp;
        }
        void pop(){
            // Empty list
            if(this->head == nullptr){
                return;
            }
            // One elmement in the list
            else if(this->head->next == nullptr){
                this->head = nullptr;
                return;
            }

            this->head = this->head->next;
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
    StackList * test = new StackList();
    test->pop();
    test->print();
    test->push(5);
    test->push(8);
    test->print();
    test->pop();
    test->print();
    test->push(6);
    test->push(6);
    test->push(6);
    test->push(6);
    test->pop();
    test->print();

    return 0;
}