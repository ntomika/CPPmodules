#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate()
{
	int random;

	srand(static_cast<unsigned int>(time(0)));
	random = rand() % 3;
	if(random == 0)
		return (new A());
	if(random == 1)
		return (new B());
	else
		return (new C());
}

void identify_ptr(Base* p){
	if(dynamic_cast<A*>(p))
		std::cout << "A\n";
	if(dynamic_cast<B*>(p))
		std::cout << "B\n";
	if(dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify_ref(Base& p){
	try{
		A a = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		B b = dynamic_cast<B&>(p);
		std::cout << "B\n";
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		C c = dynamic_cast<C&>(p);
		std::cout << "C\n";
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	Base *base = generate();
	identify_ptr(base);
	identify_ref(*base);

	delete base;
	return 0;
}
