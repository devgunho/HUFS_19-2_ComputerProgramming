#include <iostream>
using namespace std;
class SquCirDiff {
private:
	double length; // 반지름
public:
	void setLength(double val)
	{
		length = val;
	}

	double getSquRound()
	{
		return 8 * length;
	}

	double getCirRound()
	{
		return 2 * 3.14 * length;
	}

	double getSquCirAreaDiff() {
		return (4 - 3.14) * length * length;
	}

	double getCirTriAreaDiff() {
		return (3.14 - 2) * length * length;
	}
};

int main() {
	SquCirDiff a;
	double len;

	cin >> len;
	a.setLength(len);
	cout << "정사각형의 둘레의 길이는 : " << a.getSquRound() << endl;
	cout << "원의 둘레의 길이는 : " << a.getCirRound() << endl;
	cout << "두 도형의 넓이의 차이는 : " << a.getSquCirAreaDiff() << endl;
	cout << "원과 삼각형의 넓이의 차이는 : " << a.getCirTriAreaDiff() << endl;
	return 0;
}