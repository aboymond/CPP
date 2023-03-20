
#include "Form.hpp"


Form::Form() {}

Form::Form(std::string name, bool sign, const int re_sign, const int re_exe) : _name(name), _sign(sign), _re_sign(re_sign), _re_exe(re_exe){

	if (_re_sign < 1 || _re_exe < 1)
		throw Form::GradeTooHighException();
	if (_re_sign > 150 || _re_exe > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(Form const &cpy) {
	*this = cpy;
}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs){
		_name = rhs._name;
		_sign = rhs._sign;
		_re_sign = rhs._re_sign;
		_re_exe = rhs._re_exe;
	}
	return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("\33[31m\tGrade too high !\33[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("\33[31m\tGrade too low !\33[0m");
}

int Form::getGradeRe_sign() const{
	return (this->_re_sign);
}

int Form::getGradeRe_exe() const{
	return (this->_re_exe)
}

std::string Form::getName() const{
	return (this->_name);
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->getGradeRe_sign())
		throw GradeTooHighException();
	else{
		if (this->_sign != true)
			_sign = true;
	}
}

