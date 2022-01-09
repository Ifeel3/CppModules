#include "span.hpp"

int main(void) {
	Span array(10);
	std::vector<int> tmp;
	tmp.push_back(1);
	tmp.push_back(3);
	tmp.push_back(5);
	tmp.push_back(7);
	tmp.push_back(12);
	tmp.push_back(18);

	try {
		array.addNumber(15);
		std::cout << array << "-----" << std::endl;
		array.addNumber(10);
		std::cout << array << "-----" << std::endl;
		array.addNumber(tmp.begin(), tmp.end());
		std::cout << array << "-----" << std::endl;
		std::cout << array.longestSpan() << std::endl;
		std::cout << array.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}