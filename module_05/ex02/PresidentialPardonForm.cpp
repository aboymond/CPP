
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()  : AForm("Presidential Pardon Form", 25, 5), _target("Default") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) {
    *this = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    if (this != &rhs) {
		_target = rhs._target;
		AForm::operator=(rhs);
	}
	return (*this);
}

std::string 			PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (getSign()){
		if (executor.getGrade() <= getGradeRe_exe()){
			std::cout << "\033[33m" << _target << "\033[0m" << ": was forgiven by Zaphod Beeblebrox" << std::endl;
		}
		else{
			throw AForm::GradeTooLowException();
		}
	}
	else{
		throw AForm::ExecutorException();
	}
}
