#include <iostream>
#include "Queue.h"

int main(void)
{
    Queue<int> test_queue;
    Node<int> * item;
    int i;

    item = new Node<int>; // This item will be deleted with the rest of the list
    item->setData(123);

    std::cout << "Size of node: " << sizeof (Node<int>) << std::endl;

    // Enqueue
    test_queue.enqueue(item);  
    test_queue.enqueue(456);  
    test_queue.enqueue(789);  
    test_queue.enqueue(1000);  


    std::cout << "This is the list: " << std::endl;
    test_queue.printQueue();

    test_queue.dequeue();

    std::cout << "After dequeue: " << std::endl;
    test_queue.printQueue();

    test_queue.clear();

    return 0;
}
