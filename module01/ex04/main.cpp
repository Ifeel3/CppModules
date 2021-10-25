#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::ifstream file;
	std::ofstream filerep;
	std::string word1;
	std::string word2;

	if (argc != 4)
	{
		std::cout << "Error: invalid arguments";
		return (1);
	}
	word1 = argv[2];
	word2 = argv[3];
	file.open(argv[1]);
	std::string name = std::strcat(argv[1], ".replace");
	filerep.open(name, std::fstream::trunc);
	if (!file.is_open()) {
		std::cout << "Error: no input file" << std::endl;
		return (1);
	}
	std::string test;
	for (file >> test; !file.eof(); file >> test)
	{
		if (test == word1)
			filerep << word2 << " ";
		else
			filerep << test << " ";
	}
	return (0);
}