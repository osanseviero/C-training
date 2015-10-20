#include <iostream>
#include <vector>


/*
	Say you have an array for which the ith element is the price of a given stock on day i.

	If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), 
	design an algorithm to find the maximum profit.
*/

/* Questions
	* Can stocks have negative price? Nope
*/

/* Description
	* Option 1: Compare element to all next values, find temp max. Compare to biggest max, and save it. O(n^2)
	* Option 2: Efficient
		* Go from end to beginning
		* Keep track of biggest number you have found
		* Susbtract biggest minus current element, and just keep it if it is bigger than the previous max
*/


int maxProfit(const std::vector<int> &prices) {
	int max_profit = 0;
	int max_num = 0;

	for(int i=prices.size()-1; i>=0; i--){
		max_profit = std::max(max_profit, max_num-prices[i]);
		max_num = std::max(max_num, prices[i]);
	}
	return max_profit;
}

int main(){
	std::vector<int> example;
	example.push_back(50);
	example.push_back(2);
	example.push_back(10);
	example.push_back(0);
	example.push_back(3);
	example.push_back(30);
	example.push_back(10);
	example.push_back(20);
	std::cout << maxProfit(example) << std::endl;

	return 0;
}







