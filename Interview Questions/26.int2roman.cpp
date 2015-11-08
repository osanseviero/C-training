#include <iostream>
#include <string>
using namespace std;

/* Create your own atoi: string to integer
*/

/* Questions
	* Can the number be bigger than 2*10^31? No (we're safe with integer and don't need to handle edge cases)
	* Can it have a sign? Yes (we need to handle negative numbers)
*/



string toRoman(int num){
	// 1000, 2000, 3000
        string M[] = {"", "M", "MM", "MMM"};
        // 100, 200, 300, .. 900
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        // 10, 20, ... 90
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        // 1, 2, ... 9
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        return M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];
}


int main(){
	std::cout << toRoman(999) << std::endl;
	std::cout << toRoman(2341) << std::endl;
	std::cout << toRoman(59) << std::endl;
}