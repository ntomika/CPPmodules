#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "->original string addr:	" << &str << std::endl;
	std::cout << "->stringPTR addr:	" << stringPTR << std::endl;
	std::cout << "->stringREF addr:	" << &stringREF << std::endl << std::endl;

	std::cout << "*string using the pointer:	" << *stringPTR << std::endl;
	std::cout << "&string using the reference:	" << stringREF << std::endl;

	return 0;
}