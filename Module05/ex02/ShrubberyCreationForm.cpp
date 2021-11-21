#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), target_(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), target_(copy.target_) {
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	itSigned_ = copy.itSigned_;
	return (*this);
}

void ShrubberyCreationForm::exec() const {
	std::ofstream ofile(target_ + "_shrubbery", std::fstream::out | std::fstream::trunc);
	if (ofile.is_open())
	{
		ofile
				<< "       _-_" << std::endl
				<< "    /~~   ~~\\" << std::endl
				<< " /~~         ~~\\" << std::endl
				<< "{               }" << std::endl
				<< " \\  _-     -_  /" << std::endl
				<< "   ~  \\\\ //  ~" << std::endl
				<< "_- -   | | _- _" << std::endl
				<< "  _ -  | |   -_" << std::endl
				<< "      // \\\\";
		ofile.close();
	} else
		return ;
}

