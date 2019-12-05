#include <iostream>

using namespace std;

class super
{
public:
	virtual void print()
	{
		cout << "내가 조상이다." << endl;
	}
};

class parent : public super
{
public:
	virtual void print()
	{
		cout << "내가 부모다." << endl;
	}
};

class child : public parent
{
public:
	virtual void print()
	{
		cout << "내가 자식이다." << endl;
	}
};

int main()
{
	super* superPointer = new super;
	parent* parentPointer = new parent;
	child* childPointer = new child;

	superPointer->print();

	superPointer = parentPointer;
	superPointer->print();

	superPointer = childPointer;
	superPointer->print();

	return 0;
}

