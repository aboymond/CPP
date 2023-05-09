#include "Base.hpp"

Base * generate(void){
	srand((unsigned) time(NULL));
	int random = rand();
	if (random % 3 == 1){
		Base* base = new A;
		return (base);
	}
	else if (random % 3 == 2){
		Base* base = new B;
		return (base);
	}
	else{
		Base* base = new C;
		return (base);
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A*" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B*" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C*" << std::endl;
	else
		return;
}

void identify(Base& p){
	A *a;
	B *b;
	C *c;

	try{
		a = &dynamic_cast<A&>(p);
			std::cout << "A&" << std::endl;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Conversion is NOT Ok: " << bc.what() << std::endl;
	}
	try{
		b = &dynamic_cast<B&>(p);
			std::cout << "B&" << std::endl;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Conversion is NOT Ok: " << bc.what() << std::endl;
	}
	try{
		c = &dynamic_cast<C&>(p);
			std::cout << "C&" << std::endl;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Conversion is NOT Ok: " << bc.what() << std::endl;
	}
}

int main(){
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;

	std::cout << "\033[4;34m\ta: \033[0m" << std::endl;
	identify(a);
	std::cout << "\033[4;33m\tb: \033[0m" << std::endl;
	identify(b);
	std::cout << "\033[4;32m\tc: \033[0m" << std::endl;
	identify(c);
	std::cout << std::endl;
	std::cout << "\033[4;34m\t*a: \033[0m" << std::endl;
	identify(*a);
	std::cout << "\033[4;33m\t*b: \033[0m" << std::endl;
	identify(*b);
	std::cout << "\033[4;32m\t*c: \033[0m" << std::endl;
	identify(*c);
	std::cout << std::endl;
	std::cout << "\033[4;31m\tRandom: \033[0m" << std::endl;
	identify(generate());

	return (0);
}