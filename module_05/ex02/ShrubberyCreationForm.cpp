
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery creation form", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery creation form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm(cpy.getName(), cpy.getGradeRe_sign(), cpy.getGradeRe_exe()) {
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
			std::cout << "⭕️ \33[34m" << executor.getName() << "\033[0m execute " << _target << std::endl;

			std::string file = _target + "_shrubbery";
			std::ofstream output(file.c_str());
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