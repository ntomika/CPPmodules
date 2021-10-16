#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate()
{
	int random;

	std::srand(std::time(0));
	random = std::rand() % 100;
	if(random >= 0 && random <= 33)
		return (new A());
	else if(random > 33 && random <= 66)
		return (new B());
	else
		return (new C());
}

void identify(Base* p){
	if(dynamic_cast<A*>(p))
		std::cout << "A (pointer)" << std::endl;
	if(dynamic_cast<B*>(p))
		std::cout << "B (pointer)" << std::endl;
	if(dynamic_cast<C*>(p))
		std::cout << "C (pointer)" << std::endl;
}

void identify(Base& p){
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A (ref)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B (ref)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C (ref)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
	return 0;
}
