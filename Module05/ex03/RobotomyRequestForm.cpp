#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target_(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), target_(copy.target_) {
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	itSigned_ = copy.itSigned_;
	return (*this);
}

void RobotomyRequestForm::exec() const {
	srand(time(0));
	int number = 1 + rand() % 100;
	if (number < 50)
		std::cout << "*BRRRRRRRRRRRRRRRRR* " << target_ << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomize of " << target_ << " has been failed" << std::endl;
}

