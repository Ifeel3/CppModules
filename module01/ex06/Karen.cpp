#include "Karen.hpp"

Karen::Karen() {
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	methods[0] = &Karen::debug;
	methods[1] = &Karen::info;
	methods[2] = &Karen::warning;
	methods[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
	<< std::endl << std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
	<< std::endl << std::endl;
}

void Karen::error() {
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}

void Karen::complain(std::string level) {
	for (int i = 0; level[i]; i++) {
		level[i] = (char)std::toupper(level[i]);
	}
	int n = -1;
	for (int i = 0; i < 4; i++) {
		if (level == this->levels[i]) {
			n = i;
			break;
		}
	}
	switch (n)
	{
		case 0:
			(this->*Karen::methods[0])();
		case 1:
			(this->*Karen::methods[1])();
		case 2:
			(this->*Karen::methods[2])();
		case 3:
			(this->*Karen::methods[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}