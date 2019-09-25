#include <iostream>

using namespace std;

int main()
{
	int array[21] = { 0, };
	double avg = 0;
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

	for (int i = 0; i < 21; i++)
		avg += (array[i] * i);

	printf("%0.2f\n", avg / count);
	return 0;
}

