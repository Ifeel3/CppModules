#include "Dog.hpp"

Dog::Dog() : Animal(){
	type = "Dog";
	std::cout << type << " has been created" << std::endl;
	std::cout << "Creating brain for " << type << std::endl;
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Deleting brain for " << type << std::endl;
	delete brain;
	std::cout << type << " has been deleted" << std::endl;
	type = "Animal";
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
