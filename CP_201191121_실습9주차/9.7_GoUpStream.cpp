#include <iostream>

using namespace std;

int main() {

	long long a, b, v;
	cin >> a >> b >> v;

	cout << (v - b - 1) / (a - b) + 1 << endl;

	return 0;
}

// 하루에 a-b 씩 v 만큼 이동
// 목표지점 도착에는 -b 생략
// 결국 v-b 만큼 이동
// a-b 로 나눠떨어지지 않는 경우를 위해 -1과 +1 연산 