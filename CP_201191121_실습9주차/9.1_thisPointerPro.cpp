#include<iostream> 
using namespace std;

class Test
{
private:
	int x;
public:
	Test(int x = 0) { this->x = x; }
	void change(Test* t) { this = t; }
	void print() { cout << "x = " << x << endl; }
};

int main()	// main 수정 금지
{
	Test obj(5);
	Test* ptr = new Test(10);
	obj.change(ptr);
	obj.print();
	return 0;
}