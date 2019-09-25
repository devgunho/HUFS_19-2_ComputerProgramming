#include <iostream>

using namespace std;

int main()
{
	int array[21] = { 0, };
	int input = 0;
	int count = 0;
	while (true)
	{
		cin >> input;
		if (input == -1) break;
		else if ((input < 1) && (input > 20))
		{
			cout << "wrong input!" << endl;
			break;
		}
		else
		{
			array[input]++;
			count++;
		}
	}

	for (int i = 20; i > 0; i--)
	{
		for (int j = 0; j < array[i]; j++)
			cout << i << " ";
	}

	return 0;
}

