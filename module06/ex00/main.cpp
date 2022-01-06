#include "Convert.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: Wrong number of arguments." << std::endl;
		return 1;
	}
	Convert number(argv[1]);
	number.printConvert();
}