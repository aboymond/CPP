
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public AForm {
private:
	std::string _target;
protected:
public:
    RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &cpy);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    ~RobotomyRequestForm();

	std::string getTarget() const;
	void		execute(Bureaucrat const &executor) const;
};


#endif
