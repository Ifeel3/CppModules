#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap with name " << this->name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitpoints, unsigned int energypoints, unsigned int attackdamage) : name(name), hitpoints(hitpoints), energypoints(energypoints), attackdamage(attackdamage){
	std::cout << "ClapTrap with name " << this->name << " has been created(" << this->hitpoints << "hp, " << this->energypoints << "ep, " << this->attackdamage << "ad)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energypoints(10), attackdamage(0){
	std::cout << "ClapTrap with name " << this->name << " has been created(" << this->hitpoints << "hp, " << this->energypoints << "ep, " << this->attackdamage << "ad)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy) : name(copy.name + ".copy"), hitpoints(copy.hitpoints), energypoints(copy.energypoints), attackdamage(copy.attackdamage){
	std::cout << "ClapTrap copy of " << copy.name << " has been created with name " << this->name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) {
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energypoints = copy.energypoints;
	this->attackdamage = copy.attackdamage;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap with name " << this->name << " take " << amount << " damage" << std::endl;
	if (amount < this->hitpoints)
		this->hitpoints -= amount;
	else {
		std::cout << "ClapTrap with name " << this->name << " died" << std::endl;
		this->hitpoints = 0;
	}
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap with name " << this->name << " attack " << target << " and deals " << this->attackdamage << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitpoints > 0) {
		std::cout << "ClapTrap with name " << this->name << " repaired by " << amount << " point(s)" << std::endl;
		this->hitpoints += amount;
	}
	else
		std::cout << "ClapTrap with name " << this->name << " repair failed... his died" << std::endl;
}