#include <iostream>
#include <string>

#include "helper.h"

int main()
{
	// test 13.4
	std::cout << SqrSum(10, 15);


	// test 14.4
	std::string name("It is test string.");

	std::cout << "String: " << name << std::endl;
	std::cout << "Length: " << name.size() << std::endl;
	std::cout << "First char: " << *name.begin() << std::endl;
	std::cout << "Last  char: " << *(name.end() - 1) << std::endl;

	return 0;
}