#include "Cat.hpp"

Cat::Cat() : Animal(){
	type = "Cat";
	std::cout << type << " has been created" << std::endl;
	std::cout << "Creating brain for " << type << std::endl;
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Deleting brain for " << type << std::endl;
	delete brain;
	std::cout << type << " has been deleted" << std::endl;
	type = "Animal";
}

Cat::Cat(const Cat& copy) : Animal() {
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
	type = copy.type;
	brain = copy.brain;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "<Meow>" << std::endl;
}
