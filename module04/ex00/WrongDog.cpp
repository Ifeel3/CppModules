#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal(){
	type = "WrongDog";
	std::cout << type << " has been created" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << type << " has been deleted" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy) {
	*this = copy;
}

WrongDog &WrongDog::operator=(const WrongDog &copy) {
	type = copy.type;
	return (*this);
}

void WrongDog::makeSound(void) const {
	std::cout << "<wrong Woof>" << std::endl;
}
