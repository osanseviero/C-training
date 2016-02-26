#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>


std::string isTriangular(unsigned long long n){
    unsigned long long m = 8*n +1;
    unsigned long long temp = sqrt(m);
    if(temp * temp == m) return "YES";
    return "NO";
}

int main()
{
 
    unsigned long long n;
    while(scanf("%lld", &n) == 1){
        if(n==0) return 0;
        std::cout << isTriangular(n) << std::endl;

    }
}