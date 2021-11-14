#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap with name " << name_ << " has been destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	ClapTrap::name_ = name + "_clap_name";
	name_ = name;
	hitpoints_ = FragTrap::hitpoints_;
	energypoints_ = ScavTrap::energypoints_;
	attackdamage_ = FragTrap::attackdamage_;
	std::cout << "DiamondTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy) : ClapTrap(copy.name_ + "_clap_name"), ScavTrap(copy.name_), FragTrap(copy.name_) {
	*this = copy;
	std::cout << "DiamondTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy) {
	name_ = copy.name_;
	hitpoints_ = copy.hitpoints_;
	energypoints_ = copy.energypoints_;
	attackdamage_ = copy.attackdamage_;
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << name_ << ": I'am monster, my name " << name_ << " and my ClapTrap name " << ClapTrap::name_ << std::endl;
}
