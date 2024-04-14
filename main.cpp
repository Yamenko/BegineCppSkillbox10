#include <iostream>
#include <string>

#include "helper.h"

int main()
{
	// test 13.4
	std::cout << "Test13.4: " << std::endl;
	std::cout << SqrSum(10, 15) << std::endl;
	std::cout << "-------------------------" << std::endl << std::endl;

	// test 14.4
	std::string name("It is test string.");

	std::cout << "Test14.4: " << std::endl;
	std::cout << "String: " << name << std::endl;
	std::cout << "Length: " << name.size() << std::endl;
	std::cout << "First char: " << *name.begin() << std::endl;
	std::cout << "Last  char: " << *(name.end() - 1) << std::endl;
	std::cout << "-------------------------" << std::endl << std::endl;

	// test 15.4
	std::cout << "Test1.4: " << std::endl;
	const int n = 10;
	std::cout << "Local loop: ";
	for (int i = 0; i <= n; ++i)
	{
		if ((i % 2) == 0) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;

	std::cout << "Use function loop: ";
	PrintNumber(true, 6);
	std::cout << std::endl;

	std::cout << "Use moderate function loop: ";
	ModeratePrintNumber(false, 6);
	std::cout << std::endl;

	std::cout << "-------------------------" << std::endl << std::endl;


	return 0;
}