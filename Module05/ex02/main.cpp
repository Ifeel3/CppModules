#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Form *test;
	Bureaucrat *temp;
	temp = new Bureaucrat("John", 5);
	test = new ShrubberyCreationForm("Tree");
	temp->signForm(*test);
	temp->executeForm(*test);
	delete test;
	test = new RobotomyRequestForm("Bender");
	temp->signForm(*test);
	temp->executeForm(*test);
	delete test;
	test = new PresidentialPardonForm("Men");
	temp->signForm(*test);
	temp->executeForm(*test);
	delete test;
	delete temp;
	return 0;
}
