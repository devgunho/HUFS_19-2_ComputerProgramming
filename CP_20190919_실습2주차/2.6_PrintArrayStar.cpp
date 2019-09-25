#include <iostream>

using namespace std;

int main()
{
	char arr[25][25];
	int input = 0;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if (i == 0 || i == input - 1)
			{
				arr[i][j] = '*';
				if (i == 0 && j == input - 1)	// 오른쪽 상단 모서리
				{
					arr[i][j] = ' ';
				}
				if (i == input - 1 && j == input - 1)	// 오른쪽 하단 모서리
				{
					arr[i][j] = ' ';
				}
			}
			else if (j == input - 1)
				arr[i][j] = '*';
			else
			{
				arr[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
			cout << arr[i][j];
		cout << endl;
	}
	return 0;
}