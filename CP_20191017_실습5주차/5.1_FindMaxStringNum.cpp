#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 0;
	string str;

	cin >> num;
	cin >> str;

	str.c_str();

	unsigned long long int sum = 1;
	unsigned long long int max = 0;

	for (int i = 0; i <= str.size() - num; i++)
	{
		for (int j = i; j < i + num; j++)
		{
			sum *= (unsigned long long)(str[j] - 48);
		}

		if (max < sum)
		{
			max = sum;
			//for (int k = i; k < i + num; k++)
			//	cout << str[k];
			//cout << '\n' << max << endl;
		}
		sum = 1;
	}
	cout << max << endl;

	return 0;
}