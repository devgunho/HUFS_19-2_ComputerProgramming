#include<iostream>

using namespace std;

int gcd(int a, int b) {
	int r;
	while (a % b != 0) {
		r = a % b;
		a = b;
		b = r;
	}

	return b;
}

class Fraction {
private:
	int numerator;	// 분자
	int denominator;	// 분모
public:
	void SetVal(int num, int den)
	{
		numerator = num;
		denominator = den;
	}
	Fraction GetAdd(Fraction val1, Fraction val2) {
		Fraction r;
		r.denominator = val1.denominator * val2.denominator;
		r.numerator = (val1.numerator * val2.denominator) + (val2.numerator * val1.denominator);
		r = reduce(r);
		return r;
	}

	Fraction GetSub(Fraction val1, Fraction val2) {
		Fraction r;
		r.denominator = val1.denominator * val2.denominator;
		r.numerator = (val1.numerator * val2.denominator) - (val2.numerator * val1.denominator);
		r = reduce(r);
		return r;
	}

	Fraction GetMul(Fraction val1, Fraction val2) {
		Fraction r;
		r.denominator = val1.denominator * val2.denominator;
		r.numerator = val1.numerator * val2.numerator;
		r = reduce(r);
		return r;
	}

	Fraction GetDiv(Fraction val1, Fraction val2) {
		Fraction r;
		r.denominator = val1.denominator * val2.numerator;
		r.numerator = val1.numerator * val2.denominator;
		r = reduce(r);
		return r;
	}

	Fraction reduce(struct Fraction r) { // 분수 r을 기약분수 형태로 반환
		int gcdNumDen;
		if (r.numerator == 0 || r.denominator == 0)
			return r;

		gcdNumDen = gcd(r.numerator, r.denominator);
		r.numerator = r.numerator / gcdNumDen;
		r.denominator = r.denominator / gcdNumDen;
		return r;
	}

	void PrintFraction(Fraction r)
	{
		cout << r.numerator << " / " << r.denominator << endl;
	}
};

int main() {
	Fraction value1, value2;
	int a, b, c, d;
	//cout << "두 분수를 입력 : ";
	cin >> a >> b >> c >> d;
	value1.SetVal(a, b);
	value2.SetVal(c, d);

	Fraction result;
	result=result.GetAdd(value1, value2);
	result.PrintFraction(result);
	result=result.GetSub(value1, value2);
	result.PrintFraction(result);
	result=result.GetMul(value1, value2);
	result.PrintFraction(result);
	result=result.GetDiv(value1, value2);
	result.PrintFraction(result);

	return 0;
}