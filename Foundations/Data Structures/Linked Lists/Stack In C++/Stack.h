
#include <iostream>
#include "Node.h"

template <class T>
class Stack {
    private:
        Node<T> * head = nullptr;
    public:
        // Constructors
        Stack () {}
        Stack (Node<T> * item) { head = item; }
        // Destructor
        ~Stack ();

        // We can receive the head
        Node<T> * peek() { return this->head; }

        // Add new items to the head
        void push(Node<T> * item);
        void push(const T & data);

        // Remove item from the head
        void pop();

        // Print the contents of the stack
        void printStack();

        // Remove all nodes
        void clear();
};


// Destructor
template <class T>
Stack<T>::~Stack()
{
    // Simply call the function to delete all nodes in the list
    this->clear();
}

template <class T>
void Stack<T>::push(Node<T> *item){
    // Make it point to last head
    item->setNext(this->head);

    // Now this is the head
    this->head = item;
}

template <class T>
void Stack<T>::push(const T & data){
    Node<T> * item = new Node<T>(data);
    this->push(item);
}



template <class T>
void Stack<T>::pop(){
    Node<T> * item = this->peek();
    if(item != nullptr){
        // Point to second item
        this->head = item->getNext();

        // Make it point to nothing
        item->setNext(nullptr);
    }
}


template <class T>
void Stack<T>::clear()
{
    Node<T> * item;

    item = this->head;
    while (item != nullptr)
    {
        std::cout << "Deleting item " << item->getData() << std::endl;
        this->head = item->getNext();
        delete item;
        item = this->head;
    }
    this->head = nullptr;
}

template <class T>
void Stack<T>::printStack()
{
    Node<T> * item;
    item = this->head;
    int counter = 1;

    while(item != nullptr){
        std::cout << "Item " << counter++ << " = " << item->getData() << std::endl;
        item = item->getNext();
        
    }
}






