#include <iostream>

using namespace std;
class YourClass {
	friend class YourOtherClass;  // Declare a friend class
public:
	YourClass() : topSecret(0) {}
	void printMember() { cout << topSecret << endl; }
private:
	int topSecret;
};

class YourOtherClass {
public:
	void change(YourClass& YC, int x)
	{
		YC.topSecret = x;
	}
};

int main() {
	YourClass yc1;
	YourOtherClass yoc1;
	int input;
	cin >> input;

	yc1.printMember();
	yoc1.change(yc1, input);
	yc1.printMember();
}