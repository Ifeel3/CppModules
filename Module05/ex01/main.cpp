#include "Bureaucrat.hpp"

int main()
{
	Form test("test", 75, 75);
	Bureaucrat *temp = new Bureaucrat("John", 1);
	temp->increaseGrade();
	temp->signForm(test);
	test.beSigned(*temp);
	delete temp;
	temp = new Bureaucrat("John", 150);
	temp->decreaseGrade();
	temp->signForm(test);
	test.beSigned(*temp);
	std::cout << *temp << std::endl;
	return 0;
}
