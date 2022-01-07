#include "Array.hpp"

int main(void) {
	Array<int> numbers(10);
	for (unsigned int i = 0; i < numbers.size(); i++) {
		numbers[i] = static_cast<int>(i);
	}

	for (unsigned int i = 0; i < numbers.size(); i++) {
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	}

	std::cout << "-----" << std::endl;

	{
		Array<int> copy(numbers);
		for (unsigned int i = 0; i < copy.size(); i++) {
			std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
		}
	}

	try {
		numbers[-1] = 0;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}