#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;
    cin >>a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf",a,b,c,d,e,f);   // Normal cout wont work here
    return 0;
}
