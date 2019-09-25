#include <iostream>

using namespace std;

void swapVal(int a, int b)
{
	cout << &a << " " << &b << endl;
	int temp = a;
	a = b;
	b = temp;
}

// 괄호 속의 & 는 "주소 연산자"가 아니라
// "참조 연산자"이고 C++에서만 가능
void swapRef(int& a, int& b) {
	cout << &a << " " << &b << endl;
	int temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int i = 300, j = 500;
	
	cout << "i = " << i << "j = " << j << endl;
	cout << &i << " " << &j << endl;

	swapVal(i, j);
	cout << "i = " << i << "j = " << j << endl;
	
	swapRef(i, j);	// 참조(Reference)에 의한 호출
	cout << "i = " << i << "j = " << j << endl;

	return 0;
}