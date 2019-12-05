#include <iostream>
#include <array>

class Abstract
{
public:
	Abstract()
	{
		std::cout << "Abstract()" << std::endl;
	}

	virtual ~Abstract()
	{
		std::cout << "~Abstract()" << std::endl;
	}
};

class Foo : public Abstract
{
public:
	Foo()
	{
		std::cout << "Foo()" << std::endl;
	}
	~Foo()
	{
		std::cout << "~Foo()" << std::endl;
	}
private:
};

class Bar : public Abstract
{
public:
	Bar()
	{
		std::cout << "Bar()" << std::endl;
	}
	~Bar()
	{
		std::cout << "~Bar()" << std::endl;
	}
private:
};

int main()
{

	{ // 1. 정상적인 소멸자 호출로 메모리 릭이 발생하지 않는다.
		Foo* p = new Foo();
		delete p;
	}

	std::cout << std::endl;

	{ // 2. ~Foo(); 가 호출되지는 않지만 메모리 릭은 발생하지 않는다.
		Abstract* p = new Foo();
		delete p;
	}

	std::cout << std::endl;

	{ // 3. 정상적인 소멸자 호출로 메모리 릭이 발생하지 않는다.
		Bar* p = new Bar();
		delete p;
	}

	std::cout << std::endl;

	{ // 4. ~Bar(); 가 호출되지도 않고, 메모리릭도 발생!
		Abstract* p = new Bar();
		delete p;
	}

	std::cout << std::endl;

	return 0;
}
