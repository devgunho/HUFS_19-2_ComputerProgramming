#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const string& str1, const string& str2) {
	if (str1.size() == str2.size())
		return str1 < str2;

	return str1.size() < str2.size();
}

int main(void)
{
	vector<string> vec; // 벡터를 생성한다.
	string str;

	for (;;)
	{
		cin >> str;
		if (str == "END") break;
		vec.push_back(str);
	}

	sort(vec.begin(), vec.end(), compare);

	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;

	return 0;
}