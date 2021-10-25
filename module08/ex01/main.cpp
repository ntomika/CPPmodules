#include "span.hpp"

void	testSbj1()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testSbj2()
{
	Span sp = Span(5);
	std::vector<int> tmp(5);

	for(int i = 0; i < 5; ++i)
		tmp[i] = i;

	sp.addNumber(tmp.begin(), tmp.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testException()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testShortArr()
{
	Span sp = Span(1);

	try
	{
		sp.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testLongArr()
{
	Span sp = Span(10000);

	std::srand(time(0));
	for(int i = 0; i < 10000; ++i)
	{
		sp.addNumber(std::rand());
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main()
{
	std::cout << "\x1b[32;1m	[testMain_1]\x1b[0m" << std::endl;
	testSbj1();

	std::cout << "\x1b[32;1m	[testMain_2]\x1b[0m" << std::endl;
	testSbj2();

	std::cout << "\x1b[32;1m	[testException]\x1b[0m" << std::endl;
	testException();

	std::cout << "\x1b[32;1m	[testShortArr]\x1b[0m" << std::endl;
	testShortArr();

	std::cout << "\x1b[32;1m	[testLongArr]\x1b[0m" << std::endl;
	testLongArr();


	return 0;
}