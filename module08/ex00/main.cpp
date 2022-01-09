#include "easyfind.hpp"
#include <vector>

int main(void) {
	std::vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(10);
	numbers.push_back(25);
	std::cout << "Element: ";
	try {
		std::cout << *easyfind(numbers, 10) << std::endl;
	}
	catch (const char *e) {
		std::cout << e << std::endl;
	}
	std::cout << "Element: ";
	try {
		std::cout << *easyfind(numbers, 23) << std::endl;
	}
	catch (const char *e) {
		std::cout << e << std::endl;
	}
}