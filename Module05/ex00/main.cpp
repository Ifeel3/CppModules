#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *temp = new Bureaucrat("John", 1);
	temp->increaseGrade();
	delete temp;
	temp = new Bureaucrat("John", 150);
	temp->decreaseGrade();
	std::cout << *temp << std::endl;
	delete temp;
	return 0;
}
