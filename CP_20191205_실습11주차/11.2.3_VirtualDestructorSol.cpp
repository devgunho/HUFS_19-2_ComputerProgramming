#include <iostream>
#include <Windows.h>	// Sleep();	// 구름제출시 지워주세요.
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
	std::array<char, 1024 * 1024> _data;	// 구름 제출시 지워주세요.
};

class Bar : public Abstract
{
public:
	Bar()
		: _data(std::make_unique<char[]>(1024 * 1024))	// 구름 제출시 지워주세요.
	{
		std::cout << "Bar()" << std::endl;
	}
	~Bar()
	{
		std::cout << "~Bar()" << std::endl;
	}
private:
	std::unique_ptr<char[]> _data;	// 구름 제출시 지워주세요.
};

int main()
{
	::Sleep(1000);

	{ // 1. 정상적인 소멸자 호출로 메모리 릭이 발생하지 않는다.
		Foo* p = new Foo();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	{ // 2. ~Foo(); 가 호출되지는 않지만 메모리 릭은 발생하지 않는다.
		Abstract* p = new Foo();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	{ // 3. 정상적인 소멸자 호출로 메모리 릭이 발생하지 않는다.
		Bar* p = new Bar();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	{ // 4. ~Bar(); 가 호출되지도 않고, 메모리릭도 발생!
		Abstract* p = new Bar();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	return 0;
}
