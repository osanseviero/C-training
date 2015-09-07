
#include <iostream>
#include "Node.h"

template <class T>
class Queue {
    private:
        Node<T> * head = nullptr;
    public:
        // Constructors
        Queue () {}
        Queue (Node<T> * item) { head = item; }
        // Destructor
        ~Queue ();

        // We can receive the head
        Node<T> * peek() { return this->head; }

        // Add new items to the head
        void enqueue(Node<T> * item);
        void enqueue(const T & data);

        // Remove item from the head
        void dequeue();

        // Print the contents of the Queue
        void printQueue();

        // Remove all nodes
        void clear();
};


// Destructor
template <class T>
Queue<T>::~Queue()
{
    // Simply call the function to delete all nodes in the list
    this->clear();
}

template <class T>
void Queue<T>::enqueue(Node<T> *item){
    // Make it point to last head
    item->setNext(this->head);

    // Now this is the head
    this->head = item;
}

template <class T>
void Queue<T>::enqueue(const T & data){
    Node<T> * item = new Node<T>(data);
    this->enqueue(item);
}



template <class T>
void Queue<T>::dequeue(){
    Node<T> * tail = this->peek();
    Node<T> * item;

    // If only one element
    if(this->head == nullptr){
        exit(0);
    }
    // If already tail
    if(tail->getNext() == nullptr){
        item = tail;

        this->head = nullptr;
    }
    else{
        item = tail->getNext();
        while(item->getNext()!=nullptr){
            tail = item;
            item = item->getNext();
        }
        tail->setNext(nullptr);
    }



}


template <class T>
void Queue<T>::clear()
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
void Queue<T>::printQueue()
{
    Node<T> * item;
    item = this->head;
    int counter = 1;

    while(item != nullptr){
        std::cout << "Item " << counter++ << " = " << item->getData() << std::endl;
        item = item->getNext();
        
    }
}






