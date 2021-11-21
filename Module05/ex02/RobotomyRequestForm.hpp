#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <ctime>

class RobotomyRequestForm : public Form {
private:
	const std::string target_;
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
	void exec(void) const;
};

#endif