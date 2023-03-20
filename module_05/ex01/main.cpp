#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){

	try
	{
		Bureaucrat quent("quent", 12);
		while (quent.getGrade() > 5){
			quent.incrementation();
			std::cout << quent << std::endl;
		}

		Bureaucrat alex("alex", 106);
		while (alex.getGrade() < 113){
			alex.decrementation();
			std::cout << alex << std::endl;
		}

//		Bureaucrat gaby("gaby", 151);
//		std::cout << gaby << std::endl;

		Bureaucrat lehib("lehib", 143);
		while (lehib.getGrade() < 153) {
			lehib.decrementation();
			std::cout << lehib << std::endl;
		}

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;

	}
}