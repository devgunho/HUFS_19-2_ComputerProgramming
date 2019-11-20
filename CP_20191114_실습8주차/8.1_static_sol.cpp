#include <iostream>

void incrementAndPrint()
{
	static int s_value = 1; // 'static' 키워드를 사용한 '정적 생명 주기', 이 줄은 한번만 실행된다.
	++s_value;
	std::cout << s_value << '\n';
} // s_value는 여기서 소멸되지 않지만, 접근할 수 없게된다.

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

	return 0;
}

/*
위 프로그램에서 s_value는 static으로 선언되었기 때문에 s_value는 한 번만 생성되고 1로 초기화된다.
스코프(= 범위)를 벗어나면 소멸하지 않는다.
incrementAndPrint() 함수가 호출될 때마다 s_value 값은 이전에 남겨둔 값이다.
g_를 사용하여 전역 변수에 접두어를 지정하는 것처럼 s_를 사용하여 정적 변수에 접두사를 지정하는 것이 일반적이다.
*/