#include "Zombie.hpp"

Zombie::Zombie() {
	return;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie with name " << name << " was created" << std::endl;
	return;
}

std::string Zombie::getName(void) const {
	return (this->_name);
}

Zombie::~Zombie(void) {
	std::cout << "Zombie with name " << this->getName() << " was destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

void Zombie::announce() const {
	std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}