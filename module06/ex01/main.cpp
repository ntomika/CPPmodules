#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t intPtr;

	intPtr = reinterpret_cast<uintptr_t>(ptr);
	return intPtr;
}

Data *deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main()
{
	Data* first = new Data();
	Data* second;

	first->name = "Bob";

	std::cout << "Struct address:	" << first << std::endl;
	std::cout << "Struct name:	" << first->name << std::endl;
	std::cout << "- - - - - - - - - -" << std::endl;

	std::cout << "serialization:"<< std::endl;
	uintptr_t raw = serialize(first);
	std::cout << "After serialize: " << raw << std::endl;
	std::cout << "- - - - - - - - - -" << std::endl;

	std::cout << "deserialization:"<< std::endl;
	second = deserialize(raw);
	std::cout << "Struct address:	" << second << std::endl;
	std::cout << "Struct name:	" << second->name << std::endl;


	delete first;

	return 0;
}