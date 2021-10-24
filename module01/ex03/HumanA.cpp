#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

const std::string& HumanA::getName() const {
	return (this->_name);
}

const std::string& HumanA::getWeaponType() const {
	return (_weapon.getType());
}

void HumanA::attack() const {
	std::cout << this->getName() << " attacks with his " << this->getWeaponType() << std::endl;
}