#include "main.hpp"

int main() {
	Phonebook phonebook;
	std::system("clear");
	std::cout << "Welcome to \'Phonebook\'" << std::endl;
	std::string command;
	while (1) {
		std::cout << "Enter command: ";
		std::cin >> command;
		for (int i = 0; command[i]; i++) {
			if (command[i] >= 'a' && command[i] <= 'z')
				command[i] = (char)(command[i] - 32);
		}
		if (command == "EXIT") {
			std::system("clear");
			std::cout << "BYE!" << std::endl;
			break;
		} else if (command == "ADD") {
			std::system("clear");
			phonebook.addContact();
		} else if (command == "SEARCH") {
			std::system("clear");
			phonebook.printPhonebook();
		} else {
			std::system("clear");
			std::cout << "Not correct input!" << std::endl;
		}
	}
	return (0);
}