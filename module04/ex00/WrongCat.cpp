#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	type = "WrongCat";
	std::cout << type << " has been created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << type << " has been deleted" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
	type = copy.type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "<wrong Meow>" << std::endl;
}
