#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>

class Zombie {

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void announce(void) const;
	std::string getName(void) const;
	void setName(std::string name);

private:
	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif