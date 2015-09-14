#include <iostream>
#include <vector>

int main(){	
	std::vector<char> array;
	char c = 0;
	size_t size = 0;

	while(c != 'x'){
		std::cin >> c;
		array.push_back(c);
		size++;
	}

	for(int i=0; i<size;i++){
		std::cout << array[i] << std::endl;
	}
	

	return 0;
}