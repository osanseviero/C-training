// Program # 10. Days to years
// Express the days in years, weeks and days

#include <stdio.h>


int main(){
	int days, years = 0, weeks = 0;

	printf("Enter a number of days: ");
	scanf("%d",&days);

	years = days/365;
	days -= years*365;

	weeks = days/7;
	days -= weeks*7;

	printf("Years: %d. Weeks: %d. Days: %d\n", years, weeks, days);
	
}