
#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"


class Intern {
private:
	std::string _formName;
	AForm* president(std::string target);
	AForm* robot(std::string target);
	AForm* shrubb(std::string target);
protected:

public:
	Intern();
	Intern(Intern const &cpy);
	Intern &operator=(Intern const &rhs);
	~Intern();

	AForm* makeForm(std::string formName, std::string target);
};


#endif
