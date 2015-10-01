#include <iostream> 
#include <stack>

std::stack<int>s;
std::stack<int>minS;
 
class MinStack
{
    public:
       
        MinStack();
        void pop();
        int top();
        void push(int x);
        int getMin();

};

MinStack::MinStack() {
    std::stack<int> s;
std::stack<int> minS;
}

void MinStack::push(int x) {
    if(s.empty()){
        s.push(x);
        minS.push(x);
    }
    else{
        s.push(x);
        int y = minS.top();
        if(x<=y)
            minS.push(x);
    }
}

void MinStack::pop() {
    if(s.empty()){
        return;
    }
    int x = s.top(); s.pop();
    int y = minS.top();

    if(y == x)
        minS.pop();
}

int MinStack::top() {
    if(s.empty()){
        return -1;
    }
    return s.top();
}


int MinStack::getMin() {
    if(s.empty()){
        return -1;
    }
    return minS.top();
}


int main(){
    MinStack s;
    s.push(19);
    s.push(10);
    s.push(9);
    std::cout<<s.getMin()<<std::endl;
    s.push(8);
    std::cout<<s.getMin();
    s.push(7);
    std::cout<<s.getMin();
     s.push(6);
    std::cout<<s.getMin();
    s.pop();
    std::cout<<s.getMin();
     s.pop();
    std::cout<<s.getMin();
     s.pop();
    std::cout<<s.getMin();
     s.pop();
    std::cout<<s.getMin();
     s.pop();
    std::cout<<s.getMin();

    return 0;
}