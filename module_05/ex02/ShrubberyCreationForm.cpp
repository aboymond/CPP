
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery creation form", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery creation form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) {
    *this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    if (this != &rhs) {
		_target = rhs._target;
		AForm::operator=(rhs);
	}
	return(*this);
}

std::string 			ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (getSign()){
		if (executor.getGrade() <= getGradeRe_exe()){
			std::string file = _target + "_shrubbery";
			std::ofstream output(file);
			output << "     .^.\n"
					  "    .0.'.\n"
					  "   .'.'0'.\n"
					  "  0'.0.'.0.\n"
					  " .'.0.'.'.0.\n"
					  ".0.'.0.'.0.'.\n"
					  "   [_____]\n" << std::endl;
			std::cout << "\033[33m" << _target << "\033[0m" << ": Shrubbery has been create" << std::endl;
		}
		else{
			throw AForm::GradeTooLowException();
		}
	}
	else{
		throw AForm::ExecutorException();
	}
}