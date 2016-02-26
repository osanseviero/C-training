#include <stdio.h>
 
#define SIZE 7490
#define M 5
 
static int a[SIZE];
 
int main()
{
    int i, j;
 
    // 1 a 5
    for(j = 0; j < SIZE; j++){
        a[j] = 1;
    }


    // 5 en adelante
    for(j = 5; j < SIZE; j++){
        a[j] += a[j - 5];
    }
        
    // 10 en adelante
    for(j = 10; j < SIZE; j++){
        a[j] += a[j - 10];
    }

    // 25 en adelante
    for(j = 25; j < SIZE; j++){
        a[j] += a[j - 25];
    }
 
    for(j = 50; j < SIZE; j++){
        a[j] += a[j - 50];
    }
 
    int n;
    while(scanf("%d", &n) == 1)
        printf("%d\n", a[n]);
 
    return 0;
}