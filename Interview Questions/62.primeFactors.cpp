#include <iostream>
#include <queue>
#include <climits>
using namespace std;

/*
     Design an algorithm to find the kth number such that the only prime factors are 3, 5, and 7.

*/

int removeMin(queue<int>* q){
    int min = INT_MAX;
    int val;
    for(int i=0; i<q->size(); i++){
        val = q->front(); q->pop();
        if(val<min){
            min = val;
        }
        q->push(val);
    }

    for(int i=0; i<q->size(); i++){
        val = q->front(); q->pop();
        if(val!=min){
            q->push(val);
        }
    }
    return min;

}

queue<int> addProducts(queue<int>q, int val){
    q.push(3*val);
    q.push(5*val);
    q.push(7*val);
    return q;
}

int getKthNumber(int k){
    if(k<0) return 0;
    int val = 1;
    queue<int> q;
    q = addProducts(q,1);
    
    for(int i=0; i<k; i++){
        val = removeMin(&q);
        q = addProducts(q,val);
    }

    return val;
}


int main(){
    cout << getKthNumber(4) << endl;
    return 0;
}