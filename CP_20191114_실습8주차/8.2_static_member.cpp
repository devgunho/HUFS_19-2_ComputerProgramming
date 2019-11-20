#include <iostream>

using namespace std;

class Led {
public:
	Led(bool onoff);
	~Led();
	void turnOn();
	void turnOff();
	static int iCount; // 정적 멤버 변수
	//static int iCount = 0; // 오류 발생
private:
	bool light;
};

int Led::iCount = 0;
// 클래스 외부에서 전역 변수처럼 초기화시켜야 한다.

Led::Led(bool onoff) { //생성자
	light = onoff;
	iCount++; // 인스턴스 생성 시 하나 증가
	cout << "LED Count : " << iCount << endl;
}

Led::~Led() { //소멸자
	iCount--; // 인스턴스 소멸 시 하나 감소
	cout << "LED Count : " << iCount << endl;
}

int main()
{
	Led led1(true);
	Led led2(true);
	Led led3(true);
	Led led4(false);
	Led led5(false);

	return 0;
}

