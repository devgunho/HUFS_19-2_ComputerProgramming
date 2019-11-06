#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;

	for (;;)
	{
		int input;
		cin >> input;
		if (input == -1) break;
		vec.push_back(input);
	}

	string str;
	cin >> str;

	if (str == "pop")
	{
		vec.pop_back();
		cout << vec.size() << " | " << vec[vec.size() - 1] << endl;
	}

	else if (str == "sort")
	{
		sort(vec.begin(), vec.end());
		cout << vec.size() << " | ";
		for (int a : vec)
		{
			cout << a << " ";
		}
		cout << endl;
	}

	else
		cout << "index : " << atoi(str.c_str()) << " | " << vec[atoi(str.c_str())] << endl;

	return 0;
}