#include "Zombie.class.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	return;
}

Zombie::~Zombie() {
	std::cout << "Zombie with Name: " << this->getName() << " has destroyed" << std::endl;
	return;
}

std::string Zombie::getName() const {
	return (this->_name);
}

void Zombie::announce() const {
	std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

