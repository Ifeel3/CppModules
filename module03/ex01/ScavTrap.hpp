#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	std::string name_;
	unsigned int hitpoints_;
	unsigned int energypoints_;
	unsigned int attackdamage_;

public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap& copy);

	ScavTrap& operator=(const ScavTrap& copy);
	void attack(const std::string& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate(void);
};
#endif