/* Range-based for loop in C++

Range - based for loop in C++ is added since C++ 11.
It executes a for loop over a range.Used as a more readable equivalent to the traditional for loop operating over a range of values,
such as all elements in a container.

Syntax :
for (range_declaration : range_expression)
	loop_statement

Parameters :
range_declaration:
	a declaration of a named variable, whose type is the
	type of the element of the sequence represented by
	range_expression, or a reference to that type.
	Often uses the auto specifier for automatic type deduction.

range_expression :
	any expression that represents a suitable sequence
	or a braced - init - list.

	loop_statement :
	any statement, typically a compound statement, which
	is the body of the loop.
*/

#include <iostream>
int main()
{
	// the initializer may be a braced-init-list 
	for (int n : {0, 1, 2, 3, 4, 5})
		std::cout << n << ' ';
	std::cout << '\n';

	// Iterating over array 
	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (int n : a)
		std::cout << n << ' ';
	std::cout << '\n';

	// Just running a loop for every array 
	// element 
	for (int n : a)
		std::cout << "In loop" << ' ';
	std::cout << '\n';

	// Printing string characters 
	std::string str = "Geeks";
	for (char c : str)
		std::cout << c << ' ';
	std::cout << '\n';
	return 0;
}