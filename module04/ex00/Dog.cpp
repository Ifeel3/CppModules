#include "Dog.hpp"

Dog::Dog() : Animal(){
	type = "Dog";
	std::cout << type << " has been created" << std::endl;
}

Dog::~Dog() {
	std::cout << type << " has been deleted" << std::endl;
}

Dog::Dog(const Dog &copy) {
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
	type = copy.type;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "<Woof>" << std::endl;
}
