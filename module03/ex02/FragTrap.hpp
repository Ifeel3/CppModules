#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

private:
	std::string name_;
	unsigned int hitpoints_;
	unsigned int energypoints_;
	unsigned int attackdamage_;

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap& copy);

	FragTrap& operator=(const FragTrap& copy);
	void attack(const std::string& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFiveGuys(void);
};
#endif