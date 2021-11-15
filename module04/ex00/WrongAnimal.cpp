#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << type << " has been created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " has been deleted" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "<wrong ...>" << std::endl;
}
