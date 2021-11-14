#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "FragTrap with name " << name_ << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), name_(name), hitpoints_(100), energypoints_(100), attackdamage_(30){
	std::cout << "FragTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

FragTrap::FragTrap(FragTrap& copy) : ClapTrap(copy.name_) {
	*this = copy;
	std::cout << "FragTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
	name_ = copy.name_;
	hitpoints_ = copy.hitpoints_;
	energypoints_ = copy.energypoints_;
	attackdamage_ = copy.attackdamage_;
	return (*this);
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap with name " << name_ << " take " << amount << " damage" << std::endl;
	if (amount < hitpoints_)
		hitpoints_ -= amount;
	else {
		std::cout << "FragTrap with name " << name_ << " died" << std::endl;
		hitpoints_ = 0;
	}
}

void FragTrap::attack(const std::string &target) const {
	std::cout << "FragTrap with name "
	<< name_ << " attack " << target << " and deals "
	<< attackdamage_ << " damage" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (hitpoints_ > 0) {
		std::cout << "FragTrap with name " << name_ << " repaired by " << amount << " point(s)" << std::endl;
		hitpoints_ += amount;
	}
	else
		std::cout << "FragTrap with name " << name_ << " repair failed... his died" << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << name_ << ": Secret handshake!!!" << std::endl;
}
