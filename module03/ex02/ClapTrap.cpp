#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap with name " << name_ << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name_(name), hitpoints_(10), energypoints_(10), attackdamage_(0){
	std::cout << "ClapTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy) {
	*this = copy;
	std::cout << "ClapTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) {
	name_ = copy.name_;
	hitpoints_ = copy.hitpoints_;
	energypoints_ = copy.energypoints_;
	attackdamage_ = copy.attackdamage_;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << name_ << " take " << amount << " damage" << std::endl;
	if (amount < hitpoints_)
		hitpoints_ -= amount;
	else {
		std::cout << name_ << " died" << std::endl;
		hitpoints_ = 0;
	}
}

void ClapTrap::attack(const std::string &target) const {
	std::cout << name_ << " attack " << target << " and deals "
	<< attackdamage_ << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitpoints_ > 0) {
		std::cout << name_ << " repaired by " << amount << " point(s)" << std::endl;
		hitpoints_ += amount;
	}
	else
		std::cout << name_ << " repair failed... his died" << std::endl;
}