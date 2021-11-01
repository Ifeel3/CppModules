#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name, int hitpoints, int energyPoints, int attackDamage) : name(name), hitpoints(hitpoints), energyPoints(energyPoints), attackDamage(attackDamage) {
	std::cout << this->name << ": Aaaaand... OPEN!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energyPoints > 0) {
		std::cout << this->name << ": Oh, he's big... REALLY big! (attack \'" << target << "\' with " << this->attackDamage << " points of damage)" << std::endl;
		this->energyPoints--;
	} else {
		std::cout << this->name << ": Bullets are dumb." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->name << ": Extra ouch! (taking " << amount << " points of damage)" << std::endl;
	if ((int)amount >= this->hitpoints)
		std::cout << this->name << " has died" << std::endl;
	this->hitpoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitpoints > 0) {
		std::cout << this->name << ": Healsies! (healed " << amount << " hitpoints)" << std::endl;
		this->hitpoints += (int)amount;
		this->energyPoints++;
	} else {
		std::cout << "Failed healing... He is dead..." << std::endl;
	}
}