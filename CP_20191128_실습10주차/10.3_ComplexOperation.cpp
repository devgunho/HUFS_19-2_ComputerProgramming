#include <iostream>

using namespace std;

class Complex {
private:
	double re, im;
public:
	friend Complex add(Complex, Complex);
	Complex(double r = 0.0, double i = 0.0) { re = r; im = i; }
	void print()
	{
		cout << re << " + " << im << "i" << endl;
	}
	Complex operator+(const Complex& c2);
	Complex operator-(const Complex& c2);
};

Complex add(Complex c1, Complex c2)
{
	return Complex(c1.re + c2.re, c1.im + c2.im);
}

Complex Complex::operator+(const Complex& c2)
{
	Complex c;
	c.re = this->re + c2.re;
	c.im = this->im + c2.im;
	return c;
}

Complex Complex::operator-(const Complex& c2)
{
	Complex c;
	c.re = this->re - c2.re;
	c.im = this->im - c2.im;
	return c;
}

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Complex c1(a, b), c2(c, d);
	Complex c3 = add(c1, c2);	// call friend Complex add
	c3.print();
	Complex c4 = c1 + c2;	// plus operation overloading
	c4.print();
	Complex c5 = c1 - c2;	// minus operation overloading
	c5.print();

	return 0;
}
