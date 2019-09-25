#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int index = s.find("computer");
	for (int i = 0; i < s.length(); i++)	// 문자열 s의 길이까지 Loop
	{
		if (i == index)
			i += 7;	// computer가 8글자이기 때문에...
		else
			cout << s[i];
	}
	return 0;
}

