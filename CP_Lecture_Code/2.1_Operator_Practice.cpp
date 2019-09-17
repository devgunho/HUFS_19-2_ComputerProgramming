#include <iostream>

using namespace std;

int main()
{
	int input1 = 0, input2 = 0;
	cin >> input1 >> input2;

	cout << "두 값의 AND연산 결과 : " << (input1 & input2) << endl;
	cout << "두 값의 OR연산 결과 : " << (input1 | input2) << endl;
	cout << "두 값의 XOR연산 결과 : " << (input1 ^ input2) << endl;

	return 0;
}

