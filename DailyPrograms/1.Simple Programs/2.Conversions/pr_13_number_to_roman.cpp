// Program # 13. Number to roman
// Converts number to binary

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

void pre(char num1, char num2, string *roman){
	*(roman) += num1;
	*(roman) += num2;
}

void post(int temp, char num, string *roman){
	while(temp>0){
		(*roman) += num;
		temp--;
	}
}



int main(){
	int number, temp;
	string roman = "";

	cout << "Enter a number" << endl;
	cin >> number;
	if(number <= 0)
		cout << "Invalid number" << endl;
	if(number>=1000){
		temp = number /1000;
		post(temp, 'M', &roman);
		number = number%1000;
	}
	if(number >= 500){
		if(number<900){
			temp = number/500;
			post(temp, 'D',&roman);
			number = number%500;
		}
		else{
			pre('C','M', &roman);
			number-=900;
		}	
	}
	if(number >= 100){
		if(number<400){
			temp = number/100;
			post(temp, 'C',&roman);
			number = number %100;
		}
		else{
			pre('C','D', &roman);
			number-= 400;
		}
	}
	if(number >= 50){
		if(number<90){
			temp = number/50;
			post(temp, 'L',&roman);
			number = number %50;
		}
		else{
			pre('X','C', &roman);
			number-= 90;
		}
	}
	if(number >= 10){
		if(number<40){
			temp = number/10;
			post(temp, 'X',&roman);
			number = number %10;
		}
		else{
			pre('X','L', &roman);
			number-= 40;
		}
	}
	if(number >= 5){
		if(number<9){
			temp = number/5;
			post(temp, 'V',&roman);
			number = number %5;
		}
		else{
			pre('I','X', &roman);
			number-= 9;
		}
	}
	else if(number >= 1){
		if(number<4){
			post(number, 'I', &roman);
		}
		else{
			pre('I','V',&roman);

		}
	}
	cout << roman << endl;
	return 0;
}
