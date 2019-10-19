#include <iostream>
#define EXIT 5

using namespace std;

enum Calc { ADD = 1, SUB, MUL, DIV };

class Calculator
{
	double val1, val2;
public:
	void SetCalculator(double v1, double v2)
	{
		val1 = v1, val2 = v2;
	}
	double GetAdd()
	{
		return (val1 + val2);
	}
	double GetSub()
	{
		return (val1 - val2);
	}
	double GetMul()
	{
		return (val1 * val2);
	}
	double GetDiv()
	{
		return (val1 / val2);
	}
};

int main()
{
	Calculator c;
	int choice;
	double d1, d2;

	//cout << "1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À 5. Á¾·á : ";
	cin >> choice;

	if (choice != EXIT)
	{
		//cout << endl << "µÎ ¼ö ÀÔ·Â : ";
		cin >> d1 >> d2;
		c.SetCalculator(d1, d2);
	}

	switch (choice)
	{
	case ADD: cout << d1 << " + " << d2 << " = " << c.GetAdd() << endl; break;
	case SUB: cout << d1 << " - " << d2 << " = " << c.GetSub() << endl; break;
	case MUL: cout << d1 << " * " << d2 << " = " << c.GetMul() << endl; break;
	case DIV: printf("%.f / %.f = %.2f", d1, d2, c.GetDiv()); break;
	case EXIT: cout << "EXIT!" << endl;
	}

	return 0;
}