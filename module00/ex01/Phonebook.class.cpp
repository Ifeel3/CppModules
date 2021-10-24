#include "main.hpp"
#include <iostream>

Phonebook::Phonebook(void) {
	this->_amountContacts = 0;
	return ;
}

Phonebook::~Phonebook() {
	return ;
}

void Phonebook::addContact() {
	std::string data;

	if (this->_amountContacts < 8)
		this->_amountContacts++;
	else
		this->_shiftPhonebook();
	std::cout << "Enter First Name: ";
	std::cin >> data;
	this->contacts[_amountContacts - 1].setFirstName(data);
	std::cout << "Enter Last Name: ";
	std::cin >> data;
	this->contacts[_amountContacts - 1].setLastName(data);
	std::cout << "Enter Nickname: ";
	std::cin >> data;
	this->contacts[_amountContacts - 1].setNickname(data);
	std::cout << "Enter Phone Number: ";
	std::cin >> data;
	this->contacts[_amountContacts - 1].setPhoneNumber(data);
	std::cout << "Enter Darkest Secret: ";
	std::cin >> data;
	this->contacts[_amountContacts - 1].setDarkestSecret(data);
	std::cout << "CONTACT ADDED" << std::endl;
}

void Phonebook::printPhonebook(void) const {
	if (this->_amountContacts < 1)
		std::cout << "No Contacts" << std::endl;
	else {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "|Index     |FirstName |LastName  |Nickname  |" << std::endl;
		std::cout << "_____________________________________________" << std::endl;
		for (int i = 0; i < this->_amountContacts; i++) {
			std::cout << "|         " << i + 1 << "|";
			if (this->contacts[i].getFirstName().length() <= 10) {
				for (int j = 0; j < 10 - (int)this->contacts[i].getFirstName().length(); j++) {
					std::cout << " ";
				}
				std::cout << this->contacts[i].getFirstName();
			}
			else {
				std::cout << this->contacts[i].getFirstName().substr(0, 9);
				std::cout << ".";
			}
			std::cout << "|";
			if (this->contacts[i].getLastName().length() <= 10) {
				for (int j = 0; j < 10 - (int)this->contacts[i].getLastName().length(); j++) {
					std::cout << " ";
				}
				std::cout << this->contacts[i].getLastName();
			}
			else {
				std::cout << this->contacts[i].getLastName().substr(0, 9);
				std::cout << ".";
			}
			std::cout << "|";
			if (this->contacts[i].getNickname().length() <= 10) {
				for (int j = 0; j < 10 - (int)this->contacts[i].getNickname().length(); j++) {
					std::cout << " ";
				}
				std::cout << this->contacts[i].getNickname();
			}
			else {
				std::cout << this->contacts[i].getNickname().substr(0, 9);
				std::cout << ".";
			}
			std::cout << "|" << std::endl;
		}
		std::cout << "_____________________________________________" << std::endl;
	}
}

void Phonebook::_shiftPhonebook(void) {
	for (int i = 0; i < 7; i++) {
		this->contacts[i] = this->contacts[i + 1];
	}
}