#include "whatever.hpp"
#include <iostream>

int main(void) {
	int a1 = 10;
	int b1 = 15;
	float a2 = 14.5f;
	float b2 = 13.5f;

	std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
	swap(a1, b1);
	std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
	std::cout << "result of min = " << min(a1, b1) << std::endl;
	std::cout << "result of max = " << max(a1, b1) << std::endl;

	std::cout << "-----" << std::endl;

	std::cout << "a2 = " << a2 << ", b2 = " << b2 << std::endl;
	swap(a2, b2);
	std::cout << "a2 = " << a2 << ", b2 = " << b2 << std::endl;
	std::cout << "result of min = " << min(a2, b2) << std::endl;
	std::cout << "result of max = " << max(a2, b2) << std::endl;
}