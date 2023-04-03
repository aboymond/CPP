
#include "Form.hpp"


AForm::AForm() : _re_sign(150), _re_exe(150) {}

AForm::AForm(std::string name, int re_sign, int re_exe) : _name(name), _sign(false), _re_sign(re_sign), _re_exe(re_exe){

	if (_re_sign < 1 || _re_exe < 1)
		throw AForm::GradeTooHighException();
	if (_re_sign > 150 || _re_exe > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(AForm const &cpy) : _re_sign(cpy._re_sign), _re_exe(cpy._re_exe) {
	*this = cpy;
}

AForm &AForm::operator=(AForm const &rhs) {
	if (this != &rhs){
//		this->_name = rhs._name;
		_sign = rhs._sign;
//		_re_sign = rhs._re_sign;
//		_re_exe = rhs._re_exe;
	}
	return (*this);
}

const char	*AForm::GradeTooHighException::what() const throw(){
	return ("\33[31mGrade too high !\33[0m");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("\33[31mGrade too low !\33[0m");
}

int AForm::getGradeRe_sign() const{
	return (this->_re_sign);
}

int AForm::getGradeRe_exe() const{
	return (this->_re_exe);
}

std::string AForm::getName() const{
	return (this->_name);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->getGradeRe_sign())
		throw GradeTooHighException();
	else{
		if (this->_sign != true)
			_sign = true;
	}
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs ) {
	o << "📄 The\33[34m " << rhs.getName() << "\33[0m grade \33[33m" << rhs.getGradeRe_sign() << "\33[0m is ready to be signed " << "\33[0m";
	return (o);
}
