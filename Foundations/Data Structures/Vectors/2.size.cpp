#include <iostream>
#include <vector>

int main(){	
	size_t size;
	std::cin >> size;
	std::vector<int> array(size);	// Makes array of 10 integers initialized in 0

	for(int i=0; i<size; i++){
		array[i] = i;
	}

	for(int i=0; i<size;i++){
		std::cout << array[i] << std::endl;
	}
	

	return 0;
}