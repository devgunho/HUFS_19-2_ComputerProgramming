#include <iostream>

int main()
{
	int x = 5;	// normal integer
	int& y = x;	// y is a reference to x
	int& z = y;	// z is also a reference to x

	////////////////////////////////////////////////////////

	int value = 5;	// normal integer
	int& ref = value;	// reference to variable value

	value = 6;	// value is now 6
	ref = 7;	// value is now 7

	std::cout << value << std::endl;	// prints 7
	++ref;
	std::cout << value << std::endl;	// prints 8

	std::cout << &x << std::endl;
	std::cout << &y << std::endl;
	std::cout << &z << std::endl;

	std::cout << &value << std::endl;
	std::cout << &ref << std::endl;

	return 0;
}

