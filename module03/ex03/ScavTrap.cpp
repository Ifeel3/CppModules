#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap with name " << name_ << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	name_ = name;
	hitpoints_ = 100;
	energypoints_ = 50;
	attackdamage_ = 20;
	std::cout << "ScavTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy.name_) {
	*this = copy;
	std::cout << "ScavTrap with name " << name_ << " has been created("
	<< hitpoints_ << "hp, "
	<< energypoints_ << "ep, "
	<< attackdamage_ << "ad)" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
	name_ = copy.name_;
	hitpoints_ = copy.hitpoints_;
	energypoints_ = copy.energypoints_;
	attackdamage_ = copy.attackdamage_;
	return (*this);
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap with name " << name_ << " entered in Gate keeper mode" << std::endl;
}