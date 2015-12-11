#include <iostream>
#include <stack>
using namespace std;

/* 
Implement the following operations of a queue using stacks.
push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.


*/




class Queue{
public:
    stack<int> S1;
    stack<int> S2;

    void push(int x){
        while(!S1.empty()){
            int temp = S1.top(); S1.pop();
            S2.push(temp);
        }
        S1.push(x);
        while(!S2.empty()){
            int temp = S2.top(); S2.pop();
            S1.push(temp);
        }
    }
    void pop(void){
        S1.pop();
    }

    int peek(void){
        return S1.top();
    }

    bool empty(void){
        return S1.empty();
    }

};

int main(){
    Queue test;

    cout << test.empty() << endl;
    test.push(5);
    test.push(10);
    test.push(15);
    cout << test.peek() << endl;
    cout << test.empty() << endl;
    test.pop(); 
    test.pop();
    cout << test.peek() << endl;
    test.pop();
    cout << test.empty() << endl;

    return 0;
}