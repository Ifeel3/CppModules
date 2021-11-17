#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
}

Cure::Cure(const Cure &copy) : AMateria(copy.type_) {
}

Cure &Cure::operator=(const Cure &copy) {
    type_ = copy.type_;
    return *this;
}

AMateria *Cure::clone(void) const {
    return new Cure;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
