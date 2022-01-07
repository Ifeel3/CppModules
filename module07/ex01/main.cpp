#include "iter.hpp"
#include <iostream>

int main(void) {
	int array[10] = {0};

	for (int i = 0; i < 10; i++) {
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}
	std::cout << "-----" << std::endl;
	iter(array, 10, inc);
	for (int i = 0; i < 10; i++) {
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}
}