#include "mutantstack.hpp"

void	testMutant()
{
	MutantStack<int> mstack;

	mstack.push(5);		// 5
	mstack.push(17);	// 17 5

	std::cout << "Top element:	";
	std::cout << mstack.top() << std::endl;		// # вывод верхнего значения (17)
	mstack.pop();		// удаление верхнего элемента (17)

	std::cout << "Size:		";
	std::cout << mstack.size() << std::endl;	// # вывод длины

	mstack.push(3);		// 5 3
	mstack.push(5);		// 5 3 5
	mstack.push(737);	// 5 3 5 737

	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << "Iterator:	";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	MutantStack<int>::reverse_iterator rev_it = mstack.rbegin(); 
	MutantStack<int>::reverse_iterator rev_ite = mstack.rend();
	++rev_it;
	--rev_it;

	std::cout << "Reverce:	";
	while (rev_it != rev_ite)
	{
		std::cout << *rev_it << " ";
		++rev_it;
	}
	std::cout << std::endl;
}

void	testList()
{
	std::list<int> list;

	list.push_back(5);		// 5
	list.push_back(17);	// 17 5

	std::cout << "Top element:	";
	std::cout << list.back() << std::endl;		// # вывод верхнего значения (17)
	list.pop_front();		// удаление верхнего элемента (17)

	std::cout << "Size:		";
	std::cout << list.size() << std::endl;	// # вывод длины

	list.push_back(3);		// 5 3
	list.push_back(5);		// 5 3 5
	list.push_back(737);	// 5 3 5 737

	std::list<int>::iterator it = list.begin(); 
	std::list<int>::iterator ite = list.end();
	++it;
	--it;

	std::cout << "Iterator:	";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::list<int>::reverse_iterator rev_it = list.rbegin(); 
	std::list<int>::reverse_iterator rev_ite = list.rend();
	++rev_it;
	--rev_it;

	std::cout << "Reverce:	";
	while (rev_it != rev_ite)
	{
		std::cout << *rev_it << " ";
		++rev_it;
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << "\x1b[32;1m	[test Mutant]\x1b[0m" << std::endl;
	testMutant();

	std::cout << "\x1b[32;1m	[test List]\x1b[0m" << std::endl;
	testList();

	return 0;
}