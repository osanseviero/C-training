#include <iostream>
#include "Stack.h"

int main(void)
{
    Stack<int> test_stack;
    Node<int> * item;
    int i;

    item = new Node<int>; // This item will be deleted with the rest of the list
    item->setData(123);

    std::cout << "Size of node: " << sizeof (Node<int>) << std::endl;

    // Push
    test_stack.push(item);  
    test_stack.push(456);  
    test_stack.push(789);  

    std::cout << "This is the list: " << std::endl;
    test_stack.printStack();

    test_stack.pop();

    std::cout << "After pop: " << std::endl;
    test_stack.printStack();

    test_stack.clear();

    return 0;
}
