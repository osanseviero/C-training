#include <iostream>
#include <queue>
using namespace std;

/* 
An animal shelter holds only dogs and cats, and operates on a strictly "first in, first out" basis. 
People must adopt either the "oldest" (based on arrival time)
 of all animals at the shelter, or they can select whether they would prefer a dog or a cat 
 (and will receive the oldest animal of that type). 
 They cannot select which specific animal they would like. 
 Create the data structures to maintain this system and implement operations such as enqueue, 
 dequeueAny, dequeueDog and dequeueCat.You may use the built-in Queue data structure.


*/
class Animal{
    private: int order;
    public:
        string name;
        int type;
        Animal(string n){
            name = n;
        }
        void setType(int n){
            type = n;
        }
        int getType(){
            return type;
        }
        void setOrder(int n){
            order = n;
        }
        int getOrder(){
            return order;
        }
        bool isOlderThan(Animal a){
            return this->order >= a.getOrder();
        }
};

class Dog: public Animal{
    public:
    Dog(string n): Animal(n){
        name = n;
        this->setType(0);
    }
};

class Cat: public Animal{

    Cat(string n): Animal(n){
        name = n;
        this->setType(1);
    }
};

class AnimalQueue{
    private: int order = 0;
    public:
    queue<Animal>*dogs;
    queue<Animal>*cats;

    void enqueue(Animal a){
        a.setOrder(order);
        order++;

        if(a.getType() == 0)
            dogs->push(a);
        else
            cats->push(a);
    }

    Animal dequeueAny(){
        if(dogs->size() == 0){
            return dequeueCats();
        }
        if(cats->size() == 0){
            return dequeueDogs();
        }
        Animal d = dogs->front();
        Animal c = cats->front();

        if(d.isOlderThan(c)){
            return dequeueCats();
        }
        return dequeueDogs();
    }
    Animal dequeueDogs(){
        Animal d = dogs->front();
        dogs->pop();
        return d;
    }
    Animal dequeueCats(){
        Animal c = cats->front();
        cats->pop();
        return c;
    }
};



int main(){

    return 0;
}