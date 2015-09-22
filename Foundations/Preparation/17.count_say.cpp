#include <iostream>
#include <string>

using namespace std;

string cas(string str){
        string str1;
        char ch=str[0];
        int chn=1;
        for(int i = 1; i<=str.size();i++){
            if (str[i]==ch){chn++;}
            else {
                char chr = chn+'0';
                str1 = str1+ chr;
                str1 = str1+ch;
                ch = str[i];
                chn=1;
            }
        }
        return str1;
    }

string count_say(int n){
    if (n==1) {return "1";}
        string str1 = "1";
        string strn;
        for (int i=1; i<n;i++){
            strn = cas(str1);
            str1 = strn;
        }
        return strn;
}


int main(){ 
	int n1;
    cout << "Enter a number: ";
    cin >> n1;
    cout << count_say(n1) << endl;
    return 0;
}


