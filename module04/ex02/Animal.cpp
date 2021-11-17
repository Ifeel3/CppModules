#include "Animal.hpp"

Animal::Animal() : type("Animal"){
	std::cout << type << " has been created" << std::endl;
}

Animal::~Animal() {
	std::cout << type << " has been deleted" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
	type = copy.type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (type);
}
