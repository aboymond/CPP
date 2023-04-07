
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy request form", 72, 45), _target("Default") {}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy request form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy.getName(), cpy.getGradeRe_sign(), cpy.getGradeRe_exe()) {
    *this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    if (this != &rhs) {
		_target = rhs._target;
		AForm::operator=(rhs);
	}
	return (*this);
}

std::string 			RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (getSign()){
		if (executor.getGrade() <= getGradeRe_exe()){
			std::cout << "⭕️ \33[34m" << executor.getName() << "\033[0m execute " << _target << std::endl;

			std::cout << "\033[32mBBBbbbrrrrrrrrrriiiiiiiiinnnnnnnnggggGGG Poo po po poO PO \033[0m" << std::endl;
			int val = rand();
			if (val % 2){
				std::cout << "\033[33m" << _target << "\033[0m" << ": has been robotomized successfully" << std::endl;
			}
			else{
				std::cout << "\033[33m" << _target << "\033[0m" << ": hasn't been robotomized" << std::endl;
			}
		}
		else{
			throw AForm::GradeTooLowException();
		}
	}
	else{
		throw AForm::ExecutorException();
	}
}