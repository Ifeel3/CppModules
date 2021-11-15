#include "Cat.hpp"

Cat::Cat() : Animal(){
	type = "Cat";
	std::cout << type << " has been created" << std::endl;
}

Cat::~Cat() {
	std::cout << type << " has been deleted" << std::endl;
}

Cat::Cat(const Cat &copy) {
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
	type = copy.type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "<Meow>" << std::endl;
}
