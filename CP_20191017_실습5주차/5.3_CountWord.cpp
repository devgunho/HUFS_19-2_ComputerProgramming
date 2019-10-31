#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

class CountString {
private:
	char* s;
	int size;
public:
	CountString(string c) {
		size = c.length() + 1;
		s = new char[size];
		strcpy(s, c.c_str());
	}
	~CountString() {
		delete[] s;
	}
	int getWordCnt()
	{
		int count = 0;
		char* word = strtok(s, " ");
		while (word != NULL) {
			count++;
			word = strtok(NULL, " ");
		}
		return count;
	}
};

int main() {
	string input;
	getline(cin,input);
	CountString str(input);
	cout << str.getWordCnt() << endl;
	return 0;
}