#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

private:
	std::string name;
	unsigned int hitpoints;
	unsigned int energypoints;
	unsigned int attackdamage;

public:
	ClapTrap(std::string name, unsigned int hitpoints, unsigned int energypoints, unsigned int attackdamage);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap& copy);

	ClapTrap& operator=(const ClapTrap& copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif