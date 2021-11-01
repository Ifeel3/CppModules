#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

private:
	std::string name;
	int hitpoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap(const std::string& name, int hitpoints, int energyPoints, int attackDamage);
	~ClapTrap(void);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif