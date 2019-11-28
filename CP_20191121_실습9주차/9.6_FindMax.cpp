#include <iostream>

using namespace std;

class max {
	int value;
public:
	max() { value = 0; }

	max& operator[](int num) {
		(num > this->value) ? this->value = num : this->value=this->value;
		return *this;
	}

	double operator() () {
		return value;
	}
};

void main() {
	int d1, d2, d3, d4, d5, d6;
	cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
	max m;
	m[d1][d2][d3][d4][d5][d6];
	std::cout << m() << std::endl;
}
