#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "",str2 = "";
	cin >> str;
	
	for (int i = str.length() - 1; i >= 0; i--)
		str2 += str[i];

	if (str == str2) cout << "YES!" << endl;
	else cout << "NO." << endl;

	return 0;
}

