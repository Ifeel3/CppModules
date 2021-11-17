#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string name_;
    AMateria *inv_[MAX_M];
public:
    Character(std::string name);
    Character(const Character &copy);
    Character &operator=(const Character &copy);
    std::string const &getName(void) const;
    void equip(AMateria *m);
    void unequip(int num);
    void use(int num, ICharacter &target);
};

#endif
