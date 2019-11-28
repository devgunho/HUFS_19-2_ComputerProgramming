#include <iostream>

using namespace std;

class average {
	double sum;
	int count;
public:
	average() {
		sum = count = 0;
	}

	average& operator[](double num) {
		count++;
		sum += num;
		return *this;
	}

	double operator() () {
		return sum / count;
	}
};

void main() {
	double d1, d2, d3, d4, d5, d6;
	cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
	average avg;
	avg[d1][d2][d3][d4][d5][d6];	// [] 연산자를 통해 값을 누적한다.
	std::cout << avg() << std::endl;	// () 연산자를 통해 평균을 얻어낸다.
}
