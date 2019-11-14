#include <iostream>
#include <string.h>

using namespace std;

class A
{
private:
	char* s;
public:
	A()
	{
		cout << "Default constructor called!";
	}

	A(char* x)
	{
		cout << "char* Parametrized Constructor called!\n";
		int l = strlen(x), i;
		s = new char[l + 1];
		for (i = 0; i < l; i++)
			s[i] = x[i];
		s[l] = '\0';
	}

	A(string x)
	{
		cout << "string Parametrized Constructor called!\n";
		int l = x.length();
		s = new char[l + 1];
		for (int i = 0; i < l; i++)
			s[i] = x[i];
		s[l] = '\0';
	}

	A(const A& old)
	{
		// old is the old object being passed
		int l = strlen(old.s);
		s = new char[l + 1];   // dynamic allocation is used.
		for (int i = 0; i < l; i++)      // deep copy
			s[i] = old.s[i];
		s[l] = '\0';

		cout << "Copy Constructor called!\n";
	}

	void print()
	{
		cout << s << "\n";
	}

};

int main()
{
	// Sample Code to show default constructor
	string str;
	cin >> str;
	A obj(str); // making a object of class A   -- >Implicit
	A obj2(obj);  // Copy Constructor called old object 'obj' is passed
	obj2.print();

	return 0;
}