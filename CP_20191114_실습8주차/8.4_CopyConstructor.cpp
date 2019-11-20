#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char myname[], int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);  // strcpy(name, myname) 보다 안전한 함수
		age = myage;
	}
	Person(const Person& copy) : age(copy.age)
	{
		int len = strlen(copy.name) + 1;
		name = new char[len];
		strcpy_s(name, len, copy.name);  // strcpy(name, copy.name) 보다 안전한 함수
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	Person man1("hong", 20);
	Person man2 = man1;  // 복사 생성자 호출 (깊은 복사 실행), Person man2(man1)과 같은 표현
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}