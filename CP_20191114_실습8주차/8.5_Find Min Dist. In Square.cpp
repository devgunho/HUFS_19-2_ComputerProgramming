#include <iostream>
#include <algorithm>
using namespace std;

int x, y; //현 위치
int w, h; //오른쪽 위 꼭지점

int minStepToBoundary(void)
{
	int step = 0;

	//우선 위 아래 확인
	step = min(w - x, x);

	//왼쪽 오른쪽 확인
	step = min(step, min(h - y, y));

	return step;
}


int main(void)
{
	cin >> x >> y >> w >> h;

	cout << minStepToBoundary() << endl;
	return 0;
}