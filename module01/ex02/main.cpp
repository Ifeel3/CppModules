#include <iostream>

int main(void) {
	std::string test = "HI THIS IS BRAIN";
	std::string* stringPTR = &test;
	std::string& stringREF = test;

	std::cout << &test << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl << stringREF <<std::endl;
}