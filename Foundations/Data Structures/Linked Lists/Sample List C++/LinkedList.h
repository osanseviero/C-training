#include <iostream>
#include "Node.h"

template <class T>
class LinkedList {
    private:
        Node<T> * head = nullptr;
        //Node<T> * tail = nullptr;
        int length = 0;
    public:
        // Constructors
        LinkedList () {}
        LinkedList (Node<T> * item) { head = item; }
        // Destructor
        ~LinkedList ();

        // Return the current length of the list
        int getLength() { return this->length; }
        // Get the position in the list of a given item
        int getPositionOf(Node<T> * item);
        // Get a reference to items in the list
        Node<T> * getHead() { return this->head; }
        Node<T> * getTail() { return getItemAt(this->length-1); }
        Node<T> * getItemAt(int position);
        // Add new items to the list
        void insertAtPosition(Node<T> * item);
        void insertAtPosition(const T & data);
        void insertHead(Node<T> * item);
        void insertHead(const T & data);
        void insertTail(Node<T> * item);
        void insertTail(const T & data);
        // Remove items from the list
        Node<T> * removeItemAt(int position);
        Node<T> * removeHead();
        Node<T> * removeTail();
        void removeNode(Node<T> item);
        // Print the contents of a list
        void printList();
        // Remove all nodes
        void clear();
};

// Destructor
template <class T>
LinkedList<T>::~LinkedList()
{
    // Simply call the function to delete all nodes in the list
    this->clear();
}

// Add items to the list
template <class T>
void LinkedList<T>::insertTail(Node<T> * item)
{
    // Make sure to stop the pointer in the list
    item->setNext(nullptr);

    // If the list is empty, this node is the new head
    if (this->head == nullptr)
    {
        this->head = item;
    }
    else
    {
        Node<T> * listItem = this->head;

        while (listItem->getNext() != nullptr)
        {
            listItem = listItem->getNext();
        }
        listItem->setNext(item);
    }
    // Increment the size of the list
    this->length++;
}


template <class T>
void LinkedList<T>::insertTail(const T & data)
{
    Node<T> * item = new Node<T>(data);
    this->insertTail(item);
}

template <class T>
void LinkedList<T>::insertHead(Node<T> * item)
{
    // Make this node point to the previous head
    item->setNext(this->head);
    // The node becomes the head of the list
    this->head = item;
    // Increment the size of the list
    this->length++;
}

template <class T>
void LinkedList<T>::insertHead(const T & data)
{
    Node<T> * item = new Node<T>(data);
    this->insertHead(item);
}

template <class T>
int LinkedList<T>::getPositionOf(Node<T> * item)
{
    int index = 0;
    Node<T> * test = this->head;

    while ( item != nullptr && item->getData() != test->getData() )
    {
        test = test->getNext();
        index++;
    }
    return index;
}

template <class T>
Node<T> * LinkedList<T>::getItemAt(int position)
{
    int index = 0;
    Node<T> * item = this->head;

    // Return nothing for invalid positions
    if (position > this->length || position < 0)
    {
        return nullptr;
    }
    // Loop to search for the item
    while (index < position && item != nullptr)
    {
        item = item->getNext();
        index++;
    }
    return item;
}

template <class T>
Node<T> * LinkedList<T>::removeHead()
{
    Node<T> * item = this->head;

    // Check that the list is not empty
    if (this->head != nullptr)
    {
        // Make the head point to the second item
        this->head = item->getNext();
        // Make the item point to nothing
        item->setNext(nullptr);
        // Reduce the length of the list
        this->length--;
    }

    return item;
}

template <class T>
Node<T> * LinkedList<T>::removeTail()
{
    Node<T> * tail = this->head;
    Node<T> * item;

    // If the list is empty, return nothing
    if (this->head == nullptr)
    {
        return nullptr;
    }

    // If there is only one item in the list, return that one
    if (tail->getNext() == nullptr)
    {
        // Prepare the item to return
        item = tail;
        // Mark the list as empty
        this->head = nullptr;
    }
    else
    {
        // Keep the previous item befor the tail
        item = tail->getNext();
        // Advance to the next to last item
        while (item->getNext() != nullptr)
        {
            tail = item;
            item = item->getNext();
        }
        // Make the new tail point to null
        tail->setNext(nullptr);
    }
    // Make the item point to nothing
    item->setNext(nullptr);
    // Reduce the length of the list
    this->length--;

    return item;
}


template <class T>
Node<T> * LinkedList<T>::removeItemAt(int position)
{
    int index = 0;
    Node<T> * previous = this->head;
    Node<T> * item;

    // Return nothing for invalid positions
    if (position > this->length || position < 0)
    {
        return nullptr;
    }
    // Special case when removing the first item
    if (position == 0)
    {
        // Prepare the item to return
        item = previous;
        // Update the head
        this->head = item->getNext();
    }
    else
    {
        // Keep the previous item before the tail
        item = previous->getNext();
        
        // Loop to search for the item
        while (index < position)
        {
            previous = item;
            item = item->getNext();
            index++;
        }
        // Update the connections in the list
        previous->setNext(item->getNext());
    }
    // Make the item point to nothing
    item->setNext(nullptr);
    // Reduce the length of the list
    this->length--;

    return item;
}


/*
Simple function to print the contents of the list
*/
template <class T>
void LinkedList<T>::printList()
{
    Node<T> * item;
    int counter = 1;

    item = this->head;
    while (item != nullptr)
    {
        std::cout << "Item " << counter++ << " = " << item->getData() << std::endl;
        item = item->getNext();
    }
}

/*
Empty the list, and free the memory for all nodes
*/
template <class T>
void LinkedList<T>::clear()
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
    this->length = 0;
    this->head = nullptr;
}
