/*
   Gilberto Echeverria

   Sample program to use the linked list library
*/

#include <iostream>
#include "LinkedList.h"

int main(void)
{
    LinkedList<int> test_list;
    Node<int> * item;
    int i;

    item = new Node<int>; // This item will be deleted with the rest of the list
    item->setData(123);

    std::cout << "Size of node: " << sizeof (Node<int>) << std::endl;
    std::cout << "Initial length: " << test_list.getLength() << std::endl;

    // Insert at the end
    test_list.insertTail(item);
    test_list.insertTail(444);
    test_list.insertTail(666);

    // Insert at the beginning
    test_list.insertHead(999);
    test_list.insertHead(5353);

    std::cout << "New length: " << test_list.getLength() << std::endl;
    std::cout << "This is the list now: " << std::endl;
    test_list.printList();

    item = new Node<int>(444);
    std::cout << "Position of 444: " << test_list.getPositionOf(item) << std::endl;
    delete item;

    std::cout << "Search for items: " << std::endl;
    for (int i=1; i<test_list.getLength(); i+=2)
    {
        std::cout << "Item at " << i+1 << " = " << test_list.getItemAt(i)->getData() << std::endl;
    }

    // Delete some items
    item = test_list.removeTail();
    std::cout << "Previous tail: " << item->getData() << std::endl;
    delete item;        // This will no longer be freed by the list destructor
    item = test_list.removeHead();
    std::cout << "Previous head: " << item->getData() << std::endl;
    delete item;        // This will no longer be freed by the list destructor
    item = test_list.removeItemAt(1);
    std::cout << "Previous item at 1: " << item->getData() << std::endl;
    delete item;        // This will no longer be freed by the list destructor
    
    std::cout << "New length: " << test_list.getLength() << std::endl;
    std::cout << "This is the list now: " << std::endl;
    test_list.printList();


    return 0;
}
