#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main(){
	Data a;
	Data *b;
	Data *c;

	b = deserialize(serialize(&a));
	c = deserialize(serialize(b));
	std::cout << "a = " << &a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	return(0);
}