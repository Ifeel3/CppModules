#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error: invalid arguments" << std::endl;
		return (-1);
	}
	std::string word1 = argv[2];
	std::string word2 = argv[3];
	std::string name = argv[1];

	std::ifstream ifile(name);
	std::ofstream ofile(name + ".replace", std::fstream::trunc);

	if (!ifile.is_open() || !ofile.is_open()){
		std::cout << "Error: can't open file" << std::endl;
		return (-1);
	}

	std::string buffer;
	size_t pos;
	while (std::getline(ifile,buffer)) {
		while ((pos = buffer.find(word1)) < buffer.length()) {
			std::string tmp;
			tmp = buffer.substr(0, pos);
			tmp += word2;
			tmp += buffer.substr(pos + word1.length());
			buffer = tmp;
		}
		ofile << buffer << std::endl;
	}
	ifile.close();
	ofile.close();
	return (0);
}