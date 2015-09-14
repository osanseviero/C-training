#include <iostream>
#include <vector>

int main(){	
	std::vector<int> array;
	int i = 999;
	array.reserve(10);    
	array.push_back(i);

	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;
	

	return 0;
}