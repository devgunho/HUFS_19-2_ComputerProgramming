#include <iostream>

using namespace std;

class A {
public:
	int a;
	A& B() {	// 리턴 타입이 자기자신의 참조자
		//return *this;
		// 자기 자신에 대한 참조자를 리턴
	}
};

int main()
{
	int aaa;
	cin >> aaa;

	A a;
	A& b = a.B();
	a.B().a = aaa;	// 이와 같은 문법이 가능
	cout << a.a << endl;
	return 0;
}