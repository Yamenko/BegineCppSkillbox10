#include <iostream>
#include <string>
#include <time.h>

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
	std::cout << "Test 15.4: " << std::endl;
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


	// test 16.5
	std::cout << "Test 16.5: " << std::endl;
	const int m = 5;
	int arr[m][m];
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < m; ++j){
			arr[i][j] = i + j;
		}
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	int index = buf.tm_mday % m;
	int sum = 0;

	for (int i = 0; i < m; ++i){
		sum += arr[index][i];
	}
	std::cout << "data: " << buf.tm_mday << std::endl;
	std::cout << "arr size: " << m << std::endl;
	std::cout << "Index row: " << index << std::endl;
	std::cout << "SUM: " << sum << std::endl;

	std::cout << "-------------------------" << std::endl << std::endl;

	// test 17.5
	std::cout << "Test 17.5: " << std::endl;
	Vector v1;
	v1.ShowVector();

	Vector v2(2.0, 3.0, 4.0);
	v2.ShowVector();

	std::cout << "-------------------------" << std::endl << std::endl;
	return 0;
}