#include <iostream>

using namespace std;

int main()
{
	int T = 1;
	int F = 0;
	int result=0;

	result = (T) || (++F);

	cout << result << endl;
	cout << F << endl;

	return 0;
}

