#include <iostream>
#include <string>
using namespace std;

int reverse(int A) {
    string result;
    if(A<0){
    	result += "-";
    	A= A*(-1);
    }
    if(A> 2147483647){
		return 0;
	}

    int rem;
    while(A>0){
    	rem = A%10;
    	result += to_string(rem);
    	A = A/10;
    	if(stol(result)>2147483647 || stol(result)<-2147483647 ){
			return 0;
		}
    }

    return stol(result);
}

int reverse2(int A) {
    int rev = 0, sign = 1, digit;
    if (x < 0) {
        sign = -1;
        x *= -1;
    }
    while (x > 0) {
        digit = x%10;
        // check for overflow here 
        if (rev > (INT_MAX / 10) || (rev == (INT_MAX / 10) && digit > (INT_MAX % 10))) {
            return 0;
        }
        rev = rev * 10 + digit;
        x/=10;
    }
    rev *= sign;        
        return rev;
    }
}

int main(){ 
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}


