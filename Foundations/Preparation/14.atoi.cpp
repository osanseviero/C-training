#include <iostream>
#include <string>
using namespace std;


/* http://www.geeksforgeeks.org/find-the-element-that-appears-once/ */
int myAtoi(char * str) {
    int res = 0;

    for(int i = 0; str[i] != '\0'; ++i){
        res = res*10 + str[i] - '0';
    }
    return res;
}

int myAtoi2(char * str) {
    int res = 0;
    int sign = 1;

    if(str[0] == '-'){
        sign = -1;  
    }

    for(int i = 1; str[i] != '\0'; ++i){
        res = res*10 + str[i] - '0';
    }
    return sign*res;
}

int myAtoi3(string str) {
    // Start typing your C/C++ solution below
        // DO NOT write int main() function
    if (!str){return 0;}
    int i=0;
    bool pos=true;
    int res=0;
    while (str[i]==' '){ i++;}
    if (str[i]=='+'){ pos=true;i++;}
    if (str[i]=='-'){ pos = false;i++;}
    if (!isdigit(str[i])){return 0;}
    while (isdigit(str[i])){
       if (pos && res>INT_MAX/10){return INT_MAX;}
       if (pos && res==INT_MAX/10 && int(str[i]-'0')>=7){return INT_MAX;}
       if (!pos && -res<INT_MIN/10){return INT_MIN;}
       if (!pos && -res==INT_MIN/10 && int(str[i]-'0')>=8){return INT_MIN;}
       res = res*10 + int(str[i]-'0');
       i++;
    }
         
    if (pos){return res;}
    else{return -res;}  
}

int main(){ 
    string a = "-21474836472";
    int val = myAtoi3(a);
    printf("%d\n", val);
    return 0;
}


