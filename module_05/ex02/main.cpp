#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){

	try
	{
		PresidentialPardonForm test = PresidentialPardonForm("test");
//		AForm form("B53", 12, 150);
		Bureaucrat quent("quent", 6);
		while (quent.getGrade() > 5){
			quent.incrementation();
			std::cout << quent << std::endl;
			std::cout << test << std::endl;
			quent.signForm(test);
		}
//
//		Bureaucrat alex("alex", 106);
//		while (alex.getGrade() < 113){
//			alex.decrementation();
//			std::cout << alex << std::endl;
//		}
//
////		Bureaucrat gaby("gaby", 151);
////		std::cout << gaby << std::endl;
//		AForm form1("H235", 148, 12);
//		Bureaucrat lehib("lehib", 143);
//		while (lehib.getGrade() < 150) {
//			lehib.decrementation();
//			std::cout << lehib << std::endl;
//			std::cout << form1 << std::endl;
//			lehib.signForm(form1);
//		}

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;

	}
}
