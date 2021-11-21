#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern *someIntern = new Intern();
	Bureaucrat someBureaucrat("John", 1);
	Form *form = someIntern->makeForm("Shrubbery request", "tree");
	someBureaucrat.signForm(form);
	someBureaucrat.executeForm(form);
	delete form;
	form = someIntern->makeForm("Robotomy request", "Bender");
	someBureaucrat.signForm(form);
	someBureaucrat.executeForm(form);
	delete form;
	form = someIntern->makeForm("Pardon request", "AwesomeMen");
	someBureaucrat.signForm(form);
	someBureaucrat.executeForm(form);
	delete form;
	form = NULL;
	form = someIntern->makeForm("some request", "Cheburek");
	someBureaucrat.signForm(form);
	someBureaucrat.executeForm(form);
	return 0;
}
