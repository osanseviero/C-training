#include <iostream>
#include <vector>

int main(){	
	std::vector<int> array;
	array.reserve(3);
	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;

	array.push_back(999);
	array.resize(5);
	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;

	array.push_back(333);
	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;

	array.reserve(1);
	array.resize(3);
	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;

	array.resize(6,1);
	
	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;

	array.push_back(444);
	std::cout << array.capacity() << std::endl;
	std::cout << array.size() << std::endl;

	return 0;
}