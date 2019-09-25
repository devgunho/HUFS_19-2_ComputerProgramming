#include <iostream>

int main()
{
	// the initializer may be a braced-init-list 
	for (auto& n : { 0, 1, 2, 3, 4, 5 })
		std::cout << n << ' ';
	std::cout << '\n';

	// Iterating over array 
	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (auto& n : a)
		std::cout << n << ' ';
	std::cout << '\n';

	// Just running a loop for every array 
	// element 
	for (auto& n : a)
		std::cout << "In loop" << ' ';
	std::cout << '\n';

	// Printing string characters 
	std::string str = "Geeks";
	for (auto& c : str)
		std::cout << c << ' ';
	std::cout << '\n';
	return 0;
}

