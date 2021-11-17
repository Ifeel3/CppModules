#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type_(type) {
}

AMateria::AMateria(const AMateria &copy) : type_(copy.type_) {
}

AMateria &AMateria::operator=(const AMateria &copy) {
    type_ = copy.type_;
    return (*this);
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType(void) const {
    return (type_);
}

void AMateria::use(ICharacter &target) {
    std::cout << target.getName() << std::endl;
}
