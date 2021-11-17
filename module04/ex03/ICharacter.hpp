#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"
# define MAX_M 4
class AMateria;

class ICharacter {
public:
    virtual ~ICharacter() {};
    virtual std::string const &getName(void) const = 0;
    virtual void equip(AMateria *) = 0;
    virtual void unequip(int num) = 0;
    virtual void use(int num, ICharacter &target) = 0;
};

#endif
