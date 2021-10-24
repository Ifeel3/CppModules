#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name) {}

HumanB::~HumanB() {}

const std::string& HumanB::getName() const {
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

const std::string& HumanB::getWeaponType() const {
	return (_weapon->getType());
}

void HumanB::attack() const {
	std::cout << this->getName() << " attacks with his " << this->getWeaponType() << std::endl;
}