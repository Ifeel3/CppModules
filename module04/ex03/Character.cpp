#include "Character.hpp"

Character::Character(std::string name) : name_(name) {
	for (int i = 0; i < MAX_M; i++)
		inv_[i] = NULL;
}

Character::Character(const Character &copy) : name_(copy.name_) {
    for (int i = 0; i < MAX_M; i++)
		inv_[i] = copy.inv_[i];
}

Character &Character::operator=(const Character &copy) {
	for (int i = 0; i < MAX_M; i++)
		inv_[i] = copy.inv_[i];
    return *this;
}

std::string const &Character::getName(void) const {
    return name_;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < MAX_M; i++) {
		if (inv_[i] == NULL) {
			inv_[i] = m;
			break;
		}
	}
}

void Character::unequip(int num) {
    if (num >= 0 && num < MAX_M)
		inv_[num] = NULL;
}

void Character::use(int num, ICharacter &target) {
    if (num >= 0 && num < MAX_M && inv_[num])
        inv_[num]->use(target);
}
