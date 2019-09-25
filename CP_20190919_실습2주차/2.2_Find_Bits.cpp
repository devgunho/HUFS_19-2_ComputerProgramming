#include <iostream>

using namespace std;

/*
int main()
{
	int input = 0;
	cin >> input;	// 0에서 15까지의 정수만 입력

	if (input & 1)    // & 연산자로 0001 비트가 켜져 있는지 확인
		printf("0001 is ON!\n");
	else
		printf("0001 is OFF\n");

	if (input & 2)    // & 연산자로 0010 비트가 켜져 있는지 확인
		printf("0010 is ON!\n");
	else
		printf("0010 is OFF\n");

	if (input & 4)    // & 연산자로 0100 비트가 켜져 있는지 확인
		printf("0100 is ON!\n");
	else
		printf("0100 is OFF\n");

	if (input & 8)    // & 연산자로 1000 비트가 켜져 있는지 확인
		printf("1000 is ON!\n");
	else
		printf("1000 is OFF\n");

	return 0;
}
*/

int main() {	// 3항 연산자로 줄이면?
	int input = 0;
	cin >> input;	// 0에서 15까지의 정수만 입력

	cout << "0001 is " << ((input & 1) ? "ON!" : "OFF") << endl;
	cout << "0010 is " << ((input & 2) ? "ON!" : "OFF") << endl;
	cout << "0100 is " << ((input & 4) ? "ON!" : "OFF") << endl;
	cout << "1000 is " << ((input & 8) ? "ON!" : "OFF") << endl;
	return 0;
}

