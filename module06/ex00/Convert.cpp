#include "Convert.hpp"

Convert::Convert(std::string string) : string_(string) {}

Convert::Convert(const Convert &copy) : string_(copy.string_){}

Convert &Convert::operator=(const Convert &copy) {
	string_ = copy.string_;
	return *this;
}

bool Convert::check() const {
	std::string exc[6] = {"+inf", "-inf", "+inff", "-inff", "nan", "nanf"};
	for (int i = 0; i < 8; i++) {
		if (string_ == exc[i])
			return false;
	}
	return true;
}

void Convert::toChar() const {
	std::cout << "Char: ";
	try {
		if (!check()) {
			std::cout << "Impossible" << std::endl;
			return;
		}
		int i = std::stoi(string_);
		if (i >= 33 && i <= 126)
			std::cout << '\'' << static_cast<char>(i) << '\'';
		else if ((i < 33 && i >= 0) || i == 127)
			std::cout << "Non displayable";
		else
			std::cout << "Impossible";
		std::cout << std::endl;
	}
	catch (std::string &e) {
		std::cerr << e << std::endl;
	}
}

void Convert::toInt() const {
	std::cout << "Int: ";
	try {
		if (!check()) {
			std::cout << "Impossible" << std::endl;
			return;
		}
		int i = std::stoi(string_);
		std::cout << i << std::endl;
	}
	catch (std::string &e) {
		std::cerr << e << std::endl;
	}
}

void Convert::toFloat() const {
	std::cout << "Float: ";
	try {
		if (!check()) {
			std::cout << string_;
			if (string_ == "-inf" || string_ == "+inf" || string_ == "nan")
				std::cout << "f";
			std::cout << std::endl;
			return;
		}
		float number = std::stof(string_);
		std::cout << number << (number - static_cast<int>(number) ? "f" : ".0f") << std::endl;
	}
	catch (std::string &e) {
		std::cerr << e << std::endl;
	}
}

void Convert::toDouble() const {
	std::cout << "Double: ";
	try {
		if (!check()) {
			if (string_ == "-inff" || string_ == "+inff" || string_ == "nanf") {
				std::string copy = string_.substr(0, string_.length() - 2);
				std::cout << copy << std::endl;
				return;
			}
			else
				std::cout << string_;
			std::cout << std::endl;
			return;
		}
		double number = std::stod(string_);
		std::cout << number << (number - static_cast<int>(number) ? "" : ".0") << std::endl;
	}
	catch (std::string &e) {
		std::cerr << e << std::endl;
	}
}

void Convert::printConvert() const {
	toChar();
	toInt();
	toFloat();
	toDouble();
}