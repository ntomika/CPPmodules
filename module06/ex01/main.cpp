#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t intPtr;

	intPtr = reinterpret_cast<uintptr_t>(ptr);
	return intPtr;
}

Data *deserialize(uintptr_t ptr)
{
	Data *otherPtr;

	otherPtr = reinterpret_cast<Data *>(ptr);
	return otherPtr;
}

int main()
{
	Data* first = new Data();
	Data* second;

	first->name = "This is first name";

	std::cout << "Struct address:	" << first << std::endl;
	std::cout << "Struct name:	" << first->name << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "serialization:"<< std::endl;
	uintptr_t ptr = serialize(first);
	std::cout << "value after serialize: " << ptr << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "deserialization:"<< std::endl;
	second = deserialize(ptr);
	std::cout << "Struct address:	" << second << std::endl;
	std::cout << "Struct name:	" << second->name << std::endl;

	delete first;

	return 0;
}