#include <iostream>
#include <string>

using namespace std;

// Replace whitespace with "%20"

/* Questions
	* The space does not matter
*/

/* Description
	* Go from end and reallocate memory: O(n^2) but memory optimum
	* New string: O(n) but memory heavy
*/



/* Takes O(n) */
string replaceSpaces(string s1){
	string result = " ";
	for(int i=0; i<s1.length(); i++){
		if(s1[i] != ' '){
			result += s1[i];
		}
		else{
			result += "%20";
		}
	}
	cout << result << endl;
	return result;
}

/* C style string  */
char * replace(char *s)
{
    int len = strlen(s);
    char* t = new char[3*len];
    int k=0;

    for(int i=0;i<len;i++){
        if(s[i]!=' '){
        	t[k] = s[i];
        	k++;
        }
        else{
            t[k]='%';
            t[k+1]='2';
            t[k+2] = '0';
            k=k+3;
        }
    }
    t[k]='\0';
    return t;
}



int main(){
	string s1, s2;
	getline(cin, s1);
	cout << s1;
	s2 = replaceSpaces(s1);
	cout << s2 << endl;

	char str[10] = "Hello a ";
	cout << replace(str) << endl;

}