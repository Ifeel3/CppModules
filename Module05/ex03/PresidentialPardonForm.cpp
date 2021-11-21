#include "PresidentialPardonForm.hpp"
 PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pardon", 25, 5), target_(target) {}

 PresidentialPardonForm::~PresidentialPardonForm() {}

 PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), target_(copy.target_) {
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	itSigned_ = copy.itSigned_;
	return (*this);
}

void PresidentialPardonForm::exec() const {
	std::cout << target_ << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
