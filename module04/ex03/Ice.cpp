#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
}

Ice::Ice(const Ice &copy) : AMateria(copy.type_) {
}

Ice &Ice::operator=(const Ice &copy) {
    type_ = copy.type_;
    return *this;
}

AMateria *Ice::clone(void) const {
    return new Ice;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
