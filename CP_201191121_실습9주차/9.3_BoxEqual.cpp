#include <iostream>

using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}
	double getVolume(void)
	{
		return length * width * height;
	}
	void print(void)
	{
		cout << "상자의 길이 : " << length << endl;
		cout << "상자의 너비 : " << width << endl;
		cout << "상자의 높이 : " << height << endl;
		cout << "상자의 부피 : " << this->getVolume() << endl;
	}
	Box operator+(const Box& box2);
	bool operator==(const Box& box2);
	bool operator!=(const Box& box2);
};


Box Box::operator+(const Box& box2)
{
	Box result;
	result.length = this->length + box2.length;
	result.width = this->width + box2.width;
	result.height = this->height + box2.height;
	return result;
}

bool Box::operator==(const Box& box2)
{
	return (length == box2.length &&
		width == box2.width &&
		height == box2.height);
}

bool Box::operator!=(const Box& box2)
{
	return !(*this == box2);
}

int main()
{
	int l, w, h;
	cin >> l >> w >> h;
	Box b1(l, w, h);

	int ll, ww, hh;
	cin >> ll >> ww >> hh;
	Box b2(ll, ww, hh);

	cout.setf(cout.boolalpha);
	cout << "Box1 == Box2 : " << (b1 == b2) << endl;
	cout << "Box1 != Box2 : " << (b1 != b2) << endl;

	return 0;
}