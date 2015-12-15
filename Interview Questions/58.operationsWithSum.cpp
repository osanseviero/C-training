#include <iostream>
using namespace std;

/*
    Write methods to implement the multiply, subtract, and divide operations for
    integers. Use only the add operator
*/


int negate1(int n){
    int neg = 0;
    int d = n<0? 1 : -1;
    while(n!=0){
        neg += d;
        n+=d;
    }
    return neg;
}

int substract(int n, int m){
    return n + negate1(m);
}

int abs(int n){
    if(n<0){
        return negate1(n);
    }
    return n;
}

int multiply(int n, int m){
    int sum = 0;
    for(int i=0; i< abs(m); i++){
        sum+=n;
    }
    if(m<0){
        sum = negate1(sum);
    }
    return sum;
}


int divide(int n, int m){

    int absn = abs(n);
    int absm = abs(m);

    int product = 0;
    int x = 0;
    
    while(product+absm <= absn){
        product += absm;
        x++;
    }
    if((n<0 && m<0) || (n>0 && m>0)){
        return x;
    }
    return negate1(x);

}



int main(){
    cout << multiply(-3,8) << endl;
    cout << divide(9,-3) << endl;


    return 0;
}