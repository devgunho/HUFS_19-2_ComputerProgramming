#include <iostream>

void incrementAndPrint()
{
	int value = 1; // 기본적으로 '자동 생명 주기'
	++value;
	std::cout << value << '\n';
} // value는 여기서 소멸된다.

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

	return 0;
}

