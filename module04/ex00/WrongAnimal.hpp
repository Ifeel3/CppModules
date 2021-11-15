#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);

	WrongAnimal& operator=(const WrongAnimal& copy);
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif